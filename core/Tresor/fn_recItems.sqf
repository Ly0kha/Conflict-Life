#include "..\..\script_macros.hpp"
/*

	Author Shinji
	Receives items from DB

*/
disableSerialization;
waitUntil {!isNull (findDisplay 18504)};
_display = findDisplay 18504;

_upgradeBT = _display displayCtrl 1013;
_upgradeText = _display displayCtrl 1014;
_openTresor = _display displayCtrl 1520;
_openTresText = _display displayCtrl 1521;
_lbT = _display displayCtrl 1002;
_lbInv = _display displayCtrl 1005;
lbClear _lbInv ;
lbClear _lbT ;
_wTres = _display displayCtrl 1009;
_wInv = _display displayCtrl 1010;

_items = _this select 0;
_upgrade = _this select 1;

life_TRESOR = _this;

_space = getnumber (missionConfigFile >> "Tresor" >> (format["Tresor_%1",_upgrade]) >> "space");

if (_upgrade >= 13) then {
	_upgradeBT ctrlShow false;
} else {
	_upgradeBT ctrlShow true;
	_text = gettext (missionConfigFile >> "Tresor" >> "ToolTipUpgrade");
	_cost = getnumber (missionConfigFile >> "Tresor" >> (format["Tresor_%1",_upgrade+1]) >> "cost");
	_spaceU = getnumber (missionConfigFile >> "Tresor" >> (format["Tresor_%1",_upgrade+1]) >> "space");
	
	_text = format[_text,[_cost] call life_fnc_numberText,[_spaceU] call life_fnc_numberText];
	
	_upgradeText ctrlSetText _text;

	if (_cost > CASH && _cost > BANK) then {
		_upgradeBT ctrlEnable false; // nicht genug Geld... weg mit der action! ~ Cash und Bank werden gezählt... 
	};
};


_w = (_items select 1);

_wTres ctrlSetText (format ["%1 / %2",_w, _space]);
_wInv ctrlSetText (format ["%1 / %2",life_carryWeight, life_maxWeight]);

{
	_item = _x select 0;
	_count = _x select 1;
	_lbT lbAdd format ["[%1] - %2",_count,localize (getText(missionConfigFile >> "VirtualItems" >>_item >> "displayName"))];
    _lbT lbSetData [(lbSize _lbT)-1,  _item];   
	_icon = getText(missionConfigFile >> "VirtualItems" >> (_item) >> "icon");
	if (!(_icon isEqualTo "")) then {
        _lbT lbSetPicture [(lbSize _lbT)-1,_icon];
    };
} foreach (_items select 0);

{
    if (ITEM_VALUE(configName _x) > 0) then { 
		// nur legale Items...
		if ((getNumber(missionConfigFile >> "VirtualItems" >> (configName _x) >> "illegal")) < 1 ) then {
			_lbInv lbAdd format ["[%1] - %2",ITEM_VALUE(configName _x),localize (getText(_x >> "displayName"))];
			_lbInv lbSetData [(lbSize _lbInv)-1, configName _x];
			//_icon = M_CONFIG(getText,"VirtualItems",configName _x,"icon");
			_icon = getText(missionConfigFile >> "VirtualItems" >> (configName _x) >> "icon");
			
			if (!(_icon isEqualTo "")) then {
				_lbInv lbSetPicture [(lbSize _lbInv)-1,_icon];
			};
		};
    };
} forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));


if (_upgrade > 0) then {
	_openTresor ctrlShow false; // zum anzeigen das der Tresor geöffnet wird und die Daten von der DB kommen...	
	_openTresText ctrlShow false;	
} else {
	_openTresText ctrlSetText "Du besitzt kein Fach.";
};
