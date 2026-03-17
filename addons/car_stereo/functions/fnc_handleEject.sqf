#include "../script_component.hpp"

params ["_ctrlEject"];

// Play button click sound
playSound QGVAR(beep);

// Get the stereo display's vehicle
private _display = ctrlParent _ctrlEject;
private _vehicle = _display getVariable [QGVAR(vehicle), objNull];

// Send event to server to eject the current CD
[QGVAR(setCD), [_vehicle, "", ACE_player]] call CBA_fnc_serverEvent;
