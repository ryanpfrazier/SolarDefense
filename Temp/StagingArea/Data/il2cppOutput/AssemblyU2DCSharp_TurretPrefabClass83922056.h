#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TurretPrefabClass
struct  TurretPrefabClass_t83922056  : public Il2CppObject
{
public:
	// UnityEngine.GameObject TurretPrefabClass::prefab
	GameObject_t1756533147 * ___prefab_0;
	// System.String TurretPrefabClass::name
	String_t* ___name_1;
	// System.Int32 TurretPrefabClass::cost
	int32_t ___cost_2;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(TurretPrefabClass_t83922056, ___prefab_0)); }
	inline GameObject_t1756533147 * get_prefab_0() const { return ___prefab_0; }
	inline GameObject_t1756533147 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(GameObject_t1756533147 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier(&___prefab_0, value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(TurretPrefabClass_t83922056, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_cost_2() { return static_cast<int32_t>(offsetof(TurretPrefabClass_t83922056, ___cost_2)); }
	inline int32_t get_cost_2() const { return ___cost_2; }
	inline int32_t* get_address_of_cost_2() { return &___cost_2; }
	inline void set_cost_2(int32_t value)
	{
		___cost_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
