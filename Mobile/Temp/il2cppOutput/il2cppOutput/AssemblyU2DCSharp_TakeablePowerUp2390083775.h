#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CustomizablePowerUp
struct CustomizablePowerUp_t2151097860;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TakeablePowerUp
struct  TakeablePowerUp_t2390083775  : public MonoBehaviour_t667441552
{
public:
	// CustomizablePowerUp TakeablePowerUp::customPowerUp
	CustomizablePowerUp_t2151097860 * ___customPowerUp_2;

public:
	inline static int32_t get_offset_of_customPowerUp_2() { return static_cast<int32_t>(offsetof(TakeablePowerUp_t2390083775, ___customPowerUp_2)); }
	inline CustomizablePowerUp_t2151097860 * get_customPowerUp_2() const { return ___customPowerUp_2; }
	inline CustomizablePowerUp_t2151097860 ** get_address_of_customPowerUp_2() { return &___customPowerUp_2; }
	inline void set_customPowerUp_2(CustomizablePowerUp_t2151097860 * value)
	{
		___customPowerUp_2 = value;
		Il2CppCodeGenWriteBarrier(&___customPowerUp_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
