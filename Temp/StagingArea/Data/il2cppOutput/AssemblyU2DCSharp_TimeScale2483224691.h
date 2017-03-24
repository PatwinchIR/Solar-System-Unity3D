#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimeScale
struct  TimeScale_t2483224691  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimeScale::timeScale
	float ___timeScale_2;
	// UnityEngine.GUIStyle TimeScale::styleHeader
	GUIStyle_t1799908754 * ___styleHeader_5;

public:
	inline static int32_t get_offset_of_timeScale_2() { return static_cast<int32_t>(offsetof(TimeScale_t2483224691, ___timeScale_2)); }
	inline float get_timeScale_2() const { return ___timeScale_2; }
	inline float* get_address_of_timeScale_2() { return &___timeScale_2; }
	inline void set_timeScale_2(float value)
	{
		___timeScale_2 = value;
	}

	inline static int32_t get_offset_of_styleHeader_5() { return static_cast<int32_t>(offsetof(TimeScale_t2483224691, ___styleHeader_5)); }
	inline GUIStyle_t1799908754 * get_styleHeader_5() const { return ___styleHeader_5; }
	inline GUIStyle_t1799908754 ** get_address_of_styleHeader_5() { return &___styleHeader_5; }
	inline void set_styleHeader_5(GUIStyle_t1799908754 * value)
	{
		___styleHeader_5 = value;
		Il2CppCodeGenWriteBarrier(&___styleHeader_5, value);
	}
};

struct TimeScale_t2483224691_StaticFields
{
public:
	// System.String TimeScale::header
	String_t* ___header_3;
	// System.String TimeScale::info
	String_t* ___info_4;

public:
	inline static int32_t get_offset_of_header_3() { return static_cast<int32_t>(offsetof(TimeScale_t2483224691_StaticFields, ___header_3)); }
	inline String_t* get_header_3() const { return ___header_3; }
	inline String_t** get_address_of_header_3() { return &___header_3; }
	inline void set_header_3(String_t* value)
	{
		___header_3 = value;
		Il2CppCodeGenWriteBarrier(&___header_3, value);
	}

	inline static int32_t get_offset_of_info_4() { return static_cast<int32_t>(offsetof(TimeScale_t2483224691_StaticFields, ___info_4)); }
	inline String_t* get_info_4() const { return ___info_4; }
	inline String_t** get_address_of_info_4() { return &___info_4; }
	inline void set_info_4(String_t* value)
	{
		___info_4 = value;
		Il2CppCodeGenWriteBarrier(&___info_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
