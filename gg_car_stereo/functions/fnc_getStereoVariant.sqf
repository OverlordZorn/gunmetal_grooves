#include "script_component.hpp"

params ["_vehicle"];

private _variant = _vehicle getVariable [QGVAR(variant), ""];

if (_variant == "") then {
    // Using hashValue, all clients will pick the exact same variant
    private _random = 0;

    {
        _random = _random + _x;
    } forEach toArray hashValue _vehicle;

    _variant = STEREO_BODY_VARIANTS select (_random % count STEREO_BODY_VARIANTS);
    _vehicle setVariable [QGVAR(variant), _variant];
};

_variant
