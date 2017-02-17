#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.CloudRecoBehaviour
struct CloudRecoBehaviour_t3077176941;
// System.String
struct String_t;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t2654589389;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleCloudHandler_1
struct  SimpleCloudHandler_1_t2515411383  : public MonoBehaviour_t1158329972
{
public:
	// Vuforia.CloudRecoBehaviour SimpleCloudHandler_1::mCloudRecoBehaviour
	CloudRecoBehaviour_t3077176941 * ___mCloudRecoBehaviour_2;
	// System.Boolean SimpleCloudHandler_1::mIsScanning
	bool ___mIsScanning_3;
	// System.String SimpleCloudHandler_1::mTargetMetadata
	String_t* ___mTargetMetadata_4;
	// Vuforia.ImageTargetBehaviour SimpleCloudHandler_1::ImageTargetTemplate
	ImageTargetBehaviour_t2654589389 * ___ImageTargetTemplate_5;

public:
	inline static int32_t get_offset_of_mCloudRecoBehaviour_2() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_1_t2515411383, ___mCloudRecoBehaviour_2)); }
	inline CloudRecoBehaviour_t3077176941 * get_mCloudRecoBehaviour_2() const { return ___mCloudRecoBehaviour_2; }
	inline CloudRecoBehaviour_t3077176941 ** get_address_of_mCloudRecoBehaviour_2() { return &___mCloudRecoBehaviour_2; }
	inline void set_mCloudRecoBehaviour_2(CloudRecoBehaviour_t3077176941 * value)
	{
		___mCloudRecoBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier(&___mCloudRecoBehaviour_2, value);
	}

	inline static int32_t get_offset_of_mIsScanning_3() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_1_t2515411383, ___mIsScanning_3)); }
	inline bool get_mIsScanning_3() const { return ___mIsScanning_3; }
	inline bool* get_address_of_mIsScanning_3() { return &___mIsScanning_3; }
	inline void set_mIsScanning_3(bool value)
	{
		___mIsScanning_3 = value;
	}

	inline static int32_t get_offset_of_mTargetMetadata_4() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_1_t2515411383, ___mTargetMetadata_4)); }
	inline String_t* get_mTargetMetadata_4() const { return ___mTargetMetadata_4; }
	inline String_t** get_address_of_mTargetMetadata_4() { return &___mTargetMetadata_4; }
	inline void set_mTargetMetadata_4(String_t* value)
	{
		___mTargetMetadata_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTargetMetadata_4, value);
	}

	inline static int32_t get_offset_of_ImageTargetTemplate_5() { return static_cast<int32_t>(offsetof(SimpleCloudHandler_1_t2515411383, ___ImageTargetTemplate_5)); }
	inline ImageTargetBehaviour_t2654589389 * get_ImageTargetTemplate_5() const { return ___ImageTargetTemplate_5; }
	inline ImageTargetBehaviour_t2654589389 ** get_address_of_ImageTargetTemplate_5() { return &___ImageTargetTemplate_5; }
	inline void set_ImageTargetTemplate_5(ImageTargetBehaviour_t2654589389 * value)
	{
		___ImageTargetTemplate_5 = value;
		Il2CppCodeGenWriteBarrier(&___ImageTargetTemplate_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
