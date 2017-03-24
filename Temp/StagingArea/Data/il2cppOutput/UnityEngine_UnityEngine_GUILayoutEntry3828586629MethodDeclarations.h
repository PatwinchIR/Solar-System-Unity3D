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

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t3828586629;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.RectOffset
struct RectOffset_t3387826427;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2108882777;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry__ctor_m4007465719 (GUILayoutEntry_t3828586629 * __this, float ____minWidth0, float ____maxWidth1, float ____minHeight2, float ____maxHeight3, GUIStyle_t1799908754 * ____style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
extern "C"  GUIStyle_t1799908754 * GUILayoutEntry_get_style_m998192810 (GUILayoutEntry_t3828586629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry_set_style_m70917293 (GUILayoutEntry_t3828586629 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
extern "C"  RectOffset_t3387826427 * GUILayoutEntry_get_margin_m1657422058 (GUILayoutEntry_t3828586629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
extern "C"  void GUILayoutEntry_CalcWidth_m2520096159 (GUILayoutEntry_t3828586629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
extern "C"  void GUILayoutEntry_CalcHeight_m1069006192 (GUILayoutEntry_t3828586629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
extern "C"  void GUILayoutEntry_SetHorizontal_m1828181654 (GUILayoutEntry_t3828586629 * __this, float ___x0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
extern "C"  void GUILayoutEntry_SetVertical_m2328603448 (GUILayoutEntry_t3828586629 * __this, float ___y0, float ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
extern "C"  void GUILayoutEntry_ApplyStyleSettings_m371609721 (GUILayoutEntry_t3828586629 * __this, GUIStyle_t1799908754 * ___style0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
extern "C"  void GUILayoutEntry_ApplyOptions_m115321759 (GUILayoutEntry_t3828586629 * __this, GUILayoutOptionU5BU5D_t2108882777* ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
extern "C"  String_t* GUILayoutEntry_ToString_m1331406279 (GUILayoutEntry_t3828586629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
extern "C"  void GUILayoutEntry__cctor_m3710308127 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
