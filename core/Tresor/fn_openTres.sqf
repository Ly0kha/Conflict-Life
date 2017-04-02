/*

	Author Shinji
	Starts up the Tresor for Dialog interactions

*/

_ok = createDialog "TresorDialog";
disableSerialization;
waitUntil {!isNull (findDisplay 18504)};
_display = findDisplay 18504;

_upgrade = _display displayCtrl 1013;
_upgrade ctrlShow false;

_openTresText = _display displayCtrl 1521;
_openTresText ctrlSetText "Fach wird entsperrt...";

[player, getPlayerUID player] remoteExec ["DB_fnc_getTresor",2];  // fragt DB ab wegen tresor items...