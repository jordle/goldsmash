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

// PowerUpRotation
struct  PowerUpRotation_t894964222  : public MonoBehaviour_t667441552
{
public:
	// System.Single PowerUpRotation::rotationSpeed
	float ___rotationSpeed_2;
	// System.Boolean PowerUpRotation::reverse
	bool ___reverse_3;

public:
	inline static int32_t get_offset_of_rotationSpeed_2() { return static_cast<int32_t>(offsetof(PowerUpRotation_t894964222, ___rotationSpeed_2)); }
	inline float get_rotationSpeed_2() const { return ___rotationSpeed_2; }
	inline float* get_address_of_rotationSpeed_2() { return &___rotationSpeed_2; }
	inline void set_rotationSpeed_2(float value)
	{
		___rotationSpeed_2 = value;
	}

	inline static int32_t get_offset_of_reverse_3() { return static_cast<int32_t>(offsetof(PowerUpRotation_t894964222, ___reverse_3)); }
	inline bool get_reverse_3() const { return ___reverse_3; }
	inline bool* get_address_of_reverse_3() { return &___reverse_3; }
	inline void set_reverse_3(bool value)
	{
		___reverse_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
