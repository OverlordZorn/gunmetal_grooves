#include "script_component.hpp"

params ["_display"];

private _brightness = call ACEFUNC(common,ambientBrightness);

// Fade/darken the stereo's body at night (while keeping it slightly visible at all times)
private _ctrlBody = _display displayCtrl IDC_BODY;
private _bodyBrightness = _brightness max BODY_MIN_BRIGHTNESS;
_ctrlBody ctrlSetTextColor [_bodyBrightness, _bodyBrightness, _bodyBrightness, 1];

// Show the glow from the button lights in dark conditions
private _ctrlBodyGlow = _display displayCtrl IDC_BODY_GLOW;
_ctrlBodyGlow ctrlShow (_brightness <= BODY_GLOW_THRESHOLD);
_ctrlBodyGlow ctrlSetFade _brightness;
_ctrlBodyGlow ctrlCommit 0;
