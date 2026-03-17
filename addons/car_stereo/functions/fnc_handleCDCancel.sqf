#include "../script_component.hpp"

params ["_ctrlCDCancel"];

// Stop showing CDs that can be inserted
private _display = ctrlParent _ctrlCDCancel;
_display setVariable [QGVAR(showCDs), false];

// Hide CD insert controls
private _ctrlCDGroup = _display displayCtrl IDC_CD_GROUP;
_ctrlCDGroup ctrlShow false;
