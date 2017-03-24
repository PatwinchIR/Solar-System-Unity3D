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

// UnityEngine.GUIStyleState
struct GUIStyleState_t3801000545;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
struct GUIStyleState_t3801000545_marshaled_pinvoke;
struct GUIStyleState_t3801000545_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C"  void GUIStyleState__ctor_m3611888666 (GUIStyleState_t3801000545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C"  void GUIStyleState__ctor_m2708667747 (GUIStyleState_t3801000545 * __this, GUIStyle_t1799908754 * ___sourceStyle0, IntPtr_t ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::ProduceGUIStyleStateFromDeserialization(UnityEngine.GUIStyle,System.IntPtr)
extern "C"  GUIStyleState_t3801000545 * GUIStyleState_ProduceGUIStyleStateFromDeserialization_m1887139976 (Il2CppObject * __this /* static, unused */, GUIStyle_t1799908754 * ___sourceStyle0, IntPtr_t ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
extern "C"  GUIStyleState_t3801000545 * GUIStyleState_GetGUIStyleState_m2816150617 (Il2CppObject * __this /* static, unused */, GUIStyle_t1799908754 * ___sourceStyle0, IntPtr_t ___source1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C"  void GUIStyleState_Finalize_m401465910 (GUIStyleState_t3801000545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Init()
extern "C"  void GUIStyleState_Init_m2434147050 (GUIStyleState_t3801000545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C"  void GUIStyleState_Cleanup_m705006206 (GUIStyleState_t3801000545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternalFromDeserialization()
extern "C"  Texture2D_t3542995729 * GUIStyleState_GetBackgroundInternalFromDeserialization_m1892089769 (GUIStyleState_t3801000545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C"  Texture2D_t3542995729 * GUIStyleState_GetBackgroundInternal_m439046630 (GUIStyleState_t3801000545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C"  void GUIStyleState_set_textColor_m3970174237 (GUIStyleState_t3801000545 * __this, Color_t2020392075  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C"  void GUIStyleState_INTERNAL_set_textColor_m3876928435 (GUIStyleState_t3801000545 * __this, Color_t2020392075 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GUIStyleState_t3801000545;
struct GUIStyleState_t3801000545_marshaled_pinvoke;

extern "C" void GUIStyleState_t3801000545_marshal_pinvoke(const GUIStyleState_t3801000545& unmarshaled, GUIStyleState_t3801000545_marshaled_pinvoke& marshaled);
extern "C" void GUIStyleState_t3801000545_marshal_pinvoke_back(const GUIStyleState_t3801000545_marshaled_pinvoke& marshaled, GUIStyleState_t3801000545& unmarshaled);
extern "C" void GUIStyleState_t3801000545_marshal_pinvoke_cleanup(GUIStyleState_t3801000545_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GUIStyleState_t3801000545;
struct GUIStyleState_t3801000545_marshaled_com;

extern "C" void GUIStyleState_t3801000545_marshal_com(const GUIStyleState_t3801000545& unmarshaled, GUIStyleState_t3801000545_marshaled_com& marshaled);
extern "C" void GUIStyleState_t3801000545_marshal_com_back(const GUIStyleState_t3801000545_marshaled_com& marshaled, GUIStyleState_t3801000545& unmarshaled);
extern "C" void GUIStyleState_t3801000545_marshal_com_cleanup(GUIStyleState_t3801000545_marshaled_com& marshaled);
