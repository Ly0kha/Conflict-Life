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
            { "arifle_TRG20_F","",{"apple",1},"",""},
			{ "hgun_Rook40_F", "",{"apple",1},"",""},
            { "hgun_Pistol_01_F", "",{"apple",1},"",""},
            { "hgun_Pistol_heavy_02_F", "",{"apple",1},"",""},
            { "hgun_ACPC2_F", "",{"apple",1},"",""},
            { "SMG_05_F", "",{"apple",1},"",""},
            { "hgun_PDW2000_F", "",{"apple",1},"",""},
            { "arifle_Katiba_F", "",{"apple",1},"",""},
            { "srifle_DMR_01_F", "",{"apple",1},"",""},
            { "arifle_SDAR_F", "",{"apple",1},"",""},
            { "arifle_AK12_F", "",{"apple",1},"",""},
            { "arifle_AKS_F", "",{"apple",1},"",""},
            { "arifle_AKM_F", "",{"apple",1},"",""},
            { "arifle_ARX_blk_F", "",{"apple",1},"",""},
            { "arifle_SPAR_01_blk_F", "",{"apple",1},"",""},
            { "arifle_CTAR_blk_F", "",{"apple",1},"",""}
        }, 
		{
            "ammo",
            "Magazine",
            {"30Rnd_556x45_Stanag","",{"apple",1},"",""}
        },
        {
            "uniform",
            "Uniformen",
            {"U_IG_Guerilla1_1","",{"apple",1},"",""}
        },
        {
            "backpack",
            "Rucksäcke",
            {"B_Carryall_oli","",{"apple",1},"",""}
        },
        {
            "vest",
            "Vesten",
            {"V_Press_F","",{"apple",1},"",""}
        },
        {
            "item", 			//Boltcutter usw.
            "Items",
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"",""}
        },
		{
            "item2",			//Baupläne usw.
            "Baupläne",
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"",""}
        }, 
		{
            "item3",
            "Fahrzeugteile",	//Fahrzeugteile usw.
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"",""}
        }, 
		{
            "item4",
            "Items",			//
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"",""}
        }, 
		{
            "item5",
            "Items",
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"",""}
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