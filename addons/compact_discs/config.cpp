#include "script_component.hpp"

class CfgPatches {
	class ADDON {

        // Meta information for editor
		name = ADDON_NAME;
		author = ECSTRING(main,author);
        authors[] = {};
		
        url = ECSTRING(main,URL);


		VERSION_CONFIG;

        // Addon Specific Information
        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
        requiredVersion = REQUIRED_VERSION;

        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = { QPVAR(main), QPVAR(car_stereo), QPVAR(music) };

		// Optional. If this is 1, if any of requiredAddons[] entry is missing in your game the entire config will be ignored and return no error (but in rpt) so useful to make a compat Mod (Since Arma 3 2.14)
		skipWhenMissingDependencies = 1;
        
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups)
		units[]=
		{
			QGVAR(90sRap),
			QGVAR(AssortedBangers),
			QGVAR(Echoesofthe2000s),
			QGVAR(EasternDefianceMegamix),
			QGVAR(PeaceintheMIddleEast),
			QGVAR(SadBoiHours),
			QGVAR(MixtapeOne),
			QGVAR(MixtapeTwo),
			QGVAR(MixtapeThree),
			QGVAR(MixtapeFour)
		};

        // List of weapons (CfgWeapons classes) contained in the addon.
		weapons[]=
		{
			QGVAR(90sRap),
			QGVAR(AssortedBangers),
			QGVAR(SadBoiHours),
			QGVAR(MixtapeOne),
			QGVAR(MixtapeTwo),
			QGVAR(MixtapeThree),
			QGVAR(MixtapeFour),
			QGVAR(EasternDefianceMegamix),
			QGVAR(Echoesofthe2000s),
			QGVAR(PeaceintheMiddleEast)
		};
	};
};

#include "CfgSounds.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

#include "gg_playlists.hpp"
