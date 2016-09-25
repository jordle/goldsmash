#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoinsController
struct  CoinsController_t355893534  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 CoinsController::score
	int32_t ___score_2;
	// UnityEngine.ParticleSystem CoinsController::coinspray
	ParticleSystem_t381473177 * ___coinspray_3;
	// UnityEngine.UI.Text CoinsController::txtCoinCount
	Text_t9039225 * ___txtCoinCount_4;
	// UnityEngine.AudioClip CoinsController::coinSound
	AudioClip_t794140988 * ___coinSound_5;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(CoinsController_t355893534, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_coinspray_3() { return static_cast<int32_t>(offsetof(CoinsController_t355893534, ___coinspray_3)); }
	inline ParticleSystem_t381473177 * get_coinspray_3() const { return ___coinspray_3; }
	inline ParticleSystem_t381473177 ** get_address_of_coinspray_3() { return &___coinspray_3; }
	inline void set_coinspray_3(ParticleSystem_t381473177 * value)
	{
		___coinspray_3 = value;
		Il2CppCodeGenWriteBarrier(&___coinspray_3, value);
	}

	inline static int32_t get_offset_of_txtCoinCount_4() { return static_cast<int32_t>(offsetof(CoinsController_t355893534, ___txtCoinCount_4)); }
	inline Text_t9039225 * get_txtCoinCount_4() const { return ___txtCoinCount_4; }
	inline Text_t9039225 ** get_address_of_txtCoinCount_4() { return &___txtCoinCount_4; }
	inline void set_txtCoinCount_4(Text_t9039225 * value)
	{
		___txtCoinCount_4 = value;
		Il2CppCodeGenWriteBarrier(&___txtCoinCount_4, value);
	}

	inline static int32_t get_offset_of_coinSound_5() { return static_cast<int32_t>(offsetof(CoinsController_t355893534, ___coinSound_5)); }
	inline AudioClip_t794140988 * get_coinSound_5() const { return ___coinSound_5; }
	inline AudioClip_t794140988 ** get_address_of_coinSound_5() { return &___coinSound_5; }
	inline void set_coinSound_5(AudioClip_t794140988 * value)
	{
		___coinSound_5 = value;
		Il2CppCodeGenWriteBarrier(&___coinSound_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
