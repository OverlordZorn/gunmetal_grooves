#include "../script_component.hpp"

params ["_vehicle", "_playMode"];

_vehicle setVariable [QGVAR(playMode), _playMode, true];

// Reset indices when set to random play mode
// Allows for the tracks to be repeatedly shuffled
if (_playMode == PLAY_MODE_RANDOM) then {
    _vehicle setVariable [QGVAR(indices), nil];
};
