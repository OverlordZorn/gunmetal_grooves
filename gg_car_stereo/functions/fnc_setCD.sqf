#include "script_component.hpp"

params ["_vehicle", "_newCD", "_unit"];

// Exit if trying to insert a CD when one is already inserted
// or trying to eject a CD when one is not inserted (XNOR)
private _oldCD = _vehicle getVariable [QGVAR(cd), ""];
if ((_oldCD == "") isEqualTo (_newCD == "")) exitWith {};

scopeName "Main";

// If a unit is given, handle adding/removing the CD item from inventory
if (!isNil "_unit") then {
    if (_newCD == "") then {
        // Try to add to unit's inventory first
        if (_unit canAdd _oldCD) exitWith {
            _unit addItem _oldCD;
        };

        // Next, try the vehicle's inventory
        if (maxLoad _vehicle > 0) exitWith {
            _vehicle addItemCargoGlobal [_oldCD, 1];
        };

        // Finally, force add the item to inventory or drop on ground
        // Vehicles should have an inventory but just in case there is one that does not
        private _container = [uniformContainer _unit, vestContainer _unit, backpackContainer _unit] - [objNull] param [0, objNull];

        if (isNull _container) then {
            private _position = getPosATL _vehicle vectorAdd [random 2 - 1, random 2 - 1, 0];
            _container = createVehicle ["GroundWeaponHolder", [0, 0, 0], [], 0, "CAN_COLLIDE"];
            _container setPosATL _position;
        };

        _container addItemCargoGlobal [_oldCD, 1];
    } else {
        // Exit if the unit doesn't have the given CD in their inventory
        if !(_newCD in (_unit call ACEFUNC(common,uniqueItems))) then {
            breakOut "Main";
        };

        _unit removeItem _newCD;
    };
};

// Update the vehicle's CD
_vehicle setVariable [QGVAR(cd), _newCD, true];

// Update playback based on if a CD was inserted or ejected
if (_newCD != "") then {
    // Reset random play mode indices when a CD is inserted
    _vehicle setVariable [QGVAR(indices), nil];

    // Reset the track (get a random track to start from for random play mode)
    private _track = 0;
    private _trackCount = count (uiNamespace getVariable QGVAR(cds) get _newCD);

    if (_vehicle getVariable [QGVAR(playMode), PLAY_MODE_REPEAT] == PLAY_MODE_RANDOM) then {
        _track = floor random _trackCount;
    };

    _vehicle setVariable [QGVAR(track), _track, true];

    // Reset the track position as well to start playing from the beginning
    _vehicle setVariable [QGVAR(offset), nil, true];

    // Simulate a loading time for the CD based on the number of tracks it has
    private _loadingTime = LOADING_TIME_MIN max (_trackCount * LOADING_TIME_PER_TRACK) min LOADING_TIME_MAX;
    _vehicle setVariable [QGVAR(loadingTime), CBA_missionTime + _loadingTime, true];
} else {
    // Stop playing when a CD is ejected
    [_vehicle, false] call FUNC(setPlaying);

    // Reset loading time (since there is no CD to load now)
    _vehicle setVariable [QGVAR(loadingTime), nil, true];
};
