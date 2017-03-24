#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t62501539;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2260454664;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t2281509423  : public Il2CppObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t3030399641* ___table_0;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t62501539* ___linkSlots_1;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ObjectU5BU5D_t3614634134* ___keySlots_2;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t3614634134* ___valueSlots_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_5;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_6;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_7;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	Il2CppObject* ___hcp_8;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t228987430 * ___serialization_info_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_10;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___table_0)); }
	inline Int32U5BU5D_t3030399641* get_table_0() const { return ___table_0; }
	inline Int32U5BU5D_t3030399641** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Int32U5BU5D_t3030399641* value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier(&___table_0, value);
	}

	inline static int32_t get_offset_of_linkSlots_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___linkSlots_1)); }
	inline LinkU5BU5D_t62501539* get_linkSlots_1() const { return ___linkSlots_1; }
	inline LinkU5BU5D_t62501539** get_address_of_linkSlots_1() { return &___linkSlots_1; }
	inline void set_linkSlots_1(LinkU5BU5D_t62501539* value)
	{
		___linkSlots_1 = value;
		Il2CppCodeGenWriteBarrier(&___linkSlots_1, value);
	}

	inline static int32_t get_offset_of_keySlots_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___keySlots_2)); }
	inline ObjectU5BU5D_t3614634134* get_keySlots_2() const { return ___keySlots_2; }
	inline ObjectU5BU5D_t3614634134** get_address_of_keySlots_2() { return &___keySlots_2; }
	inline void set_keySlots_2(ObjectU5BU5D_t3614634134* value)
	{
		___keySlots_2 = value;
		Il2CppCodeGenWriteBarrier(&___keySlots_2, value);
	}

	inline static int32_t get_offset_of_valueSlots_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___valueSlots_3)); }
	inline ObjectU5BU5D_t3614634134* get_valueSlots_3() const { return ___valueSlots_3; }
	inline ObjectU5BU5D_t3614634134** get_address_of_valueSlots_3() { return &___valueSlots_3; }
	inline void set_valueSlots_3(ObjectU5BU5D_t3614634134* value)
	{
		___valueSlots_3 = value;
		Il2CppCodeGenWriteBarrier(&___valueSlots_3, value);
	}

	inline static int32_t get_offset_of_touchedSlots_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___touchedSlots_4)); }
	inline int32_t get_touchedSlots_4() const { return ___touchedSlots_4; }
	inline int32_t* get_address_of_touchedSlots_4() { return &___touchedSlots_4; }
	inline void set_touchedSlots_4(int32_t value)
	{
		___touchedSlots_4 = value;
	}

	inline static int32_t get_offset_of_emptySlot_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___emptySlot_5)); }
	inline int32_t get_emptySlot_5() const { return ___emptySlot_5; }
	inline int32_t* get_address_of_emptySlot_5() { return &___emptySlot_5; }
	inline void set_emptySlot_5(int32_t value)
	{
		___emptySlot_5 = value;
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of_threshold_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___threshold_7)); }
	inline int32_t get_threshold_7() const { return ___threshold_7; }
	inline int32_t* get_address_of_threshold_7() { return &___threshold_7; }
	inline void set_threshold_7(int32_t value)
	{
		___threshold_7 = value;
	}

	inline static int32_t get_offset_of_hcp_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___hcp_8)); }
	inline Il2CppObject* get_hcp_8() const { return ___hcp_8; }
	inline Il2CppObject** get_address_of_hcp_8() { return &___hcp_8; }
	inline void set_hcp_8(Il2CppObject* value)
	{
		___hcp_8 = value;
		Il2CppCodeGenWriteBarrier(&___hcp_8, value);
	}

	inline static int32_t get_offset_of_serialization_info_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___serialization_info_9)); }
	inline SerializationInfo_t228987430 * get_serialization_info_9() const { return ___serialization_info_9; }
	inline SerializationInfo_t228987430 ** get_address_of_serialization_info_9() { return &___serialization_info_9; }
	inline void set_serialization_info_9(SerializationInfo_t228987430 * value)
	{
		___serialization_info_9 = value;
		Il2CppCodeGenWriteBarrier(&___serialization_info_9, value);
	}

	inline static int32_t get_offset_of_generation_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423, ___generation_10)); }
	inline int32_t get_generation_10() const { return ___generation_10; }
	inline int32_t* get_address_of_generation_10() { return &___generation_10; }
	inline void set_generation_10(int32_t value)
	{
		___generation_10 = value;
	}
};

struct Dictionary_2_t2281509423_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2260454664 * ___U3CU3Ef__amU24cacheB_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2281509423_StaticFields, ___U3CU3Ef__amU24cacheB_11)); }
	inline Transform_1_t2260454664 * get_U3CU3Ef__amU24cacheB_11() const { return ___U3CU3Ef__amU24cacheB_11; }
	inline Transform_1_t2260454664 ** get_address_of_U3CU3Ef__amU24cacheB_11() { return &___U3CU3Ef__amU24cacheB_11; }
	inline void set_U3CU3Ef__amU24cacheB_11(Transform_1_t2260454664 * value)
	{
		___U3CU3Ef__amU24cacheB_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
