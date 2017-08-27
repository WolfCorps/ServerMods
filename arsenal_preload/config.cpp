class CfgPatches {
	class wolf_arsenal_preload {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		author = "dedmen";
		requiredAddons[] = {"cba_main"};
	};
};

class Extended_PreInit_EventHandlers {
	class wolf_arsenal_preload {
		init = "call compile preProcessFileLineNumbers '\z\wolf\server\arsenal_preload\XEH_preInit.sqf'";
	};
};
