#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PowerUpManager
struct PowerUpManager_t1558166829;
// CustomizablePowerUp
struct CustomizablePowerUp_t2151097860;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_CustomizablePowerUp2151097860.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void PowerUpManager::.ctor()
extern "C"  void PowerUpManager__ctor_m1032032782 (PowerUpManager_t1558166829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PowerUpManager::get_Count()
extern "C"  int32_t PowerUpManager_get_Count_m3412568132 (PowerUpManager_t1558166829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PowerUpManager::Awake()
extern "C"  void PowerUpManager_Awake_m1269638001 (PowerUpManager_t1558166829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PowerUpManager::Add(CustomizablePowerUp)
extern "C"  void PowerUpManager_Add_m3857982977 (PowerUpManager_t1558166829 * __this, CustomizablePowerUp_t2151097860 * ___powerUp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PowerUpManager::RGBToHex(UnityEngine.Color)
extern "C"  String_t* PowerUpManager_RGBToHex_m3948686138 (PowerUpManager_t1558166829 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PowerUpManager::OnGUI()
extern "C"  void PowerUpManager_OnGUI_m527431432 (PowerUpManager_t1558166829 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
