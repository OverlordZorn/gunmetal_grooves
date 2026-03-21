#include "../script_component.hpp"

private _cds = createHashMap;

{
    if (getNumber (_x >> QPVAR(cd)) == 1 && { getNumber (_x >> "scope") == 2 }) then {
        _cds set [configName _x, getArray (_x >> QPVAR(tracks))];
    };
} forEach configProperties [configFile >> "CfgWeapons", "isClass _x"];

diag_log format ['[CVO](debug)(fnc_compile) _cds: %1', _cds];

uiNamespace setVariable [QGVAR(cds), _cds];
