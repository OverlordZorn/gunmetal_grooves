#include "script_component.hpp"

params ["_time"];

private _suffix = ["AM", "PM"] select (_time >= 12);

if (_time < 1) then {
    _time = _time + 12;
};

if (_time > 13) then {
    _time = _time - 12;
};

private _string = format ["%1 %2", [_time, "HH:MM"] call BIS_fnc_timeToString, _suffix];

// Remove leading zero from string (H:MM instead of HH:MM)
if (_string select [0, 1] == "0") then {
    _string = _string select [1];
};

_string
