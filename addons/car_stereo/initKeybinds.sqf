[
    [ ELSTRING(main,DisplayName), LSTRING(DisplayName) ],
    QGVAR(open),
    LSTRING(OpenStereo),
    {
        private _vehicle = vehicle ACE_player;

        if (_vehicle call FUNC(canOpen) && {[ACE_player, _vehicle] call ACEFUNC(common,canInteractWith)} && {!dialog}) exitWith {
            _vehicle call FUNC(open);
            true // handled
        };

        false
    },
    {},
    [ 0, [ false, false, false ] ]
] call CBA_fnc_addKeybind; // Default: Unbound
