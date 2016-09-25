#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Queue`1<CustomizablePowerUp>
struct Queue_1_t92372993;

#include "AssemblyU2DCSharp_Singleton_1_gen1810982222.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PowerUpManager
struct  PowerUpManager_t1558166829  : public Singleton_1_t1810982222
{
public:
	// System.Collections.Generic.Queue`1<CustomizablePowerUp> PowerUpManager::powerUps
	Queue_1_t92372993 * ___powerUps_5;
	// System.Collections.Generic.Queue`1<CustomizablePowerUp> PowerUpManager::powerUpsLogs
	Queue_1_t92372993 * ___powerUpsLogs_6;
	// System.UInt16 PowerUpManager::powerUpLogLimit
	uint16_t ___powerUpLogLimit_7;

public:
	inline static int32_t get_offset_of_powerUps_5() { return static_cast<int32_t>(offsetof(PowerUpManager_t1558166829, ___powerUps_5)); }
	inline Queue_1_t92372993 * get_powerUps_5() const { return ___powerUps_5; }
	inline Queue_1_t92372993 ** get_address_of_powerUps_5() { return &___powerUps_5; }
	inline void set_powerUps_5(Queue_1_t92372993 * value)
	{
		___powerUps_5 = value;
		Il2CppCodeGenWriteBarrier(&___powerUps_5, value);
	}

	inline static int32_t get_offset_of_powerUpsLogs_6() { return static_cast<int32_t>(offsetof(PowerUpManager_t1558166829, ___powerUpsLogs_6)); }
	inline Queue_1_t92372993 * get_powerUpsLogs_6() const { return ___powerUpsLogs_6; }
	inline Queue_1_t92372993 ** get_address_of_powerUpsLogs_6() { return &___powerUpsLogs_6; }
	inline void set_powerUpsLogs_6(Queue_1_t92372993 * value)
	{
		___powerUpsLogs_6 = value;
		Il2CppCodeGenWriteBarrier(&___powerUpsLogs_6, value);
	}

	inline static int32_t get_offset_of_powerUpLogLimit_7() { return static_cast<int32_t>(offsetof(PowerUpManager_t1558166829, ___powerUpLogLimit_7)); }
	inline uint16_t get_powerUpLogLimit_7() const { return ___powerUpLogLimit_7; }
	inline uint16_t* get_address_of_powerUpLogLimit_7() { return &___powerUpLogLimit_7; }
	inline void set_powerUpLogLimit_7(uint16_t value)
	{
		___powerUpLogLimit_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
