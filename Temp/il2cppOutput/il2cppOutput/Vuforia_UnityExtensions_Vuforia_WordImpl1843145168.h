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

#include "Vuforia_UnityExtensions_Vuforia_TrackableImpl3421455115.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WordImpl
struct  WordImpl_t1843145168  : public TrackableImpl_t3421455115
{
public:
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t2243707579  ___mSize_3;

public:
	inline static int32_t get_offset_of_mText_2() { return static_cast<int32_t>(offsetof(WordImpl_t1843145168, ___mText_2)); }
	inline String_t* get_mText_2() const { return ___mText_2; }
	inline String_t** get_address_of_mText_2() { return &___mText_2; }
	inline void set_mText_2(String_t* value)
	{
		___mText_2 = value;
		Il2CppCodeGenWriteBarrier(&___mText_2, value);
	}

	inline static int32_t get_offset_of_mSize_3() { return static_cast<int32_t>(offsetof(WordImpl_t1843145168, ___mSize_3)); }
	inline Vector2_t2243707579  get_mSize_3() const { return ___mSize_3; }
	inline Vector2_t2243707579 * get_address_of_mSize_3() { return &___mSize_3; }
	inline void set_mSize_3(Vector2_t2243707579  value)
	{
		___mSize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
