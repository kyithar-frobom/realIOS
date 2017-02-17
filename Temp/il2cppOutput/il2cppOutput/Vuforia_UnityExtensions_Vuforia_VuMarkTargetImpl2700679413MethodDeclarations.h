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

// Vuforia.VuMarkTargetImpl
struct VuMarkTargetImpl_t2700679413;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Vuforia.VuMarkTemplateImpl
struct VuMarkTemplateImpl_t199901830;
// System.String
struct String_t;
// Vuforia.VuMarkTemplate
struct VuMarkTemplate_t3922476088;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_InstanceIdType467315012.h"
#include "Vuforia_UnityExtensions_Vuforia_VuMarkTemplateImpl199901830.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Void Vuforia.VuMarkTargetImpl::.ctor(System.Int32,System.Byte[],System.UInt64,Vuforia.InstanceIdType,System.UInt32,Vuforia.VuMarkTemplateImpl)
extern "C"  void VuMarkTargetImpl__ctor_m2799170966 (VuMarkTargetImpl_t2700679413 * __this, int32_t ___id0, ByteU5BU5D_t3397334013* ___buffer1, uint64_t ___numericValue2, int32_t ___dataType3, uint32_t ___dataLength4, VuMarkTemplateImpl_t199901830 * ___template5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.VuMarkTargetImpl::GetSize()
extern "C"  Vector3_t2243707580  VuMarkTargetImpl_GetSize_m266131082 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuMarkTargetImpl::GetLargestSizeComponent()
extern "C"  float VuMarkTargetImpl_GetLargestSizeComponent_m1554647361 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuMarkTargetImpl::SetSize(UnityEngine.Vector3)
extern "C"  void VuMarkTargetImpl_SetSize_m1721897007 (VuMarkTargetImpl_t2700679413 * __this, Vector3_t2243707580  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuMarkTargetImpl::StartExtendedTracking()
extern "C"  bool VuMarkTargetImpl_StartExtendedTracking_m1406240925 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.VuMarkTargetImpl::get_Name()
extern "C"  String_t* VuMarkTargetImpl_get_Name_m931358238 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuMarkTargetImpl::get_ID()
extern "C"  int32_t VuMarkTargetImpl_get_ID_m3173237059 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuMarkTemplate Vuforia.VuMarkTargetImpl::get_Template()
extern "C"  Il2CppObject * VuMarkTargetImpl_get_Template_m977518223 (VuMarkTargetImpl_t2700679413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
