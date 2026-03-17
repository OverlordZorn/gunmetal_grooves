#include "../script_component.hpp"

params ["_display"];

// Store the vehicle the display opened on
_display setVariable [QGVAR(vehicle), GVAR(vehicle)];

// Initialize the body controls with the images for the vehicle's stereo variant
private _variant = GVAR(vehicle) call FUNC(getStereoVariant);

private _ctrlBody = _display displayCtrl IDC_BODY;
_ctrlBody ctrlSetText format [QPATHTOF(ui\car_stereo_%1_ca.paa), _variant];

private _ctrlBodyGlow = _display displayCtrl IDC_BODY_GLOW;
_ctrlBodyGlow ctrlSetText format [QPATHTOF(ui\car_stereo_%1_glow_ca.paa), _variant];

// Initially render the body to prevent "flashing" at night
[_display] call FUNC(renderBody);

// Initially hide the CD insert controls
private _ctrlCDGroup = _display displayCtrl IDC_CD_GROUP;
_ctrlCDGroup ctrlShow false;

// Position the screen volume control so that it supports the maximum length volume string
// Need to do this at runtime since we want the text to be left-aligned and it is easier to
// find the text width now
private _ctrlScreenVolume = _display displayCtrl IDC_SCREEN_VOLUME;
_ctrlScreenVolume ctrlSetText (VOLUME_MAX call FUNC(getVolumeString));
_ctrlScreenVolume ctrlSetPositionX (POS_SCREEN_W(0.9) - ctrlTextWidth _ctrlScreenVolume);
_ctrlScreenVolume ctrlSetText "";
_ctrlScreenVolume ctrlCommit 0;

// Position the screen bass control to the left of the volume control
private _ctrlScreenBass = _display displayCtrl IDC_SCREEN_BASS;
private _bassPosition = (ctrlPosition _ctrlScreenVolume select 0) - (ctrlPosition _ctrlScreenBass select 2);
_ctrlScreenBass ctrlSetPositionX _bassPosition;
_ctrlScreenBass ctrlCommit 0;

// Add PFH to update the stereo display
[LINKFUNC(renderPFH), 0, _display] call CBA_fnc_addPerFrameHandler;
