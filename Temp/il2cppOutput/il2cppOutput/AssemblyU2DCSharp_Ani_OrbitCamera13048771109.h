#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ani_OrbitCamera1
struct  Ani_OrbitCamera1_t3048771109  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Ani_OrbitCamera1::target
	Transform_t3275118058 * ___target_2;
	// System.Single Ani_OrbitCamera1::xSpeed
	float ___xSpeed_3;
	// System.Single Ani_OrbitCamera1::ySpeed
	float ___ySpeed_4;
	// System.Single Ani_OrbitCamera1::smoothTime
	float ___smoothTime_5;
	// System.Single Ani_OrbitCamera1::autoTimer
	float ___autoTimer_6;
	// System.Single Ani_OrbitCamera1::velocityX
	float ___velocityX_7;
	// System.Single Ani_OrbitCamera1::velocityY
	float ___velocityY_8;
	// System.Boolean Ani_OrbitCamera1::faster
	bool ___faster_9;
	// System.Boolean Ani_OrbitCamera1::rkeyActive
	bool ___rkeyActive_10;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_xSpeed_3() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___xSpeed_3)); }
	inline float get_xSpeed_3() const { return ___xSpeed_3; }
	inline float* get_address_of_xSpeed_3() { return &___xSpeed_3; }
	inline void set_xSpeed_3(float value)
	{
		___xSpeed_3 = value;
	}

	inline static int32_t get_offset_of_ySpeed_4() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___ySpeed_4)); }
	inline float get_ySpeed_4() const { return ___ySpeed_4; }
	inline float* get_address_of_ySpeed_4() { return &___ySpeed_4; }
	inline void set_ySpeed_4(float value)
	{
		___ySpeed_4 = value;
	}

	inline static int32_t get_offset_of_smoothTime_5() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___smoothTime_5)); }
	inline float get_smoothTime_5() const { return ___smoothTime_5; }
	inline float* get_address_of_smoothTime_5() { return &___smoothTime_5; }
	inline void set_smoothTime_5(float value)
	{
		___smoothTime_5 = value;
	}

	inline static int32_t get_offset_of_autoTimer_6() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___autoTimer_6)); }
	inline float get_autoTimer_6() const { return ___autoTimer_6; }
	inline float* get_address_of_autoTimer_6() { return &___autoTimer_6; }
	inline void set_autoTimer_6(float value)
	{
		___autoTimer_6 = value;
	}

	inline static int32_t get_offset_of_velocityX_7() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___velocityX_7)); }
	inline float get_velocityX_7() const { return ___velocityX_7; }
	inline float* get_address_of_velocityX_7() { return &___velocityX_7; }
	inline void set_velocityX_7(float value)
	{
		___velocityX_7 = value;
	}

	inline static int32_t get_offset_of_velocityY_8() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___velocityY_8)); }
	inline float get_velocityY_8() const { return ___velocityY_8; }
	inline float* get_address_of_velocityY_8() { return &___velocityY_8; }
	inline void set_velocityY_8(float value)
	{
		___velocityY_8 = value;
	}

	inline static int32_t get_offset_of_faster_9() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___faster_9)); }
	inline bool get_faster_9() const { return ___faster_9; }
	inline bool* get_address_of_faster_9() { return &___faster_9; }
	inline void set_faster_9(bool value)
	{
		___faster_9 = value;
	}

	inline static int32_t get_offset_of_rkeyActive_10() { return static_cast<int32_t>(offsetof(Ani_OrbitCamera1_t3048771109, ___rkeyActive_10)); }
	inline bool get_rkeyActive_10() const { return ___rkeyActive_10; }
	inline bool* get_address_of_rkeyActive_10() { return &___rkeyActive_10; }
	inline void set_rkeyActive_10(bool value)
	{
		___rkeyActive_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
