#include "script_component.hpp"

params ["_vehicle", "_playing"];

// Exit if the stereo is already playing (or not)
if (_playing == _vehicle getVariable [QGVAR(playing), false]) exitWith {};

private _updated = true;

if (_playing) then {
    // Exit if a CD is not inserted or if the inserted CD is still being loaded
    if (
        _vehicle getVariable [QGVAR(cd), ""] == ""
        || {_vehicle getVariable [QGVAR(loadingTime), 0] >= CBA_missionTime}
    ) exitWith {
        _updated = false;
    };

    // Set the start time for the track so clients can be synchronized
    // Use the previously stored offset to support pausing (without resetting the position)
    private _offset = _vehicle getVariable [QGVAR(offset), 0];
    private _startTime = CBA_missionTime - _offset;
    _vehicle setVariable [QGVAR(startTime), _startTime, true];

    // Add vehicle to list of tracked vehicles (to automatically start next track)
    GVAR(vehicles) pushBack _vehicle;

    // Start the vehicle tracking "thread" if isn't already active
    if (isNil QGVAR(trackingThread)) then {
        GVAR(trackingThread) = true;

        [LINKFUNC(trackingThread), [], TRACKING_THREAD_DELAY] call CBA_fnc_waitAndExecute;
    };

    // Create sound sources for vehicle on clients
    [QGVAR(play), _vehicle] call CBA_fnc_globalEvent;
} else {
    // Store the track offset based on the current time and when it was started
    private _startTime = _vehicle getVariable [QGVAR(startTime), CBA_missionTime];
    private _offset = CBA_missionTime - _startTime;
    _vehicle setVariable [QGVAR(offset), _offset, true];

    // Remove vehicle from list of tracked vehicles
    GVAR(vehicles) deleteAt (GVAR(vehicles) find _vehicle);

    // Delete sound sources for vehicle on clients
    [QGVAR(stop), _vehicle] call CBA_fnc_globalEvent;
};

// Set tracking variable
if (_updated) then {
    _vehicle setVariable [QGVAR(playing), _playing, true];
};
