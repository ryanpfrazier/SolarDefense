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
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlameTurret
struct  FlameTurret_t1225651425  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FlameTurret::target
	Transform_t3275118058 * ___target_2;
	// System.Single FlameTurret::range
	float ___range_3;
	// System.Single FlameTurret::fireRate
	float ___fireRate_4;
	// System.Single FlameTurret::fireCountdown
	float ___fireCountdown_5;
	// UnityEngine.GameObject FlameTurret::flamethrowerPrefab
	GameObject_t1756533147 * ___flamethrowerPrefab_6;
	// UnityEngine.Transform FlameTurret::flamePoint
	Transform_t3275118058 * ___flamePoint_7;
	// UnityEngine.GameObject FlameTurret::flame
	GameObject_t1756533147 * ___flame_8;
	// System.String FlameTurret::enemyTag
	String_t* ___enemyTag_9;
	// UnityEngine.Transform FlameTurret::rotationPoint
	Transform_t3275118058 * ___rotationPoint_10;
	// System.Single FlameTurret::rotationSpeed
	float ___rotationSpeed_11;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___range_3)); }
	inline float get_range_3() const { return ___range_3; }
	inline float* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(float value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_fireCountdown_5() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___fireCountdown_5)); }
	inline float get_fireCountdown_5() const { return ___fireCountdown_5; }
	inline float* get_address_of_fireCountdown_5() { return &___fireCountdown_5; }
	inline void set_fireCountdown_5(float value)
	{
		___fireCountdown_5 = value;
	}

	inline static int32_t get_offset_of_flamethrowerPrefab_6() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___flamethrowerPrefab_6)); }
	inline GameObject_t1756533147 * get_flamethrowerPrefab_6() const { return ___flamethrowerPrefab_6; }
	inline GameObject_t1756533147 ** get_address_of_flamethrowerPrefab_6() { return &___flamethrowerPrefab_6; }
	inline void set_flamethrowerPrefab_6(GameObject_t1756533147 * value)
	{
		___flamethrowerPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___flamethrowerPrefab_6, value);
	}

	inline static int32_t get_offset_of_flamePoint_7() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___flamePoint_7)); }
	inline Transform_t3275118058 * get_flamePoint_7() const { return ___flamePoint_7; }
	inline Transform_t3275118058 ** get_address_of_flamePoint_7() { return &___flamePoint_7; }
	inline void set_flamePoint_7(Transform_t3275118058 * value)
	{
		___flamePoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___flamePoint_7, value);
	}

	inline static int32_t get_offset_of_flame_8() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___flame_8)); }
	inline GameObject_t1756533147 * get_flame_8() const { return ___flame_8; }
	inline GameObject_t1756533147 ** get_address_of_flame_8() { return &___flame_8; }
	inline void set_flame_8(GameObject_t1756533147 * value)
	{
		___flame_8 = value;
		Il2CppCodeGenWriteBarrier(&___flame_8, value);
	}

	inline static int32_t get_offset_of_enemyTag_9() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___enemyTag_9)); }
	inline String_t* get_enemyTag_9() const { return ___enemyTag_9; }
	inline String_t** get_address_of_enemyTag_9() { return &___enemyTag_9; }
	inline void set_enemyTag_9(String_t* value)
	{
		___enemyTag_9 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTag_9, value);
	}

	inline static int32_t get_offset_of_rotationPoint_10() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___rotationPoint_10)); }
	inline Transform_t3275118058 * get_rotationPoint_10() const { return ___rotationPoint_10; }
	inline Transform_t3275118058 ** get_address_of_rotationPoint_10() { return &___rotationPoint_10; }
	inline void set_rotationPoint_10(Transform_t3275118058 * value)
	{
		___rotationPoint_10 = value;
		Il2CppCodeGenWriteBarrier(&___rotationPoint_10, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_11() { return static_cast<int32_t>(offsetof(FlameTurret_t1225651425, ___rotationSpeed_11)); }
	inline float get_rotationSpeed_11() const { return ___rotationSpeed_11; }
	inline float* get_address_of_rotationSpeed_11() { return &___rotationSpeed_11; }
	inline void set_rotationSpeed_11(float value)
	{
		___rotationSpeed_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
