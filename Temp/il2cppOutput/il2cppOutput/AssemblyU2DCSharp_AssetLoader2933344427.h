#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.AssetBundle
struct AssetBundle_t2054978754;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetLoader
struct  AssetLoader_t2933344427  : public MonoBehaviour_t1158329972
{
public:
	// System.String AssetLoader::BundelURL
	String_t* ___BundelURL_2;
	// System.String AssetLoader::AssetName
	String_t* ___AssetName_3;
	// System.Int32 AssetLoader::version
	int32_t ___version_4;
	// UnityEngine.AssetBundle AssetLoader::bundle
	AssetBundle_t2054978754 * ___bundle_5;

public:
	inline static int32_t get_offset_of_BundelURL_2() { return static_cast<int32_t>(offsetof(AssetLoader_t2933344427, ___BundelURL_2)); }
	inline String_t* get_BundelURL_2() const { return ___BundelURL_2; }
	inline String_t** get_address_of_BundelURL_2() { return &___BundelURL_2; }
	inline void set_BundelURL_2(String_t* value)
	{
		___BundelURL_2 = value;
		Il2CppCodeGenWriteBarrier(&___BundelURL_2, value);
	}

	inline static int32_t get_offset_of_AssetName_3() { return static_cast<int32_t>(offsetof(AssetLoader_t2933344427, ___AssetName_3)); }
	inline String_t* get_AssetName_3() const { return ___AssetName_3; }
	inline String_t** get_address_of_AssetName_3() { return &___AssetName_3; }
	inline void set_AssetName_3(String_t* value)
	{
		___AssetName_3 = value;
		Il2CppCodeGenWriteBarrier(&___AssetName_3, value);
	}

	inline static int32_t get_offset_of_version_4() { return static_cast<int32_t>(offsetof(AssetLoader_t2933344427, ___version_4)); }
	inline int32_t get_version_4() const { return ___version_4; }
	inline int32_t* get_address_of_version_4() { return &___version_4; }
	inline void set_version_4(int32_t value)
	{
		___version_4 = value;
	}

	inline static int32_t get_offset_of_bundle_5() { return static_cast<int32_t>(offsetof(AssetLoader_t2933344427, ___bundle_5)); }
	inline AssetBundle_t2054978754 * get_bundle_5() const { return ___bundle_5; }
	inline AssetBundle_t2054978754 ** get_address_of_bundle_5() { return &___bundle_5; }
	inline void set_bundle_5(AssetBundle_t2054978754 * value)
	{
		___bundle_5 = value;
		Il2CppCodeGenWriteBarrier(&___bundle_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
