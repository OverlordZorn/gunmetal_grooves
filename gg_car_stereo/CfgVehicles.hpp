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
    class Tank;
    class Tank_F: Tank {
        class ACE_SelfActions {
            class ADDON {
                displayName = CSTRING(DisplayName);
                condition = QUOTE(call FUNC(canOpen));
                statement = QUOTE(call FUNC(open));
                icon = QPATHTOF(ui\icon_stereo_ca.paa);
            };
        };
    };
    class Helicopter; 
    class Helicopter_Base_F: Helicopter {
      class ACE_SelfActions {
            class ADDON {
                displayName = CSTRING(DisplayName);
                condition = QUOTE(call FUNC(canOpen));
                statement = QUOTE(call FUNC(open));
                icon = QPATHTOF(ui\icon_stereo_ca.paa);
            };
        };  
    };
    class Ship; 
    class Ship_F: Ship {
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
