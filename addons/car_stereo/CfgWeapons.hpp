class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class GVAR(BaseCD): ACE_ItemCore {
        author = ECSTRING(main,Author);
        displayName = "";
        descriptionShort = "";
        picture = QPATHTOF(ui\cd_ca.paa);
        scope = 1;

        GVAR(cd) = 1;

        // Array of tracks the CD contains where each element is an array of the
        // CfgSounds sound class name prefix, the name of the track, and the track length.
        // Sound class name is a prefix because the actual class names must have the suffix
        // `_VOL_N`, where N is from 1 to 10, attached to support different volume levels.
        GVAR(tracks)[] = {
            // Example: {"ExampleTrack", "$STR_ExampleTrack", 300}
            // CfgSounds: ExampleTrack_VOL_1, ExampleTrack_VOL_2, ..., ExampleTrack_VOL_10
        };

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};
