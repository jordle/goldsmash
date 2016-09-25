#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// CustomizablePowerUp
struct CustomizablePowerUp_t2151097860;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_CustomizablePowerUp2151097860.h"

#pragma once
// CustomizablePowerUp[]
struct CustomizablePowerUpU5BU5D_t623119725  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) CustomizablePowerUp_t2151097860 * m_Items[1];

public:
	inline CustomizablePowerUp_t2151097860 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline CustomizablePowerUp_t2151097860 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, CustomizablePowerUp_t2151097860 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
