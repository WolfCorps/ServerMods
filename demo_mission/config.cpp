class CfgPatches {
	class wolf_demo_mission {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		author = "dedmen";
		requiredAddons[] = {"cba_main"};
	};
};

class Extended_PreInit_EventHandlers {
	class wolf_demo_mission {
		init = "call compile preProcessFileLineNumbers '\z\wolf\server\demo_mission\XEH_preInit.sqf'";
	};
};
