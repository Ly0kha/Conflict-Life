private["_ter", "_garb", "_empty","_found"];
_found=false;
_ter=nearestTerrainObjects [player, ["HIDE"], 5]; 
{
	if((str _x) find "garbagecontainer" >=0)exitWith{_garb = _x;_found =true;};
}forEach _ter;
if(_found)then{
	if not (isObjectHidden _garb)then{
		_garb hideObject true;
		_dummygarb = createVehicle ["Land_GarbageContainer_closed_F", _garb,[], 0, "NONE"];
		_dummygarb attachTo [player, [0, 2, 0.8]];
		player addAction ["Mülltonne ausleeren", {
			_dgarb=_this select 3 select 1;
			_garbtrucks=[];
			_garbtrucks=nearestObjects[player,["O_T_Truck_03_repair_ghex_F"],10];
			_success=false;
			if((count _garbtrucks)> 0)then{
				_garbtruck=(nearestObjects[player,["O_T_Truck_03_repair_ghex_F"],10])select 0;
				_space=_garbtruck getVariable "garb";
				_cap=5;
				if not (isNil "_space")then{
					if(_space < _cap)then{
						detach _dgarb;
						_dgarb attachto [_garbtruck,[0,-5,0]];
						_garbtruck setVariable["garb",(_space-1),true];
						uisleep 2;	
						_success=true;
					}else{hint "Muellwagen voll"};
				}else {hint "Da ist kein Muellwagen"};
			}else {hint "Da ist kein Muellwagen"};		
			_rgarb = _this select 3 select 0;
			player removeAction (_this select 2);
			deleteVehicle _dgarb;
			if(_success)then{uisleep 60};
			_rgarb hideObject false;
		}, [_garb,_dummygarb]];
	}
};
