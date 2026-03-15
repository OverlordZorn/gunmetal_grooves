#include "script_component.hpp"

if (isServer) then {
    // All updates to a vehicle's stereo go through the server to ensure synchronization
    // Clients individually manage the local sound sources based on update events from the server
    [QGVAR(setBassBoost), LINKFUNC(setBassBoost)] call CBA_fnc_addEventHandler;
    [QGVAR(setCD), LINKFUNC(setCD)] call CBA_fnc_addEventHandler;
    [QGVAR(setMode), LINKFUNC(setMode)] call CBA_fnc_addEventHandler;
    [QGVAR(setPlaying), LINKFUNC(setPlaying)] call CBA_fnc_addEventHandler;
    [QGVAR(setPlayMode), LINKFUNC(setPlayMode)] call CBA_fnc_addEventHandler;
    [QGVAR(setTrack), LINKFUNC(setTrack)] call CBA_fnc_addEventHandler;
    [QGVAR(setVolume), LINKFUNC(setVolume)] call CBA_fnc_addEventHandler;

    // List of vehicles handled by the tracking "thread"
    GVAR(vehicles) = [];
};

if (hasInterface) then {
    // Events for starting and stopping playback locally on clients
    [QGVAR(play), LINKFUNC(play)] call CBA_fnc_addEventHandler;
    [QGVAR(stop), LINKFUNC(stop)] call CBA_fnc_addEventHandler;

    // Refresh sound sources when the player changes vehicle
    // Also handles changing units (i.e. remote controlling)
    ["vehicle", LINKFUNC(handleVehicleChanged)] call CBA_fnc_addPlayerEventHandler;

    // Refresh sound sources when a feature camera (e.g. Zeus) is used or exited
    ["featureCamera", LINKFUNC(handleFeatureCamera)] call CBA_fnc_addPlayerEventHandler;

    // Start playback for currently playing vehicles on JIP clients
    if (didJIP) then {
        {
            if (_x getVariable [QGVAR(playing), false]) then {
                _x call FUNC(play);
            };
        } forEach allMissionObjects "Car";
    };
};
