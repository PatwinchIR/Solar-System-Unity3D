#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZoomTarget
struct  ZoomTarget_t2910698758  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ZoomTarget::target
	Transform_t3275118058 * ___target_2;
	// System.Single ZoomTarget::smoothTime
	float ___smoothTime_3;
	// UnityEngine.Vector3 ZoomTarget::velocity
	Vector3_t2243707580  ___velocity_4;
	// System.Single ZoomTarget::turnSpeed
	float ___turnSpeed_8;
	// System.Single ZoomTarget::panSpeed
	float ___panSpeed_9;
	// System.Single ZoomTarget::zoomSpeed
	float ___zoomSpeed_10;
	// UnityEngine.Vector3 ZoomTarget::mouseOrigin
	Vector3_t2243707580  ___mouseOrigin_11;
	// System.Boolean ZoomTarget::isPanning
	bool ___isPanning_12;
	// System.Boolean ZoomTarget::isRotating
	bool ___isRotating_13;
	// System.Boolean ZoomTarget::isZooming
	bool ___isZooming_14;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_smoothTime_3() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___smoothTime_3)); }
	inline float get_smoothTime_3() const { return ___smoothTime_3; }
	inline float* get_address_of_smoothTime_3() { return &___smoothTime_3; }
	inline void set_smoothTime_3(float value)
	{
		___smoothTime_3 = value;
	}

	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___velocity_4)); }
	inline Vector3_t2243707580  get_velocity_4() const { return ___velocity_4; }
	inline Vector3_t2243707580 * get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(Vector3_t2243707580  value)
	{
		___velocity_4 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_8() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___turnSpeed_8)); }
	inline float get_turnSpeed_8() const { return ___turnSpeed_8; }
	inline float* get_address_of_turnSpeed_8() { return &___turnSpeed_8; }
	inline void set_turnSpeed_8(float value)
	{
		___turnSpeed_8 = value;
	}

	inline static int32_t get_offset_of_panSpeed_9() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___panSpeed_9)); }
	inline float get_panSpeed_9() const { return ___panSpeed_9; }
	inline float* get_address_of_panSpeed_9() { return &___panSpeed_9; }
	inline void set_panSpeed_9(float value)
	{
		___panSpeed_9 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_10() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___zoomSpeed_10)); }
	inline float get_zoomSpeed_10() const { return ___zoomSpeed_10; }
	inline float* get_address_of_zoomSpeed_10() { return &___zoomSpeed_10; }
	inline void set_zoomSpeed_10(float value)
	{
		___zoomSpeed_10 = value;
	}

	inline static int32_t get_offset_of_mouseOrigin_11() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___mouseOrigin_11)); }
	inline Vector3_t2243707580  get_mouseOrigin_11() const { return ___mouseOrigin_11; }
	inline Vector3_t2243707580 * get_address_of_mouseOrigin_11() { return &___mouseOrigin_11; }
	inline void set_mouseOrigin_11(Vector3_t2243707580  value)
	{
		___mouseOrigin_11 = value;
	}

	inline static int32_t get_offset_of_isPanning_12() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___isPanning_12)); }
	inline bool get_isPanning_12() const { return ___isPanning_12; }
	inline bool* get_address_of_isPanning_12() { return &___isPanning_12; }
	inline void set_isPanning_12(bool value)
	{
		___isPanning_12 = value;
	}

	inline static int32_t get_offset_of_isRotating_13() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___isRotating_13)); }
	inline bool get_isRotating_13() const { return ___isRotating_13; }
	inline bool* get_address_of_isRotating_13() { return &___isRotating_13; }
	inline void set_isRotating_13(bool value)
	{
		___isRotating_13 = value;
	}

	inline static int32_t get_offset_of_isZooming_14() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758, ___isZooming_14)); }
	inline bool get_isZooming_14() const { return ___isZooming_14; }
	inline bool* get_address_of_isZooming_14() { return &___isZooming_14; }
	inline void set_isZooming_14(bool value)
	{
		___isZooming_14 = value;
	}
};

struct ZoomTarget_t2910698758_StaticFields
{
public:
	// System.Boolean ZoomTarget::zoom
	bool ___zoom_5;
	// System.Int32 ZoomTarget::target_tag
	int32_t ___target_tag_6;
	// System.String ZoomTarget::target_string
	String_t* ___target_string_7;

public:
	inline static int32_t get_offset_of_zoom_5() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758_StaticFields, ___zoom_5)); }
	inline bool get_zoom_5() const { return ___zoom_5; }
	inline bool* get_address_of_zoom_5() { return &___zoom_5; }
	inline void set_zoom_5(bool value)
	{
		___zoom_5 = value;
	}

	inline static int32_t get_offset_of_target_tag_6() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758_StaticFields, ___target_tag_6)); }
	inline int32_t get_target_tag_6() const { return ___target_tag_6; }
	inline int32_t* get_address_of_target_tag_6() { return &___target_tag_6; }
	inline void set_target_tag_6(int32_t value)
	{
		___target_tag_6 = value;
	}

	inline static int32_t get_offset_of_target_string_7() { return static_cast<int32_t>(offsetof(ZoomTarget_t2910698758_StaticFields, ___target_string_7)); }
	inline String_t* get_target_string_7() const { return ___target_string_7; }
	inline String_t** get_address_of_target_string_7() { return &___target_string_7; }
	inline void set_target_string_7(String_t* value)
	{
		___target_string_7 = value;
		Il2CppCodeGenWriteBarrier(&___target_string_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
