#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/ScrollViewState
struct  ScrollViewState_t2792222924  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.GUI/ScrollViewState::apply
	bool ___apply_0;
	// System.Boolean UnityEngine.GUI/ScrollViewState::hasScrollTo
	bool ___hasScrollTo_1;

public:
	inline static int32_t get_offset_of_apply_0() { return static_cast<int32_t>(offsetof(ScrollViewState_t2792222924, ___apply_0)); }
	inline bool get_apply_0() const { return ___apply_0; }
	inline bool* get_address_of_apply_0() { return &___apply_0; }
	inline void set_apply_0(bool value)
	{
		___apply_0 = value;
	}

	inline static int32_t get_offset_of_hasScrollTo_1() { return static_cast<int32_t>(offsetof(ScrollViewState_t2792222924, ___hasScrollTo_1)); }
	inline bool get_hasScrollTo_1() const { return ___hasScrollTo_1; }
	inline bool* get_address_of_hasScrollTo_1() { return &___hasScrollTo_1; }
	inline void set_hasScrollTo_1(bool value)
	{
		___hasScrollTo_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
