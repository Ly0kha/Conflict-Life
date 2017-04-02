/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };
	
	class adac_market {
        name = "STR_Shops_Market";
        side = "adac";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 750;
        sellPrice = 350;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 900;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 350;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 850;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 150;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 10;
        buyPrice = -1;
        sellPrice = 95000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 35000;
        sellPrice = 10000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 75000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 150000;
        sellPrice = 125000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 1;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 1;
        buyPrice = -1;
        sellPrice = 3200;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1450;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 1;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 1;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 1;
        buyPrice = -1;
        sellPrice = 1950;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 1;
        buyPrice = 3500;
        sellPrice = 2560;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 1;
        buyPrice = 2800;
        sellPrice = 2350;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 1;
        buyPrice = -1;
        sellPrice = 5000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 1500;
        sellPrice = 200;
        illegal = false;
        edible = 100;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 65;
        sellPrice = 50;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 75;
        sellPrice = 25;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 120;
        sellPrice = 60;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 150;
        sellPrice = 115;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 40;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 175;
        sellPrice = 150;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 700;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 1250;
        sellPrice = 1000;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 600;
        sellPrice = 400;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 750;
        sellPrice = 500;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 1000;
        sellPrice = 750;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
//############################################## Neue Items ###############################################
	class plastik {
		variable = "plastik";
		displayName = "STR_Item_plastik";
		weight = 1;
		buyPrice = -1;
		sellPrice = 62;
		illegal = false;
		edible = -1;
		icon = "icons\ico_plastik.paa";
	};
	
	class aluminium {
		variable = "aluminium";
		displayName = "STR_Item_aluminium";
		weight = 1;
		buyPrice = -1;
		sellPrice = 72;
		illegal = false;
		edible = -1;
		icon = "icons\ico_aluminium.paa";
	};
	
	class silizium {
		variable = "silizium";
		displayName = "STR_Item_silizium";
		weight = 1;
		buyPrice = -1;
		sellPrice = 71;
		illegal = false;
		edible = -1;
		icon = "icons\ico_silizium.paa";
	};
	
	class tabak {
		variable = "tabak";
		displayName = "STR_Item_Tabak";
		weight = 2;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_tabak.paa";
	};
	
	class zigarre {
		variable = "zigarre";
		displayName = "STR_Item_Zigarre";
		weight = 1;
		buyPrice = 70;
		sellPrice = 55.5;
		illegal = false;
		edible = -1;
		icon = "icons\ico_zigarre.paa";
	};
	
	class kohle {
		variable = "kohle";
		displayName = "STR_Item_Kohle";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_Kohle.paa";
	};
	
	class zuckerrohr {
		variable = "zuckerrohr";
		displayName = "STR_Item_zuckerrohr";
		weight = 2;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_zuckerrohr.paa";
	};
	
	class zucker {
		variable = "zucker";
		displayName = "STR_Item_zucker";
		weight = 1;
		buyPrice = 70;
		sellPrice = 38;
		illegal = false;
		edible = -1;
		icon = "icons\ico_zucker.paa";
	};
	
	class orangensaft {
		variable = "orangensaft";
		displayName = "STR_Item_orangensaft";
		weight = 0.5;
		buyPrice = -1;
		sellPrice = 20;
		illegal = false;
		edible = -1;
		icon = "icons\ico_orangensaft.paa";
	};
	
	class grapefruitsaft {
		variable = "grapefruitsaft";
		displayName = "STR_Item_grapefruitsaft";
		weight = 0.5;
		buyPrice = -1;
		sellPrice = 20;
		illegal = false;
		edible = -1;
		icon = "icons\ico_grapefruitsaft.paa";
	};
	
	class rum {
		variable = "rum";
		displayName = "STR_Item_rum";
		weight = 0.5;
		buyPrice = -1;
		sellPrice = 68;
		illegal = false;
		edible = -1;
		icon = "icons\ico_rum.paa";
	};
	class baumstamm {
		variable = "baumstamm";
		displayName = "STR_Item_baumstamm";
		weight = 2;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\wood.paa";
	};

	class holz {
		variable = "holz";
		displayName = "STR_Item_holz";
		weight = 1;
		buyPrice = -1;
		sellPrice = 40;
		illegal = false;
		edible = -1;
		icon = "icons\plank.paa";
	};

	class rubberU {
		variable = "rubberU";
		displayName = "STR_Item_rubberu";
		weight = 2;
		buyPrice = 89;
		sellPrice = 31;
		illegal = false;
		edible = -1;
		icon = "icons\rubberU.paa";
	};

	class rubber {
		variable = "rubber";
		displayName = "STR_Item_rubber";
		weight = 1;
		buyPrice = 120;
		sellPrice = 70.5;
		illegal = false;
		edible = -1;
		icon = "icons\rubber.paa";
	};

	class goldcoin {
		variable = "goldcoin";
		displayName = "STR_Item_goldcoin";
		weight = 2;
		buyPrice = 180;
		sellPrice = 45;
		illegal = false;
		edible = -1;
		icon = "icons\goldcoin.paa";
	};

	class nitroamine {
		variable = "nitroamine";
		displayName = "STR_Item_nitroamine";
		weight = 2;
		buyPrice = 160;
		sellPrice = 87;
		illegal = true;
		edible = -1;
		icon = "icons\nitroamine.paa";
	};

	class C4 {
		variable = "C4";
		displayName = "STR_Item_C4";
		weight = 6;
		buyPrice = 1202.5;
		sellPrice = 650;
		illegal = true;
		edible = -1;
		icon = "icons\C4.paa";
	};

	class steel {
		variable = "steel";
		displayName = "STR_Item_steel";
		weight = 1;
		buyPrice = 160;
		sellPrice = 88;
		illegal = false;
		edible = -1;
		icon = "icons\steel.paa";
	};

	class steelplate {
		variable = "steelplate";
		displayName = "STR_Item_steelplate";
		weight = 1;
		buyPrice = 150;
		sellPrice = 99;
		illegal = false;
		edible = -1;
		icon = "icons\steelplate.paa";
	};

	class wool {
		variable = "wool";
		displayName = "STR_Item_wool";
		weight = 2;
		buyPrice = -1;
		sellPrice = 28;
		illegal = false;
		edible = -1;
		icon = "icons\wool.paa";
	};

	class cloth {
		variable = "cloth";
		displayName = "STR_Item_cloth";
		weight = 1;
		buyPrice = -1;
		sellPrice = 64.5;
		illegal = false;
		edible = -1;
		icon = "icons\cloth.paa";
	};

	class sulfur {
		variable = "sulfur";
		displayName = "STR_Item_sulfur";
		weight = 2;
		buyPrice = -1;
		sellPrice = 82;
		illegal = true;
		edible = -1;
		icon = "icons\sulfur.paa";
	};

	class gunpowder {
		variable = "gunpowder";
		displayName = "STR_Item_gunpowder";
		weight = 1;
		buyPrice = -1;
		sellPrice = 96;
		illegal = true;
		edible = -1;
		icon = "icons\gunpowder.paa";
	};

	class beer {
		variable = "beer";
		displayName = "STR_Item_beer";
		weight = 0.5;
		buyPrice = -1;
		sellPrice = 82;
		illegal = false;
		edible = 100;
		icon = "icons\ico_beer.paa";
	};

	class whiskey {
		variable = "whiskey";
		displayName = "STR_Item_whiskey";
		weight = 0.5;
		buyPrice = -1;
		sellPrice = 82;
		illegal = false;
		edible = 100;
		icon = "icons\ico_whiskey.paa";
	};

	class moonshine {
		variable = "moonshine";
		displayName = "STR_Item_moonshine";
		weight = 0.5;
		buyPrice = -1;
		sellPrice = 82;
		illegal = false;
		edible = 100;
		icon = "icons\ico_moonshine.paa";
	};

	class nitro {
        variable = "nitro";
        displayName = "STR_Item_Nitro";
        weight = 2;
        buyPrice = 2500;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\nitro.paa";
	};

	class blindfold {
        variable = "blindfold";
        displayName = "STR_Item_Blindfold";
        weight = 0.5;
        buyPrice = 500;
        sellPrice = 200;
        illegal = true;
        edible = -1;
        icon = "icons\blindfold.paa";
	};

	class schrott {
        variable = "schrott";
        displayName = "STR_Item_schrott";
        weight = 1;
        buyPrice = -1;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "icons\ico_schrott.paa";
	};
	
	class geodreieck {
        variable = "geodreieck";
        displayName = "STR_Item_geodreieck";
        weight = 0.5;
        buyPrice = 50;
        sellPrice = 37;
        illegal = false;
        edible = -1;
        icon = "icons\ico_geodreieck.paa";
	};
	
	class papier {
        variable = "papier";
        displayName = "STR_Item_papier";
        weight = 0.1;
        buyPrice = 95;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "icons\ico_papier.paa";
	};
	
	//Crafting
	class barrel {
			variable = "barrel";
			displayName = "STR_Item_Barrel";
			weight = 1;
			buyPrice = 1800;
			sellPrice = -1;
			illegal = true;
			edible = -1;
			icon = "icons\craft\barrel.paa";
	};

	class butt {
			variable = "butt";
			displayName = "STR_Item_Butt";
			weight = 1;
			buyPrice = 1600;
			sellPrice = -1;
			illegal = true;
			edible = -1;
			icon = "icons\craft\butt.paa";
	};

	class sight {
			variable = "sight";
			displayName = "STR_Item_Sight";
			weight = 1;
			buyPrice = -1;
			sellPrice = -1;
			illegal = true;
			edible = -1;
			icon = "icons\craft\sight.paa";
	};

	class trigger {
			variable = "trigger";
			displayName = "STR_Item_Trigger";
			weight = 1;
			buyPrice = -1;
			sellPrice = -1;
			illegal = true;
			edible = -1;
			icon = "icons\craft\trigger.paa";
	};

	class pistolenbauplan {
			variable = "pistolenbauplan";
			displayName = "STR_Item_pistolenbauplan";
			weight = 1;
			buyPrice = -1;
			sellPrice = -1;
			illegal = false;
			edible = -1;
			icon = "icons\craft\plans.paa";
	};

	class mpbauplan {
			variable = "mpbauplan";
			displayName = "STR_Item_mpbauplan";
			weight = 1;
			buyPrice = -1;
			sellPrice = -1;
			illegal = false;
			edible = -1;
			icon = "icons\craft\plans.paa";
	};
	
	class gewehrbauplan {
			variable = "gewehrbauplan";
			displayName = "STR_Item_gewehrbauplan";
			weight = 1;
			buyPrice = -1;
			sellPrice = -1;
			illegal = true;
			edible = -1;
			icon = "icons\craft\plans.paa";
	};
	
	class sturmgewehrbauplan {
			variable = "sturmgewehrbauplan";
			displayName = "STR_Item_sturmgewehrbauplan";
			weight = 1;
			buyPrice = -1;
			sellPrice = -1;
			illegal = true;
			edible = -1;
			icon = "icons\craft\plans.paa";
	};
//################################################## FAHRZEUGE ##################################################

	class hemtttransport {
		variable = "hemtttransport";
		displayName = "STR_Item_hemtttransport";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\lkw.paa";
	};
	
	class golf {
		variable = "golf";
		displayName = "Golf 2 GTI Babyblau";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_golf.paa";
	};
	
	class tempestdevice {
		variable = "tempestdevice";
		displayName = "STR_Item_tempestdevice";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\lkw.paa";
	};
	class shounkafordgt {
		variable = "shounkafordgt";
		displayName = "STR_Item_shounkafordgt";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_golf.paa";
	};
	class supratuned {
		variable = "supratuned";
		displayName = "STR_Item_supratuned";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_golf.paa";
	};
	class mtvr_4X4 {
		variable = "mtvr_4X4";
		displayName = "STR_Item_mtvr_4X4";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\lkw.paa";
	};
	class mtvr_MK23 {
		variable = "mtvr_MK23";
		displayName = "STR_Item_mtvr_MK23";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\lkw.paa";
	};
	class mtvr_MK27 {
		variable = "mtvr_MK27";
		displayName = "STR_Item_mtvr_MK27";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\lkw.paa";
	};
	class mtvr_MK27T {
		variable = "mtvr_MK27T";
		displayName = "STR_Item_mtvr_MK27T";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\lkw.paa";
	};
//################################################## Helikopter ##################################################
	class uh1c {
		variable = "uh1c";
		displayName = "STR_Item_uh1c";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class orcaschwarz {
		variable = "orcaschwarz";
		displayName = "STR_Item_orcaschwarz";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class as532red {
		variable = "as532red";
		displayName = "STR_Item_as532red";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class as532blue {
		variable = "as532blue";
		displayName = "STR_Item_as532blue";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class suprasecret {
		variable = "suprasecret";
		displayName = "STR_Item_suprasecret";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_golf.paa";
	};
	class cadieldorado {
		variable = "cadieldorado";
		displayName = "STR_Item_cadieldorado";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_golf.paa";
	};
	class corvettec1 {
		variable = "corvettec1";
		displayName = "STR_Item_corvettec1";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_golf.paa";
	};
	class am1964 {
		variable = "am1964";
		displayName = "STR_Item_am1964";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_golf.paa";
	};
	//##########################################################################
	class aw159 {
		variable = "aw159";
		displayName = "STR_Item_aw159";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class sa330 {
		variable = "sa330";
		displayName = "STR_Item_sa330";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class mi17camo {
		variable = "mi17camo";
		displayName = "STR_Item_mi17camo";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class chinook {
		variable = "chinook";
		displayName = "STR_Item_chinook";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class mi6camo {
		variable = "mi6camo";
		displayName = "STR_Item_mi6camo";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class c47skytrain {
		variable = "c47skytrain";
		displayName = "STR_Item_c47skytrain";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class mv22 {
		variable = "mv22";
		displayName = "STR_Item_mv22";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class mv22cargo {
		variable = "mv22cargo";
		displayName = "STR_Item_mv22cargo";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class c130green {
		variable = "c130green";
		displayName = "STR_Item_c130green";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class c130greencargo {
		variable = "c130greencargo";
		displayName = "STR_Item_c130greencargo";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class c130black {
		variable = "c130black";
		displayName = "STR_Item_c130black";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\craft\heli.paa";
	};
	class belair {
		variable = "belair";
		displayName = "STR_Item_belair";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "icons\ico_golf.paa";
	};
//################################################## AUTOTEILE ##################################################
	class reifen {
			variable = "reifen";
			displayName = "STR_Item_reifen";
			weight = 0.5;
			buyPrice = -1;
			sellPrice = -1;
			illegal = false;
			edible = -1;
			icon = "icons\craft\reifen.paa";
	};
	class engine {
			variable = "engine";
			displayName = "STR_Item_Engine";
			weight = 0.5;
			buyPrice = -1;
			sellPrice = -1;
			illegal = false;
			edible = -1;
			icon = "icons\craft\engine.paa";
	};
	class karosserie {
			variable = "karosserie";
			displayName = "STR_Item_karosserie";
			weight = 0.5;
			buyPrice = -1;
			sellPrice = -1;
			illegal = false;
			edible = -1;
			icon = "icons\craft\karosserie.paa";
	};
	class autoglas {
			variable = "autoglas";
			displayName = "STR_Item_autoglas";
			weight = 0.5;
			buyPrice = -1;
			sellPrice = -1;
			illegal = false;
			edible = -1;
			icon = "icons\craft\autoglas.paa";
	};
	class elektroteile {
			variable = "elektroteile";
			displayName = "STR_Item_elektroteile";
			weight = 0.5;
			buyPrice = -1;
			sellPrice = -1;
			illegal = false;
			edible = -1;
			icon = "icons\craft\elektroteile.paa";
	};
//################################################## Mundknebel ##################################################
	class gagkit {
			variable = "gagkit";
			displayName = "STR_Item_Gagkit";
			weight = 0.5;
			buyPrice = 1000;
			sellPrice = 500;
			illegal = true;
			edible = -1;
			icon = "icons\nitro.paa";
	};
	//################################################# Krabben #####################################################
	class blaukrabbe {
			variable = "blaukrabbe";
			displayName = "STR_Item_blaukrabbe";
			weight = 1;
			buyPrice = -1;
			sellPrice = 45;
			illegal = false;
			edible = -1;
			icon = "icons\blaukrabbe.paa";
	};
	class schneekrabbe {
			variable = "schneekrabbe";
			displayName = "STR_Item_schneekrabbe";
			weight = 1;
			buyPrice = -1;
			sellPrice = 68;
			illegal = false;
			edible = -1;
			icon = "icons\schneekrabbe.paa";
	};
	class koenigskrabbe {
			variable = "koenigskrabbe";
			displayName = "STR_Item_koenigskrabbe";
			weight = 1;
			buyPrice = -1;
			sellPrice = 85;
			illegal = false;
			edible = -1;
			icon = "icons\koenigskrabbe.paa";
	};
	class krabbenkaefig {
			variable = "krabbenkaefig";
			displayName = "STR_Item_krabbenkaefig";
			weight = 1;
			buyPrice = 500;
			sellPrice = 450;
			illegal = false;
			edible = -1;
			icon = "icons\krabbenkaefig.paa";
	};
	class hummer {
			variable = "hummer";
			displayName = "STR_Item_hummer";
			weight = 1;
			buyPrice = -1;
			sellPrice = 115;
			illegal = true;
			edible = -1;
			icon = "icons\hummer.paa";
	};
	class opium {
        variable = "opium";
        displayName = "STR_Item_Opium";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = true;
        edible = -1;
        icon = "icons\ico_peach.paa";
    };
	
	class opiumseed {
        variable = "opiumseed";
        displayName = "STR_Item_Opiumseed";
        weight = 1;
        buyPrice = 68;
        sellPrice = 55;
        illegal = true;
        edible = -1;
        icon = "icons\ico_peach.paa";
    };
};
