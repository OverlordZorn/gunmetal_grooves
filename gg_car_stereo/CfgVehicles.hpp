class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class ACE_SelfActions {
            class ADDON {
                displayName = CSTRING(DisplayName);
                condition = QUOTE(call FUNC(canOpen));
                statement = QUOTE(call FUNC(open));
                icon = QPATHTOF(ui\icon_stereo_ca.paa);
            };
        };
    };
};
