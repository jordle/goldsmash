#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefenderController
struct  DefenderController_t2309832191  : public MonoBehaviour_t667441552
{
public:
	// System.Single DefenderController::dx
	float ___dx_2;
	// System.Single DefenderController::dy
	float ___dy_3;

public:
	inline static int32_t get_offset_of_dx_2() { return static_cast<int32_t>(offsetof(DefenderController_t2309832191, ___dx_2)); }
	inline float get_dx_2() const { return ___dx_2; }
	inline float* get_address_of_dx_2() { return &___dx_2; }
	inline void set_dx_2(float value)
	{
		___dx_2 = value;
	}

	inline static int32_t get_offset_of_dy_3() { return static_cast<int32_t>(offsetof(DefenderController_t2309832191, ___dy_3)); }
	inline float get_dy_3() const { return ___dy_3; }
	inline float* get_address_of_dy_3() { return &___dy_3; }
	inline void set_dy_3(float value)
	{
		___dy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
