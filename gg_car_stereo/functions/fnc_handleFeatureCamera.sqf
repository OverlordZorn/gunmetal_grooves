#include "script_component.hpp"

params ["_unit"];

// Refresh sound if the vehicle's stereo is playing
// Handles the player entering a feature camera (e.g. Zeus) while the stereo is playing
// 3D sound should be used and heard from the feature camera's position
private _vehicle = vehicle _unit;

if (_vehicle getVariable [QGVAR(playing), false]) then {
    _vehicle call FUNC(play);
};
