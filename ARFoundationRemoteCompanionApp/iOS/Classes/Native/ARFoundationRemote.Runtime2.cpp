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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// ARFoundationRemote.Runtime.IXRMeshSubsystem
struct IXRMeshSubsystem_t97EDF1EE1831AB6A7B0F4243B166DA3BEC2D5146;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<UnityEngine.MeshFilter>
struct Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2;
// System.Action`1<UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs>
struct Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD;
// System.Action`1<UnityEngine.XR.MeshGenerationResult>
struct Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>[]
struct EntryU5BU5D_t0628C6FB85293B26DF27097F2C6207D555B040A6;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>
struct KeyCollection_tCA416D1C48F9884863E98A42A34F4C9706B57807;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>
struct ValueCollection_t0BE7C585239A5A11D5088F2CA16894293589B2D3;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>
struct Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>
struct Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo>
struct Dictionary_2_t5081EB3ACB1AA4B3412159C4203B5167B8FDA77F;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t5A38FCC3E9F64286F2A624D6571AF9EA7844398E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.XR.ARSubsystems.TrackableId>
struct IEqualityComparer_1_t1F65F81D43D9715FABDFCA1C70B74FAB7EF7FF0E;
// System.Collections.Generic.List`1<ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote>
struct List_1_tA614203C643AD62B78AD94CF1206093B8B2B153D;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t053DAB6E2110E276A0339D73497193F464BC1F82;
// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t595F1BB153CCBF34AE23ADA6A1B0A8DAF0D5318E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475;
// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo>
struct List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661;
// System.Collections.Generic.SortedList`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter>
struct SortedList_2_tBF96DBB6679F16C3159DE28547483145FF008AF2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IO.BinaryReader
struct BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969;
// System.IO.BinaryWriter
struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3;
// System.IO.FileStream
struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Decoder
struct Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Text.RegularExpressions.Regex
struct Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.ARFoundation.ARMeshManager
struct ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26;
// UnityEngine.XR.ARFoundation.ARMeshManager/TrackableIdComparer
struct TrackableIdComparer_tB38EC38924AE1EFD915711258AFA7CDDACAFC589;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB;
// UnityEngine.XR.ARFoundation.MeshQueue
struct MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F;
// UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed
struct ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D;
// UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed/<Load>d__28
struct U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD;
// UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed/<Save>d__27
struct U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D;
// UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed
struct MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA;
// UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed
struct ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/ARKitProvider
struct ARKitProvider_t9E54974CDA2425C55D909236938ED950B44802FB;
// UnityEngine.XR.ARKit.ARKitSessionSubsystem/NativeApi/OnAsyncConversionCompleteDelegate
struct OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF;
// UnityEngine.XR.ARSubsystems.ConfigurationChooser
struct ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980;
// UnityEngine.XR.XRMeshSubsystem
struct XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9;

IL2CPP_EXTERN_C RuntimeClass* ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARWorldMappingStatus_t6AF28485D8EA3B112E93CA7EF61FD5E3E6940D15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AA968B220E08F454FB7E4E810620633AF1CA491;
IL2CPP_EXTERN_C String_t* _stringLiteral0F73BAA839FBAF10F90807495F308A5404A911E0;
IL2CPP_EXTERN_C String_t* _stringLiteral1095D40275EC980E0471F57629585BDCD27E04A4;
IL2CPP_EXTERN_C String_t* _stringLiteral1959C767DE5121E1131C1093130320CFC710B4DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3118EA789792FD068335F186307F1A3B41B5E198;
IL2CPP_EXTERN_C String_t* _stringLiteral4431326F63207A4B861AE1B24C0DAE193FC85219;
IL2CPP_EXTERN_C String_t* _stringLiteral73AECFC551F1F83A8CC4BE9070A2D6D58CB45A05;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD54FF35CED5F6541CA2ECBB38503216E3A1B4C;
IL2CPP_EXTERN_C String_t* _stringLiteral9014478446952253FE48E33725973BCE036D85DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA48FD607D737DC5B90DDCDDECCBB0F14FB795E32;
IL2CPP_EXTERN_C String_t* _stringLiteralA55CB991C2B0E7CBD54518754B41176D5EC81907;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB890F9A8B999291533DACA9981403F3448CD4F25;
IL2CPP_EXTERN_C String_t* _stringLiteralC477BDAD5E5100A60585992AFC49EE74BFB433CB;
IL2CPP_EXTERN_C String_t* _stringLiteralD349ACEDC81F0BAA6E84FE153A29B2D8B7D3C58A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA2736A4E1C0BB637296B73D5B3EB28D2D53D1E;
IL2CPP_EXTERN_C String_t* _stringLiteralF59C04DA2E06A585EE4AB3ED1970CC3D26F1BBCA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m719E28DBB4CF4A7D787F54E1D629D7B5BEF73FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8A482BED6DE05CE1C4E3700A9CBC7EDC4EA48C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7F3E3B5A2240C351C034FE7D33704DE77660B66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD7B2BABA8692A01BA92EE21050132905ADCF84FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB0075F346E74166870D4BCDE21E5807D18B0F943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDC4BEACAC5E0BE4EE674CE33154D18CD0437D27D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m2C0E6B16715837D72E2227FB6FB1024990959B8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mEDE80A989792CACFBF731DEBECF8D996ED150AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBD254818498F17CA2A3CDAAEB2E54C528750C667_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshClassificationFrackingFixed_BreakupMesh_m77B1B4502E8A7486425170D57098B0C2FE04B7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshClassificationFrackingFixed_OnMeshesChanged_m165FB95E9E3AB413F89AC4E15A560448E3E5D6A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshClassificationFrackingFixed_RemoveMesh_mC3014C8DE9CE6D7A5E1F0F17FDB6337BB92AD8ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshClassificationFrackingFixed_UpdateMesh_m1B6671F6A68C9EDCB4BB11BD1D9660CEFE3C978A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_CopyFrom_m8A54AC132F80260033CC05E2A3A22CCC4248355B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m37D0222FA272EA68DD869BCF05F8A671023D18A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m75AEA74E5F1D82C13F1F15B40E23145707D8E421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_ToArray_m238476CD232992C66FA8FEBF7C92134260BD8AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mB05644B4C3DC6509EBC733E98D3812F3C63E82FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadU3Ed__28_System_Collections_IEnumerator_Reset_m314EB004A17DD71EE344EE3097B95903E582B990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSaveU3Ed__27_System_Collections_IEnumerator_Reset_mDD6766E1FF93665B876725FAC37CDF2C123E0F81_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_Awake_m16A2BA109B373F9D689583ABC2BE8758DC4036D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_Load_mF777C48A7E86E19274116AE54CC401BB90881F25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_SaveAndDisposeWorldMap_mA9EEB4213B895AF10836F3F2EA4D7D93FB5C9017_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_Save_mEE8FC8FD55977D780826ADFA6C312BEC6B29F64D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_SetActive_m1026EB5D2648211B2AB91AC98AD99121B24E8F31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_SetActive_m1F857EF0E27370C4298E421227E05D51F361050F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_SetText_mE214A6F653F23B661DE747CD051F37ABB5690C49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_Update_m94B29DDDE3F3887C85B200B5F671042F106B7C8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ARWorldMapControllerFixed_get_supported_m17D706A59C240718377E7ED046EDCBFC4DBFBA5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_Awake_m0AEAE049A67C6BB8E8D45A331CD6C339C3C45007_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_BreakupMesh_m77B1B4502E8A7486425170D57098B0C2FE04B7F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_ExtractClassifiedMesh_m408B04E420E0794B224D5AA42641A903F18B119B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_ExtractTrackableId_m001BD57DF8477600AB976E9CD92A770CBAFA1A20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_OnDisable_m86DB6C4C007304141BCC51EF8B0B80AEA5C95128_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_OnEnable_m594E82F6DB009D3555FA2AFB432D05498D2B5E1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_OnMeshesChanged_m165FB95E9E3AB413F89AC4E15A560448E3E5D6A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_RemoveMesh_mC3014C8DE9CE6D7A5E1F0F17FDB6337BB92AD8ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed_UpdateMesh_m1B6671F6A68C9EDCB4BB11BD1D9660CEFE3C978A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MeshClassificationFrackingFixed__ctor_m51784B014EC3202AB3E6B28CF94640D9FE31D26D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleMeshClassificationFixed_UpdateMeshSubsystem_m130E841EA61045D1E4FF5A0DD23358C9A565E1C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadU3Ed__28_MoveNext_mAB07101A1A7A3DB1E6699ED449D6791FFF21A2E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadU3Ed__28_System_Collections_IEnumerator_Reset_m314EB004A17DD71EE344EE3097B95903E582B990_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSaveU3Ed__27_MoveNext_m4E289761FFB185C3936B6C97654F01AEA70467FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSaveU3Ed__27_System_Collections_IEnumerator_Reset_mDD6766E1FF93665B876725FAC37CDF2C123E0F81_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>
struct  Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0628C6FB85293B26DF27097F2C6207D555B040A6* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tCA416D1C48F9884863E98A42A34F4C9706B57807 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0BE7C585239A5A11D5088F2CA16894293589B2D3 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___entries_1)); }
	inline EntryU5BU5D_t0628C6FB85293B26DF27097F2C6207D555B040A6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0628C6FB85293B26DF27097F2C6207D555B040A6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0628C6FB85293B26DF27097F2C6207D555B040A6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___keys_7)); }
	inline KeyCollection_tCA416D1C48F9884863E98A42A34F4C9706B57807 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCA416D1C48F9884863E98A42A34F4C9706B57807 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCA416D1C48F9884863E98A42A34F4C9706B57807 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ___values_8)); }
	inline ValueCollection_t0BE7C585239A5A11D5088F2CA16894293589B2D3 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0BE7C585239A5A11D5088F2CA16894293589B2D3 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0BE7C585239A5A11D5088F2CA16894293589B2D3 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte>
struct  List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____items_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____items_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.MeshFilter>
struct  List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D, ____items_1)); }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* get__items_1() const { return ____items_1; }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D_StaticFields, ____emptyArray_5)); }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.IO.BinaryReader
struct  BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_stream_0)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stream_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_buffer_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_buffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_decoder_2)); }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_tEEF45EB6F965222036C49E8EC6BA8A0692AA1F26 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_decoder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBytes_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBytes_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_singleChar_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_singleChar_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_charBuffer_5)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_charBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};


// System.IO.BinaryWriter
struct  BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ___OutStream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OutStream_1), (void*)value);
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____buffer_2)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__buffer_2() const { return ____buffer_2; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_2), (void*)value);
	}

	inline static int32_t get_offset_of__encoding_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__encoding_3() const { return ____encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__encoding_3() { return &____encoding_3; }
	inline void set__encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of__encoder_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____encoder_4)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get__encoder_4() const { return ____encoder_4; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of__encoder_4() { return &____encoder_4; }
	inline void set__encoder_4(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		____encoder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____encoder_4), (void*)value);
	}

	inline static int32_t get_offset_of__leaveOpen_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____leaveOpen_5)); }
	inline bool get__leaveOpen_5() const { return ____leaveOpen_5; }
	inline bool* get_address_of__leaveOpen_5() { return &____leaveOpen_5; }
	inline void set__leaveOpen_5(bool value)
	{
		____leaveOpen_5 = value;
	}

	inline static int32_t get_offset_of__largeByteBuffer_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____largeByteBuffer_6)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__largeByteBuffer_6() const { return ____largeByteBuffer_6; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__largeByteBuffer_6() { return &____largeByteBuffer_6; }
	inline void set__largeByteBuffer_6(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____largeByteBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____largeByteBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of__maxChars_7() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3, ____maxChars_7)); }
	inline int32_t get__maxChars_7() const { return ____maxChars_7; }
	inline int32_t* get_address_of__maxChars_7() { return &____maxChars_7; }
	inline void set__maxChars_7(int32_t value)
	{
		____maxChars_7 = value;
	}
};

struct BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_StaticFields, ___Null_0)); }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
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

// UnityEngine.Subsystem
struct  Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_0;

public:
	inline static int32_t get_offset_of_m_subsystemDescriptor_0() { return static_cast<int32_t>(offsetof(Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6, ___m_subsystemDescriptor_0)); }
	inline RuntimeObject* get_m_subsystemDescriptor_0() const { return ___m_subsystemDescriptor_0; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_0() { return &___m_subsystemDescriptor_0; }
	inline void set_m_subsystemDescriptor_0(RuntimeObject* value)
	{
		___m_subsystemDescriptor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_0), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
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


// UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs
struct  ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs::<added>k__BackingField
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs::<updated>k__BackingField
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs::<removed>k__BackingField
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs
struct ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D_marshaled_pinvoke
{
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CaddedU3Ek__BackingField_0;
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs
struct ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D_marshaled_com
{
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CaddedU3Ek__BackingField_0;
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___U3CremovedU3Ek__BackingField_2;
};

// UnityEngine.XR.ARKit.ARWorldMap
struct  ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMap::<nativeHandle>k__BackingField
	int32_t ___U3CnativeHandleU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CnativeHandleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE, ___U3CnativeHandleU3Ek__BackingField_1)); }
	inline int32_t get_U3CnativeHandleU3Ek__BackingField_1() const { return ___U3CnativeHandleU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CnativeHandleU3Ek__BackingField_1() { return &___U3CnativeHandleU3Ek__BackingField_1; }
	inline void set_U3CnativeHandleU3Ek__BackingField_1(int32_t value)
	{
		___U3CnativeHandleU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARWorldMapRequest
struct  ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequest::m_RequestId
	int32_t ___m_RequestId_0;

public:
	inline static int32_t get_offset_of_m_RequestId_0() { return static_cast<int32_t>(offsetof(ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167, ___m_RequestId_0)); }
	inline int32_t get_m_RequestId_0() const { return ___m_RequestId_0; }
	inline int32_t* get_address_of_m_RequestId_0() { return &___m_RequestId_0; }
	inline void set_m_RequestId_0(int32_t value)
	{
		___m_RequestId_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId
struct  TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};

struct TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_tFD46E63A462E852189FD6AB4E2B0B67C4D8FDBDF * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  value)
	{
		___s_InvalidId_1 = value;
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

// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct  FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t31950F3A853EAE886AC8F13EA7FC03A3EB46E3F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct  FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_tD19D05B1E6CAF201F88401B04FDB25227664C419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct  Allocator_t62A091275262E7067EAAD565B67764FA877D58D6 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t62A091275262E7067EAAD565B67764FA877D58D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.NativeArrayOptions
struct  NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t23897F2D7CA2F1B58D2539C64062DD7C77615B6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSessionState
struct  ARSessionState_t2368AD70809571FD82D99E976A2083F7BAB15419 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.ARSessionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARSessionState_t2368AD70809571FD82D99E976A2083F7BAB15419, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27
struct  U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::<>4__this
	ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * ___U3CU3E4__this_2;
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::<sessionSubsystem>5__1
	ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * ___U3CsessionSubsystemU3E5__1_3;
	// UnityEngine.XR.ARKit.ARWorldMapRequest UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::<request>5__2
	ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  ___U3CrequestU3E5__2_4;
	// UnityEngine.XR.ARKit.ARWorldMap UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::<worldMap>5__3
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___U3CworldMapU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D, ___U3CU3E4__this_2)); }
	inline ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsessionSubsystemU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D, ___U3CsessionSubsystemU3E5__1_3)); }
	inline ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * get_U3CsessionSubsystemU3E5__1_3() const { return ___U3CsessionSubsystemU3E5__1_3; }
	inline ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A ** get_address_of_U3CsessionSubsystemU3E5__1_3() { return &___U3CsessionSubsystemU3E5__1_3; }
	inline void set_U3CsessionSubsystemU3E5__1_3(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * value)
	{
		___U3CsessionSubsystemU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionSubsystemU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D, ___U3CrequestU3E5__2_4)); }
	inline ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  get_U3CrequestU3E5__2_4() const { return ___U3CrequestU3E5__2_4; }
	inline ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * get_address_of_U3CrequestU3E5__2_4() { return &___U3CrequestU3E5__2_4; }
	inline void set_U3CrequestU3E5__2_4(ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  value)
	{
		___U3CrequestU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CworldMapU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D, ___U3CworldMapU3E5__3_5)); }
	inline ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  get_U3CworldMapU3E5__3_5() const { return ___U3CworldMapU3E5__3_5; }
	inline ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * get_address_of_U3CworldMapU3E5__3_5() { return &___U3CworldMapU3E5__3_5; }
	inline void set_U3CworldMapU3E5__3_5(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  value)
	{
		___U3CworldMapU3E5__3_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.TrackingMode
struct  TrackingMode_tC3976E58F29348F03C77B1914B03360A89F9D249 
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.TrackingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingMode_tC3976E58F29348F03C77B1914B03360A89F9D249, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARMeshClassification
struct  ARMeshClassification_t1C45CDC3F8BAAA6D438CF41E5FAF3D4A14F68DA2 
{
public:
	// System.Byte UnityEngine.XR.ARKit.ARMeshClassification::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARMeshClassification_t1C45CDC3F8BAAA6D438CF41E5FAF3D4A14F68DA2, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARWorldMapRequestStatus
struct  ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMapRequestStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARKit.ARWorldMappingStatus
struct  ARWorldMappingStatus_t6AF28485D8EA3B112E93CA7EF61FD5E3E6940D15 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARWorldMappingStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARWorldMappingStatus_t6AF28485D8EA3B112E93CA7EF61FD5E3E6940D15, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.Feature
struct  Feature_tDAB1CF43CABADCA755120264C62FD06F426AA7CA 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.Feature::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Feature_tDAB1CF43CABADCA755120264C62FD06F426AA7CA, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct  NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.SessionAvailability
struct  SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.SessionAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SessionAvailability_t5D8A6E743297DB42DFE5004CB3F6EF1A0EEAB5B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B  : public Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_1;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Destroyed
	bool ___m_Destroyed_2;

public:
	inline static int32_t get_offset_of_m_Running_1() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B, ___m_Running_1)); }
	inline bool get_m_Running_1() const { return ___m_Running_1; }
	inline bool* get_address_of_m_Running_1() { return &___m_Running_1; }
	inline void set_m_Running_1(bool value)
	{
		___m_Running_1 = value;
	}

	inline static int32_t get_offset_of_m_Destroyed_2() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B, ___m_Destroyed_2)); }
	inline bool get_m_Destroyed_2() const { return ___m_Destroyed_2; }
	inline bool* get_address_of_m_Destroyed_2() { return &___m_Destroyed_2; }
	inline void set_m_Destroyed_2(bool value)
	{
		___m_Destroyed_2 = value;
	}
};


// System.IO.FileStream
struct  FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418  : public Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_7)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_7), (void*)value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_8), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___safeHandle_9)); }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_tE1B31BE63CD11BBF2B9B6A205A72735F32EB1BCB * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_9), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_5), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_6), (void*)value);
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

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<System.ByteEnum>
struct  NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARMeshClassification>
struct  NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_pinvoke
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif
// Native definition for COM marshalling of Unity.Collections.NativeArray`1
#ifndef NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
#define NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com_define
struct NativeArray_1_t350F3793D2FE9D9CD5A50725BE978ED846FE3098_marshaled_com
{
	void* ___m_Buffer_0;
	int32_t ___m_Length_1;
	int32_t ___m_AllocatorLabel_2;
};
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
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


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor
struct  ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Identifier
	intptr_t ___m_Identifier_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Capabilities
	uint64_t ___m_Capabilities_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.ConfigurationDescriptor::m_Rank
	int32_t ___m_Rank_2;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0, ___m_Identifier_0)); }
	inline intptr_t get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline intptr_t* get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(intptr_t value)
	{
		___m_Identifier_0 = value;
	}

	inline static int32_t get_offset_of_m_Capabilities_1() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0, ___m_Capabilities_1)); }
	inline uint64_t get_m_Capabilities_1() const { return ___m_Capabilities_1; }
	inline uint64_t* get_address_of_m_Capabilities_1() { return &___m_Capabilities_1; }
	inline void set_m_Capabilities_1(uint64_t value)
	{
		___m_Capabilities_1 = value;
	}

	inline static int32_t get_offset_of_m_Rank_2() { return static_cast<int32_t>(offsetof(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0, ___m_Rank_2)); }
	inline int32_t get_m_Rank_2() const { return ___m_Rank_2; }
	inline int32_t* get_address_of_m_Rank_2() { return &___m_Rank_2; }
	inline void set_m_Rank_2(int32_t value)
	{
		___m_Rank_2 = value;
	}
};


// System.Action`1<UnityEngine.MeshFilter>
struct  Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs>
struct  Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28
struct  U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<>4__this
	ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * ___U3CU3E4__this_2;
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<sessionSubsystem>5__1
	ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * ___U3CsessionSubsystemU3E5__1_3;
	// System.IO.FileStream UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<file>5__2
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * ___U3CfileU3E5__2_4;
	// System.Int32 UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<bytesPerFrame>5__3
	int32_t ___U3CbytesPerFrameU3E5__3_5;
	// System.Int64 UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<bytesRemaining>5__4
	int64_t ___U3CbytesRemainingU3E5__4_6;
	// System.IO.BinaryReader UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<binaryReader>5__5
	BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * ___U3CbinaryReaderU3E5__5_7;
	// System.Collections.Generic.List`1<System.Byte> UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<allBytes>5__6
	List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * ___U3CallBytesU3E5__6_8;
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<data>5__7
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___U3CdataU3E5__7_9;
	// UnityEngine.XR.ARKit.ARWorldMap UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<worldMap>5__8
	ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___U3CworldMapU3E5__8_10;
	// System.Byte[] UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::<bytes>5__9
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___U3CbytesU3E5__9_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CU3E4__this_2)); }
	inline ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsessionSubsystemU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CsessionSubsystemU3E5__1_3)); }
	inline ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * get_U3CsessionSubsystemU3E5__1_3() const { return ___U3CsessionSubsystemU3E5__1_3; }
	inline ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A ** get_address_of_U3CsessionSubsystemU3E5__1_3() { return &___U3CsessionSubsystemU3E5__1_3; }
	inline void set_U3CsessionSubsystemU3E5__1_3(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * value)
	{
		___U3CsessionSubsystemU3E5__1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionSubsystemU3E5__1_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfileU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CfileU3E5__2_4)); }
	inline FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * get_U3CfileU3E5__2_4() const { return ___U3CfileU3E5__2_4; }
	inline FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 ** get_address_of_U3CfileU3E5__2_4() { return &___U3CfileU3E5__2_4; }
	inline void set_U3CfileU3E5__2_4(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * value)
	{
		___U3CfileU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfileU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbytesPerFrameU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CbytesPerFrameU3E5__3_5)); }
	inline int32_t get_U3CbytesPerFrameU3E5__3_5() const { return ___U3CbytesPerFrameU3E5__3_5; }
	inline int32_t* get_address_of_U3CbytesPerFrameU3E5__3_5() { return &___U3CbytesPerFrameU3E5__3_5; }
	inline void set_U3CbytesPerFrameU3E5__3_5(int32_t value)
	{
		___U3CbytesPerFrameU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CbytesRemainingU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CbytesRemainingU3E5__4_6)); }
	inline int64_t get_U3CbytesRemainingU3E5__4_6() const { return ___U3CbytesRemainingU3E5__4_6; }
	inline int64_t* get_address_of_U3CbytesRemainingU3E5__4_6() { return &___U3CbytesRemainingU3E5__4_6; }
	inline void set_U3CbytesRemainingU3E5__4_6(int64_t value)
	{
		___U3CbytesRemainingU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CbinaryReaderU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CbinaryReaderU3E5__5_7)); }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * get_U3CbinaryReaderU3E5__5_7() const { return ___U3CbinaryReaderU3E5__5_7; }
	inline BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 ** get_address_of_U3CbinaryReaderU3E5__5_7() { return &___U3CbinaryReaderU3E5__5_7; }
	inline void set_U3CbinaryReaderU3E5__5_7(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * value)
	{
		___U3CbinaryReaderU3E5__5_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbinaryReaderU3E5__5_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CallBytesU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CallBytesU3E5__6_8)); }
	inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * get_U3CallBytesU3E5__6_8() const { return ___U3CallBytesU3E5__6_8; }
	inline List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 ** get_address_of_U3CallBytesU3E5__6_8() { return &___U3CallBytesU3E5__6_8; }
	inline void set_U3CallBytesU3E5__6_8(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * value)
	{
		___U3CallBytesU3E5__6_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CallBytesU3E5__6_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdataU3E5__7_9() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CdataU3E5__7_9)); }
	inline NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  get_U3CdataU3E5__7_9() const { return ___U3CdataU3E5__7_9; }
	inline NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * get_address_of_U3CdataU3E5__7_9() { return &___U3CdataU3E5__7_9; }
	inline void set_U3CdataU3E5__7_9(NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  value)
	{
		___U3CdataU3E5__7_9 = value;
	}

	inline static int32_t get_offset_of_U3CworldMapU3E5__8_10() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CworldMapU3E5__8_10)); }
	inline ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  get_U3CworldMapU3E5__8_10() const { return ___U3CworldMapU3E5__8_10; }
	inline ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * get_address_of_U3CworldMapU3E5__8_10() { return &___U3CworldMapU3E5__8_10; }
	inline void set_U3CworldMapU3E5__8_10(ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  value)
	{
		___U3CworldMapU3E5__8_10 = value;
	}

	inline static int32_t get_offset_of_U3CbytesU3E5__9_11() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD, ___U3CbytesU3E5__9_11)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_U3CbytesU3E5__9_11() const { return ___U3CbytesU3E5__9_11; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_U3CbytesU3E5__9_11() { return &___U3CbytesU3E5__9_11; }
	inline void set_U3CbytesU3E5__9_11(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___U3CbytesU3E5__9_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbytesU3E5__9_11), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.Configuration
struct  Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43 
{
public:
	// UnityEngine.XR.ARSubsystems.ConfigurationDescriptor UnityEngine.XR.ARSubsystems.Configuration::<descriptor>k__BackingField
	ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0  ___U3CdescriptorU3Ek__BackingField_0;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.Configuration::<features>k__BackingField
	uint64_t ___U3CfeaturesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CdescriptorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43, ___U3CdescriptorU3Ek__BackingField_0)); }
	inline ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0  get_U3CdescriptorU3Ek__BackingField_0() const { return ___U3CdescriptorU3Ek__BackingField_0; }
	inline ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0 * get_address_of_U3CdescriptorU3Ek__BackingField_0() { return &___U3CdescriptorU3Ek__BackingField_0; }
	inline void set_U3CdescriptorU3Ek__BackingField_0(ConfigurationDescriptor_tED94AB3E57F4976F3D085673AF259A1ECEDF7DA0  value)
	{
		___U3CdescriptorU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CfeaturesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43, ___U3CfeaturesU3Ek__BackingField_1)); }
	inline uint64_t get_U3CfeaturesU3Ek__BackingField_1() const { return ___U3CfeaturesU3Ek__BackingField_1; }
	inline uint64_t* get_address_of_U3CfeaturesU3Ek__BackingField_1() { return &___U3CfeaturesU3Ek__BackingField_1; }
	inline void set_U3CfeaturesU3Ek__BackingField_1(uint64_t value)
	{
		___U3CfeaturesU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.XRMeshSubsystem
struct  XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9  : public IntegratedSubsystem_1_t808F7E2ADCA546A132C411EB61297ADCB67BDFC5
{
public:

public:
};


// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration>
struct  Nullable_1_t6ECBB9122AB4D3DA5EA3AEDEB0D17BBAB3695F8E 
{
public:
	// T System.Nullable`1::value
	Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t6ECBB9122AB4D3DA5EA3AEDEB0D17BBAB3695F8E, ___value_0)); }
	inline Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43  get_value_0() const { return ___value_0; }
	inline Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t6ECBB9122AB4D3DA5EA3AEDEB0D17BBAB3695F8E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARMeshManager
struct  ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.ARMeshManager::m_MeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_MeshPrefab_4;
	// System.Single UnityEngine.XR.ARFoundation.ARMeshManager::m_Density
	float ___m_Density_5;
	// System.Boolean UnityEngine.XR.ARFoundation.ARMeshManager::m_Normals
	bool ___m_Normals_6;
	// System.Boolean UnityEngine.XR.ARFoundation.ARMeshManager::m_Tangents
	bool ___m_Tangents_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARMeshManager::m_TextureCoordinates
	bool ___m_TextureCoordinates_8;
	// System.Boolean UnityEngine.XR.ARFoundation.ARMeshManager::m_Colors
	bool ___m_Colors_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARMeshManager::m_ConcurrentQueueSize
	int32_t ___m_ConcurrentQueueSize_10;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs> UnityEngine.XR.ARFoundation.ARMeshManager::meshesChanged
	Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * ___meshesChanged_11;
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshManager::m_Added
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___m_Added_12;
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshManager::m_Updated
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___m_Updated_13;
	// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshManager::m_Removed
	List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ___m_Removed_14;
	// UnityEngine.XR.ARFoundation.MeshQueue UnityEngine.XR.ARFoundation.ARMeshManager::m_Pending
	MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * ___m_Pending_15;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.MeshId,UnityEngine.XR.MeshInfo> UnityEngine.XR.ARFoundation.ARMeshManager::m_Generating
	Dictionary_2_t5081EB3ACB1AA4B3412159C4203B5167B8FDA77F * ___m_Generating_16;
	// System.Collections.Generic.SortedList`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshManager::m_Meshes
	SortedList_2_tBF96DBB6679F16C3159DE28547483145FF008AF2 * ___m_Meshes_17;
	// System.Action`1<UnityEngine.XR.MeshGenerationResult> UnityEngine.XR.ARFoundation.ARMeshManager::m_OnMeshGeneratedDelegate
	Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * ___m_OnMeshGeneratedDelegate_18;
	// ARFoundationRemote.Runtime.IXRMeshSubsystem UnityEngine.XR.ARFoundation.ARMeshManager::m_Subsystem
	RuntimeObject* ___m_Subsystem_19;

public:
	inline static int32_t get_offset_of_m_MeshPrefab_4() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_MeshPrefab_4)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_MeshPrefab_4() const { return ___m_MeshPrefab_4; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_MeshPrefab_4() { return &___m_MeshPrefab_4; }
	inline void set_m_MeshPrefab_4(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_MeshPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Density_5() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Density_5)); }
	inline float get_m_Density_5() const { return ___m_Density_5; }
	inline float* get_address_of_m_Density_5() { return &___m_Density_5; }
	inline void set_m_Density_5(float value)
	{
		___m_Density_5 = value;
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Normals_6)); }
	inline bool get_m_Normals_6() const { return ___m_Normals_6; }
	inline bool* get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(bool value)
	{
		___m_Normals_6 = value;
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Tangents_7)); }
	inline bool get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline bool* get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(bool value)
	{
		___m_Tangents_7 = value;
	}

	inline static int32_t get_offset_of_m_TextureCoordinates_8() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_TextureCoordinates_8)); }
	inline bool get_m_TextureCoordinates_8() const { return ___m_TextureCoordinates_8; }
	inline bool* get_address_of_m_TextureCoordinates_8() { return &___m_TextureCoordinates_8; }
	inline void set_m_TextureCoordinates_8(bool value)
	{
		___m_TextureCoordinates_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Colors_9)); }
	inline bool get_m_Colors_9() const { return ___m_Colors_9; }
	inline bool* get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(bool value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_ConcurrentQueueSize_10() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_ConcurrentQueueSize_10)); }
	inline int32_t get_m_ConcurrentQueueSize_10() const { return ___m_ConcurrentQueueSize_10; }
	inline int32_t* get_address_of_m_ConcurrentQueueSize_10() { return &___m_ConcurrentQueueSize_10; }
	inline void set_m_ConcurrentQueueSize_10(int32_t value)
	{
		___m_ConcurrentQueueSize_10 = value;
	}

	inline static int32_t get_offset_of_meshesChanged_11() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___meshesChanged_11)); }
	inline Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * get_meshesChanged_11() const { return ___meshesChanged_11; }
	inline Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 ** get_address_of_meshesChanged_11() { return &___meshesChanged_11; }
	inline void set_meshesChanged_11(Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * value)
	{
		___meshesChanged_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshesChanged_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Added_12() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Added_12)); }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * get_m_Added_12() const { return ___m_Added_12; }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D ** get_address_of_m_Added_12() { return &___m_Added_12; }
	inline void set_m_Added_12(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * value)
	{
		___m_Added_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Added_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Updated_13() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Updated_13)); }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * get_m_Updated_13() const { return ___m_Updated_13; }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D ** get_address_of_m_Updated_13() { return &___m_Updated_13; }
	inline void set_m_Updated_13(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * value)
	{
		___m_Updated_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Updated_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Removed_14() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Removed_14)); }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * get_m_Removed_14() const { return ___m_Removed_14; }
	inline List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D ** get_address_of_m_Removed_14() { return &___m_Removed_14; }
	inline void set_m_Removed_14(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * value)
	{
		___m_Removed_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Removed_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Pending_15() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Pending_15)); }
	inline MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * get_m_Pending_15() const { return ___m_Pending_15; }
	inline MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F ** get_address_of_m_Pending_15() { return &___m_Pending_15; }
	inline void set_m_Pending_15(MeshQueue_t30091398F0D878F1D68B03B2511A4A3938FE178F * value)
	{
		___m_Pending_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Pending_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Generating_16() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Generating_16)); }
	inline Dictionary_2_t5081EB3ACB1AA4B3412159C4203B5167B8FDA77F * get_m_Generating_16() const { return ___m_Generating_16; }
	inline Dictionary_2_t5081EB3ACB1AA4B3412159C4203B5167B8FDA77F ** get_address_of_m_Generating_16() { return &___m_Generating_16; }
	inline void set_m_Generating_16(Dictionary_2_t5081EB3ACB1AA4B3412159C4203B5167B8FDA77F * value)
	{
		___m_Generating_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Generating_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Meshes_17() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Meshes_17)); }
	inline SortedList_2_tBF96DBB6679F16C3159DE28547483145FF008AF2 * get_m_Meshes_17() const { return ___m_Meshes_17; }
	inline SortedList_2_tBF96DBB6679F16C3159DE28547483145FF008AF2 ** get_address_of_m_Meshes_17() { return &___m_Meshes_17; }
	inline void set_m_Meshes_17(SortedList_2_tBF96DBB6679F16C3159DE28547483145FF008AF2 * value)
	{
		___m_Meshes_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Meshes_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnMeshGeneratedDelegate_18() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_OnMeshGeneratedDelegate_18)); }
	inline Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * get_m_OnMeshGeneratedDelegate_18() const { return ___m_OnMeshGeneratedDelegate_18; }
	inline Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C ** get_address_of_m_OnMeshGeneratedDelegate_18() { return &___m_OnMeshGeneratedDelegate_18; }
	inline void set_m_OnMeshGeneratedDelegate_18(Action_1_tC000C2A9E7CAB4EC5456D1A111CAF561BBAD353C * value)
	{
		___m_OnMeshGeneratedDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnMeshGeneratedDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Subsystem_19() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26, ___m_Subsystem_19)); }
	inline RuntimeObject* get_m_Subsystem_19() const { return ___m_Subsystem_19; }
	inline RuntimeObject** get_address_of_m_Subsystem_19() { return &___m_Subsystem_19; }
	inline void set_m_Subsystem_19(RuntimeObject* value)
	{
		___m_Subsystem_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Subsystem_19), (void*)value);
	}
};

struct ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARMeshManager_TrackableIdComparer UnityEngine.XR.ARFoundation.ARMeshManager::s_TrackableIdComparer
	TrackableIdComparer_tB38EC38924AE1EFD915711258AFA7CDDACAFC589 * ___s_TrackableIdComparer_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.MeshInfo> UnityEngine.XR.ARFoundation.ARMeshManager::s_MeshInfos
	List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * ___s_MeshInfos_21;
	// System.Collections.Generic.List`1<ARFoundationRemote.Runtime.XRMeshSubsystemDescriptorRemote> UnityEngine.XR.ARFoundation.ARMeshManager::s_SubsystemDescriptors
	List_1_tA614203C643AD62B78AD94CF1206093B8B2B153D * ___s_SubsystemDescriptors_22;

public:
	inline static int32_t get_offset_of_s_TrackableIdComparer_20() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26_StaticFields, ___s_TrackableIdComparer_20)); }
	inline TrackableIdComparer_tB38EC38924AE1EFD915711258AFA7CDDACAFC589 * get_s_TrackableIdComparer_20() const { return ___s_TrackableIdComparer_20; }
	inline TrackableIdComparer_tB38EC38924AE1EFD915711258AFA7CDDACAFC589 ** get_address_of_s_TrackableIdComparer_20() { return &___s_TrackableIdComparer_20; }
	inline void set_s_TrackableIdComparer_20(TrackableIdComparer_tB38EC38924AE1EFD915711258AFA7CDDACAFC589 * value)
	{
		___s_TrackableIdComparer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdComparer_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_MeshInfos_21() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26_StaticFields, ___s_MeshInfos_21)); }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * get_s_MeshInfos_21() const { return ___s_MeshInfos_21; }
	inline List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 ** get_address_of_s_MeshInfos_21() { return &___s_MeshInfos_21; }
	inline void set_s_MeshInfos_21(List_1_t8B901F577995BDF2BDFC726428DFE35A17BB6661 * value)
	{
		___s_MeshInfos_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_MeshInfos_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemDescriptors_22() { return static_cast<int32_t>(offsetof(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26_StaticFields, ___s_SubsystemDescriptors_22)); }
	inline List_1_tA614203C643AD62B78AD94CF1206093B8B2B153D * get_s_SubsystemDescriptors_22() const { return ___s_SubsystemDescriptors_22; }
	inline List_1_tA614203C643AD62B78AD94CF1206093B8B2B153D ** get_address_of_s_SubsystemDescriptors_22() { return &___s_SubsystemDescriptors_22; }
	inline void set_s_SubsystemDescriptors_22(List_1_tA614203C643AD62B78AD94CF1206093B8B2B153D * value)
	{
		___s_SubsystemDescriptors_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_22), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed
struct  ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.XR.ARFoundation.ARSession UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::m_ARSession
	ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * ___m_ARSession_4;
	// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::m_ErrorText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_ErrorText_5;
	// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::m_LogText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_LogText_6;
	// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::m_MappingStatusText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_MappingStatusText_7;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::m_SaveButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___m_SaveButton_8;
	// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::m_LoadButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___m_LoadButton_9;
	// System.Collections.Generic.List`1<System.String> UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::m_LogMessages
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___m_LogMessages_10;

public:
	inline static int32_t get_offset_of_m_ARSession_4() { return static_cast<int32_t>(offsetof(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D, ___m_ARSession_4)); }
	inline ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * get_m_ARSession_4() const { return ___m_ARSession_4; }
	inline ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB ** get_address_of_m_ARSession_4() { return &___m_ARSession_4; }
	inline void set_m_ARSession_4(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * value)
	{
		___m_ARSession_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ARSession_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ErrorText_5() { return static_cast<int32_t>(offsetof(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D, ___m_ErrorText_5)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_ErrorText_5() const { return ___m_ErrorText_5; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_ErrorText_5() { return &___m_ErrorText_5; }
	inline void set_m_ErrorText_5(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_ErrorText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ErrorText_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LogText_6() { return static_cast<int32_t>(offsetof(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D, ___m_LogText_6)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_LogText_6() const { return ___m_LogText_6; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_LogText_6() { return &___m_LogText_6; }
	inline void set_m_LogText_6(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_LogText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LogText_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_MappingStatusText_7() { return static_cast<int32_t>(offsetof(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D, ___m_MappingStatusText_7)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_MappingStatusText_7() const { return ___m_MappingStatusText_7; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_MappingStatusText_7() { return &___m_MappingStatusText_7; }
	inline void set_m_MappingStatusText_7(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_MappingStatusText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MappingStatusText_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_SaveButton_8() { return static_cast<int32_t>(offsetof(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D, ___m_SaveButton_8)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_m_SaveButton_8() const { return ___m_SaveButton_8; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_m_SaveButton_8() { return &___m_SaveButton_8; }
	inline void set_m_SaveButton_8(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___m_SaveButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SaveButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_LoadButton_9() { return static_cast<int32_t>(offsetof(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D, ___m_LoadButton_9)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_m_LoadButton_9() const { return ___m_LoadButton_9; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_m_LoadButton_9() { return &___m_LoadButton_9; }
	inline void set_m_LoadButton_9(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___m_LoadButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LoadButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_LogMessages_10() { return static_cast<int32_t>(offsetof(ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D, ___m_LogMessages_10)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_m_LogMessages_10() const { return ___m_LogMessages_10; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_m_LogMessages_10() { return &___m_LogMessages_10; }
	inline void set_m_LogMessages_10(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___m_LogMessages_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LogMessages_10), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed
struct  MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.XR.ARFoundation.ARMeshManager UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_MeshManager
	ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * ___m_MeshManager_5;
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_NoneMeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_NoneMeshPrefab_6;
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_WallMeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_WallMeshPrefab_7;
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_FloorMeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_FloorMeshPrefab_8;
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_CeilingMeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_CeilingMeshPrefab_9;
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_TableMeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_TableMeshPrefab_10;
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_SeatMeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_SeatMeshPrefab_11;
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_WindowMeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_WindowMeshPrefab_12;
	// UnityEngine.MeshFilter UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_DoorMeshPrefab
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___m_DoorMeshPrefab_13;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]> UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_MeshFrackingMap
	Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * ___m_MeshFrackingMap_14;
	// System.Action`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_BreakupMeshAction
	Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * ___m_BreakupMeshAction_15;
	// System.Action`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_UpdateMeshAction
	Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * ___m_UpdateMeshAction_16;
	// System.Action`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_RemoveMeshAction
	Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * ___m_RemoveMeshAction_17;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_BaseTriangles
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_BaseTriangles_18;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::m_ClassifiedTriangles
	List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___m_ClassifiedTriangles_19;

public:
	inline static int32_t get_offset_of_m_MeshManager_5() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_MeshManager_5)); }
	inline ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * get_m_MeshManager_5() const { return ___m_MeshManager_5; }
	inline ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 ** get_address_of_m_MeshManager_5() { return &___m_MeshManager_5; }
	inline void set_m_MeshManager_5(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * value)
	{
		___m_MeshManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_NoneMeshPrefab_6() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_NoneMeshPrefab_6)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_NoneMeshPrefab_6() const { return ___m_NoneMeshPrefab_6; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_NoneMeshPrefab_6() { return &___m_NoneMeshPrefab_6; }
	inline void set_m_NoneMeshPrefab_6(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_NoneMeshPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_NoneMeshPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_WallMeshPrefab_7() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_WallMeshPrefab_7)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_WallMeshPrefab_7() const { return ___m_WallMeshPrefab_7; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_WallMeshPrefab_7() { return &___m_WallMeshPrefab_7; }
	inline void set_m_WallMeshPrefab_7(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_WallMeshPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WallMeshPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_FloorMeshPrefab_8() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_FloorMeshPrefab_8)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_FloorMeshPrefab_8() const { return ___m_FloorMeshPrefab_8; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_FloorMeshPrefab_8() { return &___m_FloorMeshPrefab_8; }
	inline void set_m_FloorMeshPrefab_8(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_FloorMeshPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FloorMeshPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CeilingMeshPrefab_9() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_CeilingMeshPrefab_9)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_CeilingMeshPrefab_9() const { return ___m_CeilingMeshPrefab_9; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_CeilingMeshPrefab_9() { return &___m_CeilingMeshPrefab_9; }
	inline void set_m_CeilingMeshPrefab_9(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_CeilingMeshPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CeilingMeshPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_TableMeshPrefab_10() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_TableMeshPrefab_10)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_TableMeshPrefab_10() const { return ___m_TableMeshPrefab_10; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_TableMeshPrefab_10() { return &___m_TableMeshPrefab_10; }
	inline void set_m_TableMeshPrefab_10(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_TableMeshPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TableMeshPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_SeatMeshPrefab_11() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_SeatMeshPrefab_11)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_SeatMeshPrefab_11() const { return ___m_SeatMeshPrefab_11; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_SeatMeshPrefab_11() { return &___m_SeatMeshPrefab_11; }
	inline void set_m_SeatMeshPrefab_11(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_SeatMeshPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SeatMeshPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_WindowMeshPrefab_12() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_WindowMeshPrefab_12)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_WindowMeshPrefab_12() const { return ___m_WindowMeshPrefab_12; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_WindowMeshPrefab_12() { return &___m_WindowMeshPrefab_12; }
	inline void set_m_WindowMeshPrefab_12(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_WindowMeshPrefab_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WindowMeshPrefab_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_DoorMeshPrefab_13() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_DoorMeshPrefab_13)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_m_DoorMeshPrefab_13() const { return ___m_DoorMeshPrefab_13; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_m_DoorMeshPrefab_13() { return &___m_DoorMeshPrefab_13; }
	inline void set_m_DoorMeshPrefab_13(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___m_DoorMeshPrefab_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DoorMeshPrefab_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_MeshFrackingMap_14() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_MeshFrackingMap_14)); }
	inline Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * get_m_MeshFrackingMap_14() const { return ___m_MeshFrackingMap_14; }
	inline Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 ** get_address_of_m_MeshFrackingMap_14() { return &___m_MeshFrackingMap_14; }
	inline void set_m_MeshFrackingMap_14(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * value)
	{
		___m_MeshFrackingMap_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshFrackingMap_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_BreakupMeshAction_15() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_BreakupMeshAction_15)); }
	inline Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * get_m_BreakupMeshAction_15() const { return ___m_BreakupMeshAction_15; }
	inline Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 ** get_address_of_m_BreakupMeshAction_15() { return &___m_BreakupMeshAction_15; }
	inline void set_m_BreakupMeshAction_15(Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * value)
	{
		___m_BreakupMeshAction_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BreakupMeshAction_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_UpdateMeshAction_16() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_UpdateMeshAction_16)); }
	inline Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * get_m_UpdateMeshAction_16() const { return ___m_UpdateMeshAction_16; }
	inline Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 ** get_address_of_m_UpdateMeshAction_16() { return &___m_UpdateMeshAction_16; }
	inline void set_m_UpdateMeshAction_16(Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * value)
	{
		___m_UpdateMeshAction_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UpdateMeshAction_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_RemoveMeshAction_17() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_RemoveMeshAction_17)); }
	inline Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * get_m_RemoveMeshAction_17() const { return ___m_RemoveMeshAction_17; }
	inline Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 ** get_address_of_m_RemoveMeshAction_17() { return &___m_RemoveMeshAction_17; }
	inline void set_m_RemoveMeshAction_17(Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * value)
	{
		___m_RemoveMeshAction_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RemoveMeshAction_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_BaseTriangles_18() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_BaseTriangles_18)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_BaseTriangles_18() const { return ___m_BaseTriangles_18; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_BaseTriangles_18() { return &___m_BaseTriangles_18; }
	inline void set_m_BaseTriangles_18(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_BaseTriangles_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BaseTriangles_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClassifiedTriangles_19() { return static_cast<int32_t>(offsetof(MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA, ___m_ClassifiedTriangles_19)); }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * get_m_ClassifiedTriangles_19() const { return ___m_ClassifiedTriangles_19; }
	inline List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 ** get_address_of_m_ClassifiedTriangles_19() { return &___m_ClassifiedTriangles_19; }
	inline void set_m_ClassifiedTriangles_19(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * value)
	{
		___m_ClassifiedTriangles_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClassifiedTriangles_19), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed
struct  ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.XR.ARFoundation.ARMeshManager UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::m_MeshManager
	ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * ___m_MeshManager_4;
	// System.Boolean UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::m_ClassificationEnabled
	bool ___m_ClassificationEnabled_5;

public:
	inline static int32_t get_offset_of_m_MeshManager_4() { return static_cast<int32_t>(offsetof(ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495, ___m_MeshManager_4)); }
	inline ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * get_m_MeshManager_4() const { return ___m_MeshManager_4; }
	inline ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 ** get_address_of_m_MeshManager_4() { return &___m_MeshManager_4; }
	inline void set_m_MeshManager_4(ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * value)
	{
		___m_MeshManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MeshManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClassificationEnabled_5() { return static_cast<int32_t>(offsetof(ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495, ___m_ClassificationEnabled_5)); }
	inline bool get_m_ClassificationEnabled_5() const { return ___m_ClassificationEnabled_5; }
	inline bool* get_address_of_m_ClassificationEnabled_5() { return &___m_ClassificationEnabled_5; }
	inline void set_m_ClassificationEnabled_5(bool value)
	{
		___m_ClassificationEnabled_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>
struct  SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemInstances
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::<subsystem>k__BackingField
	XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};

struct SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemDescriptors
	List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2::s_SubsystemInstances
	List_1_t595F1BB153CCBF34AE23ADA6A1B0A8DAF0D5318E * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t71A8ADBEF293474EAEA02AD88A071AD903A3B475 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t595F1BB153CCBF34AE23ADA6A1B0A8DAF0D5318E * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t595F1BB153CCBF34AE23ADA6A1B0A8DAF0D5318E ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t595F1BB153CCBF34AE23ADA6A1B0A8DAF0D5318E * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B
{
public:
	// System.Nullable`1<UnityEngine.XR.ARSubsystems.Configuration> UnityEngine.XR.ARSubsystems.XRSessionSubsystem::<currentConfiguration>k__BackingField
	Nullable_1_t6ECBB9122AB4D3DA5EA3AEDEB0D17BBAB3695F8E  ___U3CcurrentConfigurationU3Ek__BackingField_3;
	// UnityEngine.XR.ARSubsystems.Feature UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_PreviousDesiredFeatures
	uint64_t ___m_PreviousDesiredFeatures_4;
	// UnityEngine.XR.ARSubsystems.Configuration UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_PreviousConfiguration
	Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43  ___m_PreviousConfiguration_5;
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_FirstUpdate
	bool ___m_FirstUpdate_6;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_DefaultConfigurationChooser
	ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138 * ___m_DefaultConfigurationChooser_7;
	// UnityEngine.XR.ARSubsystems.ConfigurationChooser UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_ConfigurationChooser
	ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138 * ___m_ConfigurationChooser_8;
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::provider
	Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * ___provider_9;

public:
	inline static int32_t get_offset_of_U3CcurrentConfigurationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___U3CcurrentConfigurationU3Ek__BackingField_3)); }
	inline Nullable_1_t6ECBB9122AB4D3DA5EA3AEDEB0D17BBAB3695F8E  get_U3CcurrentConfigurationU3Ek__BackingField_3() const { return ___U3CcurrentConfigurationU3Ek__BackingField_3; }
	inline Nullable_1_t6ECBB9122AB4D3DA5EA3AEDEB0D17BBAB3695F8E * get_address_of_U3CcurrentConfigurationU3Ek__BackingField_3() { return &___U3CcurrentConfigurationU3Ek__BackingField_3; }
	inline void set_U3CcurrentConfigurationU3Ek__BackingField_3(Nullable_1_t6ECBB9122AB4D3DA5EA3AEDEB0D17BBAB3695F8E  value)
	{
		___U3CcurrentConfigurationU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDesiredFeatures_4() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_PreviousDesiredFeatures_4)); }
	inline uint64_t get_m_PreviousDesiredFeatures_4() const { return ___m_PreviousDesiredFeatures_4; }
	inline uint64_t* get_address_of_m_PreviousDesiredFeatures_4() { return &___m_PreviousDesiredFeatures_4; }
	inline void set_m_PreviousDesiredFeatures_4(uint64_t value)
	{
		___m_PreviousDesiredFeatures_4 = value;
	}

	inline static int32_t get_offset_of_m_PreviousConfiguration_5() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_PreviousConfiguration_5)); }
	inline Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43  get_m_PreviousConfiguration_5() const { return ___m_PreviousConfiguration_5; }
	inline Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43 * get_address_of_m_PreviousConfiguration_5() { return &___m_PreviousConfiguration_5; }
	inline void set_m_PreviousConfiguration_5(Configuration_t47C9C15657F4C18BE99ACC9F222F85EB9E72BF43  value)
	{
		___m_PreviousConfiguration_5 = value;
	}

	inline static int32_t get_offset_of_m_FirstUpdate_6() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_FirstUpdate_6)); }
	inline bool get_m_FirstUpdate_6() const { return ___m_FirstUpdate_6; }
	inline bool* get_address_of_m_FirstUpdate_6() { return &___m_FirstUpdate_6; }
	inline void set_m_FirstUpdate_6(bool value)
	{
		___m_FirstUpdate_6 = value;
	}

	inline static int32_t get_offset_of_m_DefaultConfigurationChooser_7() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_DefaultConfigurationChooser_7)); }
	inline ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138 * get_m_DefaultConfigurationChooser_7() const { return ___m_DefaultConfigurationChooser_7; }
	inline ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138 ** get_address_of_m_DefaultConfigurationChooser_7() { return &___m_DefaultConfigurationChooser_7; }
	inline void set_m_DefaultConfigurationChooser_7(ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138 * value)
	{
		___m_DefaultConfigurationChooser_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultConfigurationChooser_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConfigurationChooser_8() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_ConfigurationChooser_8)); }
	inline ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138 * get_m_ConfigurationChooser_8() const { return ___m_ConfigurationChooser_8; }
	inline ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138 ** get_address_of_m_ConfigurationChooser_8() { return &___m_ConfigurationChooser_8; }
	inline void set_m_ConfigurationChooser_8(ConfigurationChooser_tE998C1FAAEE04D77C0E09951DA0A84FDA6C25138 * value)
	{
		___m_ConfigurationChooser_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ConfigurationChooser_8), (void*)value);
	}

	inline static int32_t get_offset_of_provider_9() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___provider_9)); }
	inline Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * get_provider_9() const { return ___provider_9; }
	inline Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 ** get_address_of_provider_9() { return &___provider_9; }
	inline void set_provider_9(Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * value)
	{
		___provider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___provider_9), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_6;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_7;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_8;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_9;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_10;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_11;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_12;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_13;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * ___m_CanvasGroupCache_18;

public:
	inline static int32_t get_offset_of_m_Navigation_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_6)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_6() const { return ___m_Navigation_6; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_6() { return &___m_Navigation_6; }
	inline void set_m_Navigation_6(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_7)); }
	inline int32_t get_m_Transition_7() const { return ___m_Transition_7; }
	inline int32_t* get_address_of_m_Transition_7() { return &___m_Transition_7; }
	inline void set_m_Transition_7(int32_t value)
	{
		___m_Transition_7 = value;
	}

	inline static int32_t get_offset_of_m_Colors_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_8)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_8() const { return ___m_Colors_8; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_8() { return &___m_Colors_8; }
	inline void set_m_Colors_8(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_8 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_9)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_9() const { return ___m_SpriteState_9; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_9() { return &___m_SpriteState_9; }
	inline void set_m_SpriteState_9(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_10)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_10() const { return ___m_AnimationTriggers_10; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_10() { return &___m_AnimationTriggers_10; }
	inline void set_m_AnimationTriggers_10(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_11)); }
	inline bool get_m_Interactable_11() const { return ___m_Interactable_11; }
	inline bool* get_address_of_m_Interactable_11() { return &___m_Interactable_11; }
	inline void set_m_Interactable_11(bool value)
	{
		___m_Interactable_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_12)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_12() const { return ___m_TargetGraphic_12; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_12() { return &___m_TargetGraphic_12; }
	inline void set_m_TargetGraphic_12(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_13)); }
	inline bool get_m_GroupsAllowInteraction_13() const { return ___m_GroupsAllowInteraction_13; }
	inline bool* get_address_of_m_GroupsAllowInteraction_13() { return &___m_GroupsAllowInteraction_13; }
	inline void set_m_GroupsAllowInteraction_13(bool value)
	{
		___m_GroupsAllowInteraction_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_14)); }
	inline int32_t get_m_CurrentIndex_14() const { return ___m_CurrentIndex_14; }
	inline int32_t* get_address_of_m_CurrentIndex_14() { return &___m_CurrentIndex_14; }
	inline void set_m_CurrentIndex_14(int32_t value)
	{
		___m_CurrentIndex_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_15() const { return ___U3CisPointerInsideU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_15() { return &___U3CisPointerInsideU3Ek__BackingField_15; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_16() const { return ___U3CisPointerDownU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_16() { return &___U3CisPointerDownU3Ek__BackingField_16; }
	inline void set_U3CisPointerDownU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_17)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_17() const { return ___U3ChasSelectionU3Ek__BackingField_17; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_17() { return &___U3ChasSelectionU3Ek__BackingField_17; }
	inline void set_U3ChasSelectionU3Ek__BackingField_17(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_18)); }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * get_m_CanvasGroupCache_18() const { return ___m_CanvasGroupCache_18; }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 ** get_address_of_m_CanvasGroupCache_18() { return &___m_CanvasGroupCache_18; }
	inline void set_m_CanvasGroupCache_18(List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * value)
	{
		___m_CanvasGroupCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_18), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARSession
struct  ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB  : public SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;

public:
	inline static int32_t get_offset_of_m_AttemptUpdate_7() { return static_cast<int32_t>(offsetof(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB, ___m_AttemptUpdate_7)); }
	inline bool get_m_AttemptUpdate_7() const { return ___m_AttemptUpdate_7; }
	inline bool* get_address_of_m_AttemptUpdate_7() { return &___m_AttemptUpdate_7; }
	inline void set_m_AttemptUpdate_7(bool value)
	{
		___m_AttemptUpdate_7 = value;
	}

	inline static int32_t get_offset_of_m_MatchFrameRate_8() { return static_cast<int32_t>(offsetof(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB, ___m_MatchFrameRate_8)); }
	inline bool get_m_MatchFrameRate_8() const { return ___m_MatchFrameRate_8; }
	inline bool* get_address_of_m_MatchFrameRate_8() { return &___m_MatchFrameRate_8; }
	inline void set_m_MatchFrameRate_8(bool value)
	{
		___m_MatchFrameRate_8 = value;
	}

	inline static int32_t get_offset_of_m_TrackingMode_9() { return static_cast<int32_t>(offsetof(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB, ___m_TrackingMode_9)); }
	inline int32_t get_m_TrackingMode_9() const { return ___m_TrackingMode_9; }
	inline int32_t* get_address_of_m_TrackingMode_9() { return &___m_TrackingMode_9; }
	inline void set_m_TrackingMode_9(int32_t value)
	{
		___m_TrackingMode_9 = value;
	}
};

struct ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_11;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_12;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_13;
	// UnityEngine.XR.ARFoundation.ARSession UnityEngine.XR.ARFoundation.ARSession::s_Instance
	ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * ___s_Instance_14;

public:
	inline static int32_t get_offset_of_stateChanged_10() { return static_cast<int32_t>(offsetof(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB_StaticFields, ___stateChanged_10)); }
	inline Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * get_stateChanged_10() const { return ___stateChanged_10; }
	inline Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD ** get_address_of_stateChanged_10() { return &___stateChanged_10; }
	inline void set_stateChanged_10(Action_1_t675D80EB5B146D48758125B0CB33D213FDAB08CD * value)
	{
		___stateChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChanged_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_State_11() { return static_cast<int32_t>(offsetof(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB_StaticFields, ___s_State_11)); }
	inline int32_t get_s_State_11() const { return ___s_State_11; }
	inline int32_t* get_address_of_s_State_11() { return &___s_State_11; }
	inline void set_s_State_11(int32_t value)
	{
		___s_State_11 = value;
	}

	inline static int32_t get_offset_of_s_NotTrackingReason_12() { return static_cast<int32_t>(offsetof(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB_StaticFields, ___s_NotTrackingReason_12)); }
	inline int32_t get_s_NotTrackingReason_12() const { return ___s_NotTrackingReason_12; }
	inline int32_t* get_address_of_s_NotTrackingReason_12() { return &___s_NotTrackingReason_12; }
	inline void set_s_NotTrackingReason_12(int32_t value)
	{
		___s_NotTrackingReason_12 = value;
	}

	inline static int32_t get_offset_of_s_Availability_13() { return static_cast<int32_t>(offsetof(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB_StaticFields, ___s_Availability_13)); }
	inline int32_t get_s_Availability_13() const { return ___s_Availability_13; }
	inline int32_t* get_address_of_s_Availability_13() { return &___s_Availability_13; }
	inline void set_s_Availability_13(int32_t value)
	{
		___s_Availability_13 = value;
	}

	inline static int32_t get_offset_of_s_Instance_14() { return static_cast<int32_t>(offsetof(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB_StaticFields, ___s_Instance_14)); }
	inline ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * get_s_Instance_14() const { return ___s_Instance_14; }
	inline ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB ** get_address_of_s_Instance_14() { return &___s_Instance_14; }
	inline void set_s_Instance_14(ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * value)
	{
		___s_Instance_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_14), (void*)value);
	}
};


// UnityEngine.XR.ARKit.ARKitSessionSubsystem
struct  ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A  : public XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem_ARKitProvider UnityEngine.XR.ARKit.ARKitSessionSubsystem::provider
	ARKitProvider_t9E54974CDA2425C55D909236938ED950B44802FB * ___provider_10;

public:
	inline static int32_t get_offset_of_provider_10() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A, ___provider_10)); }
	inline ARKitProvider_t9E54974CDA2425C55D909236938ED950B44802FB * get_provider_10() const { return ___provider_10; }
	inline ARKitProvider_t9E54974CDA2425C55D909236938ED950B44802FB ** get_address_of_provider_10() { return &___provider_10; }
	inline void set_provider_10(ARKitProvider_t9E54974CDA2425C55D909236938ED950B44802FB * value)
	{
		___provider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___provider_10), (void*)value);
	}
};

struct ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields
{
public:
	// UnityEngine.XR.ARKit.ARKitSessionSubsystem_NativeApi_OnAsyncConversionCompleteDelegate UnityEngine.XR.ARKit.ARKitSessionSubsystem::s_OnAsyncWorldMapCompleted
	OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * ___s_OnAsyncWorldMapCompleted_11;

public:
	inline static int32_t get_offset_of_s_OnAsyncWorldMapCompleted_11() { return static_cast<int32_t>(offsetof(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_StaticFields, ___s_OnAsyncWorldMapCompleted_11)); }
	inline OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * get_s_OnAsyncWorldMapCompleted_11() const { return ___s_OnAsyncWorldMapCompleted_11; }
	inline OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF ** get_address_of_s_OnAsyncWorldMapCompleted_11() { return &___s_OnAsyncWorldMapCompleted_11; }
	inline void set_s_OnAsyncWorldMapCompleted_11(OnAsyncConversionCompleteDelegate_t841FB5BE19010FE3AFBEDEA37C52A468755B19FF * value)
	{
		___s_OnAsyncWorldMapCompleted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_OnAsyncWorldMapCompleted_11), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_19;

public:
	inline static int32_t get_offset_of_m_OnClick_19() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_19)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_19() const { return ___m_OnClick_19; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_19() { return &___m_OnClick_19; }
	inline void set_m_OnClick_19(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_19), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.MeshFilter[]
struct MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * m_Items[1];

public:
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// !0[] Unity.Collections.NativeArray`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeArray_1_ToArray_m238476CD232992C66FA8FEBF7C92134260BD8AD5_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m37D0222FA272EA68DD869BCF05F8A671023D18A3_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<System.Object,System.Object>::get_subsystem()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m4B541054CC60E616694357611534CDDA7DC5D1A0_gshared_inline (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mBD254818498F17CA2A3CDAAEB2E54C528750C667_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_gshared_inline (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* List_1_ToArray_mEDE80A989792CACFBF731DEBECF8D996ED150AF9_gshared (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.Byte>::CopyFrom(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_m8A54AC132F80260033CC05E2A3A22CCC4248355B_gshared (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8A482BED6DE05CE1C4E3700A9CBC7EDC4EA48C66_gshared (Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m87B38757F504696D47AD3006669E17559FD2913E_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___action0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.ByteEnum>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m669C7AB167C1A566D7565ADD37E69AACC4F94D58_gshared (NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m33BA3B95D2F9E8CAB5B6E20B0BF93E8184BC80D5_gshared (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<System.ByteEnum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m9753D96B5D67A86ED9B6F8A52FF967F6852A20D3_gshared (NativeArray_1_tF8E1739B91352CCFD231046E631BD0C041244824 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m046302B471AFA5691F6C3633270E9FA9B3FE348C_gshared (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mDCAC2595EB5D88AA052A1A3A00A0FA8EE80B5C30_gshared (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m49D83DCFF940A281F7E87FA3C10C63F73E308506_gshared (Dictionary_2_t5221105303A173FF92DD7B4EBC8147278C0C2DBE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method);

// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARWorldMapControllerFixed_Save_mEE8FC8FD55977D780826ADFA6C312BEC6B29F64D (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARWorldMapControllerFixed_Load_mF777C48A7E86E19274116AE54CC401BB90881F25 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARSession::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARSession_Reset_m8AEE231717E7ECDF6B51E17137CB9E8F7B64BC63 (ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed/<Save>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__27__ctor_m4B85C6D969FCE6F4604AA2575483EBB81BAF57C4 (U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed/<Load>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ed__28__ctor_m55B2710B4DC38B66B0E76F1986C8E53999678276 (U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, String_t* ___logMessage0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.XR.ARKit.ARWorldMap::Serialize(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, int32_t ___allocator0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * File_Open_mDA5EB4A312EAEBF8543B13C572271FB5F673A501 (String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185 (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___output0, const RuntimeMethod* method);
// !0[] Unity.Collections.NativeArray`1<System.Byte>::ToArray()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* NativeArray_1_ToArray_m238476CD232992C66FA8FEBF7C92134260BD8AD5 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))NativeArray_1_ToArray_m238476CD232992C66FA8FEBF7C92134260BD8AD5_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m37D0222FA272EA68DD869BCF05F8A671023D18A3 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, const RuntimeMethod*))NativeArray_1_Dispose_m37D0222FA272EA68DD869BCF05F8A671023D18A3_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARKit.ARWorldMap::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0 (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`2<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::get_subsystem()
inline XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_inline (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 * __this, const RuntimeMethod* method)
{
	return ((  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * (*) (SubsystemLifecycleManager_2_t166FEDF0CA0BFB41196B14F047C0F43EC2BC52A3 *, const RuntimeMethod*))SubsystemLifecycleManager_2_get_subsystem_m4B541054CC60E616694357611534CDDA7DC5D1A0_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARKitSessionSubsystem::get_worldMapSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARKitSessionSubsystem_get_worldMapSupported_mF4E670B5DD91EA33F33C816EBFD0483490015C02 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapControllerFixed_get_supported_m17D706A59C240718377E7ED046EDCBFC4DBFBA5A (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_errorText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ARWorldMapControllerFixed_get_errorText_m0020CAAA41958EBABC7880B3C6343BD306C35EB3 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::SetActive(UnityEngine.UI.Text,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_SetActive_m1026EB5D2648211B2AB91AC98AD99121B24E8F31 (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text0, bool ___active1, const RuntimeMethod* method);
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_saveButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ARWorldMapControllerFixed_get_saveButton_m978B40FE8CF6421861A41D620608124BC98C6211 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::SetActive(UnityEngine.UI.Button,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_SetActive_m1F857EF0E27370C4298E421227E05D51F361050F (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button0, bool ___active1, const RuntimeMethod* method);
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_loadButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ARWorldMapControllerFixed_get_loadButton_mA3799071651A2AADD54ECAA136E2DEE387796F17 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_mappingStatusText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ARWorldMapControllerFixed_get_mappingStatusText_m8BCB24005D0BDF361E284F58E3D0DE28C2A50C21 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_logText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ARWorldMapControllerFixed_get_logText_m4147258C72B88B27ECCC18BF1B1D06E25E24324D (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::SetText(UnityEngine.UI.Text,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_SetText_mE214A6F653F23B661DE747CD051F37ABB5690C49 (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text0, String_t* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARWorldMappingStatus UnityEngine.XR.ARKit.ARKitSessionSubsystem::get_worldMappingStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARKitSessionSubsystem_get_worldMappingStatus_mCCC90F7BE712B10BCD985D7E464AA5755CE3F045 (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___input0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mBD254818498F17CA2A3CDAAEB2E54C528750C667 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1__ctor_mBD254818498F17CA2A3CDAAEB2E54C528750C667_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_gshared)(__this, ___collection0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
inline int32_t List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_gshared_inline)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// !0[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* List_1_ToArray_mEDE80A989792CACFBF731DEBECF8D996ED150AF9 (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *, const RuntimeMethod*))List_1_ToArray_mEDE80A989792CACFBF731DEBECF8D996ED150AF9_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Byte>::CopyFrom(!0[])
inline void NativeArray_1_CopyFrom_m8A54AC132F80260033CC05E2A3A22CCC4248355B (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___array0, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*))NativeArray_1_CopyFrom_m8A54AC132F80260033CC05E2A3A22CCC4248355B_gshared)(__this, ___array0, method);
}
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::TryDeserialize(Unity.Collections.NativeArray`1<System.Byte>,UnityEngine.XR.ARKit.ARWorldMap&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_TryDeserialize_m3AEFF37DAED1C28DA714ED37CD54DEE43771BCD4 (NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  ___serializedWorldMap0, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * ___worldMap1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMap::get_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMap_get_valid_m2778D108B711DFB048E4AF1042800968BC4F63FC (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitSessionSubsystem::ApplyWorldMap(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitSessionSubsystem_ApplyWorldMap_m997E26F557C3D9BAFF871419C88F9E505B4607C9 (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___worldMap0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARWorldMapRequest UnityEngine.XR.ARKit.ARKitSessionSubsystem::GetARWorldMapAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  ARKitSessionSubsystem_GetARWorldMapAsync_m767616E7906AC991039AE185E3ADD5ACB3AE1B10 (ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARWorldMapRequestStatus UnityEngine.XR.ARKit.ARWorldMapRequest::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867 (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsDone(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsDone_mDFB38617F9C19A5E100040093374E5F04F465334 (int32_t ___status0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.ARKit.ARWorldMapRequestStatusExtensions::IsError(UnityEngine.XR.ARKit.ARWorldMapRequestStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8 (int32_t ___status0, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARWorldMap UnityEngine.XR.ARKit.ARWorldMapRequest::GetWorldMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARWorldMapRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapRequest_Dispose_m6B143E570818A0D47A9C4D9EE2ADFE0B34FD478A (ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::SaveAndDisposeWorldMap(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_SaveAndDisposeWorldMap_mA9EEB4213B895AF10836F3F2EA4D7D93FB5C9017 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___worldMap0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.MeshFilter>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m719E28DBB4CF4A7D787F54E1D629D7B5BEF73FC6 (Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC (bool ___condition0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8A482BED6DE05CE1C4E3700A9CBC7EDC4EA48C66 (Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8A482BED6DE05CE1C4E3700A9CBC7EDC4EA48C66_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARMeshManager::add_meshesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARMeshManager_add_meshesChanged_m619F0D8182FB1C26F1E4A0A79B40C4612C03D316 (ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * __this, Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARMeshManager::remove_meshesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARMeshManager_remove_meshesChanged_m9FB3C35538794F5097B2446FD4474F302214B81A (ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * __this, Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs::get_added()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ARMeshesChangedEventArgs_get_added_m4CC4E3C4DA0ED7058CC1B5B5B6334AC14DEDBD76_inline (ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.MeshFilter>::ForEach(System.Action`1<!0>)
inline void List_1_ForEach_m2C0E6B16715837D72E2227FB6FB1024990959B8A (List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * __this, Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D *, Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 *, const RuntimeMethod*))List_1_ForEach_m87B38757F504696D47AD3006669E17559FD2913E_gshared)(__this, ___action0, method);
}
// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs::get_updated()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ARMeshesChangedEventArgs_get_updated_mABBA44F047942D7526F0A1A2FFF638EBF8B750B9_inline (ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.MeshFilter> UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs::get_removed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ARMeshesChangedEventArgs_get_removed_m08B60A8773789CF1CF440859D3860B510A9A96FD_inline (ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARSubsystems.TrackableId::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableId__ctor_m9DD30A8FE5DB5798D50C6F121E8FFD324F4DE4D6 (TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 * __this, String_t* ___idString0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_mB750E1DCAB658124AAD81A02B93DED7601047B60 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::GetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_GetTriangles_mC16C6F2A2E7A58E8AC6D34E7899215626BCCC5B9 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___triangles0, int32_t ___submesh1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
inline void List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
inline void List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD_gshared)(__this, ___value0, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, int32_t, const RuntimeMethod*))List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* Mesh_get_normals_m3CE4668899836CBD17C3F85EB24261CBCEB3EABB (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m4054D319A67DAAA25A794D67AD37278A84406589 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_SetTriangles_m6A43D705DE751C622CCF88EC31C4EF1B53578BE5 (Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * __this, List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * ___triangles0, int32_t ___submesh1, const RuntimeMethod* method);
// ARFoundationRemote.Runtime.IXRMeshSubsystem UnityEngine.XR.ARFoundation.ARMeshManager::get_subsystem()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ARMeshManager_get_subsystem_m0D12029952F709BEB9632EF5571D56975C76852E_inline (ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::ExtractTrackableId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  MeshClassificationFrackingFixed_ExtractTrackableId_m001BD57DF8477600AB976E9CD92A770CBAFA1A20 (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, String_t* ___meshFilterName0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARMeshClassification> UnityEngine.XR.ARKit.ARKitMeshSubsystemExtensions::GetFaceClassifications(UnityEngine.XR.XRMeshSubsystem,UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  ARKitMeshSubsystemExtensions_GetFaceClassifications_mC40B0B1A19CC0D5E1FF259784B11B517EEE6132B (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * ___subsystem0, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___meshId1, int32_t ___allocator2, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARMeshClassification>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mB05644B4C3DC6509EBC733E98D3812F3C63E82FC (NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m669C7AB167C1A566D7565ADD37E69AACC4F94D58_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.MeshFilter>(!!0,UnityEngine.Transform)
inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * (*) (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m765EEDB3D86CE4EADC667B84C18E793D14144E1D_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDC4BEACAC5E0BE4EE674CE33154D18CD0437D27D (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___key0, MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820*, const RuntimeMethod*))Dictionary_2_set_Item_m33BA3B95D2F9E8CAB5B6E20B0BF93E8184BC80D5_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_sharedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::ExtractClassifiedMesh(UnityEngine.Mesh,Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARMeshClassification>,UnityEngine.XR.ARKit.ARMeshClassification,UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_ExtractClassifiedMesh_m408B04E420E0794B224D5AA42641A903F18B119B (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___baseMesh0, NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  ___faceClassifications1, uint8_t ___selectedMeshClassification2, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___classifiedMesh3, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496 (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___value0, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARMeshClassification>::Dispose()
inline void NativeArray_1_Dispose_m75AEA74E5F1D82C13F1F15B40E23145707D8E421 (NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *, const RuntimeMethod*))NativeArray_1_Dispose_m9753D96B5D67A86ED9B6F8A52FF967F6852A20D3_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>::get_Item(!0)
inline MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* Dictionary_2_get_Item_mB0075F346E74166870D4BCDE21E5807D18B0F943 (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___key0, const RuntimeMethod* method)
{
	return ((  MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* (*) (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))Dictionary_2_get_Item_m046302B471AFA5691F6C3633270E9FA9B3FE348C_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>::Remove(!0)
inline bool Dictionary_2_Remove_m7F3E3B5A2240C351C034FE7D33704DE77660B66D (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * __this, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 *, TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47 , const RuntimeMethod*))Dictionary_2_Remove_mDCAC2595EB5D88AA052A1A3A00A0FA8EE80B5C30_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.MeshFilter[]>::.ctor()
inline void Dictionary_2__ctor_mD7B2BABA8692A01BA92EE21050132905ADCF84FB (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 *, const RuntimeMethod*))Dictionary_2__ctor_m49D83DCFF940A281F7E87FA3C10C63F73E308506_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4 (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *, const RuntimeMethod*))List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::UpdateMeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleMeshClassificationFixed_UpdateMeshSubsystem_m130E841EA61045D1E4FF5A0DD23358C9A565E1C4 (ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARKit.ARKitMeshSubsystemExtensions::SetClassificationEnabled(UnityEngine.XR.XRMeshSubsystem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARKitMeshSubsystemExtensions_SetClassificationEnabled_m4A8585D372FBA2928790BC63D7FD30972A8A553A (XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * ___subsystem0, bool ___enabled1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARFoundation.ARSession UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_arSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * ARWorldMapControllerFixed_get_arSession_mB9947387FF3F3C474A48E4837B63A51C724657DC (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * V_0 = NULL;
	{
		// get { return m_ARSession; }
		ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * L_0 = __this->get_m_ARSession_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ARSession; }
		ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::set_arSession(UnityEngine.XR.ARFoundation.ARSession)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_set_arSession_m02A33B4A7FC22B879BCA2D07C37B732BBC8EFA13 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ARSession = value; }
		ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * L_0 = ___value0;
		__this->set_m_ARSession_4(L_0);
		// set { m_ARSession = value; }
		return;
	}
}
// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_errorText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ARWorldMapControllerFixed_get_errorText_m0020CAAA41958EBABC7880B3C6343BD306C35EB3 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_0 = NULL;
	{
		// get { return m_ErrorText; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_m_ErrorText_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ErrorText; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::set_errorText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_set_errorText_m3112DD7140E1631BD8C5B17DAE1D8C980799D511 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_ErrorText = value; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = ___value0;
		__this->set_m_ErrorText_5(L_0);
		// set { m_ErrorText = value; }
		return;
	}
}
// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_logText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ARWorldMapControllerFixed_get_logText_m4147258C72B88B27ECCC18BF1B1D06E25E24324D (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_0 = NULL;
	{
		// get { return m_LogText; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_m_LogText_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_LogText; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::set_logText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_set_logText_m0A09A4EC6E3BA16EE2D228E801D778F2C63D2D6F (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_LogText = value; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = ___value0;
		__this->set_m_LogText_6(L_0);
		// set { m_LogText = value; }
		return;
	}
}
// UnityEngine.UI.Text UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_mappingStatusText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ARWorldMapControllerFixed_get_mappingStatusText_m8BCB24005D0BDF361E284F58E3D0DE28C2A50C21 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * V_0 = NULL;
	{
		// get { return m_MappingStatusText; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_m_MappingStatusText_7();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MappingStatusText; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::set_mappingStatusText(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_set_mappingStatusText_m222452A02BC5721DD017D011E8DF36C2248FD26A (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_MappingStatusText = value; }
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = ___value0;
		__this->set_m_MappingStatusText_7(L_0);
		// set { m_MappingStatusText = value; }
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_saveButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ARWorldMapControllerFixed_get_saveButton_m978B40FE8CF6421861A41D620608124BC98C6211 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * V_0 = NULL;
	{
		// get { return m_SaveButton; }
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_m_SaveButton_8();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_SaveButton; }
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::set_saveButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_set_saveButton_mED9B07BF057D2633D47119F3D3A5563A0AE4A909 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SaveButton = value; }
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = ___value0;
		__this->set_m_SaveButton_8(L_0);
		// set { m_SaveButton = value; }
		return;
	}
}
// UnityEngine.UI.Button UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_loadButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ARWorldMapControllerFixed_get_loadButton_mA3799071651A2AADD54ECAA136E2DEE387796F17 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * V_0 = NULL;
	{
		// get { return m_LoadButton; }
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = __this->get_m_LoadButton_9();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_LoadButton; }
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::set_loadButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_set_loadButton_m413F6E013387A6A5A6AC741970A1C722FD0238D8 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___value0, const RuntimeMethod* method)
{
	{
		// set { m_LoadButton = value; }
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = ___value0;
		__this->set_m_LoadButton_9(L_0);
		// set { m_LoadButton = value; }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::OnSaveButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_OnSaveButton_m1A2A767A708DA89D4426CA978141A39221AEB1CE (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Save());
		RuntimeObject* L_0 = ARWorldMapControllerFixed_Save_mEE8FC8FD55977D780826ADFA6C312BEC6B29F64D(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::OnLoadButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_OnLoadButton_m69C17D83A28B3AAC33A9806AC8DFAC5F8CDF88EE (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(Load());
		RuntimeObject* L_0 = ARWorldMapControllerFixed_Load_mF777C48A7E86E19274116AE54CC401BB90881F25(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::OnResetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_OnResetButton_mFCAD0957E0495A79FE638752CC3EE13736AE907E (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	{
		// m_ARSession.Reset();
		ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * L_0 = __this->get_m_ARSession_4();
		NullCheck(L_0);
		ARSession_Reset_m8AEE231717E7ECDF6B51E17137CB9E8F7B64BC63(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARWorldMapControllerFixed_Save_mEE8FC8FD55977D780826ADFA6C312BEC6B29F64D (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_Save_mEE8FC8FD55977D780826ADFA6C312BEC6B29F64D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * L_0 = (U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D *)il2cpp_codegen_object_new(U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D_il2cpp_TypeInfo_var);
		U3CSaveU3Ed__27__ctor_m4B85C6D969FCE6F4604AA2575483EBB81BAF57C4(L_0, 0, /*hidden argument*/NULL);
		U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARWorldMapControllerFixed_Load_mF777C48A7E86E19274116AE54CC401BB90881F25 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_Load_mF777C48A7E86E19274116AE54CC401BB90881F25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * L_0 = (U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD *)il2cpp_codegen_object_new(U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD_il2cpp_TypeInfo_var);
		U3CLoadU3Ed__28__ctor_m55B2710B4DC38B66B0E76F1986C8E53999678276(L_0, 0, /*hidden argument*/NULL);
		U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::SaveAndDisposeWorldMap(UnityEngine.XR.ARKit.ARWorldMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_SaveAndDisposeWorldMap_mA9EEB4213B895AF10836F3F2EA4D7D93FB5C9017 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  ___worldMap0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_SaveAndDisposeWorldMap_mA9EEB4213B895AF10836F3F2EA4D7D93FB5C9017_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  V_0;
	memset((&V_0), 0, sizeof(V_0));
	FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * V_1 = NULL;
	BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * V_2 = NULL;
	{
		// Log("Serializing ARWorldMap to byte array...");
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(__this, _stringLiteral0F73BAA839FBAF10F90807495F308A5404A911E0, /*hidden argument*/NULL);
		// var data = worldMap.Serialize(Allocator.Temp);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_0 = ARWorldMap_Serialize_m0888FED892B775E57E8BEDCE88AEB7CC5296C847((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&___worldMap0), 2, /*hidden argument*/NULL);
		V_0 = L_0;
		// Log(string.Format("ARWorldMap has {0} bytes.", data.Length));
		int32_t L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(&V_0))->___m_Length_1);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1959C767DE5121E1131C1093130320CFC710B4DF, L_3, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(__this, L_4, /*hidden argument*/NULL);
		// var file = File.Open(path, FileMode.Create);
		String_t* L_5 = ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0(__this, /*hidden argument*/NULL);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_6 = File_Open_mDA5EB4A312EAEBF8543B13C572271FB5F673A501(L_5, 2, /*hidden argument*/NULL);
		V_1 = L_6;
		// var writer = new BinaryWriter(file);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_7 = V_1;
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_8 = (BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 *)il2cpp_codegen_object_new(BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m2E92F4E5096905E2E7487E003AB7B3CC5C5EC185(L_8, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// writer.Write(data.ToArray());
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_9 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = NativeArray_1_ToArray_m238476CD232992C66FA8FEBF7C92134260BD8AD5((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(&V_0), /*hidden argument*/NativeArray_1_ToArray_m238476CD232992C66FA8FEBF7C92134260BD8AD5_RuntimeMethod_var);
		NullCheck(L_9);
		VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_9, L_10);
		// writer.Close();
		BinaryWriter_t1B8E78B6CACFBFB57BF140FB4DECE19AFD249CC3 * L_11 = V_2;
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.BinaryWriter::Close() */, L_11);
		// data.Dispose();
		NativeArray_1_Dispose_m37D0222FA272EA68DD869BCF05F8A671023D18A3((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)(&V_0), /*hidden argument*/NativeArray_1_Dispose_m37D0222FA272EA68DD869BCF05F8A671023D18A3_RuntimeMethod_var);
		// worldMap.Dispose();
		ARWorldMap_Dispose_m39FFD69207F7BB7DA2411A8B744A7C71CFDA03D0((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)(&___worldMap0), /*hidden argument*/NULL);
		// Log(string.Format("ARWorldMap written to {0}", path));
		String_t* L_12 = ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0(__this, /*hidden argument*/NULL);
		String_t* L_13 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralD349ACEDC81F0BAA6E84FE153A29B2D8B7D3C58A, L_12, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return Path.Combine(Application.persistentDataPath, "my_session.worldmap");
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_0, _stringLiteralA48FD607D737DC5B90DDCDDECCBB0F14FB795E32, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::get_supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARWorldMapControllerFixed_get_supported_m17D706A59C240718377E7ED046EDCBFC4DBFBA5A (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_get_supported_m17D706A59C240718377E7ED046EDCBFC4DBFBA5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return m_ARSession.subsystem is ARKitSessionSubsystem && ARKitSessionSubsystem.worldMapSupported;
		ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * L_0 = __this->get_m_ARSession_4();
		NullCheck(L_0);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_1 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_inline(L_0, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		if (!((ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A *)IsInstSealed((RuntimeObject*)L_1, ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var);
		bool L_2 = ARKitSessionSubsystem_get_worldMapSupported_mF4E670B5DD91EA33F33C816EBFD0483490015C02(/*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_Awake_m16A2BA109B373F9D689583ABC2BE8758DC4036D4 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_Awake_m16A2BA109B373F9D689583ABC2BE8758DC4036D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_LogMessages = new List<string>();
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_0, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		__this->set_m_LogMessages_10(L_0);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::Log(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, String_t* ___logMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_LogMessages.Add(logMessage);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_0 = __this->get_m_LogMessages_10();
		String_t* L_1 = ___logMessage0;
		NullCheck(L_0);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_0, L_1, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::SetActive(UnityEngine.UI.Button,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_SetActive_m1F857EF0E27370C4298E421227E05D51F361050F (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button0, bool ___active1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_SetActive_m1F857EF0E27370C4298E421227E05D51F361050F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (button != null)
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_0 = ___button0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// button.gameObject.SetActive(active);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = ___button0;
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		bool L_5 = ___active1;
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::SetActive(UnityEngine.UI.Text,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_SetActive_m1026EB5D2648211B2AB91AC98AD99121B24E8F31 (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text0, bool ___active1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_SetActive_m1026EB5D2648211B2AB91AC98AD99121B24E8F31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text != null)
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// text.gameObject.SetActive(active);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = ___text0;
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		bool L_5 = ___active1;
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::SetText(UnityEngine.UI.Text,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_SetText_mE214A6F653F23B661DE747CD051F37ABB5690C49 (Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___text0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_SetText_mE214A6F653F23B661DE747CD051F37ABB5690C49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (text != null)
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// text.text = value;
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = ___text0;
		String_t* L_4 = ___value1;
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed_Update_m94B29DDDE3F3887C85B200B5F671042F106B7C8F (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ARWorldMapControllerFixed_Update_m94B29DDDE3F3887C85B200B5F671042F106B7C8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// if (supported)
		bool L_0 = ARWorldMapControllerFixed_get_supported_m17D706A59C240718377E7ED046EDCBFC4DBFBA5A(__this, /*hidden argument*/NULL);
		V_3 = L_0;
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// SetActive(errorText, false);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = ARWorldMapControllerFixed_get_errorText_m0020CAAA41958EBABC7880B3C6343BD306C35EB3(__this, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetActive_m1026EB5D2648211B2AB91AC98AD99121B24E8F31(L_2, (bool)0, /*hidden argument*/NULL);
		// SetActive(saveButton, true);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_3 = ARWorldMapControllerFixed_get_saveButton_m978B40FE8CF6421861A41D620608124BC98C6211(__this, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetActive_m1F857EF0E27370C4298E421227E05D51F361050F(L_3, (bool)1, /*hidden argument*/NULL);
		// SetActive(loadButton, true);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_4 = ARWorldMapControllerFixed_get_loadButton_mA3799071651A2AADD54ECAA136E2DEE387796F17(__this, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetActive_m1F857EF0E27370C4298E421227E05D51F361050F(L_4, (bool)1, /*hidden argument*/NULL);
		// SetActive(mappingStatusText, true);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_5 = ARWorldMapControllerFixed_get_mappingStatusText_m8BCB24005D0BDF361E284F58E3D0DE28C2A50C21(__this, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetActive_m1026EB5D2648211B2AB91AC98AD99121B24E8F31(L_5, (bool)1, /*hidden argument*/NULL);
		goto IL_0079;
	}

IL_0043:
	{
		// SetActive(errorText, true);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_6 = ARWorldMapControllerFixed_get_errorText_m0020CAAA41958EBABC7880B3C6343BD306C35EB3(__this, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetActive_m1026EB5D2648211B2AB91AC98AD99121B24E8F31(L_6, (bool)1, /*hidden argument*/NULL);
		// SetActive(saveButton, false);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_7 = ARWorldMapControllerFixed_get_saveButton_m978B40FE8CF6421861A41D620608124BC98C6211(__this, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetActive_m1F857EF0E27370C4298E421227E05D51F361050F(L_7, (bool)0, /*hidden argument*/NULL);
		// SetActive(loadButton, false);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_8 = ARWorldMapControllerFixed_get_loadButton_mA3799071651A2AADD54ECAA136E2DEE387796F17(__this, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetActive_m1F857EF0E27370C4298E421227E05D51F361050F(L_8, (bool)0, /*hidden argument*/NULL);
		// SetActive(mappingStatusText, false);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = ARWorldMapControllerFixed_get_mappingStatusText_m8BCB24005D0BDF361E284F58E3D0DE28C2A50C21(__this, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetActive_m1026EB5D2648211B2AB91AC98AD99121B24E8F31(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// var sessionSubsystem = (ARKitSessionSubsystem)m_ARSession.subsystem;
		ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * L_10 = __this->get_m_ARSession_4();
		NullCheck(L_10);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_11 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_inline(L_10, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		V_0 = ((ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A *)CastclassSealed((RuntimeObject*)L_11, ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var));
		// if (sessionSubsystem == null)
		ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * L_12 = V_0;
		V_4 = (bool)((((RuntimeObject*)(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		// return;
		goto IL_0124;
	}

IL_0099:
	{
		// var numLogsToShow = 20;
		V_1 = ((int32_t)20);
		// string msg = "";
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = Mathf.Max(0, m_LogMessages.Count - numLogsToShow); i < m_LogMessages.Count; ++i)
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_14 = __this->get_m_LogMessages_10();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_14, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		int32_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_17 = Mathf_Max_mBDE4C6F1883EE3215CD7AE62550B2AC90592BC3F(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), /*hidden argument*/NULL);
		V_5 = L_17;
		goto IL_00e1;
	}

IL_00b9:
	{
		// msg += m_LogMessages[i];
		String_t* L_18 = V_2;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_19 = __this->get_m_LogMessages_10();
		int32_t L_20 = V_5;
		NullCheck(L_19);
		String_t* L_21 = List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_inline(L_19, L_20, /*hidden argument*/List_1_get_Item_mB739B0066E5F7EBDBA9978F24A73D26D4FAE5BED_RuntimeMethod_var);
		String_t* L_22 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_18, L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		// msg += "\n";
		String_t* L_23 = V_2;
		String_t* L_24 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_23, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
		V_2 = L_24;
		// for (int i = Mathf.Max(0, m_LogMessages.Count - numLogsToShow); i < m_LogMessages.Count; ++i)
		int32_t L_25 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00e1:
	{
		// for (int i = Mathf.Max(0, m_LogMessages.Count - numLogsToShow); i < m_LogMessages.Count; ++i)
		int32_t L_26 = V_5;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_27 = __this->get_m_LogMessages_10();
		NullCheck(L_27);
		int32_t L_28 = List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_inline(L_27, /*hidden argument*/List_1_get_Count_m4151A68BD4CB1D737213E7595F574987F8C812B4_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_26) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_6;
		if (L_29)
		{
			goto IL_00b9;
		}
	}
	{
		// SetText(logText, msg);
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_30 = ARWorldMapControllerFixed_get_logText_m4147258C72B88B27ECCC18BF1B1D06E25E24324D(__this, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		ARWorldMapControllerFixed_SetText_mE214A6F653F23B661DE747CD051F37ABB5690C49(L_30, L_31, /*hidden argument*/NULL);
		// SetText(mappingStatusText, string.Format("Mapping Status: {0}", sessionSubsystem.worldMappingStatus));
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_32 = ARWorldMapControllerFixed_get_mappingStatusText_m8BCB24005D0BDF361E284F58E3D0DE28C2A50C21(__this, /*hidden argument*/NULL);
		ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = ARKitSessionSubsystem_get_worldMappingStatus_mCCC90F7BE712B10BCD985D7E464AA5755CE3F045(L_33, /*hidden argument*/NULL);
		int32_t L_35 = L_34;
		RuntimeObject * L_36 = Box(ARWorldMappingStatus_t6AF28485D8EA3B112E93CA7EF61FD5E3E6940D15_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralEAA2736A4E1C0BB637296B73D5B3EB28D2D53D1E, L_36, /*hidden argument*/NULL);
		ARWorldMapControllerFixed_SetText_mE214A6F653F23B661DE747CD051F37ABB5690C49(L_32, L_37, /*hidden argument*/NULL);
	}

IL_0124:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARWorldMapControllerFixed__ctor_mDBC2F2548D9AD223AF96DDA61FF5C8CCC54D8FD1 (ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ed__28__ctor_m55B2710B4DC38B66B0E76F1986C8E53999678276 (U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ed__28_System_IDisposable_Dispose_m25A93513A66ACE3AC454FFBEF0BD9672D4EEE941 (U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadU3Ed__28_MoveNext_mAB07101A1A7A3DB1E6699ED449D6791FFF21A2E1 (U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadU3Ed__28_MoveNext_mAB07101A1A7A3DB1E6699ED449D6791FFF21A2E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0150;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var sessionSubsystem = (ARKitSessionSubsystem)m_ARSession.subsystem;
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * L_4 = L_3->get_m_ARSession_4();
		NullCheck(L_4);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_5 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_inline(L_4, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		__this->set_U3CsessionSubsystemU3E5__1_3(((ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A *)CastclassSealed((RuntimeObject*)L_5, ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var)));
		// if (sessionSubsystem == null)
		ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * L_6 = __this->get_U3CsessionSubsystemU3E5__1_3();
		V_1 = (bool)((((RuntimeObject*)(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// Log("No session subsystem available. Could not load.");
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(L_8, _stringLiteral4431326F63207A4B861AE1B24C0DAE193FC85219, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_005f:
	{
		// var file = File.Open(path, FileMode.Open);
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		String_t* L_10 = ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0(L_9, /*hidden argument*/NULL);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_11 = File_Open_mDA5EB4A312EAEBF8543B13C572271FB5F673A501(L_10, 3, /*hidden argument*/NULL);
		__this->set_U3CfileU3E5__2_4(L_11);
		// if (file == null)
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_12 = __this->get_U3CfileU3E5__2_4();
		V_2 = (bool)((((RuntimeObject*)(FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 *)L_12) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_00a7;
		}
	}
	{
		// Log(string.Format("File {0} does not exist.", path));
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_14 = __this->get_U3CU3E4__this_2();
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		String_t* L_16 = ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0(L_15, /*hidden argument*/NULL);
		String_t* L_17 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral73AECFC551F1F83A8CC4BE9070A2D6D58CB45A05, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(L_14, L_17, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_00a7:
	{
		// Log(string.Format("Reading {0}...", path));
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_18 = __this->get_U3CU3E4__this_2();
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_19 = __this->get_U3CU3E4__this_2();
		NullCheck(L_19);
		String_t* L_20 = ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0(L_19, /*hidden argument*/NULL);
		String_t* L_21 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralF59C04DA2E06A585EE4AB3ED1970CC3D26F1BBCA, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(L_18, L_21, /*hidden argument*/NULL);
		// int bytesPerFrame = 1024 * 10;
		__this->set_U3CbytesPerFrameU3E5__3_5(((int32_t)10240));
		// var bytesRemaining = file.Length;
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_22 = __this->get_U3CfileU3E5__2_4();
		NullCheck(L_22);
		int64_t L_23 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_22);
		__this->set_U3CbytesRemainingU3E5__4_6(L_23);
		// var binaryReader = new BinaryReader(file);
		FileStream_tA770BF9AF0906644D43C81B962C7DBC3BC79A418 * L_24 = __this->get_U3CfileU3E5__2_4();
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_25 = (BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 *)il2cpp_codegen_object_new(BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969_il2cpp_TypeInfo_var);
		BinaryReader__ctor_mD134893EA93809AFA29B025FF7439B82C35FE55F(L_25, L_24, /*hidden argument*/NULL);
		__this->set_U3CbinaryReaderU3E5__5_7(L_25);
		// var allBytes = new List<byte>();
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_26 = (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 *)il2cpp_codegen_object_new(List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32_il2cpp_TypeInfo_var);
		List_1__ctor_mBD254818498F17CA2A3CDAAEB2E54C528750C667(L_26, /*hidden argument*/List_1__ctor_mBD254818498F17CA2A3CDAAEB2E54C528750C667_RuntimeMethod_var);
		__this->set_U3CallBytesU3E5__6_8(L_26);
		goto IL_015f;
	}

IL_0102:
	{
		// var bytes = binaryReader.ReadBytes(bytesPerFrame);
		BinaryReader_t7467E057B24C42E81B1C3E5C60288BB4B1718969 * L_27 = __this->get_U3CbinaryReaderU3E5__5_7();
		int32_t L_28 = __this->get_U3CbytesPerFrameU3E5__3_5();
		NullCheck(L_27);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_29 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_27, L_28);
		__this->set_U3CbytesU3E5__9_11(L_29);
		// allBytes.AddRange(bytes);
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_30 = __this->get_U3CallBytesU3E5__6_8();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_31 = __this->get_U3CbytesU3E5__9_11();
		NullCheck(L_30);
		List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B(L_30, (RuntimeObject*)(RuntimeObject*)L_31, /*hidden argument*/List_1_AddRange_mFED3931B26E2F3EA44F00DDFDB00A723E877130B_RuntimeMethod_var);
		// bytesRemaining -= bytesPerFrame;
		int64_t L_32 = __this->get_U3CbytesRemainingU3E5__4_6();
		int32_t L_33 = __this->get_U3CbytesPerFrameU3E5__3_5();
		__this->set_U3CbytesRemainingU3E5__4_6(((int64_t)il2cpp_codegen_subtract((int64_t)L_32, (int64_t)(((int64_t)((int64_t)L_33))))));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0150:
	{
		__this->set_U3CU3E1__state_0((-1));
		__this->set_U3CbytesU3E5__9_11((ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)NULL);
	}

IL_015f:
	{
		// while (bytesRemaining > 0)
		int64_t L_34 = __this->get_U3CbytesRemainingU3E5__4_6();
		V_3 = (bool)((((int64_t)L_34) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_35 = V_3;
		if (L_35)
		{
			goto IL_0102;
		}
	}
	{
		// var data = new NativeArray<byte>(allBytes.Count, Allocator.Temp);
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_36 = __this->get_U3CallBytesU3E5__6_8();
		NullCheck(L_36);
		int32_t L_37 = List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_inline(L_36, /*hidden argument*/List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_RuntimeMethod_var);
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_38;
		memset((&L_38), 0, sizeof(L_38));
		NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE((&L_38), L_37, 2, 1, /*hidden argument*/NativeArray_1__ctor_m2B09F633FCB77B7457A5DA9CFC1A9B34156A74CE_RuntimeMethod_var);
		__this->set_U3CdataU3E5__7_9(L_38);
		// data.CopyFrom(allBytes.ToArray());
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * L_39 = __this->get_address_of_U3CdataU3E5__7_9();
		List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * L_40 = __this->get_U3CallBytesU3E5__6_8();
		NullCheck(L_40);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_41 = List_1_ToArray_mEDE80A989792CACFBF731DEBECF8D996ED150AF9(L_40, /*hidden argument*/List_1_ToArray_mEDE80A989792CACFBF731DEBECF8D996ED150AF9_RuntimeMethod_var);
		NativeArray_1_CopyFrom_m8A54AC132F80260033CC05E2A3A22CCC4248355B((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)L_39, L_41, /*hidden argument*/NativeArray_1_CopyFrom_m8A54AC132F80260033CC05E2A3A22CCC4248355B_RuntimeMethod_var);
		// Log(string.Format("Deserializing to ARWorldMap...", path));
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_42 = __this->get_U3CU3E4__this_2();
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_43 = __this->get_U3CU3E4__this_2();
		NullCheck(L_43);
		String_t* L_44 = ARWorldMapControllerFixed_get_path_mDDF4B37C9D3C9C0F685275322444E174CB2509A0(L_43, /*hidden argument*/NULL);
		String_t* L_45 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral1095D40275EC980E0471F57629585BDCD27E04A4, L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(L_42, L_45, /*hidden argument*/NULL);
		// if (ARWorldMap.TryDeserialize(data, out worldMap))
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405  L_46 = __this->get_U3CdataU3E5__7_9();
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * L_47 = __this->get_address_of_U3CworldMapU3E5__8_10();
		bool L_48 = ARWorldMap_TryDeserialize_m3AEFF37DAED1C28DA714ED37CD54DEE43771BCD4(L_46, (ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)L_47, /*hidden argument*/NULL);
		V_4 = L_48;
		bool L_49 = V_4;
		if (!L_49)
		{
			goto IL_01e0;
		}
	}
	{
		// data.Dispose();
		NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 * L_50 = __this->get_address_of_U3CdataU3E5__7_9();
		NativeArray_1_Dispose_m37D0222FA272EA68DD869BCF05F8A671023D18A3((NativeArray_1_tB942A78CFAC276F95E8B08EBB94DF670FFAA0405 *)L_50, /*hidden argument*/NativeArray_1_Dispose_m37D0222FA272EA68DD869BCF05F8A671023D18A3_RuntimeMethod_var);
	}

IL_01e0:
	{
		// if (worldMap.valid)
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE * L_51 = __this->get_address_of_U3CworldMapU3E5__8_10();
		bool L_52 = ARWorldMap_get_valid_m2778D108B711DFB048E4AF1042800968BC4F63FC((ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE *)L_51, /*hidden argument*/NULL);
		V_5 = L_52;
		bool L_53 = V_5;
		if (!L_53)
		{
			goto IL_0206;
		}
	}
	{
		// Log("Deserialized successfully.");
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_54 = __this->get_U3CU3E4__this_2();
		NullCheck(L_54);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(L_54, _stringLiteral0AA968B220E08F454FB7E4E810620633AF1CA491, /*hidden argument*/NULL);
		goto IL_0214;
	}

IL_0206:
	{
		// Debug.LogError("Data is not a valid ARWorldMap.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral8BD54FF35CED5F6541CA2ECBB38503216E3A1B4C, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_0214:
	{
		// Log("Apply ARWorldMap to current session.");
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_55 = __this->get_U3CU3E4__this_2();
		NullCheck(L_55);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(L_55, _stringLiteralC477BDAD5E5100A60585992AFC49EE74BFB433CB, /*hidden argument*/NULL);
		// sessionSubsystem.ApplyWorldMap(worldMap);
		ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * L_56 = __this->get_U3CsessionSubsystemU3E5__1_3();
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_57 = __this->get_U3CworldMapU3E5__8_10();
		NullCheck(L_56);
		ARKitSessionSubsystem_ApplyWorldMap_m997E26F557C3D9BAFF871419C88F9E505B4607C9(L_56, L_57, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7B020227635AB8D11480E1BF2FF9F1A4632C874D (U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadU3Ed__28_System_Collections_IEnumerator_Reset_m314EB004A17DD71EE344EE3097B95903E582B990 (U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadU3Ed__28_System_Collections_IEnumerator_Reset_m314EB004A17DD71EE344EE3097B95903E582B990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CLoadU3Ed__28_System_Collections_IEnumerator_Reset_m314EB004A17DD71EE344EE3097B95903E582B990_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Load>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadU3Ed__28_System_Collections_IEnumerator_get_Current_m44F8F84D5DFA3A658523EB4606CA027B82FB0EFF (U3CLoadU3Ed__28_t6AA682F1865E79E7ABF1AF8E3B63B365735AC6FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__27__ctor_m4B85C6D969FCE6F4604AA2575483EBB81BAF57C4 (U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__27_System_IDisposable_Dispose_m045D111C7D6F854D6076ADBB878CBF0B135A3982 (U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSaveU3Ed__27_MoveNext_m4E289761FFB185C3936B6C97654F01AEA70467FF (U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSaveU3Ed__27_MoveNext_m4E289761FFB185C3936B6C97654F01AEA70467FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_007f;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var sessionSubsystem = (ARKitSessionSubsystem)m_ARSession.subsystem;
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		ARSession_tFD6F1BD76D4C003B8141D9B6255B904D8C5036AB * L_4 = L_3->get_m_ARSession_4();
		NullCheck(L_4);
		XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * L_5 = SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_inline(L_4, /*hidden argument*/SubsystemLifecycleManager_2_get_subsystem_mE467BEAFBC8308112E4BF5390B38F6A188CBC00B_RuntimeMethod_var);
		__this->set_U3CsessionSubsystemU3E5__1_3(((ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A *)CastclassSealed((RuntimeObject*)L_5, ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A_il2cpp_TypeInfo_var)));
		// if (sessionSubsystem == null)
		ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * L_6 = __this->get_U3CsessionSubsystemU3E5__1_3();
		V_1 = (bool)((((RuntimeObject*)(ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A *)L_6) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		// Log("No session subsystem available. Could not save.");
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(L_8, _stringLiteral3118EA789792FD068335F186307F1A3B41B5E198, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_005c:
	{
		// var request = sessionSubsystem.GetARWorldMapAsync();
		ARKitSessionSubsystem_tD9267F6454E65E2C795C8CAF65C9CCB0BBE1636A * L_9 = __this->get_U3CsessionSubsystemU3E5__1_3();
		NullCheck(L_9);
		ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167  L_10 = ARKitSessionSubsystem_GetARWorldMapAsync_m767616E7906AC991039AE185E3ADD5ACB3AE1B10(L_9, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_4(L_10);
		goto IL_0086;
	}

IL_006f:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_007f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0086:
	{
		// while (!request.status.IsDone())
		ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * L_11 = __this->get_address_of_U3CrequestU3E5__2_4();
		int32_t L_12 = ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867((ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)L_11, /*hidden argument*/NULL);
		bool L_13 = ARWorldMapRequestStatusExtensions_IsDone_mDFB38617F9C19A5E100040093374E5F04F465334(L_12, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_006f;
		}
	}
	{
		// if (request.status.IsError())
		ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * L_15 = __this->get_address_of_U3CrequestU3E5__2_4();
		int32_t L_16 = ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867((ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)L_15, /*hidden argument*/NULL);
		bool L_17 = ARWorldMapRequestStatusExtensions_IsError_m2CDC805EB13EBC5106106B63CF3E7FA2761416D8(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_00da;
		}
	}
	{
		// Log(string.Format("Session serialization failed with status {0}", request.status));
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_19 = __this->get_U3CU3E4__this_2();
		ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * L_20 = __this->get_address_of_U3CrequestU3E5__2_4();
		int32_t L_21 = ARWorldMapRequest_get_status_mEF94818913FCF6416CF29C6BFBCC84EEF39C3867((ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)L_20, /*hidden argument*/NULL);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(ARWorldMapRequestStatus_tF71BE763C5F9644F3D7377ACE110F7FFBBE3D5DC_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral9014478446952253FE48E33725973BCE036D85DF, L_23, /*hidden argument*/NULL);
		NullCheck(L_19);
		ARWorldMapControllerFixed_Log_m048F32814AE6F5769022646323DF99440BA3C71B(L_19, L_24, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}

IL_00da:
	{
		// var worldMap = request.GetWorldMap();
		ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * L_25 = __this->get_address_of_U3CrequestU3E5__2_4();
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_26 = ARWorldMapRequest_GetWorldMap_m2113D2DECC0E8F9CB67D7A3EC480CBD3F2AA5A4E((ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)L_25, /*hidden argument*/NULL);
		__this->set_U3CworldMapU3E5__3_5(L_26);
		// request.Dispose();
		ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 * L_27 = __this->get_address_of_U3CrequestU3E5__2_4();
		ARWorldMapRequest_Dispose_m6B143E570818A0D47A9C4D9EE2ADFE0B34FD478A((ARWorldMapRequest_t4BCB51645BFFB333AC6DDEE3D8AE757BE3B8C167 *)L_27, /*hidden argument*/NULL);
		// SaveAndDisposeWorldMap(worldMap);
		ARWorldMapControllerFixed_t2DB2C3C1E25A2B47762B9629F93151060E4F273D * L_28 = __this->get_U3CU3E4__this_2();
		ARWorldMap_t8BAE5D083A023D7DD23C29E4082B6BBD329010DE  L_29 = __this->get_U3CworldMapU3E5__3_5();
		NullCheck(L_28);
		ARWorldMapControllerFixed_SaveAndDisposeWorldMap_mA9EEB4213B895AF10836F3F2EA4D7D93FB5C9017(L_28, L_29, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSaveU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m755604437CA5681496D635462E4BFCE69F1B395D (U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSaveU3Ed__27_System_Collections_IEnumerator_Reset_mDD6766E1FF93665B876725FAC37CDF2C123E0F81 (U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSaveU3Ed__27_System_Collections_IEnumerator_Reset_mDD6766E1FF93665B876725FAC37CDF2C123E0F81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSaveU3Ed__27_System_Collections_IEnumerator_Reset_mDD6766E1FF93665B876725FAC37CDF2C123E0F81_RuntimeMethod_var);
	}
}
// System.Object UnityEngine.XR.ARFoundation.Samples.ARWorldMapControllerFixed_<Save>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSaveU3Ed__27_System_Collections_IEnumerator_get_Current_mCE0D46BBBFC5D523DC5C50D46F72DCB390BE478D (U3CSaveU3Ed__27_t5BC02F9E9E4BFFCD9A43F8C3962E74486829515D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_Awake_m0AEAE049A67C6BB8E8D45A331CD6C339C3C45007 (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_Awake_m0AEAE049A67C6BB8E8D45A331CD6C339C3C45007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_BreakupMeshAction = new Action<MeshFilter>(BreakupMesh);
		Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * L_0 = (Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 *)il2cpp_codegen_object_new(Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2_il2cpp_TypeInfo_var);
		Action_1__ctor_m719E28DBB4CF4A7D787F54E1D629D7B5BEF73FC6(L_0, __this, (intptr_t)((intptr_t)MeshClassificationFrackingFixed_BreakupMesh_m77B1B4502E8A7486425170D57098B0C2FE04B7F2_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m719E28DBB4CF4A7D787F54E1D629D7B5BEF73FC6_RuntimeMethod_var);
		__this->set_m_BreakupMeshAction_15(L_0);
		// m_UpdateMeshAction = new Action<MeshFilter>(UpdateMesh);
		Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * L_1 = (Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 *)il2cpp_codegen_object_new(Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2_il2cpp_TypeInfo_var);
		Action_1__ctor_m719E28DBB4CF4A7D787F54E1D629D7B5BEF73FC6(L_1, __this, (intptr_t)((intptr_t)MeshClassificationFrackingFixed_UpdateMesh_m1B6671F6A68C9EDCB4BB11BD1D9660CEFE3C978A_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m719E28DBB4CF4A7D787F54E1D629D7B5BEF73FC6_RuntimeMethod_var);
		__this->set_m_UpdateMeshAction_16(L_1);
		// m_RemoveMeshAction = new Action<MeshFilter>(RemoveMesh);
		Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * L_2 = (Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 *)il2cpp_codegen_object_new(Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2_il2cpp_TypeInfo_var);
		Action_1__ctor_m719E28DBB4CF4A7D787F54E1D629D7B5BEF73FC6(L_2, __this, (intptr_t)((intptr_t)MeshClassificationFrackingFixed_RemoveMesh_mC3014C8DE9CE6D7A5E1F0F17FDB6337BB92AD8ED_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m719E28DBB4CF4A7D787F54E1D629D7B5BEF73FC6_RuntimeMethod_var);
		__this->set_m_RemoveMeshAction_17(L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_OnEnable_m594E82F6DB009D3555FA2AFB432D05498D2B5E1D (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_OnEnable_m594E82F6DB009D3555FA2AFB432D05498D2B5E1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(m_MeshManager != null, "mesh manager cannot be null");
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_0 = __this->get_m_MeshManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC(L_1, _stringLiteralB890F9A8B999291533DACA9981403F3448CD4F25, /*hidden argument*/NULL);
		// m_MeshManager.meshesChanged += OnMeshesChanged;
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_2 = __this->get_m_MeshManager_5();
		Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * L_3 = (Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 *)il2cpp_codegen_object_new(Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575_il2cpp_TypeInfo_var);
		Action_1__ctor_m8A482BED6DE05CE1C4E3700A9CBC7EDC4EA48C66(L_3, __this, (intptr_t)((intptr_t)MeshClassificationFrackingFixed_OnMeshesChanged_m165FB95E9E3AB413F89AC4E15A560448E3E5D6A4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8A482BED6DE05CE1C4E3700A9CBC7EDC4EA48C66_RuntimeMethod_var);
		NullCheck(L_2);
		ARMeshManager_add_meshesChanged_m619F0D8182FB1C26F1E4A0A79B40C4612C03D316(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_OnDisable_m86DB6C4C007304141BCC51EF8B0B80AEA5C95128 (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_OnDisable_m86DB6C4C007304141BCC51EF8B0B80AEA5C95128_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Assert(m_MeshManager != null, "mesh manager cannot be null");
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_0 = __this->get_m_MeshManager_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC(L_1, _stringLiteralB890F9A8B999291533DACA9981403F3448CD4F25, /*hidden argument*/NULL);
		// m_MeshManager.meshesChanged -= OnMeshesChanged;
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_2 = __this->get_m_MeshManager_5();
		Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 * L_3 = (Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575 *)il2cpp_codegen_object_new(Action_1_tBDA72DC0B28C1EED153F36140AF7965BEEA0D575_il2cpp_TypeInfo_var);
		Action_1__ctor_m8A482BED6DE05CE1C4E3700A9CBC7EDC4EA48C66(L_3, __this, (intptr_t)((intptr_t)MeshClassificationFrackingFixed_OnMeshesChanged_m165FB95E9E3AB413F89AC4E15A560448E3E5D6A4_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m8A482BED6DE05CE1C4E3700A9CBC7EDC4EA48C66_RuntimeMethod_var);
		NullCheck(L_2);
		ARMeshManager_remove_meshesChanged_m9FB3C35538794F5097B2446FD4474F302214B81A(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::OnMeshesChanged(UnityEngine.XR.ARFoundation.ARMeshesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_OnMeshesChanged_m165FB95E9E3AB413F89AC4E15A560448E3E5D6A4 (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D  ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_OnMeshesChanged_m165FB95E9E3AB413F89AC4E15A560448E3E5D6A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (args.added != null)
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_0 = ARMeshesChangedEventArgs_get_added_m4CC4E3C4DA0ED7058CC1B5B5B6334AC14DEDBD76_inline((ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D *)(&___args0), /*hidden argument*/NULL);
		V_0 = (bool)((!(((RuntimeObject*)(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// args.added.ForEach(m_BreakupMeshAction);
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_2 = ARMeshesChangedEventArgs_get_added_m4CC4E3C4DA0ED7058CC1B5B5B6334AC14DEDBD76_inline((ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D *)(&___args0), /*hidden argument*/NULL);
		Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * L_3 = __this->get_m_BreakupMeshAction_15();
		NullCheck(L_2);
		List_1_ForEach_m2C0E6B16715837D72E2227FB6FB1024990959B8A(L_2, L_3, /*hidden argument*/List_1_ForEach_m2C0E6B16715837D72E2227FB6FB1024990959B8A_RuntimeMethod_var);
	}

IL_0024:
	{
		// if (args.updated != null)
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_4 = ARMeshesChangedEventArgs_get_updated_mABBA44F047942D7526F0A1A2FFF638EBF8B750B9_inline((ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D *)(&___args0), /*hidden argument*/NULL);
		V_1 = (bool)((!(((RuntimeObject*)(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D *)L_4) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// args.updated.ForEach(m_UpdateMeshAction);
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_6 = ARMeshesChangedEventArgs_get_updated_mABBA44F047942D7526F0A1A2FFF638EBF8B750B9_inline((ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D *)(&___args0), /*hidden argument*/NULL);
		Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * L_7 = __this->get_m_UpdateMeshAction_16();
		NullCheck(L_6);
		List_1_ForEach_m2C0E6B16715837D72E2227FB6FB1024990959B8A(L_6, L_7, /*hidden argument*/List_1_ForEach_m2C0E6B16715837D72E2227FB6FB1024990959B8A_RuntimeMethod_var);
	}

IL_0047:
	{
		// if (args.removed != null)
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_8 = ARMeshesChangedEventArgs_get_removed_m08B60A8773789CF1CF440859D3860B510A9A96FD_inline((ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D *)(&___args0), /*hidden argument*/NULL);
		V_2 = (bool)((!(((RuntimeObject*)(List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D *)L_8) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		// args.removed.ForEach(m_RemoveMeshAction);
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_10 = ARMeshesChangedEventArgs_get_removed_m08B60A8773789CF1CF440859D3860B510A9A96FD_inline((ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D *)(&___args0), /*hidden argument*/NULL);
		Action_1_tF3D4AD929EA516B67DBD9EE971D18A73C8C82EC2 * L_11 = __this->get_m_RemoveMeshAction_17();
		NullCheck(L_10);
		List_1_ForEach_m2C0E6B16715837D72E2227FB6FB1024990959B8A(L_10, L_11, /*hidden argument*/List_1_ForEach_m2C0E6B16715837D72E2227FB6FB1024990959B8A_RuntimeMethod_var);
	}

IL_006a:
	{
		// }
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::ExtractTrackableId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  MeshClassificationFrackingFixed_ExtractTrackableId_m001BD57DF8477600AB976E9CD92A770CBAFA1A20 (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, String_t* ___meshFilterName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_ExtractTrackableId_m001BD57DF8477600AB976E9CD92A770CBAFA1A20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string[] nameSplit = meshFilterName.Split(' ');
		String_t* L_0 = ___meshFilterName0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// return new TrackableId(nameSplit[1]);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 1;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_7;
		memset((&L_7), 0, sizeof(L_7));
		TrackableId__ctor_m9DD30A8FE5DB5798D50C6F121E8FFD324F4DE4D6((&L_7), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_8 = V_1;
		return L_8;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::ExtractClassifiedMesh(UnityEngine.Mesh,Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARMeshClassification>,UnityEngine.XR.ARKit.ARMeshClassification,UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_ExtractClassifiedMesh_m408B04E420E0794B224D5AA42641A903F18B119B (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___baseMesh0, NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  ___faceClassifications1, uint8_t ___selectedMeshClassification2, Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___classifiedMesh3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_ExtractClassifiedMesh_m408B04E420E0794B224D5AA42641A903F18B119B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// int classifiedFaceCount = 0;
		V_0 = 0;
		// for (int i = 0; i < faceClassifications.Length; ++i)
		V_1 = 0;
		goto IL_0022;
	}

IL_0007:
	{
		// if (faceClassifications[i] == selectedMeshClassification)
		int32_t L_0 = V_1;
		uint8_t L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, ((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&___faceClassifications1))->___m_Buffer_0, L_0);
		uint8_t L_2 = ___selectedMeshClassification2;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// ++classifiedFaceCount;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001d:
	{
		// for (int i = 0; i < faceClassifications.Length; ++i)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0022:
	{
		// for (int i = 0; i < faceClassifications.Length; ++i)
		int32_t L_6 = V_1;
		int32_t L_7 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&___faceClassifications1))->___m_Length_1);
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_3;
		if (L_8)
		{
			goto IL_0007;
		}
	}
	{
		// classifiedMesh.Clear();
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_9 = ___classifiedMesh3;
		NullCheck(L_9);
		Mesh_Clear_mB750E1DCAB658124AAD81A02B93DED7601047B60(L_9, /*hidden argument*/NULL);
		// if (classifiedFaceCount > 0)
		int32_t L_10 = V_0;
		V_4 = (bool)((((int32_t)L_10) > ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0146;
		}
	}
	{
		// baseMesh.GetTriangles(m_BaseTriangles, 0);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_12 = ___baseMesh0;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_13 = __this->get_m_BaseTriangles_18();
		NullCheck(L_12);
		Mesh_GetTriangles_mC16C6F2A2E7A58E8AC6D34E7899215626BCCC5B9(L_12, L_13, 0, /*hidden argument*/NULL);
		// Debug.Assert(m_BaseTriangles.Count == (faceClassifications.Length * 3),
		//             "unexpected mismatch between triangle count and face classification count");
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_14 = __this->get_m_BaseTriangles_18();
		NullCheck(L_14);
		int32_t L_15 = List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_inline(L_14, /*hidden argument*/List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_RuntimeMethod_var);
		int32_t L_16 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&___faceClassifications1))->___m_Length_1);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC((bool)((((int32_t)L_15) == ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)3))))? 1 : 0), _stringLiteralA55CB991C2B0E7CBD54518754B41176D5EC81907, /*hidden argument*/NULL);
		// m_ClassifiedTriangles.Clear();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_17 = __this->get_m_ClassifiedTriangles_19();
		NullCheck(L_17);
		List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6(L_17, /*hidden argument*/List_1_Clear_m33B9E3FC1A7C9DF40DF154F08DF7D71F69FDCBD6_RuntimeMethod_var);
		// m_ClassifiedTriangles.Capacity = classifiedFaceCount * 3;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_18 = __this->get_m_ClassifiedTriangles_19();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD(L_18, ((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)3)), /*hidden argument*/List_1_set_Capacity_m3FBA882CEEB035B43469A05A1E7866E9427623DD_RuntimeMethod_var);
		// for (int i = 0; i < faceClassifications.Length; ++i)
		V_5 = 0;
		goto IL_0106;
	}

IL_0095:
	{
		// if (faceClassifications[i] == selectedMeshClassification)
		int32_t L_20 = V_5;
		uint8_t L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(uint8_t, ((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&___faceClassifications1))->___m_Buffer_0, L_20);
		uint8_t L_22 = ___selectedMeshClassification2;
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00ff;
		}
	}
	{
		// int baseTriangleIndex = i * 3;
		int32_t L_24 = V_5;
		V_7 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)3));
		// m_ClassifiedTriangles.Add(m_BaseTriangles[baseTriangleIndex + 0]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_25 = __this->get_m_ClassifiedTriangles_19();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_26 = __this->get_m_BaseTriangles_18();
		int32_t L_27 = V_7;
		NullCheck(L_26);
		int32_t L_28 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_26, L_27, /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		NullCheck(L_25);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_25, L_28, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// m_ClassifiedTriangles.Add(m_BaseTriangles[baseTriangleIndex + 1]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_29 = __this->get_m_ClassifiedTriangles_19();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_30 = __this->get_m_BaseTriangles_18();
		int32_t L_31 = V_7;
		NullCheck(L_30);
		int32_t L_32 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_30, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		NullCheck(L_29);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_29, L_32, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
		// m_ClassifiedTriangles.Add(m_BaseTriangles[baseTriangleIndex + 2]);
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_33 = __this->get_m_ClassifiedTriangles_19();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_34 = __this->get_m_BaseTriangles_18();
		int32_t L_35 = V_7;
		NullCheck(L_34);
		int32_t L_36 = List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_inline(L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)2)), /*hidden argument*/List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_RuntimeMethod_var);
		NullCheck(L_33);
		List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771(L_33, L_36, /*hidden argument*/List_1_Add_m50C0D1F69B2EF31137658E2F052EBBAC7BF82771_RuntimeMethod_var);
	}

IL_00ff:
	{
		// for (int i = 0; i < faceClassifications.Length; ++i)
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0106:
	{
		// for (int i = 0; i < faceClassifications.Length; ++i)
		int32_t L_38 = V_5;
		int32_t L_39 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&___faceClassifications1))->___m_Length_1);
		V_8 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_8;
		if (L_40)
		{
			goto IL_0095;
		}
	}
	{
		// classifiedMesh.vertices = baseMesh.vertices;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_41 = ___classifiedMesh3;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_42 = ___baseMesh0;
		NullCheck(L_42);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_43 = Mesh_get_vertices_m7D07DC0F071C142B87F675B148FC0F7A243238B9(L_42, /*hidden argument*/NULL);
		NullCheck(L_41);
		Mesh_set_vertices_mC1406AE08BC3495F3B0E29B53BACC9FD7BA685C6(L_41, L_43, /*hidden argument*/NULL);
		// classifiedMesh.normals = baseMesh.normals;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_44 = ___classifiedMesh3;
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_45 = ___baseMesh0;
		NullCheck(L_45);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_46 = Mesh_get_normals_m3CE4668899836CBD17C3F85EB24261CBCEB3EABB(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		Mesh_set_normals_m4054D319A67DAAA25A794D67AD37278A84406589(L_44, L_46, /*hidden argument*/NULL);
		// classifiedMesh.SetTriangles(m_ClassifiedTriangles, 0);
		Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_47 = ___classifiedMesh3;
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_48 = __this->get_m_ClassifiedTriangles_19();
		NullCheck(L_47);
		Mesh_SetTriangles_m6A43D705DE751C622CCF88EC31C4EF1B53578BE5(L_47, L_48, 0, /*hidden argument*/NULL);
	}

IL_0146:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::BreakupMesh(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_BreakupMesh_m77B1B4502E8A7486425170D57098B0C2FE04B7F2 (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___meshFilter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_BreakupMesh_m77B1B4502E8A7486425170D57098B0C2FE04B7F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * V_0 = NULL;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_6 = NULL;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* V_7 = NULL;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * V_8 = NULL;
	bool V_9 = false;
	int32_t V_10 = 0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_11 = NULL;
	bool V_12 = false;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * V_13 = NULL;
	bool V_14 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	int32_t G_B9_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B8_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B10_2 = NULL;
	int32_t G_B12_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B12_1 = NULL;
	int32_t G_B11_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B11_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B13_2 = NULL;
	int32_t G_B15_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B15_1 = NULL;
	int32_t G_B14_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B14_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B18_1 = NULL;
	int32_t G_B17_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B17_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B19_2 = NULL;
	int32_t G_B21_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B21_1 = NULL;
	int32_t G_B20_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B20_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B22_2 = NULL;
	int32_t G_B24_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B24_1 = NULL;
	int32_t G_B23_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B23_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B25_2 = NULL;
	int32_t G_B27_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B27_1 = NULL;
	int32_t G_B26_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B26_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B28_2 = NULL;
	int32_t G_B30_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B30_1 = NULL;
	int32_t G_B29_0 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B29_1 = NULL;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* G_B31_2 = NULL;
	{
		// XRMeshSubsystem meshSubsystem = m_MeshManager.subsystem as XRMeshSubsystem;
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_0 = __this->get_m_MeshManager_5();
		NullCheck(L_0);
		RuntimeObject* L_1 = ARMeshManager_get_subsystem_m0D12029952F709BEB9632EF5571D56975C76852E_inline(L_0, /*hidden argument*/NULL);
		V_0 = ((XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)IsInstClass((RuntimeObject*)L_1, XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9_il2cpp_TypeInfo_var));
		// if (meshSubsystem == null)
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_2 = V_0;
		V_3 = (bool)((((RuntimeObject*)(XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		goto IL_020b;
	}

IL_0020:
	{
		// var meshId = ExtractTrackableId(meshFilter.name);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_4 = ___meshFilter0;
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = MeshClassificationFrackingFixed_ExtractTrackableId_m001BD57DF8477600AB976E9CD92A770CBAFA1A20(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var faceClassifications = meshSubsystem.GetFaceClassifications(meshId, Allocator.Persistent);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_7 = V_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_8 = V_1;
		NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  L_9 = ARKitMeshSubsystemExtensions_GetFaceClassifications_mC40B0B1A19CC0D5E1FF259784B11B517EEE6132B(L_7, L_8, 4, /*hidden argument*/NULL);
		V_2 = L_9;
		// if (!faceClassifications.IsCreated)
		bool L_10 = NativeArray_1_get_IsCreated_mB05644B4C3DC6509EBC733E98D3812F3C63E82FC((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&V_2), /*hidden argument*/NativeArray_1_get_IsCreated_mB05644B4C3DC6509EBC733E98D3812F3C63E82FC_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// return;
		goto IL_020b;
	}

IL_004c:
	{
		// using (faceClassifications)
		NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  L_12 = V_2;
		V_5 = L_12;
	}

IL_004f:
	try
	{ // begin try (depth: 1)
		{
			// if (faceClassifications.Length <= 0)
			int32_t L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&V_2))->___m_Length_1);
			V_9 = (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_14 = V_9;
			if (!L_14)
			{
				goto IL_0069;
			}
		}

IL_0063:
		{
			// return;
			IL2CPP_LEAVE(0x20B, FINALLY_01fc);
		}

IL_0069:
		{
			// var parent = meshFilter.transform.parent;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_15 = ___meshFilter0;
			NullCheck(L_15);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_15, /*hidden argument*/NULL);
			NullCheck(L_16);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_16, /*hidden argument*/NULL);
			V_6 = L_17;
			// MeshFilter[] meshFilters = new MeshFilter[k_NumClassifications];
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_18 = (MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820*)(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820*)SZArrayNew(MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820_il2cpp_TypeInfo_var, (uint32_t)8);
			V_7 = L_18;
			// meshFilters[(int)ARMeshClassification.None] = (m_NoneMeshPrefab == null) ? null : Instantiate(m_NoneMeshPrefab, parent);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_19 = V_7;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_20 = __this->get_m_NoneMeshPrefab_6();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_21 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_20, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B8_0 = 0;
			G_B8_1 = L_19;
			if (L_21)
			{
				G_B9_0 = 0;
				G_B9_1 = L_19;
				goto IL_009e;
			}
		}

IL_008f:
		{
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_22 = __this->get_m_NoneMeshPrefab_6();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_24 = Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91(L_22, L_23, /*hidden argument*/Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var);
			G_B10_0 = L_24;
			G_B10_1 = G_B8_0;
			G_B10_2 = G_B8_1;
			goto IL_009f;
		}

IL_009e:
		{
			G_B10_0 = ((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)(NULL));
			G_B10_1 = G_B9_0;
			G_B10_2 = G_B9_1;
		}

IL_009f:
		{
			NullCheck(G_B10_2);
			ArrayElementTypeCheck (G_B10_2, G_B10_0);
			(G_B10_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B10_1), (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)G_B10_0);
			// meshFilters[(int)ARMeshClassification.Wall] = (m_WallMeshPrefab == null) ? null : Instantiate(m_WallMeshPrefab, parent);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_25 = V_7;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_26 = __this->get_m_WallMeshPrefab_7();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_27 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_26, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B11_0 = 1;
			G_B11_1 = L_25;
			if (L_27)
			{
				G_B12_0 = 1;
				G_B12_1 = L_25;
				goto IL_00c0;
			}
		}

IL_00b1:
		{
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_28 = __this->get_m_WallMeshPrefab_7();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_30 = Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91(L_28, L_29, /*hidden argument*/Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var);
			G_B13_0 = L_30;
			G_B13_1 = G_B11_0;
			G_B13_2 = G_B11_1;
			goto IL_00c1;
		}

IL_00c0:
		{
			G_B13_0 = ((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)(NULL));
			G_B13_1 = G_B12_0;
			G_B13_2 = G_B12_1;
		}

IL_00c1:
		{
			NullCheck(G_B13_2);
			ArrayElementTypeCheck (G_B13_2, G_B13_0);
			(G_B13_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B13_1), (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)G_B13_0);
			// meshFilters[(int)ARMeshClassification.Floor] = (m_FloorMeshPrefab == null) ? null : Instantiate(m_FloorMeshPrefab, parent);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_31 = V_7;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_32 = __this->get_m_FloorMeshPrefab_8();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_33 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_32, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B14_0 = 2;
			G_B14_1 = L_31;
			if (L_33)
			{
				G_B15_0 = 2;
				G_B15_1 = L_31;
				goto IL_00e2;
			}
		}

IL_00d3:
		{
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_34 = __this->get_m_FloorMeshPrefab_8();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_36 = Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91(L_34, L_35, /*hidden argument*/Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var);
			G_B16_0 = L_36;
			G_B16_1 = G_B14_0;
			G_B16_2 = G_B14_1;
			goto IL_00e3;
		}

IL_00e2:
		{
			G_B16_0 = ((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)(NULL));
			G_B16_1 = G_B15_0;
			G_B16_2 = G_B15_1;
		}

IL_00e3:
		{
			NullCheck(G_B16_2);
			ArrayElementTypeCheck (G_B16_2, G_B16_0);
			(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)G_B16_0);
			// meshFilters[(int)ARMeshClassification.Ceiling] = (m_CeilingMeshPrefab == null) ? null : Instantiate(m_CeilingMeshPrefab, parent);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_37 = V_7;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_38 = __this->get_m_CeilingMeshPrefab_9();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_39 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_38, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B17_0 = 3;
			G_B17_1 = L_37;
			if (L_39)
			{
				G_B18_0 = 3;
				G_B18_1 = L_37;
				goto IL_0104;
			}
		}

IL_00f5:
		{
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_40 = __this->get_m_CeilingMeshPrefab_9();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_42 = Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91(L_40, L_41, /*hidden argument*/Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var);
			G_B19_0 = L_42;
			G_B19_1 = G_B17_0;
			G_B19_2 = G_B17_1;
			goto IL_0105;
		}

IL_0104:
		{
			G_B19_0 = ((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)(NULL));
			G_B19_1 = G_B18_0;
			G_B19_2 = G_B18_1;
		}

IL_0105:
		{
			NullCheck(G_B19_2);
			ArrayElementTypeCheck (G_B19_2, G_B19_0);
			(G_B19_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B19_1), (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)G_B19_0);
			// meshFilters[(int)ARMeshClassification.Table] = (m_TableMeshPrefab == null) ? null : Instantiate(m_TableMeshPrefab, parent);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_43 = V_7;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_44 = __this->get_m_TableMeshPrefab_10();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_45 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_44, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B20_0 = 4;
			G_B20_1 = L_43;
			if (L_45)
			{
				G_B21_0 = 4;
				G_B21_1 = L_43;
				goto IL_0126;
			}
		}

IL_0117:
		{
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_46 = __this->get_m_TableMeshPrefab_10();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_47 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_48 = Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91(L_46, L_47, /*hidden argument*/Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var);
			G_B22_0 = L_48;
			G_B22_1 = G_B20_0;
			G_B22_2 = G_B20_1;
			goto IL_0127;
		}

IL_0126:
		{
			G_B22_0 = ((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)(NULL));
			G_B22_1 = G_B21_0;
			G_B22_2 = G_B21_1;
		}

IL_0127:
		{
			NullCheck(G_B22_2);
			ArrayElementTypeCheck (G_B22_2, G_B22_0);
			(G_B22_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_1), (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)G_B22_0);
			// meshFilters[(int)ARMeshClassification.Seat] = (m_SeatMeshPrefab == null) ? null : Instantiate(m_SeatMeshPrefab, parent);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_49 = V_7;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_50 = __this->get_m_SeatMeshPrefab_11();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_51 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_50, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B23_0 = 5;
			G_B23_1 = L_49;
			if (L_51)
			{
				G_B24_0 = 5;
				G_B24_1 = L_49;
				goto IL_0148;
			}
		}

IL_0139:
		{
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_52 = __this->get_m_SeatMeshPrefab_11();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_54 = Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91(L_52, L_53, /*hidden argument*/Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var);
			G_B25_0 = L_54;
			G_B25_1 = G_B23_0;
			G_B25_2 = G_B23_1;
			goto IL_0149;
		}

IL_0148:
		{
			G_B25_0 = ((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)(NULL));
			G_B25_1 = G_B24_0;
			G_B25_2 = G_B24_1;
		}

IL_0149:
		{
			NullCheck(G_B25_2);
			ArrayElementTypeCheck (G_B25_2, G_B25_0);
			(G_B25_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B25_1), (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)G_B25_0);
			// meshFilters[(int)ARMeshClassification.Window] = (m_WindowMeshPrefab == null) ? null : Instantiate(m_WindowMeshPrefab, parent);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_55 = V_7;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_56 = __this->get_m_WindowMeshPrefab_12();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_57 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_56, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B26_0 = 6;
			G_B26_1 = L_55;
			if (L_57)
			{
				G_B27_0 = 6;
				G_B27_1 = L_55;
				goto IL_016a;
			}
		}

IL_015b:
		{
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_58 = __this->get_m_WindowMeshPrefab_12();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_59 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_60 = Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91(L_58, L_59, /*hidden argument*/Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var);
			G_B28_0 = L_60;
			G_B28_1 = G_B26_0;
			G_B28_2 = G_B26_1;
			goto IL_016b;
		}

IL_016a:
		{
			G_B28_0 = ((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)(NULL));
			G_B28_1 = G_B27_0;
			G_B28_2 = G_B27_1;
		}

IL_016b:
		{
			NullCheck(G_B28_2);
			ArrayElementTypeCheck (G_B28_2, G_B28_0);
			(G_B28_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B28_1), (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)G_B28_0);
			// meshFilters[(int)ARMeshClassification.Door] = (m_DoorMeshPrefab == null) ? null : Instantiate(m_DoorMeshPrefab, parent);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_61 = V_7;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_62 = __this->get_m_DoorMeshPrefab_13();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_63 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_62, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			G_B29_0 = 7;
			G_B29_1 = L_61;
			if (L_63)
			{
				G_B30_0 = 7;
				G_B30_1 = L_61;
				goto IL_018c;
			}
		}

IL_017d:
		{
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_64 = __this->get_m_DoorMeshPrefab_13();
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_65 = V_6;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_66 = Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91(L_64, L_65, /*hidden argument*/Object_Instantiate_TisMeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0_m1B4CD26E53D0991BDF7F09ED600F2B48E30F2E91_RuntimeMethod_var);
			G_B31_0 = L_66;
			G_B31_1 = G_B29_0;
			G_B31_2 = G_B29_1;
			goto IL_018d;
		}

IL_018c:
		{
			G_B31_0 = ((MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)(NULL));
			G_B31_1 = G_B30_0;
			G_B31_2 = G_B30_1;
		}

IL_018d:
		{
			NullCheck(G_B31_2);
			ArrayElementTypeCheck (G_B31_2, G_B31_0);
			(G_B31_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B31_1), (MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *)G_B31_0);
			// m_MeshFrackingMap[meshId] = meshFilters;
			Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * L_67 = __this->get_m_MeshFrackingMap_14();
			TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_68 = V_1;
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_69 = V_7;
			NullCheck(L_67);
			Dictionary_2_set_Item_mDC4BEACAC5E0BE4EE674CE33154D18CD0437D27D(L_67, L_68, L_69, /*hidden argument*/Dictionary_2_set_Item_mDC4BEACAC5E0BE4EE674CE33154D18CD0437D27D_RuntimeMethod_var);
			// var baseMesh = meshFilter.sharedMesh;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_70 = ___meshFilter0;
			NullCheck(L_70);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_71 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_70, /*hidden argument*/NULL);
			V_8 = L_71;
			// for (int i = 0; i < k_NumClassifications; ++i)
			V_10 = 0;
			goto IL_01ee;
		}

IL_01aa:
		{
			// var classifiedMeshFilter = meshFilters[i];
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_72 = V_7;
			int32_t L_73 = V_10;
			NullCheck(L_72);
			int32_t L_74 = L_73;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
			V_11 = L_75;
			// if (classifiedMeshFilter != null)
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_76 = V_11;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_77 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_76, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_12 = L_77;
			bool L_78 = V_12;
			if (!L_78)
			{
				goto IL_01e7;
			}
		}

IL_01c0:
		{
			// var classifiedMesh = classifiedMeshFilter.mesh;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_79 = V_11;
			NullCheck(L_79);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_80 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_79, /*hidden argument*/NULL);
			V_13 = L_80;
			// ExtractClassifiedMesh(baseMesh, faceClassifications, (ARMeshClassification)i, classifiedMesh);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_81 = V_8;
			NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  L_82 = V_2;
			int32_t L_83 = V_10;
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_84 = V_13;
			MeshClassificationFrackingFixed_ExtractClassifiedMesh_m408B04E420E0794B224D5AA42641A903F18B119B(__this, L_81, L_82, (((int32_t)((uint8_t)L_83))), L_84, /*hidden argument*/NULL);
			// meshFilters[i].mesh = classifiedMesh;
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_85 = V_7;
			int32_t L_86 = V_10;
			NullCheck(L_85);
			int32_t L_87 = L_86;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_89 = V_13;
			NullCheck(L_88);
			MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_88, L_89, /*hidden argument*/NULL);
		}

IL_01e7:
		{
			// for (int i = 0; i < k_NumClassifications; ++i)
			int32_t L_90 = V_10;
			V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)1));
		}

IL_01ee:
		{
			// for (int i = 0; i < k_NumClassifications; ++i)
			int32_t L_91 = V_10;
			V_14 = (bool)((((int32_t)L_91) < ((int32_t)8))? 1 : 0);
			bool L_92 = V_14;
			if (L_92)
			{
				goto IL_01aa;
			}
		}

IL_01f9:
		{
			IL2CPP_LEAVE(0x20B, FINALLY_01fc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01fc;
	}

FINALLY_01fc:
	{ // begin finally (depth: 1)
		NativeArray_1_Dispose_m75AEA74E5F1D82C13F1F15B40E23145707D8E421((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&V_5), /*hidden argument*/NativeArray_1_Dispose_m75AEA74E5F1D82C13F1F15B40E23145707D8E421_RuntimeMethod_var);
		IL2CPP_END_FINALLY(508)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(508)
	{
		IL2CPP_JUMP_TBL(0x20B, IL_020b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_020b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::UpdateMesh(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_UpdateMesh_m1B6671F6A68C9EDCB4BB11BD1D9660CEFE3C978A (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___meshFilter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_UpdateMesh_m1B6671F6A68C9EDCB4BB11BD1D9660CEFE3C978A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * V_0 = NULL;
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  V_5;
	memset((&V_5), 0, sizeof(V_5));
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* V_6 = NULL;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_10 = NULL;
	bool V_11 = false;
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * V_12 = NULL;
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// XRMeshSubsystem meshSubsystem = m_MeshManager.subsystem as XRMeshSubsystem;
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_0 = __this->get_m_MeshManager_5();
		NullCheck(L_0);
		RuntimeObject* L_1 = ARMeshManager_get_subsystem_m0D12029952F709BEB9632EF5571D56975C76852E_inline(L_0, /*hidden argument*/NULL);
		V_0 = ((XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)IsInstClass((RuntimeObject*)L_1, XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9_il2cpp_TypeInfo_var));
		// if (meshSubsystem == null)
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_2 = V_0;
		V_3 = (bool)((((RuntimeObject*)(XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		goto IL_00e2;
	}

IL_0020:
	{
		// var meshId = ExtractTrackableId(meshFilter.name);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_4 = ___meshFilter0;
		NullCheck(L_4);
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_6 = MeshClassificationFrackingFixed_ExtractTrackableId_m001BD57DF8477600AB976E9CD92A770CBAFA1A20(__this, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var faceClassifications = meshSubsystem.GetFaceClassifications(meshId, Allocator.Persistent);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_7 = V_0;
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_8 = V_1;
		NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  L_9 = ARKitMeshSubsystemExtensions_GetFaceClassifications_mC40B0B1A19CC0D5E1FF259784B11B517EEE6132B(L_7, L_8, 4, /*hidden argument*/NULL);
		V_2 = L_9;
		// if (!faceClassifications.IsCreated)
		bool L_10 = NativeArray_1_get_IsCreated_mB05644B4C3DC6509EBC733E98D3812F3C63E82FC((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&V_2), /*hidden argument*/NativeArray_1_get_IsCreated_mB05644B4C3DC6509EBC733E98D3812F3C63E82FC_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// return;
		goto IL_00e2;
	}

IL_004c:
	{
		// using (faceClassifications)
		NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  L_12 = V_2;
		V_5 = L_12;
	}

IL_004f:
	try
	{ // begin try (depth: 1)
		{
			// if (faceClassifications.Length <= 0)
			int32_t L_13 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&V_2))->___m_Length_1);
			V_8 = (bool)((((int32_t)((((int32_t)L_13) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_14 = V_8;
			if (!L_14)
			{
				goto IL_0066;
			}
		}

IL_0063:
		{
			// return;
			IL2CPP_LEAVE(0xE2, FINALLY_00d3);
		}

IL_0066:
		{
			// var meshFilters = m_MeshFrackingMap[meshId];
			Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * L_15 = __this->get_m_MeshFrackingMap_14();
			TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_16 = V_1;
			NullCheck(L_15);
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_17 = Dictionary_2_get_Item_mB0075F346E74166870D4BCDE21E5807D18B0F943(L_15, L_16, /*hidden argument*/Dictionary_2_get_Item_mB0075F346E74166870D4BCDE21E5807D18B0F943_RuntimeMethod_var);
			V_6 = L_17;
			// var baseMesh = meshFilter.sharedMesh;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_18 = ___meshFilter0;
			NullCheck(L_18);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_19 = MeshFilter_get_sharedMesh_mC076FD5461BFBBAD3BE49D25263CF140700D9902(L_18, /*hidden argument*/NULL);
			V_7 = L_19;
			// for (int i = 0; i < k_NumClassifications; ++i)
			V_9 = 0;
			goto IL_00c5;
		}

IL_0081:
		{
			// var classifiedMeshFilter = meshFilters[i];
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_20 = V_6;
			int32_t L_21 = V_9;
			NullCheck(L_20);
			int32_t L_22 = L_21;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
			V_10 = L_23;
			// if (classifiedMeshFilter != null)
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_24 = V_10;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			bool L_25 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_24, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
			V_11 = L_25;
			bool L_26 = V_11;
			if (!L_26)
			{
				goto IL_00be;
			}
		}

IL_0097:
		{
			// var classifiedMesh = classifiedMeshFilter.mesh;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_27 = V_10;
			NullCheck(L_27);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_28 = MeshFilter_get_mesh_m0311B393009B408197013C5EBCB42A1E3EC3B7D5(L_27, /*hidden argument*/NULL);
			V_12 = L_28;
			// ExtractClassifiedMesh(baseMesh, faceClassifications, (ARMeshClassification)i, classifiedMesh);
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_29 = V_7;
			NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892  L_30 = V_2;
			int32_t L_31 = V_9;
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_32 = V_12;
			MeshClassificationFrackingFixed_ExtractClassifiedMesh_m408B04E420E0794B224D5AA42641A903F18B119B(__this, L_29, L_30, (((int32_t)((uint8_t)L_31))), L_32, /*hidden argument*/NULL);
			// meshFilters[i].mesh = classifiedMesh;
			MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_33 = V_6;
			int32_t L_34 = V_9;
			NullCheck(L_33);
			int32_t L_35 = L_34;
			MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
			Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * L_37 = V_12;
			NullCheck(L_36);
			MeshFilter_set_mesh_mA18AA96C75CC91CF0917BA1F437626499FAAF496(L_36, L_37, /*hidden argument*/NULL);
		}

IL_00be:
		{
			// for (int i = 0; i < k_NumClassifications; ++i)
			int32_t L_38 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		}

IL_00c5:
		{
			// for (int i = 0; i < k_NumClassifications; ++i)
			int32_t L_39 = V_9;
			V_13 = (bool)((((int32_t)L_39) < ((int32_t)8))? 1 : 0);
			bool L_40 = V_13;
			if (L_40)
			{
				goto IL_0081;
			}
		}

IL_00d0:
		{
			IL2CPP_LEAVE(0xE2, FINALLY_00d3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d3;
	}

FINALLY_00d3:
	{ // begin finally (depth: 1)
		NativeArray_1_Dispose_m75AEA74E5F1D82C13F1F15B40E23145707D8E421((NativeArray_1_tC472D6F57B5F6530186D1142661ED15BC42C2892 *)(&V_5), /*hidden argument*/NativeArray_1_Dispose_m75AEA74E5F1D82C13F1F15B40E23145707D8E421_RuntimeMethod_var);
		IL2CPP_END_FINALLY(211)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(211)
	{
		IL2CPP_JUMP_TBL(0xE2, IL_00e2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e2:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::RemoveMesh(UnityEngine.MeshFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed_RemoveMesh_mC3014C8DE9CE6D7A5E1F0F17FDB6337BB92AD8ED (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___meshFilter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed_RemoveMesh_mC3014C8DE9CE6D7A5E1F0F17FDB6337BB92AD8ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* V_1 = NULL;
	int32_t V_2 = 0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		// var meshId = ExtractTrackableId(meshFilter.name);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_0 = ___meshFilter0;
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_2 = MeshClassificationFrackingFixed_ExtractTrackableId_m001BD57DF8477600AB976E9CD92A770CBAFA1A20(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var meshFilters = m_MeshFrackingMap[meshId];
		Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * L_3 = __this->get_m_MeshFrackingMap_14();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_4 = V_0;
		NullCheck(L_3);
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_5 = Dictionary_2_get_Item_mB0075F346E74166870D4BCDE21E5807D18B0F943(L_3, L_4, /*hidden argument*/Dictionary_2_get_Item_mB0075F346E74166870D4BCDE21E5807D18B0F943_RuntimeMethod_var);
		V_1 = L_5;
		// for (int i = 0; i < k_NumClassifications; ++i)
		V_2 = 0;
		goto IL_003f;
	}

IL_001f:
	{
		// var classifiedMeshFilter = meshFilters[i];
		MeshFilterU5BU5D_t89867AD5EAB823D1CCFEDF4960825290A1375820* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (classifiedMeshFilter != null)
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_10 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_003a;
		}
	}
	{
		// Object.Destroy(classifiedMeshFilter);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_13, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// for (int i = 0; i < k_NumClassifications; ++i)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_003f:
	{
		// for (int i = 0; i < k_NumClassifications; ++i)
		int32_t L_15 = V_2;
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)8))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_001f;
		}
	}
	{
		// m_MeshFrackingMap.Remove(meshId);
		Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * L_17 = __this->get_m_MeshFrackingMap_14();
		TrackableId_tA7E19AFE62176E25E3759548887E9068E1E4AE47  L_18 = V_0;
		NullCheck(L_17);
		Dictionary_2_Remove_m7F3E3B5A2240C351C034FE7D33704DE77660B66D(L_17, L_18, /*hidden argument*/Dictionary_2_Remove_m7F3E3B5A2240C351C034FE7D33704DE77660B66D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.MeshClassificationFrackingFixed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshClassificationFrackingFixed__ctor_m51784B014EC3202AB3E6B28CF94640D9FE31D26D (MeshClassificationFrackingFixed_t2D2378C766EA1ACF163BFEB5E98C424AE96F74AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MeshClassificationFrackingFixed__ctor_m51784B014EC3202AB3E6B28CF94640D9FE31D26D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly Dictionary<TrackableId, MeshFilter[]> m_MeshFrackingMap = new Dictionary<TrackableId, MeshFilter[]>();
		Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 * L_0 = (Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6 *)il2cpp_codegen_object_new(Dictionary_2_tE8123FA0652819788194B631F54FF81FB69D6CE6_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD7B2BABA8692A01BA92EE21050132905ADCF84FB(L_0, /*hidden argument*/Dictionary_2__ctor_mD7B2BABA8692A01BA92EE21050132905ADCF84FB_RuntimeMethod_var);
		__this->set_m_MeshFrackingMap_14(L_0);
		// readonly List<int> m_BaseTriangles = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_1 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_1, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_m_BaseTriangles_18(L_1);
		// readonly List<int> m_ClassifiedTriangles = new List<int>();
		List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * L_2 = (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 *)il2cpp_codegen_object_new(List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226_il2cpp_TypeInfo_var);
		List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4(L_2, /*hidden argument*/List_1__ctor_mA7F9F92F641CEECFD9D8CFDC667568A05FFD27B4_RuntimeMethod_var);
		__this->set_m_ClassifiedTriangles_19(L_2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.XR.ARFoundation.ARMeshManager UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::get_meshManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * ToggleMeshClassificationFixed_get_meshManager_m52FF27ECF7403CB595B6282CBA14777BC675FCEF (ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495 * __this, const RuntimeMethod* method)
{
	{
		// public ARMeshManager meshManager { get => m_MeshManager; set => m_MeshManager = value; }
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_0 = __this->get_m_MeshManager_4();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::set_meshManager(UnityEngine.XR.ARFoundation.ARMeshManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleMeshClassificationFixed_set_meshManager_m7883B6CAB197EA5909BCCCE7C40069B9259A3709 (ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495 * __this, ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * ___value0, const RuntimeMethod* method)
{
	{
		// public ARMeshManager meshManager { get => m_MeshManager; set => m_MeshManager = value; }
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_0 = ___value0;
		__this->set_m_MeshManager_4(L_0);
		return;
	}
}
// System.Boolean UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::get_classificationEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ToggleMeshClassificationFixed_get_classificationEnabled_mEBDC770ED0C9DF4506824202188DB81AA2185E1A (ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495 * __this, const RuntimeMethod* method)
{
	{
		// get => m_ClassificationEnabled;
		bool L_0 = __this->get_m_ClassificationEnabled_5();
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::set_classificationEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleMeshClassificationFixed_set_classificationEnabled_m4B2274703DAD17D3CB9BA852AACFF4F5BCC42B88 (ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_ClassificationEnabled = value;
		bool L_0 = ___value0;
		__this->set_m_ClassificationEnabled_5(L_0);
		// UpdateMeshSubsystem();
		ToggleMeshClassificationFixed_UpdateMeshSubsystem_m130E841EA61045D1E4FF5A0DD23358C9A565E1C4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleMeshClassificationFixed_OnEnable_m9E2ECEF40BBFAD18658157F957CA8D904D09D765 (ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495 * __this, const RuntimeMethod* method)
{
	{
		// UpdateMeshSubsystem();
		ToggleMeshClassificationFixed_UpdateMeshSubsystem_m130E841EA61045D1E4FF5A0DD23358C9A565E1C4(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::UpdateMeshSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleMeshClassificationFixed_UpdateMeshSubsystem_m130E841EA61045D1E4FF5A0DD23358C9A565E1C4 (ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleMeshClassificationFixed_UpdateMeshSubsystem_m130E841EA61045D1E4FF5A0DD23358C9A565E1C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// Debug.Assert(m_MeshManager != null, "mesh manager cannot be null");
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_0 = __this->get_m_MeshManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Assert_m84EE43ACFD01E8C0CEC0160C494B2CE77338F7BC(L_1, _stringLiteralB890F9A8B999291533DACA9981403F3448CD4F25, /*hidden argument*/NULL);
		// if ((m_MeshManager != null) && (m_MeshManager.subsystem is XRMeshSubsystem meshSubsystem))
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_2 = __this->get_m_MeshManager_4();
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * L_4 = __this->get_m_MeshManager_4();
		NullCheck(L_4);
		RuntimeObject* L_5 = ARMeshManager_get_subsystem_m0D12029952F709BEB9632EF5571D56975C76852E_inline(L_4, /*hidden argument*/NULL);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_6 = ((XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)IsInstClass((RuntimeObject*)L_5, XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9_il2cpp_TypeInfo_var));
		V_0 = L_6;
		G_B3_0 = ((!(((RuntimeObject*)(XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B3_0 = 0;
	}

IL_003e:
	{
		V_1 = (bool)G_B3_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		// meshSubsystem.SetClassificationEnabled(m_ClassificationEnabled);
		XRMeshSubsystem_t6FB1A94A4B7956BCE5A99B6C826D46A21C69A8B9 * L_8 = V_0;
		bool L_9 = __this->get_m_ClassificationEnabled_5();
		ARKitMeshSubsystemExtensions_SetClassificationEnabled_m4A8585D372FBA2928790BC63D7FD30972A8A553A(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARFoundation.Samples.ToggleMeshClassificationFixed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleMeshClassificationFixed__ctor_mCAC7B8F488A3270C910EE617D8EB3EE31BD43D88 (ToggleMeshClassificationFixed_t89D729F1B447EC814DDF1876DD825EF5891FB495 * __this, const RuntimeMethod* method)
{
	{
		// bool m_ClassificationEnabled = false;
		__this->set_m_ClassificationEnabled_5((bool)0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ARMeshesChangedEventArgs_get_added_m4CC4E3C4DA0ED7058CC1B5B5B6334AC14DEDBD76_inline (ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D * __this, const RuntimeMethod* method)
{
	{
		// public List<MeshFilter> added { get; private set; }
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_0 = __this->get_U3CaddedU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ARMeshesChangedEventArgs_get_updated_mABBA44F047942D7526F0A1A2FFF638EBF8B750B9_inline (ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D * __this, const RuntimeMethod* method)
{
	{
		// public List<MeshFilter> updated { get; private set; }
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * ARMeshesChangedEventArgs_get_removed_m08B60A8773789CF1CF440859D3860B510A9A96FD_inline (ARMeshesChangedEventArgs_t3964E364B190B3699E8DEF26B5C5578DDF896B2D * __this, const RuntimeMethod* method)
{
	{
		// public List<MeshFilter> removed { get; private set; }
		List_1_t39D333F532282B69A02DE93748D6AFFE989DEA3D * L_0 = __this->get_U3CremovedU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* ARMeshManager_get_subsystem_m0D12029952F709BEB9632EF5571D56975C76852E_inline (ARMeshManager_t8020001FE135E603F274889B169EABD35F330F26 * __this, const RuntimeMethod* method)
{
	{
		// public XRMeshSubsystem subsystem => m_Subsystem;
		RuntimeObject* L_0 = __this->get_m_Subsystem_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_2_get_subsystem_m4B541054CC60E616694357611534CDDA7DC5D1A0_gshared_inline (SubsystemLifecycleManager_2_t5D1A501CD473D1DB7DD9763711AFE091EA6665C9 * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m77946F922B214B9FB9D3EA48D02AF4CA2B524356_gshared_inline (List_1_t2E429D48492C9F1ED16C7D74224A8AAB590A7B32 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0AEC7165BCDA1870BB35D5B1BE47F1F0EAE89C76_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mDF3F52C7C1985C572A07CD15F1486A0035D288D5_gshared_inline (List_1_tE1526161A558A17A39A8B69D8EEF3801393B6226 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)L_2, (int32_t)L_3);
		return L_4;
	}
}
