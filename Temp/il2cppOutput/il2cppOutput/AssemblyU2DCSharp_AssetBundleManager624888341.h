#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,AssetBundleManager/AssetBundleRef>
struct Dictionary_2_t3108068289;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundleManager
struct  AssetBundleManager_t624888341  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct AssetBundleManager_t624888341_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,AssetBundleManager/AssetBundleRef> AssetBundleManager::dictAssetBundleRefs
	Dictionary_2_t3108068289 * ___dictAssetBundleRefs_2;

public:
	inline static int32_t get_offset_of_dictAssetBundleRefs_2() { return static_cast<int32_t>(offsetof(AssetBundleManager_t624888341_StaticFields, ___dictAssetBundleRefs_2)); }
	inline Dictionary_2_t3108068289 * get_dictAssetBundleRefs_2() const { return ___dictAssetBundleRefs_2; }
	inline Dictionary_2_t3108068289 ** get_address_of_dictAssetBundleRefs_2() { return &___dictAssetBundleRefs_2; }
	inline void set_dictAssetBundleRefs_2(Dictionary_2_t3108068289 * value)
	{
		___dictAssetBundleRefs_2 = value;
		Il2CppCodeGenWriteBarrier(&___dictAssetBundleRefs_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
