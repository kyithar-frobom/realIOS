#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Vuforia_UnityExtensions_Vuforia_ObjectTargetImpl1796148526.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuMarkTemplateImpl
struct  VuMarkTemplateImpl_t199901830  : public ObjectTargetImpl_t1796148526
{
public:
	// UnityEngine.Vector2 Vuforia.VuMarkTemplateImpl::mOrigin
	Vector2_t2243707579  ___mOrigin_4;
	// System.Boolean Vuforia.VuMarkTemplateImpl::mTrackingFromRuntimeAppearance
	bool ___mTrackingFromRuntimeAppearance_5;

public:
	inline static int32_t get_offset_of_mOrigin_4() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t199901830, ___mOrigin_4)); }
	inline Vector2_t2243707579  get_mOrigin_4() const { return ___mOrigin_4; }
	inline Vector2_t2243707579 * get_address_of_mOrigin_4() { return &___mOrigin_4; }
	inline void set_mOrigin_4(Vector2_t2243707579  value)
	{
		___mOrigin_4 = value;
	}

	inline static int32_t get_offset_of_mTrackingFromRuntimeAppearance_5() { return static_cast<int32_t>(offsetof(VuMarkTemplateImpl_t199901830, ___mTrackingFromRuntimeAppearance_5)); }
	inline bool get_mTrackingFromRuntimeAppearance_5() const { return ___mTrackingFromRuntimeAppearance_5; }
	inline bool* get_address_of_mTrackingFromRuntimeAppearance_5() { return &___mTrackingFromRuntimeAppearance_5; }
	inline void set_mTrackingFromRuntimeAppearance_5(bool value)
	{
		___mTrackingFromRuntimeAppearance_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
