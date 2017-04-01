// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-5% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-10% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 25;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 25 Required, 7 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-20% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Paycheck
class perk_paycheck_1 {
	displayName = "Paycheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+25% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_2 {
	displayName = "Paycheck 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Level 8 Required, 3 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+50% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_3 {
	displayName = "Paycheck 3";
	requiredPerkPoints = 6;
	requiredLevel = 21;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Level 21 Required, 6 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+100% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_farming_1 {
	displayName = "Farming 1";
	requiredPerkPoints = 2;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 2 Perk Points";
	description = "Lerne mit der Spitzhacke richtig umzugehen, um effizienter abzubauen!<br/><br/><t color='#10FF45'>+10% schnelleres Farmen</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_farming_2 {
	displayName = "Farming 2";
	requiredPerkPoints = 3;
	requiredLevel = 10;
	requiredPerk = "perk_farming_1";
	subtitle = "Level 10 Required, 3 Perk Points";
	description = "Lerne mit der Spitzhacke richtig umzugehen, um effizienter abzubauen!<br/><br/><t color='#10FF45'>+20% schnelleres Farmen</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_farming_3 {
	displayName = "Farming 3";
	requiredPerkPoints = 3;
	requiredLevel = 20;
	requiredPerk = "perk_farming_2";
	subtitle = "Level 20 Required, 5 Perk Points";
	description = "Lerne mit der Spitzhacke richtig umzugehen, um effizienter abzubauen!<br/><br/><t color='#10FF45'>+20% schnelleres Farmen</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
// -- Faster processing
class perk_processing_1 {
	displayName = "Processing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+10% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_2 {
	displayName = "Processing Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processing_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+15% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_3 {
	displayName = "Processing Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 17;
	requiredPerk = "perk_processing_2";
	subtitle = "Level 17 Required, 4 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+25% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- ################################################## Faster crafting ##################################################
class perk_crafting_1 {
	displayName = "Crafting 1";
	requiredPerkPoints = 2;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "LBenötigt: Level 28 || 4 Skillpunkte";
	description = "Erlerne schnelleres Craften<br/><br/><t color='#10FF45'>+10% schnelleres Craften</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_crafting_2 {
	displayName = "Crafting 2";
	requiredPerkPoints = 4;
	requiredLevel = 10;
	requiredPerk = "perk_crafting_1";
	subtitle = "LBenötigt: Level 28 || 4 Skillpunkte";
	description = "Erlerne schnelleres Craften<br/><br/><t color='#10FF45'>+15% schnelleres Craften</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_crafting_3 {
	displayName = "Crafting 3";
	requiredPerkPoints = 6;
	requiredLevel = 15;
	requiredPerk = "perk_crafting_2";
	subtitle = "Benötigt: Level 28 || 4 Skillpunkte";
	description = "Erlerne schnelleres Craften<br/><br/><t color='#10FF45'>+25% schnelleres Craften</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
// -- ################################################## Faster crafting ##################################################
class perk_repair_1 {
	displayName = "Reparieren 1";
	requiredPerkPoints = 1;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Benötigt: Level 2 || 1 Skillpunkte";
	description = "Erlerne schnelleres Reparieren<br/><br/><t color='#10FF45'>+10% schnelleres Reparieren</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_repair_2 {
	displayName = "Reparieren 1";
	requiredPerkPoints = 2;
	requiredLevel = 8;
	requiredPerk = "perk_repair_1";
	subtitle = "Benötigt: Level 8 || 2 Skillpunkte";
	description = "Erlerne schnelleres Reparieren<br/><br/><t color='#10FF45'>+15% schnelleres Reparieren</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_repair_3 {
	displayName = "Reparieren 1";
	requiredPerkPoints = 15;
	requiredLevel = 4;
	requiredPerk = "perk_repair_2";
	subtitle = "Benötigt: Level 15 || 4 Skillpunkte";
	description = "Erlerne schnelleres Reparieren<br/><br/><t color='#10FF45'>+25% schnelleres Reparieren</t>";
	initScript = "crafting_3";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};


// -- ################################################## Meisterdieb ##################################################
class perk_aufbrechmeister {
	displayName = "Aufbrechmeister";
	requiredPerkPoints = 2;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Benötigt: Level 15 || 4 Skillpunkte";
	description = "Der erste Schritt zum Meiterdieb. Nehme das Basistrainign in Anspruch um danach weitere/bessere Sachen zu erlernen!<br/><br/><t color='#10FF45'>Schaltet frei: Lockpicking, Hausfriedensbruch, Bankräuber</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_haus_1 {
	displayName = "Hausspezialist 1";
	requiredPerkPoints = 3;
	requiredLevel = 15;
	requiredPerk = "perk_aufbrechmeister";
	subtitle = "Level 15 Required, 3 Perk Points";
	description = "Erlerne wie man schneller Häuser aufbricht, um schneller als die Polizei zu sein!<br/><br/><t color='#10FF45'>+10% schnelleres Aufbrechen</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_haus_2 {
	displayName = "Hausspezialist 1";
	requiredPerkPoints = 5;
	requiredLevel = 25;
	requiredPerk = "perk_haus_1";
	subtitle = "Level 25 Required, 5 Perk Points";
	description = "Erlerne wie man schneller Häuser aufbricht, um schneller als die Polizei zu sein!<br/><br/><t color='#10FF45'>+20% schnelleres Aufbrechen</t>";
	initScript = "";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
class perk_locksmith_1 {
	displayName = "Locksmith";
	requiredPerkPoints = 5;
	requiredLevel = 7;
	requiredPerk = "perk_aufbrechmeister";
	subtitle = "Level 7 Required, 5 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+10% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_2 {
	displayName = "Locksmith 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+15% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_3 {
	displayName = "Locksmith 3";
	requiredPerkPoints = 4;
	requiredLevel = 28;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Level 28 Required, 4 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+25% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};