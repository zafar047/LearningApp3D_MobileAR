#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<XGI.Tools.MethodHandler>
struct List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// XGI.Tools.MethodHandler[]
struct MethodHandlerU5BU5D_t54AD4A227A5E0A94D84B971B6093CA78B7AFF41C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// XGI.Tools.ChildrenSearch
struct ChildrenSearch_t51830C6E58AE549AE7471925DCCF70BC1A81AEE9;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// XGI.Tools.DataFileManager
struct DataFileManager_tDB260AD3C96F0650A7212880549DCFEE52E9002D;
// System.Exception
struct Exception_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t35CC72FCAD57FCB71968799C400627F09E81FB01;
// XGI.Tools.Lerper
struct Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// XGI.Tools.MethodHandler
struct MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// XGI.Tools.Tweener
struct Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// XGI.Tools.Lerper/<Mover>d__10
struct U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// XGI.Tools.Tweener/<Mover>d__5
struct U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8;

IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral082E5016B30B98B3D5DC47E489CD244571F555C9;
IL2CPP_EXTERN_C String_t* _stringLiteral10D8B8DDC27D4EA12848CFE770A8F20CEF6B1113;
IL2CPP_EXTERN_C String_t* _stringLiteral2356BEEEA02F9D05DCD5833B2CE884F40149EADB;
IL2CPP_EXTERN_C String_t* _stringLiteral298A437563DFEB94794EAC4455B95C54BA33A7D3;
IL2CPP_EXTERN_C String_t* _stringLiteral391295240FFF154361EEE173C4C5F5ECCD63A0ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6719934B74C5841880114948829760EF76B868B9;
IL2CPP_EXTERN_C String_t* _stringLiteral7033C3953BAA0ED48D6B1512172DC0C132C089C5;
IL2CPP_EXTERN_C String_t* _stringLiteral76CD2EAEFCAA194CA83AC0F9AE1236CB6F1382C8;
IL2CPP_EXTERN_C String_t* _stringLiteral783A35D67E74C6F41C0C8A5A17F7D927BDAE8E95;
IL2CPP_EXTERN_C String_t* _stringLiteral7FC4117BC0D1401052B035D5FDA369FC18998A75;
IL2CPP_EXTERN_C String_t* _stringLiteral8979724AAC291A6FEECEB78D537F265CFC550401;
IL2CPP_EXTERN_C String_t* _stringLiteral89FCDD6B0EBA879C22342811042BB1CA88C3D2E2;
IL2CPP_EXTERN_C String_t* _stringLiteralB4899CA3D7FF555CFFBC2F26ADEE4E7692967694;
IL2CPP_EXTERN_C String_t* _stringLiteralF1058BF340A13C387D6B943FA894AE1CD8EE71AE;
IL2CPP_EXTERN_C String_t* _stringLiteralF5A1DE3B4D5596D48C5EDC3B394D82DEA064CEF7;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0350F26C572E743C85C202AA68C07339552DD4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mD1B37AD70B390DAD40B9DA5E3C62E8846C02EB6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD22213B583E5ADA1F965EB6C5C7CF2B6BAB2C62A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4885A6BF41FB58F54DDD6BC8602C9A63C7EAA3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4D192EC9F1C9D9ED8C38D9A5C43792BA4110B67F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m976C8957137C66B335A324FF0D621B3117B9F1D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodHandler_Execute_m2C5EA0BE90190B166DC612CAC5ECC8D7C7FB6AD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tweener_MoveObject_m8CC374E4DAC4DC6AC5F42A8EEDFBF23FC9F0E54F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoverU3Ed__10_System_Collections_IEnumerator_Reset_m57B5F0D19A279E466E6486A8D9CCD2CF6F7BCCA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoverU3Ed__5_System_Collections_IEnumerator_Reset_m3E54AA1CF6C30D0FAB6DA385FC64C4C0DC47F54B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9D49F15A7644EA0DBF3CF3D8E99DD105502665DA 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<XGI.Tools.MethodHandler>
struct List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MethodHandlerU5BU5D_t54AD4A227A5E0A94D84B971B6093CA78B7AFF41C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MethodHandlerU5BU5D_t54AD4A227A5E0A94D84B971B6093CA78B7AFF41C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// XGI.Tools.ChildrenSearch
struct ChildrenSearch_t51830C6E58AE549AE7471925DCCF70BC1A81AEE9  : public RuntimeObject
{
};

// XGI.Tools.DataFileManager
struct DataFileManager_tDB260AD3C96F0650A7212880549DCFEE52E9002D  : public RuntimeObject
{
	// System.String XGI.Tools.DataFileManager::location
	String_t* ___location_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// XGI.Tools.MethodHandler
struct MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256  : public RuntimeObject
{
	// System.Reflection.MethodInfo XGI.Tools.MethodHandler::methodInfo
	MethodInfo_t* ___methodInfo_0;
	// System.Object XGI.Tools.MethodHandler::inst
	RuntimeObject* ___inst_1;
	// System.Object[] XGI.Tools.MethodHandler::args
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// XGI.Tools.Lerper/<Mover>d__10
struct U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008  : public RuntimeObject
{
	// System.Int32 XGI.Tools.Lerper/<Mover>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object XGI.Tools.Lerper/<Mover>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean XGI.Tools.Lerper/<Mover>d__10::destroyGameObject
	bool ___destroyGameObject_2;
	// XGI.Tools.Lerper XGI.Tools.Lerper/<Mover>d__10::<>4__this
	Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* ___U3CU3E4__this_3;
	// System.Single XGI.Tools.Lerper/<Mover>d__10::<dist>5__1
	float ___U3CdistU3E5__1_4;
};

// XGI.Tools.Tweener/<Mover>d__5
struct U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8  : public RuntimeObject
{
	// System.Int32 XGI.Tools.Tweener/<Mover>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object XGI.Tools.Tweener/<Mover>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Boolean XGI.Tools.Tweener/<Mover>d__5::destroyGameObject
	bool ___destroyGameObject_2;
	// XGI.Tools.Tweener XGI.Tools.Tweener/<Mover>d__5::<>4__this
	Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* ___U3CU3E4__this_3;
	// System.Single XGI.Tools.Tweener/<Mover>d__5::<originalTimeScale>5__1
	float ___U3CoriginalTimeScaleU3E5__1_4;
};

// System.Collections.Generic.List`1/Enumerator<XGI.Tools.MethodHandler>
struct Enumerator_tAA2322FB3645017721CFB66B7C27BDBD06161406 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F  : public RuntimeObject
{
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_tB959BF0F4EF3F8611E5891A7011DD99F9FD69E2A* ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_crossAppDomainArray_6;
};

struct BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_t8B428D684ADA214F1A90B42123A1536ED34C1FF8* ___typeNameCache_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// XGI.Tools.Lerper
struct Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single XGI.Tools.Lerper::totalDist
	float ___totalDist_4;
	// System.Single XGI.Tools.Lerper::fac
	float ___fac_5;
	// System.Single XGI.Tools.Lerper::speed
	float ___speed_6;
	// UnityEngine.Vector3 XGI.Tools.Lerper::from
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from_7;
	// UnityEngine.Vector3 XGI.Tools.Lerper::to
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to_8;
	// UnityEngine.Quaternion XGI.Tools.Lerper::fromRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fromRotation_9;
	// UnityEngine.Quaternion XGI.Tools.Lerper::toRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___toRotation_10;
};

// XGI.Tools.Tweener
struct Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE  : public Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242
{
	// System.Single XGI.Tools.Tweener::time
	float ___time_11;
	// System.Collections.Generic.List`1<XGI.Tools.MethodHandler> XGI.Tools.Tweener::onDestroyMethods
	List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* ___onDestroyMethods_12;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;

// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705 (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, RuntimeObject* ___graph1, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___serializationStream0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] XGI.Tools.ChildrenSearch::GetChildren(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ChildrenSearch_GetChildren_mF283F157B5A9DCC51BAC59CAD4ED763B97592B20 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mA1B6FACF0E4A9B45FFECF215BF15A040C2DA9A34 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.GameObject>::ToArray()
inline GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)il2cppRetVal;
}
// UnityEngine.GameObject[] XGI.Tools.ChildrenSearch::SearchAllAmongChildren(UnityEngine.GameObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ChildrenSearch_SearchAllAmongChildren_m8A8EF3C740187E92102F95AE0B08C02AEEA29595 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, String_t* ___childname1, bool ___caseSensitivity2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] XGI.Tools.ChildrenSearch::GetLineage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ChildrenSearch_GetLineage_m3DC2DA34647844956BD109A168F768C23A080438 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] XGI.Tools.ChildrenSearch::SearchAllAmongLineage(UnityEngine.GameObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ChildrenSearch_SearchAllAmongLineage_mF876C5CEDC00476CE06B47F1C94E9DF76FC95529 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, String_t* ___childname1, bool ___caseSensitivity2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> XGI.Tools.ChildrenSearch::GetLineage(UnityEngine.GameObject[],System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ChildrenSearch_GetLineage_mDFB0C5A8108F23E26F60A4105E7C8E6113E8C434 (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___parents0, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___result1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Lerper/<Mover>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoverU3Ed__10__ctor_mEFF449AAEF0F770B4E4530C924EC3A394FAD1638 (U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<XGI.Tools.MethodHandler>::.ctor()
inline void List_1__ctor_m976C8957137C66B335A324FF0D621B3117B9F1D1 (List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Tweener/<Mover>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoverU3Ed__5__ctor_m4E9BA7932786070A7B1FEFA003CD1BCF5F0ED025 (U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<XGI.Tools.MethodHandler>::Add(T)
inline void List_1_Add_m4885A6BF41FB58F54DDD6BC8602C9A63C7EAA3D2_inline (List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* __this, MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<XGI.Tools.MethodHandler>::GetEnumerator()
inline Enumerator_tAA2322FB3645017721CFB66B7C27BDBD06161406 List_1_GetEnumerator_m4D192EC9F1C9D9ED8C38D9A5C43792BA4110B67F (List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* __this, const RuntimeMethod* method)
{
	Enumerator_tAA2322FB3645017721CFB66B7C27BDBD06161406 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<XGI.Tools.MethodHandler>::Dispose()
inline void Enumerator_Dispose_m0350F26C572E743C85C202AA68C07339552DD4D3 (Enumerator_tAA2322FB3645017721CFB66B7C27BDBD06161406* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<XGI.Tools.MethodHandler>::get_Current()
inline MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* Enumerator_get_Current_mD22213B583E5ADA1F965EB6C5C7CF2B6BAB2C62A_inline (Enumerator_tAA2322FB3645017721CFB66B7C27BDBD06161406* __this, const RuntimeMethod* method)
{
	MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Object XGI.Tools.MethodHandler::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodHandler_Execute_mAFF979CE7349DCD404C0EA6DA5CE0997BA68E984 (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<XGI.Tools.MethodHandler>::MoveNext()
inline bool Enumerator_MoveNext_mD1B37AD70B390DAD40B9DA5E3C62E8846C02EB6B (Enumerator_tAA2322FB3645017721CFB66B7C27BDBD06161406* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void XGI.Tools.Lerper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lerper__ctor_m2A0C6C8E237D129D89C19C9E99E0A1FB1706306E (Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Boolean XGI.Tools.DataFileManager::get_IsDataExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataFileManager_get_IsDataExist_mA243B4F32B7AADC387AA187320463F7C386442E9 (DataFileManager_tDB260AD3C96F0650A7212880549DCFEE52E9002D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = __this->___location_0;
		bool L_1;
		L_1 = File_Exists_mD7E7A84A6B9E9A9BADBDA7C46AAE0624EF106D85(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void XGI.Tools.DataFileManager::SaveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFileManager_SaveData_m1DF6A214761BC488D30F6340B640168EBF1C5504 (DataFileManager_tDB260AD3C96F0650A7212880549DCFEE52E9002D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_1 = NULL;
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_2 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object XGI.Tools.DataFileManager::GetInstance() */, __this);
		V_0 = L_0;
		String_t* L_1 = __this->___location_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_2 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_2, L_1, 2, 2, NULL);
		V_1 = L_2;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_3 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_3, NULL);
		V_2 = L_3;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_4 = V_2;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_1;
		RuntimeObject* L_6 = V_0;
		NullCheck(L_4);
		BinaryFormatter_Serialize_mF365DA7FA76E03707336375616D757397CF2992E(L_4, L_5, L_6, NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_1;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_7);
		return;
	}
}
// System.Object XGI.Tools.DataFileManager::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataFileManager_LoadData_m6CA0824C11227D8D0DFC59177DB59E81A5FE06ED (DataFileManager_tDB260AD3C96F0650A7212880549DCFEE52E9002D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		String_t* L_0 = __this->___location_0;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FileStream__ctor_m158997E4E7ADD1BA5E75F4835882E32137ACB3C9(L_1, L_0, 3, 1, NULL);
		V_0 = L_1;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_2 = (BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F*)il2cpp_codegen_object_new(BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BinaryFormatter__ctor_m484DBB5D742624C3A8190921A85458BCECBB1705(L_2, NULL);
		V_1 = L_2;
		BinaryFormatter_t5A79B3E3328D1B8FDE8C57D1E17668AD47A4466F* L_3 = V_1;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_4 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = BinaryFormatter_Deserialize_mFC50E75F230189EB3660C8F2FD1E786C0D11E1ED(L_3, L_4, NULL);
		V_2 = L_5;
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = V_0;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_6);
		RuntimeObject* L_7 = V_2;
		V_3 = L_7;
		goto IL_0028;
	}

IL_0028:
	{
		RuntimeObject* L_8 = V_3;
		return L_8;
	}
}
// System.Void XGI.Tools.DataFileManager::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataFileManager__ctor_mB4258710C4F6D10BD96A787C1AE766DA14A78154 (DataFileManager_tDB260AD3C96F0650A7212880549DCFEE52E9002D* __this, String_t* ___directory0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___directory0;
		__this->___location_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___location_0), (void*)L_0);
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
// System.Type XGI.Tools.MethodHandler::GetReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MethodHandler_GetReturnType_mFAB63CA728A0D56BF04BBE8F4DD10A0E403EF662 (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___methodInfo_0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(40 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		return L_1;
	}
}
// System.Object XGI.Tools.MethodHandler::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodHandler_Execute_mAFF979CE7349DCD404C0EA6DA5CE0997BA68E984 (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_6 = NULL;
	int32_t V_7 = 0;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	MethodInfo_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	MethodInfo_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	RuntimeObject* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	String_t* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	String_t* G_B18_2 = NULL;
	String_t* G_B20_0 = NULL;
	String_t* G_B20_1 = NULL;
	String_t* G_B20_2 = NULL;
	String_t* G_B20_3 = NULL;
	{
	}
	try
	{// begin try (depth: 1)
		MethodInfo_t* L_0 = __this->___methodInfo_0;
		RuntimeObject* L_1 = __this->___inst_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->___args_2;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0193;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001f;
		}
		throw e;
	}

CATCH_001f:
	{// begin catch(System.Object)
		{
			V_1 = 1;
			V_2 = 1;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76CD2EAEFCAA194CA83AC0F9AE1236CB6F1382C8)), NULL);
			MethodInfo_t* L_4 = __this->___methodInfo_0;
			bool L_5;
			L_5 = MethodInfo_op_Equality_m3F6B020142F59A9A1549CEB6C7A43798FBA18BEB(L_4, (MethodInfo_t*)NULL, NULL);
			V_3 = L_5;
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_0065;
			}
		}
		{
			int32_t L_7 = V_1;
			int32_t L_8 = L_7;
			V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			V_4 = L_8;
			String_t* L_9;
			L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
			String_t* L_10;
			L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral082E5016B30B98B3D5DC47E489CD244571F555C9)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7033C3953BAA0ED48D6B1512172DC0C132C089C5)), NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_10, NULL);
			goto IL_0087;
		}

IL_0065:
		{
			MethodInfo_t* L_11 = __this->___methodInfo_0;
			MethodInfo_t* L_12 = L_11;
			G_B5_0 = L_12;
			G_B5_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5A1DE3B4D5596D48C5EDC3B394D82DEA064CEF7));
			if (L_12)
			{
				G_B6_0 = L_12;
				G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5A1DE3B4D5596D48C5EDC3B394D82DEA064CEF7));
				goto IL_0077;
			}
		}
		{
			G_B7_0 = ((String_t*)(NULL));
			G_B7_1 = G_B5_1;
			goto IL_007c;
		}

IL_0077:
		{
			NullCheck(G_B6_0);
			String_t* L_13;
			L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
			G_B7_0 = L_13;
			G_B7_1 = G_B6_1;
		}

IL_007c:
		{
			String_t* L_14;
			L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B7_1, G_B7_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_14, NULL);
		}

IL_0087:
		{
			RuntimeObject* L_15 = __this->___inst_1;
			V_5 = (bool)((((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_16 = V_5;
			if (!L_16)
			{
				goto IL_00bb;
			}
		}
		{
			int32_t L_17 = V_1;
			int32_t L_18 = L_17;
			V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
			V_4 = L_18;
			String_t* L_19;
			L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
			String_t* L_20;
			L_20 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral082E5016B30B98B3D5DC47E489CD244571F555C9)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral10D8B8DDC27D4EA12848CFE770A8F20CEF6B1113)), NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_20, NULL);
			goto IL_00dd;
		}

IL_00bb:
		{
			RuntimeObject* L_21 = __this->___inst_1;
			RuntimeObject* L_22 = L_21;
			G_B11_0 = L_22;
			G_B11_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4899CA3D7FF555CFFBC2F26ADEE4E7692967694));
			if (L_22)
			{
				G_B12_0 = L_22;
				G_B12_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4899CA3D7FF555CFFBC2F26ADEE4E7692967694));
				goto IL_00cd;
			}
		}
		{
			G_B13_0 = ((String_t*)(NULL));
			G_B13_1 = G_B11_1;
			goto IL_00d2;
		}

IL_00cd:
		{
			NullCheck(G_B12_0);
			String_t* L_23;
			L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B12_0);
			G_B13_0 = L_23;
			G_B13_1 = G_B12_1;
		}

IL_00d2:
		{
			String_t* L_24;
			L_24 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B13_1, G_B13_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_24, NULL);
		}

IL_00dd:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = __this->___args_2;
			V_6 = L_25;
			V_7 = 0;
			goto IL_0184;
		}

IL_00ee:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = V_6;
			int32_t L_27 = V_7;
			NullCheck(L_26);
			int32_t L_28 = L_27;
			RuntimeObject* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
			V_8 = L_29;
			RuntimeObject* L_30 = V_8;
			V_9 = (bool)((((RuntimeObject*)(RuntimeObject*)L_30) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_31 = V_9;
			if (!L_31)
			{
				goto IL_014d;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
			NullCheck(L_33);
			ArrayElementTypeCheck (L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral082E5016B30B98B3D5DC47E489CD244571F555C9)));
			(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral082E5016B30B98B3D5DC47E489CD244571F555C9)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
			int32_t L_35 = V_1;
			int32_t L_36 = L_35;
			V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
			V_4 = L_36;
			String_t* L_37;
			L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
			NullCheck(L_34);
			ArrayElementTypeCheck (L_34, L_37);
			(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_37);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_34;
			NullCheck(L_38);
			ArrayElementTypeCheck (L_38, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral298A437563DFEB94794EAC4455B95C54BA33A7D3)));
			(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral298A437563DFEB94794EAC4455B95C54BA33A7D3)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
			int32_t L_40 = V_2;
			int32_t L_41 = L_40;
			V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
			V_4 = L_41;
			String_t* L_42;
			L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
			NullCheck(L_39);
			ArrayElementTypeCheck (L_39, L_42);
			(L_39)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_42);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_39;
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6719934B74C5841880114948829760EF76B868B9)));
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6719934B74C5841880114948829760EF76B868B9)));
			String_t* L_44;
			L_44 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_43, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_44, NULL);
			goto IL_017e;
		}

IL_014d:
		{
			int32_t L_45 = V_2;
			int32_t L_46 = L_45;
			V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
			V_4 = L_46;
			String_t* L_47;
			L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
			RuntimeObject* L_48 = V_8;
			G_B18_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2356BEEEA02F9D05DCD5833B2CE884F40149EADB));
			G_B18_1 = L_47;
			G_B18_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89FCDD6B0EBA879C22342811042BB1CA88C3D2E2));
			if (L_48)
			{
				G_B19_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2356BEEEA02F9D05DCD5833B2CE884F40149EADB));
				G_B19_1 = L_47;
				G_B19_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89FCDD6B0EBA879C22342811042BB1CA88C3D2E2));
				goto IL_016c;
			}
		}
		{
			G_B20_0 = ((String_t*)(NULL));
			G_B20_1 = G_B18_0;
			G_B20_2 = G_B18_1;
			G_B20_3 = G_B18_2;
			goto IL_0173;
		}

IL_016c:
		{
			RuntimeObject* L_49 = V_8;
			NullCheck(L_49);
			String_t* L_50;
			L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
			G_B20_0 = L_50;
			G_B20_1 = G_B19_0;
			G_B20_2 = G_B19_1;
			G_B20_3 = G_B19_2;
		}

IL_0173:
		{
			String_t* L_51;
			L_51 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_51, NULL);
		}

IL_017e:
		{
			int32_t L_52 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add(L_52, 1));
		}

IL_0184:
		{
			int32_t L_53 = V_7;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = V_6;
			NullCheck(L_54);
			if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
			{
				goto IL_00ee;
			}
		}
		{
			V_0 = NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0193;
		}
	}// end catch (depth: 1)

IL_0193:
	{
		RuntimeObject* L_55 = V_0;
		return L_55;
	}
}
// System.Void XGI.Tools.MethodHandler::.ctor(System.Reflection.MethodInfo,System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodHandler__ctor_m5CB5F1B933731ADD25291B2D2FCF712D62D858CE (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* __this, MethodInfo_t* ___methodInformation0, RuntimeObject* ___instance1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MethodInfo_t* L_0 = ___methodInformation0;
		__this->___methodInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___methodInfo_0), (void*)L_0);
		RuntimeObject* L_1 = ___instance1;
		__this->___inst_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inst_1), (void*)L_1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___arguments2;
		__this->___args_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___args_2), (void*)L_2);
		return;
	}
}
// System.Void XGI.Tools.MethodHandler::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodHandler_Execute_m2C5EA0BE90190B166DC612CAC5ECC8D7C7FB6AD2 (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8979724AAC291A6FEECEB78D537F265CFC550401)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MethodHandler_Execute_m2C5EA0BE90190B166DC612CAC5ECC8D7C7FB6AD2_RuntimeMethod_var)));
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
// UnityEngine.GameObject[] XGI.Tools.ChildrenSearch::SearchAllAmongChildren(UnityEngine.GameObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ChildrenSearch_SearchAllAmongChildren_m8A8EF3C740187E92102F95AE0B08C02AEEA29595 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, String_t* ___childname1, bool ___caseSensitivity2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	bool V_5 = false;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_6 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___self0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = ChildrenSearch_GetChildren_mF283F157B5A9DCC51BAC59CAD4ED763B97592B20(L_0, NULL);
		V_0 = L_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_1 = L_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_003e;
	}

IL_0015:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_4;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10 = ___childname1;
		bool L_11 = ___caseSensitivity2;
		int32_t L_12;
		L_12 = String_Compare_mA1B6FACF0E4A9B45FFECF215BF15A040C2DA9A34(L_9, L_10, L_11, NULL);
		V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_4;
		NullCheck(L_14);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_14, L_15, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_003a:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003e:
	{
		int32_t L_17 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = V_1;
		NullCheck(L_19);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20;
		L_20 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_19, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		V_6 = L_20;
		goto IL_004e;
	}

IL_004e:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = V_6;
		return L_21;
	}
}
// UnityEngine.GameObject XGI.Tools.ChildrenSearch::SearchAmongChildren(UnityEngine.GameObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ChildrenSearch_SearchAmongChildren_m31E21891567CE97F1B5E52AEA2990C533FB475CF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, String_t* ___childname1, bool ___caseSensitivity2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral783A35D67E74C6F41C0C8A5A17F7D927BDAE8E95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1058BF340A13C387D6B943FA894AE1CD8EE71AE);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___self0;
		String_t* L_1 = ___childname1;
		bool L_2 = ___caseSensitivity2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3;
		L_3 = ChildrenSearch_SearchAllAmongChildren_m8A8EF3C740187E92102F95AE0B08C02AEEA29595(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral783A35D67E74C6F41C0C8A5A17F7D927BDAE8E95, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF1058BF340A13C387D6B943FA894AE1CD8EE71AE, NULL);
		goto IL_003c;
	}

IL_002e:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_0;
		NullCheck(L_6);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) < ((int32_t)1))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0042;
	}

IL_003c:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		goto IL_0042;
	}

IL_0042:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_3;
		return L_11;
	}
}
// UnityEngine.GameObject[] XGI.Tools.ChildrenSearch::GetChildren(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ChildrenSearch_GetChildren_mF283F157B5A9DCC51BAC59CAD4ED763B97592B20 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_4 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___self0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		V_0 = L_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_3, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0033;
	}

IL_0017:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___self0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, L_7, NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_4);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_9, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_0;
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_0017;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = V_1;
		NullCheck(L_14);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15;
		L_15 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_14, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		V_4 = L_15;
		goto IL_0045;
	}

IL_0045:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = V_4;
		return L_16;
	}
}
// UnityEngine.GameObject[] XGI.Tools.ChildrenSearch::SearchAllAmongLineage(UnityEngine.GameObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ChildrenSearch_SearchAllAmongLineage_mF876C5CEDC00476CE06B47F1C94E9DF76FC95529 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, String_t* ___childname1, bool ___caseSensitivity2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_1 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	bool V_5 = false;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_6 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___self0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = ChildrenSearch_GetLineage_m3DC2DA34647844956BD109A168F768C23A080438(L_0, NULL);
		V_0 = L_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_1 = L_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		V_2 = L_3;
		V_3 = 0;
		goto IL_003e;
	}

IL_0015:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_4;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		String_t* L_10 = ___childname1;
		bool L_11 = ___caseSensitivity2;
		int32_t L_12;
		L_12 = String_Compare_mA1B6FACF0E4A9B45FFECF215BF15A040C2DA9A34(L_9, L_10, L_11, NULL);
		V_5 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_003a;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_4;
		NullCheck(L_14);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_14, L_15, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
	}

IL_003a:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003e:
	{
		int32_t L_17 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = V_1;
		NullCheck(L_19);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20;
		L_20 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_19, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		V_6 = L_20;
		goto IL_004e;
	}

IL_004e:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = V_6;
		return L_21;
	}
}
// UnityEngine.GameObject XGI.Tools.ChildrenSearch::SearchAmongLineage(UnityEngine.GameObject,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ChildrenSearch_SearchAmongLineage_mD177120B65AC60FBD5BCE2106DA8FD6E5C065928 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, String_t* ___childname1, bool ___caseSensitivity2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral391295240FFF154361EEE173C4C5F5ECCD63A0ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral783A35D67E74C6F41C0C8A5A17F7D927BDAE8E95);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___self0;
		String_t* L_1 = ___childname1;
		bool L_2 = ___caseSensitivity2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3;
		L_3 = ChildrenSearch_SearchAllAmongLineage_mF876C5CEDC00476CE06B47F1C94E9DF76FC95529(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_0;
		NullCheck(L_4);
		V_1 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral783A35D67E74C6F41C0C8A5A17F7D927BDAE8E95, NULL);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral391295240FFF154361EEE173C4C5F5ECCD63A0ED, NULL);
		goto IL_003c;
	}

IL_002e:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = V_0;
		NullCheck(L_6);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) < ((int32_t)1))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		V_3 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		goto IL_0042;
	}

IL_003c:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		goto IL_0042;
	}

IL_0042:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_3;
		return L_11;
	}
}
// UnityEngine.GameObject[] XGI.Tools.ChildrenSearch::GetLineage(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ChildrenSearch_GetLineage_m3DC2DA34647844956BD109A168F768C23A080438 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___self0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)1);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___self0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_2);
		V_0 = L_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_4, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5;
		L_5 = ChildrenSearch_GetLineage_mDFB0C5A8108F23E26F60A4105E7C8E6113E8C434(L_3, L_4, NULL);
		NullCheck(L_5);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6;
		L_6 = List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C(L_5, List_1_ToArray_m9237E7439BAF0FDCFB325D21398E459BEDB3432C_RuntimeMethod_var);
		V_0 = L_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		V_1 = L_7;
		goto IL_0021;
	}

IL_0021:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_1;
		return L_8;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> XGI.Tools.ChildrenSearch::GetLineage(UnityEngine.GameObject[],System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ChildrenSearch_GetLineage_mDFB0C5A8108F23E26F60A4105E7C8E6113E8C434 (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___parents0, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_7 = NULL;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* G_B9_0 = NULL;
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = ___parents0;
		V_1 = L_1;
		V_2 = 0;
		goto IL_0047;
	}

IL_000f:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7;
		L_7 = ChildrenSearch_GetChildren_mF283F157B5A9DCC51BAC59CAD4ED763B97592B20(L_6, NULL);
		V_0 = L_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = V_0;
		V_4 = L_8;
		V_5 = 0;
		goto IL_003a;
	}

IL_0024:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = V_4;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = ___result1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_6;
		NullCheck(L_13);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_13, L_14, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		int32_t L_15 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003a:
	{
		int32_t L_16 = V_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_17 = V_4;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0047:
	{
		int32_t L_19 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = V_1;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = V_0;
		NullCheck(L_21);
		if ((((RuntimeArray*)L_21)->max_length))
		{
			goto IL_0054;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = ___result1;
		G_B9_0 = L_22;
		goto IL_005b;
	}

IL_0054:
	{
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_23 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = ___result1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25;
		L_25 = ChildrenSearch_GetLineage_mDFB0C5A8108F23E26F60A4105E7C8E6113E8C434(L_23, L_24, NULL);
		G_B9_0 = L_25;
	}

IL_005b:
	{
		V_7 = G_B9_0;
		goto IL_005f;
	}

IL_005f:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = V_7;
		return L_26;
	}
}
// System.Void XGI.Tools.ChildrenSearch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildrenSearch__ctor_m0B8E4367B31192EFD2D2A950B48A99BA5A7B9BF7 (ChildrenSearch_t51830C6E58AE549AE7471925DCCF70BC1A81AEE9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single XGI.Tools.Lerper::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Lerper_get_progress_mD3500D2805C2AA0755ED6CBC129A51AC6CA33900 (Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___fac_5;
		return ((float)il2cpp_codegen_multiply(L_0, (100.0f)));
	}
}
// System.Void XGI.Tools.Lerper::MoveObject(UnityEngine.Transform,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lerper_MoveObject_mE353E700959ABC45091CBEEEA900B0DA53C4A381 (Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___moveToPosition0, float ___Movementspeed1, bool ___destroyGameObjectAfterLerping2, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___from_7 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___moveToPosition0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___to_8 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		__this->___fromRotation_9 = L_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___moveToPosition0;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		__this->___toRotation_10 = L_7;
		float L_8 = ___Movementspeed1;
		__this->___speed_6 = L_8;
		__this->___fac_5 = (0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___from_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___to_8;
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_9, L_10, NULL);
		__this->___totalDist_4 = L_11;
		bool L_12 = ___destroyGameObjectAfterLerping2;
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker1< RuntimeObject*, bool >::Invoke(5 /* System.Collections.IEnumerator XGI.Tools.Lerper::Mover(System.Boolean) */, __this, L_12);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
		return;
	}
}
// System.Collections.IEnumerator XGI.Tools.Lerper::Mover(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Lerper_Mover_m449BAD366998BAA4640523E44F74F5FC42837E32 (Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* __this, bool ___destroyGameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* L_0 = (U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008*)il2cpp_codegen_object_new(U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoverU3Ed__10__ctor_mEFF449AAEF0F770B4E4530C924EC3A394FAD1638(L_0, 0, NULL);
		U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* L_2 = L_1;
		bool L_3 = ___destroyGameObject0;
		NullCheck(L_2);
		L_2->___destroyGameObject_2 = L_3;
		return L_2;
	}
}
// System.Void XGI.Tools.Lerper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lerper__ctor_m2A0C6C8E237D129D89C19C9E99E0A1FB1706306E (Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void XGI.Tools.Lerper/<Mover>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoverU3Ed__10__ctor_mEFF449AAEF0F770B4E4530C924EC3A394FAD1638 (U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void XGI.Tools.Lerper/<Mover>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoverU3Ed__10_System_IDisposable_Dispose_m3645E1FFBE28858663584D95D2FC7E3EC02A54A5 (U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean XGI.Tools.Lerper/<Mover>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoverU3Ed__10_MoveNext_m0DA0AB889F5DD1FC2DAD71039492B71CDBB35A62 (U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
		goto IL_00eb;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00f3;
	}

IL_0028:
	{
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_4 = __this->___U3CU3E4__this_3;
		NullCheck(L_4);
		float L_5 = L_4->___speed_6;
		__this->___U3CdistU3E5__1_4 = ((float)il2cpp_codegen_multiply(L_3, L_5));
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_6 = __this->___U3CU3E4__this_3;
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_7 = __this->___U3CU3E4__this_3;
		NullCheck(L_7);
		float L_8 = L_7->___fac_5;
		float L_9 = __this->___U3CdistU3E5__1_4;
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_10 = __this->___U3CU3E4__this_3;
		NullCheck(L_10);
		float L_11 = L_10->___totalDist_4;
		NullCheck(L_6);
		L_6->___fac_5 = ((float)il2cpp_codegen_add(L_8, ((float)(L_9/L_11))));
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_12 = __this->___U3CU3E4__this_3;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_14 = __this->___U3CU3E4__this_3;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___from_7;
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_16 = __this->___U3CU3E4__this_3;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___to_8;
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_18 = __this->___U3CU3E4__this_3;
		NullCheck(L_18);
		float L_19 = L_18->___fac_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_15, L_17, L_19, NULL);
		NullCheck(L_13);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_20, NULL);
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_21 = __this->___U3CU3E4__this_3;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_21, NULL);
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_23 = __this->___U3CU3E4__this_3;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = L_23->___fromRotation_9;
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_25 = __this->___U3CU3E4__this_3;
		NullCheck(L_25);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = L_25->___toRotation_10;
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_27 = __this->___U3CU3E4__this_3;
		NullCheck(L_27);
		float L_28 = L_27->___fac_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_24, L_26, L_28, NULL);
		NullCheck(L_22);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_22, L_29, NULL);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_30 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_30, NULL);
		__this->___U3CU3E2__current_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_30);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00eb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f3:
	{
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_31 = __this->___U3CU3E4__this_3;
		NullCheck(L_31);
		float L_32 = L_31->___fac_5;
		V_1 = (bool)((((float)L_32) < ((float)(1.0f)))? 1 : 0);
		bool L_33 = V_1;
		if (L_33)
		{
			goto IL_0028;
		}
	}
	{
		bool L_34 = __this->___destroyGameObject_2;
		V_2 = L_34;
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0129;
		}
	}
	{
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_36 = __this->___U3CU3E4__this_3;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_37, NULL);
		goto IL_0135;
	}

IL_0129:
	{
		Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* L_38 = __this->___U3CU3E4__this_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_38, NULL);
	}

IL_0135:
	{
		return (bool)0;
	}
}
// System.Object XGI.Tools.Lerper/<Mover>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoverU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2182A84DF9555F94DCFE123084CE2184C366FDE0 (U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void XGI.Tools.Lerper/<Mover>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoverU3Ed__10_System_Collections_IEnumerator_Reset_m57B5F0D19A279E466E6486A8D9CCD2CF6F7BCCA7 (U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoverU3Ed__10_System_Collections_IEnumerator_Reset_m57B5F0D19A279E466E6486A8D9CCD2CF6F7BCCA7_RuntimeMethod_var)));
	}
}
// System.Object XGI.Tools.Lerper/<Mover>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoverU3Ed__10_System_Collections_IEnumerator_get_Current_m75DDA695D9464CA16172C93A3F9D1835ABF275C5 (U3CMoverU3Ed__10_tF7892B0E7F1CC61DE84BEDED19690A301D07F008* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void XGI.Tools.Tweener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_OnEnable_m03E9F8CB3F647E6CC614E95A651EF250CFC7C472 (Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m976C8957137C66B335A324FF0D621B3117B9F1D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* L_0 = (List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139*)il2cpp_codegen_object_new(List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m976C8957137C66B335A324FF0D621B3117B9F1D1(L_0, List_1__ctor_m976C8957137C66B335A324FF0D621B3117B9F1D1_RuntimeMethod_var);
		__this->___onDestroyMethods_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___onDestroyMethods_12), (void*)L_0);
		return;
	}
}
// System.Void XGI.Tools.Tweener::MoveObject(UnityEngine.Transform,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_MoveObject_m8CC374E4DAC4DC6AC5F42A8EEDFBF23FC9F0E54F (Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___moveToPosition0, float ___Movementspeed1, bool ___destroyGameObjectAfterLerping2, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7FC4117BC0D1401052B035D5FDA369FC18998A75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tweener_MoveObject_m8CC374E4DAC4DC6AC5F42A8EEDFBF23FC9F0E54F_RuntimeMethod_var)));
	}
}
// System.Void XGI.Tools.Tweener::MoveObject(UnityEngine.RectTransform,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_MoveObject_mCBA1C074A59DFA23BF1584597D9D508857B3706B (Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___moveToPosition0, float ___timeTaken1, bool ___destroyGameObjectAfterTweening2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)__this)->___from_7 = L_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ___moveToPosition0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_2, NULL);
		((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)__this)->___to_8 = L_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_4, NULL);
		((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)__this)->___fromRotation_9 = L_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ___moveToPosition0;
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_6, NULL);
		((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)__this)->___toRotation_10 = L_7;
		float L_8 = ___timeTaken1;
		__this->___time_11 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)__this)->___from_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)__this)->___to_8;
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_9, L_10, NULL);
		((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)__this)->___totalDist_4 = L_11;
		((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)__this)->___fac_5 = (0.0f);
		bool L_12 = ___destroyGameObjectAfterTweening2;
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker1< RuntimeObject*, bool >::Invoke(5 /* System.Collections.IEnumerator XGI.Tools.Lerper::Mover(System.Boolean) */, __this, L_12);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
		return;
	}
}
// System.Collections.IEnumerator XGI.Tools.Tweener::Mover(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Tweener_Mover_m73479F94061D68324BA90190C954CE9916713078 (Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* __this, bool ___destroyGameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* L_0 = (U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8*)il2cpp_codegen_object_new(U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoverU3Ed__5__ctor_m4E9BA7932786070A7B1FEFA003CD1BCF5F0ED025(L_0, 0, NULL);
		U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* L_2 = L_1;
		bool L_3 = ___destroyGameObject0;
		NullCheck(L_2);
		L_2->___destroyGameObject_2 = L_3;
		return L_2;
	}
}
// System.Void XGI.Tools.Tweener::ExecuteWhileDestruction(XGI.Tools.MethodHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_ExecuteWhileDestruction_m55C9AAA0B5471F44B4BDDA124AC17A2B302EA2ED (Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* __this, MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* ___method0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4885A6BF41FB58F54DDD6BC8602C9A63C7EAA3D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* L_0 = __this->___onDestroyMethods_12;
		MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* L_1 = ___method0;
		NullCheck(L_0);
		List_1_Add_m4885A6BF41FB58F54DDD6BC8602C9A63C7EAA3D2_inline(L_0, L_1, List_1_Add_m4885A6BF41FB58F54DDD6BC8602C9A63C7EAA3D2_RuntimeMethod_var);
		return;
	}
}
// System.Void XGI.Tools.Tweener::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_OnDestroy_mBB0A4EBC36BB921FEA1FE35C4AF27155387E16FD (Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0350F26C572E743C85C202AA68C07339552DD4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mD1B37AD70B390DAD40B9DA5E3C62E8846C02EB6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD22213B583E5ADA1F965EB6C5C7CF2B6BAB2C62A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4D192EC9F1C9D9ED8C38D9A5C43792BA4110B67F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAA2322FB3645017721CFB66B7C27BDBD06161406 V_0;
	memset((&V_0), 0, sizeof(V_0));
	MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* V_1 = NULL;
	{
		List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* L_0 = __this->___onDestroyMethods_12;
		NullCheck(L_0);
		Enumerator_tAA2322FB3645017721CFB66B7C27BDBD06161406 L_1;
		L_1 = List_1_GetEnumerator_m4D192EC9F1C9D9ED8C38D9A5C43792BA4110B67F(L_0, List_1_GetEnumerator_m4D192EC9F1C9D9ED8C38D9A5C43792BA4110B67F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0350F26C572E743C85C202AA68C07339552DD4D3((&V_0), Enumerator_Dispose_m0350F26C572E743C85C202AA68C07339552DD4D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_0010_1:
			{
				MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* L_2;
				L_2 = Enumerator_get_Current_mD22213B583E5ADA1F965EB6C5C7CF2B6BAB2C62A_inline((&V_0), Enumerator_get_Current_mD22213B583E5ADA1F965EB6C5C7CF2B6BAB2C62A_RuntimeMethod_var);
				V_1 = L_2;
				MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* L_3 = V_1;
				NullCheck(L_3);
				RuntimeObject* L_4;
				L_4 = MethodHandler_Execute_mAFF979CE7349DCD404C0EA6DA5CE0997BA68E984(L_3, NULL);
			}

IL_001f_1:
			{
				bool L_5;
				L_5 = Enumerator_MoveNext_mD1B37AD70B390DAD40B9DA5E3C62E8846C02EB6B((&V_0), Enumerator_MoveNext_mD1B37AD70B390DAD40B9DA5E3C62E8846C02EB6B_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
// System.Void XGI.Tools.Tweener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener__ctor_mF51EE12356BB6F0D7328197D2B85E26F86572AD0 (Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* __this, const RuntimeMethod* method) 
{
	{
		Lerper__ctor_m2A0C6C8E237D129D89C19C9E99E0A1FB1706306E(__this, NULL);
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
// System.Void XGI.Tools.Tweener/<Mover>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoverU3Ed__5__ctor_m4E9BA7932786070A7B1FEFA003CD1BCF5F0ED025 (U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void XGI.Tools.Tweener/<Mover>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoverU3Ed__5_System_IDisposable_Dispose_mD0399DA75BAC4FFDB5908470442923A92290C2A5 (U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean XGI.Tools.Tweener/<Mover>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoverU3Ed__5_MoveNext_mFD249C98EBA7C5A667AA97DF3E4AC21B6C4B2DFE (U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
		goto IL_00e9;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		float L_3;
		L_3 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		__this->___U3CoriginalTimeScaleU3E5__1_4 = L_3;
		goto IL_00f1;
	}

IL_0033:
	{
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_4 = __this->___U3CU3E4__this_3;
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_5);
		float L_6 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_5)->___fac_5;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_8);
		float L_9 = L_8->___time_11;
		NullCheck(L_4);
		((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_4)->___fac_5 = ((float)il2cpp_codegen_add(L_6, ((float)(L_7/L_9))));
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_10 = __this->___U3CU3E4__this_3;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_12 = __this->___U3CU3E4__this_3;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_12)->___from_7;
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_14 = __this->___U3CU3E4__this_3;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_14)->___to_8;
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_16 = __this->___U3CU3E4__this_3;
		NullCheck(L_16);
		float L_17 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_16)->___fac_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_13, L_15, L_17, NULL);
		NullCheck(L_11);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_18, NULL);
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_19 = __this->___U3CU3E4__this_3;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_21 = __this->___U3CU3E4__this_3;
		NullCheck(L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_21)->___fromRotation_9;
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_23 = __this->___U3CU3E4__this_3;
		NullCheck(L_23);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_23)->___toRotation_10;
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_25 = __this->___U3CU3E4__this_3;
		NullCheck(L_25);
		float L_26 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_25)->___fac_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_Lerp_m7BE5A2D8FA33A15A5145B2F5261707CA17C3E792(L_22, L_24, L_26, NULL);
		NullCheck(L_20);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_20, L_27, NULL);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_28 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_28, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00e9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f1:
	{
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_29 = __this->___U3CU3E4__this_3;
		NullCheck(L_29);
		float L_30 = ((Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242*)L_29)->___fac_5;
		V_1 = (bool)((((float)L_30) < ((float)(1.0f)))? 1 : 0);
		bool L_31 = V_1;
		if (L_31)
		{
			goto IL_0033;
		}
	}
	{
		float L_32 = __this->___U3CoriginalTimeScaleU3E5__1_4;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C(L_32, NULL);
		bool L_33 = __this->___destroyGameObject_2;
		V_2 = L_33;
		bool L_34 = V_2;
		if (!L_34)
		{
			goto IL_0133;
		}
	}
	{
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_35 = __this->___U3CU3E4__this_3;
		NullCheck(L_35);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_36, NULL);
		goto IL_013f;
	}

IL_0133:
	{
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_37 = __this->___U3CU3E4__this_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_37, NULL);
	}

IL_013f:
	{
		return (bool)0;
	}
}
// System.Object XGI.Tools.Tweener/<Mover>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoverU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0C3BB828B22149698358EE7D216CD2005496A564 (U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void XGI.Tools.Tweener/<Mover>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoverU3Ed__5_System_Collections_IEnumerator_Reset_m3E54AA1CF6C30D0FAB6DA385FC64C4C0DC47F54B (U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoverU3Ed__5_System_Collections_IEnumerator_Reset_m3E54AA1CF6C30D0FAB6DA385FC64C4C0DC47F54B_RuntimeMethod_var)));
	}
}
// System.Object XGI.Tools.Tweener/<Mover>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoverU3Ed__5_System_Collections_IEnumerator_get_Current_mECE3594DB80862802BE0FFD7E91B28D43047F84A (U3CMoverU3Ed__5_t0FA5175D84D44A1F3C960A01698D6795520DDEC8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
