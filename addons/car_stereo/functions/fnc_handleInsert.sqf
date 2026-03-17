#include "../script_component.hpp"

params ["_ctrlInsert"];

// Start showing CDs that can be inserted
private _display = ctrlParent _ctrlInsert;
_display setVariable [QGVAR(showCDs), true];

// Show CD insert controls
private _ctrlCDGroup = _display displayCtrl IDC_CD_GROUP;
_ctrlCDGroup ctrlShow true;
