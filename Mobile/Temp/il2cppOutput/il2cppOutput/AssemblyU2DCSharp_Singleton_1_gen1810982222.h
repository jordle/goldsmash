#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PowerUpManager
struct PowerUpManager_t1558166829;
// System.Object
struct Il2CppObject;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Singleton`1<PowerUpManager>
struct  Singleton_1_t1810982222  : public MonoBehaviour_t667441552
{
public:

public:
};

struct Singleton_1_t1810982222_StaticFields
{
public:
	// T Singleton`1::_instance
	PowerUpManager_t1558166829 * ____instance_2;
	// System.Object Singleton`1::_lock
	Il2CppObject * ____lock_3;
	// System.Boolean Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_4;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t1810982222_StaticFields, ____instance_2)); }
	inline PowerUpManager_t1558166829 * get__instance_2() const { return ____instance_2; }
	inline PowerUpManager_t1558166829 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(PowerUpManager_t1558166829 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of__lock_3() { return static_cast<int32_t>(offsetof(Singleton_1_t1810982222_StaticFields, ____lock_3)); }
	inline Il2CppObject * get__lock_3() const { return ____lock_3; }
	inline Il2CppObject ** get_address_of__lock_3() { return &____lock_3; }
	inline void set__lock_3(Il2CppObject * value)
	{
		____lock_3 = value;
		Il2CppCodeGenWriteBarrier(&____lock_3, value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_4() { return static_cast<int32_t>(offsetof(Singleton_1_t1810982222_StaticFields, ___applicationIsQuitting_4)); }
	inline bool get_applicationIsQuitting_4() const { return ___applicationIsQuitting_4; }
	inline bool* get_address_of_applicationIsQuitting_4() { return &___applicationIsQuitting_4; }
	inline void set_applicationIsQuitting_4(bool value)
	{
		___applicationIsQuitting_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
