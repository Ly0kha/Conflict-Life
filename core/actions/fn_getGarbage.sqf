private["_ter", "_garb", "_empty","_found"];
if (life_action_inUse) exitWith {};
if !(isNull objectParent player) exitWith {};
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};
_found=false;
_ter=nearestTerrainObjects [player, ["HIDE"], 5]; 
{
	if((str _x) find "garbagecontainer" >=0)exitWith{_garb = _x;_found =true;};
}forEach _ter;
if(_found)then{
	if not (isObjectHidden _garb)then{
		[_garb,true] remoteExec ["hideObjectGlobal",2];
	//	_garb hideObject true;		//muss ersetz werden mit remoteexec (hideObjectGlobal)
		_dummygarb = createVehicle ["Land_GarbageContainer_closed_F", _garb,[], 0, "NONE"];
		_dummygarb attachTo [player, [0, 2, 0.8]];
		life_action_inUse=true;
		player addAction ["Mülltonne ausleeren", {
			_dgarb=_this select 3 select 1;
			_garbtrucks=[];
			_garbtrucks=nearestObjects[player,["O_T_Truck_03_repair_ghex_F"],10];
			_success=false;
			if((count _garbtrucks)> 0)then{
				_garbtruck=_garbtrucks select 0;
				_space=_garbtruck getVariable "garb";
				if (isNil "_space")then{_space = 0;_garbtruck setVariable["garb",0,true];};				
				if(_space < 20)then{					//maximale anzahl mülltonnen im müllwagen
					detach _dgarb;
					_dgarb attachto [_garbtruck,[0,-5,0]];
					_garbtruck setVariable["garb",(_space+1),true];
					uisleep 2;	
					_success=true;
				}else{hint "Muellwagen voll"};
			}else {hint "Da ist kein Muellwagen"};		
			_rgarb = _this select 3 select 0;
			player removeAction (_this select 2);
			deleteVehicle _dgarb;
			life_action_inUse=false;
			if(_success)then{uisleep 60};
			//_rgarb hideObject false;      //muss ersetz werden mit remoteexec (hideObjectGlobal)
			[_rgarb,false] remoteExec ["hideObjectGlobal",2];
		}, [_garb,_dummygarb]];
	}
};

