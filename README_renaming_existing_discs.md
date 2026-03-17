# How to Rename Existing Discs

This guide will walk you through the process of renaming existing compact discs in the game.

## Renaming Existing Discs

Let's say you want to rename the disc `gg_compact_discs_90sRap` to `gg_compact_discs_GoldenAgeRap`.

1.  **Rename the disc item in `config.cpp`:**
    *   Open `gg_compact_discs/config.cpp`.
    *   In `CfgPatches`, find the `units[]` and `weapons[]` arrays. Rename `gg_compact_discs_90sRap` to `gg_compact_discs_GoldenAgeRap` in both arrays.

    **Example:**
    ```cpp
    class CfgPatches
    {
        class gg_compact_discs
        {
            // ...
            units[]=
            {
                "gg_compact_discs_GoldenAgeRap", // formerly "gg_compact_discs_90sRap"
                // ... other discs
            };
            weapons[]=
            {
                "gg_compact_discs_GoldenAgeRap", // formerly "gg_compact_discs_90sRap"
                // ... other discs
            };
            // ...
        };
    };
    ```

2.  **Rename the `CfgVehicles` class in `config.cpp`:**
    *   In the same file (`gg_compact_discs/config.cpp`), find the `CfgVehicles` class.
    *   Rename the class `gg_compact_discs_90sRap` to `gg_compact_discs_GoldenAgeRap`.
    *   Inside this class, rename `_xx_gg_compact_discs_90sRap` to `_xx_gg_compact_discs_GoldenAgeRap` and the `name` property to `gg_compact_discs_GoldenAgeRap`.
    *   Update the `displayName` to a new string that will be defined in `stringtable.xml`.

    **Example:**

    ```cpp
    class CfgVehicles
    {
        // ... existing vehicles
        class gg_compact_discs_GoldenAgeRap: Item_Base_F // formerly gg_compact_discs_90sRap
        {
            author="$STR_GG_Main_Author";
            displayName="$STR_gg_compact_discs_GoldenAgeRap_DisplayName"; // updated
            vehicleClass="Items";
            scope=2;
            scopeCurator=2;
            class TransportItems
            {
                class _xx_gg_compact_discs_GoldenAgeRap // updated
                {
                    name="gg_compact_discs_GoldenAgeRap"; // updated
                    count=1;
                };
            };
        };
    };
    ```

3.  **Rename the `CfgWeapons` class in `config.cpp`:**
    *   In `gg_compact_discs/config.cpp`, find the `CfgWeapons` class.
    *   Rename the class `gg_compact_discs_90sRap` to `gg_compact_discs_GoldenAgeRap`.
    *   Update the `displayName` and `descriptionShort` to new strings that will be defined in `stringtable.xml`.

    **Example:**

    ```cpp
    class CfgWeapons
    {
        // ... existing weapons
        class gg_compact_discs_GoldenAgeRap: gg_car_stereo_BaseCD // formerly gg_compact_discs_90sRap
        {
            author="$STR_GG_Main_Author";
            displayName="$STR_gg_compact_discs_GoldenAgeRap_DisplayName"; // updated
            descriptionShort="$STR_gg_compact_discs_GoldenAgeRap_Description"; // updated
            scope=2;
            gg_car_stereo_tracks[]=
            {
                // ... tracklist remains the same
            };
        };
    };
    ```

4.  **Update display names and descriptions in `stringtable.xml`:**
    *   Open `gg_compact_discs/stringtable.xml`.
    *   Find the `<Key>` tags for the old disc name and update their `ID` attributes.
    *   Update the `<English>` text to reflect the new name.

    **Example:**

    ```xml
    <?xml version="1.0" encoding="utf-8"?>
    <Project name="GG">
        <Package name="Compact_Discs">
            <!-- ... existing keys -->
            <Key ID="STR_GG_Compact_Discs_GoldenAgeRap_DisplayName"> <!-- formerly STR_GG_Compact_Discs_90sRap_DisplayName -->
                <English>CD (Golden Age Rap)</English> <!-- updated text -->
            </Key>
            <Key ID="STR_GG_Compact_Discs_GoldenAgeRap_Description"> <!-- formerly STR_GG_Compact_Discs_90sRap_Description -->
                <English>A compact disc containing golden age rap songs.</English> <!-- updated text -->
            </Key>
        </Package>
    </Project>
    ```

By following these steps, you can successfully rename existing discs in the game.