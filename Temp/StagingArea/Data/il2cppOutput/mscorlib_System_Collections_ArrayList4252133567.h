#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object[]
struct ObjectU5BU5D_t3614634134;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t4252133567  : public Il2CppObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_0;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3614634134* ____items_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__size_0() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567, ____size_0)); }
	inline int32_t get__size_0() const { return ____size_0; }
	inline int32_t* get_address_of__size_0() { return &____size_0; }
	inline void set__size_0(int32_t value)
	{
		____size_0 = value;
	}

	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567, ____items_1)); }
	inline ObjectU5BU5D_t3614634134* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3614634134* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier(&____items_1, value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

struct ArrayList_t4252133567_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t3614634134* ___EmptyArray_3;

public:
	inline static int32_t get_offset_of_EmptyArray_3() { return static_cast<int32_t>(offsetof(ArrayList_t4252133567_StaticFields, ___EmptyArray_3)); }
	inline ObjectU5BU5D_t3614634134* get_EmptyArray_3() const { return ___EmptyArray_3; }
	inline ObjectU5BU5D_t3614634134** get_address_of_EmptyArray_3() { return &___EmptyArray_3; }
	inline void set_EmptyArray_3(ObjectU5BU5D_t3614634134* value)
	{
		___EmptyArray_3 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
