private["_trucks","_truck","_found","_garbs","_msg"];
if (life_action_inUse) exitWith {};
if !(isNull objectParent player) exitWith {};
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};
life_action_inUse=true;
_trucks=nearestObjects[player,["O_T_Truck_03_repair_ghex_F"],20];
_found=false;
{
	if(_x in life_vehicles)exitWith{_truck=_x;_found=true;};
}forEach _trucks;
if(_found)then{
	_garbs=_truck getVariable "garb";
	if (isNil "_garbs")then{_garbs = 0;_truck setVariable["garb",0,true];};
	if (_garbs>0)then{
		_msg=format ["Du hast %1 für %2 Muellcontainer erhalten",(_garbs*25000),_garbs];
		CASH=CASH+(_garbs*25000);
		["TaskSucceeded",["",_msg]] call BIS_fnc_showNotification;
		["ItemProcessed"] spawn mav_ttm_fnc_addExp;
	}else{["TaskFailed",["","Da ist nix drin!"]] call BIS_fnc_showNotification;};
};
life_action_inUse=false;