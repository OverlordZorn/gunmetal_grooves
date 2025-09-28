#include "script_component.hpp"

params ["_vehicle"];

// Stop the sound by deleting the source
private _soundSource = _vehicle getVariable [QGVAR(soundSource), objNull];
deleteVehicle _soundSource;
