#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityStandardAssets.Water.WaterBasic
struct WaterBasic_t2489354481;
// UnityEngine.Renderer
struct Renderer_t3076687687;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2489354481.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2489354481MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer3076687687MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material3870600107MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector44282066567MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer3076687687.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "mscorlib_System_String7231557.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t3076687687_m1748555263(__this, method) ((  Renderer_t3076687687 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Water.WaterBasic::.ctor()
extern "C"  void WaterBasic__ctor_m2683650792 (WaterBasic_t2489354481 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Water.WaterBasic::Update()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRenderer_t3076687687_m1748555263_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3537014958;
extern Il2CppCodeGenString* _stringLiteral2047710258;
extern Il2CppCodeGenString* _stringLiteral3237885611;
extern const uint32_t WaterBasic_Update_m3315658021_MetadataUsageId;
extern "C"  void WaterBasic_Update_m3315658021 (WaterBasic_t2489354481 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WaterBasic_Update_m3315658021_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Renderer_t3076687687 * V_0 = NULL;
	Material_t3870600107 * V_1 = NULL;
	Vector4_t4282066567  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector4_t4282066567  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector4_t4282066567  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Renderer_t3076687687 * L_0 = Component_GetComponent_TisRenderer_t3076687687_m1748555263(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t3076687687_m1748555263_MethodInfo_var);
		V_0 = L_0;
		Renderer_t3076687687 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Renderer_t3076687687 * L_3 = V_0;
		NullCheck(L_3);
		Material_t3870600107 * L_4 = Renderer_get_sharedMaterial_m835478880(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Material_t3870600107 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		Material_t3870600107 * L_7 = V_1;
		NullCheck(L_7);
		Vector4_t4282066567  L_8 = Material_GetVector_m4092100414(L_7, _stringLiteral3537014958, /*hidden argument*/NULL);
		V_2 = L_8;
		Material_t3870600107 * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = Material_GetFloat_m2541456626(L_9, _stringLiteral2047710258, /*hidden argument*/NULL);
		V_3 = L_10;
		float L_11 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = ((float)((float)L_11/(float)(20.0f)));
		Vector4_t4282066567  L_12 = V_2;
		float L_13 = V_4;
		float L_14 = V_3;
		Vector4_t4282066567  L_15 = Vector4_op_Multiply_m209031836(NULL /*static, unused*/, L_12, ((float)((float)L_13*(float)L_14)), /*hidden argument*/NULL);
		V_5 = L_15;
		float L_16 = (&V_5)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_17 = Mathf_Repeat_m3424250200(NULL /*static, unused*/, L_16, (1.0f), /*hidden argument*/NULL);
		float L_18 = (&V_5)->get_y_2();
		float L_19 = Mathf_Repeat_m3424250200(NULL /*static, unused*/, L_18, (1.0f), /*hidden argument*/NULL);
		float L_20 = (&V_5)->get_z_3();
		float L_21 = Mathf_Repeat_m3424250200(NULL /*static, unused*/, L_20, (1.0f), /*hidden argument*/NULL);
		float L_22 = (&V_5)->get_w_4();
		float L_23 = Mathf_Repeat_m3424250200(NULL /*static, unused*/, L_22, (1.0f), /*hidden argument*/NULL);
		Vector4__ctor_m2441427762((&V_6), L_17, L_19, L_21, L_23, /*hidden argument*/NULL);
		Material_t3870600107 * L_24 = V_1;
		Vector4_t4282066567  L_25 = V_6;
		NullCheck(L_24);
		Material_SetVector_m3505096203(L_24, _stringLiteral3237885611, L_25, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
