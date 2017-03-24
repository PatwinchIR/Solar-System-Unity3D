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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EarthSystemController
struct  EarthSystemController_t235746441  : public MonoBehaviour_t1158329972
{
public:
	// System.Single EarthSystemController::radius
	float ___radius_2;
	// System.Single EarthSystemController::speed
	float ___speed_3;
	// System.Single EarthSystemController::selfSpeed
	float ___selfSpeed_4;
	// UnityEngine.Transform EarthSystemController::Earth
	Transform_t3275118058 * ___Earth_5;

public:
	inline static int32_t get_offset_of_radius_2() { return static_cast<int32_t>(offsetof(EarthSystemController_t235746441, ___radius_2)); }
	inline float get_radius_2() const { return ___radius_2; }
	inline float* get_address_of_radius_2() { return &___radius_2; }
	inline void set_radius_2(float value)
	{
		___radius_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(EarthSystemController_t235746441, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_selfSpeed_4() { return static_cast<int32_t>(offsetof(EarthSystemController_t235746441, ___selfSpeed_4)); }
	inline float get_selfSpeed_4() const { return ___selfSpeed_4; }
	inline float* get_address_of_selfSpeed_4() { return &___selfSpeed_4; }
	inline void set_selfSpeed_4(float value)
	{
		___selfSpeed_4 = value;
	}

	inline static int32_t get_offset_of_Earth_5() { return static_cast<int32_t>(offsetof(EarthSystemController_t235746441, ___Earth_5)); }
	inline Transform_t3275118058 * get_Earth_5() const { return ___Earth_5; }
	inline Transform_t3275118058 ** get_address_of_Earth_5() { return &___Earth_5; }
	inline void set_Earth_5(Transform_t3275118058 * value)
	{
		___Earth_5 = value;
		Il2CppCodeGenWriteBarrier(&___Earth_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
