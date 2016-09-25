#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomizablePowerUp
struct  CustomizablePowerUp_t2151097860  : public MonoBehaviour_t667441552
{
public:
	// System.String CustomizablePowerUp::powerUpName
	String_t* ___powerUpName_2;
	// System.Boolean CustomizablePowerUp::isTakeable
	bool ___isTakeable_3;
	// UnityEngine.AudioClip CustomizablePowerUp::pickUpSound
	AudioClip_t794140988 * ___pickUpSound_4;
	// UnityEngine.GameObject CustomizablePowerUp::externHull
	GameObject_t3674682005 * ___externHull_5;
	// UnityEngine.GameObject CustomizablePowerUp::_externHull
	GameObject_t3674682005 * ____externHull_6;
	// System.Single CustomizablePowerUp::externHullRotSpeed
	float ___externHullRotSpeed_7;
	// System.Boolean CustomizablePowerUp::externHullIsReverse
	bool ___externHullIsReverse_8;
	// UnityEngine.Material CustomizablePowerUp::externHullMaterial
	Material_t3870600107 * ___externHullMaterial_9;
	// UnityEngine.GameObject CustomizablePowerUp::internHull
	GameObject_t3674682005 * ___internHull_10;
	// UnityEngine.GameObject CustomizablePowerUp::_internHull
	GameObject_t3674682005 * ____internHull_11;
	// System.Single CustomizablePowerUp::internHullRotSpeed
	float ___internHullRotSpeed_12;
	// System.Boolean CustomizablePowerUp::internHullIsReverse
	bool ___internHullIsReverse_13;
	// UnityEngine.Material CustomizablePowerUp::internHullMaterial
	Material_t3870600107 * ___internHullMaterial_14;
	// UnityEngine.GameObject CustomizablePowerUp::effect
	GameObject_t3674682005 * ___effect_15;
	// UnityEngine.GameObject CustomizablePowerUp::_effect
	GameObject_t3674682005 * ____effect_16;
	// System.Single CustomizablePowerUp::effectRotSpeed
	float ___effectRotSpeed_17;
	// System.Boolean CustomizablePowerUp::effectIsReverse
	bool ___effectIsReverse_18;
	// UnityEngine.GameObject CustomizablePowerUp::item
	GameObject_t3674682005 * ___item_19;
	// UnityEngine.GameObject CustomizablePowerUp::_item
	GameObject_t3674682005 * ____item_20;
	// System.Single CustomizablePowerUp::itemRotSpeed
	float ___itemRotSpeed_21;
	// System.Boolean CustomizablePowerUp::itemIsReverse
	bool ___itemIsReverse_22;
	// UnityEngine.Material CustomizablePowerUp::itemMaterial
	Material_t3870600107 * ___itemMaterial_23;
	// UnityEngine.GameObject CustomizablePowerUp::_light
	GameObject_t3674682005 * ____light_24;
	// UnityEngine.Color CustomizablePowerUp::lightColor
	Color_t4194546905  ___lightColor_25;
	// System.Single CustomizablePowerUp::lightIntensity
	float ___lightIntensity_26;
	// System.Single CustomizablePowerUp::lightRange
	float ___lightRange_27;

public:
	inline static int32_t get_offset_of_powerUpName_2() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___powerUpName_2)); }
	inline String_t* get_powerUpName_2() const { return ___powerUpName_2; }
	inline String_t** get_address_of_powerUpName_2() { return &___powerUpName_2; }
	inline void set_powerUpName_2(String_t* value)
	{
		___powerUpName_2 = value;
		Il2CppCodeGenWriteBarrier(&___powerUpName_2, value);
	}

	inline static int32_t get_offset_of_isTakeable_3() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___isTakeable_3)); }
	inline bool get_isTakeable_3() const { return ___isTakeable_3; }
	inline bool* get_address_of_isTakeable_3() { return &___isTakeable_3; }
	inline void set_isTakeable_3(bool value)
	{
		___isTakeable_3 = value;
	}

	inline static int32_t get_offset_of_pickUpSound_4() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___pickUpSound_4)); }
	inline AudioClip_t794140988 * get_pickUpSound_4() const { return ___pickUpSound_4; }
	inline AudioClip_t794140988 ** get_address_of_pickUpSound_4() { return &___pickUpSound_4; }
	inline void set_pickUpSound_4(AudioClip_t794140988 * value)
	{
		___pickUpSound_4 = value;
		Il2CppCodeGenWriteBarrier(&___pickUpSound_4, value);
	}

	inline static int32_t get_offset_of_externHull_5() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___externHull_5)); }
	inline GameObject_t3674682005 * get_externHull_5() const { return ___externHull_5; }
	inline GameObject_t3674682005 ** get_address_of_externHull_5() { return &___externHull_5; }
	inline void set_externHull_5(GameObject_t3674682005 * value)
	{
		___externHull_5 = value;
		Il2CppCodeGenWriteBarrier(&___externHull_5, value);
	}

	inline static int32_t get_offset_of__externHull_6() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ____externHull_6)); }
	inline GameObject_t3674682005 * get__externHull_6() const { return ____externHull_6; }
	inline GameObject_t3674682005 ** get_address_of__externHull_6() { return &____externHull_6; }
	inline void set__externHull_6(GameObject_t3674682005 * value)
	{
		____externHull_6 = value;
		Il2CppCodeGenWriteBarrier(&____externHull_6, value);
	}

	inline static int32_t get_offset_of_externHullRotSpeed_7() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___externHullRotSpeed_7)); }
	inline float get_externHullRotSpeed_7() const { return ___externHullRotSpeed_7; }
	inline float* get_address_of_externHullRotSpeed_7() { return &___externHullRotSpeed_7; }
	inline void set_externHullRotSpeed_7(float value)
	{
		___externHullRotSpeed_7 = value;
	}

	inline static int32_t get_offset_of_externHullIsReverse_8() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___externHullIsReverse_8)); }
	inline bool get_externHullIsReverse_8() const { return ___externHullIsReverse_8; }
	inline bool* get_address_of_externHullIsReverse_8() { return &___externHullIsReverse_8; }
	inline void set_externHullIsReverse_8(bool value)
	{
		___externHullIsReverse_8 = value;
	}

	inline static int32_t get_offset_of_externHullMaterial_9() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___externHullMaterial_9)); }
	inline Material_t3870600107 * get_externHullMaterial_9() const { return ___externHullMaterial_9; }
	inline Material_t3870600107 ** get_address_of_externHullMaterial_9() { return &___externHullMaterial_9; }
	inline void set_externHullMaterial_9(Material_t3870600107 * value)
	{
		___externHullMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___externHullMaterial_9, value);
	}

	inline static int32_t get_offset_of_internHull_10() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___internHull_10)); }
	inline GameObject_t3674682005 * get_internHull_10() const { return ___internHull_10; }
	inline GameObject_t3674682005 ** get_address_of_internHull_10() { return &___internHull_10; }
	inline void set_internHull_10(GameObject_t3674682005 * value)
	{
		___internHull_10 = value;
		Il2CppCodeGenWriteBarrier(&___internHull_10, value);
	}

	inline static int32_t get_offset_of__internHull_11() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ____internHull_11)); }
	inline GameObject_t3674682005 * get__internHull_11() const { return ____internHull_11; }
	inline GameObject_t3674682005 ** get_address_of__internHull_11() { return &____internHull_11; }
	inline void set__internHull_11(GameObject_t3674682005 * value)
	{
		____internHull_11 = value;
		Il2CppCodeGenWriteBarrier(&____internHull_11, value);
	}

	inline static int32_t get_offset_of_internHullRotSpeed_12() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___internHullRotSpeed_12)); }
	inline float get_internHullRotSpeed_12() const { return ___internHullRotSpeed_12; }
	inline float* get_address_of_internHullRotSpeed_12() { return &___internHullRotSpeed_12; }
	inline void set_internHullRotSpeed_12(float value)
	{
		___internHullRotSpeed_12 = value;
	}

	inline static int32_t get_offset_of_internHullIsReverse_13() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___internHullIsReverse_13)); }
	inline bool get_internHullIsReverse_13() const { return ___internHullIsReverse_13; }
	inline bool* get_address_of_internHullIsReverse_13() { return &___internHullIsReverse_13; }
	inline void set_internHullIsReverse_13(bool value)
	{
		___internHullIsReverse_13 = value;
	}

	inline static int32_t get_offset_of_internHullMaterial_14() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___internHullMaterial_14)); }
	inline Material_t3870600107 * get_internHullMaterial_14() const { return ___internHullMaterial_14; }
	inline Material_t3870600107 ** get_address_of_internHullMaterial_14() { return &___internHullMaterial_14; }
	inline void set_internHullMaterial_14(Material_t3870600107 * value)
	{
		___internHullMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___internHullMaterial_14, value);
	}

	inline static int32_t get_offset_of_effect_15() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___effect_15)); }
	inline GameObject_t3674682005 * get_effect_15() const { return ___effect_15; }
	inline GameObject_t3674682005 ** get_address_of_effect_15() { return &___effect_15; }
	inline void set_effect_15(GameObject_t3674682005 * value)
	{
		___effect_15 = value;
		Il2CppCodeGenWriteBarrier(&___effect_15, value);
	}

	inline static int32_t get_offset_of__effect_16() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ____effect_16)); }
	inline GameObject_t3674682005 * get__effect_16() const { return ____effect_16; }
	inline GameObject_t3674682005 ** get_address_of__effect_16() { return &____effect_16; }
	inline void set__effect_16(GameObject_t3674682005 * value)
	{
		____effect_16 = value;
		Il2CppCodeGenWriteBarrier(&____effect_16, value);
	}

	inline static int32_t get_offset_of_effectRotSpeed_17() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___effectRotSpeed_17)); }
	inline float get_effectRotSpeed_17() const { return ___effectRotSpeed_17; }
	inline float* get_address_of_effectRotSpeed_17() { return &___effectRotSpeed_17; }
	inline void set_effectRotSpeed_17(float value)
	{
		___effectRotSpeed_17 = value;
	}

	inline static int32_t get_offset_of_effectIsReverse_18() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___effectIsReverse_18)); }
	inline bool get_effectIsReverse_18() const { return ___effectIsReverse_18; }
	inline bool* get_address_of_effectIsReverse_18() { return &___effectIsReverse_18; }
	inline void set_effectIsReverse_18(bool value)
	{
		___effectIsReverse_18 = value;
	}

	inline static int32_t get_offset_of_item_19() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___item_19)); }
	inline GameObject_t3674682005 * get_item_19() const { return ___item_19; }
	inline GameObject_t3674682005 ** get_address_of_item_19() { return &___item_19; }
	inline void set_item_19(GameObject_t3674682005 * value)
	{
		___item_19 = value;
		Il2CppCodeGenWriteBarrier(&___item_19, value);
	}

	inline static int32_t get_offset_of__item_20() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ____item_20)); }
	inline GameObject_t3674682005 * get__item_20() const { return ____item_20; }
	inline GameObject_t3674682005 ** get_address_of__item_20() { return &____item_20; }
	inline void set__item_20(GameObject_t3674682005 * value)
	{
		____item_20 = value;
		Il2CppCodeGenWriteBarrier(&____item_20, value);
	}

	inline static int32_t get_offset_of_itemRotSpeed_21() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___itemRotSpeed_21)); }
	inline float get_itemRotSpeed_21() const { return ___itemRotSpeed_21; }
	inline float* get_address_of_itemRotSpeed_21() { return &___itemRotSpeed_21; }
	inline void set_itemRotSpeed_21(float value)
	{
		___itemRotSpeed_21 = value;
	}

	inline static int32_t get_offset_of_itemIsReverse_22() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___itemIsReverse_22)); }
	inline bool get_itemIsReverse_22() const { return ___itemIsReverse_22; }
	inline bool* get_address_of_itemIsReverse_22() { return &___itemIsReverse_22; }
	inline void set_itemIsReverse_22(bool value)
	{
		___itemIsReverse_22 = value;
	}

	inline static int32_t get_offset_of_itemMaterial_23() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___itemMaterial_23)); }
	inline Material_t3870600107 * get_itemMaterial_23() const { return ___itemMaterial_23; }
	inline Material_t3870600107 ** get_address_of_itemMaterial_23() { return &___itemMaterial_23; }
	inline void set_itemMaterial_23(Material_t3870600107 * value)
	{
		___itemMaterial_23 = value;
		Il2CppCodeGenWriteBarrier(&___itemMaterial_23, value);
	}

	inline static int32_t get_offset_of__light_24() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ____light_24)); }
	inline GameObject_t3674682005 * get__light_24() const { return ____light_24; }
	inline GameObject_t3674682005 ** get_address_of__light_24() { return &____light_24; }
	inline void set__light_24(GameObject_t3674682005 * value)
	{
		____light_24 = value;
		Il2CppCodeGenWriteBarrier(&____light_24, value);
	}

	inline static int32_t get_offset_of_lightColor_25() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___lightColor_25)); }
	inline Color_t4194546905  get_lightColor_25() const { return ___lightColor_25; }
	inline Color_t4194546905 * get_address_of_lightColor_25() { return &___lightColor_25; }
	inline void set_lightColor_25(Color_t4194546905  value)
	{
		___lightColor_25 = value;
	}

	inline static int32_t get_offset_of_lightIntensity_26() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___lightIntensity_26)); }
	inline float get_lightIntensity_26() const { return ___lightIntensity_26; }
	inline float* get_address_of_lightIntensity_26() { return &___lightIntensity_26; }
	inline void set_lightIntensity_26(float value)
	{
		___lightIntensity_26 = value;
	}

	inline static int32_t get_offset_of_lightRange_27() { return static_cast<int32_t>(offsetof(CustomizablePowerUp_t2151097860, ___lightRange_27)); }
	inline float get_lightRange_27() const { return ___lightRange_27; }
	inline float* get_address_of_lightRange_27() { return &___lightRange_27; }
	inline void set_lightRange_27(float value)
	{
		___lightRange_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
