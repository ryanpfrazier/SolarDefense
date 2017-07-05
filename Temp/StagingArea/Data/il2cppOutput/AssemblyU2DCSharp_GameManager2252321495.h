#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// CameraScript
struct CameraScript_t1663580776;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameManager::gameOverUI
	GameObject_t1756533147 * ___gameOverUI_5;
	// UnityEngine.GameObject GameManager::pauseUI
	GameObject_t1756533147 * ___pauseUI_6;
	// UnityEngine.GameObject GameManager::mainMenuUI
	GameObject_t1756533147 * ___mainMenuUI_7;
	// CameraScript GameManager::camera
	CameraScript_t1663580776 * ___camera_8;

public:
	inline static int32_t get_offset_of_gameOverUI_5() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___gameOverUI_5)); }
	inline GameObject_t1756533147 * get_gameOverUI_5() const { return ___gameOverUI_5; }
	inline GameObject_t1756533147 ** get_address_of_gameOverUI_5() { return &___gameOverUI_5; }
	inline void set_gameOverUI_5(GameObject_t1756533147 * value)
	{
		___gameOverUI_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverUI_5, value);
	}

	inline static int32_t get_offset_of_pauseUI_6() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___pauseUI_6)); }
	inline GameObject_t1756533147 * get_pauseUI_6() const { return ___pauseUI_6; }
	inline GameObject_t1756533147 ** get_address_of_pauseUI_6() { return &___pauseUI_6; }
	inline void set_pauseUI_6(GameObject_t1756533147 * value)
	{
		___pauseUI_6 = value;
		Il2CppCodeGenWriteBarrier(&___pauseUI_6, value);
	}

	inline static int32_t get_offset_of_mainMenuUI_7() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___mainMenuUI_7)); }
	inline GameObject_t1756533147 * get_mainMenuUI_7() const { return ___mainMenuUI_7; }
	inline GameObject_t1756533147 ** get_address_of_mainMenuUI_7() { return &___mainMenuUI_7; }
	inline void set_mainMenuUI_7(GameObject_t1756533147 * value)
	{
		___mainMenuUI_7 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenuUI_7, value);
	}

	inline static int32_t get_offset_of_camera_8() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___camera_8)); }
	inline CameraScript_t1663580776 * get_camera_8() const { return ___camera_8; }
	inline CameraScript_t1663580776 ** get_address_of_camera_8() { return &___camera_8; }
	inline void set_camera_8(CameraScript_t1663580776 * value)
	{
		___camera_8 = value;
		Il2CppCodeGenWriteBarrier(&___camera_8, value);
	}
};

struct GameManager_t2252321495_StaticFields
{
public:
	// System.Boolean GameManager::gameOver
	bool ___gameOver_2;
	// System.Boolean GameManager::pause
	bool ___pause_3;
	// System.Boolean GameManager::gameOn
	bool ___gameOn_4;

public:
	inline static int32_t get_offset_of_gameOver_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___gameOver_2)); }
	inline bool get_gameOver_2() const { return ___gameOver_2; }
	inline bool* get_address_of_gameOver_2() { return &___gameOver_2; }
	inline void set_gameOver_2(bool value)
	{
		___gameOver_2 = value;
	}

	inline static int32_t get_offset_of_pause_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___pause_3)); }
	inline bool get_pause_3() const { return ___pause_3; }
	inline bool* get_address_of_pause_3() { return &___pause_3; }
	inline void set_pause_3(bool value)
	{
		___pause_3 = value;
	}

	inline static int32_t get_offset_of_gameOn_4() { return static_cast<int32_t>(offsetof(GameManager_t2252321495_StaticFields, ___gameOn_4)); }
	inline bool get_gameOn_4() const { return ___gameOn_4; }
	inline bool* get_address_of_gameOn_4() { return &___gameOn_4; }
	inline void set_gameOn_4(bool value)
	{
		___gameOn_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
