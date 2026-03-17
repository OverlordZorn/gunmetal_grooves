#include "../script_component.hpp"

params ["_ctrlSource"];

// Play button click sound
playSound QGVAR(beep);

// Get the stereo display's vehicle
private _display = ctrlParent _ctrlSource;
private _vehicle = _display getVariable [QGVAR(vehicle), objNull];

// Send event to server to set the stereo's mode
private _oldMode = _vehicle getVariable [QGVAR(mode), STEREO_MODE_OFF];
private _newMode = [STEREO_MODE_CD_PLAYER, STEREO_MODE_OFF] select _oldMode;
[QGVAR(setMode), [_vehicle, _newMode]] call CBA_fnc_serverEvent;
