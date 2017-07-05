#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_DigitalRuby_PyroParticles_FireBa1360394360.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_DigitalRuby_PyroParticles_RangeO1284975163.h"
#include "AssemblyU2DCSharp_DigitalRuby_PyroParticles_RangeO2229862819.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t894826206;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t2203355011;
// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate
struct MeteorSwarmCollisionDelegate_t469570461;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.PyroParticles.MeteorSwarmScript
struct  MeteorSwarmScript_t2828674059  : public FireBaseScript_t1360394360
{
public:
	// UnityEngine.GameObject DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorPrefab
	GameObject_t1756533147 * ___MeteorPrefab_18;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorExplosionParticleSystem
	ParticleSystem_t3394631041 * ___MeteorExplosionParticleSystem_19;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorShrapnelParticleSystem
	ParticleSystem_t3394631041 * ___MeteorShrapnelParticleSystem_20;
	// UnityEngine.Material[] DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorMaterials
	MaterialU5BU5D_t3123989686* ___MeteorMaterials_21;
	// UnityEngine.Mesh[] DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorMeshes
	MeshU5BU5D_t894826206* ___MeteorMeshes_22;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::DestinationRadius
	float ___DestinationRadius_23;
	// UnityEngine.Vector3 DigitalRuby.PyroParticles.MeteorSwarmScript::Source
	Vector3_t2243707580  ___Source_24;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::SourceRadius
	float ___SourceRadius_25;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::TimeToImpact
	float ___TimeToImpact_26;
	// DigitalRuby.PyroParticles.RangeOfIntegers DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorsPerSecondRange
	RangeOfIntegers_t1284975163  ___MeteorsPerSecondRange_27;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.MeteorSwarmScript::ScaleRange
	RangeOfFloats_t2229862819  ___ScaleRange_28;
	// DigitalRuby.PyroParticles.RangeOfFloats DigitalRuby.PyroParticles.MeteorSwarmScript::MeteorLifeTimeRange
	RangeOfFloats_t2229862819  ___MeteorLifeTimeRange_29;
	// UnityEngine.AudioClip[] DigitalRuby.PyroParticles.MeteorSwarmScript::EmissionSounds
	AudioClipU5BU5D_t2203355011* ___EmissionSounds_30;
	// UnityEngine.AudioClip[] DigitalRuby.PyroParticles.MeteorSwarmScript::ExplosionSounds
	AudioClipU5BU5D_t2203355011* ___ExplosionSounds_31;
	// DigitalRuby.PyroParticles.MeteorSwarmCollisionDelegate DigitalRuby.PyroParticles.MeteorSwarmScript::CollisionDelegate
	MeteorSwarmCollisionDelegate_t469570461 * ___CollisionDelegate_32;
	// System.Single DigitalRuby.PyroParticles.MeteorSwarmScript::elapsedSecond
	float ___elapsedSecond_33;

public:
	inline static int32_t get_offset_of_MeteorPrefab_18() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___MeteorPrefab_18)); }
	inline GameObject_t1756533147 * get_MeteorPrefab_18() const { return ___MeteorPrefab_18; }
	inline GameObject_t1756533147 ** get_address_of_MeteorPrefab_18() { return &___MeteorPrefab_18; }
	inline void set_MeteorPrefab_18(GameObject_t1756533147 * value)
	{
		___MeteorPrefab_18 = value;
		Il2CppCodeGenWriteBarrier(&___MeteorPrefab_18, value);
	}

	inline static int32_t get_offset_of_MeteorExplosionParticleSystem_19() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___MeteorExplosionParticleSystem_19)); }
	inline ParticleSystem_t3394631041 * get_MeteorExplosionParticleSystem_19() const { return ___MeteorExplosionParticleSystem_19; }
	inline ParticleSystem_t3394631041 ** get_address_of_MeteorExplosionParticleSystem_19() { return &___MeteorExplosionParticleSystem_19; }
	inline void set_MeteorExplosionParticleSystem_19(ParticleSystem_t3394631041 * value)
	{
		___MeteorExplosionParticleSystem_19 = value;
		Il2CppCodeGenWriteBarrier(&___MeteorExplosionParticleSystem_19, value);
	}

	inline static int32_t get_offset_of_MeteorShrapnelParticleSystem_20() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___MeteorShrapnelParticleSystem_20)); }
	inline ParticleSystem_t3394631041 * get_MeteorShrapnelParticleSystem_20() const { return ___MeteorShrapnelParticleSystem_20; }
	inline ParticleSystem_t3394631041 ** get_address_of_MeteorShrapnelParticleSystem_20() { return &___MeteorShrapnelParticleSystem_20; }
	inline void set_MeteorShrapnelParticleSystem_20(ParticleSystem_t3394631041 * value)
	{
		___MeteorShrapnelParticleSystem_20 = value;
		Il2CppCodeGenWriteBarrier(&___MeteorShrapnelParticleSystem_20, value);
	}

	inline static int32_t get_offset_of_MeteorMaterials_21() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___MeteorMaterials_21)); }
	inline MaterialU5BU5D_t3123989686* get_MeteorMaterials_21() const { return ___MeteorMaterials_21; }
	inline MaterialU5BU5D_t3123989686** get_address_of_MeteorMaterials_21() { return &___MeteorMaterials_21; }
	inline void set_MeteorMaterials_21(MaterialU5BU5D_t3123989686* value)
	{
		___MeteorMaterials_21 = value;
		Il2CppCodeGenWriteBarrier(&___MeteorMaterials_21, value);
	}

	inline static int32_t get_offset_of_MeteorMeshes_22() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___MeteorMeshes_22)); }
	inline MeshU5BU5D_t894826206* get_MeteorMeshes_22() const { return ___MeteorMeshes_22; }
	inline MeshU5BU5D_t894826206** get_address_of_MeteorMeshes_22() { return &___MeteorMeshes_22; }
	inline void set_MeteorMeshes_22(MeshU5BU5D_t894826206* value)
	{
		___MeteorMeshes_22 = value;
		Il2CppCodeGenWriteBarrier(&___MeteorMeshes_22, value);
	}

	inline static int32_t get_offset_of_DestinationRadius_23() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___DestinationRadius_23)); }
	inline float get_DestinationRadius_23() const { return ___DestinationRadius_23; }
	inline float* get_address_of_DestinationRadius_23() { return &___DestinationRadius_23; }
	inline void set_DestinationRadius_23(float value)
	{
		___DestinationRadius_23 = value;
	}

	inline static int32_t get_offset_of_Source_24() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___Source_24)); }
	inline Vector3_t2243707580  get_Source_24() const { return ___Source_24; }
	inline Vector3_t2243707580 * get_address_of_Source_24() { return &___Source_24; }
	inline void set_Source_24(Vector3_t2243707580  value)
	{
		___Source_24 = value;
	}

	inline static int32_t get_offset_of_SourceRadius_25() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___SourceRadius_25)); }
	inline float get_SourceRadius_25() const { return ___SourceRadius_25; }
	inline float* get_address_of_SourceRadius_25() { return &___SourceRadius_25; }
	inline void set_SourceRadius_25(float value)
	{
		___SourceRadius_25 = value;
	}

	inline static int32_t get_offset_of_TimeToImpact_26() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___TimeToImpact_26)); }
	inline float get_TimeToImpact_26() const { return ___TimeToImpact_26; }
	inline float* get_address_of_TimeToImpact_26() { return &___TimeToImpact_26; }
	inline void set_TimeToImpact_26(float value)
	{
		___TimeToImpact_26 = value;
	}

	inline static int32_t get_offset_of_MeteorsPerSecondRange_27() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___MeteorsPerSecondRange_27)); }
	inline RangeOfIntegers_t1284975163  get_MeteorsPerSecondRange_27() const { return ___MeteorsPerSecondRange_27; }
	inline RangeOfIntegers_t1284975163 * get_address_of_MeteorsPerSecondRange_27() { return &___MeteorsPerSecondRange_27; }
	inline void set_MeteorsPerSecondRange_27(RangeOfIntegers_t1284975163  value)
	{
		___MeteorsPerSecondRange_27 = value;
	}

	inline static int32_t get_offset_of_ScaleRange_28() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___ScaleRange_28)); }
	inline RangeOfFloats_t2229862819  get_ScaleRange_28() const { return ___ScaleRange_28; }
	inline RangeOfFloats_t2229862819 * get_address_of_ScaleRange_28() { return &___ScaleRange_28; }
	inline void set_ScaleRange_28(RangeOfFloats_t2229862819  value)
	{
		___ScaleRange_28 = value;
	}

	inline static int32_t get_offset_of_MeteorLifeTimeRange_29() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___MeteorLifeTimeRange_29)); }
	inline RangeOfFloats_t2229862819  get_MeteorLifeTimeRange_29() const { return ___MeteorLifeTimeRange_29; }
	inline RangeOfFloats_t2229862819 * get_address_of_MeteorLifeTimeRange_29() { return &___MeteorLifeTimeRange_29; }
	inline void set_MeteorLifeTimeRange_29(RangeOfFloats_t2229862819  value)
	{
		___MeteorLifeTimeRange_29 = value;
	}

	inline static int32_t get_offset_of_EmissionSounds_30() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___EmissionSounds_30)); }
	inline AudioClipU5BU5D_t2203355011* get_EmissionSounds_30() const { return ___EmissionSounds_30; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_EmissionSounds_30() { return &___EmissionSounds_30; }
	inline void set_EmissionSounds_30(AudioClipU5BU5D_t2203355011* value)
	{
		___EmissionSounds_30 = value;
		Il2CppCodeGenWriteBarrier(&___EmissionSounds_30, value);
	}

	inline static int32_t get_offset_of_ExplosionSounds_31() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___ExplosionSounds_31)); }
	inline AudioClipU5BU5D_t2203355011* get_ExplosionSounds_31() const { return ___ExplosionSounds_31; }
	inline AudioClipU5BU5D_t2203355011** get_address_of_ExplosionSounds_31() { return &___ExplosionSounds_31; }
	inline void set_ExplosionSounds_31(AudioClipU5BU5D_t2203355011* value)
	{
		___ExplosionSounds_31 = value;
		Il2CppCodeGenWriteBarrier(&___ExplosionSounds_31, value);
	}

	inline static int32_t get_offset_of_CollisionDelegate_32() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___CollisionDelegate_32)); }
	inline MeteorSwarmCollisionDelegate_t469570461 * get_CollisionDelegate_32() const { return ___CollisionDelegate_32; }
	inline MeteorSwarmCollisionDelegate_t469570461 ** get_address_of_CollisionDelegate_32() { return &___CollisionDelegate_32; }
	inline void set_CollisionDelegate_32(MeteorSwarmCollisionDelegate_t469570461 * value)
	{
		___CollisionDelegate_32 = value;
		Il2CppCodeGenWriteBarrier(&___CollisionDelegate_32, value);
	}

	inline static int32_t get_offset_of_elapsedSecond_33() { return static_cast<int32_t>(offsetof(MeteorSwarmScript_t2828674059, ___elapsedSecond_33)); }
	inline float get_elapsedSecond_33() const { return ___elapsedSecond_33; }
	inline float* get_address_of_elapsedSecond_33() { return &___elapsedSecond_33; }
	inline void set_elapsedSecond_33(float value)
	{
		___elapsedSecond_33 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
