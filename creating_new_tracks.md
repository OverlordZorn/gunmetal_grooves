# How to Create New Tracks

This guide will walk you through the process of adding new tracks to the game. For instructions on how to create a new compact disc with your tracks, please refer to `creating_new_discs.md`.

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

3.  **Add track title to `stringtable.xml`:**
    *   Open `gg_compact_discs/stringtable.xml`.
    *   Inside the `<Package name="Compact_Discs">` tag, add a new `<Key>` for your track's title. This will be used when the track name is displayed in the car stereo.

    **Example:**

    ```xml
    <?xml version="1.0" encoding="utf-8"?>
    <Project name="GG">
        <Package name="Compact_Discs">
            <!-- ... existing keys -->
            <Key ID="STR_gg_music_MyNewTrack">
                <English>My New Track</English>
            </Key>
        </Package>
    </Project>
    ```

By following these steps, you can successfully add new tracks to be used on compact discs.