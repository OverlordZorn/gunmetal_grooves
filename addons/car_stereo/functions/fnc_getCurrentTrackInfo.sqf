#include "../script_component.hpp"

params ["_vehicle"];

private _cd = _vehicle getVariable [QGVAR(cd), ""];
private _track = _vehicle getVariable [QGVAR(track), 0];
uiNamespace getVariable QGVAR(cds) getOrDefault [_cd, []] param [_track]
