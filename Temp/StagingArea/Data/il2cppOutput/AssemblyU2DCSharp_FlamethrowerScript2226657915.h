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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FlamethrowerScript
struct  FlamethrowerScript_t2226657915  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FlamethrowerScript::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.Transform FlamethrowerScript::firePoint
	Transform_t3275118058 * ___firePoint_3;
	// System.Single FlamethrowerScript::damageRadius
	float ___damageRadius_4;
	// System.Single FlamethrowerScript::speed
	float ___speed_5;
	// System.Int32 FlamethrowerScript::damageAmount
	int32_t ___damageAmount_6;
	// UnityEngine.GameObject FlamethrowerScript::flameParticleImpact
	GameObject_t1756533147 * ___flameParticleImpact_7;
	// UnityEngine.GameObject FlamethrowerScript::empty
	GameObject_t1756533147 * ___empty_8;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(FlamethrowerScript_t2226657915, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_firePoint_3() { return static_cast<int32_t>(offsetof(FlamethrowerScript_t2226657915, ___firePoint_3)); }
	inline Transform_t3275118058 * get_firePoint_3() const { return ___firePoint_3; }
	inline Transform_t3275118058 ** get_address_of_firePoint_3() { return &___firePoint_3; }
	inline void set_firePoint_3(Transform_t3275118058 * value)
	{
		___firePoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___firePoint_3, value);
	}

	inline static int32_t get_offset_of_damageRadius_4() { return static_cast<int32_t>(offsetof(FlamethrowerScript_t2226657915, ___damageRadius_4)); }
	inline float get_damageRadius_4() const { return ___damageRadius_4; }
	inline float* get_address_of_damageRadius_4() { return &___damageRadius_4; }
	inline void set_damageRadius_4(float value)
	{
		___damageRadius_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(FlamethrowerScript_t2226657915, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_damageAmount_6() { return static_cast<int32_t>(offsetof(FlamethrowerScript_t2226657915, ___damageAmount_6)); }
	inline int32_t get_damageAmount_6() const { return ___damageAmount_6; }
	inline int32_t* get_address_of_damageAmount_6() { return &___damageAmount_6; }
	inline void set_damageAmount_6(int32_t value)
	{
		___damageAmount_6 = value;
	}

	inline static int32_t get_offset_of_flameParticleImpact_7() { return static_cast<int32_t>(offsetof(FlamethrowerScript_t2226657915, ___flameParticleImpact_7)); }
	inline GameObject_t1756533147 * get_flameParticleImpact_7() const { return ___flameParticleImpact_7; }
	inline GameObject_t1756533147 ** get_address_of_flameParticleImpact_7() { return &___flameParticleImpact_7; }
	inline void set_flameParticleImpact_7(GameObject_t1756533147 * value)
	{
		___flameParticleImpact_7 = value;
		Il2CppCodeGenWriteBarrier(&___flameParticleImpact_7, value);
	}

	inline static int32_t get_offset_of_empty_8() { return static_cast<int32_t>(offsetof(FlamethrowerScript_t2226657915, ___empty_8)); }
	inline GameObject_t1756533147 * get_empty_8() const { return ___empty_8; }
	inline GameObject_t1756533147 ** get_address_of_empty_8() { return &___empty_8; }
	inline void set_empty_8(GameObject_t1756533147 * value)
	{
		___empty_8 = value;
		Il2CppCodeGenWriteBarrier(&___empty_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
