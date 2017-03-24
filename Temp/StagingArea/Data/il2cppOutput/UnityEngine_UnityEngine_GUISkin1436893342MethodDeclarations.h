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

// UnityEngine.GUISkin
struct GUISkin_t1436893342;
// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2497716199;
// UnityEngine.GUISettings
struct GUISettings_t622856320;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "mscorlib_System_String2029220233.h"

// System.Void UnityEngine.GUISkin::.ctor()
extern "C"  void GUISkin__ctor_m1526071177 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
extern "C"  void GUISkin_OnEnable_m668906001 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::CleanupRoots()
extern "C"  void GUISkin_CleanupRoots_m1306395062 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C"  Font_t4239498691 * GUISkin_get_font_m3373823514 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern "C"  void GUISkin_set_font_m4009958323 (GUISkin_t1436893342 * __this, Font_t4239498691 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_box_m533626169 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_box_m877476512 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_label_m2703078986 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_label_m3497795469 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_textField_m757680403 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_textField_m1154803040 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_textArea_m2761984156 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_textArea_m1764644057 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_button_m797402546 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_button_m412653849 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_toggle_m4153935270 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_toggle_m1758777401 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_window_m304699482 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_window_m3629811303 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_horizontalSlider_m2127949063 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_horizontalSlider_m1661016058 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_horizontalSliderThumb_m3625135389 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_horizontalSliderThumb_m2630442322 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_verticalSlider_m466249663 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_verticalSlider_m2804454404 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_verticalSliderThumb_m4023737417 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_verticalSliderThumb_m2120268044 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_horizontalScrollbar_m1466427350 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_horizontalScrollbar_m3905379441 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_horizontalScrollbarThumb_m4062590908 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_horizontalScrollbarThumb_m2119687595 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_horizontalScrollbarLeftButton_m3291286167 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_horizontalScrollbarLeftButton_m3732867738 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_horizontalScrollbarRightButton_m3712291674 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_horizontalScrollbarRightButton_m3490630791 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_verticalScrollbar_m851893488 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_verticalScrollbar_m1889864653 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_verticalScrollbarThumb_m649633186 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_verticalScrollbarThumb_m2647835739 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_verticalScrollbarUpButton_m3589224297 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_verticalScrollbarUpButton_m2965376352 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_verticalScrollbarDownButton_m1190388548 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_verticalScrollbarDownButton_m2438949637 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_scrollView_m2941173958 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C"  void GUISkin_set_scrollView_m979648939 (GUISkin_t1436893342 * __this, GUIStyle_t1799908754 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C"  GUIStyleU5BU5D_t2497716199* GUISkin_get_customStyles_m3624283365 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern "C"  void GUISkin_set_customStyles_m4770734 (GUISkin_t1436893342 * __this, GUIStyleU5BU5D_t2497716199* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C"  GUISettings_t622856320 * GUISkin_get_settings_m626844463 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C"  GUIStyle_t1799908754 * GUISkin_get_error_m1687921970 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
extern "C"  void GUISkin_Apply_m3789936953 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern "C"  void GUISkin_BuildStyleCache_m3553586894 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern "C"  GUIStyle_t1799908754 * GUISkin_GetStyle_m3594137272 (GUISkin_t1436893342 * __this, String_t* ___styleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern "C"  GUIStyle_t1799908754 * GUISkin_FindStyle_m4277712965 (GUISkin_t1436893342 * __this, String_t* ___styleName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C"  void GUISkin_MakeCurrent_m126414424 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern "C"  Il2CppObject * GUISkin_GetEnumerator_m3501317101 (GUISkin_t1436893342 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
