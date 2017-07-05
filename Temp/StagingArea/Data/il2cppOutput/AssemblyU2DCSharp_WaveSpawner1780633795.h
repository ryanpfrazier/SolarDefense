#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaveSpawner
struct  WaveSpawner_t1780633795  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform WaveSpawner::enemyPrefab
	Transform_t3275118058 * ___enemyPrefab_2;
	// UnityEngine.Transform WaveSpawner::harderEnemyPrefab
	Transform_t3275118058 * ___harderEnemyPrefab_3;
	// UnityEngine.Transform WaveSpawner::hardestEnemyPrefab
	Transform_t3275118058 * ___hardestEnemyPrefab_4;
	// System.Single WaveSpawner::timeBetweenWaves
	float ___timeBetweenWaves_5;
	// System.Single WaveSpawner::timeBetweenEnemies
	float ___timeBetweenEnemies_6;
	// UnityEngine.Transform WaveSpawner::spawnPoint
	Transform_t3275118058 * ___spawnPoint_7;
	// System.Single WaveSpawner::countdown
	float ___countdown_8;
	// System.Int32 WaveSpawner::waveNumber
	int32_t ___waveNumber_9;
	// System.Int32 WaveSpawner::enemiesToSpawn
	int32_t ___enemiesToSpawn_10;
	// UnityEngine.UI.Text WaveSpawner::waveCountdownText
	Text_t356221433 * ___waveCountdownText_11;
	// UnityEngine.UI.Text WaveSpawner::moneyText
	Text_t356221433 * ___moneyText_12;
	// UnityEngine.UI.Text WaveSpawner::livesText
	Text_t356221433 * ___livesText_13;
	// UnityEngine.UI.Text WaveSpawner::waveNumberText
	Text_t356221433 * ___waveNumberText_14;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___enemyPrefab_2)); }
	inline Transform_t3275118058 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline Transform_t3275118058 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(Transform_t3275118058 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___enemyPrefab_2, value);
	}

	inline static int32_t get_offset_of_harderEnemyPrefab_3() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___harderEnemyPrefab_3)); }
	inline Transform_t3275118058 * get_harderEnemyPrefab_3() const { return ___harderEnemyPrefab_3; }
	inline Transform_t3275118058 ** get_address_of_harderEnemyPrefab_3() { return &___harderEnemyPrefab_3; }
	inline void set_harderEnemyPrefab_3(Transform_t3275118058 * value)
	{
		___harderEnemyPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___harderEnemyPrefab_3, value);
	}

	inline static int32_t get_offset_of_hardestEnemyPrefab_4() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___hardestEnemyPrefab_4)); }
	inline Transform_t3275118058 * get_hardestEnemyPrefab_4() const { return ___hardestEnemyPrefab_4; }
	inline Transform_t3275118058 ** get_address_of_hardestEnemyPrefab_4() { return &___hardestEnemyPrefab_4; }
	inline void set_hardestEnemyPrefab_4(Transform_t3275118058 * value)
	{
		___hardestEnemyPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___hardestEnemyPrefab_4, value);
	}

	inline static int32_t get_offset_of_timeBetweenWaves_5() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___timeBetweenWaves_5)); }
	inline float get_timeBetweenWaves_5() const { return ___timeBetweenWaves_5; }
	inline float* get_address_of_timeBetweenWaves_5() { return &___timeBetweenWaves_5; }
	inline void set_timeBetweenWaves_5(float value)
	{
		___timeBetweenWaves_5 = value;
	}

	inline static int32_t get_offset_of_timeBetweenEnemies_6() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___timeBetweenEnemies_6)); }
	inline float get_timeBetweenEnemies_6() const { return ___timeBetweenEnemies_6; }
	inline float* get_address_of_timeBetweenEnemies_6() { return &___timeBetweenEnemies_6; }
	inline void set_timeBetweenEnemies_6(float value)
	{
		___timeBetweenEnemies_6 = value;
	}

	inline static int32_t get_offset_of_spawnPoint_7() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___spawnPoint_7)); }
	inline Transform_t3275118058 * get_spawnPoint_7() const { return ___spawnPoint_7; }
	inline Transform_t3275118058 ** get_address_of_spawnPoint_7() { return &___spawnPoint_7; }
	inline void set_spawnPoint_7(Transform_t3275118058 * value)
	{
		___spawnPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoint_7, value);
	}

	inline static int32_t get_offset_of_countdown_8() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___countdown_8)); }
	inline float get_countdown_8() const { return ___countdown_8; }
	inline float* get_address_of_countdown_8() { return &___countdown_8; }
	inline void set_countdown_8(float value)
	{
		___countdown_8 = value;
	}

	inline static int32_t get_offset_of_waveNumber_9() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___waveNumber_9)); }
	inline int32_t get_waveNumber_9() const { return ___waveNumber_9; }
	inline int32_t* get_address_of_waveNumber_9() { return &___waveNumber_9; }
	inline void set_waveNumber_9(int32_t value)
	{
		___waveNumber_9 = value;
	}

	inline static int32_t get_offset_of_enemiesToSpawn_10() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___enemiesToSpawn_10)); }
	inline int32_t get_enemiesToSpawn_10() const { return ___enemiesToSpawn_10; }
	inline int32_t* get_address_of_enemiesToSpawn_10() { return &___enemiesToSpawn_10; }
	inline void set_enemiesToSpawn_10(int32_t value)
	{
		___enemiesToSpawn_10 = value;
	}

	inline static int32_t get_offset_of_waveCountdownText_11() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___waveCountdownText_11)); }
	inline Text_t356221433 * get_waveCountdownText_11() const { return ___waveCountdownText_11; }
	inline Text_t356221433 ** get_address_of_waveCountdownText_11() { return &___waveCountdownText_11; }
	inline void set_waveCountdownText_11(Text_t356221433 * value)
	{
		___waveCountdownText_11 = value;
		Il2CppCodeGenWriteBarrier(&___waveCountdownText_11, value);
	}

	inline static int32_t get_offset_of_moneyText_12() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___moneyText_12)); }
	inline Text_t356221433 * get_moneyText_12() const { return ___moneyText_12; }
	inline Text_t356221433 ** get_address_of_moneyText_12() { return &___moneyText_12; }
	inline void set_moneyText_12(Text_t356221433 * value)
	{
		___moneyText_12 = value;
		Il2CppCodeGenWriteBarrier(&___moneyText_12, value);
	}

	inline static int32_t get_offset_of_livesText_13() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___livesText_13)); }
	inline Text_t356221433 * get_livesText_13() const { return ___livesText_13; }
	inline Text_t356221433 ** get_address_of_livesText_13() { return &___livesText_13; }
	inline void set_livesText_13(Text_t356221433 * value)
	{
		___livesText_13 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_13, value);
	}

	inline static int32_t get_offset_of_waveNumberText_14() { return static_cast<int32_t>(offsetof(WaveSpawner_t1780633795, ___waveNumberText_14)); }
	inline Text_t356221433 * get_waveNumberText_14() const { return ___waveNumberText_14; }
	inline Text_t356221433 ** get_address_of_waveNumberText_14() { return &___waveNumberText_14; }
	inline void set_waveNumberText_14(Text_t356221433 * value)
	{
		___waveNumberText_14 = value;
		Il2CppCodeGenWriteBarrier(&___waveNumberText_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
