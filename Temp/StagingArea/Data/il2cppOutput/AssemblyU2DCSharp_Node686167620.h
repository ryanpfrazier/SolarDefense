#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Renderer
struct Renderer_t257310565;
// TurretPrefabClass
struct TurretPrefabClass_t83922056;
// TurretBuilder
struct TurretBuilder_t1387668663;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Node
struct  Node_t686167620  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Color Node::hoverColor
	Color_t2020392075  ___hoverColor_2;
	// UnityEngine.Color Node::notEnoughMoneyColor
	Color_t2020392075  ___notEnoughMoneyColor_3;
	// UnityEngine.Color Node::originalColor
	Color_t2020392075  ___originalColor_4;
	// UnityEngine.Renderer Node::r
	Renderer_t257310565 * ___r_5;
	// TurretPrefabClass Node::sellingTurret
	TurretPrefabClass_t83922056 * ___sellingTurret_6;
	// TurretBuilder Node::turretBuilder
	TurretBuilder_t1387668663 * ___turretBuilder_7;
	// TurretPrefabClass Node::bulletTurret
	TurretPrefabClass_t83922056 * ___bulletTurret_8;
	// System.Int32 Node::bulletTurretCost
	int32_t ___bulletTurretCost_9;
	// TurretPrefabClass Node::flamethrowerTurret
	TurretPrefabClass_t83922056 * ___flamethrowerTurret_10;
	// System.Int32 Node::flamethrowerTurretCost
	int32_t ___flamethrowerTurretCost_11;
	// TurretPrefabClass Node::laserTurret
	TurretPrefabClass_t83922056 * ___laserTurret_12;
	// System.Int32 Node::laserTurretCost
	int32_t ___laserTurretCost_13;
	// UnityEngine.GameObject Node::turret
	GameObject_t1756533147 * ___turret_14;

public:
	inline static int32_t get_offset_of_hoverColor_2() { return static_cast<int32_t>(offsetof(Node_t686167620, ___hoverColor_2)); }
	inline Color_t2020392075  get_hoverColor_2() const { return ___hoverColor_2; }
	inline Color_t2020392075 * get_address_of_hoverColor_2() { return &___hoverColor_2; }
	inline void set_hoverColor_2(Color_t2020392075  value)
	{
		___hoverColor_2 = value;
	}

	inline static int32_t get_offset_of_notEnoughMoneyColor_3() { return static_cast<int32_t>(offsetof(Node_t686167620, ___notEnoughMoneyColor_3)); }
	inline Color_t2020392075  get_notEnoughMoneyColor_3() const { return ___notEnoughMoneyColor_3; }
	inline Color_t2020392075 * get_address_of_notEnoughMoneyColor_3() { return &___notEnoughMoneyColor_3; }
	inline void set_notEnoughMoneyColor_3(Color_t2020392075  value)
	{
		___notEnoughMoneyColor_3 = value;
	}

	inline static int32_t get_offset_of_originalColor_4() { return static_cast<int32_t>(offsetof(Node_t686167620, ___originalColor_4)); }
	inline Color_t2020392075  get_originalColor_4() const { return ___originalColor_4; }
	inline Color_t2020392075 * get_address_of_originalColor_4() { return &___originalColor_4; }
	inline void set_originalColor_4(Color_t2020392075  value)
	{
		___originalColor_4 = value;
	}

	inline static int32_t get_offset_of_r_5() { return static_cast<int32_t>(offsetof(Node_t686167620, ___r_5)); }
	inline Renderer_t257310565 * get_r_5() const { return ___r_5; }
	inline Renderer_t257310565 ** get_address_of_r_5() { return &___r_5; }
	inline void set_r_5(Renderer_t257310565 * value)
	{
		___r_5 = value;
		Il2CppCodeGenWriteBarrier(&___r_5, value);
	}

	inline static int32_t get_offset_of_sellingTurret_6() { return static_cast<int32_t>(offsetof(Node_t686167620, ___sellingTurret_6)); }
	inline TurretPrefabClass_t83922056 * get_sellingTurret_6() const { return ___sellingTurret_6; }
	inline TurretPrefabClass_t83922056 ** get_address_of_sellingTurret_6() { return &___sellingTurret_6; }
	inline void set_sellingTurret_6(TurretPrefabClass_t83922056 * value)
	{
		___sellingTurret_6 = value;
		Il2CppCodeGenWriteBarrier(&___sellingTurret_6, value);
	}

	inline static int32_t get_offset_of_turretBuilder_7() { return static_cast<int32_t>(offsetof(Node_t686167620, ___turretBuilder_7)); }
	inline TurretBuilder_t1387668663 * get_turretBuilder_7() const { return ___turretBuilder_7; }
	inline TurretBuilder_t1387668663 ** get_address_of_turretBuilder_7() { return &___turretBuilder_7; }
	inline void set_turretBuilder_7(TurretBuilder_t1387668663 * value)
	{
		___turretBuilder_7 = value;
		Il2CppCodeGenWriteBarrier(&___turretBuilder_7, value);
	}

	inline static int32_t get_offset_of_bulletTurret_8() { return static_cast<int32_t>(offsetof(Node_t686167620, ___bulletTurret_8)); }
	inline TurretPrefabClass_t83922056 * get_bulletTurret_8() const { return ___bulletTurret_8; }
	inline TurretPrefabClass_t83922056 ** get_address_of_bulletTurret_8() { return &___bulletTurret_8; }
	inline void set_bulletTurret_8(TurretPrefabClass_t83922056 * value)
	{
		___bulletTurret_8 = value;
		Il2CppCodeGenWriteBarrier(&___bulletTurret_8, value);
	}

	inline static int32_t get_offset_of_bulletTurretCost_9() { return static_cast<int32_t>(offsetof(Node_t686167620, ___bulletTurretCost_9)); }
	inline int32_t get_bulletTurretCost_9() const { return ___bulletTurretCost_9; }
	inline int32_t* get_address_of_bulletTurretCost_9() { return &___bulletTurretCost_9; }
	inline void set_bulletTurretCost_9(int32_t value)
	{
		___bulletTurretCost_9 = value;
	}

	inline static int32_t get_offset_of_flamethrowerTurret_10() { return static_cast<int32_t>(offsetof(Node_t686167620, ___flamethrowerTurret_10)); }
	inline TurretPrefabClass_t83922056 * get_flamethrowerTurret_10() const { return ___flamethrowerTurret_10; }
	inline TurretPrefabClass_t83922056 ** get_address_of_flamethrowerTurret_10() { return &___flamethrowerTurret_10; }
	inline void set_flamethrowerTurret_10(TurretPrefabClass_t83922056 * value)
	{
		___flamethrowerTurret_10 = value;
		Il2CppCodeGenWriteBarrier(&___flamethrowerTurret_10, value);
	}

	inline static int32_t get_offset_of_flamethrowerTurretCost_11() { return static_cast<int32_t>(offsetof(Node_t686167620, ___flamethrowerTurretCost_11)); }
	inline int32_t get_flamethrowerTurretCost_11() const { return ___flamethrowerTurretCost_11; }
	inline int32_t* get_address_of_flamethrowerTurretCost_11() { return &___flamethrowerTurretCost_11; }
	inline void set_flamethrowerTurretCost_11(int32_t value)
	{
		___flamethrowerTurretCost_11 = value;
	}

	inline static int32_t get_offset_of_laserTurret_12() { return static_cast<int32_t>(offsetof(Node_t686167620, ___laserTurret_12)); }
	inline TurretPrefabClass_t83922056 * get_laserTurret_12() const { return ___laserTurret_12; }
	inline TurretPrefabClass_t83922056 ** get_address_of_laserTurret_12() { return &___laserTurret_12; }
	inline void set_laserTurret_12(TurretPrefabClass_t83922056 * value)
	{
		___laserTurret_12 = value;
		Il2CppCodeGenWriteBarrier(&___laserTurret_12, value);
	}

	inline static int32_t get_offset_of_laserTurretCost_13() { return static_cast<int32_t>(offsetof(Node_t686167620, ___laserTurretCost_13)); }
	inline int32_t get_laserTurretCost_13() const { return ___laserTurretCost_13; }
	inline int32_t* get_address_of_laserTurretCost_13() { return &___laserTurretCost_13; }
	inline void set_laserTurretCost_13(int32_t value)
	{
		___laserTurretCost_13 = value;
	}

	inline static int32_t get_offset_of_turret_14() { return static_cast<int32_t>(offsetof(Node_t686167620, ___turret_14)); }
	inline GameObject_t1756533147 * get_turret_14() const { return ___turret_14; }
	inline GameObject_t1756533147 ** get_address_of_turret_14() { return &___turret_14; }
	inline void set_turret_14(GameObject_t1756533147 * value)
	{
		___turret_14 = value;
		Il2CppCodeGenWriteBarrier(&___turret_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
