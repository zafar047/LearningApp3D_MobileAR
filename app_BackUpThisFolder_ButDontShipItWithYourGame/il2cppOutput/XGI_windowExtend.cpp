#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7;
// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character>
struct Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>
struct List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<XGI.Tools.MethodHandler>
struct List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<TMPro.TMP_Character>
struct List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_tAB7976FADCF872E418770E60783056C23394843D;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>
struct List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// XGI.Tools.Window.ButtonFunction[]
struct ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_FontWeightPair[]
struct TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Events.UnityAction[]
struct UnityActionU5BU5D_tC838FF7328261C2396AA15640067667EDB436D07;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// XGI.Tools.Window.ButtonFunction
struct ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// TMPro.FaceInfo_Legacy
struct FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// TMPro.KerningTable
struct KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// XGI.Tools.Lerper
struct Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// XGI.Tools.MethodHandler
struct MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// XGI.Tools.Window.PopupWindow
struct PopupWindow_t33A1224A481AFB89E1A29FCB2B684609CCD64339;
// XGI.Tools.Window.PopupWindowElements
struct PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3;
// XGI.Tools.Window.QuickMessage
struct QuickMessage_tF4C09899C4D903BACF3D6B8A9EF256F5B426AC37;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// XGI.Tools.Window.StoredWindow
struct StoredWindow_tBC2B9B595E4E965C3C257FE284E6ADAA732C6CF0;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_FontFeatureTable
struct TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// XGI.Tools.Tweener
struct Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// XGI.Tools.Window.Window
struct Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2;
// XGI.Tools.Window.WindowComponent
struct WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3;
// XGI.Tools.Window.WindowElements
struct WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB;
// XGI.Tools.Window.WindowFramework
struct WindowFramework_t33B12F17A90584957F5950F2A4915328B0FA7CE1;
// XGI.Tools.Window.WindowUISettings
struct WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// XGI.Tools.Window.QuickMessage/Fade
struct Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A737630358B169A409446D61FA0D512C791AEF9;
IL2CPP_EXTERN_C String_t* _stringLiteral0BD68E8BD8B35730D0511106DE2D51BBD8604ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral0F81BDC54B392754B2C39400F2D5F95681A3AD3C;
IL2CPP_EXTERN_C String_t* _stringLiteral16D352682667F810905C4E94B6C152878C3DBC0C;
IL2CPP_EXTERN_C String_t* _stringLiteral25D5DEE42365A4E54C94613D42EC7ADDC1CA30C3;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6434998DD581B3ECA8B0B55F942233BC50970C;
IL2CPP_EXTERN_C String_t* _stringLiteral2BAE1EC4AD1D2DAA7FBBE5C17BB3EC9CC7AB734A;
IL2CPP_EXTERN_C String_t* _stringLiteral3DC7CD55F51395A3349FF281583DC3AA10CDE42B;
IL2CPP_EXTERN_C String_t* _stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral4FD8B6AA957ABFFB0C628043A8420911C492AB31;
IL2CPP_EXTERN_C String_t* _stringLiteral600C06A078F22CE3FD319C8BEEDA1771BCC58343;
IL2CPP_EXTERN_C String_t* _stringLiteral696503371F599A19297E2701AB163FB5A863D770;
IL2CPP_EXTERN_C String_t* _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2;
IL2CPP_EXTERN_C String_t* _stringLiteral6EF6C28C2BE22DF2B9B8B974045D0F1459B0165D;
IL2CPP_EXTERN_C String_t* _stringLiteral713ECFE36FABF867410C9F1708B7154EB0FE625B;
IL2CPP_EXTERN_C String_t* _stringLiteral743854B26ADD37F296D1FB2270120E077E18AE4B;
IL2CPP_EXTERN_C String_t* _stringLiteral7665FFEE4D3635C4F054CB0A5C6AB285D597DB32;
IL2CPP_EXTERN_C String_t* _stringLiteral7C2EC8C158471BED5BEEE63A822A771F3DBCFD5A;
IL2CPP_EXTERN_C String_t* _stringLiteral7D9C9904356EE8D789F9327CCAF411965F3BE5D0;
IL2CPP_EXTERN_C String_t* _stringLiteral805FA7014F0DDE751CDBD5BF050D214DCDD12F9D;
IL2CPP_EXTERN_C String_t* _stringLiteral8066C8112B197C451035C3E5C75FE54A544E4241;
IL2CPP_EXTERN_C String_t* _stringLiteral815FB4EC8DBAA3CFA4A430E04AD05A9DF331BCA4;
IL2CPP_EXTERN_C String_t* _stringLiteral826F0716DFACBC479DCB3A3F1E7C0ED4969C30A4;
IL2CPP_EXTERN_C String_t* _stringLiteral83D120B58AC7EF27EE53BC606F6DD6E7D4F60B14;
IL2CPP_EXTERN_C String_t* _stringLiteral9100B909CEDFDC6FB9B68A3FD96A1267D4E29FD8;
IL2CPP_EXTERN_C String_t* _stringLiteral95E5A4A776B882060F9E3A65A1BFF381E3792392;
IL2CPP_EXTERN_C String_t* _stringLiteral9A65F6C007C89C49FEF7CE3D161BAB3590791086;
IL2CPP_EXTERN_C String_t* _stringLiteral9B850A03952CDBCC170C393B2A85CCA5764E310C;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3B13294BED7305BEA01AD5AF7750BC0F6BADEA;
IL2CPP_EXTERN_C String_t* _stringLiteralB39581B4BFB6C377585CFC83CDDD72D787EB66DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB98CDE33B8279237E0FC8D6D7595CB82513DD74E;
IL2CPP_EXTERN_C String_t* _stringLiteralC05E2D8F4317104221FCCB874FE9304B7707B78C;
IL2CPP_EXTERN_C String_t* _stringLiteralC1932796827E66812A4DC6BF679D3DD86CC8BF6A;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC63AB5C11A6F0F85F6DCF562FB3628463FEE0A35;
IL2CPP_EXTERN_C String_t* _stringLiteralD047008F87744607AA71443858368A606C9E53D9;
IL2CPP_EXTERN_C String_t* _stringLiteralD1C2210F180485D697F36ED09FDD2087EF51B567;
IL2CPP_EXTERN_C String_t* _stringLiteralDB8DC4A00AFE724ABFD4C76982AE75E2A85484B3;
IL2CPP_EXTERN_C String_t* _stringLiteralE424DB88BB68CE3F25E2CAC678D8A16F0AC84A9C;
IL2CPP_EXTERN_C String_t* _stringLiteralEF13B91A34DC34D81CCE5F52AA23C7DCC32485F9;
IL2CPP_EXTERN_C String_t* _stringLiteralF8EDD06E84130B42F355B87DE58F26A592E5360D;
IL2CPP_EXTERN_C String_t* _stringLiteralFD537C2C52ACF19A6F84CDB21CE5B92A4DAD97C2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D356B9598E01269355CD99BF7456DF93C92021D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m3C3BEB8F6F87774780673D93C09B6C98DDE012CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m832550EB06675512EAA6B8FD39613960E3BF1AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A_mCDEC872B187D272DCA882A33410A0F8DFB727E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTweener_t556CEE9763180C08CC1C4795B2A9B136442465FE_m25D77036CE5D995C6D3C39BA69A8D9EE1BA22348_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m323BA24FD0DE9D93F9DA4067FA613B338AABC76B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC8BA81AC225D1EF76BB995545FC216745F3CDA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1FB770381C3A129AD86880AAA4F631C28565CC93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m2D462D10E962BFF0204033EEFA9A68F3D1635120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StoredWindow__ctor_mFC126E1ED82BE5130CB28873A08A9FEE71D142C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowComponent_CloseWindow_mF63659E4DD61CF6F73D384217392CC2B362D5ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D;
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
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
struct U3CModuleU3E_tA1E83638B17CBDA9764C35F5956E4B0616A0AA82 
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

// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>
struct List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UnityActionU5BU5D_tC838FF7328261C2396AA15640067667EDB436D07* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UnityActionU5BU5D_tC838FF7328261C2396AA15640067667EDB436D07* ___s_emptyArray_5;
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

// XGI.Tools.Window.ButtonFunction
struct ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C  : public RuntimeObject
{
	// System.String XGI.Tools.Window.ButtonFunction::label
	String_t* ___label_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.UnityAction> XGI.Tools.Window.ButtonFunction::actions
	List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* ___actions_1;
	// UnityEngine.UI.Button XGI.Tools.Window.ButtonFunction::selfReference
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___selfReference_2;
	// XGI.Tools.MethodHandler XGI.Tools.Window.ButtonFunction::buttonFunctionalityCache
	MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* ___buttonFunctionalityCache_3;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// XGI.Tools.Window.WindowElements
struct WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB  : public RuntimeObject
{
	// System.String XGI.Tools.Window.WindowElements::title
	String_t* ___title_0;
	// XGI.Tools.Window.ButtonFunction[] XGI.Tools.Window.WindowElements::buttons
	ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* ___buttons_1;
};

// XGI.Tools.Window.WindowFramework
struct WindowFramework_t33B12F17A90584957F5950F2A4915328B0FA7CE1  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction>
struct Enumerator_t18D8112B808B9A8B656204C5B03B14FDA5747AE0 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 
{
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_FaceIndex
	int32_t ___m_FaceIndex_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_1;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_2;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_4;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_18;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke
{
	int32_t ___m_FaceIndex_0;
	char* ___m_FamilyName_1;
	char* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com
{
	int32_t ___m_FaceIndex_0;
	Il2CppChar* ___m_FamilyName_1;
	Il2CppChar* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};

// TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF 
{
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileName
	String_t* ___sourceFontFileName_0;
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileGUID
	String_t* ___sourceFontFileGUID_1;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSizeSamplingMode
	int32_t ___pointSizeSamplingMode_2;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSize
	int32_t ___pointSize_3;
	// System.Int32 TMPro.FontAssetCreationSettings::padding
	int32_t ___padding_4;
	// System.Int32 TMPro.FontAssetCreationSettings::packingMode
	int32_t ___packingMode_5;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasWidth
	int32_t ___atlasWidth_6;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasHeight
	int32_t ___atlasHeight_7;
	// System.Int32 TMPro.FontAssetCreationSettings::characterSetSelectionMode
	int32_t ___characterSetSelectionMode_8;
	// System.String TMPro.FontAssetCreationSettings::characterSequence
	String_t* ___characterSequence_9;
	// System.String TMPro.FontAssetCreationSettings::referencedFontAssetGUID
	String_t* ___referencedFontAssetGUID_10;
	// System.String TMPro.FontAssetCreationSettings::referencedTextAssetGUID
	String_t* ___referencedTextAssetGUID_11;
	// System.Int32 TMPro.FontAssetCreationSettings::fontStyle
	int32_t ___fontStyle_12;
	// System.Single TMPro.FontAssetCreationSettings::fontStyleModifier
	float ___fontStyleModifier_13;
	// System.Int32 TMPro.FontAssetCreationSettings::renderMode
	int32_t ___renderMode_14;
	// System.Boolean TMPro.FontAssetCreationSettings::includeFontFeatures
	bool ___includeFontFeatures_15;
};
// Native definition for P/Invoke marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_pinvoke
{
	char* ___sourceFontFileName_0;
	char* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	char* ___characterSequence_9;
	char* ___referencedFontAssetGUID_10;
	char* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};
// Native definition for COM marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_com
{
	Il2CppChar* ___sourceFontFileName_0;
	Il2CppChar* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	Il2CppChar* ___characterSequence_9;
	Il2CppChar* ___referencedFontAssetGUID_10;
	Il2CppChar* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// XGI.Tools.Window.PopupWindowElements
struct PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3  : public WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB
{
	// System.String XGI.Tools.Window.PopupWindowElements::message
	String_t* ___message_2;
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

// XGI.Tools.Window.QuickMessage
struct QuickMessage_tF4C09899C4D903BACF3D6B8A9EF256F5B426AC37  : public WindowFramework_t33B12F17A90584957F5950F2A4915328B0FA7CE1
{
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// XGI.Tools.Window.Window
struct Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2  : public WindowFramework_t33B12F17A90584957F5950F2A4915328B0FA7CE1
{
	// UnityEngine.GameObject XGI.Tools.Window.Window::myWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___myWindow_0;
	// XGI.Tools.Window.WindowComponent XGI.Tools.Window.Window::myWindowComponent
	WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* ___myWindowComponent_1;
	// XGI.Tools.Window.ButtonFunction[] XGI.Tools.Window.Window::ButtonFunctions
	ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* ___ButtonFunctions_2;
	// XGI.Tools.Window.WindowUISettings XGI.Tools.Window.Window::settings
	WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* ___settings_3;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// XGI.Tools.Window.PopupWindow
struct PopupWindow_t33A1224A481AFB89E1A29FCB2B684609CCD64339  : public Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2
{
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// XGI.Tools.Window.StoredWindow
struct StoredWindow_tBC2B9B595E4E965C3C257FE284E6ADAA732C6CF0  : public Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2
{
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// TMPro.TMP_Asset
struct TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 TMPro.TMP_Asset::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_5;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// XGI.Tools.Window.WindowStorage
struct WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String[] XGI.Tools.Window.WindowStorage::windowNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___windowNames_4;
};

// XGI.Tools.Window.WindowUISettings
struct WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 XGI.Tools.Window.WindowUISettings::orientationState
	int32_t ___orientationState_4;
	// System.Single XGI.Tools.Window.WindowUISettings::scaleMajorAxis
	float ___scaleMajorAxis_5;
	// System.Single XGI.Tools.Window.WindowUISettings::scaleMinorAxis
	float ___scaleMinorAxis_6;
	// System.Single XGI.Tools.Window.WindowUISettings::titleBarSize
	float ___titleBarSize_7;
	// UnityEngine.Sprite XGI.Tools.Window.WindowUISettings::primarySourceImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___primarySourceImage_8;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::primaryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___primaryColor_9;
	// UnityEngine.Material XGI.Tools.Window.WindowUISettings::primaryMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___primaryMaterial_10;
	// UnityEngine.UI.Image/Type XGI.Tools.Window.WindowUISettings::primaryType
	int32_t ___primaryType_11;
	// TMPro.TMP_FontAsset XGI.Tools.Window.WindowUISettings::primaryFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___primaryFontAsset_12;
	// TMPro.FontStyles XGI.Tools.Window.WindowUISettings::primaryFontStyle
	int32_t ___primaryFontStyle_13;
	// System.Single XGI.Tools.Window.WindowUISettings::primaryFontSize
	float ___primaryFontSize_14;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::primaryTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___primaryTextColor_15;
	// TMPro.TextAlignmentOptions XGI.Tools.Window.WindowUISettings::primaryTextAlignmentOptions
	int32_t ___primaryTextAlignmentOptions_16;
	// UnityEngine.Sprite XGI.Tools.Window.WindowUISettings::secondarySourceImage
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___secondarySourceImage_17;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::secondaryColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___secondaryColor_18;
	// UnityEngine.Material XGI.Tools.Window.WindowUISettings::secondaryMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___secondaryMaterial_19;
	// UnityEngine.UI.Image/Type XGI.Tools.Window.WindowUISettings::secondaryType
	int32_t ___secondaryType_20;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::backgroundHindererColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundHindererColor_21;
	// TMPro.TMP_FontAsset XGI.Tools.Window.WindowUISettings::secondaryFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___secondaryFontAsset_22;
	// TMPro.FontStyles XGI.Tools.Window.WindowUISettings::secondaryFontStyle
	int32_t ___secondaryFontStyle_23;
	// System.Single XGI.Tools.Window.WindowUISettings::secondaryFontSize
	float ___secondaryFontSize_24;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::secondaryTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___secondaryTextColor_25;
	// TMPro.TextAlignmentOptions XGI.Tools.Window.WindowUISettings::secondaryTextAlignmentOptions
	int32_t ___secondaryTextAlignmentOptions_26;
	// System.Int32 XGI.Tools.Window.WindowUISettings::buttonType
	int32_t ___buttonType_27;
	// UnityEngine.UI.Image/Type XGI.Tools.Window.WindowUISettings::buttonImageType
	int32_t ___buttonImageType_28;
	// UnityEngine.TextAnchor XGI.Tools.Window.WindowUISettings::buttonAlignment
	int32_t ___buttonAlignment_29;
	// System.Single XGI.Tools.Window.WindowUISettings::buttonSpacing
	float ___buttonSpacing_30;
	// System.Single XGI.Tools.Window.WindowUISettings::buttonLength
	float ___buttonLength_31;
	// System.Single XGI.Tools.Window.WindowUISettings::buttonHeight
	float ___buttonHeight_32;
	// UnityEngine.Sprite XGI.Tools.Window.WindowUISettings::buttonNormalSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___buttonNormalSprite_33;
	// UnityEngine.Sprite XGI.Tools.Window.WindowUISettings::buttonHighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___buttonHighlightedSprite_34;
	// UnityEngine.Sprite XGI.Tools.Window.WindowUISettings::buttonPressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___buttonPressedSprite_35;
	// UnityEngine.Sprite XGI.Tools.Window.WindowUISettings::buttonSelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___buttonSelectedSprite_36;
	// UnityEngine.Sprite XGI.Tools.Window.WindowUISettings::buttonDisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___buttonDisabledSprite_37;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::buttonNormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonNormalColor_38;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::buttonHighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonHighlightedColor_39;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::buttonPressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonPressedColor_40;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::buttonSelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonSelectedColor_41;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::buttonDisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonDisabledColor_42;
	// System.Single XGI.Tools.Window.WindowUISettings::buttonFadeDuration
	float ___buttonFadeDuration_43;
	// TMPro.TMP_FontAsset XGI.Tools.Window.WindowUISettings::buttonFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___buttonFontAsset_44;
	// TMPro.FontStyles XGI.Tools.Window.WindowUISettings::buttonFontStyle
	int32_t ___buttonFontStyle_45;
	// System.Single XGI.Tools.Window.WindowUISettings::buttonFontSize
	float ___buttonFontSize_46;
	// UnityEngine.Color XGI.Tools.Window.WindowUISettings::buttonTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonTextColor_47;
	// TMPro.TextAlignmentOptions XGI.Tools.Window.WindowUISettings::buttonTextAlignmentOptions
	int32_t ___buttonTextAlignmentOptions_48;
	// System.Int32 XGI.Tools.Window.WindowUISettings::primaryFontStyleIndex
	int32_t ___primaryFontStyleIndex_49;
	// System.Int32 XGI.Tools.Window.WindowUISettings::secondaryFontStyleIndex
	int32_t ___secondaryFontStyleIndex_50;
	// System.Int32 XGI.Tools.Window.WindowUISettings::buttonFontStyleIndex
	int32_t ___buttonFontStyleIndex_51;
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
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

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160  : public TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969
{
	// System.String TMPro.TMP_FontAsset::m_Version
	String_t* ___m_Version_8;
	// System.String TMPro.TMP_FontAsset::m_SourceFontFileGUID
	String_t* ___m_SourceFontFileGUID_9;
	// UnityEngine.Font TMPro.TMP_FontAsset::m_SourceFontFile
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_SourceFontFile_10;
	// TMPro.AtlasPopulationMode TMPro.TMP_FontAsset::m_AtlasPopulationMode
	int32_t ___m_AtlasPopulationMode_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::m_FaceInfo
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 ___m_FaceInfo_12;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphTable
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphTable_13;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphLookupDictionary
	Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* ___m_GlyphLookupDictionary_14;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterTable
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharacterTable_15;
	// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterLookupDictionary
	Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0* ___m_CharacterLookupDictionary_16;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::m_AtlasTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_AtlasTexture_17;
	// UnityEngine.Texture2D[] TMPro.TMP_FontAsset::m_AtlasTextures
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___m_AtlasTextures_18;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasTextureIndex
	int32_t ___m_AtlasTextureIndex_19;
	// System.Boolean TMPro.TMP_FontAsset::m_IsMultiAtlasTexturesEnabled
	bool ___m_IsMultiAtlasTexturesEnabled_20;
	// System.Boolean TMPro.TMP_FontAsset::m_ClearDynamicDataOnBuild
	bool ___m_ClearDynamicDataOnBuild_21;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_UsedGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_UsedGlyphRects_22;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_FreeGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_FreeGlyphRects_23;
	// TMPro.FaceInfo_Legacy TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8* ___m_fontInfo_24;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___atlas_25;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasWidth
	int32_t ___m_AtlasWidth_26;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasHeight
	int32_t ___m_AtlasHeight_27;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasPadding
	int32_t ___m_AtlasPadding_28;
	// UnityEngine.TextCore.LowLevel.GlyphRenderMode TMPro.TMP_FontAsset::m_AtlasRenderMode
	int32_t ___m_AtlasRenderMode_29;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_tAB7976FADCF872E418770E60783056C23394843D* ___m_glyphInfoList_30;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_KerningTable
	KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B* ___m_KerningTable_31;
	// TMPro.TMP_FontFeatureTable TMPro.TMP_FontAsset::m_FontFeatureTable
	TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA* ___m_FontFeatureTable_32;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___fallbackFontAssets_33;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::m_FallbackFontAssetTable
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___m_FallbackFontAssetTable_34;
	// TMPro.FontAssetCreationSettings TMPro.TMP_FontAsset::m_CreationSettings
	FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF ___m_CreationSettings_35;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::m_FontWeightTable
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___m_FontWeightTable_36;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___fontWeights_37;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_38;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_39;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_40;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_41;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_42;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_43;
	// System.Boolean TMPro.TMP_FontAsset::IsFontAssetLookupTablesDirty
	bool ___IsFontAssetLookupTablesDirty_44;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::FallbackSearchQueryLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___FallbackSearchQueryLookup_53;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToRender
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsToRender_59;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsRendered
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsRendered_60;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexList_61;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexListNewlyAdded
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexListNewlyAdded_62;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAdd
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphsToAdd_63;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_GlyphsToAddLookup_64;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharactersToAdd
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharactersToAdd_65;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_CharactersToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_CharactersToAddLookup_66;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_MissingCharacterList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___s_MissingCharacterList_67;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_MissingUnicodesFromFontFile
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_MissingUnicodesFromFontFile_68;
};

struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ReadFontAssetDefinitionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ReadFontAssetDefinitionMarker_45;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_AddSynthesizedCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_AddSynthesizedCharactersMarker_46;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharacterMarker_47;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharactersMarker_48;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateGlyphAdjustmentRecordsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateGlyphAdjustmentRecordsMarker_49;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ClearFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ClearFontAssetDataMarker_50;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateFontAssetDataMarker_51;
	// System.String TMPro.TMP_FontAsset::s_DefaultMaterialSuffix
	String_t* ___s_DefaultMaterialSuffix_52;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_SearchedFontAssetLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_SearchedFontAssetLookup_54;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_FontFeaturesUpdateQueue_55;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_FontFeaturesUpdateQueueLookup_56;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_AtlasTexturesUpdateQueue_57;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58;
	// System.UInt32[] TMPro.TMP_FontAsset::k_GlyphIndexArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___k_GlyphIndexArray_69;
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

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// XGI.Tools.Window.WindowComponent
struct WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject XGI.Tools.Window.WindowComponent::defaultShow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___defaultShow_4;
	// UnityEngine.GameObject XGI.Tools.Window.WindowComponent::defaultHide
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___defaultHide_5;
	// System.Collections.Generic.List`1<XGI.Tools.MethodHandler> XGI.Tools.Window.WindowComponent::onDestroyMethods
	List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* ___onDestroyMethods_6;
	// System.Single XGI.Tools.Window.WindowComponent::animationDuration
	float ___animationDuration_7;
	// UnityEngine.GameObject XGI.Tools.Window.WindowComponent::canvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas_8;
	// UnityEngine.RectTransform XGI.Tools.Window.WindowComponent::showTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___showTransform_9;
	// UnityEngine.RectTransform XGI.Tools.Window.WindowComponent::hideTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___hideTransform_10;
};

// XGI.Tools.Window.QuickMessage/Fade
struct Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color XGI.Tools.Window.QuickMessage/Fade::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4;
	// TMPro.TextMeshProUGUI XGI.Tools.Window.QuickMessage/Fade::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_5;
	// XGI.Tools.Tweener XGI.Tools.Window.QuickMessage/Fade::tweener
	Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* ___tweener_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// XGI.Tools.Tweener
struct Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE  : public Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242
{
	// System.Single XGI.Tools.Tweener::time
	float ___time_11;
	// System.Collections.Generic.List`1<XGI.Tools.MethodHandler> XGI.Tools.Tweener::onDestroyMethods
	List_1_tFF350DF2EEFC7DE9D863560EC56A519772253139* ___onDestroyMethods_12;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841  : public RuntimeArray
{
	ALIGN_FIELD (8) Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* m_Items[1];

	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// XGI.Tools.Window.ButtonFunction[]
struct ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D  : public RuntimeArray
{
	ALIGN_FIELD (8) ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* m_Items[1];

	inline ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* value)
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
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m89667B72A0E16263EB3DA90AC6A9DF856367EA8C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>::.ctor()
inline void List_1__ctor_m1FB770381C3A129AD86880AAA4F631C28565CC93 (List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>::Add(T)
inline void List_1_Add_m323BA24FD0DE9D93F9DA4067FA613B338AABC76B_inline (List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Events.UnityAction>::GetEnumerator()
inline Enumerator_t18D8112B808B9A8B656204C5B03B14FDA5747AE0 List_1_GetEnumerator_mC8BA81AC225D1EF76BB995545FC216745F3CDA18 (List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* __this, const RuntimeMethod* method)
{
	Enumerator_t18D8112B808B9A8B656204C5B03B14FDA5747AE0 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction>::Dispose()
inline void Enumerator_Dispose_m7D356B9598E01269355CD99BF7456DF93C92021D (Enumerator_t18D8112B808B9A8B656204C5B03B14FDA5747AE0* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction>::get_Current()
inline UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* Enumerator_get_Current_m832550EB06675512EAA6B8FD39613960E3BF1AC5_inline (Enumerator_t18D8112B808B9A8B656204C5B03B14FDA5747AE0* __this, const RuntimeMethod* method)
{
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Events.UnityAction>::MoveNext()
inline bool Enumerator_MoveNext_m3C3BEB8F6F87774780673D93C09B6C98DDE012CC (Enumerator_t18D8112B808B9A8B656204C5B03B14FDA5747AE0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void XGI.Tools.MethodHandler::.ctor(System.Reflection.MethodInfo,System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodHandler__ctor_m5CB5F1B933731ADD25291B2D2FCF712D62D858CE (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* __this, MethodInfo_t* ___methodInformation0, RuntimeObject* ___instance1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arguments2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Canvas>()
inline CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* Object_FindObjectsOfType_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m2D462D10E962BFF0204033EEFA9A68F3D1635120 (const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.GameObject XGI.Tools.Window.WindowFramework::CreateNewCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* WindowFramework_CreateNewCanvas_mDFDE9F0973A995AB852F4D083D7104B497706A2C (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.GameObject XGI.Tools.Window.Window::CreateUIShield(UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Window_CreateUIShield_mF94877DC45F8D4374E5FBEE2459BB569F117AF69 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas0, String_t* ___windowName1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<XGI.Tools.Window.WindowComponent>()
inline WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void XGI.Tools.Window.WindowComponent::NewWindowsComponent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowComponent_NewWindowsComponent_mA1D353EA6A5CA0E3F9633D479F9526F2586E707F (WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___parentCanvas0, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.Window::DrawWindowPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_DrawWindowPanel_m5CBA632696CB37AC22152358B761FF37C2853771 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.Window::DrawWindowHeader(XGI.Tools.Window.WindowElements)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_DrawWindowHeader_m555054B34808888B877E4AF17F5791EA8EB8DBFE (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* ___elements0, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.Window::DrawWindowButtons(XGI.Tools.Window.WindowElements)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_DrawWindowButtons_m5547503E7E4F3C55F4D528DFAF5D935F9287FA54 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* ___elements0, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.WindowComponent::ShowWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowComponent_ShowWindow_m3F4B8BCD17F8DD9E0C97AD676B22DC5EB9A9CAC4 (WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___componentType0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.DeviceOrientation UnityEngine.Input::get_deviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_font(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontStyle(TMPro.FontStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_alignment(TMPro.TextAlignmentOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_constraint(UnityEngine.UI.GridLayoutGroup/Constraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_constraint_m632CB37D0D79A12DE81372EE819348CD1226B84A (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_constraintCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_constraintCount_m685F6D5254B6D77AF8BE070EF3DCA5F049B3D043 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_cellSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_spacing(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_spacing_mA5550A683F7B4A7A1510B267B5D4CACEB8981306 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutGroup_set_childAlignment_mA97DF1F2CF43C0CD1B83CFE7883626AA86ABB0AF (LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.ButtonFunction::InitiateButton(UnityEngine.UI.Button)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonFunction_InitiateButton_mC7DF89611D223B2A03DE63E888221D044A40B386_inline (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisIl2CppFullySharedGenericAny_m89667B72A0E16263EB3DA90AC6A9DF856367EA8C_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.UI.ColorBlock::set_normalColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_highlightedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_pressedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_selectedColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_disabledColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_disabledColor_m4D10D1F8525CCC7E8E200E3994AFB28ADABB1D8E_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_fadeDuration(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_fadeDuration_m8519A304808384CE873377EC104969A6B9FBB6C5_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ColorBlock::set_colorMultiplier(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_transition_m67F9584736EB6891A314C9804489368C430F0F59 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void UnityEngine.UI.SpriteState::set_highlightedSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_highlightedSprite_mEECDB7C62DE0C6A0B2A7D5D7ADF54EB8CDDB20B0_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.SpriteState::set_pressedSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_pressedSprite_mD01568B87B1BC1374CCFB5CD190D7CD62A6FDAA3_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.SpriteState::set_selectedSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_selectedSprite_m902ACABEC203C0A2408B4ECD7B74C10DFE7BB340_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.SpriteState::set_disabledSprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_disabledSprite_m624499C245DC34D314FF0326FE5ADCF35DA28E27_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_spriteState_mE0E2CDA8757045FE0D35BC4D9E827857F64E19ED (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___value0, const RuntimeMethod* method) ;
// System.Void XGI.Tools.MethodHandler::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodHandler_Execute_m2C5EA0BE90190B166DC612CAC5ECC8D7C7FB6AD2 (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* __this, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.WindowFramework::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowFramework__ctor_m6C1881E60A3A8321EB37FE3D515F260C21009E83 (WindowFramework_t33B12F17A90584957F5950F2A4915328B0FA7CE1* __this, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.WindowElements::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowElements__ctor_m0A2769F1D2E7D03A76DEFE14297E642F4F9F222D (WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* __this, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.Window::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window__ctor_m96A2F5E2E67254EF6EE103FB9B235CAA0DFD3489 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.ButtonFunction::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunction__ctor_mE7B67DBC3841DF7C7600BD5883DB98032519CAE7 (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* __this, String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.Window::PrepareWindowInstantiation(UnityEngine.GameObject&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_PrepareWindowInstantiation_m745F40989CC1FF78A81F06A8ED9A2AF9E6D1DA6B (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___canvas0, String_t* ___windowSettingsAssetName1, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.PopupWindow::DrawMessage(XGI.Tools.Window.PopupWindowElements)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupWindow_DrawMessage_m5C785C34BADB83930B9CB2C95E2C2719FAC31D98 (PopupWindow_t33A1224A481AFB89E1A29FCB2B684609CCD64339* __this, PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* ___elements0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.ButtonFunction::AddFunctionalityToButton(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunction_AddFunctionalityToButton_m1443BF61C4E7F8BAC1EFBBF29A001EBA10C3326B (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___buttonAction0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.StoredWindow::InstantiateStoredWindow(System.String,System.Boolean,UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoredWindow_InstantiateStoredWindow_m132E27049C46E98771C38574FFECB90C90F3041A (StoredWindow_tBC2B9B595E4E965C3C257FE284E6ADAA732C6CF0* __this, String_t* ___windowName0, bool ___backgroundShield1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas2, String_t* ___windowSettingsAssetName3, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void XGI.Tools.Window.Window::InstantiateWindowDuringRuntime(UnityEngine.GameObject,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_InstantiateWindowDuringRuntime_m8C70949076D8669C5FF8D7FD1D4513F785E6E10D (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas0, bool ___backgroundShield1, String_t* ___title2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<XGI.Tools.Tweener>()
inline Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* GameObject_AddComponent_TisTweener_t556CEE9763180C08CC1C4795B2A9B136442465FE_m25D77036CE5D995C6D3C39BA69A8D9EE1BA22348 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void XGI.Tools.Tweener::MoveObject(UnityEngine.RectTransform,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tweener_MoveObject_mCBA1C074A59DFA23BF1584597D9D508857B3706B (Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* __this, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___moveToPosition0, float ___timeTaken1, bool ___destroyGameObjectAfterTweening2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<XGI.Tools.Window.QuickMessage/Fade>()
inline Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* GameObject_AddComponent_TisFade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A_mCDEC872B187D272DCA882A33410A0F8DFB727E66 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void XGI.Tools.Window.QuickMessage/Fade::Initiate(XGI.Tools.Tweener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade_Initiate_m15D2F82EE34E60B2FF02D3EA4A6242AF1E6FA66C (Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* __this, Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* ___tweener0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Single XGI.Tools.Lerper::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Lerper_get_progress_mD3500D2805C2AA0755ED6CBC129A51AC6CA33900 (Lerper_t25CAF7BC235870CC854EC0E1EDA2D6D1D162F242* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
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
// System.Void XGI.Tools.Window.ButtonFunction::InitiateButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunction_InitiateButton_mC7DF89611D223B2A03DE63E888221D044A40B386 (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method) 
{
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___button0;
		__this->___selfReference_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selfReference_2), (void*)L_0);
		return;
	}
}
// System.Void XGI.Tools.Window.ButtonFunction::AddFunctionalityToButton(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunction_AddFunctionalityToButton_m1443BF61C4E7F8BAC1EFBBF29A001EBA10C3326B (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___buttonAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7D356B9598E01269355CD99BF7456DF93C92021D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m3C3BEB8F6F87774780673D93C09B6C98DDE012CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m832550EB06675512EAA6B8FD39613960E3BF1AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m323BA24FD0DE9D93F9DA4067FA613B338AABC76B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC8BA81AC225D1EF76BB995545FC216745F3CDA18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1FB770381C3A129AD86880AAA4F631C28565CC93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6434998DD581B3ECA8B0B55F942233BC50970C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t18D8112B808B9A8B656204C5B03B14FDA5747AE0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	{
		List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* L_0 = __this->___actions_1;
		V_0 = (bool)((((RuntimeObject*)(List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* L_2 = (List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D*)il2cpp_codegen_object_new(List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m1FB770381C3A129AD86880AAA4F631C28565CC93(L_2, List_1__ctor_m1FB770381C3A129AD86880AAA4F631C28565CC93_RuntimeMethod_var);
		__this->___actions_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actions_1), (void*)L_2);
	}

IL_0019:
	{
		List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* L_3 = __this->___actions_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = ___buttonAction0;
		NullCheck(L_3);
		List_1_Add_m323BA24FD0DE9D93F9DA4067FA613B338AABC76B_inline(L_3, L_4, List_1_Add_m323BA24FD0DE9D93F9DA4067FA613B338AABC76B_RuntimeMethod_var);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___selfReference_2;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		NullCheck(L_6);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_6, NULL);
		List_1_t81DD6D8E3F2D498C5E128E9488F7CC05E1881C4D* L_7 = __this->___actions_1;
		NullCheck(L_7);
		Enumerator_t18D8112B808B9A8B656204C5B03B14FDA5747AE0 L_8;
		L_8 = List_1_GetEnumerator_mC8BA81AC225D1EF76BB995545FC216745F3CDA18(L_7, List_1_GetEnumerator_mC8BA81AC225D1EF76BB995545FC216745F3CDA18_RuntimeMethod_var);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7D356B9598E01269355CD99BF7456DF93C92021D((&V_1), Enumerator_Dispose_m7D356B9598E01269355CD99BF7456DF93C92021D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0060_1;
			}

IL_0046_1:
			{
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9;
				L_9 = Enumerator_get_Current_m832550EB06675512EAA6B8FD39613960E3BF1AC5_inline((&V_1), Enumerator_get_Current_m832550EB06675512EAA6B8FD39613960E3BF1AC5_RuntimeMethod_var);
				V_2 = L_9;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = __this->___selfReference_2;
				NullCheck(L_10);
				ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_11;
				L_11 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_10, NULL);
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_12 = V_2;
				NullCheck(L_11);
				UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_11, L_12, NULL);
			}

IL_0060_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m3C3BEB8F6F87774780673D93C09B6C98DDE012CC((&V_1), Enumerator_MoveNext_m3C3BEB8F6F87774780673D93C09B6C98DDE012CC_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0046_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = ___buttonAction0;
		NullCheck(L_17);
		MethodInfo_t* L_18;
		L_18 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_17, NULL);
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_16;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral2B6434998DD581B3ECA8B0B55F942233BC50970C);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2B6434998DD581B3ECA8B0B55F942233BC50970C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = __this->___selfReference_2;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_21;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		String_t* L_26;
		L_26 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_25, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_26, NULL);
		return;
	}
}
// System.Void XGI.Tools.Window.ButtonFunction::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunction__ctor_mE7B67DBC3841DF7C7600BD5883DB98032519CAE7 (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* __this, String_t* ___buttonName0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___buttonName0;
		__this->___label_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___label_0), (void*)L_0);
		__this->___buttonFunctionalityCache_3 = (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonFunctionalityCache_3), (void*)(MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256*)NULL);
		return;
	}
}
// System.Void XGI.Tools.Window.ButtonFunction::.ctor(System.String,UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFunction__ctor_mA15FEC3C808B6F7240BDB708EB4D101086AD1935 (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* __this, String_t* ___buttonName0, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___buttonAction1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83D120B58AC7EF27EE53BC606F6DD6E7D4F60B14);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___buttonName0;
		__this->___label_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___label_0), (void*)L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteral83D120B58AC7EF27EE53BC606F6DD6E7D4F60B14, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = ___buttonAction1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* L_6 = (MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256*)il2cpp_codegen_object_new(MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MethodHandler__ctor_m5CB5F1B933731ADD25291B2D2FCF712D62D858CE(L_6, L_2, __this, L_4, NULL);
		__this->___buttonFunctionalityCache_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonFunctionalityCache_3), (void*)L_6);
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
// System.Void XGI.Tools.Window.WindowElements::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowElements__ctor_m0A2769F1D2E7D03A76DEFE14297E642F4F9F222D (WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* __this, const RuntimeMethod* method) 
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
// System.Void XGI.Tools.Window.Window::PrepareWindowInstantiation(UnityEngine.GameObject&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_PrepareWindowInstantiation_m745F40989CC1FF78A81F06A8ED9A2AF9E6D1DA6B (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___canvas0, String_t* ___windowSettingsAssetName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m2D462D10E962BFF0204033EEFA9A68F3D1635120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600C06A078F22CE3FD319C8BEEDA1771BCC58343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C2EC8C158471BED5BEEE63A822A771F3DBCFD5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral805FA7014F0DDE751CDBD5BF050D214DCDD12F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39581B4BFB6C377585CFC83CDDD72D787EB66DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98CDE33B8279237E0FC8D6D7595CB82513DD74E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1C2210F180485D697F36ED09FDD2087EF51B567);
		s_Il2CppMethodInitialized = true;
	}
	WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* V_0 = NULL;
	bool V_1 = false;
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD1C2210F180485D697F36ED09FDD2087EF51B567, NULL);
		String_t* L_0 = ___windowSettingsAssetName1;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral805FA7014F0DDE751CDBD5BF050D214DCDD12F9D, L_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(L_1, NULL);
		V_0 = ((WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33*)CastclassClass((RuntimeObject*)L_2, WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33_il2cpp_TypeInfo_var));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_3 = ___canvas0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_3);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_4, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0094;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7C2EC8C158471BED5BEEE63A822A771F3DBCFD5A, NULL);
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_7;
		L_7 = Object_FindObjectsOfType_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m2D462D10E962BFF0204033EEFA9A68F3D1635120(Object_FindObjectsOfType_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m2D462D10E962BFF0204033EEFA9A68F3D1635120_RuntimeMethod_var);
		V_2 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_8 = ___canvas0;
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = 0;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_13 = ___canvas0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_13);
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB98CDE33B8279237E0FC8D6D7595CB82513DD74E, L_16, _stringLiteral600C06A078F22CE3FD319C8BEEDA1771BCC58343, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_17, NULL);
		goto IL_0088;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{// begin catch(System.Object)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_18 = ___canvas0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = WindowFramework_CreateNewCanvas_mDFDE9F0973A995AB852F4D083D7104B497706A2C(NULL);
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_19);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE424DB88BB68CE3F25E2CAC678D8A16F0AC84A9C)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0088;
	}// end catch (depth: 1)

IL_0088:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB39581B4BFB6C377585CFC83CDDD72D787EB66DB, NULL);
	}

IL_0094:
	{
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_20 = V_0;
		__this->___settings_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___settings_3), (void*)L_20);
		return;
	}
}
// UnityEngine.GameObject XGI.Tools.Window.Window::InstantiateWindowDuringRuntime(UnityEngine.GameObject,System.Boolean,XGI.Tools.Window.WindowElements)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Window_InstantiateWindowDuringRuntime_m5BBD03C5184507BCE1A0EE591A8A5AF5933F1725 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas0, bool ___backgroundShield1, WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* ___elements2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D352682667F810905C4E94B6C152878C3DBC0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral815FB4EC8DBAA3CFA4A430E04AD05A9DF331BCA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1932796827E66812A4DC6BF679D3DD86CC8BF6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF13B91A34DC34D81CCE5F52AA23C7DCC32485F9);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_0 = ___elements2;
		NullCheck(L_0);
		String_t* L_1 = L_0->___title_0;
		String_t* L_2;
		L_2 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralEF13B91A34DC34D81CCE5F52AA23C7DCC32485F9, L_1, _stringLiteralC1932796827E66812A4DC6BF679D3DD86CC8BF6A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_3 = ___elements2;
		NullCheck(L_3);
		String_t* L_4 = L_3->___title_0;
		String_t* L_5;
		L_5 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_4, _stringLiteral16D352682667F810905C4E94B6C152878C3DBC0C, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, L_5, NULL);
		V_0 = L_6;
		bool L_7 = ___backgroundShield1;
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___canvas0;
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_10 = ___elements2;
		NullCheck(L_10);
		String_t* L_11 = L_10->___title_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Window_CreateUIShield_mF94877DC45F8D4374E5FBEE2459BB569F117AF69(__this, L_9, L_11, NULL);
		V_2 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_2;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_14);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_14, L_16, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
		NullCheck(L_17);
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_18;
		L_18 = GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270(L_17, GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270_RuntimeMethod_var);
		__this->___myWindowComponent_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myWindowComponent_1), (void*)L_18);
		goto IL_0089;
	}

IL_0068:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___canvas0;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_20);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_20, L_22, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_0;
		NullCheck(L_23);
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_24;
		L_24 = GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270(L_23, GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270_RuntimeMethod_var);
		__this->___myWindowComponent_1 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myWindowComponent_1), (void*)L_24);
	}

IL_0089:
	{
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_25 = __this->___myWindowComponent_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = ___canvas0;
		NullCheck(L_25);
		WindowComponent_NewWindowsComponent_mA1D353EA6A5CA0E3F9633D479F9526F2586E707F(L_25, L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		__this->___myWindow_0 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myWindow_0), (void*)L_27);
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_28 = ___elements2;
		NullCheck(L_28);
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_29 = L_28->___buttons_1;
		__this->___ButtonFunctions_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ButtonFunctions_2), (void*)L_29);
		Window_DrawWindowPanel_m5CBA632696CB37AC22152358B761FF37C2853771(__this, NULL);
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_30 = ___elements2;
		Window_DrawWindowHeader_m555054B34808888B877E4AF17F5791EA8EB8DBFE(__this, L_30, NULL);
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_31 = ___elements2;
		Window_DrawWindowButtons_m5547503E7E4F3C55F4D528DFAF5D935F9287FA54(__this, L_31, NULL);
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_32 = ___elements2;
		NullCheck(L_32);
		String_t* L_33 = L_32->___title_0;
		String_t* L_34;
		L_34 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_33, _stringLiteral815FB4EC8DBAA3CFA4A430E04AD05A9DF331BCA4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_34, NULL);
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_35 = __this->___myWindowComponent_1;
		NullCheck(L_35);
		WindowComponent_ShowWindow_m3F4B8BCD17F8DD9E0C97AD676B22DC5EB9A9CAC4(L_35, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = V_0;
		V_3 = L_36;
		goto IL_00eb;
	}

IL_00eb:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_3;
		return L_37;
	}
}
// System.Void XGI.Tools.Window.Window::InstantiateWindowDuringRuntime(UnityEngine.GameObject,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_InstantiateWindowDuringRuntime_m8C70949076D8669C5FF8D7FD1D4513F785E6E10D (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas0, bool ___backgroundShield1, String_t* ___title2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BD68E8BD8B35730D0511106DE2D51BBD8604ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FD8B6AA957ABFFB0C628043A8420911C492AB31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7665FFEE4D3635C4F054CB0A5C6AB285D597DB32);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		String_t* L_0 = ___title2;
		String_t* L_1;
		L_1 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4FD8B6AA957ABFFB0C628043A8420911C492AB31, L_0, _stringLiteral0BD68E8BD8B35730D0511106DE2D51BBD8604ED3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_1, NULL);
		bool L_2 = ___backgroundShield1;
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___canvas0;
		String_t* L_5 = ___title2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Window_CreateUIShield_mF94877DC45F8D4374E5FBEE2459BB569F117AF69(__this, L_4, L_5, NULL);
		V_1 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		NullCheck(L_7);
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_8;
		L_8 = GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270(L_7, GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270_RuntimeMethod_var);
		__this->___myWindowComponent_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myWindowComponent_1), (void*)L_8);
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_9 = __this->___myWindowComponent_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = ___canvas0;
		NullCheck(L_9);
		WindowComponent_NewWindowsComponent_mA1D353EA6A5CA0E3F9633D479F9526F2586E707F(L_9, L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___myWindow_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		NullCheck(L_12);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, L_14, (bool)0, NULL);
		goto IL_0092;
	}

IL_005a:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___myWindow_0;
		NullCheck(L_15);
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_16;
		L_16 = GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270(L_15, GameObject_AddComponent_TisWindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3_mC56A88EBACA232C88533FB5F72897E815B493270_RuntimeMethod_var);
		__this->___myWindowComponent_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myWindowComponent_1), (void*)L_16);
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_17 = __this->___myWindowComponent_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = ___canvas0;
		NullCheck(L_17);
		WindowComponent_NewWindowsComponent_mA1D353EA6A5CA0E3F9633D479F9526F2586E707F(L_17, L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___myWindow_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = ___canvas0;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_20);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_20, L_22, (bool)0, NULL);
	}

IL_0092:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___myWindow_0;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_24);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_24, L_25, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___myWindow_0;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_27);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_27, L_28, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___myWindow_0;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_30);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_30, L_31, NULL);
		String_t* L_32 = ___title2;
		String_t* L_33;
		L_33 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_32, _stringLiteral7665FFEE4D3635C4F054CB0A5C6AB285D597DB32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_33, NULL);
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_34 = __this->___myWindowComponent_1;
		NullCheck(L_34);
		WindowComponent_ShowWindow_m3F4B8BCD17F8DD9E0C97AD676B22DC5EB9A9CAC4(L_34, NULL);
		return;
	}
}
// UnityEngine.GameObject XGI.Tools.Window.Window::CreateUIShield(UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Window_CreateUIShield_mF94877DC45F8D4374E5FBEE2459BB569F117AF69 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas0, String_t* ___windowName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_2 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	{
		String_t* L_0 = ___windowName1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, L_0, NULL);
		V_0 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___canvas0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_3);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_3, L_5, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_7);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_7, L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_14, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16;
		L_16 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_15, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_1 = L_16;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_17);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_17, L_18, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		NullCheck(L_19);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_19, L_20, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (0.5f), (0.5f), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_21, L_22, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = V_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = L_25;
		V_3 = L_26;
		NullCheck(L_24);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_24, L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_3;
		NullCheck(L_23);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_23, L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
		NullCheck(L_28);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29;
		L_29 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_28, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		V_2 = L_29;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_31 = __this->___settings_3;
		NullCheck(L_31);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = L_31->___backgroundHindererColor_21;
		NullCheck(L_30);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_32);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_0;
		V_4 = L_33;
		goto IL_00b7;
	}

IL_00b7:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_4;
		return L_34;
	}
}
// System.Void XGI.Tools.Window.Window::DrawWindowPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_DrawWindowPanel_m5CBA632696CB37AC22152358B761FF37C2853771 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B9_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B7_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B8_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B10_1 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___myWindow_0;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___myWindow_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		NullCheck(L_3);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_6;
		L_6 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_3, L_5, NULL);
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_6, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_8, NULL);
		NullCheck(L_7);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_7, L_9, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_10);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_10, L_11, NULL);
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_12 = __this->___settings_3;
		NullCheck(L_12);
		int32_t L_13 = L_12->___orientationState_4;
		V_3 = L_13;
		int32_t L_14 = V_3;
		V_2 = L_14;
		int32_t L_15 = V_2;
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_0062;
	}

IL_0062:
	{
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_008c;
		}
	}
	{
		goto IL_00b0;
	}

IL_0068:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_17 = V_0;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_18 = __this->___settings_3;
		NullCheck(L_18);
		float L_19 = L_18->___scaleMinorAxis_6;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_20 = __this->___settings_3;
		NullCheck(L_20);
		float L_21 = L_20->___scaleMajorAxis_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), L_19, L_21, /*hidden argument*/NULL);
		NullCheck(L_17);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_17, L_22, NULL);
		goto IL_0101;
	}

IL_008c:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = V_0;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_24 = __this->___settings_3;
		NullCheck(L_24);
		float L_25 = L_24->___scaleMajorAxis_5;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_26 = __this->___settings_3;
		NullCheck(L_26);
		float L_27 = L_26->___scaleMinorAxis_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_23, L_28, NULL);
		goto IL_0101;
	}

IL_00b0:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_29 = V_0;
		int32_t L_30;
		L_30 = Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A(NULL);
		G_B7_0 = L_29;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			G_B9_0 = L_29;
			goto IL_00de;
		}
	}
	{
		int32_t L_31;
		L_31 = Input_get_deviceOrientation_m855C2F467D8AC32548379ADB232E4C36E25CFB7A(NULL);
		G_B8_0 = G_B7_0;
		if ((((int32_t)L_31) == ((int32_t)2)))
		{
			G_B9_0 = G_B7_0;
			goto IL_00de;
		}
	}
	{
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_32 = __this->___settings_3;
		NullCheck(L_32);
		float L_33 = L_32->___scaleMajorAxis_5;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_34 = __this->___settings_3;
		NullCheck(L_34);
		float L_35 = L_34->___scaleMinorAxis_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), L_33, L_35, /*hidden argument*/NULL);
		G_B10_0 = L_36;
		G_B10_1 = G_B8_0;
		goto IL_00f9;
	}

IL_00de:
	{
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_37 = __this->___settings_3;
		NullCheck(L_37);
		float L_38 = L_37->___scaleMinorAxis_6;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_39 = __this->___settings_3;
		NullCheck(L_39);
		float L_40 = L_39->___scaleMajorAxis_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), L_38, L_40, /*hidden argument*/NULL);
		G_B10_0 = L_41;
		G_B10_1 = G_B9_0;
	}

IL_00f9:
	{
		NullCheck(G_B10_1);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(G_B10_1, G_B10_0, NULL);
		goto IL_0101;
	}

IL_0101:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___myWindow_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		NullCheck(L_42);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_45;
		L_45 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_42, L_44, NULL);
		V_1 = ((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)CastclassClass((RuntimeObject*)L_45, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_46 = V_1;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_47 = __this->___settings_3;
		NullCheck(L_47);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_48 = L_47->___primarySourceImage_8;
		NullCheck(L_46);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_46, L_48, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_49 = V_1;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_50 = __this->___settings_3;
		NullCheck(L_50);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51 = L_50->___primaryColor_9;
		NullCheck(L_49);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_49, L_51);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_52 = V_1;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_53 = __this->___settings_3;
		NullCheck(L_53);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54 = L_53->___primaryMaterial_10;
		NullCheck(L_52);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_52, L_54);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_55 = V_1;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_56 = __this->___settings_3;
		NullCheck(L_56);
		int32_t L_57 = L_56->___primaryType_11;
		NullCheck(L_55);
		Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_55, L_57, NULL);
		return;
	}
}
// System.Void XGI.Tools.Window.Window::DrawWindowHeader(XGI.Tools.Window.WindowElements)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_DrawWindowHeader_m555054B34808888B877E4AF17F5791EA8EB8DBFE (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* ___elements0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral826F0716DFACBC479DCB3A3F1E7C0ED4969C30A4);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_4 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_5 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral40E83ACCE0D042A519B971EC5FA530E519DEAD8E, NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___myWindow_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_4, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		NullCheck(L_8);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_11;
		L_11 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_8, L_10, NULL);
		V_1 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_11, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_12, L_13, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_14, L_15, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_16, L_17, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_1;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_19 = __this->___settings_3;
		NullCheck(L_19);
		float L_20 = L_19->___titleBarSize_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), (0.0f), L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_18, L_21, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = V_1;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_23 = __this->___settings_3;
		NullCheck(L_23);
		float L_24 = L_23->___titleBarSize_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (0.0f), ((float)(((-L_24))/(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_22, L_25, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_26);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_26, L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		NullCheck(L_28);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_31;
		L_31 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_28, L_30, NULL);
		V_2 = ((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)CastclassClass((RuntimeObject*)L_31, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_33 = __this->___settings_3;
		NullCheck(L_33);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_34 = L_33->___secondarySourceImage_17;
		NullCheck(L_32);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_32, L_34, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_36 = __this->___settings_3;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = L_36->___secondaryColor_18;
		NullCheck(L_35);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_37);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_38 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_39 = __this->___settings_3;
		NullCheck(L_39);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_40 = L_39->___secondaryMaterial_19;
		NullCheck(L_38);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_38, L_40);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_42 = __this->___settings_3;
		NullCheck(L_42);
		int32_t L_43 = L_42->___secondaryType_20;
		NullCheck(L_41);
		Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_41, L_43, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_44, _stringLiteral826F0716DFACBC479DCB3A3F1E7C0ED4969C30A4, NULL);
		V_3 = L_44;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = V_3;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_0;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_47, NULL);
		NullCheck(L_46);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_46, L_48, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = V_3;
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_49, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_50);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_50, L_51, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_53, NULL);
		NullCheck(L_52);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_55;
		L_55 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_52, L_54, NULL);
		V_4 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_55, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_56 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_56);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_56, L_57, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_58 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		NullCheck(L_58);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_58, L_59, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (20.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_60, L_61, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_63), (-20.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_62);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_62, L_63, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_64 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_64);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_64, L_65, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_67 = { reinterpret_cast<intptr_t> (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var) };
		Type_t* L_68;
		L_68 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_67, NULL);
		NullCheck(L_66);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_69;
		L_69 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_66, L_68, NULL);
		V_5 = ((TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*)CastclassClass((RuntimeObject*)L_69, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_il2cpp_TypeInfo_var));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_70 = V_5;
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_71 = ___elements0;
		NullCheck(L_71);
		String_t* L_72 = L_71->___title_0;
		NullCheck(L_70);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_70, L_72);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_73 = V_5;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_74 = __this->___settings_3;
		NullCheck(L_74);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_75 = L_74->___secondaryFontAsset_22;
		NullCheck(L_73);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_73, L_75, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_76 = V_5;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_77 = __this->___settings_3;
		NullCheck(L_77);
		int32_t L_78 = L_77->___secondaryFontStyle_23;
		NullCheck(L_76);
		TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8(L_76, L_78, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_79 = V_5;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_80 = __this->___settings_3;
		NullCheck(L_80);
		float L_81 = L_80->___secondaryFontSize_24;
		NullCheck(L_79);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_79, L_81, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_82 = V_5;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_83 = __this->___settings_3;
		NullCheck(L_83);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84 = L_83->___secondaryTextColor_25;
		NullCheck(L_82);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_82, L_84);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_85 = V_5;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_86 = __this->___settings_3;
		NullCheck(L_86);
		int32_t L_87 = L_86->___secondaryTextAlignmentOptions_26;
		NullCheck(L_85);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_85, L_87, NULL);
		return;
	}
}
// System.Void XGI.Tools.Window.Window::DrawWindowButtons(XGI.Tools.Window.WindowElements)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window_DrawWindowButtons_m5547503E7E4F3C55F4D528DFAF5D935F9287FA54 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* ___elements0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9100B909CEDFDC6FB9B68A3FD96A1267D4E29FD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB8DC4A00AFE724ABFD4C76982AE75E2A85484B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD537C2C52ACF19A6F84CDB21CE5B92A4DAD97C2);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* V_2 = NULL;
	int32_t V_3 = 0;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_4 = NULL;
	int32_t V_5 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_7 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_8 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_9 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_10 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_11 = NULL;
	bool V_12 = false;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_15;
	memset((&V_15), 0, sizeof(V_15));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_16 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_17 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_18 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_20 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_21;
	memset((&V_21), 0, sizeof(V_21));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_22 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_23 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_24 = NULL;
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 V_25;
	memset((&V_25), 0, sizeof(V_25));
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_26 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_27;
	memset((&V_27), 0, sizeof(V_27));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_28 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_29 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_30 = NULL;
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD V_31;
	memset((&V_31), 0, sizeof(V_31));
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_32 = NULL;
	ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* V_33 = NULL;
	int32_t V_34 = 0;
	ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* V_35 = NULL;
	bool V_36 = false;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B16_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B15_0 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B17_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B17_1 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralDB8DC4A00AFE724ABFD4C76982AE75E2A85484B3, NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___myWindow_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_4, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		NullCheck(L_8);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_11;
		L_11 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_8, L_10, NULL);
		V_1 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_11, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_12, L_13, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_15), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_14, L_15, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), (24.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_16, L_17, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), (-24.0f), (100.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_18, L_19, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), (0.0f), (50.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_20, L_21, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_22);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_22, L_23, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		NullCheck(L_24);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_27;
		L_27 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_24, L_26, NULL);
		V_2 = ((GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940*)CastclassClass((RuntimeObject*)L_27, GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940_il2cpp_TypeInfo_var));
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_28 = V_2;
		NullCheck(L_28);
		GridLayoutGroup_set_constraint_m632CB37D0D79A12DE81372EE819348CD1226B84A(L_28, 2, NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_29 = V_2;
		NullCheck(L_29);
		GridLayoutGroup_set_constraintCount_m685F6D5254B6D77AF8BE070EF3DCA5F049B3D043(L_29, 1, NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_30 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_31 = __this->___settings_3;
		NullCheck(L_31);
		float L_32 = L_31->___buttonLength_31;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_33 = __this->___settings_3;
		NullCheck(L_33);
		float L_34 = L_33->___buttonHeight_32;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_35), L_32, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_30, L_35, NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_36 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_37 = __this->___settings_3;
		NullCheck(L_37);
		float L_38 = L_37->___buttonSpacing_30;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_39), L_38, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_36);
		GridLayoutGroup_set_spacing_mA5550A683F7B4A7A1510B267B5D4CACEB8981306(L_36, L_39, NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_40 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_41 = __this->___settings_3;
		NullCheck(L_41);
		int32_t L_42 = L_41->___buttonAlignment_29;
		NullCheck(L_40);
		LayoutGroup_set_childAlignment_mA97DF1F2CF43C0CD1B83CFE7883626AA86ABB0AF(L_40, L_42, NULL);
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_43 = ___elements0;
		NullCheck(L_43);
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_44 = L_43->___buttons_1;
		NullCheck(L_44);
		V_3 = ((int32_t)(((RuntimeArray*)L_44)->max_length));
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_45 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_45, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_4 = L_45;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_46 = V_4;
		NullCheck(L_46);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_46, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		V_5 = 0;
		goto IL_0346;
	}

IL_015b:
	{
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_47 = ___elements0;
		NullCheck(L_47);
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_48 = L_47->___buttons_1;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		String_t* L_52 = L_51->___label_0;
		String_t* L_53;
		L_53 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_52, _stringLiteralFD537C2C52ACF19A6F84CDB21CE5B92A4DAD97C2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_54, L_53, NULL);
		V_6 = L_54;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = V_6;
		NullCheck(L_55);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_55, NULL);
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_57 = V_2;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_57, NULL);
		NullCheck(L_56);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_56, L_58, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = V_6;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_60);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_60, L_61, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_63, NULL);
		NullCheck(L_62);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_65;
		L_65 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_62, L_64, NULL);
		V_7 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_65, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_66 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_67), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_66);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_66, L_67, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_68 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), (0.5f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_68);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_68, L_69, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_70 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		memset((&L_71), 0, sizeof(L_71));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_71), (0.0f), (60.0f), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_71, NULL);
		NullCheck(L_70);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_70, L_72, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_73 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		memset((&L_74), 0, sizeof(L_74));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_74), (150.0f), (72.5f), /*hidden argument*/NULL);
		NullCheck(L_73);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_73, L_74, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76;
		L_76 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_75);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_75, L_76, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = V_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_78, NULL);
		NullCheck(L_77);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_80;
		L_80 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_77, L_79, NULL);
		V_8 = ((Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)CastclassClass((RuntimeObject*)L_80, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_il2cpp_TypeInfo_var));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_0_0_0_var) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		NullCheck(L_81);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_84;
		L_84 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_81, L_83, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_85);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_85, _stringLiteral9100B909CEDFDC6FB9B68A3FD96A1267D4E29FD8, NULL);
		V_9 = L_85;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_9;
		NullCheck(L_86);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87;
		L_87 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_86, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_6;
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_88, NULL);
		NullCheck(L_87);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_87, L_89, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = V_9;
		NullCheck(L_90);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91;
		L_91 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_90, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_91);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_91, L_92, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = V_9;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_94, NULL);
		NullCheck(L_93);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_96;
		L_96 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_93, L_95, NULL);
		V_10 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_96, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_97 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98;
		L_98 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_97);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_97, L_98, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_99 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		L_100 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		NullCheck(L_99);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_99, L_100, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_101 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102;
		memset((&L_102), 0, sizeof(L_102));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_102), (10.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_101);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_101, L_102, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_103 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_104), (-10.0f), (-10.0f), /*hidden argument*/NULL);
		NullCheck(L_103);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_103, L_104, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_105);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_105, L_106, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = V_9;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_108, NULL);
		NullCheck(L_107);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_110;
		L_110 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_107, L_109, NULL);
		V_11 = ((TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*)CastclassClass((RuntimeObject*)L_110, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_il2cpp_TypeInfo_var));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_111 = V_11;
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_112 = ___elements0;
		NullCheck(L_112);
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_113 = L_112->___buttons_1;
		int32_t L_114 = V_5;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		String_t* L_117 = L_116->___label_0;
		NullCheck(L_111);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_111, L_117);
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_118 = ___elements0;
		NullCheck(L_118);
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_119 = L_118->___buttons_1;
		int32_t L_120 = V_5;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_123 = V_8;
		NullCheck(L_122);
		ButtonFunction_InitiateButton_mC7DF89611D223B2A03DE63E888221D044A40B386_inline(L_122, L_123, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_124 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = V_6;
		NullCheck(L_124);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_124, L_125, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		int32_t L_126 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_126, 1));
	}

IL_0346:
	{
		int32_t L_127 = V_5;
		int32_t L_128 = V_3;
		V_12 = (bool)((((int32_t)L_127) < ((int32_t)L_128))? 1 : 0);
		bool L_129 = V_12;
		if (L_129)
		{
			goto IL_015b;
		}
	}
	{
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_130 = __this->___settings_3;
		NullCheck(L_130);
		int32_t L_131 = L_130->___buttonType_27;
		V_14 = L_131;
		int32_t L_132 = V_14;
		V_13 = L_132;
		int32_t L_133 = V_13;
		switch (L_133)
		{
			case 0:
			{
				goto IL_037d;
			}
			case 1:
			{
				goto IL_051d;
			}
			case 2:
			{
				goto IL_06dc;
			}
		}
	}
	{
		goto IL_0846;
	}

IL_037d:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_134 = V_4;
		NullCheck(L_134);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_135;
		L_135 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_134, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_15 = L_135;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0509:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_15), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_04fb_1;
			}

IL_038c_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136;
				L_136 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_15), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_16 = L_136;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137 = V_16;
				NullCheck(L_137);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_138;
				L_138 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_137, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
				V_17 = L_138;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_139 = V_17;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_140;
				L_140 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
				NullCheck(L_139);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_139, L_140);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_141 = V_17;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_142 = __this->___settings_3;
				NullCheck(L_142);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_143 = L_142->___secondarySourceImage_17;
				NullCheck(L_141);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_141, L_143, NULL);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_144 = V_17;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_145 = __this->___settings_3;
				NullCheck(L_145);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_146 = L_145->___secondaryMaterial_19;
				NullCheck(L_144);
				VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_144, L_146);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147 = V_17;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_148 = __this->___settings_3;
				NullCheck(L_148);
				int32_t L_149 = L_148->___secondaryType_20;
				NullCheck(L_147);
				Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_147, L_149, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_150 = V_16;
				NullCheck(L_150);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_151;
				L_151 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_150, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
				V_18 = L_151;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_152 = V_18;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_153 = __this->___settings_3;
				NullCheck(L_153);
				TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_154 = L_153->___secondaryFontAsset_22;
				NullCheck(L_152);
				TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_152, L_154, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_155 = V_18;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_156 = __this->___settings_3;
				NullCheck(L_156);
				int32_t L_157 = L_156->___secondaryFontStyle_23;
				NullCheck(L_155);
				TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8(L_155, L_157, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_158 = V_18;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_159 = __this->___settings_3;
				NullCheck(L_159);
				float L_160 = L_159->___secondaryFontSize_24;
				NullCheck(L_158);
				TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_158, L_160, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_161 = V_18;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_162 = __this->___settings_3;
				NullCheck(L_162);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_163 = L_162->___secondaryTextColor_25;
				NullCheck(L_161);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_161, L_163);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_164 = V_18;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_165 = __this->___settings_3;
				NullCheck(L_165);
				int32_t L_166 = L_165->___secondaryTextAlignmentOptions_26;
				NullCheck(L_164);
				TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_164, L_166, NULL);
				il2cpp_codegen_initobj((&V_19), sizeof(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11));
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_167 = __this->___settings_3;
				NullCheck(L_167);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_168 = L_167->___secondaryColor_18;
				ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline((&V_19), L_168, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_169 = __this->___settings_3;
				NullCheck(L_169);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_170 = L_169->___buttonHighlightedColor_39;
				ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline((&V_19), L_170, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_171 = __this->___settings_3;
				NullCheck(L_171);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_172 = L_171->___buttonPressedColor_40;
				ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline((&V_19), L_172, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_173 = __this->___settings_3;
				NullCheck(L_173);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_174 = L_173->___buttonSelectedColor_41;
				ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline((&V_19), L_174, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_175 = __this->___settings_3;
				NullCheck(L_175);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_176 = L_175->___buttonDisabledColor_42;
				ColorBlock_set_disabledColor_m4D10D1F8525CCC7E8E200E3994AFB28ADABB1D8E_inline((&V_19), L_176, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_177 = __this->___settings_3;
				NullCheck(L_177);
				float L_178 = L_177->___buttonFadeDuration_43;
				ColorBlock_set_fadeDuration_m8519A304808384CE873377EC104969A6B9FBB6C5_inline((&V_19), L_178, NULL);
				ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline((&V_19), (1.0f), NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_179 = V_16;
				NullCheck(L_179);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_180;
				L_180 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_179, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
				V_20 = L_180;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_181 = V_20;
				NullCheck(L_181);
				Selectable_set_transition_m67F9584736EB6891A314C9804489368C430F0F59(L_181, 1, NULL);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_182 = V_20;
				ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_183 = V_19;
				NullCheck(L_182);
				Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_182, L_183, NULL);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_184 = V_20;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_185 = V_17;
				NullCheck(L_184);
				Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_184, L_185, NULL);
			}

IL_04fb_1:
			{
				bool L_186;
				L_186 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_15), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_186)
				{
					goto IL_038c_1;
				}
			}
			{
				goto IL_0518;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0518:
	{
		goto IL_0846;
	}

IL_051d:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_187 = V_4;
		NullCheck(L_187);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_188;
		L_188 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_187, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_21 = L_188;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_06c8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_21), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_06ba_1;
			}

IL_052c_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_189;
				L_189 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_21), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_22 = L_189;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_190 = V_22;
				NullCheck(L_190);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_191;
				L_191 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_190, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
				V_23 = L_191;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_192 = V_23;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_193;
				L_193 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
				NullCheck(L_192);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_192, L_193);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_194 = V_23;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_195 = __this->___settings_3;
				NullCheck(L_195);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_196 = L_195->___buttonNormalSprite_33;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_197;
				L_197 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_196, NULL);
				G_B15_0 = L_194;
				if (L_197)
				{
					G_B16_0 = L_194;
					goto IL_056d_1;
				}
			}
			{
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_198 = __this->___settings_3;
				NullCheck(L_198);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_199 = L_198->___secondarySourceImage_17;
				G_B17_0 = L_199;
				G_B17_1 = G_B15_0;
				goto IL_0578_1;
			}

IL_056d_1:
			{
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_200 = __this->___settings_3;
				NullCheck(L_200);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_201 = L_200->___buttonNormalSprite_33;
				G_B17_0 = L_201;
				G_B17_1 = G_B16_0;
			}

IL_0578_1:
			{
				NullCheck(G_B17_1);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(G_B17_1, G_B17_0, NULL);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_202 = V_23;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_203 = __this->___settings_3;
				NullCheck(L_203);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_204 = L_203->___secondaryMaterial_19;
				NullCheck(L_202);
				VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_202, L_204);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_205 = V_23;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_206 = __this->___settings_3;
				NullCheck(L_206);
				int32_t L_207 = L_206->___secondaryType_20;
				NullCheck(L_205);
				Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_205, L_207, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_208 = V_22;
				NullCheck(L_208);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_209;
				L_209 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_208, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
				V_24 = L_209;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_210 = V_24;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_211 = __this->___settings_3;
				NullCheck(L_211);
				TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_212 = L_211->___buttonFontAsset_44;
				NullCheck(L_210);
				TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_210, L_212, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_213 = V_24;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_214 = __this->___settings_3;
				NullCheck(L_214);
				int32_t L_215 = L_214->___buttonFontStyle_45;
				NullCheck(L_213);
				TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8(L_213, L_215, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_216 = V_24;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_217 = __this->___settings_3;
				NullCheck(L_217);
				float L_218 = L_217->___buttonFontSize_46;
				NullCheck(L_216);
				TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_216, L_218, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_219 = V_24;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_220 = __this->___settings_3;
				NullCheck(L_220);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_221 = L_220->___buttonTextColor_47;
				NullCheck(L_219);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_219, L_221);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_222 = V_24;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_223 = __this->___settings_3;
				NullCheck(L_223);
				int32_t L_224 = L_223->___buttonTextAlignmentOptions_48;
				NullCheck(L_222);
				TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_222, L_224, NULL);
				il2cpp_codegen_initobj((&V_25), sizeof(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11));
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_225 = __this->___settings_3;
				NullCheck(L_225);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_226 = L_225->___buttonNormalColor_38;
				ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline((&V_25), L_226, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_227 = __this->___settings_3;
				NullCheck(L_227);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_228 = L_227->___buttonHighlightedColor_39;
				ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline((&V_25), L_228, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_229 = __this->___settings_3;
				NullCheck(L_229);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_230 = L_229->___buttonPressedColor_40;
				ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline((&V_25), L_230, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_231 = __this->___settings_3;
				NullCheck(L_231);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_232 = L_231->___buttonSelectedColor_41;
				ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline((&V_25), L_232, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_233 = __this->___settings_3;
				NullCheck(L_233);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_234 = L_233->___buttonDisabledColor_42;
				ColorBlock_set_disabledColor_m4D10D1F8525CCC7E8E200E3994AFB28ADABB1D8E_inline((&V_25), L_234, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_235 = __this->___settings_3;
				NullCheck(L_235);
				float L_236 = L_235->___buttonFadeDuration_43;
				ColorBlock_set_fadeDuration_m8519A304808384CE873377EC104969A6B9FBB6C5_inline((&V_25), L_236, NULL);
				ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline((&V_25), (1.0f), NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_237 = V_22;
				NullCheck(L_237);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_238;
				L_238 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_237, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
				V_26 = L_238;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_239 = V_26;
				NullCheck(L_239);
				Selectable_set_transition_m67F9584736EB6891A314C9804489368C430F0F59(L_239, 1, NULL);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_240 = V_26;
				ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_241 = V_25;
				NullCheck(L_240);
				Selectable_set_colors_m0A49ED3ACD6647B7E5A2DA10B3D417E8FE1BE55A(L_240, L_241, NULL);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_242 = V_26;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_243 = V_23;
				NullCheck(L_242);
				Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_242, L_243, NULL);
			}

IL_06ba_1:
			{
				bool L_244;
				L_244 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_21), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_244)
				{
					goto IL_052c_1;
				}
			}
			{
				goto IL_06d7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_06d7:
	{
		goto IL_0846;
	}

IL_06dc:
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_245 = V_4;
		NullCheck(L_245);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_246;
		L_246 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_245, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_27 = L_246;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0835:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_27), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0827_1;
			}

IL_06eb_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_247;
				L_247 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_27), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_28 = L_247;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_248 = V_28;
				NullCheck(L_248);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_249;
				L_249 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_248, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
				V_29 = L_249;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_250 = V_29;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_251;
				L_251 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
				NullCheck(L_250);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_250, L_251);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_252 = V_29;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_253 = __this->___settings_3;
				NullCheck(L_253);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_254 = L_253->___buttonNormalSprite_33;
				NullCheck(L_252);
				Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_252, L_254, NULL);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_255 = V_29;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_256 = __this->___settings_3;
				NullCheck(L_256);
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_257 = L_256->___secondaryMaterial_19;
				NullCheck(L_255);
				VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_255, L_257);
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_258 = V_29;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_259 = __this->___settings_3;
				NullCheck(L_259);
				int32_t L_260 = L_259->___secondaryType_20;
				NullCheck(L_258);
				Image_set_type_mECB8D34772AA393FFBC867B03D18EA0F1A8546BF(L_258, L_260, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_261 = V_28;
				NullCheck(L_261);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_262;
				L_262 = GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB(L_261, GameObject_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m58413DB121C1F732459A1F2B911AB85B1BF21AFB_RuntimeMethod_var);
				V_30 = L_262;
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_263 = V_30;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_264 = __this->___settings_3;
				NullCheck(L_264);
				TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_265 = L_264->___buttonFontAsset_44;
				NullCheck(L_263);
				TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_263, L_265, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_266 = V_30;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_267 = __this->___settings_3;
				NullCheck(L_267);
				int32_t L_268 = L_267->___buttonFontStyle_45;
				NullCheck(L_266);
				TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8(L_266, L_268, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_269 = V_30;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_270 = __this->___settings_3;
				NullCheck(L_270);
				float L_271 = L_270->___buttonFontSize_46;
				NullCheck(L_269);
				TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_269, L_271, NULL);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_272 = V_30;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_273 = __this->___settings_3;
				NullCheck(L_273);
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_274 = L_273->___buttonTextColor_47;
				NullCheck(L_272);
				VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_272, L_274);
				TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_275 = V_30;
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_276 = __this->___settings_3;
				NullCheck(L_276);
				int32_t L_277 = L_276->___buttonTextAlignmentOptions_48;
				NullCheck(L_275);
				TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_275, L_277, NULL);
				il2cpp_codegen_initobj((&V_31), sizeof(SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD));
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_278 = __this->___settings_3;
				NullCheck(L_278);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_279 = L_278->___buttonHighlightedSprite_34;
				SpriteState_set_highlightedSprite_mEECDB7C62DE0C6A0B2A7D5D7ADF54EB8CDDB20B0_inline((&V_31), L_279, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_280 = __this->___settings_3;
				NullCheck(L_280);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_281 = L_280->___buttonPressedSprite_35;
				SpriteState_set_pressedSprite_mD01568B87B1BC1374CCFB5CD190D7CD62A6FDAA3_inline((&V_31), L_281, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_282 = __this->___settings_3;
				NullCheck(L_282);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_283 = L_282->___buttonSelectedSprite_36;
				SpriteState_set_selectedSprite_m902ACABEC203C0A2408B4ECD7B74C10DFE7BB340_inline((&V_31), L_283, NULL);
				WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_284 = __this->___settings_3;
				NullCheck(L_284);
				Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_285 = L_284->___buttonDisabledSprite_37;
				SpriteState_set_disabledSprite_m624499C245DC34D314FF0326FE5ADCF35DA28E27_inline((&V_31), L_285, NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_286 = V_28;
				NullCheck(L_286);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_287;
				L_287 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_286, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
				V_32 = L_287;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_288 = V_32;
				NullCheck(L_288);
				Selectable_set_transition_m67F9584736EB6891A314C9804489368C430F0F59(L_288, 2, NULL);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_289 = V_32;
				SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_290 = V_31;
				NullCheck(L_289);
				Selectable_set_spriteState_mE0E2CDA8757045FE0D35BC4D9E827857F64E19ED(L_289, L_290, NULL);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_291 = V_32;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_292 = V_29;
				NullCheck(L_291);
				Selectable_set_targetGraphic_m23DB0DF4E5F2DABD50C662C708B4555162171FB9(L_291, L_292, NULL);
			}

IL_0827_1:
			{
				bool L_293;
				L_293 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_27), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_293)
				{
					goto IL_06eb_1;
				}
			}
			{
				goto IL_0844;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0844:
	{
		goto IL_0846;
	}

IL_0846:
	{
		WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* L_294 = ___elements0;
		NullCheck(L_294);
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_295 = L_294->___buttons_1;
		V_33 = L_295;
		V_34 = 0;
		goto IL_087e;
	}

IL_0854:
	{
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_296 = V_33;
		int32_t L_297 = V_34;
		NullCheck(L_296);
		int32_t L_298 = L_297;
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_299 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		V_35 = L_299;
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_300 = V_35;
		NullCheck(L_300);
		MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* L_301 = L_300->___buttonFunctionalityCache_3;
		V_36 = (bool)((!(((RuntimeObject*)(MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256*)L_301) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_302 = V_36;
		if (!L_302)
		{
			goto IL_0878;
		}
	}
	{
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_303 = V_35;
		NullCheck(L_303);
		MethodHandler_tE1C96482661C47C37CF27698C27B840C7FDEA256* L_304 = L_303->___buttonFunctionalityCache_3;
		NullCheck(L_304);
		MethodHandler_Execute_m2C5EA0BE90190B166DC612CAC5ECC8D7C7FB6AD2(L_304, NULL);
	}

IL_0878:
	{
		int32_t L_305 = V_34;
		V_34 = ((int32_t)il2cpp_codegen_add(L_305, 1));
	}

IL_087e:
	{
		int32_t L_306 = V_34;
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_307 = V_33;
		NullCheck(L_307);
		if ((((int32_t)L_306) < ((int32_t)((int32_t)(((RuntimeArray*)L_307)->max_length)))))
		{
			goto IL_0854;
		}
	}
	{
		return;
	}
}
// System.Void XGI.Tools.Window.Window::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Window__ctor_m96A2F5E2E67254EF6EE103FB9B235CAA0DFD3489 (Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2* __this, const RuntimeMethod* method) 
{
	{
		WindowFramework__ctor_m6C1881E60A3A8321EB37FE3D515F260C21009E83(__this, NULL);
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
// System.Void XGI.Tools.Window.PopupWindowElements::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupWindowElements__ctor_m79D537D549BDA45A707817621CE93CF4D253C2C8 (PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* __this, const RuntimeMethod* method) 
{
	{
		WindowElements__ctor_m0A2769F1D2E7D03A76DEFE14297E642F4F9F222D(__this, NULL);
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
// System.Void XGI.Tools.Window.PopupWindow::.ctor(XGI.Tools.Window.PopupWindowElements,System.Boolean,System.String,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupWindow__ctor_mB6404FE4AA7057FEA999BCCCD482DCC170162FAD (PopupWindow_t33A1224A481AFB89E1A29FCB2B684609CCD64339* __this, PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* ___windowElements0, bool ___backgroundShield1, String_t* ___windowSettingsAssetName2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowComponent_CloseWindow_mF63659E4DD61CF6F73D384217392CC2B362D5ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2);
		s_Il2CppMethodInitialized = true;
	}
	ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		Window__ctor_m96A2F5E2E67254EF6EE103FB9B235CAA0DFD3489(__this, NULL);
		V_0 = (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C*)NULL;
		PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* L_0 = ___windowElements0;
		NullCheck(L_0);
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_1 = ((WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB*)L_0)->___buttons_1;
		V_1 = (bool)((((RuntimeObject*)(ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_3 = (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C*)il2cpp_codegen_object_new(ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ButtonFunction__ctor_mE7B67DBC3841DF7C7600BD5883DB98032519CAE7(L_3, _stringLiteral6CE02DBF10772951A436ED08602B6C21AF7A06F2, NULL);
		V_0 = L_3;
		PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* L_4 = ___windowElements0;
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_5 = (ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D*)(ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D*)SZArrayNew(ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D_il2cpp_TypeInfo_var, (uint32_t)1);
		ButtonFunctionU5BU5D_t38D6A5B2C2CC9486F8EB244E9546AEEB1A1FA81D* L_6 = L_5;
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C*)L_7);
		NullCheck(L_4);
		((WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB*)L_4)->___buttons_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB*)L_4)->___buttons_1), (void*)L_6);
	}

IL_0034:
	{
		String_t* L_8 = ___windowSettingsAssetName2;
		Window_PrepareWindowInstantiation_m745F40989CC1FF78A81F06A8ED9A2AF9E6D1DA6B(__this, (&___canvas3), L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___canvas3;
		bool L_10 = ___backgroundShield1;
		PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* L_11 = ___windowElements0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = VirtualFuncInvoker3< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, bool, WindowElements_t114C7C5B3BC09C182A164BDCD0FD16DB96C974EB* >::Invoke(4 /* UnityEngine.GameObject XGI.Tools.Window.Window::InstantiateWindowDuringRuntime(UnityEngine.GameObject,System.Boolean,XGI.Tools.Window.WindowElements) */, __this, L_9, L_10, L_11);
		PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* L_13 = ___windowElements0;
		PopupWindow_DrawMessage_m5C785C34BADB83930B9CB2C95E2C2719FAC31D98(__this, L_13, NULL);
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_14 = V_0;
		V_2 = (bool)((!(((RuntimeObject*)(ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C*)L_14) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* L_16 = V_0;
		WindowComponent_tCA75ACEFB596AD9F0C6A6B1760FE8AC2E9C1BDF3* L_17 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___myWindowComponent_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_18 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_18, L_17, (intptr_t)((void*)WindowComponent_CloseWindow_mF63659E4DD61CF6F73D384217392CC2B362D5ED9_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		ButtonFunction_AddFunctionalityToButton_m1443BF61C4E7F8BAC1EFBBF29A001EBA10C3326B(L_16, L_18, NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void XGI.Tools.Window.PopupWindow::DrawMessage(XGI.Tools.Window.PopupWindowElements)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PopupWindow_DrawMessage_m5C785C34BADB83930B9CB2C95E2C2719FAC31D98 (PopupWindow_t33A1224A481AFB89E1A29FCB2B684609CCD64339* __this, PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* ___elements0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B850A03952CDBCC170C393B2A85CCA5764E310C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_2 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral9B850A03952CDBCC170C393B2A85CCA5764E310C, NULL);
		V_0 = L_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___myWindow_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_2);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_2, L_4, (bool)0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_9);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_9, L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_15, NULL);
		NullCheck(L_14);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_17;
		L_17 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_14, L_16, NULL);
		V_1 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_17, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_18, L_19, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_20, L_21, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_23), (24.0f), (110.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_22, L_23, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = V_1;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_25 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___settings_3;
		NullCheck(L_25);
		float L_26 = L_25->___titleBarSize_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), (-24.0f), ((float)il2cpp_codegen_subtract(((-L_26)), (10.0f))), /*hidden argument*/NULL);
		NullCheck(L_24);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_24, L_27, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_28);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_29, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_0_0_0_var) };
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		NullCheck(L_30);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_33;
		L_33 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_30, L_32, NULL);
		V_2 = ((TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*)CastclassClass((RuntimeObject*)L_33, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_il2cpp_TypeInfo_var));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34 = V_2;
		PopupWindowElements_t6F587309F3575C692F7BF81932CAD0B375BAEAD3* L_35 = ___elements0;
		NullCheck(L_35);
		String_t* L_36 = L_35->___message_2;
		NullCheck(L_34);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_34, L_36);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_37 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_38 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___settings_3;
		NullCheck(L_38);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_39 = L_38->___primaryFontAsset_12;
		NullCheck(L_37);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_37, L_39, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_41 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___settings_3;
		NullCheck(L_41);
		int32_t L_42 = L_41->___primaryFontStyle_13;
		NullCheck(L_40);
		TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8(L_40, L_42, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_43 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_44 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___settings_3;
		NullCheck(L_44);
		float L_45 = L_44->___primaryFontSize_14;
		NullCheck(L_43);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_43, L_45, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_46 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_47 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___settings_3;
		NullCheck(L_47);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48 = L_47->___primaryTextColor_15;
		NullCheck(L_46);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_46, L_48);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = V_2;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_50 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___settings_3;
		NullCheck(L_50);
		int32_t L_51 = L_50->___primaryTextAlignmentOptions_16;
		NullCheck(L_49);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_49, L_51, NULL);
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
// System.Void XGI.Tools.Window.StoredWindow::.ctor(System.Int32,System.Boolean,UnityEngine.GameObject,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoredWindow__ctor_mFC126E1ED82BE5130CB28873A08A9FEE71D142C3 (StoredWindow_tBC2B9B595E4E965C3C257FE284E6ADAA732C6CF0* __this, int32_t ___windowSerialNo0, bool ___shieldBackgroundUI1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas2, String_t* ___storageAssetName3, String_t* ___windowSettingsAssetName4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A737630358B169A409446D61FA0D512C791AEF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F81BDC54B392754B2C39400F2D5F95681A3AD3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BAE1EC4AD1D2DAA7FBBE5C17BB3EC9CC7AB734A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DC7CD55F51395A3349FF281583DC3AA10CDE42B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral696503371F599A19297E2701AB163FB5A863D770);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EF6C28C2BE22DF2B9B8B974045D0F1459B0165D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral713ECFE36FABF867410C9F1708B7154EB0FE625B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D9C9904356EE8D789F9327CCAF411965F3BE5D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8066C8112B197C451035C3E5C75FE54A544E4241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95E5A4A776B882060F9E3A65A1BFF381E3792392);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC05E2D8F4317104221FCCB874FE9304B7707B78C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC63AB5C11A6F0F85F6DCF562FB3628463FEE0A35);
		s_Il2CppMethodInitialized = true;
	}
	WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		Window__ctor_m96A2F5E2E67254EF6EE103FB9B235CAA0DFD3489(__this, NULL);
		String_t* L_0 = ___storageAssetName3;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7D9C9904356EE8D789F9327CCAF411965F3BE5D0, L_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(L_1, NULL);
		V_0 = ((WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342*)CastclassClass((RuntimeObject*)L_2, WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342_il2cpp_TypeInfo_var));
		V_1 = _stringLiteral8066C8112B197C451035C3E5C75FE54A544E4241;
		WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t L_6 = ___windowSerialNo0;
		V_5 = L_6;
		int32_t L_7 = V_5;
		V_4 = L_7;
		int32_t L_8 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract(L_8, 1)))
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0061;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_0051:
	{
		V_3 = _stringLiteral696503371F599A19297E2701AB163FB5A863D770;
		goto IL_0071;
	}

IL_0059:
	{
		V_3 = _stringLiteralC63AB5C11A6F0F85F6DCF562FB3628463FEE0A35;
		goto IL_0071;
	}

IL_0061:
	{
		V_3 = _stringLiteral3DC7CD55F51395A3349FF281583DC3AA10CDE42B;
		goto IL_0071;
	}

IL_0069:
	{
		V_3 = _stringLiteral2BAE1EC4AD1D2DAA7FBBE5C17BB3EC9CC7AB734A;
		goto IL_0071;
	}

IL_0071:
	{
		WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342* L_9 = V_0;
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9->___windowNames_4;
		NullCheck(L_10);
		int32_t L_11 = ___windowSerialNo0;
		V_6 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_00d5;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralC05E2D8F4317104221FCCB874FE9304B7707B78C);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC05E2D8F4317104221FCCB874FE9304B7707B78C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___windowSerialNo0), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_15;
		String_t* L_18 = V_3;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_17;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral6EF6C28C2BE22DF2B9B8B974045D0F1459B0165D);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral6EF6C28C2BE22DF2B9B8B974045D0F1459B0165D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		String_t* L_21 = ___storageAssetName3;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_21);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_20;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral0A737630358B169A409446D61FA0D512C791AEF9);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral0A737630358B169A409446D61FA0D512C791AEF9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_22;
		WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342* L_24 = V_0;
		NullCheck(L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24->___windowNames_4;
		NullCheck(L_25);
		V_7 = ((int32_t)(((RuntimeArray*)L_25)->max_length));
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_26);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_23;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral713ECFE36FABF867410C9F1708B7154EB0FE625B);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral713ECFE36FABF867410C9F1708B7154EB0FE625B);
		String_t* L_28;
		L_28 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_27, NULL);
		V_1 = L_28;
	}

IL_00d5:
	{
		goto IL_00ea;
	}

IL_00d8:
	{
		String_t* L_29 = ___storageAssetName3;
		String_t* L_30;
		L_30 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral0F81BDC54B392754B2C39400F2D5F95681A3AD3C, L_29, _stringLiteral95E5A4A776B882060F9E3A65A1BFF381E3792392, NULL);
		V_1 = L_30;
	}

IL_00ea:
	{
		String_t* L_31 = V_1;
		bool L_32;
		L_32 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_31, _stringLiteral8066C8112B197C451035C3E5C75FE54A544E4241, NULL);
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_0112;
		}
	}
	{
		WindowStorage_t1B69B9AA65EB473531C76D61A5F6179C1AE62342* L_34 = V_0;
		NullCheck(L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34->___windowNames_4;
		int32_t L_36 = ___windowSerialNo0;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		String_t* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		bool L_39 = ___shieldBackgroundUI1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = ___canvas2;
		String_t* L_41 = ___windowSettingsAssetName4;
		StoredWindow_InstantiateStoredWindow_m132E27049C46E98771C38574FFECB90C90F3041A(__this, L_38, L_39, L_40, L_41, NULL);
		goto IL_0119;
	}

IL_0112:
	{
		String_t* L_42 = V_1;
		Exception_t* L_43 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_43);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_43, L_42, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StoredWindow__ctor_mFC126E1ED82BE5130CB28873A08A9FEE71D142C3_RuntimeMethod_var)));
	}

IL_0119:
	{
		return;
	}
}
// System.Void XGI.Tools.Window.StoredWindow::.ctor(System.String,System.Boolean,UnityEngine.GameObject,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoredWindow__ctor_mF3C6BA6774A6AF24AD705780301D112F43F282DF (StoredWindow_tBC2B9B595E4E965C3C257FE284E6ADAA732C6CF0* __this, String_t* ___windowName0, bool ___shieldBackgroundUI1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas2, String_t* ___storageAssetName3, String_t* ___windowSettingsAssetName4, const RuntimeMethod* method) 
{
	{
		Window__ctor_m96A2F5E2E67254EF6EE103FB9B235CAA0DFD3489(__this, NULL);
		String_t* L_0 = ___windowName0;
		bool L_1 = ___shieldBackgroundUI1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___canvas2;
		String_t* L_3 = ___windowSettingsAssetName4;
		StoredWindow_InstantiateStoredWindow_m132E27049C46E98771C38574FFECB90C90F3041A(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void XGI.Tools.Window.StoredWindow::InstantiateStoredWindow(System.String,System.Boolean,UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoredWindow_InstantiateStoredWindow_m132E27049C46E98771C38574FFECB90C90F3041A (StoredWindow_tBC2B9B595E4E965C3C257FE284E6ADAA732C6CF0* __this, String_t* ___windowName0, bool ___backgroundShield1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas2, String_t* ___windowSettingsAssetName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D352682667F810905C4E94B6C152878C3DBC0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8EDD06E84130B42F355B87DE58F26A592E5360D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		String_t* L_0 = ___windowName0;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralF8EDD06E84130B42F355B87DE58F26A592E5360D, L_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(L_1, NULL);
		V_0 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)CastclassSealed((RuntimeObject*)L_2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___myWindow_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___myWindow_0), (void*)L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ((Window_t12EF00FCE4963440272D269AF19A196E6C0D32A2*)__this)->___myWindow_0;
		String_t* L_6 = ___windowName0;
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_6, _stringLiteral16D352682667F810905C4E94B6C152878C3DBC0C, NULL);
		NullCheck(L_5);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_5, L_7, NULL);
		String_t* L_8 = ___windowSettingsAssetName3;
		Window_PrepareWindowInstantiation_m745F40989CC1FF78A81F06A8ED9A2AF9E6D1DA6B(__this, (&___canvas2), L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = ___canvas2;
		bool L_10 = ___backgroundShield1;
		String_t* L_11 = ___windowName0;
		Window_InstantiateWindowDuringRuntime_m8C70949076D8669C5FF8D7FD1D4513F785E6E10D(__this, L_9, L_10, L_11, NULL);
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
// System.Void XGI.Tools.Window.QuickMessage::.ctor(System.String,UnityEngine.Color,System.Single,TMPro.FontStyles,System.Boolean,UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuickMessage__ctor_m3544B0ECF48D0A3FDFFEB26AD0D0AB4FA81AF574 (QuickMessage_tF4C09899C4D903BACF3D6B8A9EF256F5B426AC37* __this, String_t* ___message0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, float ___size2, int32_t ___fontStyle3, bool ___fadeColor4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___canvas5, String_t* ___windowSettingsAssetName6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A_mCDEC872B187D272DCA882A33410A0F8DFB727E66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTweener_t556CEE9763180C08CC1C4795B2A9B136442465FE_m25D77036CE5D995C6D3C39BA69A8D9EE1BA22348_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m2D462D10E962BFF0204033EEFA9A68F3D1635120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D5DEE42365A4E54C94613D42EC7ADDC1CA30C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral600C06A078F22CE3FD319C8BEEDA1771BCC58343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral743854B26ADD37F296D1FB2270120E077E18AE4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C2EC8C158471BED5BEEE63A822A771F3DBCFD5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral805FA7014F0DDE751CDBD5BF050D214DCDD12F9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB3B13294BED7305BEA01AD5AF7750BC0F6BADEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39581B4BFB6C377585CFC83CDDD72D787EB66DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB98CDE33B8279237E0FC8D6D7595CB82513DD74E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD047008F87744607AA71443858368A606C9E53D9);
		s_Il2CppMethodInitialized = true;
	}
	WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_5 = NULL;
	Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* V_6 = NULL;
	Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* V_7 = NULL;
	bool V_8 = false;
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_9 = NULL;
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_10 = NULL;
	int32_t V_11 = 0;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_16;
	memset((&V_16), 0, sizeof(V_16));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B19_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B18_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B20_0;
	memset((&G_B20_0), 0, sizeof(G_B20_0));
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B20_1 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B22_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B23_1 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B25_0 = NULL;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B24_0 = NULL;
	float G_B26_0 = 0.0f;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* G_B26_1 = NULL;
	{
		WindowFramework__ctor_m6C1881E60A3A8321EB37FE3D515F260C21009E83(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD047008F87744607AA71443858368A606C9E53D9, NULL);
		String_t* L_0 = ___windowSettingsAssetName6;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral805FA7014F0DDE751CDBD5BF050D214DCDD12F9D, L_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(L_1, NULL);
		V_0 = ((WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33*)CastclassClass((RuntimeObject*)L_2, WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33_il2cpp_TypeInfo_var));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___canvas5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_8;
		if (!L_5)
		{
			goto IL_00d2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral7C2EC8C158471BED5BEEE63A822A771F3DBCFD5A, NULL);
	}
	try
	{// begin try (depth: 1)
		{
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_6;
			L_6 = Object_FindObjectsOfType_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m2D462D10E962BFF0204033EEFA9A68F3D1635120(Object_FindObjectsOfType_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m2D462D10E962BFF0204033EEFA9A68F3D1635120_RuntimeMethod_var);
			V_9 = L_6;
			CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_7 = V_9;
			V_10 = L_7;
			V_11 = 0;
			goto IL_0083_1;
		}

IL_005b_1:
		{
			CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_8 = V_10;
			int32_t L_9 = V_11;
			NullCheck(L_8);
			int32_t L_10 = L_9;
			Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
			V_12 = L_11;
			Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_12 = V_12;
			NullCheck(L_12);
			bool L_13;
			L_13 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_12, _stringLiteral25D5DEE42365A4E54C94613D42EC7ADDC1CA30C3, NULL);
			V_13 = L_13;
			bool L_14 = V_13;
			if (!L_14)
			{
				goto IL_007d_1;
			}
		}
		{
			Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_15 = V_12;
			NullCheck(L_15);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
			L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
			___canvas5 = L_16;
		}

IL_007d_1:
		{
			int32_t L_17 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		}

IL_0083_1:
		{
			int32_t L_18 = V_11;
			CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_19 = V_10;
			NullCheck(L_19);
			if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
			{
				goto IL_005b_1;
			}
		}
		{
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = ___canvas5;
			NullCheck(L_20);
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
			L_21 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_20, NULL);
			NullCheck(L_21);
			String_t* L_22;
			L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
			String_t* L_23;
			L_23 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB98CDE33B8279237E0FC8D6D7595CB82513DD74E, L_22, _stringLiteral600C06A078F22CE3FD319C8BEEDA1771BCC58343, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_23, NULL);
			goto IL_00c6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00af;
		}
		throw e;
	}

CATCH_00af:
	{// begin catch(System.Object)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = WindowFramework_CreateNewCanvas_mDFDE9F0973A995AB852F4D083D7104B497706A2C(NULL);
		___canvas5 = L_24;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A65F6C007C89C49FEF7CE3D161BAB3590791086)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c6;
	}// end catch (depth: 1)

IL_00c6:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB39581B4BFB6C377585CFC83CDDD72D787EB66DB, NULL);
	}

IL_00d2:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_25, _stringLiteral743854B26ADD37F296D1FB2270120E077E18AE4B, NULL);
		V_1 = L_25;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_1;
		NullCheck(L_26);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_26, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_2 = L_27;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_1;
		NullCheck(L_28);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_29;
		L_29 = GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB(L_28, GameObject_AddComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m15E50057DA76710B136ADF4E7CA55A463D9DA3EB_RuntimeMethod_var);
		V_3 = L_29;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_30 = V_3;
		NullCheck(L_30);
		VirtualActionInvoker1< bool >::Invoke(25 /* System.Void UnityEngine.UI.Graphic::set_raycastTarget(System.Boolean) */, L_30, (bool)0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_1;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = ___canvas5;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		NullCheck(L_32);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_32, L_34, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_1;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_36);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_36, L_37, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_1;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_39);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_39, L_40, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_1;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_42);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_42, L_43, NULL);
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45 = L_44->___orientationState_4;
		V_15 = L_45;
		int32_t L_46 = V_15;
		V_14 = L_46;
		int32_t L_47 = V_14;
		if (!L_47)
		{
			goto IL_0152;
		}
	}
	{
		goto IL_014b;
	}

IL_014b:
	{
		int32_t L_48 = V_14;
		if ((((int32_t)L_48) == ((int32_t)1)))
		{
			goto IL_016a;
		}
	}
	{
		goto IL_0182;
	}

IL_0152:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_49 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_50), (250.0f), (800.0f), /*hidden argument*/NULL);
		NullCheck(L_49);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_49, L_50, NULL);
		goto IL_019a;
	}

IL_016a:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_51 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (800.0f), (250.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_51, L_52, NULL);
		goto IL_019a;
	}

IL_0182:
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_54), (600.0f), (600.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_53, L_54, NULL);
		goto IL_019a;
	}

IL_019a:
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_55 = V_3;
		String_t* L_56 = ___message0;
		NullCheck(L_55);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_55, L_56);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_57 = V_3;
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_58 = V_0;
		NullCheck(L_58);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_59 = L_58->___primaryFontAsset_12;
		NullCheck(L_57);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_57, L_59, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61 = ___color1;
		il2cpp_codegen_initobj((&V_16), sizeof(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_62 = V_16;
		bool L_63;
		L_63 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_61, L_62, NULL);
		G_B18_0 = L_60;
		if (L_63)
		{
			G_B19_0 = L_60;
			goto IL_01c5;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_64 = ___color1;
		G_B20_0 = L_64;
		G_B20_1 = G_B18_0;
		goto IL_01cb;
	}

IL_01c5:
	{
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_65 = V_0;
		NullCheck(L_65);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66 = L_65->___primaryTextColor_15;
		G_B20_0 = L_66;
		G_B20_1 = G_B19_0;
	}

IL_01cb:
	{
		NullCheck(G_B20_1);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B20_1, G_B20_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_67 = V_3;
		int32_t L_68 = ___fontStyle3;
		G_B21_0 = L_67;
		if (!L_68)
		{
			G_B22_0 = L_67;
			goto IL_01da;
		}
	}
	{
		int32_t L_69 = ___fontStyle3;
		G_B23_0 = L_69;
		G_B23_1 = G_B21_0;
		goto IL_01e0;
	}

IL_01da:
	{
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_70 = V_0;
		NullCheck(L_70);
		int32_t L_71 = L_70->___primaryFontStyle_13;
		G_B23_0 = L_71;
		G_B23_1 = G_B22_0;
	}

IL_01e0:
	{
		NullCheck(G_B23_1);
		TMP_Text_set_fontStyle_m61931944B2E922D50087312D80F8685A2F29EBF8(G_B23_1, G_B23_0, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_72 = V_3;
		float L_73 = ___size2;
		G_B24_0 = L_72;
		if ((((float)L_73) <= ((float)(0.0f))))
		{
			G_B25_0 = L_72;
			goto IL_01f2;
		}
	}
	{
		float L_74 = ___size2;
		G_B26_0 = L_74;
		G_B26_1 = G_B24_0;
		goto IL_01f8;
	}

IL_01f2:
	{
		WindowUISettings_t090D5AA291D9B56B3AC9B180762D2899CAB9CF33* L_75 = V_0;
		NullCheck(L_75);
		float L_76 = L_75->___primaryFontSize_14;
		G_B26_0 = L_76;
		G_B26_1 = G_B25_0;
	}

IL_01f8:
	{
		NullCheck(G_B26_1);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(G_B26_1, G_B26_0, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_77 = V_3;
		NullCheck(L_77);
		TMP_Text_set_alignment_mE5216A28797987CC19927ED3CB8DFAC438C6B95A(L_77, ((int32_t)514), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_78, _stringLiteralAB3B13294BED7305BEA01AD5AF7750BC0F6BADEA, NULL);
		V_4 = L_78;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = V_4;
		NullCheck(L_79);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_80;
		L_80 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_79, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		V_5 = L_80;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_4;
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_81, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = ___canvas5;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		NullCheck(L_82);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_82, L_84, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = V_4;
		NullCheck(L_85);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_86;
		L_86 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_86);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_86, L_87, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_4;
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_89);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_89, L_90, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_4;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_93;
		L_93 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_92);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_92, L_93, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_94 = V_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_95 = L_94;
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_96, L_97, NULL);
		NullCheck(L_95);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_95, L_98, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_99 = V_5;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_100 = V_2;
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_100, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_102, (5.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_101, L_103, NULL);
		NullCheck(L_99);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_99, L_104, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_105 = V_1;
		NullCheck(L_105);
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_106;
		L_106 = GameObject_AddComponent_TisTweener_t556CEE9763180C08CC1C4795B2A9B136442465FE_m25D77036CE5D995C6D3C39BA69A8D9EE1BA22348(L_105, GameObject_AddComponent_TisTweener_t556CEE9763180C08CC1C4795B2A9B136442465FE_m25D77036CE5D995C6D3C39BA69A8D9EE1BA22348_RuntimeMethod_var);
		V_6 = L_106;
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_107 = V_6;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_108 = V_5;
		NullCheck(L_107);
		Tweener_MoveObject_mCBA1C074A59DFA23BF1584597D9D508857B3706B(L_107, L_108, (2.0f), (bool)1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109 = V_4;
		NullCheck(L_109);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_110;
		L_110 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_109, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = V_1;
		NullCheck(L_111);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_112;
		L_112 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_111, NULL);
		NullCheck(L_110);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_110, L_112, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = V_1;
		NullCheck(L_113);
		Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* L_114;
		L_114 = GameObject_AddComponent_TisFade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A_mCDEC872B187D272DCA882A33410A0F8DFB727E66(L_113, GameObject_AddComponent_TisFade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A_mCDEC872B187D272DCA882A33410A0F8DFB727E66_RuntimeMethod_var);
		V_7 = L_114;
		Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* L_115 = V_7;
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_116 = V_6;
		NullCheck(L_115);
		Fade_Initiate_m15D2F82EE34E60B2FF02D3EA4A6242AF1E6FA66C(L_115, L_116, NULL);
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
// System.Void XGI.Tools.Window.QuickMessage/Fade::Initiate(XGI.Tools.Tweener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade_Initiate_m15D2F82EE34E60B2FF02D3EA4A6242AF1E6FA66C (Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* __this, Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* ___tweener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_0 = ___tweener0;
		__this->___tweener_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tweener_6), (void*)L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___text_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_5), (void*)L_1);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___text_5;
		NullCheck(L_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		__this->___color_4 = L_3;
		return;
	}
}
// System.Void XGI.Tools.Window.QuickMessage/Fade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade_Update_m60C7755E25F1941A5353817E39E481B7A60FDA57 (Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_4);
		Tweener_t556CEE9763180C08CC1C4795B2A9B136442465FE* L_1 = __this->___tweener_6;
		NullCheck(L_1);
		float L_2;
		L_2 = Lerper_get_progress_mD3500D2805C2AA0755ED6CBC129A51AC6CA33900(L_1, NULL);
		L_0->___a_3 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_2/(100.0f)))));
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___text_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___color_4;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		return;
	}
}
// System.Void XGI.Tools.Window.QuickMessage/Fade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fade__ctor_mC27E80B65BB8A93CBA7A75ABC3512BC838BE475F (Fade_t10E7691E26B2E44C2D68CA34F67301344BFFD69A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ButtonFunction_InitiateButton_mC7DF89611D223B2A03DE63E888221D044A40B386_inline (ButtonFunction_t55EBF08A2B869BB655E76FCBBF146DFE7185FD3C* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method) 
{
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___button0;
		__this->___selfReference_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selfReference_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_normalColor_m3EBF594F6FA2C6494ACA9FCB9B458807D85B96F8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color normalColor       { get { return m_NormalColor; } set { m_NormalColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_NormalColor_0 = L_0;
		// public Color normalColor       { get { return m_NormalColor; } set { m_NormalColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_highlightedColor_m04E97DF2CCE7CAC47120D8F486E18BF62F16FF86_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_HighlightedColor_1 = L_0;
		// public Color highlightedColor  { get { return m_HighlightedColor; } set { m_HighlightedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_pressedColor_m644C938090857AB07C57B25FE53F6DC2BB0DD5A8_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color pressedColor      { get { return m_PressedColor; } set { m_PressedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_PressedColor_2 = L_0;
		// public Color pressedColor      { get { return m_PressedColor; } set { m_PressedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_selectedColor_m76FEFB1148798B7A356C974CDEA3BA2E2E3C1D21_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color selectedColor     { get { return m_SelectedColor; } set { m_SelectedColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_SelectedColor_3 = L_0;
		// public Color selectedColor     { get { return m_SelectedColor; } set { m_SelectedColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_disabledColor_m4D10D1F8525CCC7E8E200E3994AFB28ADABB1D8E_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// public Color disabledColor     { get { return m_DisabledColor; } set { m_DisabledColor = value; } }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_DisabledColor_4 = L_0;
		// public Color disabledColor     { get { return m_DisabledColor; } set { m_DisabledColor = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_fadeDuration_m8519A304808384CE873377EC104969A6B9FBB6C5_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float fadeDuration      { get { return m_FadeDuration; } set { m_FadeDuration = value; } }
		float L_0 = ___value0;
		__this->___m_FadeDuration_6 = L_0;
		// public float fadeDuration      { get { return m_FadeDuration; } set { m_FadeDuration = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColorBlock_set_colorMultiplier_m920A048B95541DB0E92AF4AF3894BE7CD2D37102_inline (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float colorMultiplier   { get { return m_ColorMultiplier; } set { m_ColorMultiplier = value; } }
		float L_0 = ___value0;
		__this->___m_ColorMultiplier_5 = L_0;
		// public float colorMultiplier   { get { return m_ColorMultiplier; } set { m_ColorMultiplier = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_highlightedSprite_mEECDB7C62DE0C6A0B2A7D5D7ADF54EB8CDDB20B0_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// public Sprite highlightedSprite    { get { return m_HighlightedSprite; } set { m_HighlightedSprite = value; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_HighlightedSprite_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_HighlightedSprite_0), (void*)L_0);
		// public Sprite highlightedSprite    { get { return m_HighlightedSprite; } set { m_HighlightedSprite = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_pressedSprite_mD01568B87B1BC1374CCFB5CD190D7CD62A6FDAA3_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// public Sprite pressedSprite     { get { return m_PressedSprite; } set { m_PressedSprite = value; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_PressedSprite_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PressedSprite_1), (void*)L_0);
		// public Sprite pressedSprite     { get { return m_PressedSprite; } set { m_PressedSprite = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_selectedSprite_m902ACABEC203C0A2408B4ECD7B74C10DFE7BB340_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// public Sprite selectedSprite    { get { return m_SelectedSprite; } set { m_SelectedSprite = value; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_SelectedSprite_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SelectedSprite_2), (void*)L_0);
		// public Sprite selectedSprite    { get { return m_SelectedSprite; } set { m_SelectedSprite = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpriteState_set_disabledSprite_m624499C245DC34D314FF0326FE5ADCF35DA28E27_inline (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		// public Sprite disabledSprite    { get { return m_DisabledSprite; } set { m_DisabledSprite = value; } }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_DisabledSprite_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DisabledSprite_3), (void*)L_0);
		// public Sprite disabledSprite    { get { return m_DisabledSprite; } set { m_DisabledSprite = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = (int32_t)__this->____size_2;
		V_0 = L_2;
		__this->____size_2 = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		int32_t L_5 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
