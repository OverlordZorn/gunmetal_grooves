class CfgVehicles
{
	class Item_Base_F;

    // "Base" Item
    class GVAR(90sRap): Item_Base_F {

        author = ECSTRING(main,author);
        displayName = CSTRING(90sRap_DisplayName);

        vehicleClass = "Items";
        scope = 2;
        scopeCurator = 2;

        editorCategory = QPVAR(category_main);
        editorSubcategory = QPVAR(subcategory_cds);

        class TransportItems {
            class GVAR(90sRap) {
                name = QGVAR(90sRap);
                count = 1;
            };
        };
    };

    #define CREATE_DISC_ITEM(CLASSNAME)\
    class GVAR(CLASSNAME): GVAR(90sRap)\
    {\
        displayName = CSTRING(CLASSNAME##_DisplayName);\
        \
        class TransportItems\
        {\
            class GVAR(CLASSNAME)\
            {\
                name = QGVAR(CLASSNAME);\
                count = 1;\
            };\
        };\
    }

	CREATE_DISC_ITEM(AssortedBangers);
	CREATE_DISC_ITEM(MixtapeOne);
	CREATE_DISC_ITEM(MixtapeTwo);
	CREATE_DISC_ITEM(SadBoiHours);
	CREATE_DISC_ITEM(MixtapeThree);
	CREATE_DISC_ITEM(MixtapeFour);
	CREATE_DISC_ITEM(EasternDefianceMegamix);
	CREATE_DISC_ITEM(Echoesofthe2000s);
	CREATE_DISC_ITEM(PeaceintheMIddleEast);
};

