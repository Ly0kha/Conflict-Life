private["_plantsCfg","_curConfig","_zoneSize","_plantZones","_zone","_models","_times","_offsets","_item","_reqItem","_cnt","_offpos","_pos","_plant","_near"];

if (life_action_inUse) exitWith {};
if !(isNull objectParent player) exitWith {};
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};

life_action_inUse = true;
_plantsCfg = missionConfigFile >> "CfgPlants";
_reqItem= "";
_zone="";
for "_i" from 0 to count(_plantsCfg)-1 do {

    _curConfig = _plantsCfg select _i;
    _zoneSize = getNumber(_curConfig >> "zoneSize");
    _plantZones = getArray(_curConfig >> "zones");
	_models = getArray (_curConfig >> "model");
	_times = getArray (_curConfig >> "time");
	_offsets = getArray (_curConfig >> "offset");
	_item= getText (_curConfig >> "item");
	hint format ["Debug: %1", _item];
	_reqItem= getText (_curConfig >> "reqItem");
    {
        if ((player distance (getMarkerPos _x)) < _zoneSize) exitWith {_zone = _x;};
    } forEach _plantZones;
    if (_zone != "") exitWith {};
};
if (_zone isEqualTo "") exitWith {life_action_inUse = false;};

_pos=getPosASL player;
_cnt=0;
_near=false;
for "_j" from 0 to count(_models)-1 do {
	if(count (nearestObjects [position player, [], 1] select {typeOf _x == (_models select _j)})>0)exitWith{_near=true;};
};
if(_near)exitWith{life_action_inUse=false;};
if([false,_reqItem,1] call life_fnc_handleInv)then{
	player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil {
		animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	};
	life_action_inUse = false;
	{
		_offpos =[0,0,(_offsets select _cnt)] vectorAdd _pos; 
		_plant = createSimpleObject [_x,_offpos];
		if(_cnt== count(_models) -1) exitWith{_plant setVariable ["item",_item,true];};
		uisleep (_times select _cnt);
		deleteVehicle _plant;
		_cnt=_cnt+1;
	}forEach _models;
}else{
	life_action_inUse = false;
	hint format ["Du hast keine %1 mehr",_reqItem];
};
