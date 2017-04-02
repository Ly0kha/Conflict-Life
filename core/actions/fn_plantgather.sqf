#include "..\..\script_macros.hpp"
private["_plantsCfg","_curConfig","_zoneSize","_plantZones","_zone","_models","_nearplant","_grown","_amount","_diff","_itemName"];

if (life_action_inUse) exitWith {};
if !(isNull objectParent player) exitWith {};
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};

life_action_inUse = true;
_plantsCfg = missionConfigFile >> "CfgPlants";
_zone="";
for "_i" from 0 to count(_plantsCfg)-1 do {

    _curConfig = _plantsCfg select _i;
    _zoneSize = getNumber(_curConfig >> "zoneSize");
	_models = getArray (_curConfig >> "model");
    _plantZones = getArray(_curConfig >> "zones");
	_amount=getNumber(_curConfig >> "amount");
    {
        if ((player distance (getMarkerPos _x)) < _zoneSize) exitWith {_zone = _x;};
    } forEach _plantZones;
    if (_zone != "") exitWith {};
};
if (_zone isEqualTo "") exitWith {life_action_inUse = false;};
_nearPlant=(nearestObjects [player, [_models select (count _models -1)], 3]) select 0;
if(count _nearPlant==0) exitWith{life_action_inUse = false;};
_grown=_nearPlant getVariable "item";
if(isNil "_grown") exitWith{life_action_inUse=false;};
_diff = [_grown,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if (_diff isEqualTo 0) exitWith {
    hint localize "STR_NOTF_InvFull";
    life_action_inUse = false;
};
if ([true,_grown,_diff] call life_fnc_handleInv) then {
    _itemName = M_CONFIG(getText,"VirtualItems",_grown,"displayName");
    titleText[format [localize "STR_NOTF_Gather_Success",(localize _itemName),_diff],"PLAIN"];
};
["Farming"] spawn mav_ttm_fnc_addExp;
life_action_inUse = false;
