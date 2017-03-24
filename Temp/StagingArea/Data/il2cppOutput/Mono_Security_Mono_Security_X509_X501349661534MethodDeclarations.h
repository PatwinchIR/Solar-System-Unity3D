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

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t924533536;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN1924533535.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"

// System.Void Mono.Security.X509.X501::.cctor()
extern "C"  void X501__cctor_m2610532554 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C"  String_t* X501_ToString_m4145210560 (Il2CppObject * __this /* static, unused */, ASN1_t924533536 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C"  String_t* X501_ToString_m3314567798 (Il2CppObject * __this /* static, unused */, ASN1_t924533536 * ___seq0, bool ___reversed1, String_t* ___separator2, bool ___quotes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C"  void X501_AppendEntry_m768611426 (Il2CppObject * __this /* static, unused */, StringBuilder_t1221177846 * ___sb0, ASN1_t924533536 * ___entry1, bool ___quotes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
