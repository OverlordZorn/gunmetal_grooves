#include "../script_component.hpp"

params ["_vehicle"];

// Just a temporary reference, will get immediately stored on the display itself
// Cannot pass parameters to the onLoad function through createDialog
GVAR(vehicle) = _vehicle;

createDialog QGVAR(dialog);
