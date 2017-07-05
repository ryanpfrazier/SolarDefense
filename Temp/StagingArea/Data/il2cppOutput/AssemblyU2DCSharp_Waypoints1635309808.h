#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform[]
struct TransformU5BU5D_t3764228911;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Waypoints
struct  Waypoints_t1635309808  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Waypoints_t1635309808_StaticFields
{
public:
	// UnityEngine.Transform[] Waypoints::points
	TransformU5BU5D_t3764228911* ___points_2;

public:
	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(Waypoints_t1635309808_StaticFields, ___points_2)); }
	inline TransformU5BU5D_t3764228911* get_points_2() const { return ___points_2; }
	inline TransformU5BU5D_t3764228911** get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(TransformU5BU5D_t3764228911* value)
	{
		___points_2 = value;
		Il2CppCodeGenWriteBarrier(&___points_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
