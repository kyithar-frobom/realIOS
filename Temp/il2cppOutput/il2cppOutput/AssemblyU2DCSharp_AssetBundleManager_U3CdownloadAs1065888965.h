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
// UnityEngine.WWW
struct WWW_t2919945039;
// AssetBundleManager/AssetBundleRef
struct AssetBundleRef_t1193289027;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AssetBundleManager/<downloadAssetBundle>c__Iterator0
struct  U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965  : public Il2CppObject
{
public:
	// System.String AssetBundleManager/<downloadAssetBundle>c__Iterator0::url
	String_t* ___url_0;
	// System.Int32 AssetBundleManager/<downloadAssetBundle>c__Iterator0::version
	int32_t ___version_1;
	// System.String AssetBundleManager/<downloadAssetBundle>c__Iterator0::<keyName>__0
	String_t* ___U3CkeyNameU3E__0_2;
	// UnityEngine.WWW AssetBundleManager/<downloadAssetBundle>c__Iterator0::<www>__1
	WWW_t2919945039 * ___U3CwwwU3E__1_3;
	// AssetBundleManager/AssetBundleRef AssetBundleManager/<downloadAssetBundle>c__Iterator0::<abRef>__2
	AssetBundleRef_t1193289027 * ___U3CabRefU3E__2_4;
	// System.Object AssetBundleManager/<downloadAssetBundle>c__Iterator0::$current
	Il2CppObject * ___U24current_5;
	// System.Boolean AssetBundleManager/<downloadAssetBundle>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 AssetBundleManager/<downloadAssetBundle>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_url_0() { return static_cast<int32_t>(offsetof(U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965, ___url_0)); }
	inline String_t* get_url_0() const { return ___url_0; }
	inline String_t** get_address_of_url_0() { return &___url_0; }
	inline void set_url_0(String_t* value)
	{
		___url_0 = value;
		Il2CppCodeGenWriteBarrier(&___url_0, value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_U3CkeyNameU3E__0_2() { return static_cast<int32_t>(offsetof(U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965, ___U3CkeyNameU3E__0_2)); }
	inline String_t* get_U3CkeyNameU3E__0_2() const { return ___U3CkeyNameU3E__0_2; }
	inline String_t** get_address_of_U3CkeyNameU3E__0_2() { return &___U3CkeyNameU3E__0_2; }
	inline void set_U3CkeyNameU3E__0_2(String_t* value)
	{
		___U3CkeyNameU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CkeyNameU3E__0_2, value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E__1_3() { return static_cast<int32_t>(offsetof(U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965, ___U3CwwwU3E__1_3)); }
	inline WWW_t2919945039 * get_U3CwwwU3E__1_3() const { return ___U3CwwwU3E__1_3; }
	inline WWW_t2919945039 ** get_address_of_U3CwwwU3E__1_3() { return &___U3CwwwU3E__1_3; }
	inline void set_U3CwwwU3E__1_3(WWW_t2919945039 * value)
	{
		___U3CwwwU3E__1_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CwwwU3E__1_3, value);
	}

	inline static int32_t get_offset_of_U3CabRefU3E__2_4() { return static_cast<int32_t>(offsetof(U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965, ___U3CabRefU3E__2_4)); }
	inline AssetBundleRef_t1193289027 * get_U3CabRefU3E__2_4() const { return ___U3CabRefU3E__2_4; }
	inline AssetBundleRef_t1193289027 ** get_address_of_U3CabRefU3E__2_4() { return &___U3CabRefU3E__2_4; }
	inline void set_U3CabRefU3E__2_4(AssetBundleRef_t1193289027 * value)
	{
		___U3CabRefU3E__2_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CabRefU3E__2_4, value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965, ___U24current_5)); }
	inline Il2CppObject * get_U24current_5() const { return ___U24current_5; }
	inline Il2CppObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(Il2CppObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_5, value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CdownloadAssetBundleU3Ec__Iterator0_t1065888965, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
