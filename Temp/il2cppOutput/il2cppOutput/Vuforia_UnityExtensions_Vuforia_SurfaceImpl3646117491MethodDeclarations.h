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

// Vuforia.SurfaceImpl
struct SurfaceImpl_t3646117491;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t949783837;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// System.Int32[]
struct Int32U5BU5D_t3030399641;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh1356156583.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C"  void SurfaceImpl__ctor_m3491056719 (SurfaceImpl_t3646117491 * __this, int32_t ___id0, Il2CppObject * ___parent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C"  void SurfaceImpl_SetMesh_m3126532384 (SurfaceImpl_t3646117491 * __this, int32_t ___meshRev0, Mesh_t1356156583 * ___mesh1, Mesh_t1356156583 * ___navMesh2, Int32U5BU5D_t3030399641* ___meshBoundaries3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C"  void SurfaceImpl_SetBoundingBox_m254915721 (SurfaceImpl_t3646117491 * __this, Rect_t3681755626  ___boundingBox0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C"  Mesh_t1356156583 * SurfaceImpl_GetNavMesh_m843393080 (SurfaceImpl_t3646117491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
