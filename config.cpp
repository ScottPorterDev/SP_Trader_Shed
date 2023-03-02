class CfgPatches
{
	class SP_Trader_Shed_CfgPatches
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
            "DZ_Data",
            "DZ_Scripts",
            "DZ_Structures"
			
		};
	};
};

class CfgMods
{
	class SP_Trader_Shed_CfgMods
	{	
		
		dir = "SP_Trader_Shed";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "SP_Trader_Shed";
		author = "Scott Porter";
		authorID = "0";
		version = "1.5";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"World"
		};
		
		class defs
		{

            class worldScriptModule
            {
                value = "";
                files[] = {"SP_Trader_Shed\DZ_Scripts\4_World"};
			};
		};
	};
};
class CfgVehicles
{
    class HouseNoDestruct;
    class SP_Land_Shed_Trad_With_BarrelHoles: HouseNoDestruct
    {
        scope=2;
        model="\SP_Trader_Shed\SP_Building_Shed_01\model\SP_Medieval_Shed_With_BarrelHoles.p3d";
    };
}; 