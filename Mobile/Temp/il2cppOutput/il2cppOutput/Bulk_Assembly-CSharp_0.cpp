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

// BallController
struct BallController_t1192288027;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// System.Object
struct Il2CppObject;
// CoinsController
struct CoinsController_t355893534;
// UnityEngine.Collider
struct Collider_t2939674232;
// CustomizablePowerUp
struct CustomizablePowerUp_t2151097860;
// UnityEngine.Renderer
struct Renderer_t3076687687;
// DefenderController
struct DefenderController_t2309832191;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// DefenderController/<repeatMoving>c__Iterator0
struct U3CrepeatMovingU3Ec__Iterator0_t4043674280;
// PowerUpManager
struct PowerUpManager_t1558166829;
// System.String
struct String_t;
// PowerUpRotation
struct PowerUpRotation_t894964222;
// ScaleParticles
struct ScaleParticles_t2675710115;
// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// ShieldController
struct ShieldController_t1714369541;
// TakeablePowerUp
struct TakeablePowerUp_t2390083775;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_BallController1192288027.h"
#include "AssemblyU2DCSharp_BallController1192288027MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch4210255029MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch4210255029.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Rigidbody3346577219.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_TouchPhase1567063616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_CoinsController355893534.h"
#include "AssemblyU2DCSharp_CoinsController355893534MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2939674232.h"
#include "UnityEngine_UnityEngine_ParticleSystem381473177MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_ParticleSystem381473177.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "AssemblyU2DCSharp_CustomizablePowerUp2151097860.h"
#include "AssemblyU2DCSharp_CustomizablePowerUp2151097860MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color4194546905MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Renderer3076687687MethodDeclarations.h"
#include "mscorlib_System_Type2863145774MethodDeclarations.h"
#include "AssemblyU2DCSharp_PowerUpRotation894964222MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Light4202674828MethodDeclarations.h"
#include "AssemblyU2DCSharp_PowerUpRotation894964222.h"
#include "UnityEngine_UnityEngine_Light4202674828.h"
#include "UnityEngine_UnityEngine_Renderer3076687687.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_RuntimeTypeHandle2669177232.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_LightType1292142182.h"
#include "UnityEngine_UnityEngine_LightShadows2297142369.h"
#include "AssemblyU2DCSharp_DefenderController2309832191.h"
#include "AssemblyU2DCSharp_DefenderController2309832191MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Coroutine3621161934.h"
#include "AssemblyU2DCSharp_DefenderController_U3CrepeatMovi4043674280MethodDeclarations.h"
#include "AssemblyU2DCSharp_DefenderController_U3CrepeatMovi4043674280.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1615819279MethodDeclarations.h"
#include "mscorlib_System_UInt3224667981.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1615819279.h"
#include "mscorlib_System_NotSupportedException1732551818MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1732551818.h"
#include "AssemblyU2DCSharp_PowerUpManager1558166829.h"
#include "AssemblyU2DCSharp_PowerUpManager1558166829MethodDeclarations.h"
#include "AssemblyU2DCSharp_Singleton_1_gen1810982222MethodDeclarations.h"
#include "mscorlib_System_UInt1624667923.h"
#include "System_System_Collections_Generic_Queue_1_gen92372993MethodDeclarations.h"
#include "System_System_Collections_Generic_Queue_1_gen92372993.h"
#include "mscorlib_System_Int321153838500MethodDeclarations.h"
#include "System_System_Collections_Generic_Queue_1_Enumerat1381458505MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUILayout3864601915MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Screen3187157168MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI3134605553MethodDeclarations.h"
#include "System_System_Collections_Generic_Queue_1_Enumerat1381458505.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUILayoutOption331591504.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Rect4241904616MethodDeclarations.h"
#include "AssemblyU2DCSharp_ScaleParticles2675710115.h"
#include "AssemblyU2DCSharp_ScaleParticles2675710115MethodDeclarations.h"
#include "AssemblyU2DCSharp_ShieldController1714369541.h"
#include "AssemblyU2DCSharp_ShieldController1714369541MethodDeclarations.h"
#include "AssemblyU2DCSharp_TakeablePowerUp2390083775.h"
#include "AssemblyU2DCSharp_TakeablePowerUp2390083775MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m3652735468_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m3652735468(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3652735468_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
#define GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595(__this, method) ((  Rigidbody_t3346577219 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3652735468_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t3076687687_m4102086307(__this, method) ((  Renderer_t3076687687 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3652735468_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
#define Component_GetComponent_TisParticleSystem_t381473177_m423524409(__this, method) ((  ParticleSystem_t381473177 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<CustomizablePowerUp>()
#define GameObject_GetComponent_TisCustomizablePowerUp_t2151097860_m2497572701(__this, method) ((  CustomizablePowerUp_t2151097860 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3652735468_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallController::.ctor()
extern "C"  void BallController__ctor_m3461266400 (BallController_t1192288027 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::Start()
extern "C"  void BallController_Start_m2408404192 (BallController_t1192288027 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BallController::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Vector3_t4282066566_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2834468760;
extern const uint32_t BallController_Update_m1651938093_MetadataUsageId;
extern "C"  void BallController_Update_m1651938093 (BallController_t1192288027 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallController_Update_m1651938093_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t4210255029  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	GameObject_t3674682005 * V_3 = NULL;
	Rigidbody_t3346577219 * V_4 = NULL;
	Vector3_t4282066566  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Touch_t4210255029  L_1 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Touch_get_phase_m3314549414((&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00d9;
		}
	}
	{
		Vector2_t4282066565  L_3 = Touch_get_position_m1943849441((&V_0), /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Vector2_op_Implicit_m482286037(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		(&V_1)->set_z_3((2.0f));
		Camera_t2727095145 * L_5 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_6 = V_1;
		NullCheck(L_5);
		Vector3_t4282066566  L_7 = Camera_ScreenToWorldPoint_m1572306334(L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		Vector3_t4282066566  L_8 = V_2;
		Vector3_t4282066566  L_9 = L_8;
		Il2CppObject * L_10 = Box(Vector3_t4282066566_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral2834468760, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_12 = __this->get_cannonBall_2();
		Vector3_t4282066566  L_13 = V_2;
		Transform_t1659122786 * L_14 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Quaternion_t1553702882  L_15 = Transform_get_rotation_m11483428(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_16 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_12, L_13, L_15, /*hidden argument*/NULL);
		V_3 = ((GameObject_t3674682005 *)CastclassSealed(L_16, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_17 = V_3;
		NullCheck(L_17);
		Rigidbody_t3346577219 * L_18 = GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595(L_17, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t3346577219_m2158183595_MethodInfo_var);
		V_4 = L_18;
		float L_19 = (&V_2)->get_x_1();
		float L_20 = Random_Range_m3362417303(NULL /*static, unused*/, (-0.7f), (0.7f), /*hidden argument*/NULL);
		float L_21 = Random_Range_m3362417303(NULL /*static, unused*/, (-0.7f), (0.7f), /*hidden argument*/NULL);
		float L_22 = Random_Range_m3362417303(NULL /*static, unused*/, (-1.0f), (1.0f), /*hidden argument*/NULL);
		Vector3__ctor_m2926210380((&V_5), ((float)((float)L_19+(float)L_20)), ((float)((float)(5.0f)+(float)L_21)), ((float)((float)(4.0f)+(float)L_22)), /*hidden argument*/NULL);
		Rigidbody_t3346577219 * L_23 = V_4;
		Vector3_t4282066566  L_24 = V_5;
		NullCheck(L_23);
		Rigidbody_set_velocity_m799562119(L_23, L_24, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_25 = V_3;
		Object_Destroy_m2260435093(NULL /*static, unused*/, L_25, (3.0f), /*hidden argument*/NULL);
	}

IL_00d9:
	{
		return;
	}
}
// System.Void CoinsController::.ctor()
extern "C"  void CoinsController__ctor_m3696076813 (CoinsController_t355893534 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CoinsController::Start()
extern "C"  void CoinsController_Start_m2643214605 (CoinsController_t355893534 * __this, const MethodInfo* method)
{
	{
		__this->set_score_2(((int32_t)1263));
		return;
	}
}
// System.Void CoinsController::Update()
extern "C"  void CoinsController_Update_m341126304 (CoinsController_t355893534 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void CoinsController::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3016191;
extern Il2CppCodeGenString* _stringLiteral1664729736;
extern const uint32_t CoinsController_OnTriggerEnter_m3251894923_MetadataUsageId;
extern "C"  void CoinsController_OnTriggerEnter_m3251894923 (CoinsController_t355893534 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CoinsController_OnTriggerEnter_m3251894923_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t2939674232 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m211612200(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_2, _stringLiteral3016191, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0078;
		}
	}
	{
		Collider_t2939674232 * L_4 = ___other0;
		NullCheck(L_4);
		GameObject_t3674682005 * L_5 = Component_get_gameObject_m1170635899(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		ParticleSystem_t381473177 * L_6 = __this->get_coinspray_3();
		NullCheck(L_6);
		ParticleSystem_Play_m1237476160(L_6, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_score_2();
		__this->set_score_2(((int32_t)((int32_t)L_7+(int32_t)7)));
		Text_t9039225 * L_8 = __this->get_txtCoinCount_4();
		int32_t L_9 = __this->get_score_2();
		int32_t L_10 = L_9;
		Il2CppObject * L_11 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral1664729736, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
		AudioClip_t794140988 * L_13 = __this->get_coinSound_5();
		Camera_t2727095145 * L_14 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_t1659122786 * L_15 = Component_get_transform_m4257140443(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t4282066566  L_16 = Transform_get_position_m2211398607(L_15, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m2719680311(NULL /*static, unused*/, L_13, L_16, /*hidden argument*/NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void CustomizablePowerUp::.ctor()
extern "C"  void CustomizablePowerUp__ctor_m666333671 (CustomizablePowerUp_t2151097860 * __this, const MethodInfo* method)
{
	{
		Color_t4194546905  L_0 = Color_get_white_m3038282331(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lightColor_25(L_0);
		__this->set_lightIntensity_26((3.0f));
		__this->set_lightRange_27((4.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomizablePowerUp::Start()
extern const Il2CppType* PowerUpRotation_t894964222_0_0_0_var;
extern const Il2CppType* TakeablePowerUp_t2390083775_0_0_0_var;
extern const Il2CppType* Light_t4202674828_0_0_0_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern Il2CppClass* Type_t_il2cpp_TypeInfo_var;
extern Il2CppClass* PowerUpRotation_t894964222_il2cpp_TypeInfo_var;
extern Il2CppClass* Light_t4202674828_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t3076687687_m4102086307_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral453712845;
extern Il2CppCodeGenString* _stringLiteral3820977051;
extern Il2CppCodeGenString* _stringLiteral2289459;
extern Il2CppCodeGenString* _stringLiteral2072749489;
extern Il2CppCodeGenString* _stringLiteral73417974;
extern const uint32_t CustomizablePowerUp_Start_m3908438759_MetadataUsageId;
extern "C"  void CustomizablePowerUp_Start_m3908438759 (CustomizablePowerUp_t2151097860 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CustomizablePowerUp_Start_m3908438759_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	PowerUpRotation_t894964222 * V_0 = NULL;
	PowerUpRotation_t894964222 * V_1 = NULL;
	PowerUpRotation_t894964222 * V_2 = NULL;
	PowerUpRotation_t894964222 * V_3 = NULL;
	Light_t4202674828 * V_4 = NULL;
	{
		GameObject_t3674682005 * L_0 = __this->get_externHull_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00f3;
		}
	}
	{
		GameObject_t3674682005 * L_2 = __this->get_externHull_5();
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t1553702882  L_6 = Transform_get_rotation_m11483428(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_7 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_2, L_4, L_6, /*hidden argument*/NULL);
		__this->set__externHull_6(((GameObject_t3674682005 *)CastclassSealed(L_7, GameObject_t3674682005_il2cpp_TypeInfo_var)));
		GameObject_t3674682005 * L_8 = __this->get__externHull_6();
		NullCheck(L_8);
		Transform_t1659122786 * L_9 = GameObject_get_transform_m1278640159(L_8, /*hidden argument*/NULL);
		Transform_t1659122786 * L_10 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_parent_m3231272063(L_9, L_10, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_11 = __this->get__externHull_6();
		NullCheck(L_11);
		Object_set_name_m1123518500(L_11, _stringLiteral453712845, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_12 = __this->get__externHull_6();
		NullCheck(L_12);
		Renderer_t3076687687 * L_13 = GameObject_GetComponent_TisRenderer_t3076687687_m4102086307(L_12, /*hidden argument*/GameObject_GetComponent_TisRenderer_t3076687687_m4102086307_MethodInfo_var);
		Material_t3870600107 * L_14 = __this->get_externHullMaterial_9();
		NullCheck(L_13);
		Renderer_set_sharedMaterial_m1064371045(L_13, L_14, /*hidden argument*/NULL);
		float L_15 = __this->get_externHullRotSpeed_7();
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_00d2;
		}
	}
	{
		GameObject_t3674682005 * L_16 = __this->get__externHull_6();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(PowerUpRotation_t894964222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_AddComponent_m2208780168(L_16, L_17, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_18 = __this->get__externHull_6();
		Type_t * L_19 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(PowerUpRotation_t894964222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		Component_t3501516275 * L_20 = GameObject_GetComponent_m1004814461(L_18, L_19, /*hidden argument*/NULL);
		V_0 = ((PowerUpRotation_t894964222 *)CastclassClass(L_20, PowerUpRotation_t894964222_il2cpp_TypeInfo_var));
		PowerUpRotation_t894964222 * L_21 = V_0;
		float L_22 = __this->get_externHullRotSpeed_7();
		NullCheck(L_21);
		PowerUpRotation_SetRotationSpeed_m1666975373(L_21, L_22, /*hidden argument*/NULL);
		PowerUpRotation_t894964222 * L_23 = V_0;
		bool L_24 = __this->get_externHullIsReverse_8();
		NullCheck(L_23);
		PowerUpRotation_SetReverse_m1312204110(L_23, L_24, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		bool L_25 = __this->get_isTakeable_3();
		if (!L_25)
		{
			goto IL_00f3;
		}
	}
	{
		GameObject_t3674682005 * L_26 = __this->get__externHull_6();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_27 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(TakeablePowerUp_t2390083775_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_26);
		GameObject_AddComponent_m2208780168(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		GameObject_t3674682005 * L_28 = __this->get_internHull_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_29 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_28, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_01c5;
		}
	}
	{
		GameObject_t3674682005 * L_30 = __this->get_internHull_10();
		Transform_t1659122786 * L_31 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t4282066566  L_32 = Transform_get_position_m2211398607(L_31, /*hidden argument*/NULL);
		Transform_t1659122786 * L_33 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Quaternion_t1553702882  L_34 = Transform_get_rotation_m11483428(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_35 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_30, L_32, L_34, /*hidden argument*/NULL);
		__this->set__internHull_11(((GameObject_t3674682005 *)CastclassSealed(L_35, GameObject_t3674682005_il2cpp_TypeInfo_var)));
		GameObject_t3674682005 * L_36 = __this->get__internHull_11();
		NullCheck(L_36);
		Transform_t1659122786 * L_37 = GameObject_get_transform_m1278640159(L_36, /*hidden argument*/NULL);
		Transform_t1659122786 * L_38 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_set_parent_m3231272063(L_37, L_38, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_39 = __this->get__internHull_11();
		NullCheck(L_39);
		Object_set_name_m1123518500(L_39, _stringLiteral3820977051, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_40 = __this->get__internHull_11();
		NullCheck(L_40);
		Renderer_t3076687687 * L_41 = GameObject_GetComponent_TisRenderer_t3076687687_m4102086307(L_40, /*hidden argument*/GameObject_GetComponent_TisRenderer_t3076687687_m4102086307_MethodInfo_var);
		Material_t3870600107 * L_42 = __this->get_internHullMaterial_14();
		NullCheck(L_41);
		Renderer_set_sharedMaterial_m1064371045(L_41, L_42, /*hidden argument*/NULL);
		float L_43 = __this->get_internHullRotSpeed_12();
		if ((!(((float)L_43) > ((float)(0.0f)))))
		{
			goto IL_01c5;
		}
	}
	{
		GameObject_t3674682005 * L_44 = __this->get__internHull_11();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(PowerUpRotation_t894964222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_44);
		GameObject_AddComponent_m2208780168(L_44, L_45, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_46 = __this->get__internHull_11();
		Type_t * L_47 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(PowerUpRotation_t894964222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		Component_t3501516275 * L_48 = GameObject_GetComponent_m1004814461(L_46, L_47, /*hidden argument*/NULL);
		V_1 = ((PowerUpRotation_t894964222 *)CastclassClass(L_48, PowerUpRotation_t894964222_il2cpp_TypeInfo_var));
		PowerUpRotation_t894964222 * L_49 = V_1;
		float L_50 = __this->get_internHullRotSpeed_12();
		NullCheck(L_49);
		PowerUpRotation_SetRotationSpeed_m1666975373(L_49, L_50, /*hidden argument*/NULL);
		PowerUpRotation_t894964222 * L_51 = V_1;
		bool L_52 = __this->get_internHullIsReverse_13();
		NullCheck(L_51);
		PowerUpRotation_SetReverse_m1312204110(L_51, L_52, /*hidden argument*/NULL);
	}

IL_01c5:
	{
		GameObject_t3674682005 * L_53 = __this->get_item_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_54 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_53, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_02ca;
		}
	}
	{
		GameObject_t3674682005 * L_55 = __this->get_item_19();
		Transform_t1659122786 * L_56 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t4282066566  L_57 = Transform_get_position_m2211398607(L_56, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_58 = Quaternion_get_identity_m1743882806(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_59 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_55, L_57, L_58, /*hidden argument*/NULL);
		__this->set__item_20(((GameObject_t3674682005 *)CastclassSealed(L_59, GameObject_t3674682005_il2cpp_TypeInfo_var)));
		GameObject_t3674682005 * L_60 = __this->get__item_20();
		NullCheck(L_60);
		Transform_t1659122786 * L_61 = GameObject_get_transform_m1278640159(L_60, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_62 = __this->get__item_20();
		NullCheck(L_62);
		Transform_t1659122786 * L_63 = GameObject_get_transform_m1278640159(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		Quaternion_t1553702882  L_64 = Transform_get_rotation_m11483428(L_63, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_65 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t1553702882  L_66 = Quaternion_op_Multiply_m3077481361(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_set_rotation_m1525803229(L_61, L_66, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_67 = __this->get__item_20();
		NullCheck(L_67);
		Transform_t1659122786 * L_68 = GameObject_get_transform_m1278640159(L_67, /*hidden argument*/NULL);
		Transform_t1659122786 * L_69 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_set_parent_m3231272063(L_68, L_69, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_70 = __this->get__item_20();
		NullCheck(L_70);
		Object_set_name_m1123518500(L_70, _stringLiteral2289459, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_71 = __this->get__item_20();
		NullCheck(L_71);
		Renderer_t3076687687 * L_72 = GameObject_GetComponent_TisRenderer_t3076687687_m4102086307(L_71, /*hidden argument*/GameObject_GetComponent_TisRenderer_t3076687687_m4102086307_MethodInfo_var);
		Material_t3870600107 * L_73 = __this->get_itemMaterial_23();
		NullCheck(L_72);
		Renderer_set_sharedMaterial_m1064371045(L_72, L_73, /*hidden argument*/NULL);
		float L_74 = __this->get_itemRotSpeed_21();
		if ((!(((float)L_74) > ((float)(0.0f)))))
		{
			goto IL_02ca;
		}
	}
	{
		GameObject_t3674682005 * L_75 = __this->get__item_20();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_76 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(PowerUpRotation_t894964222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_75);
		GameObject_AddComponent_m2208780168(L_75, L_76, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_77 = __this->get__item_20();
		Type_t * L_78 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(PowerUpRotation_t894964222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_77);
		Component_t3501516275 * L_79 = GameObject_GetComponent_m1004814461(L_77, L_78, /*hidden argument*/NULL);
		V_2 = ((PowerUpRotation_t894964222 *)CastclassClass(L_79, PowerUpRotation_t894964222_il2cpp_TypeInfo_var));
		PowerUpRotation_t894964222 * L_80 = V_2;
		float L_81 = __this->get_itemRotSpeed_21();
		NullCheck(L_80);
		PowerUpRotation_SetRotationSpeed_m1666975373(L_80, L_81, /*hidden argument*/NULL);
		PowerUpRotation_t894964222 * L_82 = V_2;
		bool L_83 = __this->get_itemIsReverse_22();
		NullCheck(L_82);
		PowerUpRotation_SetReverse_m1312204110(L_82, L_83, /*hidden argument*/NULL);
	}

IL_02ca:
	{
		GameObject_t3674682005 * L_84 = __this->get_effect_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_85 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_84, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_0386;
		}
	}
	{
		GameObject_t3674682005 * L_86 = __this->get_effect_15();
		Transform_t1659122786 * L_87 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_87);
		Vector3_t4282066566  L_88 = Transform_get_position_m2211398607(L_87, /*hidden argument*/NULL);
		Transform_t1659122786 * L_89 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_89);
		Quaternion_t1553702882  L_90 = Transform_get_rotation_m11483428(L_89, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_91 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_86, L_88, L_90, /*hidden argument*/NULL);
		__this->set__effect_16(((GameObject_t3674682005 *)CastclassSealed(L_91, GameObject_t3674682005_il2cpp_TypeInfo_var)));
		GameObject_t3674682005 * L_92 = __this->get__effect_16();
		NullCheck(L_92);
		Transform_t1659122786 * L_93 = GameObject_get_transform_m1278640159(L_92, /*hidden argument*/NULL);
		Transform_t1659122786 * L_94 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_93);
		Transform_set_parent_m3231272063(L_93, L_94, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_95 = __this->get__effect_16();
		NullCheck(L_95);
		Object_set_name_m1123518500(L_95, _stringLiteral2072749489, /*hidden argument*/NULL);
		float L_96 = __this->get_effectRotSpeed_17();
		if ((!(((float)L_96) > ((float)(0.0f)))))
		{
			goto IL_0386;
		}
	}
	{
		GameObject_t3674682005 * L_97 = __this->get__effect_16();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_98 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(PowerUpRotation_t894964222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_97);
		GameObject_AddComponent_m2208780168(L_97, L_98, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_99 = __this->get__effect_16();
		Type_t * L_100 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(PowerUpRotation_t894964222_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_99);
		Component_t3501516275 * L_101 = GameObject_GetComponent_m1004814461(L_99, L_100, /*hidden argument*/NULL);
		V_3 = ((PowerUpRotation_t894964222 *)CastclassClass(L_101, PowerUpRotation_t894964222_il2cpp_TypeInfo_var));
		PowerUpRotation_t894964222 * L_102 = V_3;
		float L_103 = __this->get_effectRotSpeed_17();
		NullCheck(L_102);
		PowerUpRotation_SetRotationSpeed_m1666975373(L_102, L_103, /*hidden argument*/NULL);
		PowerUpRotation_t894964222 * L_104 = V_3;
		bool L_105 = __this->get_effectIsReverse_18();
		NullCheck(L_104);
		PowerUpRotation_SetReverse_m1312204110(L_104, L_105, /*hidden argument*/NULL);
	}

IL_0386:
	{
		GameObject_t3674682005 * L_106 = (GameObject_t3674682005 *)il2cpp_codegen_object_new(GameObject_t3674682005_il2cpp_TypeInfo_var);
		GameObject__ctor_m3920833606(L_106, _stringLiteral73417974, /*hidden argument*/NULL);
		__this->set__light_24(L_106);
		GameObject_t3674682005 * L_107 = __this->get__light_24();
		NullCheck(L_107);
		Transform_t1659122786 * L_108 = GameObject_get_transform_m1278640159(L_107, /*hidden argument*/NULL);
		Transform_t1659122786 * L_109 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_108);
		Transform_set_parent_m3231272063(L_108, L_109, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_110 = __this->get__light_24();
		NullCheck(L_110);
		Transform_t1659122786 * L_111 = GameObject_get_transform_m1278640159(L_110, /*hidden argument*/NULL);
		Transform_t1659122786 * L_112 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_112);
		Vector3_t4282066566  L_113 = Transform_get_position_m2211398607(L_112, /*hidden argument*/NULL);
		NullCheck(L_111);
		Transform_set_position_m3111394108(L_111, L_113, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_114 = __this->get__light_24();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_115 = Type_GetTypeFromHandle_m3806905434(NULL /*static, unused*/, LoadTypeToken(Light_t4202674828_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_114);
		Component_t3501516275 * L_116 = GameObject_AddComponent_m2208780168(L_114, L_115, /*hidden argument*/NULL);
		V_4 = ((Light_t4202674828 *)CastclassSealed(L_116, Light_t4202674828_il2cpp_TypeInfo_var));
		Light_t4202674828 * L_117 = V_4;
		Color_t4194546905  L_118 = __this->get_lightColor_25();
		NullCheck(L_117);
		Light_set_color_m763171967(L_117, L_118, /*hidden argument*/NULL);
		Light_t4202674828 * L_119 = V_4;
		float L_120 = __this->get_lightIntensity_26();
		NullCheck(L_119);
		Light_set_intensity_m2689709876(L_119, L_120, /*hidden argument*/NULL);
		Light_t4202674828 * L_121 = V_4;
		float L_122 = __this->get_lightRange_27();
		NullCheck(L_121);
		Light_set_range_m1834313578(L_121, L_122, /*hidden argument*/NULL);
		Light_t4202674828 * L_123 = V_4;
		NullCheck(L_123);
		Light_set_type_m1196490817(L_123, 2, /*hidden argument*/NULL);
		Light_t4202674828 * L_124 = V_4;
		NullCheck(L_124);
		Light_set_shadows_m424232995(L_124, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CustomizablePowerUp::Update()
extern "C"  void CustomizablePowerUp_Update_m908369414 (CustomizablePowerUp_t2151097860 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void DefenderController::.ctor()
extern "C"  void DefenderController__ctor_m3056931196 (DefenderController_t2309832191 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefenderController::Start()
extern "C"  void DefenderController_Start_m2004068988 (DefenderController_t2309832191 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = DefenderController_repeatMoving_m2451175673(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2135303124(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator DefenderController::repeatMoving()
extern Il2CppClass* U3CrepeatMovingU3Ec__Iterator0_t4043674280_il2cpp_TypeInfo_var;
extern const uint32_t DefenderController_repeatMoving_m2451175673_MetadataUsageId;
extern "C"  Il2CppObject * DefenderController_repeatMoving_m2451175673 (DefenderController_t2309832191 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DefenderController_repeatMoving_m2451175673_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	U3CrepeatMovingU3Ec__Iterator0_t4043674280 * V_0 = NULL;
	{
		U3CrepeatMovingU3Ec__Iterator0_t4043674280 * L_0 = (U3CrepeatMovingU3Ec__Iterator0_t4043674280 *)il2cpp_codegen_object_new(U3CrepeatMovingU3Ec__Iterator0_t4043674280_il2cpp_TypeInfo_var);
		U3CrepeatMovingU3Ec__Iterator0__ctor_m2486021059(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CrepeatMovingU3Ec__Iterator0_t4043674280 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_3(__this);
		U3CrepeatMovingU3Ec__Iterator0_t4043674280 * L_2 = V_0;
		return L_2;
	}
}
// System.Void DefenderController::Update()
extern "C"  void DefenderController_Update_m2002448657 (DefenderController_t2309832191 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t4282066566  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		if ((((float)L_2) < ((float)(-1.0f))))
		{
			goto IL_003a;
		}
	}
	{
		Transform_t1659122786 * L_3 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t4282066566  L_4 = Transform_get_position_m2211398607(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_1();
		if ((!(((float)L_5) > ((float)(1.0f)))))
		{
			goto IL_0047;
		}
	}

IL_003a:
	{
		float L_6 = __this->get_dx_2();
		__this->set_dx_2(((-L_6)));
	}

IL_0047:
	{
		Transform_t1659122786 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t4282066566  L_8 = Transform_get_position_m2211398607(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_y_2();
		if ((((float)L_9) < ((float)(-1.0f))))
		{
			goto IL_0081;
		}
	}
	{
		Transform_t1659122786 * L_10 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t4282066566  L_11 = Transform_get_position_m2211398607(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		float L_12 = (&V_3)->get_y_2();
		if ((!(((float)L_12) > ((float)(1.0f)))))
		{
			goto IL_008e;
		}
	}

IL_0081:
	{
		float L_13 = __this->get_dy_3();
		__this->set_dy_3(((-L_13)));
	}

IL_008e:
	{
		Transform_t1659122786 * L_14 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_15 = __this->get_dx_2();
		float L_16 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_17 = __this->get_dy_3();
		float L_18 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_Translate_m2900276092(L_14, ((float)((float)((-L_15))*(float)L_16)), ((float)((float)L_17*(float)L_18)), (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void DefenderController/<repeatMoving>c__Iterator0::.ctor()
extern "C"  void U3CrepeatMovingU3Ec__Iterator0__ctor_m2486021059 (U3CrepeatMovingU3Ec__Iterator0_t4043674280 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object DefenderController/<repeatMoving>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CrepeatMovingU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m776520751 (U3CrepeatMovingU3Ec__Iterator0_t4043674280 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object DefenderController/<repeatMoving>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CrepeatMovingU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3264153027 (U3CrepeatMovingU3Ec__Iterator0_t4043674280 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Boolean DefenderController/<repeatMoving>c__Iterator0::MoveNext()
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppClass* WaitForSeconds_t1615819279_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3922828044;
extern Il2CppCodeGenString* _stringLiteral3922828045;
extern const uint32_t U3CrepeatMovingU3Ec__Iterator0_MoveNext_m257548881_MetadataUsageId;
extern "C"  bool U3CrepeatMovingU3Ec__Iterator0_MoveNext_m257548881 (U3CrepeatMovingU3Ec__Iterator0_t4043674280 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CrepeatMovingU3Ec__Iterator0_MoveNext_m257548881_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_1();
		V_0 = L_0;
		__this->set_U24PC_1((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_009b;
		}
	}
	{
		goto IL_00a7;
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral3922828044, /*hidden argument*/NULL);
	}

IL_002b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral3922828045, /*hidden argument*/NULL);
		DefenderController_t2309832191 * L_2 = __this->get_U3CU3Ef__this_3();
		float L_3 = Random_Range_m3362417303(NULL /*static, unused*/, (-1.7f), (1.7f), /*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_dx_2(L_3);
		DefenderController_t2309832191 * L_4 = __this->get_U3CU3Ef__this_3();
		float L_5 = Random_Range_m3362417303(NULL /*static, unused*/, (-1.7f), (1.7f), /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_dy_3(L_5);
		float L_6 = Random_Range_m3362417303(NULL /*static, unused*/, (0.5f), (1.5f), /*hidden argument*/NULL);
		__this->set_U3CdelayU3E__0_0(L_6);
		float L_7 = __this->get_U3CdelayU3E__0_0();
		WaitForSeconds_t1615819279 * L_8 = (WaitForSeconds_t1615819279 *)il2cpp_codegen_object_new(WaitForSeconds_t1615819279_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m3184996201(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U24current_2(L_8);
		__this->set_U24PC_1(1);
		goto IL_00a9;
	}

IL_009b:
	{
		goto IL_002b;
	}
	// Dead block : IL_00a0: ldarg.0

IL_00a7:
	{
		return (bool)0;
	}

IL_00a9:
	{
		return (bool)1;
	}
}
// System.Void DefenderController/<repeatMoving>c__Iterator0::Dispose()
extern "C"  void U3CrepeatMovingU3Ec__Iterator0_Dispose_m962704192 (U3CrepeatMovingU3Ec__Iterator0_t4043674280 * __this, const MethodInfo* method)
{
	{
		__this->set_U24PC_1((-1));
		return;
	}
}
// System.Void DefenderController/<repeatMoving>c__Iterator0::Reset()
extern Il2CppClass* NotSupportedException_t1732551818_il2cpp_TypeInfo_var;
extern const uint32_t U3CrepeatMovingU3Ec__Iterator0_Reset_m132454000_MetadataUsageId;
extern "C"  void U3CrepeatMovingU3Ec__Iterator0_Reset_m132454000 (U3CrepeatMovingU3Ec__Iterator0_t4043674280 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (U3CrepeatMovingU3Ec__Iterator0_Reset_m132454000_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1732551818 * L_0 = (NotSupportedException_t1732551818 *)il2cpp_codegen_object_new(NotSupportedException_t1732551818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m149930845(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void PowerUpManager::.ctor()
extern Il2CppClass* Singleton_1_t1810982222_il2cpp_TypeInfo_var;
extern const MethodInfo* Singleton_1__ctor_m3223061658_MethodInfo_var;
extern const uint32_t PowerUpManager__ctor_m1032032782_MetadataUsageId;
extern "C"  void PowerUpManager__ctor_m1032032782 (PowerUpManager_t1558166829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PowerUpManager__ctor_m1032032782_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_powerUpLogLimit_7(3);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t1810982222_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m3223061658(__this, /*hidden argument*/Singleton_1__ctor_m3223061658_MethodInfo_var);
		return;
	}
}
// System.Int32 PowerUpManager::get_Count()
extern const MethodInfo* Queue_1_get_Count_m1246224570_MethodInfo_var;
extern const uint32_t PowerUpManager_get_Count_m3412568132_MetadataUsageId;
extern "C"  int32_t PowerUpManager_get_Count_m3412568132 (PowerUpManager_t1558166829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PowerUpManager_get_Count_m3412568132_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Queue_1_t92372993 * L_0 = __this->get_powerUps_5();
		NullCheck(L_0);
		int32_t L_1 = Queue_1_get_Count_m1246224570(L_0, /*hidden argument*/Queue_1_get_Count_m1246224570_MethodInfo_var);
		return L_1;
	}
}
// System.Void PowerUpManager::Awake()
extern Il2CppClass* Queue_1_t92372993_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1__ctor_m1599025576_MethodInfo_var;
extern const uint32_t PowerUpManager_Awake_m1269638001_MetadataUsageId;
extern "C"  void PowerUpManager_Awake_m1269638001 (PowerUpManager_t1558166829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PowerUpManager_Awake_m1269638001_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Queue_1_t92372993 * L_0 = (Queue_1_t92372993 *)il2cpp_codegen_object_new(Queue_1_t92372993_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1599025576(L_0, /*hidden argument*/Queue_1__ctor_m1599025576_MethodInfo_var);
		__this->set_powerUps_5(L_0);
		Queue_1_t92372993 * L_1 = (Queue_1_t92372993 *)il2cpp_codegen_object_new(Queue_1_t92372993_il2cpp_TypeInfo_var);
		Queue_1__ctor_m1599025576(L_1, /*hidden argument*/Queue_1__ctor_m1599025576_MethodInfo_var);
		__this->set_powerUpsLogs_6(L_1);
		return;
	}
}
// System.Void PowerUpManager::Add(CustomizablePowerUp)
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1_Enqueue_m1154490879_MethodInfo_var;
extern const MethodInfo* Queue_1_get_Count_m1246224570_MethodInfo_var;
extern const MethodInfo* Queue_1_Dequeue_m2769458532_MethodInfo_var;
extern const uint32_t PowerUpManager_Add_m3857982977_MetadataUsageId;
extern "C"  void PowerUpManager_Add_m3857982977 (PowerUpManager_t1558166829 * __this, CustomizablePowerUp_t2151097860 * ___powerUp0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PowerUpManager_Add_m3857982977_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Queue_1_t92372993 * L_0 = __this->get_powerUps_5();
		CustomizablePowerUp_t2151097860 * L_1 = ___powerUp0;
		NullCheck(L_0);
		Queue_1_Enqueue_m1154490879(L_0, L_1, /*hidden argument*/Queue_1_Enqueue_m1154490879_MethodInfo_var);
		Queue_1_t92372993 * L_2 = __this->get_powerUpsLogs_6();
		CustomizablePowerUp_t2151097860 * L_3 = ___powerUp0;
		NullCheck(L_2);
		Queue_1_Enqueue_m1154490879(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m1154490879_MethodInfo_var);
		goto IL_001d;
	}

IL_001d:
	{
		Queue_1_t92372993 * L_4 = __this->get_powerUpsLogs_6();
		NullCheck(L_4);
		int32_t L_5 = Queue_1_get_Count_m1246224570(L_4, /*hidden argument*/Queue_1_get_Count_m1246224570_MethodInfo_var);
		uint16_t L_6 = __this->get_powerUpLogLimit_7();
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0048;
		}
	}
	{
		Queue_1_t92372993 * L_7 = __this->get_powerUpsLogs_6();
		NullCheck(L_7);
		CustomizablePowerUp_t2151097860 * L_8 = Queue_1_Dequeue_m2769458532(L_7, /*hidden argument*/Queue_1_Dequeue_m2769458532_MethodInfo_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Implicit_m2106766291(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_001d;
		}
	}

IL_0048:
	{
		return;
	}
}
// System.String PowerUpManager::RGBToHex(UnityEngine.Color)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3328204804;
extern Il2CppCodeGenString* _stringLiteral2778;
extern const uint32_t PowerUpManager_RGBToHex_m3948686138_MetadataUsageId;
extern "C"  String_t* PowerUpManager_RGBToHex_m3948686138 (PowerUpManager_t1558166829 * __this, Color_t4194546905  ___color0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PowerUpManager_RGBToHex_m3948686138_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		float L_0 = (&___color0)->get_r_0();
		V_0 = (((int32_t)((int32_t)((float)((float)L_0*(float)(255.0f))))));
		String_t* L_1 = Int32_ToString_m3853485906((&V_0), _stringLiteral2778, /*hidden argument*/NULL);
		float L_2 = (&___color0)->get_g_1();
		V_1 = (((int32_t)((int32_t)((float)((float)L_2*(float)(255.0f))))));
		String_t* L_3 = Int32_ToString_m3853485906((&V_1), _stringLiteral2778, /*hidden argument*/NULL);
		float L_4 = (&___color0)->get_b_2();
		V_2 = (((int32_t)((int32_t)((float)((float)L_4*(float)(255.0f))))));
		String_t* L_5 = Int32_ToString_m3853485906((&V_2), _stringLiteral2778, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m3928391288(NULL /*static, unused*/, _stringLiteral3328204804, L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void PowerUpManager::OnGUI()
extern Il2CppClass* GUILayoutOptionU5BU5D_t2977405297_il2cpp_TypeInfo_var;
extern Il2CppClass* StringU5BU5D_t4054002952_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Enumerator_t1381458505_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* GUI_t3134605553_il2cpp_TypeInfo_var;
extern const MethodInfo* Queue_1_GetEnumerator_m3570177728_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m3304549093_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1288237207_MethodInfo_var;
extern const MethodInfo* Queue_1_get_Count_m1246224570_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2762915248;
extern Il2CppCodeGenString* _stringLiteral62;
extern Il2CppCodeGenString* _stringLiteral3192529518;
extern Il2CppCodeGenString* _stringLiteral3829162761;
extern const uint32_t PowerUpManager_OnGUI_m527431432_MetadataUsageId;
extern "C"  void PowerUpManager_OnGUI_m527431432 (PowerUpManager_t1558166829 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PowerUpManager_OnGUI_m527431432_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	CustomizablePowerUp_t2151097860 * V_0 = NULL;
	Enumerator_t1381458505  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Queue_1_t92372993 * L_0 = __this->get_powerUpsLogs_6();
		NullCheck(L_0);
		Enumerator_t1381458505  L_1 = Queue_1_GetEnumerator_m3570177728(L_0, /*hidden argument*/Queue_1_GetEnumerator_m3570177728_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_0011:
		{
			CustomizablePowerUp_t2151097860 * L_2 = Enumerator_get_Current_m3304549093((&V_1), /*hidden argument*/Enumerator_get_Current_m3304549093_MethodInfo_var);
			V_0 = L_2;
			GUILayout_BeginHorizontal_m722450062(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t2977405297*)SZArrayNew(GUILayoutOptionU5BU5D_t2977405297_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
			GUILayout_BeginVertical_m2155819644(NULL /*static, unused*/, ((GUILayoutOptionU5BU5D_t2977405297*)SZArrayNew(GUILayoutOptionU5BU5D_t2977405297_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
			StringU5BU5D_t4054002952* L_3 = ((StringU5BU5D_t4054002952*)SZArrayNew(StringU5BU5D_t4054002952_il2cpp_TypeInfo_var, (uint32_t)5));
			NullCheck(L_3);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
			ArrayElementTypeCheck (L_3, _stringLiteral2762915248);
			(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2762915248);
			StringU5BU5D_t4054002952* L_4 = L_3;
			CustomizablePowerUp_t2151097860 * L_5 = V_0;
			NullCheck(L_5);
			Color_t4194546905  L_6 = L_5->get_lightColor_25();
			String_t* L_7 = PowerUpManager_RGBToHex_m3948686138(__this, L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
			ArrayElementTypeCheck (L_4, L_7);
			(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
			StringU5BU5D_t4054002952* L_8 = L_4;
			NullCheck(L_8);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
			ArrayElementTypeCheck (L_8, _stringLiteral62);
			(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral62);
			StringU5BU5D_t4054002952* L_9 = L_8;
			CustomizablePowerUp_t2151097860 * L_10 = V_0;
			NullCheck(L_10);
			String_t* L_11 = L_10->get_powerUpName_2();
			NullCheck(L_9);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 3);
			ArrayElementTypeCheck (L_9, L_11);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
			StringU5BU5D_t4054002952* L_12 = L_9;
			NullCheck(L_12);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 4);
			ArrayElementTypeCheck (L_12, _stringLiteral3192529518);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3192529518);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_13 = String_Concat_m21867311(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
			GUILayout_Label_m925445731(NULL /*static, unused*/, L_13, ((GUILayoutOptionU5BU5D_t2977405297*)SZArrayNew(GUILayoutOptionU5BU5D_t2977405297_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
			GUILayout_EndVertical_m3685530563(NULL /*static, unused*/, /*hidden argument*/NULL);
			GUILayout_EndHorizontal_m556624369(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_007f:
		{
			bool L_14 = Enumerator_MoveNext_m1288237207((&V_1), /*hidden argument*/Enumerator_MoveNext_m1288237207_MethodInfo_var);
			if (L_14)
			{
				goto IL_0011;
			}
		}

IL_008b:
		{
			IL2CPP_LEAVE(0x9C, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		Enumerator_t1381458505  L_15 = V_1;
		Enumerator_t1381458505  L_16 = L_15;
		Il2CppObject * L_17 = Box(Enumerator_t1381458505_il2cpp_TypeInfo_var, &L_16);
		NullCheck((Il2CppObject *)L_17);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, (Il2CppObject *)L_17);
		IL2CPP_END_FINALLY(144)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0x9C, IL_009c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_009c:
	{
		int32_t L_18 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t4241904616  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Rect__ctor_m3291325233(&L_19, (((float)((float)((int32_t)((int32_t)L_18-(int32_t)((int32_t)180)))))), (0.0f), (180.0f), (20.0f), /*hidden argument*/NULL);
		Queue_1_t92372993 * L_20 = __this->get_powerUps_5();
		NullCheck(L_20);
		int32_t L_21 = Queue_1_get_Count_m1246224570(L_20, /*hidden argument*/Queue_1_get_Count_m1246224570_MethodInfo_var);
		int32_t L_22 = L_21;
		Il2CppObject * L_23 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_22);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_24 = String_Concat_m2809334143(NULL /*static, unused*/, _stringLiteral3829162761, L_23, _stringLiteral3192529518, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_19, L_24, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PowerUpRotation::.ctor()
extern "C"  void PowerUpRotation__ctor_m1630606125 (PowerUpRotation_t894964222 * __this, const MethodInfo* method)
{
	{
		__this->set_rotationSpeed_2((99.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PowerUpRotation::Update()
extern "C"  void PowerUpRotation_Update_m736044416 (PowerUpRotation_t894964222 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_reverse_3();
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m2926210380(&L_2, (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_4 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_rotationSpeed_2();
		Vector3_t4282066566  L_6 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m637363399(L_1, L_6, /*hidden argument*/NULL);
		goto IL_0078;
	}

IL_0044:
	{
		Transform_t1659122786 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m2926210380(&L_8, (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		float L_9 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_rotationSpeed_2();
		Vector3_t4282066566  L_12 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_Rotate_m637363399(L_7, L_12, /*hidden argument*/NULL);
	}

IL_0078:
	{
		return;
	}
}
// System.Void PowerUpRotation::SetRotationSpeed(System.Single)
extern "C"  void PowerUpRotation_SetRotationSpeed_m1666975373 (PowerUpRotation_t894964222 * __this, float ___speed0, const MethodInfo* method)
{
	{
		float L_0 = ___speed0;
		__this->set_rotationSpeed_2(L_0);
		return;
	}
}
// System.Void PowerUpRotation::SetReverse(System.Boolean)
extern "C"  void PowerUpRotation_SetReverse_m1312204110 (PowerUpRotation_t894964222 * __this, bool ___reverse0, const MethodInfo* method)
{
	{
		bool L_0 = ___reverse0;
		__this->set_reverse_3(L_0);
		return;
	}
}
// System.Void ScaleParticles::.ctor()
extern "C"  void ScaleParticles__ctor_m3749165912 (ScaleParticles_t2675710115 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScaleParticles::Update()
extern const MethodInfo* Component_GetComponent_TisParticleSystem_t381473177_m423524409_MethodInfo_var;
extern const uint32_t ScaleParticles_Update_m1986888373_MetadataUsageId;
extern "C"  void ScaleParticles_Update_m1986888373 (ScaleParticles_t2675710115 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScaleParticles_Update_m1986888373_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ParticleSystem_t381473177 * L_0 = Component_GetComponent_TisParticleSystem_t381473177_m423524409(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t381473177_m423524409_MethodInfo_var);
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t4282066566  L_2 = Transform_get_lossyScale_m3749612506(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector3_get_magnitude_m989985786((&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		ParticleSystem_set_startSize_m1264710479(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShieldController::.ctor()
extern "C"  void ShieldController__ctor_m3077548086 (ShieldController_t1714369541 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ShieldController::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3016191;
extern const uint32_t ShieldController_OnTriggerEnter_m2912515842_MetadataUsageId;
extern "C"  void ShieldController_OnTriggerEnter_m2912515842 (ShieldController_t1714369541 * __this, Collider_t2939674232 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ShieldController_OnTriggerEnter_m2912515842_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t2939674232 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_m211612200(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_2, _stringLiteral3016191, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		AudioClip_t794140988 * L_4 = __this->get_breakSound_2();
		Camera_t2727095145 * L_5 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_t1659122786 * L_6 = Component_get_transform_m4257140443(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t4282066566  L_7 = Transform_get_position_m2211398607(L_6, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m2719680311(NULL /*static, unused*/, L_4, L_7, /*hidden argument*/NULL);
		Collider_t2939674232 * L_8 = ___other0;
		NullCheck(L_8);
		GameObject_t3674682005 * L_9 = Component_get_gameObject_m1170635899(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_003f:
	{
		return;
	}
}
// System.Void TakeablePowerUp::.ctor()
extern "C"  void TakeablePowerUp__ctor_m1518232972 (TakeablePowerUp_t2390083775 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TakeablePowerUp::Start()
extern const MethodInfo* GameObject_GetComponent_TisCustomizablePowerUp_t2151097860_m2497572701_MethodInfo_var;
extern const uint32_t TakeablePowerUp_Start_m465370764_MetadataUsageId;
extern "C"  void TakeablePowerUp_Start_m465370764 (TakeablePowerUp_t2390083775 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TakeablePowerUp_Start_m465370764_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_t1659122786 * L_1 = Transform_get_parent_m2236876972(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_t3674682005 * L_2 = Component_get_gameObject_m1170635899(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		CustomizablePowerUp_t2151097860 * L_3 = GameObject_GetComponent_TisCustomizablePowerUp_t2151097860_m2497572701(L_2, /*hidden argument*/GameObject_GetComponent_TisCustomizablePowerUp_t2151097860_m2497572701_MethodInfo_var);
		__this->set_customPowerUp_2(L_3);
		return;
	}
}
// System.Void TakeablePowerUp::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Singleton_1_t1810982222_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* Singleton_1_get_Instance_m2179151721_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2393081601;
extern const uint32_t TakeablePowerUp_OnTriggerEnter_m33653100_MetadataUsageId;
extern "C"  void TakeablePowerUp_OnTriggerEnter_m33653100 (TakeablePowerUp_t2390083775 * __this, Collider_t2939674232 * ___collider0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TakeablePowerUp_OnTriggerEnter_m33653100_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Collider_t2939674232 * L_0 = ___collider0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m217485006(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_1, _stringLiteral2393081601, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_t1810982222_il2cpp_TypeInfo_var);
		PowerUpManager_t1558166829 * L_3 = Singleton_1_get_Instance_m2179151721(NULL /*static, unused*/, /*hidden argument*/Singleton_1_get_Instance_m2179151721_MethodInfo_var);
		CustomizablePowerUp_t2151097860 * L_4 = __this->get_customPowerUp_2();
		NullCheck(L_3);
		PowerUpManager_Add_m3857982977(L_3, L_4, /*hidden argument*/NULL);
		CustomizablePowerUp_t2151097860 * L_5 = __this->get_customPowerUp_2();
		NullCheck(L_5);
		AudioClip_t794140988 * L_6 = L_5->get_pickUpSound_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_6, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		CustomizablePowerUp_t2151097860 * L_8 = __this->get_customPowerUp_2();
		NullCheck(L_8);
		AudioClip_t794140988 * L_9 = L_8->get_pickUpSound_4();
		Transform_t1659122786 * L_10 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t4282066566  L_11 = Transform_get_position_m2211398607(L_10, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m2719680311(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Transform_t1659122786 * L_12 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_t1659122786 * L_13 = Transform_get_parent_m2236876972(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_t3674682005 * L_14 = Component_get_gameObject_m1170635899(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_006b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
