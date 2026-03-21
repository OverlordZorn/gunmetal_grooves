#include "../script_component.hpp"

params ["_vehicle"];

// Always delete the previous sound source before creating a new one
_vehicle call FUNC(stop);

// Get the sound class name to play from the current track's prefix
// and corresponding suffix for the current volume level
private _prefix = _vehicle call FUNC(getCurrentTrackInfo) select TRACK_PREFIX;
private _volume = _vehicle getVariable [QGVAR(volume), VOLUME_DEFAULT];
private _soundClass = format ["%1_VOL_%2", _prefix, _volume];

// Calculate the offset as the difference between when the sound was
// started on the server and the current time on the client
// Should allow for good enough synchronization between clients
private _startTime = _vehicle getVariable [QGVAR(startTime), CBA_missionTime];
private _offset = CBA_missionTime - _startTime;

// Play the sound from the vehicle
// Use 3D positional sound if the player is not in the given vehicle
// or a feature camera like Zeus is active
// Otherwise, use 2D sound because say3D is essentially inaudible from inside the vehicle
private _soundSource = if (
    _vehicle != vehicle ACE_player
    || {call CBA_fnc_getActiveFeatureCamera != ""}
) then {
    // Use distance to simulate bass boosted mode
    private _bassBoosted = _vehicle getVariable [QGVAR(bassBoosted), false];
    private _distance = [DISTANCE_NORMAL, DISTANCE_BASS_BOOSTED] select _bassBoosted;
    _vehicle say3D [_soundClass, _distance, 1, false, _offset]
} else {
    playSound [_soundClass, false, _offset]
};

_vehicle setVariable [QGVAR(soundSource), _soundSource];
