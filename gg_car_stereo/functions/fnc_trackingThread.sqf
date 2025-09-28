#include "script_component.hpp"

// Filter destroyed or deleted vehicles
GVAR(vehicles) = GVAR(vehicles) select {alive _x};

// Exit if there are no more vehicles to track
if (GVAR(vehicles) isEqualTo []) exitWith {
    GVAR(trackingThread) = nil;
};

// Automatically start the next track if the current one is finished for all tracked vehicles
{
    private _startTime = _x getVariable [QGVAR(startTime), CBA_missionTime];
    private _length = _x call FUNC(getCurrentTrackInfo) select TRACK_LENGTH;

    if (CBA_missionTime >= _startTime + _length) then {
        [_x, true] call FUNC(setTrack);
    };
} forEach GVAR(vehicles);

// Schedule the tracking "thread" to execute again
[LINKFUNC(trackingThread), [], TRACKING_THREAD_DELAY] call CBA_fnc_waitAndExecute;
