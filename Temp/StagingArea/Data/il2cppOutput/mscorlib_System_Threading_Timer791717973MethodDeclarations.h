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

// System.Threading.Timer
struct Timer_t791717973;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"

// System.Void System.Threading.Timer::.cctor()
extern "C"  void Timer__cctor_m3277205579 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C"  bool Timer_Change_m1102301880 (Timer_t791717973 * __this, TimeSpan_t3430258949  ___dueTime0, TimeSpan_t3430258949  ___period1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C"  void Timer_Dispose_m337583491 (Timer_t791717973 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C"  bool Timer_Change_m3382066473 (Timer_t791717973 * __this, int64_t ___dueTime0, int64_t ___period1, bool ___first2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
