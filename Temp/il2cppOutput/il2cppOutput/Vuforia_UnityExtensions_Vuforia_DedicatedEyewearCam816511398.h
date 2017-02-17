#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t189460977;
// Vuforia.EyewearDevice
struct EyewearDevice_t1202635122;

#include "Vuforia_UnityExtensions_Vuforia_BaseCameraConfigurat38459502.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.DedicatedEyewearCameraConfiguration
struct  DedicatedEyewearCameraConfiguration_t816511398  : public BaseCameraConfiguration_t38459502
{
public:
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mPrimaryCamera
	Camera_t189460977 * ___mPrimaryCamera_10;
	// UnityEngine.Camera Vuforia.DedicatedEyewearCameraConfiguration::mSecondaryCamera
	Camera_t189460977 * ___mSecondaryCamera_11;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenWidth
	int32_t ___mScreenWidth_12;
	// System.Int32 Vuforia.DedicatedEyewearCameraConfiguration::mScreenHeight
	int32_t ___mScreenHeight_13;
	// System.Boolean Vuforia.DedicatedEyewearCameraConfiguration::mNeedToCheckStereo
	bool ___mNeedToCheckStereo_14;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_15;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_16;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewNearClipPlane
	float ___mNewNearClipPlane_17;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewFarClipPlane
	float ___mNewFarClipPlane_18;
	// System.Single Vuforia.DedicatedEyewearCameraConfiguration::mNewVirtualFoV
	float ___mNewVirtualFoV_19;
	// Vuforia.EyewearDevice Vuforia.DedicatedEyewearCameraConfiguration::mEyewearDevice
	EyewearDevice_t1202635122 * ___mEyewearDevice_20;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_10() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mPrimaryCamera_10)); }
	inline Camera_t189460977 * get_mPrimaryCamera_10() const { return ___mPrimaryCamera_10; }
	inline Camera_t189460977 ** get_address_of_mPrimaryCamera_10() { return &___mPrimaryCamera_10; }
	inline void set_mPrimaryCamera_10(Camera_t189460977 * value)
	{
		___mPrimaryCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_10, value);
	}

	inline static int32_t get_offset_of_mSecondaryCamera_11() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mSecondaryCamera_11)); }
	inline Camera_t189460977 * get_mSecondaryCamera_11() const { return ___mSecondaryCamera_11; }
	inline Camera_t189460977 ** get_address_of_mSecondaryCamera_11() { return &___mSecondaryCamera_11; }
	inline void set_mSecondaryCamera_11(Camera_t189460977 * value)
	{
		___mSecondaryCamera_11 = value;
		Il2CppCodeGenWriteBarrier(&___mSecondaryCamera_11, value);
	}

	inline static int32_t get_offset_of_mScreenWidth_12() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mScreenWidth_12)); }
	inline int32_t get_mScreenWidth_12() const { return ___mScreenWidth_12; }
	inline int32_t* get_address_of_mScreenWidth_12() { return &___mScreenWidth_12; }
	inline void set_mScreenWidth_12(int32_t value)
	{
		___mScreenWidth_12 = value;
	}

	inline static int32_t get_offset_of_mScreenHeight_13() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mScreenHeight_13)); }
	inline int32_t get_mScreenHeight_13() const { return ___mScreenHeight_13; }
	inline int32_t* get_address_of_mScreenHeight_13() { return &___mScreenHeight_13; }
	inline void set_mScreenHeight_13(int32_t value)
	{
		___mScreenHeight_13 = value;
	}

	inline static int32_t get_offset_of_mNeedToCheckStereo_14() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mNeedToCheckStereo_14)); }
	inline bool get_mNeedToCheckStereo_14() const { return ___mNeedToCheckStereo_14; }
	inline bool* get_address_of_mNeedToCheckStereo_14() { return &___mNeedToCheckStereo_14; }
	inline void set_mNeedToCheckStereo_14(bool value)
	{
		___mNeedToCheckStereo_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_15() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mLastAppliedNearClipPlane_15)); }
	inline float get_mLastAppliedNearClipPlane_15() const { return ___mLastAppliedNearClipPlane_15; }
	inline float* get_address_of_mLastAppliedNearClipPlane_15() { return &___mLastAppliedNearClipPlane_15; }
	inline void set_mLastAppliedNearClipPlane_15(float value)
	{
		___mLastAppliedNearClipPlane_15 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_16() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mLastAppliedFarClipPlane_16)); }
	inline float get_mLastAppliedFarClipPlane_16() const { return ___mLastAppliedFarClipPlane_16; }
	inline float* get_address_of_mLastAppliedFarClipPlane_16() { return &___mLastAppliedFarClipPlane_16; }
	inline void set_mLastAppliedFarClipPlane_16(float value)
	{
		___mLastAppliedFarClipPlane_16 = value;
	}

	inline static int32_t get_offset_of_mNewNearClipPlane_17() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mNewNearClipPlane_17)); }
	inline float get_mNewNearClipPlane_17() const { return ___mNewNearClipPlane_17; }
	inline float* get_address_of_mNewNearClipPlane_17() { return &___mNewNearClipPlane_17; }
	inline void set_mNewNearClipPlane_17(float value)
	{
		___mNewNearClipPlane_17 = value;
	}

	inline static int32_t get_offset_of_mNewFarClipPlane_18() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mNewFarClipPlane_18)); }
	inline float get_mNewFarClipPlane_18() const { return ___mNewFarClipPlane_18; }
	inline float* get_address_of_mNewFarClipPlane_18() { return &___mNewFarClipPlane_18; }
	inline void set_mNewFarClipPlane_18(float value)
	{
		___mNewFarClipPlane_18 = value;
	}

	inline static int32_t get_offset_of_mNewVirtualFoV_19() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mNewVirtualFoV_19)); }
	inline float get_mNewVirtualFoV_19() const { return ___mNewVirtualFoV_19; }
	inline float* get_address_of_mNewVirtualFoV_19() { return &___mNewVirtualFoV_19; }
	inline void set_mNewVirtualFoV_19(float value)
	{
		___mNewVirtualFoV_19 = value;
	}

	inline static int32_t get_offset_of_mEyewearDevice_20() { return static_cast<int32_t>(offsetof(DedicatedEyewearCameraConfiguration_t816511398, ___mEyewearDevice_20)); }
	inline EyewearDevice_t1202635122 * get_mEyewearDevice_20() const { return ___mEyewearDevice_20; }
	inline EyewearDevice_t1202635122 ** get_address_of_mEyewearDevice_20() { return &___mEyewearDevice_20; }
	inline void set_mEyewearDevice_20(EyewearDevice_t1202635122 * value)
	{
		___mEyewearDevice_20 = value;
		Il2CppCodeGenWriteBarrier(&___mEyewearDevice_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
