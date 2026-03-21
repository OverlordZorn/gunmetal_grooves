#include "../script_component.hpp"

params ["_vehicle", "_volume"];

private _currentVolume = _vehicle getVariable [QGVAR(volume), VOLUME_DEFAULT];

// If the volume is given as a bool, increase/decrease the volume
if (_volume isEqualType true) then {
    private _change = [-VOLUME_STEP_SIZE, VOLUME_STEP_SIZE] select _volume;
    _volume = _currentVolume + _change;
};

_volume = VOLUME_MIN max _volume min VOLUME_MAX;

// Set the volume level if it is different from the current volume
// Prevents unnecessary sound source refreshing
if (_volume != _currentVolume) then {
    _vehicle setVariable [QGVAR(volume), _volume, true];

    // Refresh sound sources on clients if the stereo is currently playing
    if (_vehicle getVariable [QGVAR(playing), false]) then {
        [QGVAR(play), _vehicle] call CBA_fnc_globalEvent;
    };
};
