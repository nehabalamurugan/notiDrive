#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
struct MetaQuestFeature_tE60D1D7E15470F2AFE0D77DE67D9A2759E294A2A;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8FA1D10AB7FC934874EF0A369ABDD41081342E13 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634 
{
public:
	// System.String UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::visibleName
	String_t* ___visibleName_0;
	// System.String UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::manifestName
	String_t* ___manifestName_1;
	// System.Boolean UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::enabled
	bool ___enabled_2;
	// System.Boolean UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice::active
	bool ___active_3;

public:
	inline static int32_t get_offset_of_visibleName_0() { return static_cast<int32_t>(offsetof(TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634, ___visibleName_0)); }
	inline String_t* get_visibleName_0() const { return ___visibleName_0; }
	inline String_t** get_address_of_visibleName_0() { return &___visibleName_0; }
	inline void set_visibleName_0(String_t* value)
	{
		___visibleName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visibleName_0), (void*)value);
	}

	inline static int32_t get_offset_of_manifestName_1() { return static_cast<int32_t>(offsetof(TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634, ___manifestName_1)); }
	inline String_t* get_manifestName_1() const { return ___manifestName_1; }
	inline String_t** get_address_of_manifestName_1() { return &___manifestName_1; }
	inline void set_manifestName_1(String_t* value)
	{
		___manifestName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___manifestName_1), (void*)value);
	}

	inline static int32_t get_offset_of_enabled_2() { return static_cast<int32_t>(offsetof(TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634, ___enabled_2)); }
	inline bool get_enabled_2() const { return ___enabled_2; }
	inline bool* get_address_of_enabled_2() { return &___enabled_2; }
	inline void set_enabled_2(bool value)
	{
		___enabled_2 = value;
	}

	inline static int32_t get_offset_of_active_3() { return static_cast<int32_t>(offsetof(TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634, ___active_3)); }
	inline bool get_active_3() const { return ___active_3; }
	inline bool* get_address_of_active_3() { return &___active_3; }
	inline void set_active_3(bool value)
	{
		___active_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshaled_pinvoke
{
	char* ___visibleName_0;
	char* ___manifestName_1;
	int32_t ___enabled_2;
	int32_t ___active_3;
};
// Native definition for COM marshalling of UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
struct TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshaled_com
{
	Il2CppChar* ___visibleName_0;
	Il2CppChar* ___manifestName_1;
	int32_t ___enabled_2;
	int32_t ___active_3;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::internalFieldsUpdated
	bool ___internalFieldsUpdated_14;

public:
	inline static int32_t get_offset_of_m_enabled_4() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___m_enabled_4)); }
	inline bool get_m_enabled_4() const { return ___m_enabled_4; }
	inline bool* get_address_of_m_enabled_4() { return &___m_enabled_4; }
	inline void set_m_enabled_4(bool value)
	{
		___m_enabled_4 = value;
	}

	inline static int32_t get_offset_of_U3CfailedInitializationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___U3CfailedInitializationU3Ek__BackingField_5)); }
	inline bool get_U3CfailedInitializationU3Ek__BackingField_5() const { return ___U3CfailedInitializationU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CfailedInitializationU3Ek__BackingField_5() { return &___U3CfailedInitializationU3Ek__BackingField_5; }
	inline void set_U3CfailedInitializationU3Ek__BackingField_5(bool value)
	{
		___U3CfailedInitializationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_nameUi_7() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___nameUi_7)); }
	inline String_t* get_nameUi_7() const { return ___nameUi_7; }
	inline String_t** get_address_of_nameUi_7() { return &___nameUi_7; }
	inline void set_nameUi_7(String_t* value)
	{
		___nameUi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameUi_7), (void*)value);
	}

	inline static int32_t get_offset_of_version_8() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___version_8)); }
	inline String_t* get_version_8() const { return ___version_8; }
	inline String_t** get_address_of_version_8() { return &___version_8; }
	inline void set_version_8(String_t* value)
	{
		___version_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_8), (void*)value);
	}

	inline static int32_t get_offset_of_featureIdInternal_9() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___featureIdInternal_9)); }
	inline String_t* get_featureIdInternal_9() const { return ___featureIdInternal_9; }
	inline String_t** get_address_of_featureIdInternal_9() { return &___featureIdInternal_9; }
	inline void set_featureIdInternal_9(String_t* value)
	{
		___featureIdInternal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___featureIdInternal_9), (void*)value);
	}

	inline static int32_t get_offset_of_openxrExtensionStrings_10() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___openxrExtensionStrings_10)); }
	inline String_t* get_openxrExtensionStrings_10() const { return ___openxrExtensionStrings_10; }
	inline String_t** get_address_of_openxrExtensionStrings_10() { return &___openxrExtensionStrings_10; }
	inline void set_openxrExtensionStrings_10(String_t* value)
	{
		___openxrExtensionStrings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openxrExtensionStrings_10), (void*)value);
	}

	inline static int32_t get_offset_of_company_11() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___company_11)); }
	inline String_t* get_company_11() const { return ___company_11; }
	inline String_t** get_address_of_company_11() { return &___company_11; }
	inline void set_company_11(String_t* value)
	{
		___company_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___company_11), (void*)value);
	}

	inline static int32_t get_offset_of_priority_12() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___priority_12)); }
	inline int32_t get_priority_12() const { return ___priority_12; }
	inline int32_t* get_address_of_priority_12() { return &___priority_12; }
	inline void set_priority_12(int32_t value)
	{
		___priority_12 = value;
	}

	inline static int32_t get_offset_of_required_13() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___required_13)); }
	inline bool get_required_13() const { return ___required_13; }
	inline bool* get_address_of_required_13() { return &___required_13; }
	inline void set_required_13(bool value)
	{
		___required_13 = value;
	}

	inline static int32_t get_offset_of_internalFieldsUpdated_14() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA, ___internalFieldsUpdated_14)); }
	inline bool get_internalFieldsUpdated_14() const { return ___internalFieldsUpdated_14; }
	inline bool* get_address_of_internalFieldsUpdated_14() { return &___internalFieldsUpdated_14; }
	inline void set_internalFieldsUpdated_14(bool value)
	{
		___internalFieldsUpdated_14 = value;
	}
};

struct OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields
{
public:
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA_StaticFields, ___U3CrequiredFeatureFailedU3Ek__BackingField_6)); }
	inline bool get_U3CrequiredFeatureFailedU3Ek__BackingField_6() const { return ___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CrequiredFeatureFailedU3Ek__BackingField_6() { return &___U3CrequiredFeatureFailedU3Ek__BackingField_6; }
	inline void set_U3CrequiredFeatureFailedU3Ek__BackingField_6(bool value)
	{
		___U3CrequiredFeatureFailedU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
struct MetaQuestFeature_tE60D1D7E15470F2AFE0D77DE67D9A2759E294A2A  : public OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068 (OpenXRFeature_tBDE19E44A01E5E54925EAF67574691F11E88CDAA * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaQuestFeature__ctor_m48B63FF97DD4FB5033AAE7EB87E3942437F3CE63 (MetaQuestFeature_tE60D1D7E15470F2AFE0D77DE67D9A2759E294A2A * __this, const RuntimeMethod* method)
{
	{
		OpenXRFeature__ctor_mE2EE89538F7C55FF00937214A625B1B7E3499068(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
IL2CPP_EXTERN_C void TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshal_pinvoke(const TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634& unmarshaled, TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshaled_pinvoke& marshaled)
{
	marshaled.___visibleName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_visibleName_0());
	marshaled.___manifestName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_manifestName_1());
	marshaled.___enabled_2 = static_cast<int32_t>(unmarshaled.get_enabled_2());
	marshaled.___active_3 = static_cast<int32_t>(unmarshaled.get_active_3());
}
IL2CPP_EXTERN_C void TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshal_pinvoke_back(const TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshaled_pinvoke& marshaled, TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634& unmarshaled)
{
	unmarshaled.set_visibleName_0(il2cpp_codegen_marshal_string_result(marshaled.___visibleName_0));
	unmarshaled.set_manifestName_1(il2cpp_codegen_marshal_string_result(marshaled.___manifestName_1));
	bool unmarshaled_enabled_temp_2 = false;
	unmarshaled_enabled_temp_2 = static_cast<bool>(marshaled.___enabled_2);
	unmarshaled.set_enabled_2(unmarshaled_enabled_temp_2);
	bool unmarshaled_active_temp_3 = false;
	unmarshaled_active_temp_3 = static_cast<bool>(marshaled.___active_3);
	unmarshaled.set_active_3(unmarshaled_active_temp_3);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
IL2CPP_EXTERN_C void TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshal_pinvoke_cleanup(TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___visibleName_0);
	marshaled.___visibleName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___manifestName_1);
	marshaled.___manifestName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
IL2CPP_EXTERN_C void TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshal_com(const TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634& unmarshaled, TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshaled_com& marshaled)
{
	marshaled.___visibleName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_visibleName_0());
	marshaled.___manifestName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_manifestName_1());
	marshaled.___enabled_2 = static_cast<int32_t>(unmarshaled.get_enabled_2());
	marshaled.___active_3 = static_cast<int32_t>(unmarshaled.get_active_3());
}
IL2CPP_EXTERN_C void TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshal_com_back(const TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshaled_com& marshaled, TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634& unmarshaled)
{
	unmarshaled.set_visibleName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___visibleName_0));
	unmarshaled.set_manifestName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___manifestName_1));
	bool unmarshaled_enabled_temp_2 = false;
	unmarshaled_enabled_temp_2 = static_cast<bool>(marshaled.___enabled_2);
	unmarshaled.set_enabled_2(unmarshaled_enabled_temp_2);
	bool unmarshaled_active_temp_3 = false;
	unmarshaled_active_temp_3 = static_cast<bool>(marshaled.___active_3);
	unmarshaled.set_active_3(unmarshaled_active_temp_3);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature/TargetDevice
IL2CPP_EXTERN_C void TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshal_com_cleanup(TargetDevice_tB0425E797AB46CCA973879C983DE3491CAC1B634_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___visibleName_0);
	marshaled.___visibleName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___manifestName_1);
	marshaled.___manifestName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
