#include "titles.cpp"

/*
	Author: Maverick Applications
	Tanoa Life Airport Plane Taxi Script
*/

class Maverick_PlaneTaxis {
	class Costs {
		pricePerMeter = 2; // Given in dollars
		moneyVariable = "life_atmcash";
	};

	class Messages {
		notEnoughMoney = "You do not have enough money to fly to this airport";
		noSpaceForPlane = "There is a vehicle blocking the spawn location of your plane";
	};

	class Vehicle {
		classname = "C_Plane_Civil_01_F";
	};

	class Airports {
		class Tanoa {
			class a0 {
				id = 0;
				displayName = "Aeroport de Tanoa";
				exitPosition[] = {{6950.53,7353.14,0.00143886},350};
				entryPosition[] = {{6940.82,7408.79,0.00143886},350};
			};
			class a1 {
				id = 1;
				displayName = "Tuvanaka Airbase";
				exitPosition[] = {{2159.79,13357.3,0.00143909},52};
				entryPosition[] = {{2234.74,13412.3,0.00143909},141};
			};
			class a2 {
				id = 2;
				displayName = "Saint-George Airstrip";
				exitPosition[] = {{11708.5,3159.49,0.00143909},35};
				entryPosition[] = {{11768.1,3109.55,0.0014677},215};
			};
			class a3 {
				id = 3;
				displayName = "Bala Airstrip";
				exitPosition[] = {{2166.51,3453.43,0.00142765},191};
				entryPosition[] = {{2125.45,3440.46,0.00143909},345};
			};
			class a4 {
				id = 4;
				displayName = "La Rochelle Aerodome";
				exitPosition[] = {{11838.7,13063.9,0.00143862},195};
				entryPosition[] = {{11792.5,13091.9,0.00143862},15};
			};
		};

		class Altis {
			class a0 { //
				id = 0;
				displayName = "Airbase";
				exitPosition[] = {{14596.5,16758.7,0.00143814},135};
				entryPosition[] = {{14484.1,16179.4,0.0014534},223};
			};
			class a1 { //
				id = 1;
				displayName = "AAC Airfield";
				exitPosition[] = {{2159.79,13357.3,0.00143909},52};
				entryPosition[] = {{11356.5,11445.5,0.00142479},34};
			};
			class a2 {
				id = 2;
				displayName = "Krya Nera Airstrip";
				inAir = 1;
				exitPosition[] = {{9162.19,21657.8,0.00143909},148};
				entryPosition[] = {{9198.62,21622.1,0.00144863},148};
			};
			class a3 { //
				id = 3;
				displayName = "Selakeno Airfield";
				inAir = 1;
				exitPosition[] = {{20783.6,7264.12,0.00138664},139};
				entryPosition[] = {{20810.2,7252.59,0.00139427},48};
			};
			class a4 { //
				id = 4;
				displayName = "Molos Airfield";
				exitPosition[] = {{26736.3,24607.3,0.00139809},121};
				entryPosition[] = {{26784.9,24629.8,0.00131989},131};
			};
			class a5 { //
				id = 5;
				displayName = "Almyra Salt Lake Airstrip";
				exitPosition[] = {{22989.7,18892,0.00142145},144};
				entryPosition[] = {{23083.8,18860,0.00143886},90};
			};
		};
	};
};