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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1088811588  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Enemy::speed
	float ___speed_2;
	// System.Int32 Enemy::health
	int32_t ___health_3;
	// UnityEngine.Transform Enemy::target
	Transform_t3275118058 * ___target_4;
	// System.Single Enemy::dist
	float ___dist_5;
	// System.Int32 Enemy::waypointIndex
	int32_t ___waypointIndex_6;
	// System.Single Enemy::rotationSpeed
	float ___rotationSpeed_7;
	// System.Boolean Enemy::enemyAlive
	bool ___enemyAlive_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___health_3)); }
	inline int32_t get_health_3() const { return ___health_3; }
	inline int32_t* get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(int32_t value)
	{
		___health_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___target_4)); }
	inline Transform_t3275118058 * get_target_4() const { return ___target_4; }
	inline Transform_t3275118058 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_t3275118058 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_dist_5() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___dist_5)); }
	inline float get_dist_5() const { return ___dist_5; }
	inline float* get_address_of_dist_5() { return &___dist_5; }
	inline void set_dist_5(float value)
	{
		___dist_5 = value;
	}

	inline static int32_t get_offset_of_waypointIndex_6() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___waypointIndex_6)); }
	inline int32_t get_waypointIndex_6() const { return ___waypointIndex_6; }
	inline int32_t* get_address_of_waypointIndex_6() { return &___waypointIndex_6; }
	inline void set_waypointIndex_6(int32_t value)
	{
		___waypointIndex_6 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_7() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___rotationSpeed_7)); }
	inline float get_rotationSpeed_7() const { return ___rotationSpeed_7; }
	inline float* get_address_of_rotationSpeed_7() { return &___rotationSpeed_7; }
	inline void set_rotationSpeed_7(float value)
	{
		___rotationSpeed_7 = value;
	}

	inline static int32_t get_offset_of_enemyAlive_8() { return static_cast<int32_t>(offsetof(Enemy_t1088811588, ___enemyAlive_8)); }
	inline bool get_enemyAlive_8() const { return ___enemyAlive_8; }
	inline bool* get_address_of_enemyAlive_8() { return &___enemyAlive_8; }
	inline void set_enemyAlive_8(bool value)
	{
		___enemyAlive_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
