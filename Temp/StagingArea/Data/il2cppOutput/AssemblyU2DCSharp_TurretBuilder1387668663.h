#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// TurretBuilder
struct TurretBuilder_t1387668663;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// TurretPrefabClass
struct TurretPrefabClass_t83922056;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TurretBuilder
struct  TurretBuilder_t1387668663  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TurretBuilder::bulletTurretPrefab
	GameObject_t1756533147 * ___bulletTurretPrefab_3;
	// UnityEngine.GameObject TurretBuilder::flamethrowerTurretPrefab
	GameObject_t1756533147 * ___flamethrowerTurretPrefab_4;
	// UnityEngine.GameObject TurretBuilder::laserTurretPrefab
	GameObject_t1756533147 * ___laserTurretPrefab_5;
	// TurretPrefabClass TurretBuilder::turretToBuild
	TurretPrefabClass_t83922056 * ___turretToBuild_6;
	// UnityEngine.GameObject TurretBuilder::buildEffect
	GameObject_t1756533147 * ___buildEffect_7;

public:
	inline static int32_t get_offset_of_bulletTurretPrefab_3() { return static_cast<int32_t>(offsetof(TurretBuilder_t1387668663, ___bulletTurretPrefab_3)); }
	inline GameObject_t1756533147 * get_bulletTurretPrefab_3() const { return ___bulletTurretPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_bulletTurretPrefab_3() { return &___bulletTurretPrefab_3; }
	inline void set_bulletTurretPrefab_3(GameObject_t1756533147 * value)
	{
		___bulletTurretPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___bulletTurretPrefab_3, value);
	}

	inline static int32_t get_offset_of_flamethrowerTurretPrefab_4() { return static_cast<int32_t>(offsetof(TurretBuilder_t1387668663, ___flamethrowerTurretPrefab_4)); }
	inline GameObject_t1756533147 * get_flamethrowerTurretPrefab_4() const { return ___flamethrowerTurretPrefab_4; }
	inline GameObject_t1756533147 ** get_address_of_flamethrowerTurretPrefab_4() { return &___flamethrowerTurretPrefab_4; }
	inline void set_flamethrowerTurretPrefab_4(GameObject_t1756533147 * value)
	{
		___flamethrowerTurretPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___flamethrowerTurretPrefab_4, value);
	}

	inline static int32_t get_offset_of_laserTurretPrefab_5() { return static_cast<int32_t>(offsetof(TurretBuilder_t1387668663, ___laserTurretPrefab_5)); }
	inline GameObject_t1756533147 * get_laserTurretPrefab_5() const { return ___laserTurretPrefab_5; }
	inline GameObject_t1756533147 ** get_address_of_laserTurretPrefab_5() { return &___laserTurretPrefab_5; }
	inline void set_laserTurretPrefab_5(GameObject_t1756533147 * value)
	{
		___laserTurretPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___laserTurretPrefab_5, value);
	}

	inline static int32_t get_offset_of_turretToBuild_6() { return static_cast<int32_t>(offsetof(TurretBuilder_t1387668663, ___turretToBuild_6)); }
	inline TurretPrefabClass_t83922056 * get_turretToBuild_6() const { return ___turretToBuild_6; }
	inline TurretPrefabClass_t83922056 ** get_address_of_turretToBuild_6() { return &___turretToBuild_6; }
	inline void set_turretToBuild_6(TurretPrefabClass_t83922056 * value)
	{
		___turretToBuild_6 = value;
		Il2CppCodeGenWriteBarrier(&___turretToBuild_6, value);
	}

	inline static int32_t get_offset_of_buildEffect_7() { return static_cast<int32_t>(offsetof(TurretBuilder_t1387668663, ___buildEffect_7)); }
	inline GameObject_t1756533147 * get_buildEffect_7() const { return ___buildEffect_7; }
	inline GameObject_t1756533147 ** get_address_of_buildEffect_7() { return &___buildEffect_7; }
	inline void set_buildEffect_7(GameObject_t1756533147 * value)
	{
		___buildEffect_7 = value;
		Il2CppCodeGenWriteBarrier(&___buildEffect_7, value);
	}
};

struct TurretBuilder_t1387668663_StaticFields
{
public:
	// TurretBuilder TurretBuilder::builder
	TurretBuilder_t1387668663 * ___builder_2;

public:
	inline static int32_t get_offset_of_builder_2() { return static_cast<int32_t>(offsetof(TurretBuilder_t1387668663_StaticFields, ___builder_2)); }
	inline TurretBuilder_t1387668663 * get_builder_2() const { return ___builder_2; }
	inline TurretBuilder_t1387668663 ** get_address_of_builder_2() { return &___builder_2; }
	inline void set_builder_2(TurretBuilder_t1387668663 * value)
	{
		___builder_2 = value;
		Il2CppCodeGenWriteBarrier(&___builder_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
