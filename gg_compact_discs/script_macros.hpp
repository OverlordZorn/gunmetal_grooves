#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

#define CREATE_SOUND_VOLUMES(className, filePath) \
    class gg_compact_discs_##className##_VOL_1 { \
        sound[] = { \
            filePath, \
            "1/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_2 { \
        sound[] = { \
            filePath, \
            "2/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_3 { \
        sound[] = { \
            filePath, \
            "3/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_4 { \
        sound[] = { \
            filePath, \
            "4/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_5 { \
        sound[] = { \
            filePath, \
            "5/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_6 { \
        sound[] = { \
            filePath, \
            "6/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_7 { \
        sound[] = { \
            filePath, \
            "7/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_8 { \
        sound[] = { \
            filePath, \
            "8/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_9 { \
        sound[] = { \
            filePath, \
            "9/2", \
            1 \
        }; \
        titles[] = {}; \
    }; \
    class gg_compact_discs_##className##_VOL_10 { \
        sound[] = { \
            filePath, \
            "10/2", \
            1 \
        }; \
        titles[] = {}; \
    };

#define CREATE_DISC_ITEM(className) \
    class gg_compact_discs_##className: Item_Base_F \
    { \
        author="$STR_GG_Main_Author"; \
        displayName=$STR_gg_compact_discs_##className##_DisplayName; \
        vehicleClass="Items"; \
        scope=2; \
        scopeCurator=2; \
        class TransportItems \
        { \
            class _xx_gg_compact_discs_##className \
            { \
                name=TOSTRING(gg_compact_discs_##className); \
                count=1; \
            }; \
        }; \
    };

#define CREATE_DISC_WEAPON_HEADER(className) \
    class gg_compact_discs_##className: gg_car_stereo_BaseCD \
    { \
        author="$STR_GG_Main_Author"; \
        displayName=$STR_gg_compact_discs_##className##_DisplayName; \
        descriptionShort=$STR_gg_compact_discs_##className##_Description; \
        scope=2; \
        gg_car_stereo_tracks[]= \
        {

#define ADD_TRACK(trackName, duration) \
    { \
        gg_compact_discs_##trackName, \
        $STR_gg_music_##trackName, \
        duration \
    }

#define CREATE_DISC_WEAPON_FOOTER() \
        }; \
    };