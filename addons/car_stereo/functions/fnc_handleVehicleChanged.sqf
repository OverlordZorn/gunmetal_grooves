#include "../script_component.hpp"

params ["", "_newVehicle", "_oldVehicle"];

// Refresh sound for both the new and old vehicle if needed
{
    if (_x getVariable [QGVAR(playing), false]) then {
        _x call FUNC(play);
    };
} forEach [_newVehicle, _oldVehicle];
