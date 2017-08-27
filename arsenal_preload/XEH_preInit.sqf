[[],{
	if (isDedicated || !hasInterface) exitWith {};
	waitUntil { alive player };
	["Preload"] call BIS_fnc_arsenal;
}] remoteExec ["spawn", -2,"wolf_preload_arsenal"];