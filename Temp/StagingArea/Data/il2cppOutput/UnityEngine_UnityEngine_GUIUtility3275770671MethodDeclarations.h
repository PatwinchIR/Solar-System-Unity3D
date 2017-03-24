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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FocusType488772178.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Single UnityEngine.GUIUtility::get_pixelsPerPoint()
extern "C"  float GUIUtility_get_pixelsPerPoint_m2667928361 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
extern "C"  int32_t GUIUtility_GetControlID_m3921738821 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___focus1, Rect_t3681755626  ___position2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.GUIUtility::GetStateObject(System.Type,System.Int32)
extern "C"  Il2CppObject * GUIUtility_GetStateObject_m3509738425 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, int32_t ___controlID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_guiIsExiting(System.Boolean)
extern "C"  void GUIUtility_set_guiIsExiting_m2362636745 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
extern "C"  int32_t GUIUtility_get_hotControl_m466901769 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_hotControl(System.Int32)
extern "C"  void GUIUtility_set_hotControl_m1071873884 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
extern "C"  GUISkin_t1436893342 * GUIUtility_GetDefaultSkin_m2022075576 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
extern "C"  void GUIUtility_BeginGUI_m2907220931 (Il2CppObject * __this /* static, unused */, int32_t ___skinMode0, int32_t ___instanceID1, int32_t ___useGUILayout2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
extern "C"  void GUIUtility_EndGUI_m3538781391 (Il2CppObject * __this /* static, unused */, int32_t ___layoutType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
extern "C"  bool GUIUtility_EndGUIFromException_m2091524531 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::ShouldRethrowException(System.Exception)
extern "C"  bool GUIUtility_ShouldRethrowException_m1990329277 (Il2CppObject * __this /* static, unused */, Exception_t1927440687 * ___exception0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
extern "C"  void GUIUtility_CheckOnGUI_m4284398968 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()
extern "C"  float GUIUtility_Internal_GetPixelsPerPoint_m1770975086 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
extern "C"  int32_t GUIUtility_Internal_GetNextControlID2_m4047069072 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___focusType1, Rect_t3681755626  ___rect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::INTERNAL_CALL_Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
extern "C"  int32_t GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m502958187 (Il2CppObject * __this /* static, unused */, int32_t ___hint0, int32_t ___focusType1, Rect_t3681755626 * ___rect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
extern "C"  int32_t GUIUtility_Internal_GetHotControl_m2510727642 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
extern "C"  void GUIUtility_Internal_SetHotControl_m2395397073 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
extern "C"  int32_t GUIUtility_get_keyboardControl_m2418463643 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
extern "C"  GUISkin_t1436893342 * GUIUtility_Internal_GetDefaultSkin_m2135852437 (Il2CppObject * __this /* static, unused */, int32_t ___skinMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
extern "C"  void GUIUtility_Internal_ExitGUI_m2271097629 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
extern "C"  int32_t GUIUtility_Internal_GetGUIDepth_m1699616910 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::.cctor()
extern "C"  void GUIUtility__cctor_m46116445 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
