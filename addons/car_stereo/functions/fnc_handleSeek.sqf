#include "../script_component.hpp"

params ["_ctrlButton"];

// Get the stereo display's vehicle
private _display = ctrlParent _ctrlButton;
private _vehicle = _display getVariable [QGVAR(vehicle), objNull];

// Exit if the stereo is turned off
if (_vehicle getVariable [QGVAR(mode), STEREO_MODE_OFF] == STEREO_MODE_OFF) exitWith {};

// Play button click sound
playSound QGVAR(beep);

// Send event to server to switch the track
private _direction = ctrlIDC _ctrlButton == IDC_FASTFORWARD;
[QGVAR(setTrack), [_vehicle, _direction]] call CBA_fnc_serverEvent;
