#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent>
struct Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616;
// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49;
// System.Lazy`1<UnityEngine.Rendering.VolumeManager>
struct Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A;
// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t6331523A19E51FB87CA899920C03B10A48A562B0;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter>
struct ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>[]
struct EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource[]
struct IRenderGraphResourceU5BU5D_tDA418E4DA02A060158EDE9260A8B3305AA1DE7CE;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF;
// UnityEngine.Rendering.Volume[]
struct VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288;
// UnityEngine.Rendering.VolumeComponent[]
struct VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D;
// UnityEngine.ISubsystem
struct ISubsystem_t64464AB5EA37383499172853FA932A96C7841789;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.Volume
struct Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E;
// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E;
// UnityEngine.Rendering.VolumeManager
struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181;
// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB;
// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tF2FA3C3EF12CF61BE1A292070F6C8B355CEBAC8D;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback
struct ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8CB80146D2C247B4315AB7A79C5C67E08F862EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mABDDF60E8F19169E888E02538B13268ED5437019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA3116811637BD8A6782E26B6B9155243CB275B6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mF6CDBE3B7E4118B28D15C20B1CA3DE54A23AB9FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m45BF02C8D0C22798BED29BCA0C5470C01CB2A015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC656FDD32134143E231CE6A866E81702847EFAB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mE0D1F096640F75B4F55E85582A564357F3CEB76D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m93C7B2BDE59324C3FFA08FD3FD69981082CACD94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m86F64A1D37EF87FBFCC6BEFFE32C2BE4381B600B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m166497E66EA562EAF3395D3553053404165F9EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m2189383EFC9B6FD4F9BB5C82B256D4A4AD78AE12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___entries_1)); }
	inline EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___keys_7)); }
	inline KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___values_8)); }
	inline ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___entries_1)); }
	inline EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t3AFED47D4D21250F38CAB7868BA0FBB84D99C302* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___keys_7)); }
	inline KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA78C44CE4ECC5E36F9D102D66F5C337E0EB0CF49 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ___values_8)); }
	inline ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7427E2A255085073429A560EED6DE8F510FA74F1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616  : public RuntimeObject
{
public:
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	IRenderGraphResourceU5BU5D_tDA418E4DA02A060158EDE9260A8B3305AA1DE7CE* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616, ___m_Array_0)); }
	inline IRenderGraphResourceU5BU5D_tDA418E4DA02A060158EDE9260A8B3305AA1DE7CE* get_m_Array_0() const { return ___m_Array_0; }
	inline IRenderGraphResourceU5BU5D_tDA418E4DA02A060158EDE9260A8B3305AA1DE7CE** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(IRenderGraphResourceU5BU5D_tDA418E4DA02A060158EDE9260A8B3305AA1DE7CE* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsizeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616, ___U3CsizeU3Ek__BackingField_1)); }
	inline int32_t get_U3CsizeU3Ek__BackingField_1() const { return ___U3CsizeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CsizeU3Ek__BackingField_1() { return &___U3CsizeU3Ek__BackingField_1; }
	inline void set_U3CsizeU3Ek__BackingField_1(int32_t value)
	{
		___U3CsizeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.Rendering.DynamicArray`1<System.Object>
struct DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D  : public RuntimeObject
{
public:
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D, ___m_Array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_Array_0() const { return ___m_Array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsizeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D, ___U3CsizeU3Ek__BackingField_1)); }
	inline int32_t get_U3CsizeU3Ek__BackingField_1() const { return ___U3CsizeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CsizeU3Ek__BackingField_1() { return &___U3CsizeU3Ek__BackingField_1; }
	inline void set_U3CsizeU3Ek__BackingField_1(int32_t value)
	{
		___U3CsizeU3Ek__BackingField_1 = value;
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____items_1)); }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* get__items_1() const { return ____items_1; }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A_StaticFields, ____emptyArray_5)); }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____items_1)); }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* get__items_1() const { return ____items_1; }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_StaticFields, ____emptyArray_5)); }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::imported
	bool ___imported_0;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::shared
	bool ___shared_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedExplicitRelease
	bool ___sharedExplicitRelease_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::requestFallBack
	bool ___requestFallBack_3;
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::writeCount
	uint32_t ___writeCount_4;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::cachedHash
	int32_t ___cachedHash_5;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::transientPassIndex
	int32_t ___transientPassIndex_6;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedResourceLastFrameUsed
	int32_t ___sharedResourceLastFrameUsed_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::m_Pool
	IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * ___m_Pool_8;

public:
	inline static int32_t get_offset_of_imported_0() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___imported_0)); }
	inline bool get_imported_0() const { return ___imported_0; }
	inline bool* get_address_of_imported_0() { return &___imported_0; }
	inline void set_imported_0(bool value)
	{
		___imported_0 = value;
	}

	inline static int32_t get_offset_of_shared_1() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___shared_1)); }
	inline bool get_shared_1() const { return ___shared_1; }
	inline bool* get_address_of_shared_1() { return &___shared_1; }
	inline void set_shared_1(bool value)
	{
		___shared_1 = value;
	}

	inline static int32_t get_offset_of_sharedExplicitRelease_2() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___sharedExplicitRelease_2)); }
	inline bool get_sharedExplicitRelease_2() const { return ___sharedExplicitRelease_2; }
	inline bool* get_address_of_sharedExplicitRelease_2() { return &___sharedExplicitRelease_2; }
	inline void set_sharedExplicitRelease_2(bool value)
	{
		___sharedExplicitRelease_2 = value;
	}

	inline static int32_t get_offset_of_requestFallBack_3() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___requestFallBack_3)); }
	inline bool get_requestFallBack_3() const { return ___requestFallBack_3; }
	inline bool* get_address_of_requestFallBack_3() { return &___requestFallBack_3; }
	inline void set_requestFallBack_3(bool value)
	{
		___requestFallBack_3 = value;
	}

	inline static int32_t get_offset_of_writeCount_4() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___writeCount_4)); }
	inline uint32_t get_writeCount_4() const { return ___writeCount_4; }
	inline uint32_t* get_address_of_writeCount_4() { return &___writeCount_4; }
	inline void set_writeCount_4(uint32_t value)
	{
		___writeCount_4 = value;
	}

	inline static int32_t get_offset_of_cachedHash_5() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___cachedHash_5)); }
	inline int32_t get_cachedHash_5() const { return ___cachedHash_5; }
	inline int32_t* get_address_of_cachedHash_5() { return &___cachedHash_5; }
	inline void set_cachedHash_5(int32_t value)
	{
		___cachedHash_5 = value;
	}

	inline static int32_t get_offset_of_transientPassIndex_6() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___transientPassIndex_6)); }
	inline int32_t get_transientPassIndex_6() const { return ___transientPassIndex_6; }
	inline int32_t* get_address_of_transientPassIndex_6() { return &___transientPassIndex_6; }
	inline void set_transientPassIndex_6(int32_t value)
	{
		___transientPassIndex_6 = value;
	}

	inline static int32_t get_offset_of_sharedResourceLastFrameUsed_7() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___sharedResourceLastFrameUsed_7)); }
	inline int32_t get_sharedResourceLastFrameUsed_7() const { return ___sharedResourceLastFrameUsed_7; }
	inline int32_t* get_address_of_sharedResourceLastFrameUsed_7() { return &___sharedResourceLastFrameUsed_7; }
	inline void set_sharedResourceLastFrameUsed_7(int32_t value)
	{
		___sharedResourceLastFrameUsed_7 = value;
	}

	inline static int32_t get_offset_of_m_Pool_8() { return static_cast<int32_t>(offsetof(IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7, ___m_Pool_8)); }
	inline IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * get_m_Pool_8() const { return ___m_Pool_8; }
	inline IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D ** get_address_of_m_Pool_8() { return &___m_Pool_8; }
	inline void set_m_Pool_8(IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * value)
	{
		___m_Pool_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pool_8), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


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


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t * ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t * ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CproviderTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CproviderTypeU3Ek__BackingField_1() const { return ___U3CproviderTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CproviderTypeU3Ek__BackingField_1() { return &___U3CproviderTypeU3Ek__BackingField_1; }
	inline void set_U3CproviderTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CproviderTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderTypeU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E, ___U3CsubsystemTypeOverrideU3Ek__BackingField_2)); }
	inline Type_t * get_U3CsubsystemTypeOverrideU3Ek__BackingField_2() const { return ___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CsubsystemTypeOverrideU3Ek__BackingField_2() { return &___U3CsubsystemTypeOverrideU3Ek__BackingField_2; }
	inline void set_U3CsubsystemTypeOverrideU3Ek__BackingField_2(Type_t * value)
	{
		___U3CsubsystemTypeOverrideU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemTypeOverrideU3Ek__BackingField_2), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
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

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.VolumeManager
struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::<stack>k__BackingField
	VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * ___U3CstackU3Ek__BackingField_1;
	// System.Type[] UnityEngine.Rendering.VolumeManager::<baseComponentTypeArray>k__BackingField
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___U3CbaseComponentTypeArrayU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>> UnityEngine.Rendering.VolumeManager::m_SortedVolumes
	Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * ___m_SortedVolumes_4;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> UnityEngine.Rendering.VolumeManager::m_Volumes
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___m_Volumes_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.VolumeManager::m_SortNeeded
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___m_SortNeeded_6;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeManager::m_ComponentsDefaultState
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___m_ComponentsDefaultState_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.VolumeManager::m_TempColliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___m_TempColliders_8;

public:
	inline static int32_t get_offset_of_U3CstackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___U3CstackU3Ek__BackingField_1)); }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * get_U3CstackU3Ek__BackingField_1() const { return ___U3CstackU3Ek__BackingField_1; }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC ** get_address_of_U3CstackU3Ek__BackingField_1() { return &___U3CstackU3Ek__BackingField_1; }
	inline void set_U3CstackU3Ek__BackingField_1(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * value)
	{
		___U3CstackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstackU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbaseComponentTypeArrayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___U3CbaseComponentTypeArrayU3Ek__BackingField_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_U3CbaseComponentTypeArrayU3Ek__BackingField_2() const { return ___U3CbaseComponentTypeArrayU3Ek__BackingField_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_U3CbaseComponentTypeArrayU3Ek__BackingField_2() { return &___U3CbaseComponentTypeArrayU3Ek__BackingField_2; }
	inline void set_U3CbaseComponentTypeArrayU3Ek__BackingField_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___U3CbaseComponentTypeArrayU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbaseComponentTypeArrayU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortedVolumes_4() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_SortedVolumes_4)); }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * get_m_SortedVolumes_4() const { return ___m_SortedVolumes_4; }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D ** get_address_of_m_SortedVolumes_4() { return &___m_SortedVolumes_4; }
	inline void set_m_SortedVolumes_4(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * value)
	{
		___m_SortedVolumes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortedVolumes_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Volumes_5() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_Volumes_5)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_m_Volumes_5() const { return ___m_Volumes_5; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_m_Volumes_5() { return &___m_Volumes_5; }
	inline void set_m_Volumes_5(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___m_Volumes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Volumes_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortNeeded_6() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_SortNeeded_6)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_m_SortNeeded_6() const { return ___m_SortNeeded_6; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_m_SortNeeded_6() { return &___m_SortNeeded_6; }
	inline void set_m_SortNeeded_6(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___m_SortNeeded_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortNeeded_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentsDefaultState_7() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_ComponentsDefaultState_7)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_m_ComponentsDefaultState_7() const { return ___m_ComponentsDefaultState_7; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_m_ComponentsDefaultState_7() { return &___m_ComponentsDefaultState_7; }
	inline void set_m_ComponentsDefaultState_7(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___m_ComponentsDefaultState_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentsDefaultState_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempColliders_8() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_TempColliders_8)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_m_TempColliders_8() const { return ___m_TempColliders_8; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_m_TempColliders_8() { return &___m_TempColliders_8; }
	inline void set_m_TempColliders_8(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___m_TempColliders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempColliders_8), (void*)value);
	}
};

struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181_StaticFields
{
public:
	// System.Lazy`1<UnityEngine.Rendering.VolumeManager> UnityEngine.Rendering.VolumeManager::s_Instance
	Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181_StaticFields, ___s_Instance_0)); }
	inline Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_0), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;

public:
	inline static int32_t get_offset_of_m_OverrideState_1() { return static_cast<int32_t>(offsetof(VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB, ___m_OverrideState_1)); }
	inline bool get_m_OverrideState_1() const { return ___m_OverrideState_1; }
	inline bool* get_address_of_m_OverrideState_1() { return &___m_OverrideState_1; }
	inline void set_m_OverrideState_1(bool value)
	{
		___m_OverrideState_1 = value;
	}
};


// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeStack::components
	Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * ___components_0;

public:
	inline static int32_t get_offset_of_components_0() { return static_cast<int32_t>(offsetof(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC, ___components_0)); }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * get_components_0() const { return ___components_0; }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 ** get_address_of_components_0() { return &___components_0; }
	inline void set_components_0(Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * value)
	{
		___components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_0), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tF2FA3C3EF12CF61BE1A292070F6C8B355CEBAC8D  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::resourceArray
	DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * ___resourceArray_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::sharedResourcesCount
	int32_t ___sharedResourcesCount_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::pool
	IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * ___pool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::createResourceCallback
	ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B * ___createResourceCallback_3;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::releaseResourceCallback
	ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B * ___releaseResourceCallback_4;

public:
	inline static int32_t get_offset_of_resourceArray_0() { return static_cast<int32_t>(offsetof(RenderGraphResourcesData_tF2FA3C3EF12CF61BE1A292070F6C8B355CEBAC8D, ___resourceArray_0)); }
	inline DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * get_resourceArray_0() const { return ___resourceArray_0; }
	inline DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 ** get_address_of_resourceArray_0() { return &___resourceArray_0; }
	inline void set_resourceArray_0(DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * value)
	{
		___resourceArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resourceArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_sharedResourcesCount_1() { return static_cast<int32_t>(offsetof(RenderGraphResourcesData_tF2FA3C3EF12CF61BE1A292070F6C8B355CEBAC8D, ___sharedResourcesCount_1)); }
	inline int32_t get_sharedResourcesCount_1() const { return ___sharedResourcesCount_1; }
	inline int32_t* get_address_of_sharedResourcesCount_1() { return &___sharedResourcesCount_1; }
	inline void set_sharedResourcesCount_1(int32_t value)
	{
		___sharedResourcesCount_1 = value;
	}

	inline static int32_t get_offset_of_pool_2() { return static_cast<int32_t>(offsetof(RenderGraphResourcesData_tF2FA3C3EF12CF61BE1A292070F6C8B355CEBAC8D, ___pool_2)); }
	inline IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * get_pool_2() const { return ___pool_2; }
	inline IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D ** get_address_of_pool_2() { return &___pool_2; }
	inline void set_pool_2(IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * value)
	{
		___pool_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_2), (void*)value);
	}

	inline static int32_t get_offset_of_createResourceCallback_3() { return static_cast<int32_t>(offsetof(RenderGraphResourcesData_tF2FA3C3EF12CF61BE1A292070F6C8B355CEBAC8D, ___createResourceCallback_3)); }
	inline ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B * get_createResourceCallback_3() const { return ___createResourceCallback_3; }
	inline ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B ** get_address_of_createResourceCallback_3() { return &___createResourceCallback_3; }
	inline void set_createResourceCallback_3(ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B * value)
	{
		___createResourceCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createResourceCallback_3), (void*)value);
	}

	inline static int32_t get_offset_of_releaseResourceCallback_4() { return static_cast<int32_t>(offsetof(RenderGraphResourcesData_tF2FA3C3EF12CF61BE1A292070F6C8B355CEBAC8D, ___releaseResourceCallback_4)); }
	inline ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B * get_releaseResourceCallback_4() const { return ___releaseResourceCallback_4; }
	inline ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B ** get_address_of_releaseResourceCallback_4() { return &___releaseResourceCallback_4; }
	inline void set_releaseResourceCallback_4(ResourceCallback_t7E07CE90DE9FCF190F4C1598056CDEE81573878B * value)
	{
		___releaseResourceCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___releaseResourceCallback_4), (void*)value);
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>
struct AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	float ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97, ___data_1)); }
	inline float get_data_1() const { return ___data_1; }
	inline float* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(float value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>
struct AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint16_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863, ___data_1)); }
	inline uint16_t get_data_1() const { return ___data_1; }
	inline uint16_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint16_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>
struct AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___data_1)); }
	inline uint32_t get_data_1() const { return ___data_1; }
	inline uint32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>
struct AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint64_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D, ___data_1)); }
	inline uint64_t get_data_1() const { return ___data_1; }
	inline uint64_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint64_t value)
	{
		___data_1 = value;
	}
};


// UnityEngine.U2D.UTess.ArraySlice`1<System.Int32>
struct ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5 
{
public:
	// System.Byte* UnityEngine.U2D.UTess.ArraySlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 UnityEngine.U2D.UTess.ArraySlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 UnityEngine.U2D.UTess.ArraySlice`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5, ___m_Buffer_0)); }
	inline uint8_t* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline uint8_t** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(uint8_t* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Stride_1() { return static_cast<int32_t>(offsetof(ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5, ___m_Stride_1)); }
	inline int32_t get_m_Stride_1() const { return ___m_Stride_1; }
	inline int32_t* get_address_of_m_Stride_1() { return &___m_Stride_1; }
	inline void set_m_Stride_1(int32_t value)
	{
		___m_Stride_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>
struct Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___list_0)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_list_0() const { return ___list_0; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___current_3)); }
	inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * get_current_3() const { return ___current_3; }
	inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>
struct Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___list_0)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_list_0() const { return ___list_0; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___current_3)); }
	inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * get_current_3() const { return ___current_3; }
	inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117, ___value_1)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_value_1() const { return ___value_1; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_tB30A449BCFE0FA82C8183709FCA73609BEF8497F  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t43C05E9C3928E04822F2DA791FFAC4C140DF10A5  : public SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t35977A2A0AA6C338BC9893668DD32F0294A9C01E * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>
struct Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 
{
public:
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::a
	int16_t ___a_0;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::b
	int16_t ___b_1;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::c
	int16_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11, ___a_0)); }
	inline int16_t get_a_0() const { return ___a_0; }
	inline int16_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int16_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11, ___b_1)); }
	inline int16_t get_b_1() const { return ___b_1; }
	inline int16_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int16_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11, ___c_2)); }
	inline int16_t get_c_2() const { return ___c_2; }
	inline int16_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int16_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>
struct Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 
{
public:
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::a
	int32_t ___a_0;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::b
	int32_t ___b_1;
	// T UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Boolean>
struct VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	bool ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201, ___m_Value_2)); }
	inline bool get_m_Value_2() const { return ___m_Value_2; }
	inline bool* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(bool value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32>
struct VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Object>
struct VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	RuntimeObject * ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0, ___m_Value_2)); }
	inline RuntimeObject * get_m_Value_2() const { return ___m_Value_2; }
	inline RuntimeObject ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(RuntimeObject * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_2), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	float ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7, ___m_Value_2)); }
	inline float get_m_Value_2() const { return ___m_Value_2; }
	inline float* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(float value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Rendering.DepthState
struct DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA 
{
public:
	// System.Byte UnityEngine.Rendering.DepthState::m_WriteEnabled
	uint8_t ___m_WriteEnabled_0;
	// System.SByte UnityEngine.Rendering.DepthState::m_CompareFunction
	int8_t ___m_CompareFunction_1;

public:
	inline static int32_t get_offset_of_m_WriteEnabled_0() { return static_cast<int32_t>(offsetof(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA, ___m_WriteEnabled_0)); }
	inline uint8_t get_m_WriteEnabled_0() const { return ___m_WriteEnabled_0; }
	inline uint8_t* get_address_of_m_WriteEnabled_0() { return &___m_WriteEnabled_0; }
	inline void set_m_WriteEnabled_0(uint8_t value)
	{
		___m_WriteEnabled_0 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunction_1() { return static_cast<int32_t>(offsetof(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA, ___m_CompareFunction_1)); }
	inline int8_t get_m_CompareFunction_1() const { return ___m_CompareFunction_1; }
	inline int8_t* get_address_of_m_CompareFunction_1() { return &___m_CompareFunction_1; }
	inline void set_m_CompareFunction_1(int8_t value)
	{
		___m_CompareFunction_1 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// UnityEngine.Hash128
struct Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Rendering.RenderTargetBlendState
struct RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD 
{
public:
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_WriteMask
	uint8_t ___m_WriteMask_0;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_SourceColorBlendMode
	uint8_t ___m_SourceColorBlendMode_1;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_DestinationColorBlendMode
	uint8_t ___m_DestinationColorBlendMode_2;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_SourceAlphaBlendMode
	uint8_t ___m_SourceAlphaBlendMode_3;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_DestinationAlphaBlendMode
	uint8_t ___m_DestinationAlphaBlendMode_4;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_ColorBlendOperation
	uint8_t ___m_ColorBlendOperation_5;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_AlphaBlendOperation
	uint8_t ___m_AlphaBlendOperation_6;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_Padding
	uint8_t ___m_Padding_7;

public:
	inline static int32_t get_offset_of_m_WriteMask_0() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_WriteMask_0)); }
	inline uint8_t get_m_WriteMask_0() const { return ___m_WriteMask_0; }
	inline uint8_t* get_address_of_m_WriteMask_0() { return &___m_WriteMask_0; }
	inline void set_m_WriteMask_0(uint8_t value)
	{
		___m_WriteMask_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceColorBlendMode_1() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_SourceColorBlendMode_1)); }
	inline uint8_t get_m_SourceColorBlendMode_1() const { return ___m_SourceColorBlendMode_1; }
	inline uint8_t* get_address_of_m_SourceColorBlendMode_1() { return &___m_SourceColorBlendMode_1; }
	inline void set_m_SourceColorBlendMode_1(uint8_t value)
	{
		___m_SourceColorBlendMode_1 = value;
	}

	inline static int32_t get_offset_of_m_DestinationColorBlendMode_2() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_DestinationColorBlendMode_2)); }
	inline uint8_t get_m_DestinationColorBlendMode_2() const { return ___m_DestinationColorBlendMode_2; }
	inline uint8_t* get_address_of_m_DestinationColorBlendMode_2() { return &___m_DestinationColorBlendMode_2; }
	inline void set_m_DestinationColorBlendMode_2(uint8_t value)
	{
		___m_DestinationColorBlendMode_2 = value;
	}

	inline static int32_t get_offset_of_m_SourceAlphaBlendMode_3() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_SourceAlphaBlendMode_3)); }
	inline uint8_t get_m_SourceAlphaBlendMode_3() const { return ___m_SourceAlphaBlendMode_3; }
	inline uint8_t* get_address_of_m_SourceAlphaBlendMode_3() { return &___m_SourceAlphaBlendMode_3; }
	inline void set_m_SourceAlphaBlendMode_3(uint8_t value)
	{
		___m_SourceAlphaBlendMode_3 = value;
	}

	inline static int32_t get_offset_of_m_DestinationAlphaBlendMode_4() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_DestinationAlphaBlendMode_4)); }
	inline uint8_t get_m_DestinationAlphaBlendMode_4() const { return ___m_DestinationAlphaBlendMode_4; }
	inline uint8_t* get_address_of_m_DestinationAlphaBlendMode_4() { return &___m_DestinationAlphaBlendMode_4; }
	inline void set_m_DestinationAlphaBlendMode_4(uint8_t value)
	{
		___m_DestinationAlphaBlendMode_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorBlendOperation_5() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_ColorBlendOperation_5)); }
	inline uint8_t get_m_ColorBlendOperation_5() const { return ___m_ColorBlendOperation_5; }
	inline uint8_t* get_address_of_m_ColorBlendOperation_5() { return &___m_ColorBlendOperation_5; }
	inline void set_m_ColorBlendOperation_5(uint8_t value)
	{
		___m_ColorBlendOperation_5 = value;
	}

	inline static int32_t get_offset_of_m_AlphaBlendOperation_6() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_AlphaBlendOperation_6)); }
	inline uint8_t get_m_AlphaBlendOperation_6() const { return ___m_AlphaBlendOperation_6; }
	inline uint8_t* get_address_of_m_AlphaBlendOperation_6() { return &___m_AlphaBlendOperation_6; }
	inline void set_m_AlphaBlendOperation_6(uint8_t value)
	{
		___m_AlphaBlendOperation_6 = value;
	}

	inline static int32_t get_offset_of_m_Padding_7() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_Padding_7)); }
	inline uint8_t get_m_Padding_7() const { return ___m_Padding_7; }
	inline uint8_t* get_address_of_m_Padding_7() { return &___m_Padding_7; }
	inline void set_m_Padding_7(uint8_t value)
	{
		___m_Padding_7 = value;
	}
};


// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields, ___none_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_none_0() const { return ___none_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___none_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.U2D.SplinePointMetaData
struct SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C 
{
public:
	// System.Single UnityEngine.U2D.SplinePointMetaData::height
	float ___height_0;
	// System.UInt32 UnityEngine.U2D.SplinePointMetaData::spriteIndex
	uint32_t ___spriteIndex_1;
	// System.Int32 UnityEngine.U2D.SplinePointMetaData::cornerMode
	int32_t ___cornerMode_2;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}

	inline static int32_t get_offset_of_spriteIndex_1() { return static_cast<int32_t>(offsetof(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C, ___spriteIndex_1)); }
	inline uint32_t get_spriteIndex_1() const { return ___spriteIndex_1; }
	inline uint32_t* get_address_of_spriteIndex_1() { return &___spriteIndex_1; }
	inline void set_spriteIndex_1(uint32_t value)
	{
		___spriteIndex_1 = value;
	}

	inline static int32_t get_offset_of_cornerMode_2() { return static_cast<int32_t>(offsetof(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C, ___cornerMode_2)); }
	inline int32_t get_cornerMode_2() const { return ___cornerMode_2; }
	inline int32_t* get_address_of_cornerMode_2() { return &___cornerMode_2; }
	inline void set_cornerMode_2(int32_t value)
	{
		___cornerMode_2 = value;
	}
};


// SpriteShapeGeometryInfo
struct SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 
{
public:
	// System.Int32 SpriteShapeGeometryInfo::geomIndex
	int32_t ___geomIndex_0;
	// System.Int32 SpriteShapeGeometryInfo::indexCount
	int32_t ___indexCount_1;
	// System.Int32 SpriteShapeGeometryInfo::vertexCount
	int32_t ___vertexCount_2;
	// System.Int32 SpriteShapeGeometryInfo::spriteIndex
	int32_t ___spriteIndex_3;

public:
	inline static int32_t get_offset_of_geomIndex_0() { return static_cast<int32_t>(offsetof(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666, ___geomIndex_0)); }
	inline int32_t get_geomIndex_0() const { return ___geomIndex_0; }
	inline int32_t* get_address_of_geomIndex_0() { return &___geomIndex_0; }
	inline void set_geomIndex_0(int32_t value)
	{
		___geomIndex_0 = value;
	}

	inline static int32_t get_offset_of_indexCount_1() { return static_cast<int32_t>(offsetof(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666, ___indexCount_1)); }
	inline int32_t get_indexCount_1() const { return ___indexCount_1; }
	inline int32_t* get_address_of_indexCount_1() { return &___indexCount_1; }
	inline void set_indexCount_1(int32_t value)
	{
		___indexCount_1 = value;
	}

	inline static int32_t get_offset_of_vertexCount_2() { return static_cast<int32_t>(offsetof(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666, ___vertexCount_2)); }
	inline int32_t get_vertexCount_2() const { return ___vertexCount_2; }
	inline int32_t* get_address_of_vertexCount_2() { return &___vertexCount_2; }
	inline void set_vertexCount_2(int32_t value)
	{
		___vertexCount_2 = value;
	}

	inline static int32_t get_offset_of_spriteIndex_3() { return static_cast<int32_t>(offsetof(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666, ___spriteIndex_3)); }
	inline int32_t get_spriteIndex_3() const { return ___spriteIndex_3; }
	inline int32_t* get_address_of_spriteIndex_3() { return &___spriteIndex_3; }
	inline void set_spriteIndex_3(int32_t value)
	{
		___spriteIndex_3 = value;
	}
};


// UnityEngine.U2D.SpriteShapeSegment
struct SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C 
{
public:
	// System.Int32 UnityEngine.U2D.SpriteShapeSegment::m_GeomIndex
	int32_t ___m_GeomIndex_0;
	// System.Int32 UnityEngine.U2D.SpriteShapeSegment::m_IndexCount
	int32_t ___m_IndexCount_1;
	// System.Int32 UnityEngine.U2D.SpriteShapeSegment::m_VertexCount
	int32_t ___m_VertexCount_2;
	// System.Int32 UnityEngine.U2D.SpriteShapeSegment::m_SpriteIndex
	int32_t ___m_SpriteIndex_3;

public:
	inline static int32_t get_offset_of_m_GeomIndex_0() { return static_cast<int32_t>(offsetof(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C, ___m_GeomIndex_0)); }
	inline int32_t get_m_GeomIndex_0() const { return ___m_GeomIndex_0; }
	inline int32_t* get_address_of_m_GeomIndex_0() { return &___m_GeomIndex_0; }
	inline void set_m_GeomIndex_0(int32_t value)
	{
		___m_GeomIndex_0 = value;
	}

	inline static int32_t get_offset_of_m_IndexCount_1() { return static_cast<int32_t>(offsetof(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C, ___m_IndexCount_1)); }
	inline int32_t get_m_IndexCount_1() const { return ___m_IndexCount_1; }
	inline int32_t* get_address_of_m_IndexCount_1() { return &___m_IndexCount_1; }
	inline void set_m_IndexCount_1(int32_t value)
	{
		___m_IndexCount_1 = value;
	}

	inline static int32_t get_offset_of_m_VertexCount_2() { return static_cast<int32_t>(offsetof(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C, ___m_VertexCount_2)); }
	inline int32_t get_m_VertexCount_2() const { return ___m_VertexCount_2; }
	inline int32_t* get_address_of_m_VertexCount_2() { return &___m_VertexCount_2; }
	inline void set_m_VertexCount_2(int32_t value)
	{
		___m_VertexCount_2 = value;
	}

	inline static int32_t get_offset_of_m_SpriteIndex_3() { return static_cast<int32_t>(offsetof(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C, ___m_SpriteIndex_3)); }
	inline int32_t get_m_SpriteIndex_3() const { return ___m_SpriteIndex_3; }
	inline int32_t* get_address_of_m_SpriteIndex_3() { return &___m_SpriteIndex_3; }
	inline void set_m_SpriteIndex_3(int32_t value)
	{
		___m_SpriteIndex_3 = value;
	}
};


// UnityEngine.Rendering.StencilState
struct StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007 
{
public:
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_Enabled_0)); }
	inline uint8_t get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline uint8_t* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(uint8_t value)
	{
		___m_Enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_ReadMask_1() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ReadMask_1)); }
	inline uint8_t get_m_ReadMask_1() const { return ___m_ReadMask_1; }
	inline uint8_t* get_address_of_m_ReadMask_1() { return &___m_ReadMask_1; }
	inline void set_m_ReadMask_1(uint8_t value)
	{
		___m_ReadMask_1 = value;
	}

	inline static int32_t get_offset_of_m_WriteMask_2() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_WriteMask_2)); }
	inline uint8_t get_m_WriteMask_2() const { return ___m_WriteMask_2; }
	inline uint8_t* get_address_of_m_WriteMask_2() { return &___m_WriteMask_2; }
	inline void set_m_WriteMask_2(uint8_t value)
	{
		___m_WriteMask_2 = value;
	}

	inline static int32_t get_offset_of_m_Padding_3() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_Padding_3)); }
	inline uint8_t get_m_Padding_3() const { return ___m_Padding_3; }
	inline uint8_t* get_address_of_m_Padding_3() { return &___m_Padding_3; }
	inline void set_m_Padding_3(uint8_t value)
	{
		___m_Padding_3 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunctionFront_4() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_CompareFunctionFront_4)); }
	inline uint8_t get_m_CompareFunctionFront_4() const { return ___m_CompareFunctionFront_4; }
	inline uint8_t* get_address_of_m_CompareFunctionFront_4() { return &___m_CompareFunctionFront_4; }
	inline void set_m_CompareFunctionFront_4(uint8_t value)
	{
		___m_CompareFunctionFront_4 = value;
	}

	inline static int32_t get_offset_of_m_PassOperationFront_5() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_PassOperationFront_5)); }
	inline uint8_t get_m_PassOperationFront_5() const { return ___m_PassOperationFront_5; }
	inline uint8_t* get_address_of_m_PassOperationFront_5() { return &___m_PassOperationFront_5; }
	inline void set_m_PassOperationFront_5(uint8_t value)
	{
		___m_PassOperationFront_5 = value;
	}

	inline static int32_t get_offset_of_m_FailOperationFront_6() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_FailOperationFront_6)); }
	inline uint8_t get_m_FailOperationFront_6() const { return ___m_FailOperationFront_6; }
	inline uint8_t* get_address_of_m_FailOperationFront_6() { return &___m_FailOperationFront_6; }
	inline void set_m_FailOperationFront_6(uint8_t value)
	{
		___m_FailOperationFront_6 = value;
	}

	inline static int32_t get_offset_of_m_ZFailOperationFront_7() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ZFailOperationFront_7)); }
	inline uint8_t get_m_ZFailOperationFront_7() const { return ___m_ZFailOperationFront_7; }
	inline uint8_t* get_address_of_m_ZFailOperationFront_7() { return &___m_ZFailOperationFront_7; }
	inline void set_m_ZFailOperationFront_7(uint8_t value)
	{
		___m_ZFailOperationFront_7 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunctionBack_8() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_CompareFunctionBack_8)); }
	inline uint8_t get_m_CompareFunctionBack_8() const { return ___m_CompareFunctionBack_8; }
	inline uint8_t* get_address_of_m_CompareFunctionBack_8() { return &___m_CompareFunctionBack_8; }
	inline void set_m_CompareFunctionBack_8(uint8_t value)
	{
		___m_CompareFunctionBack_8 = value;
	}

	inline static int32_t get_offset_of_m_PassOperationBack_9() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_PassOperationBack_9)); }
	inline uint8_t get_m_PassOperationBack_9() const { return ___m_PassOperationBack_9; }
	inline uint8_t* get_address_of_m_PassOperationBack_9() { return &___m_PassOperationBack_9; }
	inline void set_m_PassOperationBack_9(uint8_t value)
	{
		___m_PassOperationBack_9 = value;
	}

	inline static int32_t get_offset_of_m_FailOperationBack_10() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_FailOperationBack_10)); }
	inline uint8_t get_m_FailOperationBack_10() const { return ___m_FailOperationBack_10; }
	inline uint8_t* get_address_of_m_FailOperationBack_10() { return &___m_FailOperationBack_10; }
	inline void set_m_FailOperationBack_10(uint8_t value)
	{
		___m_FailOperationBack_10 = value;
	}

	inline static int32_t get_offset_of_m_ZFailOperationBack_11() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ZFailOperationBack_11)); }
	inline uint8_t get_m_ZFailOperationBack_11() const { return ___m_ZFailOperationBack_11; }
	inline uint8_t* get_address_of_m_ZFailOperationBack_11() { return &___m_ZFailOperationBack_11; }
	inline void set_m_ZFailOperationBack_11(uint8_t value)
	{
		___m_ZFailOperationBack_11 = value;
	}
};


// UnityEngine.U2D.UTess.TessCell
struct TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6 
{
public:
	// System.Int32 UnityEngine.U2D.UTess.TessCell::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.U2D.UTess.TessCell::b
	int32_t ___b_1;
	// System.Int32 UnityEngine.U2D.UTess.TessCell::c
	int32_t ___c_2;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_c_2() { return static_cast<int32_t>(offsetof(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6, ___c_2)); }
	inline int32_t get_c_2() const { return ___c_2; }
	inline int32_t* get_address_of_c_2() { return &___c_2; }
	inline void set_c_2(int32_t value)
	{
		___c_2 = value;
	}
};


// UnityEngine.U2D.UTess.TessEdge
struct TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7 
{
public:
	// System.Int32 UnityEngine.U2D.UTess.TessEdge::a
	int32_t ___a_0;
	// System.Int32 UnityEngine.U2D.UTess.TessEdge::b
	int32_t ___b_1;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7, ___a_0)); }
	inline int32_t get_a_0() const { return ___a_0; }
	inline int32_t* get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(int32_t value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7, ___b_1)); }
	inline int32_t get_b_1() const { return ___b_1; }
	inline int32_t* get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(int32_t value)
	{
		___b_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.UIntPtr
struct UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// Unity.Mathematics.float2
struct float2_tCB7B81181978EDE17722C533A55E345D9A413274 
{
public:
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float2_tCB7B81181978EDE17722C533A55E345D9A413274, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float2_tCB7B81181978EDE17722C533A55E345D9A413274, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct float2_tCB7B81181978EDE17722C533A55E345D9A413274_StaticFields
{
public:
	// Unity.Mathematics.float2 Unity.Mathematics.float2::zero
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___zero_2;

public:
	inline static int32_t get_offset_of_zero_2() { return static_cast<int32_t>(offsetof(float2_tCB7B81181978EDE17722C533A55E345D9A413274_StaticFields, ___zero_2)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_zero_2() const { return ___zero_2; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_zero_2() { return &___zero_2; }
	inline void set_zero_2(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___zero_2 = value;
	}
};


// Unity.Mathematics.float3
struct float3_t9500D105F273B3D86BD354142E891C48FFF9F71D 
{
public:
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct float3_t9500D105F273B3D86BD354142E891C48FFF9F71D_StaticFields
{
public:
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___zero_3;

public:
	inline static int32_t get_offset_of_zero_3() { return static_cast<int32_t>(offsetof(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D_StaticFields, ___zero_3)); }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  get_zero_3() const { return ___zero_3; }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * get_address_of_zero_3() { return &___zero_3; }
	inline void set_zero_3(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  value)
	{
		___zero_3 = value;
	}
};


// Unity.Mathematics.float4
struct float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 
{
public:
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// Unity.Mathematics.int2
struct int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 
{
public:
	// System.Int32 Unity.Mathematics.int2::x
	int32_t ___x_0;
	// System.Int32 Unity.Mathematics.int2::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};


// Unity.Mathematics.int4
struct int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 
{
public:
	// System.Int32 Unity.Mathematics.int4::x
	int32_t ___x_0;
	// System.Int32 Unity.Mathematics.int4::y
	int32_t ___y_1;
	// System.Int32 Unity.Mathematics.int4::z
	int32_t ___z_2;
	// System.Int32 Unity.Mathematics.int4::w
	int32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067, ___z_2)); }
	inline int32_t get_z_2() const { return ___z_2; }
	inline int32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(int32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067, ___w_3)); }
	inline int32_t get_w_3() const { return ___w_3; }
	inline int32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(int32_t value)
	{
		___w_3 = value;
	}
};

struct int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067_StaticFields
{
public:
	// Unity.Mathematics.int4 Unity.Mathematics.int4::zero
	int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  ___zero_4;

public:
	inline static int32_t get_offset_of_zero_4() { return static_cast<int32_t>(offsetof(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067_StaticFields, ___zero_4)); }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  get_zero_4() const { return ___zero_4; }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 * get_address_of_zero_4() { return &___zero_4; }
	inline void set_zero_4(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  value)
	{
		___zero_4 = value;
	}
};


// Unity.Mathematics.uint4
struct uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 
{
public:
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___z_2)); }
	inline uint32_t get_z_2() const { return ___z_2; }
	inline uint32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635, ___w_3)); }
	inline uint32_t get_w_3() const { return ___w_3; }
	inline uint32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint32_t value)
	{
		___w_3 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo
struct PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 
{
public:
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::distance
	float ___distance_0;
	// System.Single UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo::cosineAngleWithRay
	float ___cosineAngleWithRay_1;

public:
	inline static int32_t get_offset_of_distance_0() { return static_cast<int32_t>(offsetof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1, ___distance_0)); }
	inline float get_distance_0() const { return ___distance_0; }
	inline float* get_address_of_distance_0() { return &___distance_0; }
	inline void set_distance_0(float value)
	{
		___distance_0 = value;
	}

	inline static int32_t get_offset_of_cosineAngleWithRay_1() { return static_cast<int32_t>(offsetof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1, ___cosineAngleWithRay_1)); }
	inline float get_cosineAngleWithRay_1() const { return ___cosineAngleWithRay_1; }
	inline float* get_address_of_cosineAngleWithRay_1() { return &___cosineAngleWithRay_1; }
	inline void set_cosineAngleWithRay_1(float value)
	{
		___cosineAngleWithRay_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities
struct Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685__padding[1];
	};

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>
struct AlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984, ___data_1)); }
	inline Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  get_data_1() const { return ___data_1; }
	inline Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>
struct AlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00, ___data_1)); }
	inline Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  get_data_1() const { return ___data_1; }
	inline Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___data_1)); }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  get_data_1() const { return ___data_1; }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>
struct AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA, ___data_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_data_1() const { return ___data_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.ShaderTagId>
struct AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC, ___data_1)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_data_1() const { return ___data_1; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SplinePointMetaData>
struct AlignOfHelper_1_t54A9D79432BA39A3B3646EB3B25853F0C080BA82 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t54A9D79432BA39A3B3646EB3B25853F0C080BA82, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t54A9D79432BA39A3B3646EB3B25853F0C080BA82, ___data_1)); }
	inline SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C  get_data_1() const { return ___data_1; }
	inline SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<SpriteShapeGeometryInfo>
struct AlignOfHelper_1_t7EDCB0A42204CD5CFEC9789F8B1861BF23EE8E6F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t7EDCB0A42204CD5CFEC9789F8B1861BF23EE8E6F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t7EDCB0A42204CD5CFEC9789F8B1861BF23EE8E6F, ___data_1)); }
	inline SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  get_data_1() const { return ___data_1; }
	inline SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeSegment>
struct AlignOfHelper_1_t007FBF84A6EBA0216D95038F9FBF09B9D25411B3 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t007FBF84A6EBA0216D95038F9FBF09B9D25411B3, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t007FBF84A6EBA0216D95038F9FBF09B9D25411B3, ___data_1)); }
	inline SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C  get_data_1() const { return ___data_1; }
	inline SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessCell>
struct AlignOfHelper_1_tE7E050F9D27B51C461CA892C36A28A1BC1E74557 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE7E050F9D27B51C461CA892C36A28A1BC1E74557, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE7E050F9D27B51C461CA892C36A28A1BC1E74557, ___data_1)); }
	inline TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6  get_data_1() const { return ___data_1; }
	inline TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessEdge>
struct AlignOfHelper_1_t16415829CD9EA7F16F98EEF58E4862DD40828DD4 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t16415829CD9EA7F16F98EEF58E4862DD40828DD4, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t16415829CD9EA7F16F98EEF58E4862DD40828DD4, ___data_1)); }
	inline TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7  get_data_1() const { return ___data_1; }
	inline TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59, ___data_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_data_1() const { return ___data_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>
struct AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF, ___data_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_data_1() const { return ___data_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>
struct AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F, ___data_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_data_1() const { return ___data_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>
struct AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F, ___data_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_data_1() const { return ___data_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.float2>
struct AlignOfHelper_1_t27441D8D23662C173CE46E195544FE04D7813B3F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t27441D8D23662C173CE46E195544FE04D7813B3F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t27441D8D23662C173CE46E195544FE04D7813B3F, ___data_1)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_data_1() const { return ___data_1; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.int2>
struct AlignOfHelper_1_t4F0034F0994EF588F07178036DD21948CA867E0E 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4F0034F0994EF588F07178036DD21948CA867E0E, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t4F0034F0994EF588F07178036DD21948CA867E0E, ___data_1)); }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  get_data_1() const { return ___data_1; }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.uint4>
struct AlignOfHelper_1_tAC11858D03237E507F8D4D8BD9BF81BB98CE9EC5 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAC11858D03237E507F8D4D8BD9BF81BB98CE9EC5, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAC11858D03237E507F8D4D8BD9BF81BB98CE9EC5, ___data_1)); }
	inline uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  get_data_1() const { return ___data_1; }
	inline uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>
struct AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84, ___data_1)); }
	inline PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  get_data_1() const { return ___data_1; }
	inline PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  value)
	{
		___data_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___dictionary_0)); }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___current_3)); }
	inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct TrackingSubsystem_4_t1E41FDFF37B1529EED554D89481040B067E300EB  : public SubsystemWithProvider_3_t2622D99FF6F2A6B95B2E82547A76A7E7712AA7DB
{
public:

public:
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>
struct VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A, ___m_Value_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Value_2() const { return ___m_Value_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>
struct VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D, ___m_Value_2)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_Value_2() const { return ___m_Value_2; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7, ___m_Value_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>
struct VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F, ___m_Value_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C, ___m_Value_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_Value_2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BlendState
struct BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34 
{
public:
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState0
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState0_0;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState1
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState1_1;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState2
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState2_2;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState3
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState3_3;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState4
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState4_4;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState5
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState5_5;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState6
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState6_6;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState7
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState7_7;
	// System.Byte UnityEngine.Rendering.BlendState::m_SeparateMRTBlendStates
	uint8_t ___m_SeparateMRTBlendStates_8;
	// System.Byte UnityEngine.Rendering.BlendState::m_AlphaToMask
	uint8_t ___m_AlphaToMask_9;
	// System.Int16 UnityEngine.Rendering.BlendState::m_Padding
	int16_t ___m_Padding_10;

public:
	inline static int32_t get_offset_of_m_BlendState0_0() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState0_0)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState0_0() const { return ___m_BlendState0_0; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState0_0() { return &___m_BlendState0_0; }
	inline void set_m_BlendState0_0(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState0_0 = value;
	}

	inline static int32_t get_offset_of_m_BlendState1_1() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState1_1)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState1_1() const { return ___m_BlendState1_1; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState1_1() { return &___m_BlendState1_1; }
	inline void set_m_BlendState1_1(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState1_1 = value;
	}

	inline static int32_t get_offset_of_m_BlendState2_2() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState2_2)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState2_2() const { return ___m_BlendState2_2; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState2_2() { return &___m_BlendState2_2; }
	inline void set_m_BlendState2_2(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState2_2 = value;
	}

	inline static int32_t get_offset_of_m_BlendState3_3() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState3_3)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState3_3() const { return ___m_BlendState3_3; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState3_3() { return &___m_BlendState3_3; }
	inline void set_m_BlendState3_3(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState3_3 = value;
	}

	inline static int32_t get_offset_of_m_BlendState4_4() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState4_4)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState4_4() const { return ___m_BlendState4_4; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState4_4() { return &___m_BlendState4_4; }
	inline void set_m_BlendState4_4(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState4_4 = value;
	}

	inline static int32_t get_offset_of_m_BlendState5_5() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState5_5)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState5_5() const { return ___m_BlendState5_5; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState5_5() { return &___m_BlendState5_5; }
	inline void set_m_BlendState5_5(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState5_5 = value;
	}

	inline static int32_t get_offset_of_m_BlendState6_6() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState6_6)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState6_6() const { return ___m_BlendState6_6; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState6_6() { return &___m_BlendState6_6; }
	inline void set_m_BlendState6_6(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState6_6 = value;
	}

	inline static int32_t get_offset_of_m_BlendState7_7() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState7_7)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState7_7() const { return ___m_BlendState7_7; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState7_7() { return &___m_BlendState7_7; }
	inline void set_m_BlendState7_7(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState7_7 = value;
	}

	inline static int32_t get_offset_of_m_SeparateMRTBlendStates_8() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_SeparateMRTBlendStates_8)); }
	inline uint8_t get_m_SeparateMRTBlendStates_8() const { return ___m_SeparateMRTBlendStates_8; }
	inline uint8_t* get_address_of_m_SeparateMRTBlendStates_8() { return &___m_SeparateMRTBlendStates_8; }
	inline void set_m_SeparateMRTBlendStates_8(uint8_t value)
	{
		___m_SeparateMRTBlendStates_8 = value;
	}

	inline static int32_t get_offset_of_m_AlphaToMask_9() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_AlphaToMask_9)); }
	inline uint8_t get_m_AlphaToMask_9() const { return ___m_AlphaToMask_9; }
	inline uint8_t* get_address_of_m_AlphaToMask_9() { return &___m_AlphaToMask_9; }
	inline void set_m_AlphaToMask_9(uint8_t value)
	{
		___m_AlphaToMask_9 = value;
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_Padding_10)); }
	inline int16_t get_m_Padding_10() const { return ___m_Padding_10; }
	inline int16_t* get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(int16_t value)
	{
		___m_Padding_10 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// System.ByteEnum
struct ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.CullMode
struct CullMode_t2217CE70E9A8E268EDDDB71F28D7F456E767C135 
{
public:
	// System.Int32 UnityEngine.Rendering.CullMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CullMode_t2217CE70E9A8E268EDDDB71F28D7F456E767C135, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Feature
struct Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_t079F5923A4893A9E07B968C27F44AC5FCAC87C83, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.UIR.GfxUpdateBufferRange
struct GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 
{
public:
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::offsetFromWriteStart
	uint32_t ___offsetFromWriteStart_0;
	// System.UInt32 UnityEngine.UIElements.UIR.GfxUpdateBufferRange::size
	uint32_t ___size_1;
	// System.UIntPtr UnityEngine.UIElements.UIR.GfxUpdateBufferRange::source
	uintptr_t ___source_2;

public:
	inline static int32_t get_offset_of_offsetFromWriteStart_0() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___offsetFromWriteStart_0)); }
	inline uint32_t get_offsetFromWriteStart_0() const { return ___offsetFromWriteStart_0; }
	inline uint32_t* get_address_of_offsetFromWriteStart_0() { return &___offsetFromWriteStart_0; }
	inline void set_offsetFromWriteStart_0(uint32_t value)
	{
		___offsetFromWriteStart_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___size_1)); }
	inline uint32_t get_size_1() const { return ___size_1; }
	inline uint32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(uint32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66, ___source_2)); }
	inline uintptr_t get_source_2() const { return ___source_2; }
	inline uintptr_t* get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(uintptr_t value)
	{
		___source_2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightType
struct LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14 
{
public:
	// System.Int32 UnityEngine.LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ManagedReferenceImage
struct ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 
{
public:
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::guid
	Guid_t  ___guid_0;
	// System.Guid UnityEngine.XR.ARKit.ManagedReferenceImage::textureGuid
	Guid_t  ___textureGuid_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARKit.ManagedReferenceImage::size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___size_2;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::name
	intptr_t ___name_3;
	// System.IntPtr UnityEngine.XR.ARKit.ManagedReferenceImage::texture
	intptr_t ___texture_4;

public:
	inline static int32_t get_offset_of_guid_0() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___guid_0)); }
	inline Guid_t  get_guid_0() const { return ___guid_0; }
	inline Guid_t * get_address_of_guid_0() { return &___guid_0; }
	inline void set_guid_0(Guid_t  value)
	{
		___guid_0 = value;
	}

	inline static int32_t get_offset_of_textureGuid_1() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___textureGuid_1)); }
	inline Guid_t  get_textureGuid_1() const { return ___textureGuid_1; }
	inline Guid_t * get_address_of_textureGuid_1() { return &___textureGuid_1; }
	inline void set_textureGuid_1(Guid_t  value)
	{
		___textureGuid_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___size_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_size_2() const { return ___size_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___name_3)); }
	inline intptr_t get_name_3() const { return ___name_3; }
	inline intptr_t* get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(intptr_t value)
	{
		___name_3 = value;
	}

	inline static int32_t get_offset_of_texture_4() { return static_cast<int32_t>(offsetof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1, ___texture_4)); }
	inline intptr_t get_texture_4() const { return ___texture_4; }
	inline intptr_t* get_address_of_texture_4() { return &___texture_4; }
	inline void set_texture_4(intptr_t value)
	{
		___texture_4 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;

public:
	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_Distance_2() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_2)); }
	inline float get_m_Distance_2() const { return ___m_Distance_2; }
	inline float* get_address_of_m_Distance_2() { return &___m_Distance_2; }
	inline void set_m_Distance_2(float value)
	{
		___m_Distance_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneAlignment
struct PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneAlignment_t1BB7048E3969913434FB1B3BCBCA2E81D4E71ADA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.PlaneClassification
struct PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.PlaneClassification::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlaneClassification_tAC2E2E9609D4396BC311E2987CA3EFA5115EDD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Rendering.Universal.PreTile
struct PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 
{
public:
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeLeft
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___planeLeft_0;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeRight
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___planeRight_1;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeBottom
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___planeBottom_2;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeTop
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___planeTop_3;

public:
	inline static int32_t get_offset_of_planeLeft_0() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeLeft_0)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_planeLeft_0() const { return ___planeLeft_0; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_planeLeft_0() { return &___planeLeft_0; }
	inline void set_planeLeft_0(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___planeLeft_0 = value;
	}

	inline static int32_t get_offset_of_planeRight_1() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeRight_1)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_planeRight_1() const { return ___planeRight_1; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_planeRight_1() { return &___planeRight_1; }
	inline void set_planeRight_1(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___planeRight_1 = value;
	}

	inline static int32_t get_offset_of_planeBottom_2() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeBottom_2)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_planeBottom_2() const { return ___planeBottom_2; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_planeBottom_2() { return &___planeBottom_2; }
	inline void set_planeBottom_2(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___planeBottom_2 = value;
	}

	inline static int32_t get_offset_of_planeTop_3() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeTop_3)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_planeTop_3() const { return ___planeTop_3; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_planeTop_3() { return &___planeTop_3; }
	inline void set_planeTop_3(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___planeTop_3 = value;
	}
};


// UnityEngine.Rendering.RenderStateMask
struct RenderStateMask_t3501AB292C3334281865DF8E5CA5BF67C687AF35 
{
public:
	// System.Int32 UnityEngine.Rendering.RenderStateMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderStateMask_t3501AB292C3334281865DF8E5CA5BF67C687AF35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.U2D.ShapeControlPoint
struct ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045 
{
public:
	// UnityEngine.Vector3 UnityEngine.U2D.ShapeControlPoint::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.U2D.ShapeControlPoint::leftTangent
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftTangent_1;
	// UnityEngine.Vector3 UnityEngine.U2D.ShapeControlPoint::rightTangent
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightTangent_2;
	// System.Int32 UnityEngine.U2D.ShapeControlPoint::mode
	int32_t ___mode_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_leftTangent_1() { return static_cast<int32_t>(offsetof(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045, ___leftTangent_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftTangent_1() const { return ___leftTangent_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftTangent_1() { return &___leftTangent_1; }
	inline void set_leftTangent_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftTangent_1 = value;
	}

	inline static int32_t get_offset_of_rightTangent_2() { return static_cast<int32_t>(offsetof(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045, ___rightTangent_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightTangent_2() const { return ___rightTangent_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightTangent_2() { return &___rightTangent_2; }
	inline void set_rightTangent_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightTangent_2 = value;
	}

	inline static int32_t get_offset_of_mode_3() { return static_cast<int32_t>(offsetof(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045, ___mode_3)); }
	inline int32_t get_mode_3() const { return ___mode_3; }
	inline int32_t* get_address_of_mode_3() { return &___mode_3; }
	inline void set_mode_3(int32_t value)
	{
		___mode_3 = value;
	}
};


// UnityEngine.U2D.UTess.TessEvent
struct TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2 
{
public:
	// Unity.Mathematics.float2 UnityEngine.U2D.UTess.TessEvent::a
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___a_0;
	// Unity.Mathematics.float2 UnityEngine.U2D.UTess.TessEvent::b
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___b_1;
	// System.Int32 UnityEngine.U2D.UTess.TessEvent::idx
	int32_t ___idx_2;
	// System.Int32 UnityEngine.U2D.UTess.TessEvent::type
	int32_t ___type_3;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2, ___a_0)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_a_0() const { return ___a_0; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2, ___b_1)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_b_1() const { return ___b_1; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_idx_2() { return static_cast<int32_t>(offsetof(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2, ___idx_2)); }
	inline int32_t get_idx_2() const { return ___idx_2; }
	inline int32_t* get_address_of_idx_2() { return &___idx_2; }
	inline void set_idx_2(int32_t value)
	{
		___idx_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}
};


// UnityEngine.U2D.UTess.TessHull
struct TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9 
{
public:
	// Unity.Mathematics.float2 UnityEngine.U2D.UTess.TessHull::a
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___a_0;
	// Unity.Mathematics.float2 UnityEngine.U2D.UTess.TessHull::b
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___b_1;
	// System.Int32 UnityEngine.U2D.UTess.TessHull::idx
	int32_t ___idx_2;
	// UnityEngine.U2D.UTess.ArraySlice`1<System.Int32> UnityEngine.U2D.UTess.TessHull::ilarray
	ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  ___ilarray_3;
	// System.Int32 UnityEngine.U2D.UTess.TessHull::ilcount
	int32_t ___ilcount_4;
	// UnityEngine.U2D.UTess.ArraySlice`1<System.Int32> UnityEngine.U2D.UTess.TessHull::iuarray
	ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  ___iuarray_5;
	// System.Int32 UnityEngine.U2D.UTess.TessHull::iucount
	int32_t ___iucount_6;

public:
	inline static int32_t get_offset_of_a_0() { return static_cast<int32_t>(offsetof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9, ___a_0)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_a_0() const { return ___a_0; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_a_0() { return &___a_0; }
	inline void set_a_0(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___a_0 = value;
	}

	inline static int32_t get_offset_of_b_1() { return static_cast<int32_t>(offsetof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9, ___b_1)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_b_1() const { return ___b_1; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_b_1() { return &___b_1; }
	inline void set_b_1(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___b_1 = value;
	}

	inline static int32_t get_offset_of_idx_2() { return static_cast<int32_t>(offsetof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9, ___idx_2)); }
	inline int32_t get_idx_2() const { return ___idx_2; }
	inline int32_t* get_address_of_idx_2() { return &___idx_2; }
	inline void set_idx_2(int32_t value)
	{
		___idx_2 = value;
	}

	inline static int32_t get_offset_of_ilarray_3() { return static_cast<int32_t>(offsetof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9, ___ilarray_3)); }
	inline ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  get_ilarray_3() const { return ___ilarray_3; }
	inline ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5 * get_address_of_ilarray_3() { return &___ilarray_3; }
	inline void set_ilarray_3(ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  value)
	{
		___ilarray_3 = value;
	}

	inline static int32_t get_offset_of_ilcount_4() { return static_cast<int32_t>(offsetof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9, ___ilcount_4)); }
	inline int32_t get_ilcount_4() const { return ___ilcount_4; }
	inline int32_t* get_address_of_ilcount_4() { return &___ilcount_4; }
	inline void set_ilcount_4(int32_t value)
	{
		___ilcount_4 = value;
	}

	inline static int32_t get_offset_of_iuarray_5() { return static_cast<int32_t>(offsetof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9, ___iuarray_5)); }
	inline ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  get_iuarray_5() const { return ___iuarray_5; }
	inline ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5 * get_address_of_iuarray_5() { return &___iuarray_5; }
	inline void set_iuarray_5(ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  value)
	{
		___iuarray_5 = value;
	}

	inline static int32_t get_offset_of_iucount_6() { return static_cast<int32_t>(offsetof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9, ___iucount_6)); }
	inline int32_t get_iucount_6() const { return ___iucount_6; }
	inline int32_t* get_address_of_iucount_6() { return &___iucount_6; }
	inline void set_iucount_6(int32_t value)
	{
		___iucount_6 = value;
	}
};


// UnityEngine.U2D.UTess.TessStar
struct TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631 
{
public:
	// UnityEngine.U2D.UTess.ArraySlice`1<System.Int32> UnityEngine.U2D.UTess.TessStar::points
	ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  ___points_0;
	// System.Int32 UnityEngine.U2D.UTess.TessStar::pointCount
	int32_t ___pointCount_1;

public:
	inline static int32_t get_offset_of_points_0() { return static_cast<int32_t>(offsetof(TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631, ___points_0)); }
	inline ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  get_points_0() const { return ___points_0; }
	inline ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5 * get_address_of_points_0() { return &___points_0; }
	inline void set_points_0(ArraySlice_1_t8D9993FFC60D11A6A16B74E867F8E7A64FBF3DA5  value)
	{
		___points_0 = value;
	}

	inline static int32_t get_offset_of_pointCount_1() { return static_cast<int32_t>(offsetof(TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631, ___pointCount_1)); }
	inline int32_t get_pointCount_1() const { return ___pointCount_1; }
	inline int32_t* get_address_of_pointCount_1() { return &___pointCount_1; }
	inline void set_pointCount_1(int32_t value)
	{
		___pointCount_1 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableType
struct TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackableType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackableType_t2352F7091A5BE0192C8D908019BA7481A347C85F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIElements.Vertex
struct Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIElements.Vertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::tint
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___tint_2;
	// UnityEngine.Vector2 UnityEngine.UIElements.Vertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_3;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::xformClipPages
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___xformClipPages_4;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::ids
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___ids_5;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::flags
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___flags_6;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::opacityPageSettingIndex
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___opacityPageSettingIndex_7;
	// System.Single UnityEngine.UIElements.Vertex::textureId
	float ___textureId_8;
	// UnityEngine.Color32 UnityEngine.UIElements.Vertex::idsFlags
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___idsFlags_9;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_tint_2() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___tint_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_tint_2() const { return ___tint_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_tint_2() { return &___tint_2; }
	inline void set_tint_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___tint_2 = value;
	}

	inline static int32_t get_offset_of_uv_3() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___uv_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_3() const { return ___uv_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_3() { return &___uv_3; }
	inline void set_uv_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_3 = value;
	}

	inline static int32_t get_offset_of_xformClipPages_4() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___xformClipPages_4)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_xformClipPages_4() const { return ___xformClipPages_4; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_xformClipPages_4() { return &___xformClipPages_4; }
	inline void set_xformClipPages_4(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___xformClipPages_4 = value;
	}

	inline static int32_t get_offset_of_ids_5() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___ids_5)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_ids_5() const { return ___ids_5; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_ids_5() { return &___ids_5; }
	inline void set_ids_5(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___ids_5 = value;
	}

	inline static int32_t get_offset_of_flags_6() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___flags_6)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_flags_6() const { return ___flags_6; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_flags_6() { return &___flags_6; }
	inline void set_flags_6(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___flags_6 = value;
	}

	inline static int32_t get_offset_of_opacityPageSettingIndex_7() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___opacityPageSettingIndex_7)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_opacityPageSettingIndex_7() const { return ___opacityPageSettingIndex_7; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_opacityPageSettingIndex_7() { return &___opacityPageSettingIndex_7; }
	inline void set_opacityPageSettingIndex_7(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___opacityPageSettingIndex_7 = value;
	}

	inline static int32_t get_offset_of_textureId_8() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___textureId_8)); }
	inline float get_textureId_8() const { return ___textureId_8; }
	inline float* get_address_of_textureId_8() { return &___textureId_8; }
	inline void set_textureId_8(float value)
	{
		___textureId_8 = value;
	}

	inline static int32_t get_offset_of_idsFlags_9() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E, ___idsFlags_9)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_idsFlags_9() const { return ___idsFlags_9; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_idsFlags_9() { return &___idsFlags_9; }
	inline void set_idsFlags_9(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___idsFlags_9 = value;
	}
};

struct Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_StaticFields
{
public:
	// System.Single UnityEngine.UIElements.Vertex::nearZ
	float ___nearZ_0;

public:
	inline static int32_t get_offset_of_nearZ_0() { return static_cast<int32_t>(offsetof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_StaticFields, ___nearZ_0)); }
	inline float get_nearZ_0() const { return ___nearZ_0; }
	inline float* get_address_of_nearZ_0() { return &___nearZ_0; }
	inline void set_nearZ_0(float value)
	{
		___nearZ_0 = value;
	}
};


// UnityEngine.Rendering.VisibleLightFlags
struct VisibleLightFlags_tDB755E7201CE7B38D58CC4524920ACDABC292EC0 
{
public:
	// System.Int32 UnityEngine.Rendering.VisibleLightFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisibleLightFlags_tDB755E7201CE7B38D58CC4524920ACDABC292EC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRCameraConfiguration
struct XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A 
{
public:
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Resolution
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Resolution_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_Framerate
	int32_t ___m_Framerate_1;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRCameraConfiguration::m_NativeConfigurationHandle
	intptr_t ___m_NativeConfigurationHandle_2;

public:
	inline static int32_t get_offset_of_m_Resolution_0() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Resolution_0)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Resolution_0() const { return ___m_Resolution_0; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Resolution_0() { return &___m_Resolution_0; }
	inline void set_m_Resolution_0(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Resolution_0 = value;
	}

	inline static int32_t get_offset_of_m_Framerate_1() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_Framerate_1)); }
	inline int32_t get_m_Framerate_1() const { return ___m_Framerate_1; }
	inline int32_t* get_address_of_m_Framerate_1() { return &___m_Framerate_1; }
	inline void set_m_Framerate_1(int32_t value)
	{
		___m_Framerate_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeConfigurationHandle_2() { return static_cast<int32_t>(offsetof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A, ___m_NativeConfigurationHandle_2)); }
	inline intptr_t get_m_NativeConfigurationHandle_2() const { return ___m_NativeConfigurationHandle_2; }
	inline intptr_t* get_address_of_m_NativeConfigurationHandle_2() { return &___m_NativeConfigurationHandle_2; }
	inline void set_m_NativeConfigurationHandle_2(intptr_t value)
	{
		___m_NativeConfigurationHandle_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint
struct XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint::m_Tracked
	int32_t ___m_Tracked_3;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Position_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_3() { return static_cast<int32_t>(offsetof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4, ___m_Tracked_3)); }
	inline int32_t get_m_Tracked_3() const { return ___m_Tracked_3; }
	inline int32_t* get_address_of_m_Tracked_3() { return &___m_Tracked_3; }
	inline void set_m_Tracked_3(int32_t value)
	{
		___m_Tracked_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472  : public SubsystemDescriptorWithProvider_2_tB30A449BCFE0FA82C8183709FCA73609BEF8497F
{
public:
	// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::<capabilities>k__BackingField
	Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___U3CcapabilitiesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472, ___U3CcapabilitiesU3Ek__BackingField_3)); }
	inline Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  get_U3CcapabilitiesU3Ek__BackingField_3() const { return ___U3CcapabilitiesU3Ek__BackingField_3; }
	inline Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 * get_address_of_U3CcapabilitiesU3Ek__BackingField_3() { return &___U3CcapabilitiesU3Ek__BackingField_3; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_3(Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  value)
	{
		___U3CcapabilitiesU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight
struct PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 
{
public:
	// Unity.Mathematics.float3 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::posVS
	float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  ___posVS_0;
	// System.Single UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::radius
	float ___radius_1;
	// System.Single UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::minDist
	float ___minDist_2;
	// Unity.Mathematics.float2 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::screenPos
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___screenPos_3;
	// System.UInt16 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::visLightIndex
	uint16_t ___visLightIndex_4;

public:
	inline static int32_t get_offset_of_posVS_0() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___posVS_0)); }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  get_posVS_0() const { return ___posVS_0; }
	inline float3_t9500D105F273B3D86BD354142E891C48FFF9F71D * get_address_of_posVS_0() { return &___posVS_0; }
	inline void set_posVS_0(float3_t9500D105F273B3D86BD354142E891C48FFF9F71D  value)
	{
		___posVS_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}

	inline static int32_t get_offset_of_minDist_2() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___minDist_2)); }
	inline float get_minDist_2() const { return ___minDist_2; }
	inline float* get_address_of_minDist_2() { return &___minDist_2; }
	inline void set_minDist_2(float value)
	{
		___minDist_2 = value;
	}

	inline static int32_t get_offset_of_screenPos_3() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___screenPos_3)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_screenPos_3() const { return ___screenPos_3; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_screenPos_3() { return &___screenPos_3; }
	inline void set_screenPos_3(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___screenPos_3 = value;
	}

	inline static int32_t get_offset_of_visLightIndex_4() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___visLightIndex_4)); }
	inline uint16_t get_visLightIndex_4() const { return ___visLightIndex_4; }
	inline uint16_t* get_address_of_visLightIndex_4() { return &___visLightIndex_4; }
	inline void set_visLightIndex_4(uint16_t value)
	{
		___visLightIndex_4 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex
struct LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40 
{
public:
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_uv_2() { return static_cast<int32_t>(offsetof(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40, ___uv_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_2() const { return ___uv_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_2() { return &___uv_2; }
	inline void set_uv_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_2 = value;
	}
};

struct LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40_StaticFields
{
public:
	// UnityEngine.Rendering.VertexAttributeDescriptor[] UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex::VertexLayout
	VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* ___VertexLayout_3;

public:
	inline static int32_t get_offset_of_VertexLayout_3() { return static_cast<int32_t>(offsetof(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40_StaticFields, ___VertexLayout_3)); }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* get_VertexLayout_3() const { return ___VertexLayout_3; }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF** get_address_of_VertexLayout_3() { return &___VertexLayout_3; }
	inline void set_VertexLayout_3(VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* value)
	{
		___VertexLayout_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexLayout_3), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ShaderInput/LightData
struct LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 
{
public:
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::position
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___position_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::color
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___color_1;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::attenuation
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___attenuation_2;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::spotDirection
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___spotDirection_3;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::occlusionProbeChannels
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___occlusionProbeChannels_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___position_0)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_position_0() const { return ___position_0; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___color_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_color_1() const { return ___color_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_attenuation_2() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___attenuation_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_attenuation_2() const { return ___attenuation_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_attenuation_2() { return &___attenuation_2; }
	inline void set_attenuation_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___attenuation_2 = value;
	}

	inline static int32_t get_offset_of_spotDirection_3() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___spotDirection_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_spotDirection_3() const { return ___spotDirection_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_spotDirection_3() { return &___spotDirection_3; }
	inline void set_spotDirection_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___spotDirection_3 = value;
	}

	inline static int32_t get_offset_of_occlusionProbeChannels_4() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___occlusionProbeChannels_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_occlusionProbeChannels_4() const { return ___occlusionProbeChannels_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_occlusionProbeChannels_4() { return &___occlusionProbeChannels_4; }
	inline void set_occlusionProbeChannels_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___occlusionProbeChannels_4 = value;
	}
};


// UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange
struct JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9 
{
public:
	// Unity.Mathematics.float4 UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange::spriteAngles
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___spriteAngles_0;
	// Unity.Mathematics.int4 UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange::spriteData
	int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  ___spriteData_1;

public:
	inline static int32_t get_offset_of_spriteAngles_0() { return static_cast<int32_t>(offsetof(JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9, ___spriteAngles_0)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_spriteAngles_0() const { return ___spriteAngles_0; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_spriteAngles_0() { return &___spriteAngles_0; }
	inline void set_spriteAngles_0(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___spriteAngles_0 = value;
	}

	inline static int32_t get_offset_of_spriteData_1() { return static_cast<int32_t>(offsetof(JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9, ___spriteData_1)); }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  get_spriteData_1() const { return ___spriteData_1; }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 * get_address_of_spriteData_1() { return &___spriteData_1; }
	inline void set_spriteData_1(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  value)
	{
		___spriteData_1 = value;
	}
};


// UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint
struct JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18 
{
public:
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint::position
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___position_0;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint::ptData
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___ptData_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18, ___position_0)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_position_0() const { return ___position_0; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_ptData_1() { return static_cast<int32_t>(offsetof(JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18, ___ptData_1)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_ptData_1() const { return ___ptData_1; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_ptData_1() { return &___ptData_1; }
	inline void set_ptData_1(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___ptData_1 = value;
	}
};


// UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint
struct JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A 
{
public:
	// Unity.Mathematics.int4 UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint::cpData
	int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  ___cpData_0;
	// Unity.Mathematics.int4 UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint::exData
	int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  ___exData_1;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint::cpInfo
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___cpInfo_2;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint::position
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___position_3;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint::tangentLt
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___tangentLt_4;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint::tangentRt
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___tangentRt_5;

public:
	inline static int32_t get_offset_of_cpData_0() { return static_cast<int32_t>(offsetof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A, ___cpData_0)); }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  get_cpData_0() const { return ___cpData_0; }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 * get_address_of_cpData_0() { return &___cpData_0; }
	inline void set_cpData_0(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  value)
	{
		___cpData_0 = value;
	}

	inline static int32_t get_offset_of_exData_1() { return static_cast<int32_t>(offsetof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A, ___exData_1)); }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  get_exData_1() const { return ___exData_1; }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 * get_address_of_exData_1() { return &___exData_1; }
	inline void set_exData_1(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  value)
	{
		___exData_1 = value;
	}

	inline static int32_t get_offset_of_cpInfo_2() { return static_cast<int32_t>(offsetof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A, ___cpInfo_2)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_cpInfo_2() const { return ___cpInfo_2; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_cpInfo_2() { return &___cpInfo_2; }
	inline void set_cpInfo_2(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___cpInfo_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A, ___position_3)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_position_3() const { return ___position_3; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_tangentLt_4() { return static_cast<int32_t>(offsetof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A, ___tangentLt_4)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_tangentLt_4() const { return ___tangentLt_4; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_tangentLt_4() { return &___tangentLt_4; }
	inline void set_tangentLt_4(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___tangentLt_4 = value;
	}

	inline static int32_t get_offset_of_tangentRt_5() { return static_cast<int32_t>(offsetof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A, ___tangentRt_5)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_tangentRt_5() const { return ___tangentRt_5; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_tangentRt_5() { return &___tangentRt_5; }
	inline void set_tangentRt_5(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___tangentRt_5 = value;
	}
};


// UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo
struct JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675 
{
public:
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo::bottom
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___bottom_0;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo::top
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___top_1;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo::left
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___left_2;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo::right
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___right_3;
	// Unity.Mathematics.int2 UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo::cornerData
	int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___cornerData_4;

public:
	inline static int32_t get_offset_of_bottom_0() { return static_cast<int32_t>(offsetof(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675, ___bottom_0)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_bottom_0() const { return ___bottom_0; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_bottom_0() { return &___bottom_0; }
	inline void set_bottom_0(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___bottom_0 = value;
	}

	inline static int32_t get_offset_of_top_1() { return static_cast<int32_t>(offsetof(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675, ___top_1)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_top_1() const { return ___top_1; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_top_1() { return &___top_1; }
	inline void set_top_1(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___top_1 = value;
	}

	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675, ___left_2)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_left_2() const { return ___left_2; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___left_2 = value;
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675, ___right_3)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_right_3() const { return ___right_3; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___right_3 = value;
	}

	inline static int32_t get_offset_of_cornerData_4() { return static_cast<int32_t>(offsetof(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675, ___cornerData_4)); }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  get_cornerData_4() const { return ___cornerData_4; }
	inline int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 * get_address_of_cornerData_4() { return &___cornerData_4; }
	inline void set_cornerData_4(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  value)
	{
		___cornerData_4 = value;
	}
};


// UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint
struct JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD 
{
public:
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint::top
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___top_0;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint::bottom
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___bottom_1;

public:
	inline static int32_t get_offset_of_top_0() { return static_cast<int32_t>(offsetof(JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD, ___top_0)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_top_0() const { return ___top_0; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_top_0() { return &___top_0; }
	inline void set_top_0(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___top_0 = value;
	}

	inline static int32_t get_offset_of_bottom_1() { return static_cast<int32_t>(offsetof(JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD, ___bottom_1)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_bottom_1() const { return ___bottom_1; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_bottom_1() { return &___bottom_1; }
	inline void set_bottom_1(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___bottom_1 = value;
	}
};


// UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo
struct JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA 
{
public:
	// Unity.Mathematics.int4 UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo::sgInfo
	int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  ___sgInfo_0;
	// Unity.Mathematics.float4 UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo::spriteInfo
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___spriteInfo_1;

public:
	inline static int32_t get_offset_of_sgInfo_0() { return static_cast<int32_t>(offsetof(JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA, ___sgInfo_0)); }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  get_sgInfo_0() const { return ___sgInfo_0; }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 * get_address_of_sgInfo_0() { return &___sgInfo_0; }
	inline void set_sgInfo_0(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  value)
	{
		___sgInfo_0 = value;
	}

	inline static int32_t get_offset_of_spriteInfo_1() { return static_cast<int32_t>(offsetof(JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA, ___spriteInfo_1)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_spriteInfo_1() const { return ___spriteInfo_1; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_spriteInfo_1() { return &___spriteInfo_1; }
	inline void set_spriteInfo_1(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___spriteInfo_1 = value;
	}
};


// UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex
struct JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258 
{
public:
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex::pos
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___pos_0;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex::uv
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___uv_1;
	// Unity.Mathematics.float4 UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex::tan
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___tan_2;
	// Unity.Mathematics.float2 UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex::meta
	float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___meta_3;
	// Unity.Mathematics.int4 UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex::sprite
	int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  ___sprite_4;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258, ___pos_0)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_pos_0() const { return ___pos_0; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_uv_1() { return static_cast<int32_t>(offsetof(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258, ___uv_1)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_uv_1() const { return ___uv_1; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_uv_1() { return &___uv_1; }
	inline void set_uv_1(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___uv_1 = value;
	}

	inline static int32_t get_offset_of_tan_2() { return static_cast<int32_t>(offsetof(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258, ___tan_2)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_tan_2() const { return ___tan_2; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_tan_2() { return &___tan_2; }
	inline void set_tan_2(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___tan_2 = value;
	}

	inline static int32_t get_offset_of_meta_3() { return static_cast<int32_t>(offsetof(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258, ___meta_3)); }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274  get_meta_3() const { return ___meta_3; }
	inline float2_tCB7B81181978EDE17722C533A55E345D9A413274 * get_address_of_meta_3() { return &___meta_3; }
	inline void set_meta_3(float2_tCB7B81181978EDE17722C533A55E345D9A413274  value)
	{
		___meta_3 = value;
	}

	inline static int32_t get_offset_of_sprite_4() { return static_cast<int32_t>(offsetof(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258, ___sprite_4)); }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  get_sprite_4() const { return ___sprite_4; }
	inline int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067 * get_address_of_sprite_4() { return &___sprite_4; }
	inline void set_sprite_4(int4_t032A1A118EDA73DA66A2238859D535EC9B9CB067  value)
	{
		___sprite_4 = value;
	}
};


// UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo
struct JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02 
{
public:
	// Unity.Mathematics.float4 UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo::texRect
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___texRect_0;
	// Unity.Mathematics.float4 UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo::texData
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___texData_1;
	// Unity.Mathematics.float4 UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo::uvInfo
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___uvInfo_2;
	// Unity.Mathematics.float4 UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo::metaInfo
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___metaInfo_3;
	// Unity.Mathematics.float4 UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo::border
	float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  ___border_4;

public:
	inline static int32_t get_offset_of_texRect_0() { return static_cast<int32_t>(offsetof(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02, ___texRect_0)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_texRect_0() const { return ___texRect_0; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_texRect_0() { return &___texRect_0; }
	inline void set_texRect_0(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___texRect_0 = value;
	}

	inline static int32_t get_offset_of_texData_1() { return static_cast<int32_t>(offsetof(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02, ___texData_1)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_texData_1() const { return ___texData_1; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_texData_1() { return &___texData_1; }
	inline void set_texData_1(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___texData_1 = value;
	}

	inline static int32_t get_offset_of_uvInfo_2() { return static_cast<int32_t>(offsetof(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02, ___uvInfo_2)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_uvInfo_2() const { return ___uvInfo_2; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_uvInfo_2() { return &___uvInfo_2; }
	inline void set_uvInfo_2(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___uvInfo_2 = value;
	}

	inline static int32_t get_offset_of_metaInfo_3() { return static_cast<int32_t>(offsetof(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02, ___metaInfo_3)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_metaInfo_3() const { return ___metaInfo_3; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_metaInfo_3() { return &___metaInfo_3; }
	inline void set_metaInfo_3(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___metaInfo_3 = value;
	}

	inline static int32_t get_offset_of_border_4() { return static_cast<int32_t>(offsetof(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02, ___border_4)); }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  get_border_4() const { return ___border_4; }
	inline float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861 * get_address_of_border_4() { return &___border_4; }
	inline void set_border_4(float4_tE704FC67CF9AC634EBA989ADFB15A4737CDA2861  value)
	{
		___border_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities
struct Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Capabilities_t9DF0D3D327C4E491811A4DFCF21EBD355596C4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Bounds>
struct AlignOfHelper_1_t2E316ADE1A17D486619A0D6F51B9A00DC8D79D7D 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2E316ADE1A17D486619A0D6F51B9A00DC8D79D7D, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2E316ADE1A17D486619A0D6F51B9A00DC8D79D7D, ___data_1)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_data_1() const { return ___data_1; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>
struct AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>
struct AlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB, ___data_1)); }
	inline GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  get_data_1() const { return ___data_1; }
	inline GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32Enum>
struct AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Jobs.JobHandle>
struct AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599, ___data_1)); }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  get_data_1() const { return ___data_1; }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>
struct AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE, ___data_1)); }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  get_data_1() const { return ___data_1; }
	inline ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___data_1)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_data_1() const { return ___data_1; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.PreTile>
struct AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E, ___data_1)); }
	inline PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  get_data_1() const { return ___data_1; }
	inline PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.ShapeControlPoint>
struct AlignOfHelper_1_t6F5F8F87690736D65AC31146B3C91D627C3E2FE2 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6F5F8F87690736D65AC31146B3C91D627C3E2FE2, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6F5F8F87690736D65AC31146B3C91D627C3E2FE2, ___data_1)); }
	inline ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045  get_data_1() const { return ___data_1; }
	inline ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessEvent>
struct AlignOfHelper_1_tD304729227B51D20F0109DB35B52D5502F88973B 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD304729227B51D20F0109DB35B52D5502F88973B, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD304729227B51D20F0109DB35B52D5502F88973B, ___data_1)); }
	inline TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2  get_data_1() const { return ___data_1; }
	inline TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessHull>
struct AlignOfHelper_1_tF9F438D60D500D87E1E3C9DBF6B3B4A44ABECECE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF9F438D60D500D87E1E3C9DBF6B3B4A44ABECECE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF9F438D60D500D87E1E3C9DBF6B3B4A44ABECECE, ___data_1)); }
	inline TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9  get_data_1() const { return ___data_1; }
	inline TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessStar>
struct AlignOfHelper_1_tD2B57341577617210AD70DED4A04A601B3EEF8CE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD2B57341577617210AD70DED4A04A601B3EEF8CE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD2B57341577617210AD70DED4A04A601B3EEF8CE, ___data_1)); }
	inline TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631  get_data_1() const { return ___data_1; }
	inline TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.Vertex>
struct AlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD, ___data_1)); }
	inline Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  get_data_1() const { return ___data_1; }
	inline Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>
struct AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF, ___data_1)); }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  get_data_1() const { return ___data_1; }
	inline XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>
struct AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93, ___data_1)); }
	inline XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  get_data_1() const { return ___data_1; }
	inline XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>
struct AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE, ___data_1)); }
	inline PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  get_data_1() const { return ___data_1; }
	inline PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex>
struct AlignOfHelper_1_t1814C48FBCC61E54E5C7E1C88563999BCDD67436 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t1814C48FBCC61E54E5C7E1C88563999BCDD67436, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t1814C48FBCC61E54E5C7E1C88563999BCDD67436, ___data_1)); }
	inline LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40  get_data_1() const { return ___data_1; }
	inline LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/LightData>
struct AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE, ___data_1)); }
	inline LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  get_data_1() const { return ___data_1; }
	inline LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange>
struct AlignOfHelper_1_t5C01C9B4DCF72AF1F0B911E388E5D3032120D0DB 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5C01C9B4DCF72AF1F0B911E388E5D3032120D0DB, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5C01C9B4DCF72AF1F0B911E388E5D3032120D0DB, ___data_1)); }
	inline JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9  get_data_1() const { return ___data_1; }
	inline JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint>
struct AlignOfHelper_1_t83E4BC8AB640B5AA3ED7EB7D8D42C551D91C6751 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t83E4BC8AB640B5AA3ED7EB7D8D42C551D91C6751, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t83E4BC8AB640B5AA3ED7EB7D8D42C551D91C6751, ___data_1)); }
	inline JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18  get_data_1() const { return ___data_1; }
	inline JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint>
struct AlignOfHelper_1_t68D958B50438807D75BEF7A42FF662AA39B82A62 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t68D958B50438807D75BEF7A42FF662AA39B82A62, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t68D958B50438807D75BEF7A42FF662AA39B82A62, ___data_1)); }
	inline JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A  get_data_1() const { return ___data_1; }
	inline JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo>
struct AlignOfHelper_1_tA44C0BACB890D50FB260D4042116AA088ED05B86 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tA44C0BACB890D50FB260D4042116AA088ED05B86, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tA44C0BACB890D50FB260D4042116AA088ED05B86, ___data_1)); }
	inline JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675  get_data_1() const { return ___data_1; }
	inline JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint>
struct AlignOfHelper_1_t164E18035137CDA2FEA026705FFB987988EEC9BE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t164E18035137CDA2FEA026705FFB987988EEC9BE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t164E18035137CDA2FEA026705FFB987988EEC9BE, ___data_1)); }
	inline JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD  get_data_1() const { return ___data_1; }
	inline JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo>
struct AlignOfHelper_1_tED73721043C2AE6D8CD9F42AFA4D137F2722AAD8 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tED73721043C2AE6D8CD9F42AFA4D137F2722AAD8, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tED73721043C2AE6D8CD9F42AFA4D137F2722AAD8, ___data_1)); }
	inline JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA  get_data_1() const { return ___data_1; }
	inline JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex>
struct AlignOfHelper_1_t067B58DC9D71671022886F13EF159FE69AC4CBBA 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t067B58DC9D71671022886F13EF159FE69AC4CBBA, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t067B58DC9D71671022886F13EF159FE69AC4CBBA, ___data_1)); }
	inline JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258  get_data_1() const { return ___data_1; }
	inline JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo>
struct AlignOfHelper_1_t536D145AF098A1412B2099C32431CF8C0A954790 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t536D145AF098A1412B2099C32431CF8C0A954790, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t536D145AF098A1412B2099C32431CF8C0A954790, ___data_1)); }
	inline JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02  get_data_1() const { return ___data_1; }
	inline JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>
struct VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_SubsumedById_2() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_SubsumedById_2)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_SubsumedById_2() const { return ___m_SubsumedById_2; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_SubsumedById_2() { return &___m_SubsumedById_2; }
	inline void set_m_SubsumedById_2(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_SubsumedById_2 = value;
	}

	inline static int32_t get_offset_of_m_Center_3() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Center_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Center_3() const { return ___m_Center_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Center_3() { return &___m_Center_3; }
	inline void set_m_Center_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Center_3 = value;
	}

	inline static int32_t get_offset_of_m_Pose_4() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Pose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_4() const { return ___m_Pose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_4() { return &___m_Pose_4; }
	inline void set_m_Pose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_4 = value;
	}

	inline static int32_t get_offset_of_m_Size_5() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Size_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_5() const { return ___m_Size_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_5() { return &___m_Size_5; }
	inline void set_m_Size_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_5 = value;
	}

	inline static int32_t get_offset_of_m_Alignment_6() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Alignment_6)); }
	inline int32_t get_m_Alignment_6() const { return ___m_Alignment_6; }
	inline int32_t* get_address_of_m_Alignment_6() { return &___m_Alignment_6; }
	inline void set_m_Alignment_6(int32_t value)
	{
		___m_Alignment_6 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_7() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_TrackingState_7)); }
	inline int32_t get_m_TrackingState_7() const { return ___m_TrackingState_7; }
	inline int32_t* get_address_of_m_TrackingState_7() { return &___m_TrackingState_7; }
	inline void set_m_TrackingState_7(int32_t value)
	{
		___m_TrackingState_7 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_8() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_NativePtr_8)); }
	inline intptr_t get_m_NativePtr_8() const { return ___m_NativePtr_8; }
	inline intptr_t* get_address_of_m_NativePtr_8() { return &___m_NativePtr_8; }
	inline void set_m_NativePtr_8(intptr_t value)
	{
		___m_NativePtr_8 = value;
	}

	inline static int32_t get_offset_of_m_Classification_9() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5, ___m_Classification_9)); }
	inline int32_t get_m_Classification_9() const { return ___m_Classification_9; }
	inline int32_t* get_address_of_m_Classification_9() { return &___m_Classification_9; }
	inline void set_m_Classification_9(int32_t value)
	{
		___m_Classification_9 = value;
	}
};

struct BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_StaticFields, ___s_Default_0)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_s_Default_0() const { return ___s_Default_0; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// UnityEngine.Rendering.RasterState
struct RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E 
{
public:
	// UnityEngine.Rendering.CullMode UnityEngine.Rendering.RasterState::m_CullingMode
	int32_t ___m_CullingMode_1;
	// System.Int32 UnityEngine.Rendering.RasterState::m_OffsetUnits
	int32_t ___m_OffsetUnits_2;
	// System.Single UnityEngine.Rendering.RasterState::m_OffsetFactor
	float ___m_OffsetFactor_3;
	// System.Byte UnityEngine.Rendering.RasterState::m_DepthClip
	uint8_t ___m_DepthClip_4;
	// System.Byte UnityEngine.Rendering.RasterState::m_Conservative
	uint8_t ___m_Conservative_5;
	// System.Byte UnityEngine.Rendering.RasterState::m_Padding1
	uint8_t ___m_Padding1_6;
	// System.Byte UnityEngine.Rendering.RasterState::m_Padding2
	uint8_t ___m_Padding2_7;

public:
	inline static int32_t get_offset_of_m_CullingMode_1() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_CullingMode_1)); }
	inline int32_t get_m_CullingMode_1() const { return ___m_CullingMode_1; }
	inline int32_t* get_address_of_m_CullingMode_1() { return &___m_CullingMode_1; }
	inline void set_m_CullingMode_1(int32_t value)
	{
		___m_CullingMode_1 = value;
	}

	inline static int32_t get_offset_of_m_OffsetUnits_2() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_OffsetUnits_2)); }
	inline int32_t get_m_OffsetUnits_2() const { return ___m_OffsetUnits_2; }
	inline int32_t* get_address_of_m_OffsetUnits_2() { return &___m_OffsetUnits_2; }
	inline void set_m_OffsetUnits_2(int32_t value)
	{
		___m_OffsetUnits_2 = value;
	}

	inline static int32_t get_offset_of_m_OffsetFactor_3() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_OffsetFactor_3)); }
	inline float get_m_OffsetFactor_3() const { return ___m_OffsetFactor_3; }
	inline float* get_address_of_m_OffsetFactor_3() { return &___m_OffsetFactor_3; }
	inline void set_m_OffsetFactor_3(float value)
	{
		___m_OffsetFactor_3 = value;
	}

	inline static int32_t get_offset_of_m_DepthClip_4() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_DepthClip_4)); }
	inline uint8_t get_m_DepthClip_4() const { return ___m_DepthClip_4; }
	inline uint8_t* get_address_of_m_DepthClip_4() { return &___m_DepthClip_4; }
	inline void set_m_DepthClip_4(uint8_t value)
	{
		___m_DepthClip_4 = value;
	}

	inline static int32_t get_offset_of_m_Conservative_5() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Conservative_5)); }
	inline uint8_t get_m_Conservative_5() const { return ___m_Conservative_5; }
	inline uint8_t* get_address_of_m_Conservative_5() { return &___m_Conservative_5; }
	inline void set_m_Conservative_5(uint8_t value)
	{
		___m_Conservative_5 = value;
	}

	inline static int32_t get_offset_of_m_Padding1_6() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Padding1_6)); }
	inline uint8_t get_m_Padding1_6() const { return ___m_Padding1_6; }
	inline uint8_t* get_address_of_m_Padding1_6() { return &___m_Padding1_6; }
	inline void set_m_Padding1_6(uint8_t value)
	{
		___m_Padding1_6 = value;
	}

	inline static int32_t get_offset_of_m_Padding2_7() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Padding2_7)); }
	inline uint8_t get_m_Padding2_7() const { return ___m_Padding2_7; }
	inline uint8_t* get_address_of_m_Padding2_7() { return &___m_Padding2_7; }
	inline void set_m_Padding2_7(uint8_t value)
	{
		___m_Padding2_7 = value;
	}
};

struct RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E_StaticFields
{
public:
	// UnityEngine.Rendering.RasterState UnityEngine.Rendering.RasterState::defaultValue
	RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  ___defaultValue_0;

public:
	inline static int32_t get_offset_of_defaultValue_0() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E_StaticFields, ___defaultValue_0)); }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  get_defaultValue_0() const { return ___defaultValue_0; }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E * get_address_of_defaultValue_0() { return &___defaultValue_0; }
	inline void set_defaultValue_0(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  value)
	{
		___defaultValue_0 = value;
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Rendering.VisibleLight
struct VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B 
{
public:
	// UnityEngine.LightType UnityEngine.Rendering.VisibleLight::m_LightType
	int32_t ___m_LightType_0;
	// UnityEngine.Color UnityEngine.Rendering.VisibleLight::m_FinalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_FinalColor_1;
	// UnityEngine.Rect UnityEngine.Rendering.VisibleLight::m_ScreenRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_ScreenRect_2;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.VisibleLight::m_LocalToWorldMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_LocalToWorldMatrix_3;
	// System.Single UnityEngine.Rendering.VisibleLight::m_Range
	float ___m_Range_4;
	// System.Single UnityEngine.Rendering.VisibleLight::m_SpotAngle
	float ___m_SpotAngle_5;
	// System.Int32 UnityEngine.Rendering.VisibleLight::m_InstanceId
	int32_t ___m_InstanceId_6;
	// UnityEngine.Rendering.VisibleLightFlags UnityEngine.Rendering.VisibleLight::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_LightType_0() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_LightType_0)); }
	inline int32_t get_m_LightType_0() const { return ___m_LightType_0; }
	inline int32_t* get_address_of_m_LightType_0() { return &___m_LightType_0; }
	inline void set_m_LightType_0(int32_t value)
	{
		___m_LightType_0 = value;
	}

	inline static int32_t get_offset_of_m_FinalColor_1() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_FinalColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_FinalColor_1() const { return ___m_FinalColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_FinalColor_1() { return &___m_FinalColor_1; }
	inline void set_m_FinalColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_FinalColor_1 = value;
	}

	inline static int32_t get_offset_of_m_ScreenRect_2() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_ScreenRect_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_ScreenRect_2() const { return ___m_ScreenRect_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_ScreenRect_2() { return &___m_ScreenRect_2; }
	inline void set_m_ScreenRect_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_ScreenRect_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalToWorldMatrix_3() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_LocalToWorldMatrix_3)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_LocalToWorldMatrix_3() const { return ___m_LocalToWorldMatrix_3; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_LocalToWorldMatrix_3() { return &___m_LocalToWorldMatrix_3; }
	inline void set_m_LocalToWorldMatrix_3(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_LocalToWorldMatrix_3 = value;
	}

	inline static int32_t get_offset_of_m_Range_4() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_Range_4)); }
	inline float get_m_Range_4() const { return ___m_Range_4; }
	inline float* get_address_of_m_Range_4() { return &___m_Range_4; }
	inline void set_m_Range_4(float value)
	{
		___m_Range_4 = value;
	}

	inline static int32_t get_offset_of_m_SpotAngle_5() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_SpotAngle_5)); }
	inline float get_m_SpotAngle_5() const { return ___m_SpotAngle_5; }
	inline float* get_address_of_m_SpotAngle_5() { return &___m_SpotAngle_5; }
	inline void set_m_SpotAngle_5(float value)
	{
		___m_SpotAngle_5 = value;
	}

	inline static int32_t get_offset_of_m_InstanceId_6() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_InstanceId_6)); }
	inline int32_t get_m_InstanceId_6() const { return ___m_InstanceId_6; }
	inline int32_t* get_address_of_m_InstanceId_6() { return &___m_InstanceId_6; }
	inline void set_m_InstanceId_6(int32_t value)
	{
		___m_InstanceId_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRAnchor
struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRAnchor::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRAnchor::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRAnchor::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRAnchor::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRAnchor::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRAnchor UnityEngine.XR.ARSubsystems.XRAnchor::s_Default
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_StaticFields, ___s_Default_0)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_s_Default_0() const { return ___s_Default_0; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FixationPoint_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_LeftEyePose_4() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_LeftEyePose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LeftEyePose_4() const { return ___m_LeftEyePose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LeftEyePose_4() { return &___m_LeftEyePose_4; }
	inline void set_m_LeftEyePose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LeftEyePose_4 = value;
	}

	inline static int32_t get_offset_of_m_RightEyePose_5() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_RightEyePose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_RightEyePose_5() const { return ___m_RightEyePose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_RightEyePose_5() { return &___m_RightEyePose_5; }
	inline void set_m_RightEyePose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_RightEyePose_5 = value;
	}

	inline static int32_t get_offset_of_m_FixationPoint_6() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_FixationPoint_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FixationPoint_6() const { return ___m_FixationPoint_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FixationPoint_6() { return &___m_FixationPoint_6; }
	inline void set_m_FixationPoint_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FixationPoint_6 = value;
	}
};

struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___s_Default_7;

public:
	inline static int32_t get_offset_of_s_Default_7() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields, ___s_Default_7)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_s_Default_7() const { return ___s_Default_7; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_s_Default_7() { return &___s_Default_7; }
	inline void set_s_Default_7(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___s_Default_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBody
struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint
struct XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LocalScale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LocalPose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AnchorScale_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_AnchorPose_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Tracked
	int32_t ___m_Tracked_6;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_LocalScale_2() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalScale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LocalScale_2() const { return ___m_LocalScale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LocalScale_2() { return &___m_LocalScale_2; }
	inline void set_m_LocalScale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LocalScale_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalPose_3() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LocalPose_3() const { return ___m_LocalPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LocalPose_3() { return &___m_LocalPose_3; }
	inline void set_m_LocalPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LocalPose_3 = value;
	}

	inline static int32_t get_offset_of_m_AnchorScale_4() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorScale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AnchorScale_4() const { return ___m_AnchorScale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AnchorScale_4() { return &___m_AnchorScale_4; }
	inline void set_m_AnchorScale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AnchorScale_4 = value;
	}

	inline static int32_t get_offset_of_m_AnchorPose_5() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorPose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_AnchorPose_5() const { return ___m_AnchorPose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_AnchorPose_5() { return &___m_AnchorPose_5; }
	inline void set_m_AnchorPose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_AnchorPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_6() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Tracked_6)); }
	inline int32_t get_m_Tracked_6() const { return ___m_Tracked_6; }
	inline int32_t* get_address_of_m_Tracked_6() { return &___m_Tracked_6; }
	inline void set_m_Tracked_6(int32_t value)
	{
		___m_Tracked_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881  : public TrackingSubsystem_4_t1E41FDFF37B1529EED554D89481040B067E300EB
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Library
	XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * ___m_Library_4;

public:
	inline static int32_t get_offset_of_m_Library_4() { return static_cast<int32_t>(offsetof(XRObjectTrackingSubsystem_t3F31F4C8BCA868FE69BD8EC75BA5A1116026C881, ___m_Library_4)); }
	inline XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * get_m_Library_4() const { return ___m_Library_4; }
	inline XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C ** get_address_of_m_Library_4() { return &___m_Library_4; }
	inline void set_m_Library_4(XRReferenceObjectLibrary_t07704B2996E507F23EE3C99CFC3BB73A83C99A7C * value)
	{
		___m_Library_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Library_4), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipant
struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRParticipant::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRParticipant::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRParticipant::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRParticipant::m_SessionId
	Guid_t  ___m_SessionId_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_4() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F, ___m_SessionId_4)); }
	inline Guid_t  get_m_SessionId_4() const { return ___m_SessionId_4; }
	inline Guid_t * get_address_of_m_SessionId_4() { return &___m_SessionId_4; }
	inline void set_m_SessionId_4(Guid_t  value)
	{
		___m_SessionId_4 = value;
	}
};

struct XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipant UnityEngine.XR.ARSubsystems.XRParticipant::k_Default
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___k_Default_5;

public:
	inline static int32_t get_offset_of_k_Default_5() { return static_cast<int32_t>(offsetof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_StaticFields, ___k_Default_5)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_k_Default_5() const { return ___k_Default_5; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_k_Default_5() { return &___k_Default_5; }
	inline void set_k_Default_5(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___k_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55  : public SubsystemDescriptorWithProvider_2_t43C05E9C3928E04822F2DA791FFAC4C140DF10A5
{
public:
	// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CcapabilitiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55, ___U3CcapabilitiesU3Ek__BackingField_3)); }
	inline int32_t get_U3CcapabilitiesU3Ek__BackingField_3() const { return ___U3CcapabilitiesU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CcapabilitiesU3Ek__BackingField_3() { return &___U3CcapabilitiesU3Ek__BackingField_3; }
	inline void set_U3CcapabilitiesU3Ek__BackingField_3(int32_t value)
	{
		___U3CcapabilitiesU3Ek__BackingField_3 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPointCloud
struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRPointCloud::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRPointCloud::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRPointCloud::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};

struct XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRPointCloud UnityEngine.XR.ARSubsystems.XRPointCloud::s_Default
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_StaticFields, ___s_Default_0)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_s_Default_0() const { return ___s_Default_0; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycast
struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycast::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRRaycast::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRRaycast::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycast::m_Distance
	float ___m_Distance_5;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycast::m_HitTrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_HitTrackableId_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_Distance_5() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_Distance_5)); }
	inline float get_m_Distance_5() const { return ___m_Distance_5; }
	inline float* get_address_of_m_Distance_5() { return &___m_Distance_5; }
	inline void set_m_Distance_5(float value)
	{
		___m_Distance_5 = value;
	}

	inline static int32_t get_offset_of_m_HitTrackableId_6() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55, ___m_HitTrackableId_6)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_HitTrackableId_6() const { return ___m_HitTrackableId_6; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_HitTrackableId_6() { return &___m_HitTrackableId_6; }
	inline void set_m_HitTrackableId_6(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_HitTrackableId_6 = value;
	}
};

struct XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycast UnityEngine.XR.ARSubsystems.XRRaycast::s_Default
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_StaticFields, ___s_Default_0)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_HitType_4() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB, ___m_HitType_4)); }
	inline int32_t get_m_HitType_4() const { return ___m_HitType_4; }
	inline int32_t* get_address_of_m_HitType_4() { return &___m_HitType_4; }
	inline void set_m_HitType_4(int32_t value)
	{
		___m_HitType_4 = value;
	}
};

struct XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_StaticFields, ___s_Default_0)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_s_Default_0() const { return ___s_Default_0; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRReferencePoint
struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRReferencePoint::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRReferencePoint::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRReferencePoint::m_NativePtr
	intptr_t ___m_NativePtr_4;
	// System.Guid UnityEngine.XR.ARSubsystems.XRReferencePoint::m_SessionId
	Guid_t  ___m_SessionId_5;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_Pose_2() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_Pose_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_2() const { return ___m_Pose_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_2() { return &___m_Pose_2; }
	inline void set_m_Pose_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}

	inline static int32_t get_offset_of_m_SessionId_5() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634, ___m_SessionId_5)); }
	inline Guid_t  get_m_SessionId_5() const { return ___m_SessionId_5; }
	inline Guid_t * get_address_of_m_SessionId_5() { return &___m_SessionId_5; }
	inline void set_m_SessionId_5(Guid_t  value)
	{
		___m_SessionId_5 = value;
	}
};

struct XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRReferencePoint UnityEngine.XR.ARSubsystems.XRReferencePoint::s_Default
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_StaticFields, ___s_Default_0)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_s_Default_0() const { return ___s_Default_0; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedImage
struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Id
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_Id_1;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedImage::m_SourceImageId
	Guid_t  ___m_SourceImageId_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.XRTrackedImage::m_Size
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedImage::m_TrackingState
	int32_t ___m_TrackingState_5;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedImage::m_NativePtr
	intptr_t ___m_NativePtr_6;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Id_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_Id_1() const { return ___m_Id_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_Id_1 = value;
	}

	inline static int32_t get_offset_of_m_SourceImageId_2() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_SourceImageId_2)); }
	inline Guid_t  get_m_SourceImageId_2() const { return ___m_SourceImageId_2; }
	inline Guid_t * get_address_of_m_SourceImageId_2() { return &___m_SourceImageId_2; }
	inline void set_m_SourceImageId_2(Guid_t  value)
	{
		___m_SourceImageId_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_Size_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_5() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_TrackingState_5)); }
	inline int32_t get_m_TrackingState_5() const { return ___m_TrackingState_5; }
	inline int32_t* get_address_of_m_TrackingState_5() { return &___m_TrackingState_5; }
	inline void set_m_TrackingState_5(int32_t value)
	{
		___m_TrackingState_5 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_6() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F, ___m_NativePtr_6)); }
	inline intptr_t get_m_NativePtr_6() const { return ___m_NativePtr_6; }
	inline intptr_t* get_address_of_m_NativePtr_6() { return &___m_NativePtr_6; }
	inline void set_m_NativePtr_6(intptr_t value)
	{
		___m_NativePtr_6 = value;
	}
};

struct XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedImage UnityEngine.XR.ARSubsystems.XRTrackedImage::s_Default
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_StaticFields, ___s_Default_0)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_s_Default_0() const { return ___s_Default_0; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTrackedObject
struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRTrackedObject::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRTrackedObject::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTrackedObject::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// System.Guid UnityEngine.XR.ARSubsystems.XRTrackedObject::m_ReferenceObjectGuid
	Guid_t  ___m_ReferenceObjectGuid_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_ReferenceObjectGuid_4() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58, ___m_ReferenceObjectGuid_4)); }
	inline Guid_t  get_m_ReferenceObjectGuid_4() const { return ___m_ReferenceObjectGuid_4; }
	inline Guid_t * get_address_of_m_ReferenceObjectGuid_4() { return &___m_ReferenceObjectGuid_4; }
	inline void set_m_ReferenceObjectGuid_4(Guid_t  value)
	{
		___m_ReferenceObjectGuid_4 = value;
	}
};

struct XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRTrackedObject UnityEngine.XR.ARSubsystems.XRTrackedObject::s_Default
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_StaticFields, ___s_Default_5)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_s_Default_5() const { return ___s_Default_5; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___s_Default_5 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>
struct AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C, ___data_1)); }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  get_data_1() const { return ___data_1; }
	inline BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>
struct AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768, ___data_1)); }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  get_data_1() const { return ___data_1; }
	inline ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___data_1)); }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  get_data_1() const { return ___data_1; }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.VisibleLight>
struct AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C, ___data_1)); }
	inline VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  get_data_1() const { return ___data_1; }
	inline VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>
struct AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843, ___data_1)); }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  get_data_1() const { return ___data_1; }
	inline XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>
struct AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6, ___data_1)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_data_1() const { return ___data_1; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>
struct AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7, ___data_1)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_data_1() const { return ___data_1; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7, ___data_1)); }
	inline XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  get_data_1() const { return ___data_1; }
	inline XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>
struct AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD, ___data_1)); }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  get_data_1() const { return ___data_1; }
	inline XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>
struct AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800, ___data_1)); }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  get_data_1() const { return ___data_1; }
	inline XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>
struct AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62, ___data_1)); }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  get_data_1() const { return ___data_1; }
	inline XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>
struct AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310, ___data_1)); }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  get_data_1() const { return ___data_1; }
	inline XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>
struct AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728, ___data_1)); }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  get_data_1() const { return ___data_1; }
	inline XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>
struct AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180, ___data_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_data_1() const { return ___data_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>
struct AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372, ___data_1)); }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  get_data_1() const { return ___data_1; }
	inline XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>
struct AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E, ___data_1)); }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  get_data_1() const { return ___data_1; }
	inline XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  value)
	{
		___data_1 = value;
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rendering.RenderStateBlock
struct RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D 
{
public:
	// UnityEngine.Rendering.BlendState UnityEngine.Rendering.RenderStateBlock::m_BlendState
	BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  ___m_BlendState_0;
	// UnityEngine.Rendering.RasterState UnityEngine.Rendering.RenderStateBlock::m_RasterState
	RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  ___m_RasterState_1;
	// UnityEngine.Rendering.DepthState UnityEngine.Rendering.RenderStateBlock::m_DepthState
	DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  ___m_DepthState_2;
	// UnityEngine.Rendering.StencilState UnityEngine.Rendering.RenderStateBlock::m_StencilState
	StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  ___m_StencilState_3;
	// System.Int32 UnityEngine.Rendering.RenderStateBlock::m_StencilReference
	int32_t ___m_StencilReference_4;
	// UnityEngine.Rendering.RenderStateMask UnityEngine.Rendering.RenderStateBlock::m_Mask
	int32_t ___m_Mask_5;

public:
	inline static int32_t get_offset_of_m_BlendState_0() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_BlendState_0)); }
	inline BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  get_m_BlendState_0() const { return ___m_BlendState_0; }
	inline BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34 * get_address_of_m_BlendState_0() { return &___m_BlendState_0; }
	inline void set_m_BlendState_0(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  value)
	{
		___m_BlendState_0 = value;
	}

	inline static int32_t get_offset_of_m_RasterState_1() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_RasterState_1)); }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  get_m_RasterState_1() const { return ___m_RasterState_1; }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E * get_address_of_m_RasterState_1() { return &___m_RasterState_1; }
	inline void set_m_RasterState_1(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  value)
	{
		___m_RasterState_1 = value;
	}

	inline static int32_t get_offset_of_m_DepthState_2() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_DepthState_2)); }
	inline DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  get_m_DepthState_2() const { return ___m_DepthState_2; }
	inline DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA * get_address_of_m_DepthState_2() { return &___m_DepthState_2; }
	inline void set_m_DepthState_2(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  value)
	{
		___m_DepthState_2 = value;
	}

	inline static int32_t get_offset_of_m_StencilState_3() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_StencilState_3)); }
	inline StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  get_m_StencilState_3() const { return ___m_StencilState_3; }
	inline StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007 * get_address_of_m_StencilState_3() { return &___m_StencilState_3; }
	inline void set_m_StencilState_3(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  value)
	{
		___m_StencilState_3 = value;
	}

	inline static int32_t get_offset_of_m_StencilReference_4() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_StencilReference_4)); }
	inline int32_t get_m_StencilReference_4() const { return ___m_StencilReference_4; }
	inline int32_t* get_address_of_m_StencilReference_4() { return &___m_StencilReference_4; }
	inline void set_m_StencilReference_4(int32_t value)
	{
		___m_StencilReference_4 = value;
	}

	inline static int32_t get_offset_of_m_Mask_5() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_Mask_5)); }
	inline int32_t get_m_Mask_5() const { return ___m_Mask_5; }
	inline int32_t* get_address_of_m_Mask_5() { return &___m_Mask_5; }
	inline void set_m_Mask_5(int32_t value)
	{
		___m_Mask_5 = value;
	}
};


// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeComponent::active
	bool ___active_4;
	// System.String UnityEngine.Rendering.VolumeComponent::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter> UnityEngine.Rendering.VolumeComponent::<parameters>k__BackingField
	ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * ___U3CparametersU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.VolumeComponent::m_AdvancedMode
	bool ___m_AdvancedMode_7;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___U3CdisplayNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_5() const { return ___U3CdisplayNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_5() { return &___U3CdisplayNameU3Ek__BackingField_5; }
	inline void set_U3CdisplayNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___U3CparametersU3Ek__BackingField_6)); }
	inline ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * get_U3CparametersU3Ek__BackingField_6() const { return ___U3CparametersU3Ek__BackingField_6; }
	inline ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 ** get_address_of_U3CparametersU3Ek__BackingField_6() { return &___U3CparametersU3Ek__BackingField_6; }
	inline void set_U3CparametersU3Ek__BackingField_6(ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * value)
	{
		___U3CparametersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CparametersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_AdvancedMode_7() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___m_AdvancedMode_7)); }
	inline bool get_m_AdvancedMode_7() const { return ___m_AdvancedMode_7; }
	inline bool* get_address_of_m_AdvancedMode_7() { return &___m_AdvancedMode_7; }
	inline void set_m_AdvancedMode_7(bool value)
	{
		___m_AdvancedMode_7 = value;
	}
};


// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeProfile::components
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___components_4;
	// System.Boolean UnityEngine.Rendering.VolumeProfile::isDirty
	bool ___isDirty_5;

public:
	inline static int32_t get_offset_of_components_4() { return static_cast<int32_t>(offsetof(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821, ___components_4)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_components_4() const { return ___components_4; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_components_4() { return &___components_4; }
	inline void set_components_4(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___components_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_4), (void*)value);
	}

	inline static int32_t get_offset_of_isDirty_5() { return static_cast<int32_t>(offsetof(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821, ___isDirty_5)); }
	inline bool get_isDirty_5() const { return ___isDirty_5; }
	inline bool* get_address_of_isDirty_5() { return &___isDirty_5; }
	inline void set_isDirty_5(bool value)
	{
		___isDirty_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XREnvironmentProbe
struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_Size
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Size_4;
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TextureDescriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_TextureDescriptor_5;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_TrackingState
	int32_t ___m_TrackingState_6;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XREnvironmentProbe::m_NativePtr
	intptr_t ___m_NativePtr_7;

public:
	inline static int32_t get_offset_of_m_TrackableId_1() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackableId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_1() const { return ___m_TrackableId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_1() { return &___m_TrackableId_1; }
	inline void set_m_TrackableId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_1 = value;
	}

	inline static int32_t get_offset_of_m_Scale_2() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Scale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale_2() const { return ___m_Scale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale_2() { return &___m_Scale_2; }
	inline void set_m_Scale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale_2 = value;
	}

	inline static int32_t get_offset_of_m_Pose_3() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Pose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_3() const { return ___m_Pose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_3() { return &___m_Pose_3; }
	inline void set_m_Pose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_3 = value;
	}

	inline static int32_t get_offset_of_m_Size_4() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_Size_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Size_4() const { return ___m_Size_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Size_4() { return &___m_Size_4; }
	inline void set_m_Size_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Size_4 = value;
	}

	inline static int32_t get_offset_of_m_TextureDescriptor_5() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TextureDescriptor_5)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_TextureDescriptor_5() const { return ___m_TextureDescriptor_5; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_TextureDescriptor_5() { return &___m_TextureDescriptor_5; }
	inline void set_m_TextureDescriptor_5(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_TextureDescriptor_5 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_6() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_TrackingState_6)); }
	inline int32_t get_m_TrackingState_6() const { return ___m_TrackingState_6; }
	inline int32_t* get_address_of_m_TrackingState_6() { return &___m_TrackingState_6; }
	inline void set_m_TrackingState_6(int32_t value)
	{
		___m_TrackingState_6 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_7() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C, ___m_NativePtr_7)); }
	inline intptr_t get_m_NativePtr_7() const { return ___m_NativePtr_7; }
	inline intptr_t* get_address_of_m_NativePtr_7() { return &___m_NativePtr_7; }
	inline void set_m_NativePtr_7(intptr_t value)
	{
		___m_NativePtr_7 = value;
	}
};

struct XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XREnvironmentProbe UnityEngine.XR.ARSubsystems.XREnvironmentProbe::s_Default
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___s_Default_0;

public:
	inline static int32_t get_offset_of_s_Default_0() { return static_cast<int32_t>(offsetof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_StaticFields, ___s_Default_0)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_s_Default_0() const { return ___s_Default_0; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_s_Default_0() { return &___s_Default_0; }
	inline void set_s_Default_0(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___s_Default_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_UVs_3;

public:
	inline static int32_t get_offset_of_m_Vertices_0() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Vertices_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Vertices_0() const { return ___m_Vertices_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Vertices_0() { return &___m_Vertices_0; }
	inline void set_m_Vertices_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Vertices_0 = value;
	}

	inline static int32_t get_offset_of_m_Normals_1() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Normals_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Normals_1() const { return ___m_Normals_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Normals_1() { return &___m_Normals_1; }
	inline void set_m_Normals_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Normals_1 = value;
	}

	inline static int32_t get_offset_of_m_Indices_2() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Indices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Indices_2() const { return ___m_Indices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Indices_2() { return &___m_Indices_2; }
	inline void set_m_Indices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Indices_2 = value;
	}

	inline static int32_t get_offset_of_m_UVs_3() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_UVs_3)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_UVs_3() const { return ___m_UVs_3; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_UVs_3() { return &___m_UVs_3; }
	inline void set_m_UVs_3(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_UVs_3 = value;
	}
};


// UnityEngine.XR.Management.XRLoader
struct XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * ___U3CactiveLoaderU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_Loaders_8)); }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t6331523A19E51FB87CA899920C03B10A48A562B0 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_RegisteredLoaders_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___m_RegisteredLoaders_9)); }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * get_m_RegisteredLoaders_9() const { return ___m_RegisteredLoaders_9; }
	inline HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 ** get_address_of_m_RegisteredLoaders_9() { return &___m_RegisteredLoaders_9; }
	inline void set_m_RegisteredLoaders_9(HashSet_1_t0BB7AD0707F32BD77A251670A64E2F9355AC13F6 * value)
	{
		___m_RegisteredLoaders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RegisteredLoaders_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CactiveLoaderU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F, ___U3CactiveLoaderU3Ek__BackingField_10)); }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * get_U3CactiveLoaderU3Ek__BackingField_10() const { return ___U3CactiveLoaderU3Ek__BackingField_10; }
	inline XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B ** get_address_of_U3CactiveLoaderU3Ek__BackingField_10() { return &___U3CactiveLoaderU3Ek__BackingField_10; }
	inline void set_U3CactiveLoaderU3Ek__BackingField_10(XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * value)
	{
		___U3CactiveLoaderU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveLoaderU3Ek__BackingField_10), (void*)value);
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.RenderStateBlock>
struct AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5, ___data_1)); }
	inline RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  get_data_1() const { return ___data_1; }
	inline RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>
struct AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690, ___data_1)); }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  get_data_1() const { return ___data_1; }
	inline XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  value)
	{
		___data_1 = value;
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013  : public XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.Rendering.Volume
struct Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.Rendering.Volume::isGlobal
	bool ___isGlobal_4;
	// System.Single UnityEngine.Rendering.Volume::priority
	float ___priority_5;
	// System.Single UnityEngine.Rendering.Volume::blendDistance
	float ___blendDistance_6;
	// System.Single UnityEngine.Rendering.Volume::weight
	float ___weight_7;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::sharedProfile
	VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * ___sharedProfile_8;
	// System.Int32 UnityEngine.Rendering.Volume::m_PreviousLayer
	int32_t ___m_PreviousLayer_9;
	// System.Single UnityEngine.Rendering.Volume::m_PreviousPriority
	float ___m_PreviousPriority_10;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::m_InternalProfile
	VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * ___m_InternalProfile_11;

public:
	inline static int32_t get_offset_of_isGlobal_4() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___isGlobal_4)); }
	inline bool get_isGlobal_4() const { return ___isGlobal_4; }
	inline bool* get_address_of_isGlobal_4() { return &___isGlobal_4; }
	inline void set_isGlobal_4(bool value)
	{
		___isGlobal_4 = value;
	}

	inline static int32_t get_offset_of_priority_5() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___priority_5)); }
	inline float get_priority_5() const { return ___priority_5; }
	inline float* get_address_of_priority_5() { return &___priority_5; }
	inline void set_priority_5(float value)
	{
		___priority_5 = value;
	}

	inline static int32_t get_offset_of_blendDistance_6() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___blendDistance_6)); }
	inline float get_blendDistance_6() const { return ___blendDistance_6; }
	inline float* get_address_of_blendDistance_6() { return &___blendDistance_6; }
	inline void set_blendDistance_6(float value)
	{
		___blendDistance_6 = value;
	}

	inline static int32_t get_offset_of_weight_7() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___weight_7)); }
	inline float get_weight_7() const { return ___weight_7; }
	inline float* get_address_of_weight_7() { return &___weight_7; }
	inline void set_weight_7(float value)
	{
		___weight_7 = value;
	}

	inline static int32_t get_offset_of_sharedProfile_8() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___sharedProfile_8)); }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * get_sharedProfile_8() const { return ___sharedProfile_8; }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 ** get_address_of_sharedProfile_8() { return &___sharedProfile_8; }
	inline void set_sharedProfile_8(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * value)
	{
		___sharedProfile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedProfile_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousLayer_9() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_PreviousLayer_9)); }
	inline int32_t get_m_PreviousLayer_9() const { return ___m_PreviousLayer_9; }
	inline int32_t* get_address_of_m_PreviousLayer_9() { return &___m_PreviousLayer_9; }
	inline void set_m_PreviousLayer_9(int32_t value)
	{
		___m_PreviousLayer_9 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPriority_10() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_PreviousPriority_10)); }
	inline float get_m_PreviousPriority_10() const { return ___m_PreviousPriority_10; }
	inline float* get_address_of_m_PreviousPriority_10() { return &___m_PreviousPriority_10; }
	inline void set_m_PreviousPriority_10(float value)
	{
		___m_PreviousPriority_10 = value;
	}

	inline static int32_t get_offset_of_m_InternalProfile_11() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_InternalProfile_11)); }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * get_m_InternalProfile_11() const { return ___m_InternalProfile_11; }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 ** get_address_of_m_InternalProfile_11() { return &___m_InternalProfile_11; }
	inline void set_m_InternalProfile_11(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * value)
	{
		___m_InternalProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalProfile_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m38B4E05D0D6833808BCD7BA4F31DF9F4ECD76170_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_m2EECB432E6640214DAE05A1C8A2837218168F92F_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCF7A6BEA6AA09ED92024102331E4196808C07E49_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m0E79322235A1764C7DC2E4312AA11C3E20E344D6_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_gshared (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C_gshared (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B_gshared (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6_gshared (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.DynamicArray`1<System.Object>::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m0D404D0EDA77F50046B5592673CEADED3EB1DDF9_gshared_inline (DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.DynamicArray`1<System.Object>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m3CEAE3B337E1361CC36C95D76BF653D9ADD630A2_gshared (DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D * __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method);
// T& UnityEngine.Rendering.DynamicArray`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject ** DynamicArray_1_get_Item_m8D97D96230A22384E91DC49B6855A34063768376_gshared (DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::GetEnumerator()
inline Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  Dictionary_2_GetEnumerator_m8CB80146D2C247B4315AB7A79C5C67E08F862EE2 (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  (*) (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m38B4E05D0D6833808BCD7BA4F31DF9F4ECD76170_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Current()
inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  Enumerator_get_Current_mC656FDD32134143E231CE6A866E81702847EFAB9_inline (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  (*) (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *, const RuntimeMethod*))Enumerator_get_Current_m2EECB432E6640214DAE05A1C8A2837218168F92F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m93C7B2BDE59324C3FFA08FD3FD69981082CACD94_inline (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCF7A6BEA6AA09ED92024102331E4196808C07E49_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Value()
inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * KeyValuePair_2_get_Value_m86F64A1D37EF87FBFCC6BEFFE32C2BE4381B600B_inline (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * (*) (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m0E79322235A1764C7DC2E4312AA11C3E20E344D6_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::GetEnumerator()
inline Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  List_1_GetEnumerator_m166497E66EA562EAF3395D3553053404165F9EF8 (List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  (*) (List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>::get_Current()
inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * Enumerator_get_Current_mE0D1F096640F75B4F55E85582A564357F3CEB76D_inline (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 * __this, const RuntimeMethod* method)
{
	return ((  Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * (*) (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::get_profileRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C (Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>::MoveNext()
inline bool Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692 (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::MoveNext()
inline bool Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeProfile::Add(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * VolumeProfile_Add_m79223D2CF959C9E6D63D9FF846FF1B6A3B00FD10 (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, bool ___overrides1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.VolumeProfile::Has(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_m4B7E73066F4F7D7A45656DA57A7C994260BD089D (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.VolumeProfile::Remove(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_m932397236384F0E991CE7113270E019856DB5E86 (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>::GetEnumerator()
inline Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  (*) (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::get_Current()
inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_inline (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB * __this, const RuntimeMethod* method)
{
	return ((  VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * (*) (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::MoveNext()
inline bool Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143 (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeStack::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * VolumeStack_GetComponent_m2C8AE635D2EE506EE0C2C436D6F5017DB10B288E (VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5 (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655 (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, const RuntimeMethod*))NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292 (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729 (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
inline void NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *, const RuntimeMethod*))NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6 (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mA3116811637BD8A6782E26B6B9155243CB275B6A (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_mA8F31A10EE1129768E13ACC4DC847B05EAD2A055_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mABDDF60E8F19169E888E02538B13268ED5437019 (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * __this, Type_t * ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *, Type_t *, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mE985A35FC727FA9F519564063C5C5063209ADDA8_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystemDescriptor__ctor_mE44B346A0A5A035B7DFC7430336DDADED7A4F6A5 (XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * __this, String_t* ___id0, Type_t * ___providerType1, Type_t * ___subsystemTypeOverride2, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___capabilities3, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688 (SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E * ___descriptor0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor__ctor_m83A6821A71C68D58354ACE8289E8F621F2E183DC (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * __this, String_t* ___subsystemId0, Type_t * ___providerType1, Type_t * ___subsystemTypeOverride2, int32_t ___capabilities3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_size()
inline int32_t DynamicArray_1_get_size_m45BF02C8D0C22798BED29BCA0C5470C01CB2A015_inline (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *, const RuntimeMethod*))DynamicArray_1_get_size_m0D404D0EDA77F50046B5592673CEADED3EB1DDF9_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::Resize(System.Int32,System.Boolean)
inline void DynamicArray_1_Resize_mF6CDBE3B7E4118B28D15C20B1CA3DE54A23AB9FC (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * __this, int32_t ___newSize0, bool ___keepContent1, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m3CEAE3B337E1361CC36C95D76BF653D9ADD630A2_gshared)(__this, ___newSize0, ___keepContent1, method);
}
// T& UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_Item(System.Int32)
inline IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 ** DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251 (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 ** (*) (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_m8D97D96230A22384E91DC49B6855A34063768376_gshared)(__this, ___index0, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_m5B8EA96775DCE01BCC4CD55FD34E2B45A0708B45_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m77658C06116FC1925F12808CD94B42C74296C78F_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m66E11B84ED5A3379F959BDE194177DC7B2EAF3BE_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mE3DD666AF9235E7CDE1726888159E12A81914DA9_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_m9B806FEB65F8C39EDB94F207AA8F3212C0F33E49_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_mDBAC049417B78C4EE62A04CDA695D936F1E7F0EE_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Mathematics.float2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisfloat2_tCB7B81181978EDE17722C533A55E345D9A413274_m88CB3CB9E9640F0E6A415492866D674706CE987F_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Mathematics.int2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisint2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_m9D0D89614CC8F5D0BAAA12BE12227E73259FDC24_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.Mathematics.uint4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisuint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_mCCF05763FC02F2F6504F6E79B184C391CC43A1E3_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_m329A06B7212770880375D68FDFC58FEB58094C67_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m2C5A59E3B3A4E88AA6ACA60266D98DF28CBB0CC1_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40_m66986FA7A0FDB0ADC13BCA2D8D64121DE32FC07E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.Universal.ShaderInput/LightData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_m23F32A40FD96832FA9583CA288997FF619660362_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9_m8DC2528F14DD01C06AAD856F3A4FC127C890A5F9_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18_m57692B92859B6F71A9CC1658B637EC49B1A72D74_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A_m26BF04882E3EE7D015077CFBD6B82081C528ED77_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675_mF4AB8CE52DD9FD113ADACFBCE42268D6DB8EF3F7_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD_m4175F509998F2D22DD589E2F493D864BA8BE4B81_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA_mE38F65D3A572AA4A31FBC41196A3570893A13964_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258_mB6C38CAA72EA60A1436071041349DAC888137B9E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisJobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02_m080B8B0CF6BE845874EE3BE13D7B026923B095FC_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  UnsafeUtility_ReadArrayElement_TisTriangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11_mF924DDF07467F064A04DC35688879DF712B682C8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 );
		Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  L_3 = (*(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  UnsafeUtility_ReadArrayElement_TisTriangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9_mF9A4281A8544CB4016D0EAC2EF562CCF19DEDFF7_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 );
		Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  L_3 = (*(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m1440CE5633412E3C1D3001135F2B0F61E8386B17_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  UnsafeUtility_ReadArrayElement_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m8B71E071723EB5FA0F556F1F00FF632640F6390B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_3 = (*(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Bounds>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  UnsafeUtility_ReadArrayElement_TisBounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_mDCC7A13EBD941BE243E471A705820F5FD4CE8A50_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 );
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_3 = (*(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m67D8855CBE489026EAF5EA8C90218F55725F53D3_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.ByteEnum>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_m9E28012EB43CAEE37384DCEA0D51007E2FA28A8B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  UnsafeUtility_ReadArrayElement_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_mA722A9532B666F133A3D071761FE6D4E0A5D4ABE_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = (*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  UnsafeUtility_ReadArrayElement_TisGfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66_m5C11333C0CA730BD834315ED2393143EECA77A0F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 );
		GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  L_3 = (*(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Hash128>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  UnsafeUtility_ReadArrayElement_TisHash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A_mC68193AFADB58ABBBFB7651FBC87E37887793983_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A );
		Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  L_3 = (*(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m9E085E01C3226E293E23B792BA610B180A700E9F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32Enum>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m5D7BA30242DA8DE39AB65F11A5726CDA1BA6B631_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Jobs.JobHandle>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  UnsafeUtility_ReadArrayElement_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_mEC3F03D7EF44DF3B18D41800E89F776293D6644A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 );
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_3 = (*(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mFE6D2FB242F4F5B5C50CC2EEF07B7D8A439C4D1D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  UnsafeUtility_ReadArrayElement_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m58122DB52BDE48EE21B0C0A3AADAD774DC1FE929_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  L_3 = (*(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_m0323D0A3D6692F6B69EA44D6E7B2AA64F66C4777_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mFD2701F529985122FF354FE234A2AB6E5D47FC0C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.PreTile>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  UnsafeUtility_ReadArrayElement_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_m3E94B5E4C849F29F274C9D7740BA72BF44412094_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  L_3 = (*(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  UnsafeUtility_ReadArrayElement_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m51687B7B273B0AEFBB76C9637812451DBB2B1CBB_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = (*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.RenderStateBlock>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  UnsafeUtility_ReadArrayElement_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_mA0723D31AF88BDC1EFC8E66F64CBFB56641755ED_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  L_3 = (*(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.ShaderTagId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  UnsafeUtility_ReadArrayElement_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_m35D680CC07225F56016C2BFB56B332107465BF37_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  L_3 = (*(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.ShapeControlPoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045  UnsafeUtility_ReadArrayElement_TisShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045_m6C7ECAE8DABB4657EA162A6C8F2D772E698E63D3_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045 );
		ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045  L_3 = (*(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Single>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnsafeUtility_ReadArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m766386D953CA39A870CC875E4CD80980219BE408_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = (*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (float)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SplinePointMetaData>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C  UnsafeUtility_ReadArrayElement_TisSplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C_m10CFF5FF83810D7B2E57BE958E17780FB1CF6A2A_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C );
		SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C  L_3 = (*(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<SpriteShapeGeometryInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  UnsafeUtility_ReadArrayElement_TisSpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666_mC153A769A62A0C17CD4969CFB26B623D001F93ED_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 );
		SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  L_3 = (*(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeSegment>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C  UnsafeUtility_ReadArrayElement_TisSpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C_m7477EEB7BECC803C68D255D7B5E1791E15169677_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C );
		SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C  L_3 = (*(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.UTess.TessCell>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6  UnsafeUtility_ReadArrayElement_TisTessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6_mFD310F3AE0A5BBAEC8A83594A54A8E5FF0B8DE83_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6 );
		TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6  L_3 = (*(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.UTess.TessEdge>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7  UnsafeUtility_ReadArrayElement_TisTessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7_m0B30156136BB80DB86C7E7DAF265380D95A7A070_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7 );
		TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7  L_3 = (*(TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.UTess.TessEvent>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2  UnsafeUtility_ReadArrayElement_TisTessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2_m259271D17AD64886657CE2CBA9229E2E58ED668B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2 );
		TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2  L_3 = (*(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.UTess.TessHull>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9  UnsafeUtility_ReadArrayElement_TisTessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9_m8F87BD2C71CB6A6E179EA784FA23444917225D93_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9 );
		TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9  L_3 = (*(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.UTess.TessStar>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631  UnsafeUtility_ReadArrayElement_TisTessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631_m7BC1B0246BDA236E383AC8B695CECC83B064ED38_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631 );
		TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631  L_3 = (*(TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  UnsafeUtility_ReadArrayElement_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_m4DB34D0400E3DC3C6C550AEB69AF72BE851D7EE1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = (*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt16>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mAD3595069061E511CC242714CD83B823ABE3EDF0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint16_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m8B30CE48941B272F43A2D0D65615C8CFBCBC30FF_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt64>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mEC4617DA4CA671A36D90FC3007489B65A0C5E3E6_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint64_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UnsafeUtility_ReadArrayElement_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m5D162EF0FB10945EF6979FCE63CCE073195F739C_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UnsafeUtility_ReadArrayElement_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m485204817928822A0786F4A255FD3FD0AEEBD0C0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  UnsafeUtility_ReadArrayElement_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m3CAA4F6E851DC49573FD828DD7935FDDD2C2F8FD_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = (*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.UIElements.Vertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  UnsafeUtility_ReadArrayElement_TisVertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_m9C87CE15BF9770D04A0218EC408A054F9CD0FD01_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E );
		Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  L_3 = (*(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  UnsafeUtility_ReadArrayElement_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_m5CE9D809C9090AF05D6192152AFC2943EF623035_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  L_3 = (*(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  UnsafeUtility_ReadArrayElement_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m61E4CB5A5C21CFC4611B0450E1BAD6FEA1740EDE_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = (*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  UnsafeUtility_ReadArrayElement_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m02835C4986AB637C12FC14F1A4D52507AD8BB177_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_3 = (*(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  UnsafeUtility_ReadArrayElement_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_m9A0FAE4157CA12B6D0FC74CD40A97B6F1D0B6ED2_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_3 = (*(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  UnsafeUtility_ReadArrayElement_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_m09E6257E9BE8BF833561A1F35CAA5DEDF6494B6B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_3 = (*(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  UnsafeUtility_ReadArrayElement_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_mE416B2185AB06DE39D6F9F5601DBF064DBA7D4D8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_3 = (*(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  UnsafeUtility_ReadArrayElement_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_m7494ABB08BC18C13FD07D6B35829A9DA0E7DCB2E_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_3 = (*(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  UnsafeUtility_ReadArrayElement_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_mF1180388B2E0400A7E0203C62D5BE013122F5013_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  L_3 = (*(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  UnsafeUtility_ReadArrayElement_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_mDB41B409A49D9291F132FA1F9DE834FA5ECF21CA_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_3 = (*(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  UnsafeUtility_ReadArrayElement_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m27F7A935DEC95962DFFF25965005450082916FAB_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_3 = (*(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  UnsafeUtility_ReadArrayElement_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_m3573B09F37838FF85D5A4FFC820F05697E652287_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_3 = (*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  UnsafeUtility_ReadArrayElement_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m1F55FBCA0CB90C34E4E382421F998246042B7C2E_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  L_3 = (*(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  UnsafeUtility_ReadArrayElement_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m005A848C59EC9824C6FF955CFBF684EC44EA2B4B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_3 = (*(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  UnsafeUtility_ReadArrayElement_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mB5678CD838BD9D4DAB29CB8855313C16099ED510_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_3 = (*(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  UnsafeUtility_ReadArrayElement_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_mBDE55B5F3B93324EBF5EAF873DAE2D996F690247_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_3 = (*(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  UnsafeUtility_ReadArrayElement_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_mFA3F0B2D1BD8E43FBC897B3C40FDDF8D402874A3_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_3 = (*(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Mathematics.float2>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float2_tCB7B81181978EDE17722C533A55E345D9A413274  UnsafeUtility_ReadArrayElement_Tisfloat2_tCB7B81181978EDE17722C533A55E345D9A413274_m2B4CDB3658D56C66435B527758253D6781B2B5D0_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float2_tCB7B81181978EDE17722C533A55E345D9A413274 );
		float2_tCB7B81181978EDE17722C533A55E345D9A413274  L_3 = (*(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (float2_tCB7B81181978EDE17722C533A55E345D9A413274 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Mathematics.int2>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  UnsafeUtility_ReadArrayElement_Tisint2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_m01D3AC07FB0608497AD7BF63F8208DBCCAC669B9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 );
		int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  L_3 = (*(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Mathematics.uint4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  UnsafeUtility_ReadArrayElement_Tisuint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_m94FC0B87550C8FED62F43B8E33B9567316C8E6DA_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 );
		uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  L_3 = (*(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  UnsafeUtility_ReadArrayElement_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_mC443F9AD4C7462E0052038B8BD31F7E109D607F9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  L_3 = (*(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  UnsafeUtility_ReadArrayElement_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m01F432842D5821BAC89B20A1D79ED28AA83F1165_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  L_3 = (*(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40  UnsafeUtility_ReadArrayElement_TisLightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40_m223CC60454E9CB6192C50F98E1748F1CEDDBE7D8_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40 );
		LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40  L_3 = (*(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.ShaderInput/LightData>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  UnsafeUtility_ReadArrayElement_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_mB460B6762EE68EC3C8E522F4236143AF09AB935D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  L_3 = (*(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9  UnsafeUtility_ReadArrayElement_TisJobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9_mF37757E55CFA3A6F2F9A4F5927DD7335E4ACCF98_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9 );
		JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9  L_3 = (*(JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18  UnsafeUtility_ReadArrayElement_TisJobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18_m7257A8270766659F8365AE3F940534B62D69557B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18 );
		JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18  L_3 = (*(JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A  UnsafeUtility_ReadArrayElement_TisJobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A_mBF1FA551283F9E49E50A315D22836458EC5B53E5_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A );
		JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A  L_3 = (*(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675  UnsafeUtility_ReadArrayElement_TisJobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675_mFB2FB175527292A4420CD07A8DA75E27B7542AD2_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675 );
		JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675  L_3 = (*(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD  UnsafeUtility_ReadArrayElement_TisJobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD_mAD6A7B694B73C780C1E12EB81532C33E82A724A6_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD );
		JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD  L_3 = (*(JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA  UnsafeUtility_ReadArrayElement_TisJobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA_m0A46DAA36D2C865FDDA5596C2B0ADBEC5E3DE37F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA );
		JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA  L_3 = (*(JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258  UnsafeUtility_ReadArrayElement_TisJobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258_m5AFC4BBFA15BB164B1ADCF4E26138C7CE30D055B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258 );
		JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258  L_3 = (*(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02  UnsafeUtility_ReadArrayElement_TisJobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02_m46C5803A5858087CF8F0D76CDE04A973886FCF63_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02 );
		JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02  L_3 = (*(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC981FFB9CB46E5B97114FB370095533F7F3DC95E_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  UnsafeUtility_ReadArrayElementWithStride_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m0F2806F0B08B406CA532DF31B782BF13C317190A_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = (*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Int32>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElementWithStride_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDDAFAAFE7BA3D9D41464DD8B767D5C9FBCD5A217_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElementWithStride_TisRuntimeObject_mB6CB8A68EAF5FD9814CD83C33C09FD370DAF3666_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<SpriteShapeGeometryInfo>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  UnsafeUtility_ReadArrayElementWithStride_TisSpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666_mC868CB9BE5A202CBF5F200DE7F7FFCB74D658958_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  L_3 = (*(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt16>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElementWithStride_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_mE7E9755BD1E04FECBF60839DB4F89A536E0574FA_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint16_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElementWithStride_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m870A39C42727AE396DDF3C34E993C3D4E50CD70B_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnsafeUtility_ReadArrayElementWithStride_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mFC8A0D064A24ACD437EA250A00A77EA25230EA1C_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = (*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (uint64_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector2>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UnsafeUtility_ReadArrayElementWithStride_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mAB650BB6D2DE4F97C0B102C5E52BA71E32798C75_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UnsafeUtility_ReadArrayElementWithStride_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m39D8F5ECB6710FE055C2EB60D41611B340093BE2_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector4>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  UnsafeUtility_ReadArrayElementWithStride_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m059D7AC43C64E430C9A087D02A964CAAD9A30107_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = (*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984_mC8DB7FCF2B257F0A7881C713963FE94DA62B98CD_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB81615D0F7CCFF9A78D687907797747BA1B6F984 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00_m3863487D516F0ADEB79EBFFE66DFBA18C46380F6_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t47B391DE1AEA8BCBC9950BC9914D8EE7C6944E00 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F_m4F09A05D3DD170DFA1F796E0A8FA0B313C65725B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.BoundedPlane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C_mA64E3CCD92517DB285018B2C95FE3C5C3768B2D9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC25886536082C6025800F4A3A7F21B393DEC283C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Bounds>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2E316ADE1A17D486619A0D6F51B9A00DC8D79D7D_m81811ADDB69D06FC297D21F30425621B5596C60E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2E316ADE1A17D486619A0D6F51B9A00DC8D79D7D );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A_m483AA7FC51E6A112FC0A4D06D38B11D37DFEF879_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.ByteEnum>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58_mD9F6A2CB4A46FD7B82AA05D7197BEDE69C405754_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6E937DB22E0805E2622759CA1FA9371A992DBA58 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768_m7D53536259B12A47029CBB9483C4DDE72004C4CB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2F36EC542314916EC28FC5C072A5BD2BD7FCF768 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB_m5D7B94F374F430D55CC64458DCBEF2317E197198_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5DE1EB4221794F91CCD08FDC932F706301EEF2DB );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1_mDA545781E7F1E51EA4B8806FE9681D3A0680C2BF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32Enum>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9_mA0E7E6DAD0CC9A9A8B9E1D78178F760C37DA4F0E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Jobs.JobHandle>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599_m33EE3278DDDF83B87C75ADBE8CD81340537E48BA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17_m78DEA1E58B4D9D6E271BFF9B14011D45ED34B031_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARKit.ManagedReferenceImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE_m47C80949673574FFDC0715CC25CA1665E15B03C8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t09B3D6D7E9255D96B7427666F50BA340DCF589CE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893_m7C04B3AA1BAA024C62459AAFF0C635C222310A16_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.PreTile>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0903321CE301477697201BC084A409846158443E_m9C459E8F6999C891DF925B0C49C093CDB5F20895_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Quaternion>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA_m7A2454EEDB5DE110EBD417432FD26467F92598EC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2AB78F4DF3048147CBE36FD29469D568894FC3EA );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.RenderStateBlock>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5_m884F709E2A71175E8EFB0B158C0B0772F4BC23DA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.ShaderTagId>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC_mE7A004863EFAA62A2EC22E6A1D0B8232CB402446_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.ShapeControlPoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6F5F8F87690736D65AC31146B3C91D627C3E2FE2_m4416390D90687F8BF72752061ECBB78AD1B1964E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6F5F8F87690736D65AC31146B3C91D627C3E2FE2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Single>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97_m2A6A36BAEBCA035917F5792AFD65A42AD49D730E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t71968306CCF214CB31392EA30096E5F1D1566E97 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SplinePointMetaData>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t54A9D79432BA39A3B3646EB3B25853F0C080BA82_m41EA45145EF5CD9B2179E1CDCBD4D78F3C2C1CCB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t54A9D79432BA39A3B3646EB3B25853F0C080BA82 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<SpriteShapeGeometryInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t7EDCB0A42204CD5CFEC9789F8B1861BF23EE8E6F_m80D0F33F7DD19A0A447F42F5E1B8A6ED193E0A95_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t7EDCB0A42204CD5CFEC9789F8B1861BF23EE8E6F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeSegment>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t007FBF84A6EBA0216D95038F9FBF09B9D25411B3_mE0F5F4E6E046C15BFAD45B7002B2FCD2EDF698B1_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t007FBF84A6EBA0216D95038F9FBF09B9D25411B3 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessCell>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE7E050F9D27B51C461CA892C36A28A1BC1E74557_m8C79CFB2D4F9935423146557826E6B78F237D8BF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE7E050F9D27B51C461CA892C36A28A1BC1E74557 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessEdge>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t16415829CD9EA7F16F98EEF58E4862DD40828DD4_m3271C00F84856ECF51DD1BE95FB78E10E2380FF7_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t16415829CD9EA7F16F98EEF58E4862DD40828DD4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessEvent>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD304729227B51D20F0109DB35B52D5502F88973B_m4FCD4D9574D82991896AE92A40BFA66E4B30B80F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD304729227B51D20F0109DB35B52D5502F88973B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessHull>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF9F438D60D500D87E1E3C9DBF6B3B4A44ABECECE_mE1CAAAFFDDE097D7DC4F97C37BCDDECA6603CDB6_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF9F438D60D500D87E1E3C9DBF6B3B4A44ABECECE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.UTess.TessStar>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD2B57341577617210AD70DED4A04A601B3EEF8CE_mF6ED52C422B31CAAD8A591ACC4882FE769693B23_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD2B57341577617210AD70DED4A04A601B3EEF8CE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.TrackableId>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59_mA7B11AB04F014A55CC6FFA4457454187CE470D15_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9BE8E1D18E20FE75BA7BC58139F1C88E50083F59 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863_m6084EEE82C0053C6CC1377753D3FE05B38701259_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0_m63AA9F73125758E2B2AE66DB1D84431649E73D40_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt64>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D_mDC03CB15A108E86CF91BE61A0D5DD966741B6F0D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4841EA6819270C98FCF241417AE852035FAD295D );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector2>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF_m2A6D4614157CA5FEC4539AFBC5CA2D801D56C40F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t271108605E168FCC3142F101EE2849302458C2EF );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F_m60083E9F92A736196324FA983CE4F4A61CDC71BC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F_m439A38DEF378CB03DBCA2BCBE18927753E8A2C85_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t059CD7C810FA768D23B55CA7CC58BD22F4862D5F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.UIElements.Vertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD_m957C9E5CED4CF01DC7A72AF426A97F39C8A9A1E2_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8B9F428AACB5CF17C2C6A66BF1ED681D7C56A9DD );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.VisibleLight>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C_m26E2230C824055D0B19E9272DE0AF27CBA1B4528_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRAnchor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843_m05A6DEEA3D1D58D4AE1FB691C66BED3BBFB0F6AE_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t257C1F128C719DA8903D1D43DDF2FCDF1C186843 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF_mA13F6109B6FA1C99D9DEEAB354342753651A5FDA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD5FB129B0FE56F873354763E74C4CA9603CF0FBF );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690_mF0636F3AD1B53A5074F2AA6EF7BE0878FDE6314D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA3E84084F2481EAEB679B679FC3DB35961106690 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRFace>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6_m01DAB809A1C73F2A1C8D0B4D039B44A723A4DAD6_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDC746396BD4C3DEDEFD7BCA4F2FB927A7C9B23D6 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBody>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7_m84384054B4D4FFA84A4BDECD0BF6063C5CE3852B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tED912FC6AED4BF992E7A399B4C07FDA8DB72C4B7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7_m79C653217E17BD7509955AFFDB74FA383DE09007_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAEC9107335C3ACB0D1EC024C5A16EE34DD04DBB7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93_mCFE622E1C528733548274EA4919CC9BFAF73F855_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t66A51797B02768C7E37EE191A6A41DFD76986B93 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRParticipant>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD_mAFC4872F555B724057B9427660070C5BBF15CF0B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF269397DB58F83DB2A25F4B8690D15E87B5629CD );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRPointCloud>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800_mFB28FE12CB4E30C6E853F91D5ED172B05377DC46_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t78096416E3ABFE26E4039FC6FD89EDA08E585800 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycast>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62_m864E71C1868B063F1B4003D49C02F13215067048_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6FF262161D1834575CD49D01F0D3995FEA992D62 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310_m758AEB002D445E212D55AA2EF491A2A0592EC96F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8345D25D596B0A21206B48C487BA031919DC4310 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRReferencePoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728_m0EC216D4CB0391551CCA5C1B2B4DF80B67F45931_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t9D657DBA4E89FCD23C31C660D77E9638F5B3E728 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180_mF765BBDFBB2A5013BC0DAE7D4AE9E18471167449_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0B1F22AE74CDD2B893FAE250B9DF71D66F0AC180 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedImage>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372_m15AB926960198E0D74115D992395C2F213E80C45_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t109C90BE24A2EE7ACC0193AA9E8ECB0C36CDC372 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARSubsystems.XRTrackedObject>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E_m74EE532469B6962BD204CCFDB8754CBDDB2DFAE5_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE95ABAB4F1E81E2D7BCA8662A0445AB784FB952E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.float2>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t27441D8D23662C173CE46E195544FE04D7813B3F_mB82352F35571A6620EFA2A453A6471493E34C66A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t27441D8D23662C173CE46E195544FE04D7813B3F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.int2>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4F0034F0994EF588F07178036DD21948CA867E0E_mA51416D35FEE0494077C65BC24E28FB7AC4D0032_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4F0034F0994EF588F07178036DD21948CA867E0E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.uint4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tAC11858D03237E507F8D4D8BD9BF81BB98CE9EC5_mB97F9E45F6292F5EE3EAEA18DCADABFC22D37B74_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAC11858D03237E507F8D4D8BD9BF81BB98CE9EC5 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84_m6E923C741770063B5E7B03A3C016D5316A0FC1DA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8865AB33A564AA1551923637673E4DA1D3FF2B84 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE_mD9B7F883AC8C804D135B24E7C8EE7619B9AD5B0B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t1814C48FBCC61E54E5C7E1C88563999BCDD67436_mA4C3117B5F86D8E17D51B04249E80EA24856DD7B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t1814C48FBCC61E54E5C7E1C88563999BCDD67436 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/LightData>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE_m8ADFB5C08222255666FEC07791A5D227F3D8B8B9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5C01C9B4DCF72AF1F0B911E388E5D3032120D0DB_m40EC4ABC7101180E2ADE4A222540F05C8444FDF2_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5C01C9B4DCF72AF1F0B911E388E5D3032120D0DB );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t83E4BC8AB640B5AA3ED7EB7D8D42C551D91C6751_m9DDE6020CAC39032C5F63816E3F10DFF92B08329_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t83E4BC8AB640B5AA3ED7EB7D8D42C551D91C6751 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t68D958B50438807D75BEF7A42FF662AA39B82A62_m749A931CA602D7DCE306B6A538DFC18E02505429_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t68D958B50438807D75BEF7A42FF662AA39B82A62 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA44C0BACB890D50FB260D4042116AA088ED05B86_mF5A4528BAD45A034F39635D64F348C25FD836D65_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA44C0BACB890D50FB260D4042116AA088ED05B86 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t164E18035137CDA2FEA026705FFB987988EEC9BE_m7E6C9E1462770B92AB67AC326662BE280CA93C6E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t164E18035137CDA2FEA026705FFB987988EEC9BE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tED73721043C2AE6D8CD9F42AFA4D137F2722AAD8_m572CE35C0F1C8358658141C2327AB470AFEEC8FE_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tED73721043C2AE6D8CD9F42AFA4D137F2722AAD8 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t067B58DC9D71671022886F13EF159FE69AC4CBBA_m51C704986FF2849C34FC2359CA3DCBE11CECB8C0_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t067B58DC9D71671022886F13EF159FE69AC4CBBA );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t536D145AF098A1412B2099C32431CF8C0A954790_m3A1F5E33DF0A86DDC3871444D091E545F8953CC0_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t536D145AF098A1412B2099C32431CF8C0A954790 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTriangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11_m648DBD577CDDD351DC23C2059E58C892B2B4A74F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTriangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9_m070EC017EF5DE3CF34CA506EAFDFA4EEEE191421_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m59EADA64485304CCC918007EE51D37E128AB411D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.BoundedPlane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m192B25183D0B9501F76EA99217C064F648F6B1F3_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Bounds>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_m910E3FBE8E90B5252EEC2FBCCA2A07D65F2764B5_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC38689A53E959AC0D3F9C9BF89F277C4A1D23BBF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.ByteEnum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_m3F6ED40E476C50572652C4C043A96A2405F6678C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_mD1FC31D13212054222438A163DB26F8D6BFB3A5C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisGfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66_m335C01E3F825AFF19230F85903B8DE498A026B2C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC154751B6ED1926446C432F482791D0C5D3F663A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mFC3373190B3BE1CF7E7594D8E6A3FBC6251EA6DB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Jobs.JobHandle>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_mB8BE33706393D81F4A306DC4F21101B9984790B9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mBBB6CBF143991B044213D375125D1E6F3352FF81_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARKit.ManagedReferenceImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m2A727E794855FD1178EE52363D8306959B217286_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_m223C8A2842490CA74E75B2180AEE83873D0A4696_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.PreTile>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_m41D2920E7AA1DE26CB4F157F35FB633311906DDF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_mAC8905497A863AD87BFE65762297003BA81AB81F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.RenderStateBlock>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_m3F52D380A8E021AC8C3ADA685D00806AAE67C0A2_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.ShaderTagId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_m70E058D6701D167F8354DD4CEE2D914E4FC6C4E8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.ShapeControlPoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045_m5E1D1D39176EA82B1BEA39B2F9DB6AC27015C179_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m62538C9CC88C24C00F26BFEDEFDDF192DF3D7074_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(float);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SplinePointMetaData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C_mC029CC32483083D73993C0074D9FE36CE07D892E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<SpriteShapeGeometryInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666_m79BCC5162A3FF55E1785B7E1A9F6E04ABAD38078_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeSegment>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C_mDC321F51384426DC7FD3A6944F0635DC76F20B4D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.UTess.TessCell>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6_mA4192D120B772DBD90B80F1941A52A392B4E6937_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.UTess.TessEdge>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7_m215540A55955964EA23A8A5177E2E5549E51CA00_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.UTess.TessEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2_mFBF9451B38CF9AF07BAB8DAF8CBA2C23F47B991A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.UTess.TessHull>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9_m7CD83D38631E1E4F71B837C4DFFF5DAD02CB91B7_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.UTess.TessStar>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631_m7A46A44E928643E6DBB7B75564C920A3D5382D52_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.TrackableId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_mF697624F82B05F48FEBCA43CAC7120F74662F09B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m9B19BBBE3E9CCFB3A08C9D69CB28B95159A85CE8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mF52F526110B94ADBF53DDE17836AA18E0295A75B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt64>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mDBC64421AD01832F8501B6A63808B500603B0428_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint64_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mB0BA7AC549DE2A13AFD6C8FAF906DFABF03C148D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m8508D752DDCACDDA57921C7B14C2ABAB9E07C134_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mFA1DB8F130AAD9A5A0EAA97B9F2CCA33EFDF55FA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.UIElements.Vertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_m259764ADCA93543978BA411A77DD042257F92B75_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.VisibleLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_m646EEDD295B5FD3B9B23942BF10F0E1CC6AFEFFE_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRAnchor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_m5694802E457D329AED739F913B78C59EA39212DC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m598EC6E91AC0754DAC422344E0C8158EDC7032CD_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_mF943BAC56EED045786692CD920E8EAD14B260C08_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRFace>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_mC5134E039EBB8AC07E8A42A3A0DEFAE4D14BAC4A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBody>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_mA9742BC88C2B0F89C00F4A400F83FDFB4B921651_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_m9695C40EEE8B447D5298BEF655C0BEC376A94729_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_m17445EC9BA2AF840DBA4F74645589F0991414309_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRParticipant>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m00E843B9705969489FCA43AAF5B4BDF0DAE674C9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRPointCloud>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_m49A388008D2C378ACD6453EDC658C82BBE51FA72_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycast>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mCE9C5E920BABDE0E31F29FA16BCA806F7FE5CE04_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRRaycastHit>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m51E2C6221DC8163F580478B984D0562A95A715BA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRReferencePoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_mB974E1B31017770FEFBFEA1C4BED09DD79AA0FBA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mB4D6CFBA997B6392985F8F34935536E547A6A928_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedImage>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_mB89CD595084C74E9E0110166B3F14FBE349D9006_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARSubsystems.XRTrackedObject>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_m0EE2A462A71CC22147609194E7FC01E8F60A5144_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Mathematics.float2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat2_tCB7B81181978EDE17722C533A55E345D9A413274_m4D50788765B54CA8F0B117DF7F10CB0228D2766F_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(float2_tCB7B81181978EDE17722C533A55E345D9A413274 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Mathematics.int2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_mC661C5C7E726F0B7E00C4A76E1AECE38EA7F112C_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Mathematics.uint4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisuint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_m96D439B0E05F69F9273EBABF14051BB2FFCC915D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_m6DB7D8796FC1D3CE8F96532B9D69B9AB7205D8AD_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m45201220267E0F6FE36D6C25A8687DB158DC73B1_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40_m8E809CD3ECFC25E9AB06350DFEE76625D059ACF2_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.ShaderInput/LightData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_m735CE9946766A6D6AA7AC4CAF90B6C19691B38E7_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9_m685367569DA21271DB7279C53BEBE3EAAED4CC46_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18_m27D394DCCB74DC1DC2533C5CC552426351AB930D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A_mA5A9B2F58F5DFD90C97A21E6572437ADC9190D48_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675_m36238120715255A8F6C481A87BBDDE84543B89F8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD_mB634114744EFAAC470F03DBD14EF894D0B4D5412_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA_m8B560BE526D1E720712A88DB3C3E44A0FF3B85EC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258_mD45C0FF5C862DDE2E50EBFB0E5C68ECE272A8BF1_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02_m40F40D0F8D2034C37087F167BB8BE34DCFA7EFD7_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02 );
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int16>>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTriangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11_m882EC026F2ADDB6EB9D573BD08C4395E1690883E_gshared (void* ___destination0, int32_t ___index1, Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 );
		Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11  L_3 = ___value2;
		*(Triangle_1_t5D70FED5A96E61ADDCC41F8B4CA3855BC7A98A11 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ARKitFaceSubsystem/ARKitProvider/Triangle`1<System.Int32>>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTriangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9_m10791DDE4BC584F2702AD1C72BE8CC7DB993091A_gshared (void* ___destination0, int32_t ___index1, Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 );
		Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9  L_3 = ___value2;
		*(Triangle_1_t23CE09469BEC0FFB6767EDDA20FAB85B0C3104C9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m1D58CBFDD53E1CB541D16CCF8DE4E26A4FE2C936_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.BoundedPlane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5_m8E230BE5ADFFD28C0FA312299CB67D23E229C188_gshared (void* ___destination0, int32_t ___index1, BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 );
		BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5  L_3 = ___value2;
		*(BoundedPlane_t9001963C43ACDF4CDEA8BBF97CD783B7969B79C5 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Bounds>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37_m18C2A3A93A08D5C10D3C36916E39B85EB3AD1393_gshared (void* ___destination0, int32_t ___index1, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 );
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_3 = ___value2;
		*(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mA70DA76446E650B5A4E730737BB0424B03DDA863_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.ByteEnum>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307_mE61F41BEFA56B854EB08FE94EE5445D5734A2360_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_mEBFC042A3D242A77715CDA6F63A38CD1EF547D77_gshared (void* ___destination0, int32_t ___index1, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 );
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = ___value2;
		*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.UIR.GfxUpdateBufferRange>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisGfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66_mFF49ADF5654A72FEC9014967E3221416F0871EEA_gshared (void* ___destination0, int32_t ___index1, GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 );
		GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66  L_3 = ___value2;
		*(GfxUpdateBufferRange_t11F569267024B2295C7F30C6E951754053C03D66 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB9BC153EF3EB42C858EC5F8E7A3637DD1B486A9C_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32Enum>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mFC786DD7F9F5603541E42E28E686850C62F4BFEF_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.Jobs.JobHandle>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_m223C086DBAD2C58DDECFACC4019734FAE5FC8E8F_gshared (void* ___destination0, int32_t ___index1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 );
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_3 = ___value2;
		*(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mA5815A33A2D823CD88B2A0A00314773D9E716829_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARKit.ManagedReferenceImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1_m7594A9C168520A81AE88B5A1295CE403A925BEF4_gshared (void* ___destination0, int32_t ___index1, ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 );
		ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1  L_3 = ___value2;
		*(ManagedReferenceImage_t867FD513C8CBF1F9824DBFB215783BE8C33F0FA1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mC1F6C4E4652461CA6AEB546A6DA9BD38C7FBEF6D_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mCE70D24A9D2128E16099BDE32F28E21C5CAF033C_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.PreTile>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_m3943F9DBA531578EF9364865332B26337C04B3FD_gshared (void* ___destination0, int32_t ___index1, PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  L_3 = ___value2;
		*(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Quaternion>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m28AC2C3496C531FC726DE24F3AB252086B275999_gshared (void* ___destination0, int32_t ___index1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 );
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___value2;
		*(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.RenderStateBlock>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_mE6B1020443488D555BFD1F98A982DBD1EA615EBB_gshared (void* ___destination0, int32_t ___index1, RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  L_3 = ___value2;
		*(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.ShaderTagId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_mA50A5BC4BFBBA6C72EB4D52EF1580AC3AEDF8C51_gshared (void* ___destination0, int32_t ___index1, ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  L_3 = ___value2;
		*(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.ShapeControlPoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045_mEAA5C7FD60EBC91AB7FC05AE8B6743D9C0328893_gshared (void* ___destination0, int32_t ___index1, ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045 );
		ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045  L_3 = ___value2;
		*(ShapeControlPoint_t63BFDF9E5F47BBD90DBACB2841279764B2DBD045 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Single>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m3862AC5853956293FE35CD5C55C464FFF0BE03FB_gshared (void* ___destination0, int32_t ___index1, float ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float);
		float L_3 = ___value2;
		*(float*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SplinePointMetaData>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C_m0743CE2B923EE7F753A3BAB2FB24F6A5AFBA03B4_gshared (void* ___destination0, int32_t ___index1, SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C );
		SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C  L_3 = ___value2;
		*(SplinePointMetaData_t3F809BE55FE5420323B8018DF5F89744ABBD274C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<SpriteShapeGeometryInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666_m845901B287630B3FB8218614BDED674427637B48_gshared (void* ___destination0, int32_t ___index1, SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 );
		SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  L_3 = ___value2;
		*(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeSegment>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C_m9D008D871AC594D6ADC9E733418B1674E7E62933_gshared (void* ___destination0, int32_t ___index1, SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C );
		SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C  L_3 = ___value2;
		*(SpriteShapeSegment_t216A9006BA68BCD348B582CF31354F318A9E359C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.UTess.TessCell>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6_mAE00E094446BE4C4EB8DF938005AC63C9BFEA611_gshared (void* ___destination0, int32_t ___index1, TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6 );
		TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6  L_3 = ___value2;
		*(TessCell_t54329B19BE2B8D531697206CAE7CC3CEA425EEB6 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.UTess.TessEdge>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7_m32359BE270A0145EA537CC1DE95B2736DD009931_gshared (void* ___destination0, int32_t ___index1, TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7 );
		TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7  L_3 = ___value2;
		*(TessEdge_t89F207F6321ECB536E2EFA4A6BDE58C6F60082A7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.UTess.TessEvent>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2_m873445FA0F6EA324C5C14D38FD3DBC3E142F80D1_gshared (void* ___destination0, int32_t ___index1, TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2 );
		TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2  L_3 = ___value2;
		*(TessEvent_tB92D347AE39B91493C2BE8B36B1A0F56A10213B2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.UTess.TessHull>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9_mF8564F511840192AB374CF0A94B5875151FF28FD_gshared (void* ___destination0, int32_t ___index1, TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9 );
		TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9  L_3 = ___value2;
		*(TessHull_tC4AA1C5EEC2EBADB7C561C27175B6F63617EE0C9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.UTess.TessStar>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631_m81B485E54DFA305DFAA56F23459475ACDFB47FB3_gshared (void* ___destination0, int32_t ___index1, TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631 );
		TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631  L_3 = ___value2;
		*(TessStar_t88F62B68D52535E804FD7D0FAA293BBDCA41D631 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.TrackableId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_mB244B809124F87F3468DDF83139DF08BA4A97F45_gshared (void* ___destination0, int32_t ___index1, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B );
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_3 = ___value2;
		*(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt16>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m722FDBADA8C82FAABFF95B65358C4F00C98753C0_gshared (void* ___destination0, int32_t ___index1, uint16_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = ___value2;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mA207F7AAB45EC72F16FFC46C0ADD0E69FAC3641C_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt64>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_mCBF6285391F2C8CC826CC7A5206A43AA65F82629_gshared (void* ___destination0, int32_t ___index1, uint64_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint64_t);
		uint64_t L_3 = ___value2;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector2>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m16FB86386C5AF3A34AD684F5DA6AB7FCB00B4C78_gshared (void* ___destination0, int32_t ___index1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value2;
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mEA971C70494D5B4C53AED1808E658160597E307C_gshared (void* ___destination0, int32_t ___index1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value2;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA7AAACDFF4BDE7A60062F9A8BA5BF32C63046C86_gshared (void* ___destination0, int32_t ___index1, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 );
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___value2;
		*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.UIElements.Vertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E_mF0A999956F31F5093D2D553B0F295CB31AB48AB3_gshared (void* ___destination0, int32_t ___index1, Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E );
		Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E  L_3 = ___value2;
		*(Vertex_t958FA702E8F32CB744E60CC1E85E206B108FCB5E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_mFB037B2B850E1FEE274C3AA309882BFDBC3BC61D_gshared (void* ___destination0, int32_t ___index1, VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  L_3 = ___value2;
		*(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRAnchor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C_mA805471BEEDF780FBD393AFD5CB0E53844D59C77_gshared (void* ___destination0, int32_t ___index1, XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C );
		XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C  L_3 = ___value2;
		*(XRAnchor_t8E92DD70D9FA9B3ED2799305E05228184932099C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRCameraConfiguration>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A_m79320EF6CA1FC2D2BDDFAB3CD49FEDBB997839B5_gshared (void* ___destination0, int32_t ___index1, XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A );
		XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A  L_3 = ___value2;
		*(XRCameraConfiguration_t2393055E5547307393E9C73AB13B95E0785A4F7A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XREnvironmentProbe>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C_m29F550BEB51B30F9CF29EAAF20F9B0E458DB2745_gshared (void* ___destination0, int32_t ___index1, XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C );
		XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C  L_3 = ___value2;
		*(XREnvironmentProbe_t4D75B5DF95135D1BA45222CBE3E7677E823B8D4C *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRFace>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_m76DD4D63486703BA29B2BC70D304049070311F9E_gshared (void* ___destination0, int32_t ___index1, XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 );
		XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  L_3 = ___value2;
		*(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBody>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_m9C9CEFA2673A6008CE54004236C94653A6D1A11D_gshared (void* ___destination0, int32_t ___index1, XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B );
		XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  L_3 = ___value2;
		*(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4_mDAB66C285FCF37DB73E50D46C6097383898AFA74_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 );
		XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_3 = ___value2;
		*(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRHumanBodyPose2DJoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4_m555C2317C3DBDA43825BC58F8CF7F063205EC833_gshared (void* ___destination0, int32_t ___index1, XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 );
		XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4  L_3 = ___value2;
		*(XRHumanBodyPose2DJoint_t901EEB0FA2A9FF2D258978EC36EE0852FEF35BA4 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRParticipant>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F_m7234DD735CDFF480B5838D705F08793BC7409AB3_gshared (void* ___destination0, int32_t ___index1, XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F );
		XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F  L_3 = ___value2;
		*(XRParticipant_t8CFF46A2CDD860A7591AD0FC0EE563458C8FA13F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRPointCloud>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2_mE83656271C6833727C4A389CB955DC23F2DFF428_gshared (void* ___destination0, int32_t ___index1, XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 );
		XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2  L_3 = ___value2;
		*(XRPointCloud_t08B41A05528E45CE709F8C14CA6C484D360A62F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycast>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55_mA14979DCF96005E426D8D63DE9E5615EE4AABC2F_gshared (void* ___destination0, int32_t ___index1, XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 );
		XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55  L_3 = ___value2;
		*(XRRaycast_tA18F9107EFF1D692E70EF15233BB6134A5F66C55 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRRaycastHit>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB_m7AE9833D6E0BB02B5A66C800D7361966ED9B8D3F_gshared (void* ___destination0, int32_t ___index1, XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB );
		XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB  L_3 = ___value2;
		*(XRRaycastHit_t94A3D13B245A9D0A7A7F2D0919DCAAC7C8DF8DDB *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRReferencePoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634_m54298EC0F4476A1FC900C8AC16B8E75810367E7F_gshared (void* ___destination0, int32_t ___index1, XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 );
		XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634  L_3 = ___value2;
		*(XRReferencePoint_tF3ACF949B4AE1EC67F527F5D30DD8B912A814634 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTextureDescriptor>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57_mE9C0897B5F348E732C299D96564ADE128EDD8884_gshared (void* ___destination0, int32_t ___index1, XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 );
		XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  L_3 = ___value2;
		*(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedImage>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F_mAA09CAFA7F59269AD426CB47775BECD2B6436DDE_gshared (void* ___destination0, int32_t ___index1, XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F );
		XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F  L_3 = ___value2;
		*(XRTrackedImage_t92B53E0621C6D2E930761110E719F0E9580A722F *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARSubsystems.XRTrackedObject>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisXRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58_m5CF4214B8371471D54046D5EAFF36AC9A0DDAB1C_gshared (void* ___destination0, int32_t ___index1, XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 );
		XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58  L_3 = ___value2;
		*(XRTrackedObject_t247BBE67D4F9308544C4BAD807F321E0C404EC58 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.Mathematics.float2>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisfloat2_tCB7B81181978EDE17722C533A55E345D9A413274_mD69CAE72B950A56B915CF622571070D971286E07_gshared (void* ___destination0, int32_t ___index1, float2_tCB7B81181978EDE17722C533A55E345D9A413274  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(float2_tCB7B81181978EDE17722C533A55E345D9A413274 );
		float2_tCB7B81181978EDE17722C533A55E345D9A413274  L_3 = ___value2;
		*(float2_tCB7B81181978EDE17722C533A55E345D9A413274 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.Mathematics.int2>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_m1C36904D882DF12F861EB17CCF481DF509E0462C_gshared (void* ___destination0, int32_t ___index1, int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 );
		int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568  L_3 = ___value2;
		*(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.Mathematics.uint4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisuint4_t646D1C6030F449510629C1CDBC418BC46ABE3635_mF3DB730BD6110382C69F8DB142CBF86672478704_gshared (void* ___destination0, int32_t ___index1, uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 );
		uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635  L_3 = ___value2;
		*(uint4_t646D1C6030F449510629C1CDBC418BC46ABE3635 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.XR.ARFoundation.ARPointCloudManager/PointCloudRaycastInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1_mB0EAD9087238992BD21555DAF97E1B2C3123F8E3_gshared (void* ___destination0, int32_t ___index1, PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 );
		PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1  L_3 = ___value2;
		*(PointCloudRaycastInfo_t3CEA434CD8C654942880AB891772D174AE33A2B1 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m876C493AC9DDA3006E683FD507D1235B6E630093_gshared (void* ___destination0, int32_t ___index1, PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  L_3 = ___value2;
		*(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/LightMeshVertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40_mC366A72C801FDF35B41DDA67FD68FCF9F6EE19CC_gshared (void* ___destination0, int32_t ___index1, LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40 );
		LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40  L_3 = ___value2;
		*(LightMeshVertex_t45AB67668F1B985C7A3568627B6B7161CCF93D40 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.ShaderInput/LightData>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_m66F320846A0E6F7FC0D58744DAECD31AC9F08762_gshared (void* ___destination0, int32_t ___index1, LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  L_3 = ___value2;
		*(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobAngleRange>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9_m2798D38AC08A2AA985EBB2199962E62D7F8F5AB6_gshared (void* ___destination0, int32_t ___index1, JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9 );
		JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9  L_3 = ___value2;
		*(JobAngleRange_tD7473EE39017CD3BCBCE8EAED11EA6FDBC801DE9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobContourPoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18_m0D77A9FE6E1911D857D2059A35667749C1E8717E_gshared (void* ___destination0, int32_t ___index1, JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18 );
		JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18  L_3 = ___value2;
		*(JobContourPoint_t0FED4D3BB939CA7125B961825B5C87F68023AC18 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobControlPoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A_m8FC644E9C39438CD11C8FCFDF458675A102E9EF3_gshared (void* ___destination0, int32_t ___index1, JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A );
		JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A  L_3 = ___value2;
		*(JobControlPoint_tF5D00B336B965FAA21552CBB0CE67F384CB0396A *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobCornerInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675_m73CA93C7F806C9ED12B25464961A4FCE15C206C8_gshared (void* ___destination0, int32_t ___index1, JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675 );
		JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675  L_3 = ___value2;
		*(JobCornerInfo_t66C4DDDEC7DFB9C0D98791EE089900A9A7F2F675 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobIntersectPoint>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD_m73F072CC07E32897354D28E9DC86D8B891E5F2C5_gshared (void* ___destination0, int32_t ___index1, JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD );
		JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD  L_3 = ___value2;
		*(JobIntersectPoint_t25A8CACE5C46D493B7DC9008E96029B9832E6EDD *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobSegmentInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA_m1F81C84A126D1E6EF57113ACF8B0B3542E6884B7_gshared (void* ___destination0, int32_t ___index1, JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA );
		JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA  L_3 = ___value2;
		*(JobSegmentInfo_tA3BC0FFD748656D114F852DB57B4847CF80CDECA *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobShapeVertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258_m4F92D8B85642A2D0EBA230C704C4D8782CF28F5D_gshared (void* ___destination0, int32_t ___index1, JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258 );
		JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258  L_3 = ___value2;
		*(JobShapeVertex_t17CE4D3998C91439CBDB601348B2BF2B41AA3258 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.U2D.SpriteShapeGenerator/JobSpriteInfo>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02_m9A2C43166671E1A491E5FD597F2FB376382D6290_gshared (void* ___destination0, int32_t ___index1, JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02 );
		JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02  L_3 = ___value2;
		*(JobSpriteInfo_t0278D74DDC5969F64080C22EE954FE15A4AB7B02 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Byte>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m827AEFB7D0BD43FAD5AE6A65255E00C05984A833_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint8_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint8_t L_3 = ___value3;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.XR.ARSubsystems.ConfigurationDescriptor>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78_m5591225A74552BC7A4AD8D99F60319F5197A2B17_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78  L_3 = ___value3;
		*(ConfigurationDescriptor_t5CD12F017FCCF861DC33D7C0D6F0121015DEEA78 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Int32>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m09C5494408345C558D92ABE712FCD09DD9B1FF1B_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, int32_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		int32_t L_3 = ___value3;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisRuntimeObject_mAC1DE1D06F9F1FB966ABFD1B37B677FA96AC690B_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, RuntimeObject * ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject * L_3 = ___value3;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<SpriteShapeGeometryInfo>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisSpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666_mD1EE4FBDB921B8271615DDF8B27EBD88973EF913_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666  L_3 = ___value3;
		*(SpriteShapeGeometryInfo_t3DB97B6D121B5E202664E764E051D22477ACC666 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt16>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2B50D625F914A6984FCDB2914A61D254C3F5F2F4_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint16_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint16_t L_3 = ___value3;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt32>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mECB0E0C3B1C08B06DE1DE29BACC2BB5BCBA2A40A_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint32_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint32_t L_3 = ___value3;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<System.UInt64>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisUInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_m91F9464DC7E2BE6DF911A300706A363B7508B489_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, uint64_t ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		uint64_t L_3 = ___value3;
		*(uint64_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector2>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mC491B22123DE06D89AFB5704656B94A58872F8CB_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___value3;
		*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mBBC44431E330735B6875AAEC4F62398B80E5B897_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value3;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<UnityEngine.Vector4>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mECC255FD8D8954D6FC1BB4C612D5DBD67C6E3144_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value3, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3 = ___value3;
		*(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_mA22CA9EE821A72ACF450FE1060CE5F1B0F251D13_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m66FD7558B688CFF32051E9CAF2769F3E5F0F0FE0_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// System.Boolean UnityEngine.Rendering.VolumeManager::IsComponentActiveInMask<System.Object>(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeManager_IsComponentActiveInMask_TisRuntimeObject_m1E6203C9BCF6BAA2CB860F2CAD52304B1C4FC7E2_gshared (VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181 * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8CB80146D2C247B4315AB7A79C5C67E08F862EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC656FDD32134143E231CE6A866E81702847EFAB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mE0D1F096640F75B4F55E85582A564357F3CEB76D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m93C7B2BDE59324C3FFA08FD3FD69981082CACD94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m86F64A1D37EF87FBFCC6BEFFE32C2BE4381B600B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m166497E66EA562EAF3395D3553053404165F9EF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// int mask = layerMask.value;
		int32_t L_0;
		L_0 = LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(&___layerMask0), /*hidden argument*/NULL);
		V_0 = (int32_t)L_0;
		// foreach (var kvp in m_SortedVolumes)
		Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * L_1 = (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)__this->get_m_SortedVolumes_4();
		NullCheck((Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)L_1);
		Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  L_2;
		L_2 = Dictionary_2_GetEnumerator_m8CB80146D2C247B4315AB7A79C5C67E08F862EE2((Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_m8CB80146D2C247B4315AB7A79C5C67E08F862EE2_RuntimeMethod_var);
		V_1 = (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 )L_2;
	}

IL_0014:
	try
	{// begin try (depth: 1)
		{
			goto IL_0094;
		}

IL_0016:
		{
			// foreach (var kvp in m_SortedVolumes)
			KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  L_3;
			L_3 = Enumerator_get_Current_mC656FDD32134143E231CE6A866E81702847EFAB9_inline((Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mC656FDD32134143E231CE6A866E81702847EFAB9_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 )L_3;
			// if (kvp.Key != mask)
			int32_t L_4;
			L_4 = KeyValuePair_2_get_Key_m93C7B2BDE59324C3FFA08FD3FD69981082CACD94_inline((KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m93C7B2BDE59324C3FFA08FD3FD69981082CACD94_RuntimeMethod_var);
			int32_t L_5 = V_0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0094;
			}
		}

IL_0028:
		{
			// foreach (var volume in kvp.Value)
			List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * L_6;
			L_6 = KeyValuePair_2_get_Value_m86F64A1D37EF87FBFCC6BEFFE32C2BE4381B600B_inline((KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m86F64A1D37EF87FBFCC6BEFFE32C2BE4381B600B_RuntimeMethod_var);
			NullCheck((List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *)L_6);
			Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  L_7;
			L_7 = List_1_GetEnumerator_m166497E66EA562EAF3395D3553053404165F9EF8((List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *)L_6, /*hidden argument*/List_1_GetEnumerator_m166497E66EA562EAF3395D3553053404165F9EF8_RuntimeMethod_var);
			V_3 = (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 )L_7;
		}

IL_0035:
		try
		{// begin try (depth: 2)
			{
				goto IL_007b;
			}

IL_0037:
			{
				// foreach (var volume in kvp.Value)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_8;
				L_8 = Enumerator_get_Current_mE0D1F096640F75B4F55E85582A564357F3CEB76D_inline((Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(&V_3), /*hidden argument*/Enumerator_get_Current_mE0D1F096640F75B4F55E85582A564357F3CEB76D_RuntimeMethod_var);
				V_4 = (Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_8;
				// if (!volume.enabled || volume.profileRef == null)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_9 = V_4;
				NullCheck((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_9);
				bool L_10;
				L_10 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_9, /*hidden argument*/NULL);
				if (!L_10)
				{
					goto IL_007b;
				}
			}

IL_0049:
			{
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_11 = V_4;
				NullCheck((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_11);
				VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * L_12;
				L_12 = Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_11, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				if (L_13)
				{
					goto IL_007b;
				}
			}

IL_0058:
			{
				// if (volume.profileRef.TryGet(out T component) && component.active)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_14 = V_4;
				NullCheck((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_14);
				VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * L_15;
				L_15 = Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_14, /*hidden argument*/NULL);
				NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)L_15);
				bool L_16;
				L_16 = ((  bool (*) (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)L_15, (RuntimeObject **)(RuntimeObject **)(&V_5), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
				if (!L_16)
				{
					goto IL_007b;
				}
			}

IL_0068:
			{
				RuntimeObject * L_17 = V_5;
				NullCheck(L_17);
				bool L_18 = (bool)((VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_17)->get_active_4();
				if (!L_18)
				{
					goto IL_007b;
				}
			}

IL_0076:
			{
				// return true;
				V_6 = (bool)1;
				IL2CPP_LEAVE(0xB2, FINALLY_0086);
			}

IL_007b:
			{
				// foreach (var volume in kvp.Value)
				bool L_19;
				L_19 = Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692((Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0037;
				}
			}

IL_0084:
			{
				IL2CPP_LEAVE(0x94, FINALLY_0086);
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0086;
		}

FINALLY_0086:
		{// begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 > L_20(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var, (&V_3));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__142 = il2cpp_codegen_get_interface_invoke_data(0, (&L_20), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__142.methodPtr)((RuntimeObject*)(&L_20), /*hidden argument*/il2cpp_virtual_invoke_data__142.method);
			V_3 = L_20.m_Value;
			IL2CPP_END_FINALLY(134)
		}// end finally (depth: 2)
		IL2CPP_CLEANUP(134)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xB2, FINALLY_00a2);
			IL2CPP_JUMP_TBL(0x94, IL_0094)
		}

IL_0094:
		{
			// foreach (var kvp in m_SortedVolumes)
			bool L_21;
			L_21 = Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B((Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0016;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xB0, FINALLY_00a2);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{// begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 > L_22(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__170 = il2cpp_codegen_get_interface_invoke_data(0, (&L_22), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__170.methodPtr)((RuntimeObject*)(&L_22), /*hidden argument*/il2cpp_virtual_invoke_data__170.method);
		V_1 = L_22.m_Value;
		IL2CPP_END_FINALLY(162)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB2, IL_00b2)
		IL2CPP_JUMP_TBL(0xB0, IL_00b0)
	}

IL_00b0:
	{
		// return false;
		return (bool)0;
	}

IL_00b2:
	{
		// }
		bool L_23 = V_6;
		return (bool)L_23;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_GetValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m284F83F4009C602266F8B7DECB8B88EB80358220_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Boolean>::get_value() */, (VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (bool)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VolumeParameter_GetValue_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_m97B72880F4D37CD36086DCAB268DCA344AC4E295_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>::get_value() */, (VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5A842E0583568A99C78C790B4426711CCA6B4149_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (int32_t)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m977BF9CD4DB9D070C0CB611EFF35BC70387D9556_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value() */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (int32_t)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.LayerMask>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  VolumeParameter_GetValue_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mE258B644A804E8E03277B3B359F58421DA0486EC_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = VirtualFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeParameter_GetValue_TisRuntimeObject_m42918C23F85A8F905475DEE5DB55BF6FA1D70A1A_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		RuntimeObject * L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (RuntimeObject *)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_GetValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m7E36C64D42D615CA7A90576C2F6E7AF08AEE48EE_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		float L_0;
		L_0 = VirtualFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (float)L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VolumeParameter_GetValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD4AF7C45E8F8F513E40558F9F2EB0EF88C41E0E9_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = VirtualFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VolumeParameter_GetValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mF2FADFD57C53ECB8946BA6B161D1083CF8A24A5B_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtualFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  VolumeParameter_GetValue_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mE6147B743C9874F70E8C415E7771C811CD2DE1BE_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	{
		// return ((VolumeParameter<T>) this).value;
		NullCheck((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		L_0 = VirtualFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
	}
}
// T UnityEngine.Rendering.VolumeProfile::Add<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeProfile_Add_TisRuntimeObject_m03C7B84160139CFC962EC03A21A3FA4B90169EBD_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, bool ___overrides0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (T)Add(typeof(T), overrides);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___overrides0;
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
		L_3 = VolumeProfile_Add_m79223D2CF959C9E6D63D9FF846FF1B6A3B00FD10((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::Has<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_TisRuntimeObject_mDB54341DE40B45F7005866878043CF31DBA99100_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Has(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		bool L_2;
		L_2 = VolumeProfile_Has_m4B7E73066F4F7D7A45656DA57A7C994260BD089D((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Rendering.VolumeProfile::Remove<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_TisRuntimeObject_mF7D69686CD890F54D2E0F7E551EA8543DEB45291_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Remove(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		VolumeProfile_Remove_m932397236384F0E991CE7113270E019856DB5E86((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m14CFA51990A3B27CCB7DAB61E8A9849B28BEBD1F_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return TryGet(typeof(T), out component);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeObject ** L_2 = ___component0;
		NullCheck((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this);
		bool L_3;
		L_3 = ((  bool (*) (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *, Type_t *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, (RuntimeObject **)(RuntimeObject **)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (bool)L_3;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m865019F6311FC47621EEEA5F6D60D98E2A08A1A1_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, RuntimeObject ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// component = null;
		RuntimeObject ** L_0 = ___component1;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject *));
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_1 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_2;
		L_2 = List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1, /*hidden argument*/List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E_RuntimeMethod_var);
		V_0 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_2;
	}

IL_0013:
	try
	{// begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
			L_3 = Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_RuntimeMethod_var);
			V_1 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_3;
			// if (comp.GetType() == type)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4 = V_1;
			NullCheck((RuntimeObject *)L_4);
			Type_t * L_5;
			L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
			Type_t * L_6 = ___type0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_5, (Type_t *)L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			// component = (T)comp;
			RuntimeObject ** L_8 = ___component1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_9 = V_1;
			*(RuntimeObject **)L_8 = ((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x56, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var comp in components)
			bool L_10;
			L_10 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0015;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{// begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_11(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__78 = il2cpp_codegen_get_interface_invoke_data(0, (&L_11), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__78.methodPtr)((RuntimeObject*)(&L_11), /*hidden argument*/il2cpp_virtual_invoke_data__78.method);
		V_0 = L_11.m_Value;
		IL2CPP_END_FINALLY(70)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// }
		bool L_12 = V_2;
		return (bool)L_12;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGetAllSubclassOf<System.Object>(System.Type,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetAllSubclassOf_TisRuntimeObject_m43B7383C6B0E6BA9CDAC5CAE5CE1F1D055C3DF20_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// int count = result.Count;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___result1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0);
		int32_t L_1;
		L_1 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_1;
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_2 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_2);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_3;
		L_3 = List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_2, /*hidden argument*/List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E_RuntimeMethod_var);
		V_1 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_3;
	}

IL_0013:
	try
	{// begin try (depth: 1)
		{
			goto IL_0037;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4;
			L_4 = Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_RuntimeMethod_var);
			V_2 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_4;
			// if (comp.GetType().IsSubclassOf(type))
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_5 = V_2;
			NullCheck((RuntimeObject *)L_5);
			Type_t * L_6;
			L_6 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_5, /*hidden argument*/NULL);
			Type_t * L_7 = ___type0;
			NullCheck((Type_t *)L_6);
			bool L_8;
			L_8 = VirtualFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, (Type_t *)L_6, (Type_t *)L_7);
			if (!L_8)
			{
				goto IL_0037;
			}
		}

IL_002b:
		{
			// result.Add((T)comp);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_9 = ___result1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_10 = V_2;
			NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9);
			((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_9, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		}

IL_0037:
		{
			// foreach (var comp in components)
			bool L_11;
			L_11 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0015;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0042);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{// begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_12(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__74 = il2cpp_codegen_get_interface_invoke_data(0, (&L_12), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__74.methodPtr)((RuntimeObject*)(&L_12), /*hidden argument*/il2cpp_virtual_invoke_data__74.method);
		V_1 = L_12.m_Value;
		IL2CPP_END_FINALLY(66)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		// return count != result.Count;
		int32_t L_13 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = ___result1;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14);
		int32_t L_15;
		L_15 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_15))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGetSubclassOf<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetSubclassOf_TisRuntimeObject_m17305B580EB81FD8E6DD9504C45FF67E896D8085_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, RuntimeObject ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// component = null;
		RuntimeObject ** L_0 = ___component1;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject *));
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_1 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		NullCheck((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1);
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_2;
		L_2 = List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1, /*hidden argument*/List_1_GetEnumerator_mE9F329447660B12758F7ED55619E67B740649B5E_RuntimeMethod_var);
		V_0 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_2;
	}

IL_0013:
	try
	{// begin try (depth: 1)
		{
			goto IL_003b;
		}

IL_0015:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
			L_3 = Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m497CEDD6EDD3CBA480C7D7D27F6F9E5542F19F6B_RuntimeMethod_var);
			V_1 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_3;
			// if (comp.GetType().IsSubclassOf(type))
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4 = V_1;
			NullCheck((RuntimeObject *)L_4);
			Type_t * L_5;
			L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
			Type_t * L_6 = ___type0;
			NullCheck((Type_t *)L_5);
			bool L_7;
			L_7 = VirtualFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, (Type_t *)L_5, (Type_t *)L_6);
			if (!L_7)
			{
				goto IL_003b;
			}
		}

IL_002b:
		{
			// component = (T)comp;
			RuntimeObject ** L_8 = ___component1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_9 = V_1;
			*(RuntimeObject **)L_8 = ((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
			// return true;
			V_2 = (bool)1;
			IL2CPP_LEAVE(0x56, FINALLY_0046);
		}

IL_003b:
		{
			// foreach (var comp in components)
			bool L_10;
			L_10 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0015;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0046);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{// begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_11(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__78 = il2cpp_codegen_get_interface_invoke_data(0, (&L_11), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__78.methodPtr)((RuntimeObject*)(&L_11), /*hidden argument*/il2cpp_virtual_invoke_data__78.method);
		V_0 = L_11.m_Value;
		IL2CPP_END_FINALLY(70)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// return false;
		return (bool)0;
	}

IL_0056:
	{
		// }
		bool L_12 = V_2;
		return (bool)L_12;
	}
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeStack_GetComponent_TisRuntimeObject_mD75205BBB10C161C93118AC04CEF9F2F7471F0E9_gshared (VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var comp = GetComponent(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC *)__this);
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_2;
		L_2 = VolumeStack_GetComponent_m2C8AE635D2EE506EE0C2C436D6F5017DB10B288E((VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// return (T)comp;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<System.Int32>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m786BA056A8C6FDF2F6D3B52D2526981B3BA391F0_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * ___array2, bool ___shouldExist3, const RuntimeMethod* method)
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_6 = ___array2;
		NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_7 = L_10;
		// }
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m001FCAD07C1100FAA1AA3C38CA5C493FC25B2292((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_11 = L_14;
		// }
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m0B7EB9CC11FCECCC0480F589775E99828F222AE5((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * L_17 = ___array2;
		NativeArray_1_Dispose_m69DBDA47FE3991A47E9CFCBFB3292676D22D7655((NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mAD9D1AB3912BD722DBA92C5AE79C177DD69AAFFE_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, bool ___shouldExist3, const RuntimeMethod* method)
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_6 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_7 = L_10;
		// }
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_11 = L_14;
		// }
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_17 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector3>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mAA24CEC7C20C34C26A9E7512608B8930B450C6C0_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * ___array2, bool ___shouldExist3, const RuntimeMethod* method)
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_6 = ___array2;
		NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6((&L_10), (int32_t)L_8, (int32_t)L_9, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_7 = L_10;
		// }
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m81F8DAA326ED23278BEBD3D0193CC74C93608DF6((&L_14), (int32_t)L_12, (int32_t)L_13, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_11 = L_14;
		// }
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_mCD60B11F9FB036F65310E83275A1632E57AAC29C((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * L_17 = ___array2;
		NativeArray_1_Dispose_m867A382096AF527E2B854ADC9ED75ED6BF95D76B((NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 *)L_17, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateIntegratedSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_m741BDB2C4E9AB813CDAD689B8E35A476EED4DA9A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		NullCheck((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this);
		((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateStandaloneSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_mD99BE67BE0199527528C685553C53D7A2F8D63EE_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		NullCheck((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this);
		((  void (*) (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 *)__this, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (String_t*)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m2189383EFC9B6FD4F9BB5C82B256D4A4AD78AE12_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA3116811637BD8A6782E26B6B9155243CB275B6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (descriptors == null)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m2189383EFC9B6FD4F9BB5C82B256D4A4AD78AE12_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_2 = ___descriptors0;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_t4397CEF2ED795CB9B3DDBA2BB468BCB6B45B76D9_il2cpp_TypeInfo_var);
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		// if (descriptors.Count > 0)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = ___descriptors0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___descriptors0;
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_6;
		L_6 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		V_0 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 )L_6;
	}

IL_0024:
	try
	{// begin try (depth: 1)
		{
			goto IL_006f;
		}

IL_0026:
		{
			// foreach (var descriptor in descriptors)
			RuntimeObject * L_7;
			L_7 = Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
			V_1 = (RuntimeObject *)L_7;
			// ISubsystem subsys = null;
			V_2 = (RuntimeObject*)NULL;
			// if (String.Compare(descriptor.id, id, true) == 0)
			NullCheck((RuntimeObject*)(V_1));
			String_t* L_8;
			L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
			String_t* L_9 = ___id1;
			int32_t L_10;
			L_10 = String_Compare_m3B98D489EF23605CC97E9907AAF1E5E99BBF6A62((String_t*)L_8, (String_t*)L_9, (bool)1, /*hidden argument*/NULL);
			if (L_10)
			{
				goto IL_0054;
			}
		}

IL_0046:
		{
			// subsys = descriptor.Create();
			NullCheck((RuntimeObject*)(V_1));
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEB935323042076ECFC076435FBD756B1E7953A14_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
			V_2 = (RuntimeObject*)L_11;
		}

IL_0054:
		{
			// if (subsys != null)
			RuntimeObject* L_12 = V_2;
			if (!L_12)
			{
				goto IL_006f;
			}
		}

IL_0057:
		{
			// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
			Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_13 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 5)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_15;
			L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_14, /*hidden argument*/NULL);
			RuntimeObject* L_16 = V_2;
			NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_13);
			Dictionary_2_set_Item_mA3116811637BD8A6782E26B6B9155243CB275B6A((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_13, (Type_t *)L_15, (RuntimeObject*)L_16, /*hidden argument*/Dictionary_2_set_Item_mA3116811637BD8A6782E26B6B9155243CB275B6A_RuntimeMethod_var);
			// break;
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}

IL_006f:
		{
			// foreach (var descriptor in descriptors)
			bool L_17;
			L_17 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 6));
			if (L_17)
			{
				goto IL_0026;
			}
		}

IL_0078:
		{
			IL2CPP_LEAVE(0x88, FINALLY_007a);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007a;
	}

FINALLY_007a:
	{// begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 > L_18(IL2CPP_RGCTX_DATA(method->rgctx_data, 7), (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__130 = il2cpp_codegen_get_interface_invoke_data(0, (&L_18), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__130.methodPtr)((RuntimeObject*)(&L_18), /*hidden argument*/il2cpp_virtual_invoke_data__130.method);
		V_0 = L_18.m_Value;
		IL2CPP_END_FINALLY(122)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(122)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x88, IL_0088)
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_m43760686D2E4C1FBCE4BD18489E767F294A68E8A_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Destroy();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_m5D7E0943729EE26D9A56C3E6737391AF80F92736_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mABDDF60E8F19169E888E02538B13268ED5437019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * L_2 = (Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)__this->get_m_SubsystemInstanceMap_4();
		Type_t * L_3 = V_0;
		NullCheck((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mABDDF60E8F19169E888E02538B13268ED5437019((Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B *)L_2, (Type_t *)L_3, (RuntimeObject**)(RuntimeObject**)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_mABDDF60E8F19169E888E02538B13268ED5437019_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_5, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_m5FFD6719D8FE560199B25C5D3AF8D0D40DFD038E_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5700EB064085C2D3E817458AD01E0C97624102A7_gshared (XRLoaderHelper_t37A55C343AC31D25BB3EBD203DABFA357F51C013 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		NullCheck((XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		RuntimeObject * L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0), (XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B *)__this);
		V_0 = (RuntimeObject *)L_0;
		// if (subsystem != null)
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject * L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t64464AB5EA37383499172853FA932A96C7841789_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_mCBC667925DA90C6C5FB4A43AB9754D6B328F809C_gshared (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// return activeLoader as T;
		NullCheck((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)__this);
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0;
		L_0 = XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline((XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F *)__this, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))), IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_gshared (String_t* ___id0, Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  ___capabilities1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mAD339CA933DF8B8D705E23C725E78FF7599EC36F_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_5, /*hidden argument*/NULL);
		Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685  L_7 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 * L_8 = (XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472 *)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t831B568A9BE175A6A79BB87E25DEFAC519A6C472_il2cpp_TypeInfo_var);
		XRObjectTrackingSubsystemDescriptor__ctor_mE44B346A0A5A035B7DFC7430336DDADED7A4F6A5(L_8, (String_t*)L_2, (Type_t *)L_4, (Type_t *)L_6, (Capabilities_tC6F329DD5C73C6B9E04BE77A3AE0E52390BD8685 )L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688((SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E *)L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_m77779CD44165EB52B7D758C6A46D010D3BCCB1FA_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 1)) };
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 * L_6 = (XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55 *)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t533EE70DC8D4B105B9C87B76D35A7D59A84BCA55_il2cpp_TypeInfo_var);
		XRParticipantSubsystemDescriptor__ctor_m83A6821A71C68D58354ACE8289E8F621F2E183DC(L_6, (String_t*)L_0, (Type_t *)L_2, (Type_t *)L_4, (int32_t)L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemDescriptorStore_tE5D99C3159868DE6506269CB6B830621F8BC31A6_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_m5586866BB233EF26B98640851816DD1764657688((SubsystemDescriptorWithProvider_t32DD334657CFBA22F2FBA399258B087104A29C3E *)L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::AddNewRenderGraphResource<System.Object>(ResType&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mA59628C41652BC72D757435F37CC9E75A7284E20_gshared (RenderGraphResourcesData_tF2FA3C3EF12CF61BE1A292070F6C8B355CEBAC8D * __this, RuntimeObject ** ___outRes0, bool ___pooledResource1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mF6CDBE3B7E4118B28D15C20B1CA3DE54A23AB9FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m45BF02C8D0C22798BED29BCA0C5470C01CB2A015_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject ** G_B4_0 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * G_B5_0 = NULL;
	RuntimeObject ** G_B5_1 = NULL;
	{
		// int result = resourceArray.size;
		DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * L_0 = (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)__this->get_resourceArray_0();
		NullCheck((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m45BF02C8D0C22798BED29BCA0C5470C01CB2A015_inline((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_0, /*hidden argument*/DynamicArray_1_get_size_m45BF02C8D0C22798BED29BCA0C5470C01CB2A015_RuntimeMethod_var);
		V_0 = (int32_t)L_1;
		// resourceArray.Resize(resourceArray.size + 1, true);
		DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * L_2 = (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)__this->get_resourceArray_0();
		DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * L_3 = (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)__this->get_resourceArray_0();
		NullCheck((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m45BF02C8D0C22798BED29BCA0C5470C01CB2A015_inline((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_3, /*hidden argument*/DynamicArray_1_get_size_m45BF02C8D0C22798BED29BCA0C5470C01CB2A015_RuntimeMethod_var);
		NullCheck((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_2);
		DynamicArray_1_Resize_mF6CDBE3B7E4118B28D15C20B1CA3DE54A23AB9FC((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_2, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), (bool)1, /*hidden argument*/DynamicArray_1_Resize_mF6CDBE3B7E4118B28D15C20B1CA3DE54A23AB9FC_RuntimeMethod_var);
		// if (resourceArray[result] == null)
		DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * L_5 = (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)__this->get_resourceArray_0();
		int32_t L_6 = V_0;
		NullCheck((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_5);
		IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 ** L_7;
		L_7 = DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_5, (int32_t)L_6, /*hidden argument*/DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251_RuntimeMethod_var);
		IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 * L_8 = *((IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 **)L_7);
		if (L_8)
		{
			goto IL_004b;
		}
	}
	{
		// resourceArray[result] = new ResType();
		DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * L_9 = (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)__this->get_resourceArray_0();
		int32_t L_10 = V_0;
		NullCheck((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_9);
		IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 ** L_11;
		L_11 = DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_9, (int32_t)L_10, /*hidden argument*/DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251_RuntimeMethod_var);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		*((RuntimeObject **)L_11) = (RuntimeObject *)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_11, (void*)(RuntimeObject *)L_12);
	}

IL_004b:
	{
		// outRes = resourceArray[result] as ResType;
		RuntimeObject ** L_13 = ___outRes0;
		DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 * L_14 = (DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)__this->get_resourceArray_0();
		int32_t L_15 = V_0;
		NullCheck((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_14);
		IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 ** L_16;
		L_16 = DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251((DynamicArray_1_tE865ACD9B04344D2C5D88A7A1DDE805DDE7B5616 *)L_14, (int32_t)L_15, /*hidden argument*/DynamicArray_1_get_Item_mA0C22D4E0321EFABE0334B7074D3E0978CE46251_RuntimeMethod_var);
		IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 * L_17 = *((IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 **)L_16);
		*(RuntimeObject **)L_13 = ((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_13, (void*)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		// outRes.Reset(pooledResource ? pool : null);
		RuntimeObject ** L_18 = ___outRes0;
		bool L_19 = ___pooledResource1;
		G_B3_0 = L_18;
		if (L_19)
		{
			G_B4_0 = L_18;
			goto IL_006f;
		}
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D *)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_0075;
	}

IL_006f:
	{
		IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * L_20 = (IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D *)__this->get_pool_2();
		G_B5_0 = L_20;
		G_B5_1 = G_B4_0;
	}

IL_0075:
	{
		NullCheck((IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 *)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D * >::Invoke(4 /* System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::Reset(UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool) */, (IRenderGraphResource_tC6A193679EB59585903B3E0EFC7F5B937C68AAE7 *)(*G_B5_1), (IRenderGraphResourcePool_t4D3438D3ED4DDEC9E1881C5EEADCD82187BECC7D *)G_B5_0);
		// return result;
		int32_t L_21 = V_0;
		return (int32_t)L_21;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m1A2EEEF53CFF49C4078333BE7CBA476FEAC9535D_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method)
{
	{
		// if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_5 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_9), (int32_t)L_7, (int32_t)L_8, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_6 = L_9;
		// }
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_13), (int32_t)L_11, (int32_t)L_12, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * XRManagerSettings_get_activeLoader_mB1950E58B1DD1774EB2798CEBA6D3C371CE8F1D8_inline (XRManagerSettings_t8F274E413BAFFBB547DAD1B7E50EDD9D7B16E19F * __this, const RuntimeMethod* method)
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_tE37B92C6B9CDD944DDF7AFF5704E9EB342D62F6B * L_0 = __this->get_U3CactiveLoaderU3Ek__BackingField_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_m2EECB432E6640214DAE05A1C8A2837218168F92F_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCF7A6BEA6AA09ED92024102331E4196808C07E49_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m0E79322235A1764C7DC2E4312AA11C3E20E344D6_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m0D404D0EDA77F50046B5592673CEADED3EB1DDF9_gshared_inline (DynamicArray_1_tBD159187A396D2634FDBCFD5A8F85F26FA3DF11D * __this, const RuntimeMethod* method)
{
	{
		// public int size { get; private set; }
		int32_t L_0 = (int32_t)__this->get_U3CsizeU3Ek__BackingField_1();
		return (int32_t)L_0;
	}
}
