class CfgPlants {
	class Opium {
		amount = 5;
		model[] = { "CUP_c_papaver_06_EP1", "CUP_c_papaver_06_EP1", "CUP_c_papaver_06_EP1", "CUP_c_papaver_07_EP1", "CUP_c_papaver_05_EP1", "CUP_c_papaver_flower03_EP1", "CUP_c_papaver_flower02_EP1" };
		time[] = {3,3,3,3,3,3,0};
		offset[] = {-0.2,-0.1,0,0.4,0.4,0.4,0.4};
		zones[] = { "opium_1" };
		item = "opium";
		zoneSize = 30;
		reqItem = "opiumseed";
	};
	class Apfelbaum {
		amount = 5;
		model[] = { "CUP_t_malus1s", "CUP_t_malus1s", "CUP_t_malus1s", "CUP_t_malus1s", "CUP_t_malus1s", "CUP_t_malus1s", "CUP_t_malus1s" };
		time[] = {10,10,10,10,10,10,0};
		offset[] = {-6,-5,-4,-3,-2,-1,0};
		zones[] = { "apple_1", "apple_2", "apple_3", "apple_4", "apple_5",};
		item = "apple";
		zoneSize = 30;
		reqItem = "opiumseed";
	};
};