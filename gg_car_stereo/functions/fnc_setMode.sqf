#include "script_component.hpp"

params ["_vehicle", "_mode"];

_vehicle setVariable [QGVAR(mode), _mode, true];

// Stop playing if the stereo was turned off
if (_mode == STEREO_MODE_OFF) then {
    [_vehicle, false] call FUNC(setPlaying);
};
