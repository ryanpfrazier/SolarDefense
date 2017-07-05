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

// Bullet
struct  Bullet_t2590115616  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Bullet::target
	Transform_t3275118058 * ___target_2;
	// System.Int32 Bullet::damageAmount
	int32_t ___damageAmount_3;
	// System.Boolean Bullet::canHit
	bool ___canHit_4;
	// System.Single Bullet::speed
	float ___speed_5;
	// UnityEngine.GameObject Bullet::bulletImpactParticle
	GameObject_t1756533147 * ___bulletImpactParticle_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_damageAmount_3() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___damageAmount_3)); }
	inline int32_t get_damageAmount_3() const { return ___damageAmount_3; }
	inline int32_t* get_address_of_damageAmount_3() { return &___damageAmount_3; }
	inline void set_damageAmount_3(int32_t value)
	{
		___damageAmount_3 = value;
	}

	inline static int32_t get_offset_of_canHit_4() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___canHit_4)); }
	inline bool get_canHit_4() const { return ___canHit_4; }
	inline bool* get_address_of_canHit_4() { return &___canHit_4; }
	inline void set_canHit_4(bool value)
	{
		___canHit_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_bulletImpactParticle_6() { return static_cast<int32_t>(offsetof(Bullet_t2590115616, ___bulletImpactParticle_6)); }
	inline GameObject_t1756533147 * get_bulletImpactParticle_6() const { return ___bulletImpactParticle_6; }
	inline GameObject_t1756533147 ** get_address_of_bulletImpactParticle_6() { return &___bulletImpactParticle_6; }
	inline void set_bulletImpactParticle_6(GameObject_t1756533147 * value)
	{
		___bulletImpactParticle_6 = value;
		Il2CppCodeGenWriteBarrier(&___bulletImpactParticle_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
