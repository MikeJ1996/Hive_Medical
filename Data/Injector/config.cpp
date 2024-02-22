class CfgPatches
{
    class Hive_Medical_Injector
    {
        units[] = {"Hive_Medical"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data",
            "DZ_Sounds_Effects",
            "DZ_Weapons_Explosives"
        };
    };
};
class CfgVehicles
{
    class Inventory_Base;
    class Hive_Medical_Injector_Base : Inventory_Base
    {
        scope = 0;
        displayName = "Medical Vile 1";
        descriptionShort = "While investigating a local pathogen at the hive labs, researchers stumbled upon a deadly virus! Unexpectedly, the pathogen escaped contamination, ravaging the inhabitants of the island of Chenarus. Now, the question arises: can this toxic material be sterilized and repurposed for beneficial ends?";
        model = "Hive_Medical\Data\Injector\InjectorFull.p3d"; 
        hiddenSelections[] = {"zbytek"};
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Injector\Textures\Injector_Blue_Infected.paa",
        };
    };
        class Hive_Medical_Injector_Empty : Hive_Medical_Injector_Base
    {
        scope = 2;
        displayName = "Empty Injector used for Disinfected Viles to enable injection of Pathogen";
        model = "Hive_Medical\Data\Injector\InjectorEmpty.p3d";
    };
    class Hive_Medical_Injector_Green : Hive_Medical_Injector_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample G";
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Injector\Textures\Injector_Green_Infected.paa",
        };
    };
    class Hive_Medical_Injector_Red : Hive_Medical_Injector_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample R";
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Injector\Textures\Injector_Red_Infected.paa",
        };
    };
    class Hive_Medical_Injector_Yellow : Hive_Medical_Injector_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample Y";
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Injector\Textures\Injector_Yellow_Infected.paa",
        };
    };
    class Hive_Medical_Injector_Purple : Hive_Medical_Injector_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample P";
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Injector\Textures\Injector_Purple_Infected.paa",
        };
    };
	class Hive_Medical_Injector_Blue : Hive_Medical_Injector_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample B";
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Injector\Textures\Injector_Blue_Infected.paa",
        };
    };
};
