#include "script_component.hpp"

private _cds = createHashMap;

{
    if (getNumber (_x >> QGVAR(cd)) == 1 && {getNumber (_x >> "scope") == 2}) then {
        _cds set [configName _x, getArray (_x >> QGVAR(tracks))];
    };
} forEach configProperties [configFile >> "CfgWeapons", "isClass _x"];

uiNamespace setVariable [QGVAR(cds), _cds];
