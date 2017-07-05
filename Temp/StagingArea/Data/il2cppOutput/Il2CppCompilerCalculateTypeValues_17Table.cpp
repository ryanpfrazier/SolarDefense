#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BulletTurret3770012414.h"
#include "AssemblyU2DCSharp_CameraScript1663580776.h"
#include "AssemblyU2DCSharp_Enemy1088811588.h"
#include "AssemblyU2DCSharp_FlameTurret1225651425.h"
#include "AssemblyU2DCSharp_FlamethrowerScript2226657915.h"
#include "AssemblyU2DCSharp_GameManager2252321495.h"
#include "AssemblyU2DCSharp_GameOver1156344616.h"
#include "AssemblyU2DCSharp_LaserTurret4032185423.h"
#include "AssemblyU2DCSharp_MainMenu4009084430.h"
#include "AssemblyU2DCSharp_Node686167620.h"
#include "AssemblyU2DCSharp_Pause1881854082.h"
#include "AssemblyU2DCSharp_Shop1116303764.h"
#include "AssemblyU2DCSharp_Stats967880071.h"
#include "AssemblyU2DCSharp_TurretBuilder1387668663.h"
#include "AssemblyU2DCSharp_TurretPrefabClass83922056.h"
#include "AssemblyU2DCSharp_WaveSpawner1780633795.h"
#include "AssemblyU2DCSharp_WaveSpawner_U3CSpawnWaveU3Ec__It3019031957.h"
#include "AssemblyU2DCSharp_Waypoints1635309808.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1700 = { sizeof (BulletTurret_t3770012414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1700[9] = 
{
	BulletTurret_t3770012414::get_offset_of_target_2(),
	BulletTurret_t3770012414::get_offset_of_range_3(),
	BulletTurret_t3770012414::get_offset_of_fireRate_4(),
	BulletTurret_t3770012414::get_offset_of_fireCountdown_5(),
	BulletTurret_t3770012414::get_offset_of_bulletPreFab_6(),
	BulletTurret_t3770012414::get_offset_of_bulletPoint_7(),
	BulletTurret_t3770012414::get_offset_of_enemyTag_8(),
	BulletTurret_t3770012414::get_offset_of_rotationPoint_9(),
	BulletTurret_t3770012414::get_offset_of_rotationSpeed_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1701 = { sizeof (CameraScript_t1663580776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1701[10] = 
{
	CameraScript_t1663580776::get_offset_of_panSpeed_2(),
	CameraScript_t1663580776::get_offset_of_border_3(),
	CameraScript_t1663580776::get_offset_of_canMove_4(),
	CameraScript_t1663580776::get_offset_of_scrollSpeed_5(),
	CameraScript_t1663580776::get_offset_of_minScroll_6(),
	CameraScript_t1663580776::get_offset_of_maxScroll_7(),
	CameraScript_t1663580776::get_offset_of_minX_8(),
	CameraScript_t1663580776::get_offset_of_maxX_9(),
	CameraScript_t1663580776::get_offset_of_minZ_10(),
	CameraScript_t1663580776::get_offset_of_maxZ_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1702 = { sizeof (Enemy_t1088811588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1702[7] = 
{
	Enemy_t1088811588::get_offset_of_speed_2(),
	Enemy_t1088811588::get_offset_of_health_3(),
	Enemy_t1088811588::get_offset_of_target_4(),
	Enemy_t1088811588::get_offset_of_dist_5(),
	Enemy_t1088811588::get_offset_of_waypointIndex_6(),
	Enemy_t1088811588::get_offset_of_rotationSpeed_7(),
	Enemy_t1088811588::get_offset_of_enemyAlive_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1703 = { sizeof (FlameTurret_t1225651425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1703[10] = 
{
	FlameTurret_t1225651425::get_offset_of_target_2(),
	FlameTurret_t1225651425::get_offset_of_range_3(),
	FlameTurret_t1225651425::get_offset_of_fireRate_4(),
	FlameTurret_t1225651425::get_offset_of_fireCountdown_5(),
	FlameTurret_t1225651425::get_offset_of_flamethrowerPrefab_6(),
	FlameTurret_t1225651425::get_offset_of_flamePoint_7(),
	FlameTurret_t1225651425::get_offset_of_flame_8(),
	FlameTurret_t1225651425::get_offset_of_enemyTag_9(),
	FlameTurret_t1225651425::get_offset_of_rotationPoint_10(),
	FlameTurret_t1225651425::get_offset_of_rotationSpeed_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1704 = { sizeof (FlamethrowerScript_t2226657915), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1704[7] = 
{
	FlamethrowerScript_t2226657915::get_offset_of_target_2(),
	FlamethrowerScript_t2226657915::get_offset_of_firePoint_3(),
	FlamethrowerScript_t2226657915::get_offset_of_damageRadius_4(),
	FlamethrowerScript_t2226657915::get_offset_of_speed_5(),
	FlamethrowerScript_t2226657915::get_offset_of_damageAmount_6(),
	FlamethrowerScript_t2226657915::get_offset_of_flameParticleImpact_7(),
	FlamethrowerScript_t2226657915::get_offset_of_empty_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1705 = { sizeof (GameManager_t2252321495), -1, sizeof(GameManager_t2252321495_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1705[7] = 
{
	GameManager_t2252321495_StaticFields::get_offset_of_gameOver_2(),
	GameManager_t2252321495_StaticFields::get_offset_of_pause_3(),
	GameManager_t2252321495_StaticFields::get_offset_of_gameOn_4(),
	GameManager_t2252321495::get_offset_of_gameOverUI_5(),
	GameManager_t2252321495::get_offset_of_pauseUI_6(),
	GameManager_t2252321495::get_offset_of_mainMenuUI_7(),
	GameManager_t2252321495::get_offset_of_camera_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1706 = { sizeof (GameOver_t1156344616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1706[1] = 
{
	GameOver_t1156344616::get_offset_of_wavesSurvived_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1707 = { sizeof (LaserTurret_t4032185423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1707[12] = 
{
	LaserTurret_t4032185423::get_offset_of_target_2(),
	LaserTurret_t4032185423::get_offset_of_laser_3(),
	LaserTurret_t4032185423::get_offset_of_range_4(),
	LaserTurret_t4032185423::get_offset_of_fireRate_5(),
	LaserTurret_t4032185423::get_offset_of_fireCountdown_6(),
	LaserTurret_t4032185423::get_offset_of_laserPoint_7(),
	LaserTurret_t4032185423::get_offset_of_laserPointBack_8(),
	LaserTurret_t4032185423::get_offset_of_laserParticles_9(),
	LaserTurret_t4032185423::get_offset_of_damageAmount_10(),
	LaserTurret_t4032185423::get_offset_of_enemyTag_11(),
	LaserTurret_t4032185423::get_offset_of_rotationPoint_12(),
	LaserTurret_t4032185423::get_offset_of_rotationSpeed_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1708 = { sizeof (MainMenu_t4009084430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1709 = { sizeof (Node_t686167620), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1709[13] = 
{
	Node_t686167620::get_offset_of_hoverColor_2(),
	Node_t686167620::get_offset_of_notEnoughMoneyColor_3(),
	Node_t686167620::get_offset_of_originalColor_4(),
	Node_t686167620::get_offset_of_r_5(),
	Node_t686167620::get_offset_of_sellingTurret_6(),
	Node_t686167620::get_offset_of_turretBuilder_7(),
	Node_t686167620::get_offset_of_bulletTurret_8(),
	Node_t686167620::get_offset_of_bulletTurretCost_9(),
	Node_t686167620::get_offset_of_flamethrowerTurret_10(),
	Node_t686167620::get_offset_of_flamethrowerTurretCost_11(),
	Node_t686167620::get_offset_of_laserTurret_12(),
	Node_t686167620::get_offset_of_laserTurretCost_13(),
	Node_t686167620::get_offset_of_turret_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1710 = { sizeof (Pause_t1881854082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1710[1] = 
{
	Pause_t1881854082::get_offset_of_gameManager_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1711 = { sizeof (Shop_t1116303764), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1711[10] = 
{
	Shop_t1116303764::get_offset_of_turretBuilder_2(),
	Shop_t1116303764::get_offset_of_bulletTurret_3(),
	Shop_t1116303764::get_offset_of_bulletTurretName_4(),
	Shop_t1116303764::get_offset_of_bulletTurretCost_5(),
	Shop_t1116303764::get_offset_of_flamethrowerTurret_6(),
	Shop_t1116303764::get_offset_of_flamethrowerTurretName_7(),
	Shop_t1116303764::get_offset_of_flamethrowerTurretCost_8(),
	Shop_t1116303764::get_offset_of_laserTurret_9(),
	Shop_t1116303764::get_offset_of_laserTurretName_10(),
	Shop_t1116303764::get_offset_of_laserTurretCost_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1712 = { sizeof (Stats_t967880071), -1, sizeof(Stats_t967880071_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1712[5] = 
{
	Stats_t967880071_StaticFields::get_offset_of_Cash_2(),
	Stats_t967880071::get_offset_of_startingCash_3(),
	Stats_t967880071_StaticFields::get_offset_of_Lives_4(),
	Stats_t967880071::get_offset_of_startingLives_5(),
	Stats_t967880071_StaticFields::get_offset_of_waves_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1713 = { sizeof (TurretBuilder_t1387668663), -1, sizeof(TurretBuilder_t1387668663_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1713[6] = 
{
	TurretBuilder_t1387668663_StaticFields::get_offset_of_builder_2(),
	TurretBuilder_t1387668663::get_offset_of_bulletTurretPrefab_3(),
	TurretBuilder_t1387668663::get_offset_of_flamethrowerTurretPrefab_4(),
	TurretBuilder_t1387668663::get_offset_of_laserTurretPrefab_5(),
	TurretBuilder_t1387668663::get_offset_of_turretToBuild_6(),
	TurretBuilder_t1387668663::get_offset_of_buildEffect_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1714 = { sizeof (TurretPrefabClass_t83922056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1714[3] = 
{
	TurretPrefabClass_t83922056::get_offset_of_prefab_0(),
	TurretPrefabClass_t83922056::get_offset_of_name_1(),
	TurretPrefabClass_t83922056::get_offset_of_cost_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1715 = { sizeof (WaveSpawner_t1780633795), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1715[13] = 
{
	WaveSpawner_t1780633795::get_offset_of_enemyPrefab_2(),
	WaveSpawner_t1780633795::get_offset_of_harderEnemyPrefab_3(),
	WaveSpawner_t1780633795::get_offset_of_hardestEnemyPrefab_4(),
	WaveSpawner_t1780633795::get_offset_of_timeBetweenWaves_5(),
	WaveSpawner_t1780633795::get_offset_of_timeBetweenEnemies_6(),
	WaveSpawner_t1780633795::get_offset_of_spawnPoint_7(),
	WaveSpawner_t1780633795::get_offset_of_countdown_8(),
	WaveSpawner_t1780633795::get_offset_of_waveNumber_9(),
	WaveSpawner_t1780633795::get_offset_of_enemiesToSpawn_10(),
	WaveSpawner_t1780633795::get_offset_of_waveCountdownText_11(),
	WaveSpawner_t1780633795::get_offset_of_moneyText_12(),
	WaveSpawner_t1780633795::get_offset_of_livesText_13(),
	WaveSpawner_t1780633795::get_offset_of_waveNumberText_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1716 = { sizeof (U3CSpawnWaveU3Ec__Iterator0_t3019031957), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1716[5] = 
{
	U3CSpawnWaveU3Ec__Iterator0_t3019031957::get_offset_of_U3CiU3E__1_0(),
	U3CSpawnWaveU3Ec__Iterator0_t3019031957::get_offset_of_U24this_1(),
	U3CSpawnWaveU3Ec__Iterator0_t3019031957::get_offset_of_U24current_2(),
	U3CSpawnWaveU3Ec__Iterator0_t3019031957::get_offset_of_U24disposing_3(),
	U3CSpawnWaveU3Ec__Iterator0_t3019031957::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1717 = { sizeof (Waypoints_t1635309808), -1, sizeof(Waypoints_t1635309808_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1717[1] = 
{
	Waypoints_t1635309808_StaticFields::get_offset_of_points_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
