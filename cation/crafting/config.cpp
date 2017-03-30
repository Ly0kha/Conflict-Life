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

    category[] = { //Kategorien
        {
            "weapon", //Variable
            "Waffen", //Text
            {"hgun_P07_F","",{"diamond_cut",2,"copper_refined",1},"",""}, //{Item 1,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"",""},
            {"SMG_01_F","(call life_adminlevel) > 0",{"copper_refined",3,"iron_refined",3,"diamond_cut",1},"",""} //{Item 2,Bedingung (default: ""),{benötigtes Item1, benötigte Anzahl des Item1, benötigtes Item2, benötigte Anzahl des Item2},"",""} Kein Komma beim letzten!
        }, //Komma
        {
            "uniform",
            "Uniformen",
            {"U_IG_Guerilla1_1","",{"copper_refined",1},"",""}
        },
        {
            "backpack",
            "Rucksäcke",
            {"B_Carryall_oli","",{"diamond_cut",1},"",""}
        },
        {
            "vest",
            "Vesten",
            {"V_Press_F","",{"copper_refined",1},"",""}
        },
        {
            "item",
            "Items",
            {"iron_refined","",{"copper_refined",2},"",""},
            {"diamond_cut","",{"copper_refined",1,"iron_refined",1},"",""}
        } //Kein Komma bei letzten
    };

    craftingStations[] = { //verfügbare Kategorien an verschiedenen Crafting Stationen
        {
            "craftingKavala", //Variablennamen
            "craftingKavalaMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"uniform","vest","backpack","item","weapon"} //Variablennamen der verfügbaren Kategorien
        }, //Komma
        {
            "craftingAirfield", //Variablennamen
            "craftingAirfieldMarker", //Name des Spawnmarkers auf der Map (muss in der mission.sqm vorhanden seinen)
            {"uniform","backpack"} //Variablennamen der verfügbaren Kategorien
        } //Kein Komma bei letzten
    };
};