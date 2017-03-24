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

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.BitConverter::.cctor()
extern "C"  void BitConverter__cctor_m2650018227 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
extern "C"  bool BitConverter_AmILittleEndian_m2716658112 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
extern "C"  bool BitConverter_DoubleWordsAreSwapped_m2697726202 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
extern "C"  int64_t BitConverter_DoubleToInt64Bits_m3672024538 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m252990073 (Il2CppObject * __this /* static, unused */, uint8_t* ___ptr0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
extern "C"  ByteU5BU5D_t3397334013* BitConverter_GetBytes_m4115681617 (Il2CppObject * __this /* static, unused */, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
extern "C"  void BitConverter_PutBytes_m1441606178 (Il2CppObject * __this /* static, unused */, uint8_t* ___dst0, ByteU5BU5D_t3397334013* ___src1, int32_t ___start_index2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C"  int64_t BitConverter_ToInt64_m1329623425 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
extern "C"  String_t* BitConverter_ToString_m927173850 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
extern "C"  String_t* BitConverter_ToString_m2246696988 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___value0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
