#include "../script_component.hpp"

params ["_volume"];

private _string = "VOL ";

for "_i" from 1 to _volume do {
    _string = _string + "|";
};

_string
