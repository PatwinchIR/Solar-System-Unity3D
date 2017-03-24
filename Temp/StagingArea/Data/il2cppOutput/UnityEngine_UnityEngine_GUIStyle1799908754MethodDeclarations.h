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

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIStyleState
struct GUIStyleState_t3801000545;
// UnityEngine.RectOffset
struct RectOffset_t3387826427;
// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;
struct GUIStyle_t1799908754_marshaled_pinvoke;
struct GUIStyle_t1799908754_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_GUIStyleState3801000545.h"
#include "UnityEngine_UnityEngine_RectOffset3387826427.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Texture2243626319.h"
#include "UnityEngine_UnityEngine_ImagePosition3491916276.h"
#include "UnityEngine_UnityEngine_TextAnchor112990806.h"
#include "UnityEngine_UnityEngine_TextClipping2573530411.h"
#include "UnityEngine_UnityEngine_FontStyle2764949590.h"
#include "UnityEngine_UnityEngine_Internal_DrawArguments2834709342.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Internal_DrawWithTextSelec1327795077.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m3665892801 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C"  void GUIStyle__ctor_m2210993436 (GUIStyle_t1799908754 * __this, GUIStyle_t1799908754 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C"  void GUIStyle_Finalize_m1258476043 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CleanupRoots()
extern "C"  void GUIStyle_CleanupRoots_m1437637400 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InternalOnAfterDeserialize()
extern "C"  void GUIStyle_InternalOnAfterDeserialize_m1316894156 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t3801000545 * GUIStyle_get_normal_m2789468942 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_normal(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_normal_m3961052767 (GUIStyle_t1799908754 * __this, GUIStyleState_t3801000545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
extern "C"  GUIStyleState_t3801000545 * GUIStyle_get_hover_m2852629197 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_hover(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_hover_m3804756686 (GUIStyle_t1799908754 * __this, GUIStyleState_t3801000545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
extern "C"  GUIStyleState_t3801000545 * GUIStyle_get_active_m1570427943 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_active(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_active_m2896743432 (GUIStyle_t1799908754 * __this, GUIStyleState_t3801000545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onNormal()
extern "C"  GUIStyleState_t3801000545 * GUIStyle_get_onNormal_m1675201777 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onNormal(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onNormal_m1461827296 (GUIStyle_t1799908754 * __this, GUIStyleState_t3801000545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onHover()
extern "C"  GUIStyleState_t3801000545 * GUIStyle_get_onHover_m2772546760 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onHover(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onHover_m3908151335 (GUIStyle_t1799908754 * __this, GUIStyleState_t3801000545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onActive()
extern "C"  GUIStyleState_t3801000545 * GUIStyle_get_onActive_m1207191918 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onActive(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onActive_m504713485 (GUIStyle_t1799908754 * __this, GUIStyleState_t3801000545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_focused()
extern "C"  GUIStyleState_t3801000545 * GUIStyle_get_focused_m2556379628 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_focused(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_focused_m1547304893 (GUIStyle_t1799908754 * __this, GUIStyleState_t3801000545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onFocused()
extern "C"  GUIStyleState_t3801000545 * GUIStyle_get_onFocused_m2592399571 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onFocused(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onFocused_m3237213858 (GUIStyle_t1799908754 * __this, GUIStyleState_t3801000545 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
extern "C"  RectOffset_t3387826427 * GUIStyle_get_border_m2676279601 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_border_m1243171088 (GUIStyle_t1799908754 * __this, RectOffset_t3387826427 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C"  RectOffset_t3387826427 * GUIStyle_get_margin_m1012250163 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_margin_m2529965880 (GUIStyle_t1799908754 * __this, RectOffset_t3387826427 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C"  RectOffset_t3387826427 * GUIStyle_get_padding_m4076916754 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_padding_m3722809255 (GUIStyle_t1799908754 * __this, RectOffset_t3387826427 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_overflow()
extern "C"  RectOffset_t3387826427 * GUIStyle_get_overflow_m1125058093 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_overflow(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_overflow_m3735423712 (GUIStyle_t1799908754 * __this, RectOffset_t3387826427 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_clipOffset()
extern "C"  Vector2_t2243707579  GUIStyle_get_clipOffset_m2888582498 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_clipOffset_m3871613343 (GUIStyle_t1799908754 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
extern "C"  Font_t4239498691 * GUIStyle_get_font_m1489712926 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C"  void GUIStyle_set_font_m312124587 (GUIStyle_t1799908754 * __this, Font_t4239498691 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C"  float GUIStyle_get_lineHeight_m2132859383 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Internal_Draw_m3610093213 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, Rect_t3681755626  ___position1, GUIContent_t4210063000 * ___content2, bool ___isHover3, bool ___isActive4, bool ___on5, bool ___hasKeyboardFocus6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m4006459684 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, bool ___isHover1, bool ___isActive2, bool ___on3, bool ___hasKeyboardFocus4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m3134455812 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, String_t* ___text1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.Texture,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m3521010226 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, Texture_t2243626319 * ___image1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m2284294803 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, bool ___isHover2, bool ___isActive3, bool ___on4, bool ___hasKeyboardFocus5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C"  void GUIStyle_Draw_m2055025106 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, int32_t ___controlID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Draw_m1435796321 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, int32_t ___controlID2, bool ___on3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
extern "C"  void GUIStyle_DrawCursor_m3727336857 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, int32_t ___controlID2, int32_t ___Character3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void GUIStyle_DrawWithTextSelection_m2215181902 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, int32_t ___controlID2, int32_t ___firstSelectedCharacter3, int32_t ___lastSelectedCharacter4, bool ___drawSelectionAsComposition5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
extern "C"  void GUIStyle_DrawWithTextSelection_m3191662157 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, int32_t ___controlID2, int32_t ___firstSelectedCharacter3, int32_t ___lastSelectedCharacter4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
extern "C"  GUIStyle_t1799908754 * GUIStyle_op_Implicit_m781448948 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C"  GUIStyle_t1799908754 * GUIStyle_get_none_m4224270950 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C"  Vector2_t2243707579  GUIStyle_GetCursorPixelPosition_m2488570694 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, int32_t ___cursorStringIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  int32_t GUIStyle_GetCursorStringIndex_m326283516 (GUIStyle_t1799908754 * __this, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, Vector2_t2243707579  ___cursorPixelPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetNumCharactersThatFitWithinWidth(System.String,System.Single)
extern "C"  int32_t GUIStyle_GetNumCharactersThatFitWithinWidth_m3760066083 (GUIStyle_t1799908754 * __this, String_t* ___text0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C"  Vector2_t2243707579  GUIStyle_CalcSize_m4254746879 (GUIStyle_t1799908754 * __this, GUIContent_t4210063000 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  GUIStyle_CalcSizeWithConstraints_m4117833199 (GUIStyle_t1799908754 * __this, GUIContent_t4210063000 * ___content0, Vector2_t2243707579  ___constraints1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcScreenSize(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  GUIStyle_CalcScreenSize_m1349129130 (GUIStyle_t1799908754 * __this, Vector2_t2243707579  ___contentSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C"  float GUIStyle_CalcHeight_m1685124037 (GUIStyle_t1799908754 * __this, GUIContent_t4210063000 * ___content0, float ___width1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C"  bool GUIStyle_get_isHeightDependantOnWidth_m1706997031 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C"  void GUIStyle_CalcMinMaxWidth_m2027503105 (GUIStyle_t1799908754 * __this, GUIContent_t4210063000 * ___content0, float* ___minWidth1, float* ___maxWidth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C"  String_t* GUIStyle_ToString_m3046670236 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C"  void GUIStyle_Init_m3872198731 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
extern "C"  void GUIStyle_InitCopy_m3676786505 (GUIStyle_t1799908754 * __this, GUIStyle_t1799908754 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C"  void GUIStyle_Cleanup_m1915255373 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C"  String_t* GUIStyle_get_name_m753291950 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C"  void GUIStyle_set_name_m1034188361 (GUIStyle_t1799908754 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C"  IntPtr_t GUIStyle_GetStyleStatePtr_m1972527409 (GUIStyle_t1799908754 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_GetStyleStatePtr(UnityEngine.GUIStyle,System.Int32,System.IntPtr&)
extern "C"  void GUIStyle_INTERNAL_CALL_GetStyleStatePtr_m976729086 (Il2CppObject * __this /* static, unused */, GUIStyle_t1799908754 * ___self0, int32_t ___idx1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignStyleState(System.Int32,System.IntPtr)
extern "C"  void GUIStyle_AssignStyleState_m2665274947 (GUIStyle_t1799908754 * __this, int32_t ___idx0, IntPtr_t ___srcStyleState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C"  IntPtr_t GUIStyle_GetRectOffsetPtr_m4223228888 (GUIStyle_t1799908754 * __this, int32_t ___idx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_GetRectOffsetPtr(UnityEngine.GUIStyle,System.Int32,System.IntPtr&)
extern "C"  void GUIStyle_INTERNAL_CALL_GetRectOffsetPtr_m1971938403 (Il2CppObject * __this /* static, unused */, GUIStyle_t1799908754 * ___self0, int32_t ___idx1, IntPtr_t* ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
extern "C"  void GUIStyle_AssignRectOffset_m2998103580 (GUIStyle_t1799908754 * __this, int32_t ___idx0, IntPtr_t ___srcRectOffset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C"  int32_t GUIStyle_get_imagePosition_m1104201320 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
extern "C"  void GUIStyle_set_imagePosition_m327170707 (GUIStyle_t1799908754 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.GUIStyle::get_alignment()
extern "C"  int32_t GUIStyle_get_alignment_m3513439031 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m1024943876 (GUIStyle_t1799908754 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C"  bool GUIStyle_get_wordWrap_m3655049112 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m2043927261 (GUIStyle_t1799908754 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextClipping UnityEngine.GUIStyle::get_clipping()
extern "C"  int32_t GUIStyle_get_clipping_m2754700641 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
extern "C"  void GUIStyle_set_clipping_m2858420820 (GUIStyle_t1799908754 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_contentOffset()
extern "C"  Vector2_t2243707579  GUIStyle_get_contentOffset_m1904924583 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_contentOffset_m2138084868 (GUIStyle_t1799908754 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_contentOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_get_contentOffset_m2667265678 (GUIStyle_t1799908754 * __this, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_contentOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_set_contentOffset_m1314037746 (GUIStyle_t1799908754 * __this, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_Internal_clipOffset()
extern "C"  Vector2_t2243707579  GUIStyle_get_Internal_clipOffset_m4237737448 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_Internal_clipOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_Internal_clipOffset_m118330819 (GUIStyle_t1799908754 * __this, Vector2_t2243707579  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_Internal_clipOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_get_Internal_clipOffset_m3336627565 (GUIStyle_t1799908754 * __this, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_Internal_clipOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_set_Internal_clipOffset_m2024478897 (GUIStyle_t1799908754 * __this, Vector2_t2243707579 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C"  float GUIStyle_get_fixedWidth_m97997484 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedWidth(System.Single)
extern "C"  void GUIStyle_set_fixedWidth_m2562018757 (GUIStyle_t1799908754 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C"  float GUIStyle_get_fixedHeight_m414733479 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
extern "C"  void GUIStyle_set_fixedHeight_m1517737608 (GUIStyle_t1799908754 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C"  bool GUIStyle_get_stretchWidth_m1223411161 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C"  void GUIStyle_set_stretchWidth_m1198647818 (GUIStyle_t1799908754 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C"  bool GUIStyle_get_stretchHeight_m3396762700 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C"  void GUIStyle_set_stretchHeight_m421727883 (GUIStyle_t1799908754 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C"  float GUIStyle_Internal_GetLineHeight_m2503294326 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetFontInternal(UnityEngine.Font)
extern "C"  void GUIStyle_SetFontInternal_m4135062999 (GUIStyle_t1799908754 * __this, Font_t4239498691 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternalDuringLoadingThread()
extern "C"  Font_t4239498691 * GUIStyle_GetFontInternalDuringLoadingThread_m229734483 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternal()
extern "C"  Font_t4239498691 * GUIStyle_GetFontInternal_m3509743324 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
extern "C"  int32_t GUIStyle_get_fontSize_m3568562864 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m4015341543 (GUIStyle_t1799908754 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.GUIStyle::get_fontStyle()
extern "C"  int32_t GUIStyle_get_fontStyle_m3124364840 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void GUIStyle_set_fontStyle_m3960530579 (GUIStyle_t1799908754 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_richText()
extern "C"  bool GUIStyle_get_richText_m1518013201 (GUIStyle_t1799908754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
extern "C"  void GUIStyle_set_richText_m1853532836 (GUIStyle_t1799908754 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C"  void GUIStyle_Internal_Draw_m694122665 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, Internal_DrawArguments_t2834709342 * ___arguments1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Internal_Draw2_m878252945 (Il2CppObject * __this /* static, unused */, IntPtr_t ___style0, Rect_t3681755626  ___position1, GUIContent_t4210063000 * ___content2, int32_t ___controlID3, bool ___on4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_Draw2_m2973483786 (Il2CppObject * __this /* static, unused */, IntPtr_t ___style0, Rect_t3681755626 * ___position1, GUIContent_t4210063000 * ___content2, int32_t ___controlID3, bool ___on4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetMouseTooltip(System.String,UnityEngine.Rect)
extern "C"  void GUIStyle_SetMouseTooltip_m2239589192 (GUIStyle_t1799908754 * __this, String_t* ___tooltip0, Rect_t3681755626  ___screenRect1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_SetMouseTooltip(UnityEngine.GUIStyle,System.String,UnityEngine.Rect&)
extern "C"  void GUIStyle_INTERNAL_CALL_SetMouseTooltip_m1802284884 (Il2CppObject * __this /* static, unused */, GUIStyle_t1799908754 * ___self0, String_t* ___tooltip1, Rect_t3681755626 * ___screenRect2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Internal_DrawPrefixLabel_m1693575069 (Il2CppObject * __this /* static, unused */, IntPtr_t ___style0, Rect_t3681755626  ___position1, GUIContent_t4210063000 * ___content2, int32_t ___controlID3, bool ___on4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_DrawPrefixLabel_m557487542 (Il2CppObject * __this /* static, unused */, IntPtr_t ___style0, Rect_t3681755626 * ___position1, GUIContent_t4210063000 * ___content2, int32_t ___controlID3, bool ___on4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
extern "C"  float GUIStyle_Internal_GetCursorFlashOffset_m3177259302 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawCursor(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Color)
extern "C"  void GUIStyle_Internal_DrawCursor_m1394927592 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, Rect_t3681755626  ___position1, GUIContent_t4210063000 * ___content2, int32_t ___pos3, Color_t2020392075  ___cursorColor4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawCursor(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_DrawCursor_m512401185 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, Rect_t3681755626 * ___position1, GUIContent_t4210063000 * ___content2, int32_t ___pos3, Color_t2020392075 * ___cursorColor4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection(UnityEngine.GUIContent,UnityEngine.Internal_DrawWithTextSelectionArguments&)
extern "C"  void GUIStyle_Internal_DrawWithTextSelection_m2258778613 (Il2CppObject * __this /* static, unused */, GUIContent_t4210063000 * ___content0, Internal_DrawWithTextSelectionArguments_t1327795077 * ___arguments1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C"  void GUIStyle_SetDefaultFont_m2095841351 (Il2CppObject * __this /* static, unused */, Font_t4239498691 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_GetCursorPixelPosition_m823797035 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, Rect_t3681755626  ___position1, GUIContent_t4210063000 * ___content2, int32_t ___cursorStringIndex3, Vector2_t2243707579 * ___ret4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m562482816 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, Rect_t3681755626 * ___position1, GUIContent_t4210063000 * ___content2, int32_t ___cursorStringIndex3, Vector2_t2243707579 * ___ret4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  int32_t GUIStyle_Internal_GetCursorStringIndex_m1491806746 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, Rect_t3681755626  ___position1, GUIContent_t4210063000 * ___content2, Vector2_t2243707579  ___cursorPixelPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C"  int32_t GUIStyle_INTERNAL_CALL_Internal_GetCursorStringIndex_m3074318281 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, Rect_t3681755626 * ___position1, GUIContent_t4210063000 * ___content2, Vector2_t2243707579 * ___cursorPixelPosition3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetNumCharactersThatFitWithinWidth(System.IntPtr,System.String,System.Single)
extern "C"  int32_t GUIStyle_Internal_GetNumCharactersThatFitWithinWidth_m2132182605 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, String_t* ___text1, float ___width2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_CalcSize_m1309259680 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, GUIContent_t4210063000 * ___content1, Vector2_t2243707579 * ___ret2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_CalcSizeWithConstraints_m3375255978 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, GUIContent_t4210063000 * ___content1, Vector2_t2243707579  ___maxSize2, Vector2_t2243707579 * ___ret3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_CalcSizeWithConstraints_m1203344891 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, GUIContent_t4210063000 * ___content1, Vector2_t2243707579 * ___maxSize2, Vector2_t2243707579 * ___ret3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C"  float GUIStyle_Internal_CalcHeight_m350880591 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, GUIContent_t4210063000 * ___content1, float ___width2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C"  void GUIStyle_Internal_CalcMinMaxWidth_m3660306863 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target0, GUIContent_t4210063000 * ___content1, float* ___minWidth2, float* ___maxWidth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C"  void GUIStyle__cctor_m1781956100 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GUIStyle_t1799908754;
struct GUIStyle_t1799908754_marshaled_pinvoke;

extern "C" void GUIStyle_t1799908754_marshal_pinvoke(const GUIStyle_t1799908754& unmarshaled, GUIStyle_t1799908754_marshaled_pinvoke& marshaled);
extern "C" void GUIStyle_t1799908754_marshal_pinvoke_back(const GUIStyle_t1799908754_marshaled_pinvoke& marshaled, GUIStyle_t1799908754& unmarshaled);
extern "C" void GUIStyle_t1799908754_marshal_pinvoke_cleanup(GUIStyle_t1799908754_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GUIStyle_t1799908754;
struct GUIStyle_t1799908754_marshaled_com;

extern "C" void GUIStyle_t1799908754_marshal_com(const GUIStyle_t1799908754& unmarshaled, GUIStyle_t1799908754_marshaled_com& marshaled);
extern "C" void GUIStyle_t1799908754_marshal_com_back(const GUIStyle_t1799908754_marshaled_com& marshaled, GUIStyle_t1799908754& unmarshaled);
extern "C" void GUIStyle_t1799908754_marshal_com_cleanup(GUIStyle_t1799908754_marshaled_com& marshaled);
