#include "../script_component.hpp"

params ["_vehicle", "_track"];

// Exit if a CD is not inserted or if the inserted CD is still being loaded
if (
    _vehicle getVariable [QGVAR(cd), ""] == ""
    || {_vehicle getVariable [QGVAR(loadingTime), 0] >= CBA_missionTime}
) exitWith {};

// If the track is given as a bool, switch to the next/previous track
if (_track isEqualType true) then {
    // Get the current CD's track count and the current track
    private _cd = _vehicle getVariable [QGVAR(cd), ""];
    private _trackCount = count (uiNamespace getVariable QGVAR(cds) get _cd);
    private _currentTrack = _vehicle getVariable [QGVAR(track), 0];

    // Update the track based on the play mode (in order or shuffled)
    private _playMode = _vehicle getVariable [QGVAR(playMode), PLAY_MODE_REPEAT];
    private _isRandom = _playMode == PLAY_MODE_RANDOM;
    private "_indices";

    // In random mode, the track is the actual index on the CD but switching is based
    // on a shuffled array of indices that can be refresh to re-shuffle the tracks
    // In this situation, find the current track in the indices array and use the
    // same logic to update the "fake track index"
    if (_isRandom) then {
        _indices = _vehicle getVariable QGVAR(indices);

        // Refresh the indices array if it does not already exist
        if (isNil "_indices") then {
            _indices = [];
            _vehicle setVariable [QGVAR(indices), _indices];

            for "_i" from 0 to (_trackCount - 1) do {
                _indices pushBack _i;
            };

            [_indices, true] call CBA_fnc_shuffle;
        };

        _currentTrack = _indices find _currentTrack;
    };

    // Switch to the next/previous track (loop around if needed)
    if (_track) then {
        _track = _currentTrack + 1;

        if (_track >= _trackCount) then {
            _track = 0;
        };
    } else {
        _track = _currentTrack - 1;

        if (_track < 0) then {
            _track = _trackCount - 1;
        };
    };

    // In random mode, need to translate the "fake track index" back to the
    // index of the track on the CD
    if (_isRandom) then {
        _track = _indices select _track;
    };
};

// Set the new track and reset the track position
_vehicle setVariable [QGVAR(track), _track, true];
_vehicle setVariable [QGVAR(offset), nil, true];

// Refresh sound sources on clients if the stereo is currently playing
// Also, set the start time to start the track from the beginning
if (_vehicle getVariable [QGVAR(playing), false]) then {
    _vehicle setVariable [QGVAR(startTime), CBA_missionTime, true];
    [QGVAR(play), _vehicle] call CBA_fnc_globalEvent;
};
