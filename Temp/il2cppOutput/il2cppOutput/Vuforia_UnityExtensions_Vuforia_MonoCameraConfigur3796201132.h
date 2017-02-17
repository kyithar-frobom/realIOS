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

#include "Vuforia_UnityExtensions_Vuforia_BaseCameraConfigurat38459502.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.MonoCameraConfiguration
struct  MonoCameraConfiguration_t3796201132  : public BaseCameraConfiguration_t38459502
{
public:
	// UnityEngine.Camera Vuforia.MonoCameraConfiguration::mPrimaryCamera
	Camera_t189460977 * ___mPrimaryCamera_10;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraViewPortWidth
	int32_t ___mCameraViewPortWidth_11;
	// System.Int32 Vuforia.MonoCameraConfiguration::mCameraViewPortHeight
	int32_t ___mCameraViewPortHeight_12;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedNearClipPlane
	float ___mLastAppliedNearClipPlane_13;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedFarClipPlane
	float ___mLastAppliedFarClipPlane_14;
	// System.Single Vuforia.MonoCameraConfiguration::mLastAppliedFoV
	float ___mLastAppliedFoV_15;

public:
	inline static int32_t get_offset_of_mPrimaryCamera_10() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mPrimaryCamera_10)); }
	inline Camera_t189460977 * get_mPrimaryCamera_10() const { return ___mPrimaryCamera_10; }
	inline Camera_t189460977 ** get_address_of_mPrimaryCamera_10() { return &___mPrimaryCamera_10; }
	inline void set_mPrimaryCamera_10(Camera_t189460977 * value)
	{
		___mPrimaryCamera_10 = value;
		Il2CppCodeGenWriteBarrier(&___mPrimaryCamera_10, value);
	}

	inline static int32_t get_offset_of_mCameraViewPortWidth_11() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mCameraViewPortWidth_11)); }
	inline int32_t get_mCameraViewPortWidth_11() const { return ___mCameraViewPortWidth_11; }
	inline int32_t* get_address_of_mCameraViewPortWidth_11() { return &___mCameraViewPortWidth_11; }
	inline void set_mCameraViewPortWidth_11(int32_t value)
	{
		___mCameraViewPortWidth_11 = value;
	}

	inline static int32_t get_offset_of_mCameraViewPortHeight_12() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mCameraViewPortHeight_12)); }
	inline int32_t get_mCameraViewPortHeight_12() const { return ___mCameraViewPortHeight_12; }
	inline int32_t* get_address_of_mCameraViewPortHeight_12() { return &___mCameraViewPortHeight_12; }
	inline void set_mCameraViewPortHeight_12(int32_t value)
	{
		___mCameraViewPortHeight_12 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedNearClipPlane_13() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mLastAppliedNearClipPlane_13)); }
	inline float get_mLastAppliedNearClipPlane_13() const { return ___mLastAppliedNearClipPlane_13; }
	inline float* get_address_of_mLastAppliedNearClipPlane_13() { return &___mLastAppliedNearClipPlane_13; }
	inline void set_mLastAppliedNearClipPlane_13(float value)
	{
		___mLastAppliedNearClipPlane_13 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFarClipPlane_14() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mLastAppliedFarClipPlane_14)); }
	inline float get_mLastAppliedFarClipPlane_14() const { return ___mLastAppliedFarClipPlane_14; }
	inline float* get_address_of_mLastAppliedFarClipPlane_14() { return &___mLastAppliedFarClipPlane_14; }
	inline void set_mLastAppliedFarClipPlane_14(float value)
	{
		___mLastAppliedFarClipPlane_14 = value;
	}

	inline static int32_t get_offset_of_mLastAppliedFoV_15() { return static_cast<int32_t>(offsetof(MonoCameraConfiguration_t3796201132, ___mLastAppliedFoV_15)); }
	inline float get_mLastAppliedFoV_15() const { return ___mLastAppliedFoV_15; }
	inline float* get_address_of_mLastAppliedFoV_15() { return &___mLastAppliedFoV_15; }
	inline void set_mLastAppliedFoV_15(float value)
	{
		___mLastAppliedFoV_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
