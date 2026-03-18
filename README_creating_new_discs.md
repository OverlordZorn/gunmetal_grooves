# How to Create New Discs

This guide will walk you through the process of adding new compact discs to the game. This guide assumes you have already added the tracks you want to include on the disc. If you haven't, please refer to `creating_new_tracks.md`.

## Adding New Discs

1.  **Define the disc item in `config.cpp`:**
    *   Open `gg_compact_discs/config.cpp`.
    *   Inside the `CfgVehicles` class, use the `CREATE_DISC_ITEM` macro to define your new disc. The `className` should be unique and descriptive (e.g., `SynthwaveHits`).

    **Example:**

    ```cpp
    class CfgVehicles
    {
        class Item_Base_F;
        CREATE_DISC_ITEM(SynthwaveHits)
    };
    ```

2.  **Define the disc and its tracklist in `config.cpp`:**
    *   Open `gg_compact_discs/config.cpp`.
    *   Inside the `CfgWeapons` class, use the `CREATE_DISC_WEAPON_HEADER` macro to start the disc definition.
    *   Use the `ADD_TRACK` macro for each track you want to add to the disc. The `trackName` should correspond to the class name of the sound you defined, and the `duration` should be the length of the track in seconds.
    *   Finally, close the definition with the `CREATE_DISC_WEAPON_FOOTER` macro.

    **Example:**

    ```cpp
    class CfgWeapons
    {
        class gg_BaseCD;
        CREATE_DISC_WEAPON_HEADER(SynthwaveHits)
            ADD_TRACK(MyNewTrack, 300),
            ADD_TRACK(AnotherTrack, 240)
        CREATE_DISC_WEAPON_FOOTER()
    };
    ```

3.  **Add display names and descriptions to `stringtable.xml`:**
    *   Open `gg_compact_discs/stringtable.xml`.
    *   Inside the `<Package name="Compact_Discs">` tag, add new `<Key>` tags for your disc's display name and description. The `ID`s must follow the format `STR_gg_compact_discs_className_DisplayName` and `STR_gg_compact_discs_className_Description`.

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
        </Package>
    </Project>
    ```

By following these steps, you can successfully add new discs to the game using the simplified macro-based workflow.