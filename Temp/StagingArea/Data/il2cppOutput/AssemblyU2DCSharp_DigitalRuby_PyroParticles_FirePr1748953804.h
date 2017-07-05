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
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1490986844;
// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate
struct FireProjectileCollisionDelegate_t192859618;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.PyroParticles.FireProjectileScript
struct  FireProjectileScript_t1748953804  : public FireBaseScript_t1360394360
{
public:
	// UnityEngine.GameObject DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderObject
	GameObject_t1756533147 * ___ProjectileColliderObject_18;
	// UnityEngine.AudioSource DigitalRuby.PyroParticles.FireProjectileScript::ProjectileCollisionSound
	AudioSource_t1135106623 * ___ProjectileCollisionSound_19;
	// UnityEngine.ParticleSystem DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionParticleSystem
	ParticleSystem_t3394631041 * ___ProjectileExplosionParticleSystem_20;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionRadius
	float ___ProjectileExplosionRadius_21;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileExplosionForce
	float ___ProjectileExplosionForce_22;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderDelay
	float ___ProjectileColliderDelay_23;
	// System.Single DigitalRuby.PyroParticles.FireProjectileScript::ProjectileColliderSpeed
	float ___ProjectileColliderSpeed_24;
	// UnityEngine.Vector3 DigitalRuby.PyroParticles.FireProjectileScript::ProjectileDirection
	Vector3_t2243707580  ___ProjectileDirection_25;
	// UnityEngine.LayerMask DigitalRuby.PyroParticles.FireProjectileScript::ProjectileCollisionLayers
	LayerMask_t3188175821  ___ProjectileCollisionLayers_26;
	// UnityEngine.ParticleSystem[] DigitalRuby.PyroParticles.FireProjectileScript::ProjectileDestroyParticleSystemsOnCollision
	ParticleSystemU5BU5D_t1490986844* ___ProjectileDestroyParticleSystemsOnCollision_27;
	// DigitalRuby.PyroParticles.FireProjectileCollisionDelegate DigitalRuby.PyroParticles.FireProjectileScript::CollisionDelegate
	FireProjectileCollisionDelegate_t192859618 * ___CollisionDelegate_28;
	// System.Boolean DigitalRuby.PyroParticles.FireProjectileScript::collided
	bool ___collided_29;

public:
	inline static int32_t get_offset_of_ProjectileColliderObject_18() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileColliderObject_18)); }
	inline GameObject_t1756533147 * get_ProjectileColliderObject_18() const { return ___ProjectileColliderObject_18; }
	inline GameObject_t1756533147 ** get_address_of_ProjectileColliderObject_18() { return &___ProjectileColliderObject_18; }
	inline void set_ProjectileColliderObject_18(GameObject_t1756533147 * value)
	{
		___ProjectileColliderObject_18 = value;
		Il2CppCodeGenWriteBarrier(&___ProjectileColliderObject_18, value);
	}

	inline static int32_t get_offset_of_ProjectileCollisionSound_19() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileCollisionSound_19)); }
	inline AudioSource_t1135106623 * get_ProjectileCollisionSound_19() const { return ___ProjectileCollisionSound_19; }
	inline AudioSource_t1135106623 ** get_address_of_ProjectileCollisionSound_19() { return &___ProjectileCollisionSound_19; }
	inline void set_ProjectileCollisionSound_19(AudioSource_t1135106623 * value)
	{
		___ProjectileCollisionSound_19 = value;
		Il2CppCodeGenWriteBarrier(&___ProjectileCollisionSound_19, value);
	}

	inline static int32_t get_offset_of_ProjectileExplosionParticleSystem_20() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileExplosionParticleSystem_20)); }
	inline ParticleSystem_t3394631041 * get_ProjectileExplosionParticleSystem_20() const { return ___ProjectileExplosionParticleSystem_20; }
	inline ParticleSystem_t3394631041 ** get_address_of_ProjectileExplosionParticleSystem_20() { return &___ProjectileExplosionParticleSystem_20; }
	inline void set_ProjectileExplosionParticleSystem_20(ParticleSystem_t3394631041 * value)
	{
		___ProjectileExplosionParticleSystem_20 = value;
		Il2CppCodeGenWriteBarrier(&___ProjectileExplosionParticleSystem_20, value);
	}

	inline static int32_t get_offset_of_ProjectileExplosionRadius_21() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileExplosionRadius_21)); }
	inline float get_ProjectileExplosionRadius_21() const { return ___ProjectileExplosionRadius_21; }
	inline float* get_address_of_ProjectileExplosionRadius_21() { return &___ProjectileExplosionRadius_21; }
	inline void set_ProjectileExplosionRadius_21(float value)
	{
		___ProjectileExplosionRadius_21 = value;
	}

	inline static int32_t get_offset_of_ProjectileExplosionForce_22() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileExplosionForce_22)); }
	inline float get_ProjectileExplosionForce_22() const { return ___ProjectileExplosionForce_22; }
	inline float* get_address_of_ProjectileExplosionForce_22() { return &___ProjectileExplosionForce_22; }
	inline void set_ProjectileExplosionForce_22(float value)
	{
		___ProjectileExplosionForce_22 = value;
	}

	inline static int32_t get_offset_of_ProjectileColliderDelay_23() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileColliderDelay_23)); }
	inline float get_ProjectileColliderDelay_23() const { return ___ProjectileColliderDelay_23; }
	inline float* get_address_of_ProjectileColliderDelay_23() { return &___ProjectileColliderDelay_23; }
	inline void set_ProjectileColliderDelay_23(float value)
	{
		___ProjectileColliderDelay_23 = value;
	}

	inline static int32_t get_offset_of_ProjectileColliderSpeed_24() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileColliderSpeed_24)); }
	inline float get_ProjectileColliderSpeed_24() const { return ___ProjectileColliderSpeed_24; }
	inline float* get_address_of_ProjectileColliderSpeed_24() { return &___ProjectileColliderSpeed_24; }
	inline void set_ProjectileColliderSpeed_24(float value)
	{
		___ProjectileColliderSpeed_24 = value;
	}

	inline static int32_t get_offset_of_ProjectileDirection_25() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileDirection_25)); }
	inline Vector3_t2243707580  get_ProjectileDirection_25() const { return ___ProjectileDirection_25; }
	inline Vector3_t2243707580 * get_address_of_ProjectileDirection_25() { return &___ProjectileDirection_25; }
	inline void set_ProjectileDirection_25(Vector3_t2243707580  value)
	{
		___ProjectileDirection_25 = value;
	}

	inline static int32_t get_offset_of_ProjectileCollisionLayers_26() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileCollisionLayers_26)); }
	inline LayerMask_t3188175821  get_ProjectileCollisionLayers_26() const { return ___ProjectileCollisionLayers_26; }
	inline LayerMask_t3188175821 * get_address_of_ProjectileCollisionLayers_26() { return &___ProjectileCollisionLayers_26; }
	inline void set_ProjectileCollisionLayers_26(LayerMask_t3188175821  value)
	{
		___ProjectileCollisionLayers_26 = value;
	}

	inline static int32_t get_offset_of_ProjectileDestroyParticleSystemsOnCollision_27() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___ProjectileDestroyParticleSystemsOnCollision_27)); }
	inline ParticleSystemU5BU5D_t1490986844* get_ProjectileDestroyParticleSystemsOnCollision_27() const { return ___ProjectileDestroyParticleSystemsOnCollision_27; }
	inline ParticleSystemU5BU5D_t1490986844** get_address_of_ProjectileDestroyParticleSystemsOnCollision_27() { return &___ProjectileDestroyParticleSystemsOnCollision_27; }
	inline void set_ProjectileDestroyParticleSystemsOnCollision_27(ParticleSystemU5BU5D_t1490986844* value)
	{
		___ProjectileDestroyParticleSystemsOnCollision_27 = value;
		Il2CppCodeGenWriteBarrier(&___ProjectileDestroyParticleSystemsOnCollision_27, value);
	}

	inline static int32_t get_offset_of_CollisionDelegate_28() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___CollisionDelegate_28)); }
	inline FireProjectileCollisionDelegate_t192859618 * get_CollisionDelegate_28() const { return ___CollisionDelegate_28; }
	inline FireProjectileCollisionDelegate_t192859618 ** get_address_of_CollisionDelegate_28() { return &___CollisionDelegate_28; }
	inline void set_CollisionDelegate_28(FireProjectileCollisionDelegate_t192859618 * value)
	{
		___CollisionDelegate_28 = value;
		Il2CppCodeGenWriteBarrier(&___CollisionDelegate_28, value);
	}

	inline static int32_t get_offset_of_collided_29() { return static_cast<int32_t>(offsetof(FireProjectileScript_t1748953804, ___collided_29)); }
	inline bool get_collided_29() const { return ___collided_29; }
	inline bool* get_address_of_collided_29() { return &___collided_29; }
	inline void set_collided_29(bool value)
	{
		___collided_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
