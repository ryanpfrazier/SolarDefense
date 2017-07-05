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

// BulletTurret
struct  BulletTurret_t3770012414  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform BulletTurret::target
	Transform_t3275118058 * ___target_2;
	// System.Single BulletTurret::range
	float ___range_3;
	// System.Single BulletTurret::fireRate
	float ___fireRate_4;
	// System.Single BulletTurret::fireCountdown
	float ___fireCountdown_5;
	// UnityEngine.GameObject BulletTurret::bulletPreFab
	GameObject_t1756533147 * ___bulletPreFab_6;
	// UnityEngine.Transform BulletTurret::bulletPoint
	Transform_t3275118058 * ___bulletPoint_7;
	// System.String BulletTurret::enemyTag
	String_t* ___enemyTag_8;
	// UnityEngine.Transform BulletTurret::rotationPoint
	Transform_t3275118058 * ___rotationPoint_9;
	// System.Single BulletTurret::rotationSpeed
	float ___rotationSpeed_10;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_range_3() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___range_3)); }
	inline float get_range_3() const { return ___range_3; }
	inline float* get_address_of_range_3() { return &___range_3; }
	inline void set_range_3(float value)
	{
		___range_3 = value;
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_fireCountdown_5() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___fireCountdown_5)); }
	inline float get_fireCountdown_5() const { return ___fireCountdown_5; }
	inline float* get_address_of_fireCountdown_5() { return &___fireCountdown_5; }
	inline void set_fireCountdown_5(float value)
	{
		___fireCountdown_5 = value;
	}

	inline static int32_t get_offset_of_bulletPreFab_6() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___bulletPreFab_6)); }
	inline GameObject_t1756533147 * get_bulletPreFab_6() const { return ___bulletPreFab_6; }
	inline GameObject_t1756533147 ** get_address_of_bulletPreFab_6() { return &___bulletPreFab_6; }
	inline void set_bulletPreFab_6(GameObject_t1756533147 * value)
	{
		___bulletPreFab_6 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPreFab_6, value);
	}

	inline static int32_t get_offset_of_bulletPoint_7() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___bulletPoint_7)); }
	inline Transform_t3275118058 * get_bulletPoint_7() const { return ___bulletPoint_7; }
	inline Transform_t3275118058 ** get_address_of_bulletPoint_7() { return &___bulletPoint_7; }
	inline void set_bulletPoint_7(Transform_t3275118058 * value)
	{
		___bulletPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPoint_7, value);
	}

	inline static int32_t get_offset_of_enemyTag_8() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___enemyTag_8)); }
	inline String_t* get_enemyTag_8() const { return ___enemyTag_8; }
	inline String_t** get_address_of_enemyTag_8() { return &___enemyTag_8; }
	inline void set_enemyTag_8(String_t* value)
	{
		___enemyTag_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTag_8, value);
	}

	inline static int32_t get_offset_of_rotationPoint_9() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___rotationPoint_9)); }
	inline Transform_t3275118058 * get_rotationPoint_9() const { return ___rotationPoint_9; }
	inline Transform_t3275118058 ** get_address_of_rotationPoint_9() { return &___rotationPoint_9; }
	inline void set_rotationPoint_9(Transform_t3275118058 * value)
	{
		___rotationPoint_9 = value;
		Il2CppCodeGenWriteBarrier(&___rotationPoint_9, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_10() { return static_cast<int32_t>(offsetof(BulletTurret_t3770012414, ___rotationSpeed_10)); }
	inline float get_rotationSpeed_10() const { return ___rotationSpeed_10; }
	inline float* get_address_of_rotationSpeed_10() { return &___rotationSpeed_10; }
	inline void set_rotationSpeed_10(float value)
	{
		___rotationSpeed_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
