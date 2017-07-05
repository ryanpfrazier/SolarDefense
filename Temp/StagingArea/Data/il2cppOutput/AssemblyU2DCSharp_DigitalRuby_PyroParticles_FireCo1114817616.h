#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// DigitalRuby.PyroParticles.ICollisionHandler
struct ICollisionHandler_t1639490047;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DigitalRuby.PyroParticles.FireCollisionForwardScript
struct  FireCollisionForwardScript_t1114817616  : public MonoBehaviour_t1158329972
{
public:
	// DigitalRuby.PyroParticles.ICollisionHandler DigitalRuby.PyroParticles.FireCollisionForwardScript::CollisionHandler
	Il2CppObject * ___CollisionHandler_2;

public:
	inline static int32_t get_offset_of_CollisionHandler_2() { return static_cast<int32_t>(offsetof(FireCollisionForwardScript_t1114817616, ___CollisionHandler_2)); }
	inline Il2CppObject * get_CollisionHandler_2() const { return ___CollisionHandler_2; }
	inline Il2CppObject ** get_address_of_CollisionHandler_2() { return &___CollisionHandler_2; }
	inline void set_CollisionHandler_2(Il2CppObject * value)
	{
		___CollisionHandler_2 = value;
		Il2CppCodeGenWriteBarrier(&___CollisionHandler_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
