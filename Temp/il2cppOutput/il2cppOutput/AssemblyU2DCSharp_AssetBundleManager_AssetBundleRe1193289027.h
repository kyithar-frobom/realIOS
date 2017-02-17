﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;
// System.String
struct String_t;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundleManager/AssetBundleRef
struct  AssetBundleRef_t1193289027  : public Il2CppObject
{
public:
	// UnityEngine.AssetBundle AssetBundleManager/AssetBundleRef::assetBundle
	AssetBundle_t2054978754 * ___assetBundle_0;
	// System.Int32 AssetBundleManager/AssetBundleRef::version
	int32_t ___version_1;
	// System.String AssetBundleManager/AssetBundleRef::url
	String_t* ___url_2;

public:
	inline static int32_t get_offset_of_assetBundle_0() { return static_cast<int32_t>(offsetof(AssetBundleRef_t1193289027, ___assetBundle_0)); }
	inline AssetBundle_t2054978754 * get_assetBundle_0() const { return ___assetBundle_0; }
	inline AssetBundle_t2054978754 ** get_address_of_assetBundle_0() { return &___assetBundle_0; }
	inline void set_assetBundle_0(AssetBundle_t2054978754 * value)
	{
		___assetBundle_0 = value;
		Il2CppCodeGenWriteBarrier(&___assetBundle_0, value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(AssetBundleRef_t1193289027, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(AssetBundleRef_t1193289027, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif