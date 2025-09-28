#include "script_component.hpp"

params ["_vehicle", "_bassBoosted"];

// Set the bass boost mode if it is different from the current mode
// Prevents unnecessary sound source refreshing
if (_vehicle getVariable [QGVAR(bassBoosted), false] != _bassBoosted) then {
    _vehicle setVariable [QGVAR(bassBoosted), _bassBoosted, true];

    // Refresh sound sources on clients if the stereo is currently playing
    if (_vehicle getVariable [QGVAR(playing), false]) then {
        [QGVAR(play), _vehicle] call CBA_fnc_globalEvent;
    };
};
