#include "../script_component.hpp"

params ["_ctrlCDConfirm"];

// Get the stereo display's vehicle
private _display = ctrlParent _ctrlCDConfirm;
private _vehicle = _display getVariable [QGVAR(vehicle), objNull];

// Send event to server to insert the selected CD
private _ctrlCDList = _display displayCtrl IDC_CD_LIST;
private _cd = _ctrlCDList lbData lbCurSel _ctrlCDList;
[QGVAR(setCD), [_vehicle, _cd, ACE_player]] call CBA_fnc_serverEvent;
