#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t3166395312;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t187688763;
// System.Collections.Hashtable/HashValues
struct HashValues_t2390200547;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1980576455;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2716208158;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t909839986  : public Il2CppObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_0;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_1;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_2;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t3166395312* ___table_3;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t3030399641* ___hashes_4;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_5;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t187688763 * ___hashKeys_6;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t2390200547 * ___hashValues_7;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	Il2CppObject * ___hcpRef_8;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	Il2CppObject * ___comparerRef_9;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t228987430 * ___serializationInfo_10;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	Il2CppObject * ___equalityComparer_11;

public:
	inline static int32_t get_offset_of_inUse_0() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___inUse_0)); }
	inline int32_t get_inUse_0() const { return ___inUse_0; }
	inline int32_t* get_address_of_inUse_0() { return &___inUse_0; }
	inline void set_inUse_0(int32_t value)
	{
		___inUse_0 = value;
	}

	inline static int32_t get_offset_of_modificationCount_1() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___modificationCount_1)); }
	inline int32_t get_modificationCount_1() const { return ___modificationCount_1; }
	inline int32_t* get_address_of_modificationCount_1() { return &___modificationCount_1; }
	inline void set_modificationCount_1(int32_t value)
	{
		___modificationCount_1 = value;
	}

	inline static int32_t get_offset_of_loadFactor_2() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___loadFactor_2)); }
	inline float get_loadFactor_2() const { return ___loadFactor_2; }
	inline float* get_address_of_loadFactor_2() { return &___loadFactor_2; }
	inline void set_loadFactor_2(float value)
	{
		___loadFactor_2 = value;
	}

	inline static int32_t get_offset_of_table_3() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___table_3)); }
	inline SlotU5BU5D_t3166395312* get_table_3() const { return ___table_3; }
	inline SlotU5BU5D_t3166395312** get_address_of_table_3() { return &___table_3; }
	inline void set_table_3(SlotU5BU5D_t3166395312* value)
	{
		___table_3 = value;
		Il2CppCodeGenWriteBarrier(&___table_3, value);
	}

	inline static int32_t get_offset_of_hashes_4() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___hashes_4)); }
	inline Int32U5BU5D_t3030399641* get_hashes_4() const { return ___hashes_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_hashes_4() { return &___hashes_4; }
	inline void set_hashes_4(Int32U5BU5D_t3030399641* value)
	{
		___hashes_4 = value;
		Il2CppCodeGenWriteBarrier(&___hashes_4, value);
	}

	inline static int32_t get_offset_of_threshold_5() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___threshold_5)); }
	inline int32_t get_threshold_5() const { return ___threshold_5; }
	inline int32_t* get_address_of_threshold_5() { return &___threshold_5; }
	inline void set_threshold_5(int32_t value)
	{
		___threshold_5 = value;
	}

	inline static int32_t get_offset_of_hashKeys_6() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___hashKeys_6)); }
	inline HashKeys_t187688763 * get_hashKeys_6() const { return ___hashKeys_6; }
	inline HashKeys_t187688763 ** get_address_of_hashKeys_6() { return &___hashKeys_6; }
	inline void set_hashKeys_6(HashKeys_t187688763 * value)
	{
		___hashKeys_6 = value;
		Il2CppCodeGenWriteBarrier(&___hashKeys_6, value);
	}

	inline static int32_t get_offset_of_hashValues_7() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___hashValues_7)); }
	inline HashValues_t2390200547 * get_hashValues_7() const { return ___hashValues_7; }
	inline HashValues_t2390200547 ** get_address_of_hashValues_7() { return &___hashValues_7; }
	inline void set_hashValues_7(HashValues_t2390200547 * value)
	{
		___hashValues_7 = value;
		Il2CppCodeGenWriteBarrier(&___hashValues_7, value);
	}

	inline static int32_t get_offset_of_hcpRef_8() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___hcpRef_8)); }
	inline Il2CppObject * get_hcpRef_8() const { return ___hcpRef_8; }
	inline Il2CppObject ** get_address_of_hcpRef_8() { return &___hcpRef_8; }
	inline void set_hcpRef_8(Il2CppObject * value)
	{
		___hcpRef_8 = value;
		Il2CppCodeGenWriteBarrier(&___hcpRef_8, value);
	}

	inline static int32_t get_offset_of_comparerRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___comparerRef_9)); }
	inline Il2CppObject * get_comparerRef_9() const { return ___comparerRef_9; }
	inline Il2CppObject ** get_address_of_comparerRef_9() { return &___comparerRef_9; }
	inline void set_comparerRef_9(Il2CppObject * value)
	{
		___comparerRef_9 = value;
		Il2CppCodeGenWriteBarrier(&___comparerRef_9, value);
	}

	inline static int32_t get_offset_of_serializationInfo_10() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___serializationInfo_10)); }
	inline SerializationInfo_t228987430 * get_serializationInfo_10() const { return ___serializationInfo_10; }
	inline SerializationInfo_t228987430 ** get_address_of_serializationInfo_10() { return &___serializationInfo_10; }
	inline void set_serializationInfo_10(SerializationInfo_t228987430 * value)
	{
		___serializationInfo_10 = value;
		Il2CppCodeGenWriteBarrier(&___serializationInfo_10, value);
	}

	inline static int32_t get_offset_of_equalityComparer_11() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___equalityComparer_11)); }
	inline Il2CppObject * get_equalityComparer_11() const { return ___equalityComparer_11; }
	inline Il2CppObject ** get_address_of_equalityComparer_11() { return &___equalityComparer_11; }
	inline void set_equalityComparer_11(Il2CppObject * value)
	{
		___equalityComparer_11 = value;
		Il2CppCodeGenWriteBarrier(&___equalityComparer_11, value);
	}
};

struct Hashtable_t909839986_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t3030399641* ___primeTbl_12;

public:
	inline static int32_t get_offset_of_primeTbl_12() { return static_cast<int32_t>(offsetof(Hashtable_t909839986_StaticFields, ___primeTbl_12)); }
	inline Int32U5BU5D_t3030399641* get_primeTbl_12() const { return ___primeTbl_12; }
	inline Int32U5BU5D_t3030399641** get_address_of_primeTbl_12() { return &___primeTbl_12; }
	inline void set_primeTbl_12(Int32U5BU5D_t3030399641* value)
	{
		___primeTbl_12 = value;
		Il2CppCodeGenWriteBarrier(&___primeTbl_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
