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

// AssetBundleManager
struct AssetBundleManager_t624888341;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AssetBundleManager::.cctor()
extern "C"  void AssetBundleManager__cctor_m3506502639 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::.ctor()
extern "C"  void AssetBundleManager__ctor_m1001388798 (AssetBundleManager_t624888341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle AssetBundleManager::getAssetBundle(System.String,System.Int32)
extern "C"  AssetBundle_t2054978754 * AssetBundleManager_getAssetBundle_m681124205 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AssetBundleManager::downloadAssetBundle(System.String,System.Int32)
extern "C"  Il2CppObject * AssetBundleManager_downloadAssetBundle_m2286069221 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AssetBundleManager::Unload(System.String,System.Int32,System.Boolean)
extern "C"  void AssetBundleManager_Unload_m3077907653 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, bool ___allObjects2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
