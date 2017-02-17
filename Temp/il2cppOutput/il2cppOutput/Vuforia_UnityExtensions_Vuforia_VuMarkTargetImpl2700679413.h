#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t199901830;
// Vuforia.InstanceIdImpl
struct InstanceIdImpl_t3955455590;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTargetImpl
struct  VuMarkTargetImpl_t2700679413  : public Il2CppObject
{
public:
	// Vuforia.VuMarkTemplateImpl Vuforia.VuMarkTargetImpl::mVuMarkTemplate
	VuMarkTemplateImpl_t199901830 * ___mVuMarkTemplate_0;
	// Vuforia.InstanceIdImpl Vuforia.VuMarkTargetImpl::mInstanceId
	InstanceIdImpl_t3955455590 * ___mInstanceId_1;
	// System.Int32 Vuforia.VuMarkTargetImpl::mTargetId
	int32_t ___mTargetId_2;

public:
	inline static int32_t get_offset_of_mVuMarkTemplate_0() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t2700679413, ___mVuMarkTemplate_0)); }
	inline VuMarkTemplateImpl_t199901830 * get_mVuMarkTemplate_0() const { return ___mVuMarkTemplate_0; }
	inline VuMarkTemplateImpl_t199901830 ** get_address_of_mVuMarkTemplate_0() { return &___mVuMarkTemplate_0; }
	inline void set_mVuMarkTemplate_0(VuMarkTemplateImpl_t199901830 * value)
	{
		___mVuMarkTemplate_0 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkTemplate_0, value);
	}

	inline static int32_t get_offset_of_mInstanceId_1() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t2700679413, ___mInstanceId_1)); }
	inline InstanceIdImpl_t3955455590 * get_mInstanceId_1() const { return ___mInstanceId_1; }
	inline InstanceIdImpl_t3955455590 ** get_address_of_mInstanceId_1() { return &___mInstanceId_1; }
	inline void set_mInstanceId_1(InstanceIdImpl_t3955455590 * value)
	{
		___mInstanceId_1 = value;
		Il2CppCodeGenWriteBarrier(&___mInstanceId_1, value);
	}

	inline static int32_t get_offset_of_mTargetId_2() { return static_cast<int32_t>(offsetof(VuMarkTargetImpl_t2700679413, ___mTargetId_2)); }
	inline int32_t get_mTargetId_2() const { return ___mTargetId_2; }
	inline int32_t* get_address_of_mTargetId_2() { return &___mTargetId_2; }
	inline void set_mTargetId_2(int32_t value)
	{
		___mTargetId_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
