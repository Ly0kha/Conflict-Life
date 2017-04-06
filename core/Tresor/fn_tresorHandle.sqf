/*

	Author Shinji
	Handles Tresor Item clicks or edits...

*/

_mode = _this select 0;

disableSerialization;
waitUntil {!isNull (findDisplay 18504)};
_display = findDisplay 18504;

_lbT = _display displayCtrl 1002;
_lbInv = _display displayCtrl 1005;


_myLB = "";
_edit = "0";
_handle	 = false;
switch(_mode) do {
	
	case 0: {
		_edit = ctrltext(_display displayCtrl 1007);	
		_myLB = _lbInv;
	};
	case 1: {
		_edit = ctrltext(_display displayCtrl 1006);
		_myLB = _lbT;
	};
	case 2: { 
		_edit = ctrltext(_display displayCtrl 1007);	
		_myLB = _lbInv;
	};
	case 3: { 
		_edit = ctrltext(_display displayCtrl 1006);
		_myLB = _lbT;
	};
};

if (!([_edit] call TON_fnc_isnumber)) exitWith {hint localize "STR_NOTF_notNumberFormat";};
if (parseNumber(_edit) <= 0) exitWith {hint localize "STR_NOTF_enterAmountRemove";};
if (lbCurSel _myLB < 0) exitwith {};

if (TRESOR_CALC) exitwith {};
if (isnil "TRESOR_HANDLE") then {
	TRESOR_HANDLE = false;
};
if (TRESOR_HANDLE) exitwith {};
TRESOR_HANDLE = true;

_sel = lbCurSel _myLB;
_data = (_myLB lbData _sel);


_weightI = getNumber(missionConfigFile >> "VirtualItems" >> (_data) >> "weight");

_weight = _weightI * (parseNumber _edit);
_space = getnumber (missionConfigFile >> "Tresor" >> (format["Tresor_%1",(life_TRESOR select 1)]) >> "space");


switch(_mode) do {
	
	case 0: {
		if (((life_TRESOR select 0) select 1) + _weight > _space) exitwith {hint localize "STR_NOTF_InvFull"; TRESOR_HANDLE = false;}; 
		if (!([false,_data,(parseNumber _edit)] call life_fnc_handleInv)) exitWith {hint localize "STR_NOTF_couldNotRemoveThatMuch";TRESOR_HANDLE = false;};
		
		_deep = [((life_TRESOR select 0)select 0), _data] call BIS_fnc_findNestedElement;
		
		if (count _deep < 2) then {	
			_arr = (((life_TRESOR select 0)select 0));
			_arr = _arr + [[_data,(parseNumber _edit)]];		
			(((life_TRESOR select 0)))set [0,_arr];				
		} else {		
			(((life_TRESOR select 0) select 0)) set [(_deep select 0),[_data, ((((life_TRESOR select 0) select 0)select (_deep select 0)) select 1) + (parseNumber _edit)]];
		};
		(life_TRESOR select 0) set [1,(((life_TRESOR select 0) select 1) + _weight)];
		_handle	 = true;
	};
	case 1: {
		_arr = (((life_TRESOR select 0)select 0));
		if (count _arr < 1) exitwith {TRESOR_HANDLE = false;};
		_item = ((((life_TRESOR select 0) select 0) select _sel));
		if ((_item select 1) < (parseNumber _edit)) exitwith {hint localize "STR_NOTF_couldNotRemoveThatMuch"; TRESOR_HANDLE = false;};
		if ((_weight)+life_carryWeight > life_maxWeight) exitwith {hint localize "STR_NOTF_InvFull"; TRESOR_HANDLE = false;};
		if (!([true,_data,(parseNumber _edit)] call life_fnc_handleInv)) exitWith {hint localize "STR_NOTF_InvFull"; TRESOR_HANDLE = false;};
		if (((_item select 1) - (parseNumber _edit)) <=0) then {
			_arr = (((life_TRESOR select 0)select 0));
			_arr set [_sel,-1];
			_arr = _arr	- [-1];
			(((life_TRESOR select 0)))set [0,_arr];			
		} else {
			(((life_TRESOR select 0)select 0)select _sel)  set [1,((_item select 1) - (parseNumber _edit))];
		};
		(life_TRESOR select 0) set [1,(((life_TRESOR select 0) select 1) - _weight)];
		_handle	 = true;
	};
	case 2: {			
		while {true} do {
			if (((life_TRESOR select 0) select 1) + _weightI > _space) exitwith {TRESOR_HANDLE = false;}; 
			if (!([false,_data,1] call life_fnc_handleInv)) exitWith {TRESOR_HANDLE = false;};
			_deep = [((life_TRESOR select 0) select 0), _data] call BIS_fnc_findNestedElement;			
			if (count _deep < 2) then {	
				_arr = (((life_TRESOR select 0)select 0));
				_arr = _arr + [[_data,1]];		
				(((life_TRESOR select 0)))set [0,_arr];				
			} else {		
				(((life_TRESOR select 0) select 0)) set [(_deep select 0),[_data, ((((life_TRESOR select 0) select 0)select (_deep select 0)) select 1) + 1]];
			};
			(life_TRESOR select 0) set [1,(((life_TRESOR select 0) select 1) + _weightI)];
			_handle = true;			
		};		
	};
	case 3: {		
		while{true} do {
			_item = (((life_TRESOR select 0) select 0) select _sel);
			if (((_item select 1) - 1) <= 0) exitwith {
				if ((_weightI)+life_carryWeight <= life_maxWeight) then {
					if (([true,_data,(1)] call life_fnc_handleInv)) then {		
						_arr = (((life_TRESOR select 0)select 0));
						_arr set [_sel,-1];
						_arr = _arr	- [-1];
						(((life_TRESOR select 0)))set [0,_arr];		
						(life_TRESOR select 0) set [1,(((life_TRESOR select 0) select 1) - _weightI)];
					};
				};
				TRESOR_HANDLE = false;
			}; 
			if ((_weightI)+life_carryWeight > life_maxWeight) exitwith {hint localize "STR_NOTF_InvFull";};
			if (!([true,_data,(1)] call life_fnc_handleInv)) exitWith {hint localize "STR_NOTF_InvFull";};			
			(((life_TRESOR select 0)select 0)select _sel)  set [1,((_item select 1) - (1))];			
			(life_TRESOR select 0) set [1,(((life_TRESOR select 0) select 1) - _weightI)];			
			_handle = true;	
		};
	};
};

if(!_handle) exitwith {TRESOR_HANDLE = false;};

if (GANG_TRES) then {	
	[1,player, ((group player)getvariable ["gang_id",-1]), (life_TRESOR select 0)] remoteExec ["DB_fnc_changeTresor",2];
	life_TRESOR spawn life_fnc_recItems;
	TRESOR_HANDLE = false;
} else {
	[0,player, getPlayerUID player, (life_TRESOR select 0)] remoteExec ["DB_fnc_changeTresor",2];
	life_TRESOR spawn life_fnc_recItems;
	TRESOR_HANDLE = false;
};