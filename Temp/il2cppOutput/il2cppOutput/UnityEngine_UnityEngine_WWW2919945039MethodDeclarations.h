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

// UnityEngine.WWW
struct WWW_t2919945039;
// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Hash1282836532937.h"
#include "UnityEngine_UnityEngine_WWW2919945039.h"

// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  void WWW__ctor_m3849977946 (WWW_t2919945039 * __this, String_t* ___url0, Hash128_t2836532937  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C"  void WWW_Dispose_m2554269413 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C"  void WWW_Finalize_m3300880244 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C"  void WWW_DestroyWWW_m2548500174 (WWW_t2919945039 * __this, bool ___cancel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C"  String_t* WWW_get_error_m3092701216 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
extern "C"  AssetBundle_t2054978754 * WWW_get_assetBundle_m80031863 (WWW_t2919945039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::INTERNAL_CALL_WWW(UnityEngine.WWW,System.String,UnityEngine.Hash128&,System.UInt32)
extern "C"  void WWW_INTERNAL_CALL_WWW_m1861215166 (Il2CppObject * __this /* static, unused */, WWW_t2919945039 * ___self0, String_t* ___url1, Hash128_t2836532937 * ___hash2, uint32_t ___crc3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32)
extern "C"  WWW_t2919945039 * WWW_LoadFromCacheOrDownload_m3967609319 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32,System.UInt32)
extern "C"  WWW_t2919945039 * WWW_LoadFromCacheOrDownload_m2961193343 (Il2CppObject * __this /* static, unused */, String_t* ___url0, int32_t ___version1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,UnityEngine.Hash128,System.UInt32)
extern "C"  WWW_t2919945039 * WWW_LoadFromCacheOrDownload_m2048032378 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Hash128_t2836532937  ___hash1, uint32_t ___crc2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
