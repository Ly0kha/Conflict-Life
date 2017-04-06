/*

	Author Shinji
	Starts up the Tresor for Dialog interactions

	
	Aufruf Mode : 
		#0 = Normal
		#1 = Gang (set missionnamespace for non-use from other gang players)
		#2 = Gang (set missionNamespace for anyone else can join it now)
*/

// Gang Update ~ 


_mode = _this select 0;


_group = group player;
if (_group == grpNull) exitwith {};
if ((_group getvariable["gang_id",-1]) < 0) exitwith {};

_ok = createDialog "TresorDialog";
disableSerialization;
waitUntil {!isNull (findDisplay 18504)};
_display = findDisplay 18504;

_upgrade = _display displayCtrl 1013;
_upgrade ctrlShow false;

_openTresText = _display displayCtrl 1521;
_openTresText ctrlSetText "Fach wird entsperrt...";

if (_mode == 1) then { // gang
	[_mode, player, _group] remoteExec ["DB_fnc_getTresor",2];  // fragt DB ab wegen tresor items...
	GANG_TRES = true;
} else {
	[_mode, player, getPlayerUID player] remoteExec ["DB_fnc_getTresor",2];  // fragt DB ab wegen tresor items...
	GANG_TRES = false;
};

waitUntil {isNull (findDisplay 18504)};
[2, player, getPlayerUID player] remoteExec ["DB_fnc_getTresor",2]; // deaktiviert den Zugriff vom Spieler wieder... bei crash?? hmm
