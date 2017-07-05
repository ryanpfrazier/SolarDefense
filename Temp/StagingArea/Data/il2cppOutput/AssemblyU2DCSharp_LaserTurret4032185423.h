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
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaserTurret
struct  LaserTurret_t4032185423  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform LaserTurret::target
	Transform_t3275118058 * ___target_2;
	// UnityEngine.LineRenderer LaserTurret::laser
	LineRenderer_t849157671 * ___laser_3;
	// System.Single LaserTurret::range
	float ___range_4;
	// System.Single LaserTurret::fireRate
	float ___fireRate_5;
	// System.Single LaserTurret::fireCountdown
	float ___fireCountdown_6;
	// UnityEngine.Transform LaserTurret::laserPoint
	Transform_t3275118058 * ___laserPoint_7;
	// UnityEngine.Transform LaserTurret::laserPointBack
	Transform_t3275118058 * ___laserPointBack_8;
	// UnityEngine.GameObject LaserTurret::laserParticles
	GameObject_t1756533147 * ___laserParticles_9;
	// System.Int32 LaserTurret::damageAmount
	int32_t ___damageAmount_10;
	// System.String LaserTurret::enemyTag
	String_t* ___enemyTag_11;
	// UnityEngine.Transform LaserTurret::rotationPoint
	Transform_t3275118058 * ___rotationPoint_12;
	// System.Single LaserTurret::rotationSpeed
	float ___rotationSpeed_13;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_laser_3() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___laser_3)); }
	inline LineRenderer_t849157671 * get_laser_3() const { return ___laser_3; }
	inline LineRenderer_t849157671 ** get_address_of_laser_3() { return &___laser_3; }
	inline void set_laser_3(LineRenderer_t849157671 * value)
	{
		___laser_3 = value;
		Il2CppCodeGenWriteBarrier(&___laser_3, value);
	}

	inline static int32_t get_offset_of_range_4() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___range_4)); }
	inline float get_range_4() const { return ___range_4; }
	inline float* get_address_of_range_4() { return &___range_4; }
	inline void set_range_4(float value)
	{
		___range_4 = value;
	}

	inline static int32_t get_offset_of_fireRate_5() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___fireRate_5)); }
	inline float get_fireRate_5() const { return ___fireRate_5; }
	inline float* get_address_of_fireRate_5() { return &___fireRate_5; }
	inline void set_fireRate_5(float value)
	{
		___fireRate_5 = value;
	}

	inline static int32_t get_offset_of_fireCountdown_6() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___fireCountdown_6)); }
	inline float get_fireCountdown_6() const { return ___fireCountdown_6; }
	inline float* get_address_of_fireCountdown_6() { return &___fireCountdown_6; }
	inline void set_fireCountdown_6(float value)
	{
		___fireCountdown_6 = value;
	}

	inline static int32_t get_offset_of_laserPoint_7() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___laserPoint_7)); }
	inline Transform_t3275118058 * get_laserPoint_7() const { return ___laserPoint_7; }
	inline Transform_t3275118058 ** get_address_of_laserPoint_7() { return &___laserPoint_7; }
	inline void set_laserPoint_7(Transform_t3275118058 * value)
	{
		___laserPoint_7 = value;
		Il2CppCodeGenWriteBarrier(&___laserPoint_7, value);
	}

	inline static int32_t get_offset_of_laserPointBack_8() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___laserPointBack_8)); }
	inline Transform_t3275118058 * get_laserPointBack_8() const { return ___laserPointBack_8; }
	inline Transform_t3275118058 ** get_address_of_laserPointBack_8() { return &___laserPointBack_8; }
	inline void set_laserPointBack_8(Transform_t3275118058 * value)
	{
		___laserPointBack_8 = value;
		Il2CppCodeGenWriteBarrier(&___laserPointBack_8, value);
	}

	inline static int32_t get_offset_of_laserParticles_9() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___laserParticles_9)); }
	inline GameObject_t1756533147 * get_laserParticles_9() const { return ___laserParticles_9; }
	inline GameObject_t1756533147 ** get_address_of_laserParticles_9() { return &___laserParticles_9; }
	inline void set_laserParticles_9(GameObject_t1756533147 * value)
	{
		___laserParticles_9 = value;
		Il2CppCodeGenWriteBarrier(&___laserParticles_9, value);
	}

	inline static int32_t get_offset_of_damageAmount_10() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___damageAmount_10)); }
	inline int32_t get_damageAmount_10() const { return ___damageAmount_10; }
	inline int32_t* get_address_of_damageAmount_10() { return &___damageAmount_10; }
	inline void set_damageAmount_10(int32_t value)
	{
		___damageAmount_10 = value;
	}

	inline static int32_t get_offset_of_enemyTag_11() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___enemyTag_11)); }
	inline String_t* get_enemyTag_11() const { return ___enemyTag_11; }
	inline String_t** get_address_of_enemyTag_11() { return &___enemyTag_11; }
	inline void set_enemyTag_11(String_t* value)
	{
		___enemyTag_11 = value;
		Il2CppCodeGenWriteBarrier(&___enemyTag_11, value);
	}

	inline static int32_t get_offset_of_rotationPoint_12() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___rotationPoint_12)); }
	inline Transform_t3275118058 * get_rotationPoint_12() const { return ___rotationPoint_12; }
	inline Transform_t3275118058 ** get_address_of_rotationPoint_12() { return &___rotationPoint_12; }
	inline void set_rotationPoint_12(Transform_t3275118058 * value)
	{
		___rotationPoint_12 = value;
		Il2CppCodeGenWriteBarrier(&___rotationPoint_12, value);
	}

	inline static int32_t get_offset_of_rotationSpeed_13() { return static_cast<int32_t>(offsetof(LaserTurret_t4032185423, ___rotationSpeed_13)); }
	inline float get_rotationSpeed_13() const { return ___rotationSpeed_13; }
	inline float* get_address_of_rotationSpeed_13() { return &___rotationSpeed_13; }
	inline void set_rotationSpeed_13(float value)
	{
		___rotationSpeed_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
