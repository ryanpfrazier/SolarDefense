#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_DigitalRuby_PyroParticles_RangeO2229862819.h"

// UnityEngine.Light
struct Light_t494725636;
// DigitalRuby.PyroParticles.FireBaseScript
struct FireBaseScript_t1360394360;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.PyroParticles.FireLightScript
struct  FireLightScript_t195983543  : public MonoBehaviour_t1158329972
{
public:
	// System.Single DigitalRuby.PyroParticles.FireLightScript::Seed
	float ___Seed_2;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::IntensityModifier
	float ___IntensityModifier_3;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.FireLightScript::IntensityMaxRange
	RangeOfFloats_t2229862819  ___IntensityMaxRange_4;
	// UnityEngine.Light DigitalRuby.PyroParticles.FireLightScript::firePointLight
	Light_t494725636 * ___firePointLight_5;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::lightIntensity
	float ___lightIntensity_6;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::seed
	float ___seed_7;
	// DigitalRuby.PyroParticles.FireBaseScript DigitalRuby.PyroParticles.FireLightScript::fireBaseScript
	FireBaseScript_t1360394360 * ___fireBaseScript_8;
	// System.Single DigitalRuby.PyroParticles.FireLightScript::baseY
	float ___baseY_9;

public:
	inline static int32_t get_offset_of_Seed_2() { return static_cast<int32_t>(offsetof(FireLightScript_t195983543, ___Seed_2)); }
	inline float get_Seed_2() const { return ___Seed_2; }
	inline float* get_address_of_Seed_2() { return &___Seed_2; }
	inline void set_Seed_2(float value)
	{
		___Seed_2 = value;
	}

	inline static int32_t get_offset_of_IntensityModifier_3() { return static_cast<int32_t>(offsetof(FireLightScript_t195983543, ___IntensityModifier_3)); }
	inline float get_IntensityModifier_3() const { return ___IntensityModifier_3; }
	inline float* get_address_of_IntensityModifier_3() { return &___IntensityModifier_3; }
	inline void set_IntensityModifier_3(float value)
	{
		___IntensityModifier_3 = value;
	}

	inline static int32_t get_offset_of_IntensityMaxRange_4() { return static_cast<int32_t>(offsetof(FireLightScript_t195983543, ___IntensityMaxRange_4)); }
	inline RangeOfFloats_t2229862819  get_IntensityMaxRange_4() const { return ___IntensityMaxRange_4; }
	inline RangeOfFloats_t2229862819 * get_address_of_IntensityMaxRange_4() { return &___IntensityMaxRange_4; }
	inline void set_IntensityMaxRange_4(RangeOfFloats_t2229862819  value)
	{
		___IntensityMaxRange_4 = value;
	}

	inline static int32_t get_offset_of_firePointLight_5() { return static_cast<int32_t>(offsetof(FireLightScript_t195983543, ___firePointLight_5)); }
	inline Light_t494725636 * get_firePointLight_5() const { return ___firePointLight_5; }
	inline Light_t494725636 ** get_address_of_firePointLight_5() { return &___firePointLight_5; }
	inline void set_firePointLight_5(Light_t494725636 * value)
	{
		___firePointLight_5 = value;
		Il2CppCodeGenWriteBarrier(&___firePointLight_5, value);
	}

	inline static int32_t get_offset_of_lightIntensity_6() { return static_cast<int32_t>(offsetof(FireLightScript_t195983543, ___lightIntensity_6)); }
	inline float get_lightIntensity_6() const { return ___lightIntensity_6; }
	inline float* get_address_of_lightIntensity_6() { return &___lightIntensity_6; }
	inline void set_lightIntensity_6(float value)
	{
		___lightIntensity_6 = value;
	}

	inline static int32_t get_offset_of_seed_7() { return static_cast<int32_t>(offsetof(FireLightScript_t195983543, ___seed_7)); }
	inline float get_seed_7() const { return ___seed_7; }
	inline float* get_address_of_seed_7() { return &___seed_7; }
	inline void set_seed_7(float value)
	{
		___seed_7 = value;
	}

	inline static int32_t get_offset_of_fireBaseScript_8() { return static_cast<int32_t>(offsetof(FireLightScript_t195983543, ___fireBaseScript_8)); }
	inline FireBaseScript_t1360394360 * get_fireBaseScript_8() const { return ___fireBaseScript_8; }
	inline FireBaseScript_t1360394360 ** get_address_of_fireBaseScript_8() { return &___fireBaseScript_8; }
	inline void set_fireBaseScript_8(FireBaseScript_t1360394360 * value)
	{
		___fireBaseScript_8 = value;
		Il2CppCodeGenWriteBarrier(&___fireBaseScript_8, value);
	}

	inline static int32_t get_offset_of_baseY_9() { return static_cast<int32_t>(offsetof(FireLightScript_t195983543, ___baseY_9)); }
	inline float get_baseY_9() const { return ___baseY_9; }
	inline float* get_address_of_baseY_9() { return &___baseY_9; }
	inline void set_baseY_9(float value)
	{
		___baseY_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
