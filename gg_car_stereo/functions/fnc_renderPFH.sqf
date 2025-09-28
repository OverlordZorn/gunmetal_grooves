#include "script_component.hpp"

params ["_display", "_pfhID"];

// Exit if the display no longer exists
if (isNull _display) exitWith {
    [_pfhID] call CBA_fnc_removePerFrameHandler;
};

// Close the display if the player is not in the vehicle
private _vehicle = _display getVariable [QGVAR(vehicle), objNull];

if (vehicle ACE_player != _vehicle) exitWith {
    _display closeDisplay IDC_CANCEL;
};

// Render the body
[_display] call FUNC(renderBody);

// Render the screen elements based on the current mode
private _mode = _vehicle getVariable [QGVAR(mode), STEREO_MODE_OFF];

switch (_mode) do {
    case STEREO_MODE_OFF: {
        // Hide all screen controls when the stereo is off
        {
            private _ctrl = _display displayCtrl _x;
            _ctrl ctrlSetText "";
        } forEach IDCS_SCREEN_CONTROLS;

        // Display the current time as the main text (standby mode)
        private _timeString = dayTime call FUNC(getTimeString);
        [_display, _timeString, true] call FUNC(renderMainText);
    };

    case STEREO_MODE_CD_PLAYER: {
        // Display the current time in top-right corner
        private _timeString = dayTime call FUNC(getTimeString);
        private _ctrlScreenTime = _display displayCtrl IDC_SCREEN_TIME;
        _ctrlScreenTime ctrlSetText _timeString;

        // Display an play/pause icon to indicate if the stereo is currently playing or not
        private _playing = _vehicle getVariable [QGVAR(playing), false];
        private _playingIcon = [QPATHTOF(ui\icon_pause_ca.paa), QPATHTOF(ui\icon_play_ca.paa)] select _playing;
        private _ctrlScreenPlaying = _display displayCtrl IDC_SCREEN_PLAYING;
        _ctrlScreenPlaying ctrlSetText _playingIcon;

        // Hide the track position usually (only shown if a CD is inserted and loaded)
        private _ctrlScreenTrackTime = _display displayCtrl IDC_SCREEN_TRACK_TIME;
        _ctrlScreenTrackTime ctrlSetText "";

        // Display a loading spinner if the stereo is currently loading/reading a CD
        private _isLoading = _vehicle getVariable [QGVAR(loadingTime), 0] >= CBA_missionTime;

        if (_isLoading) then {
            private _spinner = ["|", "/", "-", "\"] select floor (CBA_missionTime % 1 * 4);
            private _loadingString = format ["LOADING...%1", _spinner];
            [_display, _loadingString] call FUNC(renderMainText);
        } else {
            // Display the currently selected track's name and position (plus length) if a CD is inserted and loaded
            private _hasCD = _vehicle getVariable [QGVAR(cd), ""] != "";

            if (_hasCD) then {
                _vehicle call FUNC(getCurrentTrackInfo) params ["", "_name", "_length"];

                [_display, _name] call FUNC(renderMainText);

                // Get the current track position as the difference between the start time
                // and the current time if the stereo is currently playing
                // Otherwise, the vehicle will have it directly stored as the offset from the start
                private _position = if (_playing) then {
                    private _startTime = _vehicle getVariable [QGVAR(startTime), CBA_missionTime];
                    0 max (CBA_missionTime - _startTime) min _length
                } else {
                    _vehicle getVariable [QGVAR(offset), 0]
                };

                private _trackTimeString = format [
                    "%1 / %2",
                    [_position, "M:SS"] call CBA_fnc_formatElapsedTime,
                    [_length, "M:SS"] call CBA_fnc_formatElapsedTime
                ];

                _ctrlScreenTrackTime ctrlSetText _trackTimeString;
            } else {
                // Otherwise, indicate that a CD is missing
                [_display, "NO CD"] call FUNC(renderMainText);
            };
        };

        // Display BASS beside the volume indicator if playback is currently bass boosted
        private _bassBoosted = _vehicle getVariable [QGVAR(bassBoosted), false];
        private _bassString = ["", "BASS"] select _bassBoosted;
        private _ctrlScreenBass = _display displayCtrl IDC_SCREEN_BASS;
        _ctrlScreenBass ctrlSetText _bassString;

        // Display the current volume level
        private _volume = _vehicle getVariable [QGVAR(volume), VOLUME_DEFAULT];
        private _volumeString = _volume call FUNC(getVolumeString);
        private _ctrlScreenVolume = _display displayCtrl IDC_SCREEN_VOLUME;
        _ctrlScreenVolume ctrlSetText _volumeString;

        // Display a short form of the current track play mode
        private _mode = _vehicle getVariable [QGVAR(playMode), PLAY_MODE_REPEAT];
        private _modeString = ["RPT", "RDM"] select _mode;
        private _ctrlScreenMode = _display displayCtrl IDC_SCREEN_MODE;
        _ctrlScreenMode ctrlSetText _modeString;
    };
};

// Render the insert CD controls if needed
private _showCDs = _display getVariable [QGVAR(showCDs), false];
private _alreadyInserted = _vehicle getVariable [QGVAR(cd), ""] != "";

if (_showCDs) then {
    // If a CD is already inserted, then stop showing available CDs
    if (_alreadyInserted) exitWith {
        _display setVariable [QGVAR(showCDs), false];

        private _ctrlCDGroup = _display displayCtrl IDC_CD_GROUP;
        _ctrlCDGroup ctrlShow false;
    };

    // Get the unique CDs currently in the player's inventory
    private _cachedCDs = keys (uiNamespace getVariable QGVAR(cds));
    private _uniqueCDs = ACE_player call ACEFUNC(common,uniqueItems) arrayIntersect _cachedCDs;
    private _hasCDs = _uniqueCDs isNotEqualTo [];

    // Show the CD list and enable the confirm button if the player has some CDs
    private _ctrlCDList = _display displayCtrl IDC_CD_LIST;
    _ctrlCDList ctrlShow _hasCDs;

    private _ctrlCDConfirm = _display displayCtrl IDC_CD_CONFIRM;
    _ctrlCDConfirm ctrlEnable _hasCDs;

    // Show the no CDs hint if the player has no CDs
    private _ctrlCDNone = _display displayCtrl IDC_CD_NONE;
    _ctrlCDNone ctrlShow !_hasCDs;

    // Add the available CDs to the list
    if (_hasCDs) then {
        lbClear _ctrlCDList;

        {
            private _index = _ctrlCDList lbAdd getText (configFile >> "CfgWeapons" >> _x >> "displayName");
            _ctrlCDList lbSetData [_index, _x];
        } forEach _uniqueCDs;

        // Ensure a CD is always selected
        if (lbCurSel _ctrlCDList == -1) then {
            _ctrlCDList lbSetCurSel 0;
        };
    };
};

// Show the insert CD controls toggle if CDs are not shown or one is not already inserted
private _ctrlInsert = _display displayCtrl IDC_INSERT;
_ctrlInsert ctrlShow !(_showCDs || {_alreadyInserted});
