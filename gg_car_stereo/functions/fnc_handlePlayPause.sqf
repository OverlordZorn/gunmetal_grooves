#include "script_component.hpp"

params ["_ctrlPlayPause"];

// Get the stereo display's vehicle
private _display = ctrlParent _ctrlPlayPause;
private _vehicle = _display getVariable [QGVAR(vehicle), objNull];

// Exit if the stereo is turned off
if (_vehicle getVariable [QGVAR(mode), STEREO_MODE_OFF] == STEREO_MODE_OFF) exitWith {};

// Play button click sound
playSound QGVAR(beep);

// Send event to server to play/pause the stereo
private _playing = _vehicle getVariable [QGVAR(playing), false];
[QGVAR(setPlaying), [_vehicle, !_playing]] call CBA_fnc_serverEvent;
