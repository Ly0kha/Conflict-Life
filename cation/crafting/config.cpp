/*
    File: config.cpp
    Author: B4v4r!4n_Str!k3r (julianbauer@cationstudio.com)
    Licence: THIS FILE AND EXTRACTS OF IT IS THE MINDSET OF CATIONSTUDIO
             AND ONLY AUTHORIZED PEOPLE/SERVERS ARE ALLOWED TO USE IT.
    Description: Master config for crafting system. 
*/
#include "dialog\craft.hpp"
class Cation_Crafting {

    version_4_4 = 1; // version 3.x - 4.3 -> 0 | version 4.4+ -> 1
    
    //Texte
    Craftingmenu = "Baumenü";
    CraftStats = "Sachen zum Bauen";
    CraftingMaterials = "Benötigte Sachen";
    CraftButton = "Bauen!";
    Close = "Schließen";
    Craft = "Baue";
    NoMaterial = "Du hast nicht alle Baumaterialien!";
    Process = "Du hast folgendes hergestellt:";
    Process_Stay = "Du musst innerhalb von 10m bleiben, um craften zu können.";
    NotificationBackpack = "Du hast bereits einen Rucksack! Pack den alten erstmal weg.";
    NotificationVest = "Du hast bereits eine Veste! Pack die alte erst einmal weg.";
    NotificationUnifrom = "Du hast bereits etwas an! Mach dich nackt und versuch es nochmal.";
    SelectItemFirst = "Du musst zuerst einen Gegenstand auswählen!";
    NothingNeeded = "Es wird nichts benötigt!";
    NoRoom = "Du hast nicht genug Platz für den Gegenstand.";
    Veh_Block = "Ein Fahrzeug blockiert gerade den Spawnpunkt";
    NoSpawnpoint = "Kein Spawnpoint verfügbar";
    Color = "Farbe";
	//{"SMG_01_F","(call life_exp_level) > 5",{"copper_refined",3,"iron_refined",3,"diamond_cut",1},"",""} //{Item 2,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"",""} Kein Komma beim letzten!

    category[] = {
        {
            "weapon", //Variable
            "Waffen", //Text
			//{Item 1,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"",""},
			{ "hgun_Rook40_F", "",											{"apple",1},"",""},
            { "hgun_Pistol_01_F", "",										{"apple",1},"",""},
            { "hgun_Pistol_heavy_02_F", "",									{"apple",1},"",""},
            { "hgun_ACPC2_F", "",											{"apple",1},"",""},
            { "SMG_05_F", "",												{"apple",1},"",""},
            { "hgun_PDW2000_F", "",											{"apple",1},"",""},
            { "arifle_TRG20_F","(call life_currentExpLevel) >= 10",			{"apple",1},"",""},
            { "arifle_Katiba_F", "(call life_currentExpLevel) >= 10",		{"apple",1},"",""},
            { "srifle_DMR_01_F", "(call life_currentExpLevel) >= 10",		{"apple",1},"",""},
            { "arifle_SDAR_F", "(call life_currentExpLevel) >= 10",			{"apple",1},"",""},
            { "arifle_AK12_F", "(call life_currentExpLevel) >= 10",			{"apple",1},"",""},
            { "arifle_AKS_F", "(call life_currentExpLevel) >= 10",			{"apple",1},"",""},
            { "arifle_AKM_F", "(call life_currentExpLevel) >= 10",			{"apple",1},"",""},
            { "arifle_ARX_blk_F", "(call life_currentExpLevel) >= 10",		{"apple",1},"",""},
            { "arifle_SPAR_01_blk_F", "(call life_currentExpLevel) >= 10",	{"apple",1},"",""},
            { "arifle_CTAR_blk_F", "(call life_currentExpLevel) >= 10",		{"apple",1},"",""}
        }, 
		{
            "ammo",
            "Munition",
            { "16Rnd_9x21_Mag", "",				{"apple",1},"",""},
            { "6Rnd_45ACP_Cylinder", "",		{"apple",1},"",""},
            { "9Rnd_45ACP_Mag", "",				{"apple",1},"",""},
            { "30Rnd_9x21_Mag", "",				{"apple",1},"",""},
            { "30Rnd_9x21_Mag_SMG_02", "",		{"apple",1},"",""},
            { "10Rnd_9x21_Mag", "",				{"apple",1},"",""},
            { "30Rnd_556x45_Stanag", "",		{"apple",1},"",""},
            { "30Rnd_762x39_Mag_F", "",			{"apple",1},"",""},
            { "30Rnd_545x39_Mag_F", "",			{"apple",1},"",""},
            { "30Rnd_65x39_caseless_green", "",	{"apple",1},"",""},
            { "10Rnd_762x54_Mag", "",			{"apple",1},"",""},
            { "20Rnd_556x45_UW_mag", "",		{"apple",1},"",""},
            { "30Rnd_580x42_Mag_F", "",			{"apple",1},"",""}
        },
        {
            "uniform",
            "Kleidung",
            { "U_IG_Guerilla1_1", "",			{"apple",1},"",""},
            { "U_I_G_Story_Protagonist_F", "",	{"apple",1},"",""},
            { "U_I_G_resistanceLeader_F", "",	{"apple",1},"",""},
            { "U_IG_leader", "",				{"apple",1},"",""},
            { "U_O_PilotCoveralls", "",			{"apple",1},"",""},
            { "U_O_SpecopsUniform_ocamo", "",	{"apple",1},"",""},
            { "U_O_GhillieSuit", "",			{"apple",1},"",""},
            { "U_B_T_Soldier_F", "",			{"apple",1},"",""},
            { "U_I_C_Soldier_Bandit_1_F", "",	{"apple",1},"",""},
            { "U_I_C_Soldier_Bandit_2_F", "",	{"apple",1},"",""},
            { "U_I_C_Soldier_Bandit_3_F", "",	{"apple",1},"",""},
            { "U_I_C_Soldier_Bandit_4_F", "",	{"apple",1},"",""},
            { "U_I_C_Soldier_Bandit_5_F", "",	{"apple",1},"",""},
            { "U_I_C_Soldier_Camo_F", "",		{"apple",1},"",""}
        },
        {
            "backpack",
            "Rucksäcke",
            { "B_OutdoorPack_blk", "",			{"apple",1},"",""},
            { "B_AssaultPack_khk", "",			{"apple",1},"",""},
            { "B_TacticalPack_oli", "",			{"apple",1},"",""},
            { "B_Kitbag_mcamo", "",				{"apple",1},"",""},
            { "B_FieldPack_ghex_f", "",			{"apple",1},"",""},
            { "B_Bergen_sgg", "",				{"apple",1},"",""},
            { "B_Bergen_blk", "",				{"apple",1},"",""},
            { "B_Carryall_ghex_f", "",			{"apple",1},"",""},
            { "B_Bergen_tna_f", "",				{"apple",1},"",""}
        },
        {
            "vest",
            "Westen",
            { "V_Press_F","",					{"apple",1},"",""},
            { "V_BandollierB_cbr", "",			{"apple",1},"",""},
            { "V_HarnessO_brn", "",				{"apple",1},"",""},
            { "V_TacVest_khk", "",				{"apple",1},"",""},
            { "V_TacChestrig_grn_F", "",		{"apple",1},"",""}
        },
        {
            "item", 			//Boltcutter usw.
            "Itemfabrik",
            {"boltcutter","",			{"steel",20,"rubber",5},"",""},
            {"lockpick","",				{"iron_refined",2},"",""},
            {"blastingcharge","",		{"cloth",4,"C4",5,"trigger",1},"",""},
            {"goldbar","",				{"goldcoin",60,"waterBottle",12,"pliers",1,"salt_refined",10},"",""},
            {"storagesmall","",			{"steel",10,"holz",8,"cloth",5},"",""},
            {"storagebig","",			{"steel",25,"holz",10,"cloth",10},"",""}
        },
		{
            "item2",			//Baupläne usw.
            "Fahrzeuge",
            {"shounkafordgt","",		{"reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15},"",""},
            {"suprasecret","",			{"reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15},"",""},
            {"cadieldorado","",			{"reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15},"",""},
            {"corvettec1","",			{"reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15},"",""},
            {"am1964","",				{"reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15},"",""},
            {"belair","",				{"reifen",4,"engine",1,"karosserie",6,"autoglas",5,"elektroteile",15},"",""},
            {"mtvr_4X4","",				{"reifen",4,"engine",2,"karosserie",6,"autoglas",5,"elektroteile",20},"",""},
            {"mtvr_MK23","",			{"reifen",6,"engine",2,"karosserie",10,"autoglas",5,"elektroteile",25},"",""},
            {"mtvr_MK27","",			{"reifen",8,"engine",3,"karosserie",15,"autoglas",5,"elektroteile",30},"",""},
            {"mtvr_MK27T","",			{"reifen",8,"engine",3,"karosserie",15,"autoglas",5,"elektroteile",30},"",""},
            {"hemtttransport","",		{"reifen",8,"engine",2,"karosserie",10,"autoglas",5,"elektroteile",20},"",""},
            {"tempestdevice","",		{"reifen",6,"engine",2,"karosserie",10,"autoglas",5,"elektroteile",20},"",""}
        }, 
		{
            "item3",
            "Flugzeuge",	//Fahrzeugteile usw.
            {"uh1c","",					{"reifen",6,"engine",4,"karosserie",20,"autoglas",10,"elektroteile",40},"",""},
            {"orcaschwarz","",			{"reifen",6,"engine",4,"karosserie",20,"autoglas",10,"elektroteile",40},"",""},
            {"aw159","",				{"reifen",8,"engine",6,"karosserie",30,"autoglas",15,"elektroteile",45},"",""},
            {"sa330","",				{"reifen",8,"engine",6,"karosserie",30,"autoglas",15,"elektroteile",50},"",""},
            {"as532red","",				{"reifen",8,"engine",6,"karosserie",30,"autoglas",15,"elektroteile",60},"",""},
            {"as532blue","",			{"reifen",8,"engine",6,"karosserie",30,"autoglas",15,"elektroteile",60},"",""},
            {"mi17camo","",				{"reifen",8,"engine",10,"karosserie",40,"autoglas",18,"elektroteile",70},"",""},
            {"chinook","",				{"reifen",8,"engine",12,"karosserie",60,"autoglas",20,"elektroteile",90},"",""},
            {"mi6camo","",				{"reifen",8,"engine",15,"karosserie",70,"autoglas",30,"elektroteile",110},"",""},
            {"c47skytrain","",			{"reifen",8,"engine",15,"karosserie",80,"autoglas",40,"elektroteile",120},"",""},
            {"mv22","",					{"reifen",8,"engine",6,"karosserie",80,"autoglas",50,"elektroteile",140},"",""},
            {"mv22cargo","",			{"reifen",8,"engine",6,"karosserie",80,"autoglas",50,"elektroteile",140},"",""},
            {"c130green","",			{"reifen",14,"engine",12,"karosserie",80,"autoglas",50,"elektroteile",150},"",""},
            {"c130greencargo","",		{"reifen",14,"engine",12,"karosserie",80,"autoglas",50,"elektroteile",150},"",""},
            {"c130black","",			{"reifen",14,"engine",12,"karosserie",80,"autoglas",50,"elektroteile",150},"",""}
        }, 
		{
            "item4",
            "Waffenteile",			//
            {"butt","",					{"steel",5,"holz",10},"",""},
            {"sight","",				{"steel",2},"",""},
            {"barrel","",				{"steelplate",5},"",""},
            {"trigger","",				{"steel",2},"",""},
            {"pistolenbauplan","",		{"papier",15,"geodreieck",1},"",""},
            {"mpbauplan","",			{"papier",20,"geodreieck",2},"",""},
            {"sturmgewehrbauplan","",	{"papier",25,"geodreieck",3},"",""}
        }, 
		{
            "item5",
            "Fahrzeugzubehör",
            {"reifen","",				{"steel",5,"rubber",20},"",""},
            {"karosserie","",			{"steel",20,"plastik",10,"elektroteile",10,"cloth",20,"aluminium",5},"",""},
            {"engine","",				{"steel",30,"oil_processed",15,"rubber",10},"",""},
            {"autoglas","",				{"glass",5},"",""},
            {"elektroteile","",			{"copper_refined",10,"silizium",15},"",""}
        }
    };

    craftingStations[] = { //verfügbare Kategorien an verschiedenen Crafting Stationen
        {
            "craftingKavala", //Variablennamen
            "craftingKavalaMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"uniform","vest","backpack","weapon","ammo","item","item2","item3","item4","item5"} //Variablennamen der verfügbaren Kategorien
        }, //Komma
		{
            "craftingWaffen", //Variablennamen
            "craftingKavalaMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"weapon"} //Variablennamen der verfügbaren Kategorien
        }, //Komma
		{
            "craftingBauplan", //Variablennamen
            "craftingBauplanMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"item2"} //Variablennamen der verfügbaren Kategorien
        }, //Komma
		{
            "craftingFahrzeugteile", //Variablennamen
            "craftingFahrzeugteileMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"item3"} //Variablennamen der verfügbaren Kategorien
        }, //Komma
        {
            "craftingKlamotten", //Variablennamen
            "craftingKlamottenMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"uniform","backpack"} //Variablennamen der verfügbaren Kategorien
        } //Kein Komma bei letzten
    };
};