# How to Create New Discs

This guide will walk you through the process of adding new compact discs to the game. This guide assumes you have already added the tracks you want to include on the disc. If you haven't, please refer to `creating_new_tracks.md`.

## Adding New Discs

1.  **Define the disc item in `config.cpp`:**
    *   Open `gg_compact_discs/config.cpp`.
    *   Inside the `CfgVehicles` class, add a new class for your disc. The class name should follow the format `gg_compact_discs_DiscName`.
    *   Set the `displayName` to a string that will be defined in `stringtable.xml`.

    **Example:**

    ```cpp
    class CfgVehicles
    {
        // ... existing vehicles
        class gg_compact_discs_SynthwaveHits: Item_Base_F
        {
            author="$STR_GG_Main_Author";
            displayName="$STR_gg_compact_discs_SynthwaveHits_DisplayName";
            vehicleClass="Items";
            scope=2;
            scopeCurator=2;
            class TransportItems
            {
                class _xx_gg_compact_discs_SynthwaveHits
                {
                    name="gg_compact_discs_SynthwaveHits";
                    count=1;
                };
            };
        };
    };
    ```

2.  **Define the disc and its tracklist in `config.cpp`:**
    *   Open `gg_compact_discs/config.cpp`.
    *   Inside the `CfgWeapons` class, add a new class for your disc. The class name should be the same as the one you defined in `CfgVehicles`.
    *   Set the `displayName` and `descriptionShort` to strings that will be defined in `stringtable.xml`.
    *   In the `gg_car_stereo_tracks[]` array, add your new tracks. Each track is an array containing the track name (without the `_VOL_X` suffix), the string for the track title (from `stringtable.xml`), and the duration of the track in seconds.

    **Example:**

    ```cpp
    class CfgWeapons
    {
        // ... existing weapons
        class gg_compact_discs_SynthwaveHits: gg_car_stereo_BaseCD
        {
            author="$STR_GG_Main_Author";
            displayName="$STR_gg_compact_discs_SynthwaveHits_DisplayName";
            descriptionShort="$STR_gg_compact_discs_SynthwaveHits_Description";
            scope=2;
            gg_car_stereo_tracks[]=
            {
                {
                    "gg_compact_discs_MyNewTrack",
                    "$STR_gg_music_MyNewTrack",
                    300
                },
                {
                    "gg_compact_discs_AnotherTrack",
                    "$STR_gg_music_AnotherTrack",
                    240
                }
            };
        };
    };
    ```

3.  **Add display names and descriptions to `stringtable.xml`:**
    *   Open `gg_compact_discs/stringtable.xml`.
    *   Inside the `<Package name="Compact_Discs">` tag, add new `<Key>` tags for your disc's display name and description. You will also need to add a key for each track title if they don't already exist.

    **Example:**

    ```xml
    <?xml version="1.0" encoding="utf-8"?>
    <Project name="GG">
        <Package name="Compact_Discs">
            <!-- ... existing keys -->
            <Key ID="STR_gg_compact_discs_SynthwaveHits_DisplayName">
                <English>CD (Synthwave Hits)</English>
            </Key>
            <Key ID="STR_gg_compact_discs_SynthwaveHits_Description">
                <English>A compact disc containing synthwave hits.</English>
            </Key>
            <Key ID="STR_gg_music_MyNewTrack">
                <English>My New Track</English>
            </Key>
            <Key ID="STR_gg_music_AnotherTrack">
                <English>Another Track</English>
            </Key>
        </Package>
    </Project>
    ```

By following these steps, you can successfully add new discs to the game.