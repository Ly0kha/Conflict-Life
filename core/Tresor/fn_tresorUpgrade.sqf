#include "..\..\script_macros.hpp"
/*

	Author Shinji
	Upgrades the tresor 

*/

if (isnil "life_TRESOR") exitwith {};

disableSerialization;
waitUntil {!isNull (findDisplay 18504)};

_display = findDisplay 18504;
_upgradeBT = _display displayCtrl 1013;
_openTresor = _display displayCtrl 1520;
_openTresText = _display displayCtrl 1521;
_lbT = _display displayCtrl 1005;
_lbInv = _display displayCtrl 1006;
_wTres = _display displayCtrl 1009;
_wInv = _display displayCtrl 1010;

_items = life_TRESOR select 0;
_upgrade = life_TRESOR select 1;

_cost = getnumber (missionConfigFile >> "Tresor" >> (format["Tresor_%1",_upgrade+1]) >> "cost");
_spaceU = getnumber (missionConfigFile >> "Tresor" >> (format["Tresor_%1",_upgrade+1]) >> "space");
	
if (_cost > CASH && _cost > BANK) exitwith {
	hint "Nicht genug Geld!"; // nicht genug Geld... weg mit der action! ~ Cash und Bank werden gezählt... 
};
hint format ["Upgrade kostete %1$", _cost];

if (_cost > CASH) then {
	BANK = BANK - _cost;
} else {
	CASH = CASH - _cost;
};

life_TRESOR set [1,(_upgrade +1)];

[player, getPlayerUID player,(_upgrade +1)] remoteExec ["DB_fnc_upgradeTresor",2];

life_TRESOR spawn life_fnc_recItems;
[0] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;

[] spawn life_fnc_hudUpdate;