[[],{
	if (isDedicated || !hasInterface) exitWith {};
	waitUntil { alive player };
	sleep 30;
	["epicFail",false,2] call BIS_fnc_endMission;
}] remoteExec ["spawn", -2,"wolf_demo_mission"];