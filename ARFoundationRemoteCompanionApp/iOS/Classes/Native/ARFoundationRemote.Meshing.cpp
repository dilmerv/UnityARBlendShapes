#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// ARFoundationRemote.Runtime.IXRMeshSubsystem
struct IXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote
struct XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager
struct _Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader
struct _Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4;
// ARFoundationRemote.Runtime.XRMeshSubsystemRemote
struct XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1;
// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_t358A375827DE759C632FEC77C83FEE87CCE55529;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t2574091AF57F902BF504098AB113416E8D15186A;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5;
// UnityEngine.XR.MeshInfo[]
struct MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9;

IL2CPP_EXTERN_C RuntimeClass* Assert_t124AD7D2277A352FA54D1E6AAF8AFD5992FD39EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_AreEqual_TisIXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_mC4F9D9AEF84A51523D84B0C78E2295D644DCEC57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNull_TisIXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_mBE48179318416641E9A4EC636FCE58FFD24D026C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9_mECFAECF09F2D9DBE29AABEA8C751BE93BB166734_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettingsRemote_GetRealSubsystem_mAD5E4E113F96A369057B15866CF2151C3D0A32B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettingsRemote__cctor_m3E0394438354FD701E88A7E8BEC5AC47E0B08A40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRGeneralSettingsRemote__ctor_mBED7FB7077AA625455956E5D5AEAEFB04C26814D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_ClearDelegate_mB257B681043E7A9C4183E4BECD64EF15F3FAF008_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_Destroy_m0A20C7D414DD760A27CA53DC046BECF69EBC7B88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_GenerateMeshAsync_m2EEB6D2885CFB756C058C26C7287D3A1495F5779_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_SetBoundingVolume_m8B16F62045601DA3FBFBCD33C7B10E05816AAA2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_SetDelegate_m0E7E09C2E1FADAA7E6AEC9C58AAD80E2138199EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_Stop_m135FE60AE35FB5DC793F21A2B96AADFBC2A0F20B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_TryGetMeshInfos_mED05F80E32602FF9EFD399331F83551275FE17EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_UnityEngine_ISubsystem_Start_m31A02BA940420F04DF5902FB69B44619A7B40799_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_get_running_m975B49EC9C21A3A039B87805CF817E3A45A80533_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRMeshSubsystemRemote_set_meshDensity_mC1084D42F7B6CD542989625AD12CEEE47A3B8766_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _Loader__cctor_m9AFF701874D86740B842DADE0A8F32E7931E1419_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _Manager__ctor_m58694A7D9FC2724E000BCBD018F03CAF43B8BF62_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF2CB7EC2ADA14462D5C81A6F54C15AD7B15FBD02 
{
public:

public:
};


// System.Object


// ARFoundationRemote.Runtime.Extensions
struct  Extensions_t2EDACEA50CF04782598247E11C1FAB75BDE1C47A  : public RuntimeObject
{
public:

public:
};


// ARFoundationRemote.Runtime.XRGeneralSettingsRemote
struct  XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4  : public RuntimeObject
{
public:
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager ARFoundationRemote.Runtime.XRGeneralSettingsRemote::Manager
	_Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95 * ___Manager_1;

public:
	inline static int32_t get_offset_of_Manager_1() { return static_cast<int32_t>(offsetof(XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4, ___Manager_1)); }
	inline _Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95 * get_Manager_1() const { return ___Manager_1; }
	inline _Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95 ** get_address_of_Manager_1() { return &___Manager_1; }
	inline void set_Manager_1(_Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95 * value)
	{
		___Manager_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Manager_1), (void*)value);
	}
};

struct XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4_StaticFields
{
public:
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote ARFoundationRemote.Runtime.XRGeneralSettingsRemote::Instance
	XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4_StaticFields, ___Instance_0)); }
	inline XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4 * get_Instance_0() const { return ___Instance_0; }
	inline XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_0), (void*)value);
	}
};


// ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager
struct  _Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95  : public RuntimeObject
{
public:
	// ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager__Loader ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager::activeLoader
	_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4 * ___activeLoader_0;

public:
	inline static int32_t get_offset_of_activeLoader_0() { return static_cast<int32_t>(offsetof(_Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95, ___activeLoader_0)); }
	inline _Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4 * get_activeLoader_0() const { return ___activeLoader_0; }
	inline _Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4 ** get_address_of_activeLoader_0() { return &___activeLoader_0; }
	inline void set_activeLoader_0(_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4 * value)
	{
		___activeLoader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeLoader_0), (void*)value);
	}
};


// ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager__Loader
struct  _Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4  : public RuntimeObject
{
public:

public:
};

struct _Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4_StaticFields
{
public:
	// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager__Loader::subsystem
	RuntimeObject* ___subsystem_0;

public:
	inline static int32_t get_offset_of_subsystem_0() { return static_cast<int32_t>(offsetof(_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4_StaticFields, ___subsystem_0)); }
	inline RuntimeObject* get_subsystem_0() const { return ___subsystem_0; }
	inline RuntimeObject** get_address_of_subsystem_0() { return &___subsystem_0; }
	inline void set_subsystem_0(RuntimeObject* value)
	{
		___subsystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsystem_0), (void*)value);
	}
};


// ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote
struct  XRMeshSubsystemDescriptorRemote_t03769E5F6EB9616AEA42B6B90674F92EE4709D44  : public RuntimeObject
{
public:
	// System.String ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(XRMeshSubsystemDescriptorRemote_t03769E5F6EB9616AEA42B6B90674F92EE4709D44, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}
};


// ARFoundationRemote.Runtime.XRMeshSubsystemRemote
struct  XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1  : public RuntimeObject
{
public:

public:
};

struct XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields
{
public:
	// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRMeshSubsystemRemote::subsystemDelegate
	RuntimeObject* ___subsystemDelegate_0;

public:
	inline static int32_t get_offset_of_subsystemDelegate_0() { return static_cast<int32_t>(offsetof(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields, ___subsystemDelegate_0)); }
	inline RuntimeObject* get_subsystemDelegate_0() const { return ___subsystemDelegate_0; }
	inline RuntimeObject** get_address_of_subsystemDelegate_0() { return &___subsystemDelegate_0; }
	inline void set_subsystemDelegate_0(RuntimeObject* value)
	{
		___subsystemDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsystemDelegate_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct  List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____items_1)); }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* get__items_1() const { return ____items_1; }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661_StaticFields, ____emptyArray_5)); }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshInfoU5BU5D_t90D799C585E2C29742712777353979968F7BA6F2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.MeshId
struct  MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A 
{
public:
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId1
	uint64_t ___m_SubId1_1;
	// System.UInt64 UnityEngine.XR.MeshId::m_SubId2
	uint64_t ___m_SubId2_2;

public:
	inline static int32_t get_offset_of_m_SubId1_1() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId1_1)); }
	inline uint64_t get_m_SubId1_1() const { return ___m_SubId1_1; }
	inline uint64_t* get_address_of_m_SubId1_1() { return &___m_SubId1_1; }
	inline void set_m_SubId1_1(uint64_t value)
	{
		___m_SubId1_1 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_2() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A, ___m_SubId2_2)); }
	inline uint64_t get_m_SubId2_2() const { return ___m_SubId2_2; }
	inline uint64_t* get_address_of_m_SubId2_2() { return &___m_SubId2_2; }
	inline void set_m_SubId2_2(uint64_t value)
	{
		___m_SubId2_2 = value;
	}
};

struct MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshId::s_InvalidId
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___s_InvalidId_0;

public:
	inline static int32_t get_offset_of_s_InvalidId_0() { return static_cast<int32_t>(offsetof(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A_StaticFields, ___s_InvalidId_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_s_InvalidId_0() const { return ___s_InvalidId_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_s_InvalidId_0() { return &___s_InvalidId_0; }
	inline void set_s_InvalidId_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___s_InvalidId_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.MeshGenerationStatus
struct  MeshGenerationStatus_t9EF07FCDC3FA6CC1951DDDED08F361AC02486D73 
{
public:
	// System.Int32 UnityEngine.XR.MeshGenerationStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshGenerationStatus_t9EF07FCDC3FA6CC1951DDDED08F361AC02486D73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.MeshVertexAttributes
struct  MeshVertexAttributes_t108D1D0898F30028DA0D36251BCB889FF471FF58 
{
public:
	// System.Int32 UnityEngine.XR.MeshVertexAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MeshVertexAttributes_t108D1D0898F30028DA0D36251BCB889FF471FF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRMeshSubsystemDescriptor>
struct  IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.Mesh
struct  Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// UnityEngine.XR.MeshGenerationResult
struct  MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A 
{
public:
	// UnityEngine.XR.MeshId UnityEngine.XR.MeshGenerationResult::<MeshId>k__BackingField
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	// UnityEngine.Mesh UnityEngine.XR.MeshGenerationResult::<Mesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	// UnityEngine.MeshCollider UnityEngine.XR.MeshGenerationResult::<MeshCollider>k__BackingField
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	// UnityEngine.XR.MeshGenerationStatus UnityEngine.XR.MeshGenerationResult::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.XR.MeshVertexAttributes UnityEngine.XR.MeshGenerationResult::<Attributes>k__BackingField
	int32_t ___U3CAttributesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CMeshIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshIdU3Ek__BackingField_0)); }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  get_U3CMeshIdU3Ek__BackingField_0() const { return ___U3CMeshIdU3Ek__BackingField_0; }
	inline MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A * get_address_of_U3CMeshIdU3Ek__BackingField_0() { return &___U3CMeshIdU3Ek__BackingField_0; }
	inline void set_U3CMeshIdU3Ek__BackingField_0(MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  value)
	{
		___U3CMeshIdU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMeshU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshU3Ek__BackingField_1)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CMeshU3Ek__BackingField_1() const { return ___U3CMeshU3Ek__BackingField_1; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CMeshU3Ek__BackingField_1() { return &___U3CMeshU3Ek__BackingField_1; }
	inline void set_U3CMeshU3Ek__BackingField_1(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CMeshU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshColliderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CMeshColliderU3Ek__BackingField_2)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_U3CMeshColliderU3Ek__BackingField_2() const { return ___U3CMeshColliderU3Ek__BackingField_2; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_U3CMeshColliderU3Ek__BackingField_2() { return &___U3CMeshColliderU3Ek__BackingField_2; }
	inline void set_U3CMeshColliderU3Ek__BackingField_2(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___U3CMeshColliderU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshColliderU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CStatusU3Ek__BackingField_3)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_3() const { return ___U3CStatusU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_3() { return &___U3CStatusU3Ek__BackingField_3; }
	inline void set_U3CStatusU3Ek__BackingField_3(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CAttributesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A, ___U3CAttributesU3Ek__BackingField_4)); }
	inline int32_t get_U3CAttributesU3Ek__BackingField_4() const { return ___U3CAttributesU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CAttributesU3Ek__BackingField_4() { return &___U3CAttributesU3Ek__BackingField_4; }
	inline void set_U3CAttributesU3Ek__BackingField_4(int32_t value)
	{
		___U3CAttributesU3Ek__BackingField_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A_marshaled_pinvoke
{
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.XR.MeshGenerationResult
struct MeshGenerationResult_tC1C81EF3BAD05FB75B6F182C0EFCFB53236FB42A_marshaled_com
{
	MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___U3CMeshIdU3Ek__BackingField_0;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CMeshU3Ek__BackingField_1;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___U3CMeshColliderU3Ek__BackingField_2;
	int32_t ___U3CStatusU3Ek__BackingField_3;
	int32_t ___U3CAttributesU3Ek__BackingField_4;
};

// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct  Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.Management.XRGeneralSettings
struct  XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;

public:
	inline static int32_t get_offset_of_m_LoaderManagerInstance_6() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_LoaderManagerInstance_6)); }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * get_m_LoaderManagerInstance_6() const { return ___m_LoaderManagerInstance_6; }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 ** get_address_of_m_LoaderManagerInstance_6() { return &___m_LoaderManagerInstance_6; }
	inline void set_m_LoaderManagerInstance_6(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * value)
	{
		___m_LoaderManagerInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoaderManagerInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_InitManagerOnStart_7() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_InitManagerOnStart_7)); }
	inline bool get_m_InitManagerOnStart_7() const { return ___m_InitManagerOnStart_7; }
	inline bool* get_address_of_m_InitManagerOnStart_7() { return &___m_InitManagerOnStart_7; }
	inline void set_m_InitManagerOnStart_7(bool value)
	{
		___m_InitManagerOnStart_7 = value;
	}

	inline static int32_t get_offset_of_m_XRManager_8() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_XRManager_8)); }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * get_m_XRManager_8() const { return ___m_XRManager_8; }
	inline XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 ** get_address_of_m_XRManager_8() { return &___m_XRManager_8; }
	inline void set_m_XRManager_8(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * value)
	{
		___m_XRManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_XRManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProviderIntialized_9() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_ProviderIntialized_9)); }
	inline bool get_m_ProviderIntialized_9() const { return ___m_ProviderIntialized_9; }
	inline bool* get_address_of_m_ProviderIntialized_9() { return &___m_ProviderIntialized_9; }
	inline void set_m_ProviderIntialized_9(bool value)
	{
		___m_ProviderIntialized_9 = value;
	}

	inline static int32_t get_offset_of_m_ProviderStarted_10() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9, ___m_ProviderStarted_10)); }
	inline bool get_m_ProviderStarted_10() const { return ___m_ProviderStarted_10; }
	inline bool* get_address_of_m_ProviderStarted_10() { return &___m_ProviderStarted_10; }
	inline void set_m_ProviderStarted_10(bool value)
	{
		___m_ProviderStarted_10 = value;
	}
};

struct XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields
{
public:
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * ___s_RuntimeSettingsInstance_5;

public:
	inline static int32_t get_offset_of_k_SettingsKey_4() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields, ___k_SettingsKey_4)); }
	inline String_t* get_k_SettingsKey_4() const { return ___k_SettingsKey_4; }
	inline String_t** get_address_of_k_SettingsKey_4() { return &___k_SettingsKey_4; }
	inline void set_k_SettingsKey_4(String_t* value)
	{
		___k_SettingsKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_SettingsKey_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_RuntimeSettingsInstance_5() { return static_cast<int32_t>(offsetof(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_StaticFields, ___s_RuntimeSettingsInstance_5)); }
	inline XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * get_s_RuntimeSettingsInstance_5() const { return ___s_RuntimeSettingsInstance_5; }
	inline XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 ** get_address_of_s_RuntimeSettingsInstance_5() { return &___s_RuntimeSettingsInstance_5; }
	inline void set_s_RuntimeSettingsInstance_5(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * value)
	{
		___s_RuntimeSettingsInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeSettingsInstance_5), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct  XRLoader_t2574091AF57F902BF504098AB113416E8D15186A  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.XR.Management.XRManagerSettings
struct  XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
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
	List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * ___m_Loaders_8;

public:
	inline static int32_t get_offset_of_m_InitializationComplete_4() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_InitializationComplete_4)); }
	inline bool get_m_InitializationComplete_4() const { return ___m_InitializationComplete_4; }
	inline bool* get_address_of_m_InitializationComplete_4() { return &___m_InitializationComplete_4; }
	inline void set_m_InitializationComplete_4(bool value)
	{
		___m_InitializationComplete_4 = value;
	}

	inline static int32_t get_offset_of_m_RequiresSettingsUpdate_5() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_RequiresSettingsUpdate_5)); }
	inline bool get_m_RequiresSettingsUpdate_5() const { return ___m_RequiresSettingsUpdate_5; }
	inline bool* get_address_of_m_RequiresSettingsUpdate_5() { return &___m_RequiresSettingsUpdate_5; }
	inline void set_m_RequiresSettingsUpdate_5(bool value)
	{
		___m_RequiresSettingsUpdate_5 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticLoading_6() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticLoading_6)); }
	inline bool get_m_AutomaticLoading_6() const { return ___m_AutomaticLoading_6; }
	inline bool* get_address_of_m_AutomaticLoading_6() { return &___m_AutomaticLoading_6; }
	inline void set_m_AutomaticLoading_6(bool value)
	{
		___m_AutomaticLoading_6 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticRunning_7() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_AutomaticRunning_7)); }
	inline bool get_m_AutomaticRunning_7() const { return ___m_AutomaticRunning_7; }
	inline bool* get_address_of_m_AutomaticRunning_7() { return &___m_AutomaticRunning_7; }
	inline void set_m_AutomaticRunning_7(bool value)
	{
		___m_AutomaticRunning_7 = value;
	}

	inline static int32_t get_offset_of_m_Loaders_8() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5, ___m_Loaders_8)); }
	inline List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * get_m_Loaders_8() const { return ___m_Loaders_8; }
	inline List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 ** get_address_of_m_Loaders_8() { return &___m_Loaders_8; }
	inline void set_m_Loaders_8(List_1_t358A375827DE759C632FEC77C83FEE87CCE55529 * value)
	{
		___m_Loaders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Loaders_8), (void*)value);
	}
};

struct XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_StaticFields
{
public:
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::s_ActiveLoader
	XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * ___s_ActiveLoader_9;

public:
	inline static int32_t get_offset_of_s_ActiveLoader_9() { return static_cast<int32_t>(offsetof(XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5_StaticFields, ___s_ActiveLoader_9)); }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * get_s_ActiveLoader_9() const { return ___s_ActiveLoader_9; }
	inline XRLoader_t2574091AF57F902BF504098AB113416E8D15186A ** get_address_of_s_ActiveLoader_9() { return &___s_ActiveLoader_9; }
	inline void set_s_ActiveLoader_9(XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * value)
	{
		___s_ActiveLoader_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActiveLoader_9), (void*)value);
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct  XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9  : public IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5
{
public:

public:
};


// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.Assertions.Assert::IsNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_TisRuntimeObject_m292462BDF0C0EFCEC19765D42940AF93F0A3D239_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::AreEqual<System.Object>(!!0,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisRuntimeObject_mFCDC95E1776C5DDBDE0E70F4E73C922407F99F2C_gshared (RuntimeObject * ___expected0, RuntimeObject * ___actual1, const RuntimeMethod* method);

// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m878C7DDB712D4F99160B2F7C71CBFC201F5AB63F (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRManagerSettings::InitializeLoaderSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_InitializeLoaderSync_mC8931AA78045796B6C9CFCF8CAF6FB0B54C40025 (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779 (XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.Extensions::InitializeLoaderSyncIfNotInitialized(UnityEngine.XR.Management.XRManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_InitializeLoaderSyncIfNotInitialized_m8CCEE1B289E73F29206F72B12FA82DC8CC7F00E6 (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * ___settings0, const RuntimeMethod* method);
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67 (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Manager__ctor_m58694A7D9FC2724E000BCBD018F03CAF43B8BF62 (_Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__ctor_mBED7FB7077AA625455956E5D5AEAEFB04C26814D (XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4 * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__ctor_m7D20748A13DA7F28A36C2CFE307DD1E4D37070C2 (_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4 * __this, const RuntimeMethod* method);
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote__ctor_mF48CF419346A556731965B9AB72D4926739629D8 (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNull<ARFoundationRemote.Runtime.IXRMeshSubsystem>(!!0)
inline void Assert_IsNull_TisIXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_mBE48179318416641E9A4EC636FCE58FFD24D026C (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))Assert_IsNull_TisRuntimeObject_m292462BDF0C0EFCEC19765D42940AF93F0A3D239_gshared)(___value0, method);
}
// System.Void UnityEngine.Assertions.Assert::AreEqual<ARFoundationRemote.Runtime.IXRMeshSubsystem>(!!0,!!0)
inline void Assert_AreEqual_TisIXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_mC4F9D9AEF84A51523D84B0C78E2295D644DCEC57 (RuntimeObject* ___expected0, RuntimeObject* ___actual1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Assert_AreEqual_TisRuntimeObject_mFCDC95E1776C5DDBDE0E70F4E73C922407F99F2C_gshared)(___expected0, ___actual1, method);
}
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
// System.Void ARFoundationRemote.Runtime.Extensions::InitializeLoaderSyncIfNotInitialized(UnityEngine.XR.Management.XRManagerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_InitializeLoaderSyncIfNotInitialized_m8CCEE1B289E73F29206F72B12FA82DC8CC7F00E6 (XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * ___settings0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (!settings.isInitializationComplete) {
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_0 = ___settings0;
		NullCheck(L_0);
		bool L_1 = XRManagerSettings_get_isInitializationComplete_m878C7DDB712D4F99160B2F7C71CBFC201F5AB63F(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// settings.InitializeLoaderSync();
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_3 = ___settings0;
		NullCheck(L_3);
		XRManagerSettings_InitializeLoaderSync_mC8931AA78045796B6C9CFCF8CAF6FB0B54C40025(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
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
// UnityEngine.XR.XRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote::GetRealSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * XRGeneralSettingsRemote_GetRealSubsystem_mAD5E4E113F96A369057B15866CF2151C3D0A32B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettingsRemote_GetRealSubsystem_mAD5E4E113F96A369057B15866CF2151C3D0A32B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * V_0 = NULL;
	bool V_1 = false;
	XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * V_2 = NULL;
	bool V_3 = false;
	XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * V_4 = NULL;
	bool V_5 = false;
	XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * V_6 = NULL;
	{
		// var xrGeneralSettings = XRGeneralSettings.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9_il2cpp_TypeInfo_var);
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_0 = XRGeneralSettings_get_Instance_m0D915EB6CD760E30475C5F67090DD8442196FE47(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (xrGeneralSettings != null) {
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		// var manager = xrGeneralSettings.Manager;
		XRGeneralSettings_t646538A20758F1B20812C05C39988EE5E7E0ABC9 * L_4 = V_0;
		NullCheck(L_4);
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_5 = XRGeneralSettings_get_Manager_mBD0D772CE77641DA8B7226D1A9CD3F8E699F7779(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// if (manager != null) {
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// manager.InitializeLoaderSyncIfNotInitialized();
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_9 = V_2;
		Extensions_InitializeLoaderSyncIfNotInitialized_m8CCEE1B289E73F29206F72B12FA82DC8CC7F00E6(L_9, /*hidden argument*/NULL);
		// var loader = manager.activeLoader;
		XRManagerSettings_tD2A1CF858A60A10772C3000CA28388DA7F7510B5 * L_10 = V_2;
		NullCheck(L_10);
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_11 = XRManagerSettings_get_activeLoader_m9371C31D367F55202EE948306D0C61A9D8725B67(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// if (loader != null) {
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		// return loader.GetLoadedSubsystem<XRMeshSubsystem>();
		XRLoader_t2574091AF57F902BF504098AB113416E8D15186A * L_15 = V_4;
		NullCheck(L_15);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_16 = GenericVirtFuncInvoker0< XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9_mECFAECF09F2D9DBE29AABEA8C751BE93BB166734_RuntimeMethod_var, L_15);
		V_6 = L_16;
		goto IL_0056;
	}

IL_004f:
	{
	}

IL_0050:
	{
	}

IL_0051:
	{
		// return null;
		V_6 = (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)NULL;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_17 = V_6;
		return L_17;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__ctor_mBED7FB7077AA625455956E5D5AEAEFB04C26814D (XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettingsRemote__ctor_mBED7FB7077AA625455956E5D5AEAEFB04C26814D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly _Manager Manager = new _Manager();
		_Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95 * L_0 = (_Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95 *)il2cpp_codegen_object_new(_Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95_il2cpp_TypeInfo_var);
		_Manager__ctor_m58694A7D9FC2724E000BCBD018F03CAF43B8BF62(L_0, /*hidden argument*/NULL);
		__this->set_Manager_1(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGeneralSettingsRemote__cctor_m3E0394438354FD701E88A7E8BEC5AC47E0B08A40 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRGeneralSettingsRemote__cctor_m3E0394438354FD701E88A7E8BEC5AC47E0B08A40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly XRGeneralSettingsRemote Instance = new XRGeneralSettingsRemote();
		XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4 * L_0 = (XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4 *)il2cpp_codegen_object_new(XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4_il2cpp_TypeInfo_var);
		XRGeneralSettingsRemote__ctor_mBED7FB7077AA625455956E5D5AEAEFB04C26814D(L_0, /*hidden argument*/NULL);
		((XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettingsRemote_t07352079C29886EF431684D513B223FA728AD8D4_il2cpp_TypeInfo_var))->set_Instance_0(L_0);
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
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Manager__ctor_m58694A7D9FC2724E000BCBD018F03CAF43B8BF62 (_Manager_t527A433DCEB967E6AC95F72416D38BCC0CAC2A95 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_Manager__ctor_m58694A7D9FC2724E000BCBD018F03CAF43B8BF62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly _Loader activeLoader = new _Loader();
		_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4 * L_0 = (_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4 *)il2cpp_codegen_object_new(_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4_il2cpp_TypeInfo_var);
		_Loader__ctor_m7D20748A13DA7F28A36C2CFE307DD1E4D37070C2(L_0, /*hidden argument*/NULL);
		__this->set_activeLoader_0(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Boolean ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager__Loader::get_isARCompanionDefine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _Loader_get_isARCompanionDefine_m83D9915BD706661EEBE53A3C780157F7DA226FCC (const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return true;
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager__Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__ctor_m7D20748A13DA7F28A36C2CFE307DD1E4D37070C2 (_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRGeneralSettingsRemote__Manager__Loader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Loader__cctor_m9AFF701874D86740B842DADE0A8F32E7931E1419 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_Loader__cctor_m9AFF701874D86740B842DADE0A8F32E7931E1419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly IXRMeshSubsystem subsystem = new XRMeshSubsystemRemote();
		XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * L_0 = (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 *)il2cpp_codegen_object_new(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var);
		XRMeshSubsystemRemote__ctor_mF48CF419346A556731965B9AB72D4926739629D8(L_0, /*hidden argument*/NULL);
		((_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4_StaticFields*)il2cpp_codegen_static_fields_for(_Loader_tD25C84EF3AECF6B4FA585FCB242D51FE3D0E67D4_il2cpp_TypeInfo_var))->set_subsystem_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::SetDelegate(ARFoundationRemote.Runtime.IXRMeshSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_SetDelegate_m0E7E09C2E1FADAA7E6AEC9C58AAD80E2138199EC (RuntimeObject* ___del0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_SetDelegate_m0E7E09C2E1FADAA7E6AEC9C58AAD80E2138199EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsNull(subsystemDelegate);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t124AD7D2277A352FA54D1E6AAF8AFD5992FD39EC_il2cpp_TypeInfo_var);
		Assert_IsNull_TisIXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_mBE48179318416641E9A4EC636FCE58FFD24D026C(L_0, /*hidden argument*/Assert_IsNull_TisIXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_mBE48179318416641E9A4EC636FCE58FFD24D026C_RuntimeMethod_var);
		// subsystemDelegate = del;
		RuntimeObject* L_1 = ___del0;
		((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->set_subsystemDelegate_0(L_1);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::ClearDelegate(ARFoundationRemote.Runtime.IXRMeshSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_ClearDelegate_mB257B681043E7A9C4183E4BECD64EF15F3FAF008 (RuntimeObject* ___del0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_ClearDelegate_mB257B681043E7A9C4183E4BECD64EF15F3FAF008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.AreEqual(subsystemDelegate, del);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		RuntimeObject* L_1 = ___del0;
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t124AD7D2277A352FA54D1E6AAF8AFD5992FD39EC_il2cpp_TypeInfo_var);
		Assert_AreEqual_TisIXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_mC4F9D9AEF84A51523D84B0C78E2295D644DCEC57(L_0, L_1, /*hidden argument*/Assert_AreEqual_TisIXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_mC4F9D9AEF84A51523D84B0C78E2295D644DCEC57_RuntimeMethod_var);
		// subsystemDelegate = null;
		((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->set_subsystemDelegate_0((RuntimeObject*)NULL);
		// }
		return;
	}
}
// System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_TryGetMeshInfos_mED05F80E32602FF9EFD399331F83551275FE17EA (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___meshInfosOut0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_TryGetMeshInfos_mED05F80E32602FF9EFD399331F83551275FE17EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return subsystemDelegate.TryGetMeshInfos(meshInfosOut);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * L_1 = ___meshInfosOut0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * >::Invoke(0 /* System.Boolean ARFoundationRemote.Runtime.IXRMeshSubsystem::TryGetMeshInfos(System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>) */, IXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_GenerateMeshAsync_m2EEB6D2885CFB756C058C26C7287D3A1495F5779 (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  ___meshId0, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___mesh1, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___meshCollider2, int32_t ___attributes3, Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * ___onMeshGenerationComplete4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_GenerateMeshAsync_m2EEB6D2885CFB756C058C26C7287D3A1495F5779_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.GenerateMeshAsync(meshId, mesh, meshCollider, attributes, onMeshGenerationComplete);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A  L_1 = ___meshId0;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_2 = ___mesh1;
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_3 = ___meshCollider2;
		int32_t L_4 = ___attributes3;
		Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * L_5 = ___onMeshGenerationComplete4;
		NullCheck(L_0);
		InterfaceActionInvoker5< MeshId_t8674C6A14E469B2507FCDEBBE7F77ACC3CA37C1A , Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C *, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE *, int32_t, Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * >::Invoke(1 /* System.Void ARFoundationRemote.Runtime.IXRMeshSubsystem::GenerateMeshAsync(UnityEngine.XR.MeshId,UnityEngine.Mesh,UnityEngine.MeshCollider,UnityEngine.XR.MeshVertexAttributes,System.Action`1<UnityEngine.XR.MeshGenerationResult>) */, IXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::set_meshDensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_set_meshDensity_mC1084D42F7B6CD542989625AD12CEEE47A3B8766 (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_set_meshDensity_mC1084D42F7B6CD542989625AD12CEEE47A3B8766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => subsystemDelegate.meshDensity = value;
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		float L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< float >::Invoke(2 /* System.Void ARFoundationRemote.Runtime.IXRMeshSubsystem::set_meshDensity(System.Single) */, IXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_SetBoundingVolume_m8B16F62045601DA3FBFBCD33C7B10E05816AAA2D (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_SetBoundingVolume_m8B16F62045601DA3FBFBCD33C7B10E05816AAA2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return subsystemDelegate.SetBoundingVolume(origin, extents);
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___extents1;
		NullCheck(L_0);
		bool L_3 = InterfaceFuncInvoker2< bool, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(3 /* System.Boolean ARFoundationRemote.Runtime.IXRMeshSubsystem::SetBoundingVolume(UnityEngine.Vector3,UnityEngine.Vector3) */, IXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::UnityEngine.ISubsystem.Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_UnityEngine_ISubsystem_Start_m31A02BA940420F04DF5902FB69B44619A7B40799 (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_UnityEngine_ISubsystem_Start_m31A02BA940420F04DF5902FB69B44619A7B40799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Start();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_Stop_m135FE60AE35FB5DC793F21A2B96AADFBC2A0F20B (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_Stop_m135FE60AE35FB5DC793F21A2B96AADFBC2A0F20B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Stop();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote_Destroy_m0A20C7D414DD760A27CA53DC046BECF69EBC7B88 (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_Destroy_m0A20C7D414DD760A27CA53DC046BECF69EBC7B88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// subsystemDelegate.Destroy();
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Boolean ARFoundationRemote.Runtime.XRMeshSubsystemRemote::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRMeshSubsystemRemote_get_running_m975B49EC9C21A3A039B87805CF817E3A45A80533 (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRMeshSubsystemRemote_get_running_m975B49EC9C21A3A039B87805CF817E3A45A80533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool running => subsystemDelegate.running;
		RuntimeObject* L_0 = ((XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_StaticFields*)il2cpp_codegen_static_fields_for(XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1_il2cpp_TypeInfo_var))->get_subsystemDelegate_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean UnityEngine.ISubsystem::get_running() */, ISubsystem_t33DA72BE41C4C99E2A9201979C86ABECD4B7FF78_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void ARFoundationRemote.Runtime.XRMeshSubsystemRemote::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRMeshSubsystemRemote__ctor_mF48CF419346A556731965B9AB72D4926739629D8 (XRMeshSubsystemRemote_tC4B476C071E069DE8759A63DBD59F85B4E828DD1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
