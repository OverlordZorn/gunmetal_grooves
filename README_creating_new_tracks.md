# How to Create New Tracks

This guide will walk you through the process of adding new tracks to the game. For instructions on how to create a new compact disc with your tracks, please refer to `creating_new_discs.md`.

## Adding New Tracks

1.  **Add the audio file:**
    *   Place your new audio file (in `.ogg` format) into a subdirectory within the `gg_music` directory. For example, if you're adding a new genre called "Synthwave", you would create a new directory `gg_music/Synthwave` and place your `.ogg` file inside it.

2.  **Define the sound in `config.cpp`:**
    *   Open `gg_compact_discs/config.cpp`.
    *   Inside the `CfgSounds` class, use the `CREATE_SOUND_VOLUMES` macro to define the sound for your new track. This macro automatically generates the 10 required sound definitions for each volume level.
    *   The `className` should be the name of your track (e.g., `MyNewTrack`).
    *   The `filePath` should be the path to your `.ogg` file (e.g., `"\x\gg\addons\gg_music\Synthwave\MyNewTrack.ogg"`).

    **Example:**

    ```cpp
    class CfgSounds
    {
        // ... existing sounds
        CREATE_SOUND_VOLUMES(MyNewTrack, "\x\gg\addons\gg_music\Synthwave\MyNewTrack.ogg")
    };
    ```

3.  **Add track title to `stringtable.xml`:**
    *   Open `gg_compact_discs/stringtable.xml`.
    *   Inside the `<Package name="Compact_Discs">` tag, add a new `<Key>` for your track's title. The `ID` must follow the format `STR_gg_music_TrackName`. This will be used when the track name is displayed in the car stereo.

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