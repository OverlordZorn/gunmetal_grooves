#include "script_component.hpp"

params ["_ctrlBassBoost"];

// Get the stereo display's vehicle
private _display = ctrlParent _ctrlBassBoost;
private _vehicle = _display getVariable [QGVAR(vehicle), objNull];

// Exit if the stereo is turned off
if (_vehicle getVariable [QGVAR(mode), STEREO_MODE_OFF] == STEREO_MODE_OFF) exitWith {};

// Play button click sound
playSound QGVAR(beep);

// Send event to server to toggle the bass boost mode
private _bassBoosted = _vehicle getVariable [QGVAR(bassBoosted), false];
[QGVAR(setBassBoost), [_vehicle, !_bassBoosted]] call CBA_fnc_serverEvent;
