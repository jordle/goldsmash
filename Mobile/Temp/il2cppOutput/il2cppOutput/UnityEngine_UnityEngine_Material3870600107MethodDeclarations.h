﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Texture
struct Texture_t2526458961;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m2546967560 (Material_t3870600107 * __this, Material_t3870600107 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t2526458961 * Material_get_mainTexture_m1012267054 (Material_t3870600107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m1918430019 (Material_t3870600107 * __this, String_t* ___propertyName0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m54957808 (Material_t3870600107 * __this, int32_t ___nameID0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m3209011477 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___self0, int32_t ___nameID1, Color_t4194546905 * ___color2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C"  Color_t4194546905  Material_GetColor_m1709543664 (Material_t3870600107 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C"  Color_t4194546905  Material_GetColor_m317509027 (Material_t3870600107 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_GetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_GetColor_m3428345249 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___self0, int32_t ___nameID1, Color_t4194546905 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m3505096203 (Material_t3870600107 * __this, String_t* ___propertyName0, Vector4_t4282066567  ___vector1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
extern "C"  Vector4_t4282066567  Material_GetVector_m4092100414 (Material_t3870600107 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t2526458961 * Material_GetTexture_m1284113328 (Material_t3870600107 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t2526458961 * Material_GetTexture_m3767468771 (Material_t3870600107 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m981710063 (Material_t3870600107 * __this, String_t* ___propertyName0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m170145518 (Material_t3870600107 * __this, int32_t ___nameID0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.String)
extern "C"  float Material_GetFloat_m2541456626 (Material_t3870600107 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.Int32)
extern "C"  float Material_GetFloat_m344344929 (Material_t3870600107 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m2649395040 (Material_t3870600107 * __this, String_t* ___propertyName0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m2077312757 (Material_t3870600107 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C"  bool Material_HasProperty_m190825214 (Material_t3870600107 * __this, int32_t ___nameID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m2349411671 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___mono0, Material_t3870600107 * ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m3802712984 (Material_t3870600107 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m572736419 (Material_t3870600107 * __this, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
