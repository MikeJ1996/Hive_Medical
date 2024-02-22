class CfgPatches
{
    class Hive_Medical
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

class CfgMods
{
    class Hive_Medical
    {
    	dir="Hive_Medical";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Hive_Medical";
		credits="";
		author="Hive|Modding Team";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"Hive_Medical/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value="";
				files[] = {"Hive_Medical/Scripts/4_World"};
			};
		};
	};
};

