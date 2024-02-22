class CfgPatches
{
    class Hive_Medical_Vials
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
    class Hive_Medical_Vile_Base : Inventory_Base
    {
        scope = 0;
        displayName = "Medical Vile 1";
        descriptionShort = "While investigating a local pathogen at the hive labs, researchers stumbled upon a deadly virus! Unexpectedly, the pathogen escaped contamination, ravaging the inhabitants of the island of Chenarus. Now, the question arises: can this toxic material be sterilized and repurposed for beneficial ends?";
        model = "Hive_Medical\Data\Vials\Vial1.p3d"; 
        hiddenSelections[] = {"camo1","camo2","camo3"};
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_green.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_green.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
    class Hive_Medical_Vile_Green_Disinfected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample G";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_green.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_green.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
    class Hive_Medical_Vile_Red_Disinfected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample R";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_red.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_red.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
    class Hive_Medical_Vile_Yellow_Disinfected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample Y";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_yellow.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_yellow.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
    class Hive_Medical_Vile_Purple_Disinfected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample P";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_purple.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_purple.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
	class Hive_Medical_Vile_Blue_Disinfected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Disinfected Pathogen Sample B";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_blue.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_blue.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
    
	
	
    class Hive_Medical_Vile_Green_Infected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Infected Pathogen Sample G";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_green.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_green_spec.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
    class Hive_Medical_Vile_Red_Infected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Infected Pathogen Sample R";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_red.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_red_spec.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
    class Hive_Medical_Vile_Yellow_Infected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Infected Pathogen Sample Y";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_yellow.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_yellow_spec.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
    class Hive_Medical_Vile_Purple_Infected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Infected Pathogen Sample P";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_purple.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_purple_spec.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };
	class Hive_Medical_Vile_Blue_Infected : Hive_Medical_Vile_Base
    {
        scope = 2;
        displayName = "Infected Pathogen Sample B";
        hiddenSelectionsMaterials[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_Top.rvmat",
            "Hive_Medical\Data\Vials\Textures\camo6_blue.rvmat",
            "Hive_Medical\Data\Vials\Textures\Glass_window.rvmat"
        };
        hiddenSelectionsTextures[] = 
        {
            "Hive_Medical\Data\Vials\Textures\Vial_top.paa",
            "Hive_Medical\Data\Vials\Textures\camo6_blue_spec.paa",
            "Hive_Medical\Data\Vials\Textures\Glass.paa",

        };
    };






};
