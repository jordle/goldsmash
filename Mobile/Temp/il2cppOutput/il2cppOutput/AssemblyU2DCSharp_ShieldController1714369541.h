#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShieldController
struct  ShieldController_t1714369541  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AudioClip ShieldController::breakSound
	AudioClip_t794140988 * ___breakSound_2;

public:
	inline static int32_t get_offset_of_breakSound_2() { return static_cast<int32_t>(offsetof(ShieldController_t1714369541, ___breakSound_2)); }
	inline AudioClip_t794140988 * get_breakSound_2() const { return ___breakSound_2; }
	inline AudioClip_t794140988 ** get_address_of_breakSound_2() { return &___breakSound_2; }
	inline void set_breakSound_2(AudioClip_t794140988 * value)
	{
		___breakSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___breakSound_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
