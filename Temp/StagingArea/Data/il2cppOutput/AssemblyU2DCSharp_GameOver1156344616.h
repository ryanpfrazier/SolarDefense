#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameOver
struct  GameOver_t1156344616  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text GameOver::wavesSurvived
	Text_t356221433 * ___wavesSurvived_2;

public:
	inline static int32_t get_offset_of_wavesSurvived_2() { return static_cast<int32_t>(offsetof(GameOver_t1156344616, ___wavesSurvived_2)); }
	inline Text_t356221433 * get_wavesSurvived_2() const { return ___wavesSurvived_2; }
	inline Text_t356221433 ** get_address_of_wavesSurvived_2() { return &___wavesSurvived_2; }
	inline void set_wavesSurvived_2(Text_t356221433 * value)
	{
		___wavesSurvived_2 = value;
		Il2CppCodeGenWriteBarrier(&___wavesSurvived_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
