#pragma once

UsercallFunc(char, CalcTime_h, (int a1), (a1), 0x4505D0, rAL, rEDI);

DataPointer(char, byte_174B001, 0x174B001);
DataPointer(int, dword_1A5A230, 0x1A5A230);

LevelRankTimes Mission4Times[30] = {
	{ LevelIDs_CityEscape, {2, 55}, {2, 50}, {2, 45}, {2, 40} },
	{ LevelIDs_WildCanyon, {1, 50}, {1, 40}, {1, 35}, {1, 30} },
	{ LevelIDs_PrisonLane, {2, 50}, {2, 40}, {2, 35}, {2, 30} },
	{ LevelIDs_MetalHarbor, {1, 55}, {1, 50}, {1, 45}, {1, 40} },
	{ LevelIDs_GreenForest, {3, 30}, {3, 0}, {2, 30}, {2, 15} },
	{ LevelIDs_PumpkinHill, {2, 50}, {2, 40}, {2, 35}, {2, 30} },  //
	{ LevelIDs_MissionStreet, {3, 20}, {3, 10}, {3, 05}, {3, 0} }, 
	{ LevelIDs_AquaticMine, {3, 15}, {3, 0}, {2, 45}, {2, 30} },   //
	{ LevelIDs_HiddenBase, {3, 25}, {3, 20}, {3, 15}, {3, 10} },
	{ LevelIDs_PyramidCave, {3, 45}, {3, 30}, {3, 15}, {3, 0} },
	{ LevelIDs_DeathChamber, {4, 30}, {4, 0}, {3, 30}, {3, 0} },   //
	{ LevelIDs_EternalEngine, {4, 50}, {4, 40}, {4, 30}, {4, 20} },
	{ LevelIDs_MeteorHerd, {4, 15}, {3, 45}, {3, 15}, {2, 45} },   //
	{ LevelIDs_CrazyGadget, {4, 45}, {4, 40}, {4, 35}, {4, 30} },
	{ LevelIDs_FinalRush, {4, 55}, {4, 50}, {4, 45}, {4, 40} },
	{ LevelIDs_IronGate, {3, 30}, {3, 0}, {2, 40}, {2, 20} }, // ~1, 40 with hover
	{ LevelIDs_DryLagoon, {3, 15}, {2, 45}, {2, 15}, {2, 0} },     //
	{ LevelIDs_SandOcean, {3, 45}, {3, 15}, {2, 45}, {2, 30} },
	{ LevelIDs_RadicalHighway, {2, 55}, {2, 50}, {2, 45}, {2, 40} },
	{ LevelIDs_EggQuarters, {3, 15}, {3, 0}, {2, 45}, {2, 30} },   //
	{ LevelIDs_LostColony, {3, 20}, {3, 10}, {3, 05}, {3, 0} },
	{ LevelIDs_WeaponsBed, {2, 35}, {2, 25}, {2, 15}, {2, 10} },
	{ LevelIDs_SecurityHall, {3, 15}, {3, 0}, {2, 45}, {2, 30} },  //
	{ LevelIDs_WhiteJungle, {2, 50}, {2, 40}, {2, 30}, {2, 20} },
	{ LevelIDs_SkyRail, {1, 50}, {1, 40}, {1, 35}, {1, 30} }, // 1, 15 with shortcut
	{ LevelIDs_MadSpace, {4, 15}, {3, 45}, {3, 15}, {2, 45} },     //
	{ LevelIDs_CosmicWall, {7, 30}, {7, 10}, {6, 50}, {6, 30} },
	{ LevelIDs_FinalChase, {5, 15}, {5, 0}, {4, 45}, {4, 30} },
	{ LevelIDs_CannonsCoreS, {6, 45}, {6, 30}, {6, 0}, {5, 45} },
	{ LevelIDs_GreenHill, {4, 0}, {3, 0}, {2, 0}, {1, 0} }
};