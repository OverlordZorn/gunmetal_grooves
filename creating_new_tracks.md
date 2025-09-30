# How to Create New Tracks and Discs

This guide will walk you through the process of adding new tracks and compact discs to the game.

## Adding New Tracks

1.  **Add the audio file:**
    *   Place your new audio file (in `.ogg` format) into a subdirectory within the `gg_music` directory. For example, if you're adding a new genre called "Synthwave", you would create a new directory `gg_music/Synthwave` and place your `.ogg` file inside it.

2.  **Define the sound in `config.cpp`:**
    *   Open `gg_compact_discs/config.cpp`.
    *   Inside the `CfgSounds` class, you need to create 10 sound definitions for each track, one for each of the 10 volume levels the car stereo supports.
    *   The class name for each definition must follow the format `gg_compact_discs_TrackName_VOL_X`, where `X` is the volume number (from 1 to 10). The game's script uses this suffix to select the correct sound based on the volume the player chooses in the vehicle.
    *   The `sound[]` array has three parameters:
        1.  The path to your `.ogg` file (e.g., `"\\x\\gg\\addons\\gg_music\\Synthwave\\MyNewTrack.ogg"`).
        2.  A volume modifier, which should be `"X/2"` where `X` is the volume number (e.g., `"1/2"` for `_VOL_1`, `"2/2"` for `_VOL_2`, etc.). This acts as a volume multiplier within the game engine.
        3.  The pitch of the sound. `1` is the normal pitch.

    **Example:**

    ```cpp
    class CfgSounds
    {
        // ... existing sounds

        // Volume 1 definition
        class gg_compact_discs_MyNewTrack_VOL_1
        {
            sound[]=
            {
                "\\x\\gg\\addons\\gg_music\\Synthwave\\MyNewTrack.ogg",
                "1/2",
                1
            };
            titles[]={};
        };

        // Volume 2 definition
        class gg_compact_discs_MyNewTrack_VOL_2
        {
            sound[]=
            {
                "\\x\\gg\\addons\\gg_music\\Synthwave\\MyNewTrack.ogg",
                "2/2",
                1
            };
            titles[]={};
        };

        // ... and so on up to VOL_10 for "MyNewTrack"
        class gg_compact_discs_MyNewTrack_VOL_10
        {
            sound[]=
            {
                "\\x\\gg\\addons\\gg_music\\Synthwave\\MyNewTrack.ogg",
                "10/2",
                1
            };
            titles[]={};
        };
    };
    ```

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
                }
            };
        };
    };
    ```

3.  **Add display names and descriptions to `stringtable.xml`:**
    *   Open `gg_compact_discs/stringtable.xml`.
    *   Inside the `<Package name="Compact_Discs">` tag, add new `<Key>` tags for your disc's display name and description.

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
        </Package>
    </Project>
    ```

By following these steps, you can successfully add new tracks and discs to the game.