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

// Vuforia.VuforiaNullWrapper
struct VuforiaNullWrapper_t3644069544;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceDeinitCamera_m2665608967 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetCameraDirection_m2809298187 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceGetCameraFieldOfViewRads_m1490215970 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___fovVectorContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_CameraDeviceGetVideoMode_m955650332 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___idx0, IntPtr_t ___videoMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceInitCamera_m434910787 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___camera0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceSelectVideoMode_m597799808 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_CameraDeviceSetCameraConfiguration_m3052196174 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceStartCamera_m1962269226 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNullWrapper_CameraDeviceStopCamera_m3003729046 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_AddDistortionCoefficient_m458731550 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_delete_m3734435025 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::CustomViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNullWrapper_CustomViewerParameters_new_m1414888078 (VuforiaNullWrapper_t3644069544 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetButtonType_m4251585841 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetContainsMagnet_m10276000 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetFieldOfView_m2758492122 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, IntPtr_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetInterLensDistance_m2800133266 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetLensCentreToTrayDistance_m4278095192 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetScreenToLensDistance_m1413125979 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::CustomViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_CustomViewerParameters_SetTrayAlignment_m157382248 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetGetDimensions_m3582197380 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensionPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_CylinderTargetSetSideLength_m380416983 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetDestroyTrackable_m2074503518 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetExists_m953729653 (VuforiaNullWrapper_t3644069544 * __this, String_t* ___relativePath0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetNumTrackableType_m1132928170 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetTrackableName_m2632674766 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t1221177846 * ___trackableName2, int32_t ___nameMaxLength3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetGetTrackablesOfType_m3910136327 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_DataSetLoad_m2516713677 (VuforiaNullWrapper_t3644069544 * __this, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNullWrapper_DeinitFrameState_m1450361765 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::Device_GetMode()
extern "C"  int32_t VuforiaNullWrapper_Device_GetMode_m788030418 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::Device_GetViewerList()
extern "C"  IntPtr_t VuforiaNullWrapper_Device_GetViewerList_m2341663702 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::Device_IsViewerPresent()
extern "C"  int32_t VuforiaNullWrapper_Device_IsViewerPresent_m3628312280 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::Device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_Device_SelectViewer_m2008675991 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___vp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::Device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_Device_SetMode_m1130966083 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::Device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNullWrapper_Device_SetViewerPresent_m1172878657 (VuforiaNullWrapper_t3644069544 * __this, bool ___present0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::DeviceIsEyewearDevice()
extern "C"  int32_t VuforiaNullWrapper_DeviceIsEyewearDevice_m4169933456 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNullWrapper_EyewearDeviceGetScreenOrientation_m2275275548 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNullWrapper_EyewearDeviceIsDisplayExtended_m1225441251 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNullWrapper_EyewearDeviceIsDualDisplay_m2766059260 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNullWrapper_EyewearDeviceIsSeeThru_m2901662634 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::EyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNullWrapper_EyewearDeviceSetDisplayExtended_m210014944 (VuforiaNullWrapper_t3644069544 * __this, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_GetProjectionGL_m2228857983 (VuforiaNullWrapper_t3644069544 * __this, float ___nearPlane0, float ___farPlane1, IntPtr_t ___projectionContainer2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::HasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNullWrapper_HasSurfaceBeenRecreated_m3989471482 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetBuilderBuild_m2001575528 (VuforiaNullWrapper_t3644069544 * __this, String_t* ___name0, float ___screenSizeWidth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNullWrapper_ImageTargetBuilderGetFrameQuality_m2011787533 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNullWrapper_ImageTargetBuilderGetTrackableSource_m1559881316 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNullWrapper_ImageTargetBuilderStartScan_m3101513590 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNullWrapper_ImageTargetBuilderStopScan_m3767910846 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetCreateVirtualButton_m1433375141 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetDestroyVirtualButton_m2400573581 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetNumVirtualButtons_m2856701732 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtonName_m1082824190 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t1221177846 * ___vbName3, int32_t ___nameMaxLength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNullWrapper_ImageTargetGetVirtualButtons_m1986957249 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNullWrapper_InitFrameState_m2020491138 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___frameState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::InitPlatformNative()
extern "C"  void VuforiaNullWrapper_InitPlatformNative_m2888493394 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNullWrapper::MultiTargetGetLargestSizeComponent(System.IntPtr,System.String)
extern "C"  float VuforiaNullWrapper_MultiTargetGetLargestSizeComponent_m1459103056 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTargetGetSize_m1637584881 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTargetSetSize_m227707309 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerActivateDataSet_m2074555782 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNullWrapper_ObjectTrackerCreateDataSet_m3584540878 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerDeactivateDataSet_m3524240873 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ObjectTrackerDestroyDataSet_m3132984803 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnPause()
extern "C"  void VuforiaNullWrapper_OnPause_m3864786145 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnResume()
extern "C"  void VuforiaNullWrapper_OnResume_m4097882238 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_OnSurfaceChanged_m2319307868 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_QcarAddCameraFrame_m1638812990 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::QcarDeinit()
extern "C"  void VuforiaNullWrapper_QcarDeinit_m2318850098 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarGetBufferSize_m676644523 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNullWrapper_QcarInit_m2210364305 (VuforiaNullWrapper_t3644069544 * __this, String_t* ___licenseKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarSetFrameFormat_m2619316197 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___format0, int32_t ___enabled1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_QcarSetHint_m607678349 (VuforiaNullWrapper_t3644069544 * __this, uint32_t ___hint0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNullWrapper_ReconstructionFromTargetSetInitializationTarget_m3253150186 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableID2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ReconstructionSetMaximumArea_m3165861795 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNullWrapper_ReconstructionSetNavMeshPadding_m1143047364 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___reconstruction0, float ___padding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ReconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ReconstructionStart_m3253104500 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::RendererCreateNativeTexture(System.UInt32,System.UInt32,System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_RendererCreateNativeTexture_m2446863061 (VuforiaNullWrapper_t3644069544 * __this, uint32_t ___width0, uint32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNullWrapper_RendererGetGraphicsAPI_m1635513844 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererGetVideoBackgroundCfg_m1954791470 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_RendererGetVideoBackgroundTextureInfo_m3073703635 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___texInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m1068175170 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RendererSetVideoBackgroundCfg_m789506466 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___bgCfg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTextureID_m2866544087 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___textureID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_RendererSetVideoBackgroundTexturePtr_m1750470823 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___texturePtr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_DeleteCopy_m3977550361 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetDistortionMesh_m3373795988 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___viewId0, IntPtr_t ___meshData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetDistortionMeshSize_m3039180269 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___viewId0, IntPtr_t ___size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetEffectiveFov_m3335202502 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___viewID0, IntPtr_t ___fovContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetEyeDisplayAdjustmentMatrix_m2895442179 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetNormalizedViewport_m3565237885 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetProjectionMatrix_m1995468187 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetViewport_m3169045752 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RenderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNullWrapper_RenderingPrimitives_GetViewportCentreToEyeAxis_m415748298 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNullWrapper_RotationalDeviceTracker_GetModelCorrectionTransform_m1401904957 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_Recenter_m671835872 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetModelCorrectionMode_m3030215243 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetModelCorrectionModeWithTransform_m818673271 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___mode0, IntPtr_t ___pivot1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::RotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNullWrapper_RotationalDeviceTracker_SetPosePrediction_m2061111295 (VuforiaNullWrapper_t3644069544 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNullWrapper_SetApplicationEnvironment_m975296579 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, int32_t ___sdkWrapperType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::SetRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNullWrapper_SetRenderBuffers_m4172595999 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___colorBuffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_SmartTerrainBuilderAddReconstruction_m2747045898 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m2367265121 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_SmartTerrainBuilderRemoveReconstruction_m3406661833 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___reconstruction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNullWrapper_SmartTerrainTrackerDeinitBuilder_m527956670 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNullWrapper_SmartTerrainTrackerInitBuilder_m3724222153 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3986342658 (VuforiaNullWrapper_t3644069544 * __this, float ___scaleToMillimenters0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_StartExtendedTracking_m2133871827 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNullWrapper_TargetFinderClearTrackables_m3523004664 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderDeinit_m2832471100 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderEnableTracking_m1367780585 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_TargetFinderGetImageTargets_m48615501 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderGetInitState_m885257354 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderGetResults_m424069238 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStartInit_m131987489 (VuforiaNullWrapper_t3644069544 * __this, String_t* ___userKey0, String_t* ___secretKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStartRecognition_m3330979318 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNullWrapper_TargetFinderStop_m2273784955 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNullWrapper_TargetFinderUpdate_m348083707 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerManagerDeinitTracker_m2436097149 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerManagerInitTracker_m2245973332 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::TrackerStart(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_TrackerStart_m3807133797 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::TrackerStop(System.Int32)
extern "C"  void VuforiaNullWrapper_TrackerStop_m2423356467 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___trackerTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_UpdateQCAR_m3451494702 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameState2, int32_t ___screenOrientation3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNullWrapper_ViewerParameters_delete_m3090600244 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_GetByIndex_m2949172368 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___vpList0, int32_t ___idx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::ViewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNullWrapper_ViewerParametersList_GetByNameManufacturer_m699749981 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___vpList0, String_t* ___name1, String_t* ___manufacturer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::ViewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNullWrapper_ViewerParametersList_SetSDKFilter_m3814776257 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___vpList0, String_t* ___filter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::ViewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_ViewerParametersList_Size_m665886598 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___vpList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonGetId_m598893338 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetAreaRectangle_m4096906019 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetEnabled_m3584826287 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_VirtualButtonSetSensitivity_m3119222195 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNullWrapper::VuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNullWrapper_VuforiaGetRenderEventCallback_m4133543940 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_VuMarkTemplateGetOrigin_m3208289848 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___originPtr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNullWrapper_VuMarkTemplateSetTrackingFromRuntimeAppearance_m3395059870 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordsFromFile_m3648010511 (VuforiaNullWrapper_t3644069544 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordToFilterListU_m3112232109 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNullWrapper_WordListAddWordU_m2152771640 (VuforiaNullWrapper_t3644069544 * __this, IntPtr_t ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListLoadFilterList_m121282007 (VuforiaNullWrapper_t3644069544 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListLoadWordList_m1141964609 (VuforiaNullWrapper_t3644069544 * __this, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNullWrapper_WordListSetFilterMode_m2983089270 (VuforiaNullWrapper_t3644069544 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNullWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNullWrapper_WordListUnloadAllLists_m1984480805 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNullWrapper::.ctor()
extern "C"  void VuforiaNullWrapper__ctor_m3619043698 (VuforiaNullWrapper_t3644069544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
