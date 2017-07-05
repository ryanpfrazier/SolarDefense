#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.PyroParticles.LoopingAudioSource
struct  LoopingAudioSource_t1151690511  : public Il2CppObject
{
public:
	// UnityEngine.AudioSource DigitalRuby.PyroParticles.LoopingAudioSource::<AudioSource>k__BackingField
	AudioSource_t1135106623 * ___U3CAudioSourceU3Ek__BackingField_0;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::<TargetVolume>k__BackingField
	float ___U3CTargetVolumeU3Ek__BackingField_1;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::startMultiplier
	float ___startMultiplier_2;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::stopMultiplier
	float ___stopMultiplier_3;
	// System.Single DigitalRuby.PyroParticles.LoopingAudioSource::currentMultiplier
	float ___currentMultiplier_4;

public:
	inline static int32_t get_offset_of_U3CAudioSourceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t1151690511, ___U3CAudioSourceU3Ek__BackingField_0)); }
	inline AudioSource_t1135106623 * get_U3CAudioSourceU3Ek__BackingField_0() const { return ___U3CAudioSourceU3Ek__BackingField_0; }
	inline AudioSource_t1135106623 ** get_address_of_U3CAudioSourceU3Ek__BackingField_0() { return &___U3CAudioSourceU3Ek__BackingField_0; }
	inline void set_U3CAudioSourceU3Ek__BackingField_0(AudioSource_t1135106623 * value)
	{
		___U3CAudioSourceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAudioSourceU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CTargetVolumeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t1151690511, ___U3CTargetVolumeU3Ek__BackingField_1)); }
	inline float get_U3CTargetVolumeU3Ek__BackingField_1() const { return ___U3CTargetVolumeU3Ek__BackingField_1; }
	inline float* get_address_of_U3CTargetVolumeU3Ek__BackingField_1() { return &___U3CTargetVolumeU3Ek__BackingField_1; }
	inline void set_U3CTargetVolumeU3Ek__BackingField_1(float value)
	{
		___U3CTargetVolumeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_startMultiplier_2() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t1151690511, ___startMultiplier_2)); }
	inline float get_startMultiplier_2() const { return ___startMultiplier_2; }
	inline float* get_address_of_startMultiplier_2() { return &___startMultiplier_2; }
	inline void set_startMultiplier_2(float value)
	{
		___startMultiplier_2 = value;
	}

	inline static int32_t get_offset_of_stopMultiplier_3() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t1151690511, ___stopMultiplier_3)); }
	inline float get_stopMultiplier_3() const { return ___stopMultiplier_3; }
	inline float* get_address_of_stopMultiplier_3() { return &___stopMultiplier_3; }
	inline void set_stopMultiplier_3(float value)
	{
		___stopMultiplier_3 = value;
	}

	inline static int32_t get_offset_of_currentMultiplier_4() { return static_cast<int32_t>(offsetof(LoopingAudioSource_t1151690511, ___currentMultiplier_4)); }
	inline float get_currentMultiplier_4() const { return ___currentMultiplier_4; }
	inline float* get_address_of_currentMultiplier_4() { return &___currentMultiplier_4; }
	inline void set_currentMultiplier_4(float value)
	{
		___currentMultiplier_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
