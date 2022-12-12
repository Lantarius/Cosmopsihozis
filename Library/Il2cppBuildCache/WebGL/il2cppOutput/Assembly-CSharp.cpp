#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<Event>
struct List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D;
// System.Collections.Generic.List`1<KnownKnowledge>
struct List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Task>
struct List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<MainHeroValues>
struct UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityEvent`1<MainHeroValues>
struct UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Event[]
struct EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// KnownKnowledge[]
struct KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Task[]
struct TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ActionSelector
struct ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376;
// ActionType
struct ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072;
// Action_1_0
struct Action_1_0_t5826FC0B2A83B81F19AEF55644E809F8250A466C;
// Action_2_0
struct Action_2_0_t5362C7B72D02F7078D37DAA54A57126F0E6FC373;
// Action_3_1
struct Action_3_1_t69E849DA0C532A0DA2C24FCD2E5852FA1D7CC201;
// Action_4_4
struct Action_4_4_t1DDC0AEA9AC60D752AB939B5DD6B92AB401665CD;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// DataManager
struct DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Door_4_1
struct Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4;
// EnterRoom
struct EnterRoom_tF0A06166AFA4643F2F2F2AD17F9C5D9D95641B0A;
// Event
struct Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GoToTheTarget
struct GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// KnownKnowledge
struct KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1;
// LeaveRoom
struct LeaveRoom_tD3836D8AA73FB49003781382981740FFCD88AEBC;
// LightSwitch_2_1
struct LightSwitch_2_1_tC8EDEE55E7020B94181698F2E41FB95EF12F52A4;
// Location
struct Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9;
// MainHeroValues
struct MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectActions
struct ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E;
// ObjectTriggerEvent
struct ObjectTriggerEvent_tC02651D94F808259EA543EF7EAACCCB21A2B6F8D;
// OpenDoor
struct OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Room
struct Room_t44A97854220FADE8C026E18625929E32B64B3F6A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// Task
struct Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D;
// TaskManager
struct TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7;
// TestUIScript
struct TestUIScript_t321EE2BC03935061DD5D80DD492DB4D74D46B595;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TurnLightsOn
struct TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Door_4_1/<MoveDoor>d__6
struct U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5;
// GoToTheTarget/<StartWalkToTarget>d__1
struct U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// OpenDoor/<MoveDoor>d__7
struct U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2;
// OpenDoor/<StartWalkToTarget>d__6
struct U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147;
// Task/<EventOrderList>d__7
struct U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81;
// TurnLightsOn/<SwitchLight>d__2
struct U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4;

IL2CPP_EXTERN_C RuntimeClass* DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CE70853659A3D66FBE674E364548BBC2EBAF857;
IL2CPP_EXTERN_C String_t* _stringLiteral109C5533B44E87140CA2F92D59E1187AB60C4098;
IL2CPP_EXTERN_C String_t* _stringLiteral2F30F647DCBA657687FA3FFBFCEA97D95F2E1B50;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8247E89B2C4B4BE93FCFE7D2D951C0789B2244;
IL2CPP_EXTERN_C String_t* _stringLiteral8B5E17974DC6D4B26728482EBF164B288736F4C6;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FB7C0772F9FF8D5A2FE15C1A01D5630BB84098;
IL2CPP_EXTERN_C String_t* _stringLiteralAFAFF85DF74400679174C5F0333D61B38A066670;
IL2CPP_EXTERN_C String_t* _stringLiteralB35E1959C97E7C82761FCAA57ECBBF50E94419B2;
IL2CPP_EXTERN_C String_t* _stringLiteralB4D586945292878694EC7D38F9C3681955F10411;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralFA5B6B7B116638D685F661FF510E5B67169E0904;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1C0C3BDE228F657EA0C8EDFDE74253EA1CF1D;
IL2CPP_EXTERN_C const RuntimeMethod* ActionSelector_Interactable_mC6D4D2BF8373C3A8F907AC4F2DB389AC2F2BDB34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E_mFDB70656924D5188AA03CE9EB61930A6B016718E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m289E27FEE80C8FA2D92C4C39ADC279E1722B1FA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m6CDC6C77CB9FFD2A1CC80EFAFB316CDE312CB1DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoToTheTarget_U3CStartWalkToTargetU3Eb__1_0_m84129F8B0F4D1AE29E918683DB4233EEA192FF68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m03E22A7E7ECEA10F897336CDD2E559308BFD54AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m92F62EAD84C90AB9EE2C29C3B5F81A596FE36021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCCA08815A964C23165CFD679026A2B9FE9EF6E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenDoor_U3CStartWalkToTargetU3Eb__6_0_mEA1E94370321B22250CA1A463EFD0C3EDF05EF11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_CheckingControlLevel_mB309D4E1149F53B2828B167C670D9F7C5CF7D275_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_U3CEventOrderListU3Eb__7_0_mB6E4C154F51A895CCEFC45D9FAD3BBB304414063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_U3CEventOrderListU3Eb__7_1_m5546D63933747CCAD1B52B0F1C5552B78B6110DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TestUIScript_UpdateText_m9E95183E9528E1FE8D4C528359BD0B6A6BF24192_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TurnLightsOn_U3CSwitchLightU3Eb__2_0_mE1CC4D7F3ACD35ED8BED07E9718DE0D46EB69459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEventOrderListU3Ed__7_System_Collections_IEnumerator_Reset_m32E336BF7B354E18984E565AE1367A94BD5375DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveDoorU3Ed__6_System_Collections_IEnumerator_Reset_mF32C7D1C2E8DD55DF74D927B49328A2866A72075_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveDoorU3Ed__7_System_Collections_IEnumerator_Reset_mFDB4C9DE543B90E2707CA4A823381BC4EE3DCC23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartWalkToTargetU3Ed__1_System_Collections_IEnumerator_Reset_m355713DEB096A1920A5B5A2605B786A8A70F1B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartWalkToTargetU3Ed__6_System_Collections_IEnumerator_Reset_m110D8FC502C8DB03E15E38641661E0DB32EE1328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSwitchLightU3Ed__2_System_Collections_IEnumerator_Reset_m00B09BC8CD6EB703FE2B45298205009C2402F182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD4E1A070C1F063474B82D53D8E6B7EF555F78799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mDDBF974C7446E474A472C74120391FEA1566F588_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<Event>
struct List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D, ____items_1)); }
	inline EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A* get__items_1() const { return ____items_1; }
	inline EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D_StaticFields, ____emptyArray_5)); }
	inline EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EventU5BU5D_t34A256F4137A73D1913DB9D9A8BF4FCC3A08726A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<KnownKnowledge>
struct List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2, ____items_1)); }
	inline KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E* get__items_1() const { return ____items_1; }
	inline KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2_StaticFields, ____emptyArray_5)); }
	inline KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KnownKnowledgeU5BU5D_tE4AD87FF92F3DDF6297DFA5293016266114E539E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.List`1<Task>
struct List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121, ____items_1)); }
	inline TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1* get__items_1() const { return ____items_1; }
	inline TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121_StaticFields, ____emptyArray_5)); }
	inline TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TaskU5BU5D_tE8105EE9A47C232D78F2EAC2D814F30716EE6CA1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7  : public RuntimeObject
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Door_4_1/<MoveDoor>d__6
struct U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5  : public RuntimeObject
{
public:
	// System.Int32 Door_4_1/<MoveDoor>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Door_4_1/<MoveDoor>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Door_4_1 Door_4_1/<MoveDoor>d__6::<>4__this
	Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * ___U3CU3E4__this_2;
	// System.Single Door_4_1/<MoveDoor>d__6::<i>5__2
	float ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5, ___U3CU3E4__this_2)); }
	inline Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5, ___U3CiU3E5__2_3)); }
	inline float get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline float* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(float value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// GoToTheTarget/<StartWalkToTarget>d__1
struct U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6  : public RuntimeObject
{
public:
	// System.Int32 GoToTheTarget/<StartWalkToTarget>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GoToTheTarget/<StartWalkToTarget>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GoToTheTarget GoToTheTarget/<StartWalkToTarget>d__1::<>4__this
	GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6, ___U3CU3E4__this_2)); }
	inline GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// OpenDoor/<MoveDoor>d__7
struct U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2  : public RuntimeObject
{
public:
	// System.Int32 OpenDoor/<MoveDoor>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OpenDoor/<MoveDoor>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OpenDoor OpenDoor/<MoveDoor>d__7::<>4__this
	OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * ___U3CU3E4__this_2;
	// System.Single OpenDoor/<MoveDoor>d__7::<i>5__2
	float ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2, ___U3CU3E4__this_2)); }
	inline OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2, ___U3CiU3E5__2_3)); }
	inline float get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline float* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(float value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// OpenDoor/<StartWalkToTarget>d__6
struct U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147  : public RuntimeObject
{
public:
	// System.Int32 OpenDoor/<StartWalkToTarget>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object OpenDoor/<StartWalkToTarget>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// OpenDoor OpenDoor/<StartWalkToTarget>d__6::<>4__this
	OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147, ___U3CU3E4__this_2)); }
	inline OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Task/<EventOrderList>d__7
struct U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81  : public RuntimeObject
{
public:
	// System.Int32 Task/<EventOrderList>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Task/<EventOrderList>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Task Task/<EventOrderList>d__7::<>4__this
	Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81, ___U3CU3E4__this_2)); }
	inline Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TurnLightsOn/<SwitchLight>d__2
struct U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4  : public RuntimeObject
{
public:
	// System.Int32 TurnLightsOn/<SwitchLight>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TurnLightsOn/<SwitchLight>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TurnLightsOn TurnLightsOn/<SwitchLight>d__2::<>4__this
	TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4, ___U3CU3E4__this_2)); }
	inline TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<MainHeroValues>
struct UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitUntil
struct WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21  : public CustomYieldInstruction_t4ED1543FBAA3143362854EB1867B42E5D190A5C7
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21, ___m_Predicate_0)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Predicate_0), (void*)value);
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// KnownKnowledge/KnowKnowledge
struct KnowKnowledge_t0B16F6CDD6E4A78A4F3F2DC222DCAC235CDEB65D 
{
public:
	// System.Int32 KnownKnowledge/KnowKnowledge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KnowKnowledge_t0B16F6CDD6E4A78A4F3F2DC222DCAC235CDEB65D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
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


// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<MainHeroValues>
struct UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// MainHeroValues
struct MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 MainHeroValues::cl
	int32_t ___cl_4;
	// System.Single MainHeroValues::rwp
	float ___rwp_5;
	// System.Collections.Generic.List`1<KnownKnowledge> MainHeroValues::Knowledges
	List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2 * ___Knowledges_6;

public:
	inline static int32_t get_offset_of_cl_4() { return static_cast<int32_t>(offsetof(MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF, ___cl_4)); }
	inline int32_t get_cl_4() const { return ___cl_4; }
	inline int32_t* get_address_of_cl_4() { return &___cl_4; }
	inline void set_cl_4(int32_t value)
	{
		___cl_4 = value;
	}

	inline static int32_t get_offset_of_rwp_5() { return static_cast<int32_t>(offsetof(MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF, ___rwp_5)); }
	inline float get_rwp_5() const { return ___rwp_5; }
	inline float* get_address_of_rwp_5() { return &___rwp_5; }
	inline void set_rwp_5(float value)
	{
		___rwp_5 = value;
	}

	inline static int32_t get_offset_of_Knowledges_6() { return static_cast<int32_t>(offsetof(MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF, ___Knowledges_6)); }
	inline List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2 * get_Knowledges_6() const { return ___Knowledges_6; }
	inline List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2 ** get_address_of_Knowledges_6() { return &___Knowledges_6; }
	inline void set_Knowledges_6(List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2 * value)
	{
		___Knowledges_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Knowledges_6), (void*)value);
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ActionSelector
struct ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ActionSelector::ActionMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ActionMenu_4;
	// UnityEngine.UI.Button ActionSelector::Level0Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level0Button_5;
	// UnityEngine.UI.Button ActionSelector::Level1Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level1Button_6;
	// UnityEngine.UI.Button ActionSelector::Level2Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level2Button_7;
	// UnityEngine.UI.Button ActionSelector::Level3Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level3Button_8;
	// UnityEngine.UI.Button ActionSelector::Level4Button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Level4Button_9;
	// UnityEngine.UI.Text ActionSelector::Level0Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level0Text_10;
	// UnityEngine.UI.Text ActionSelector::Level1Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level1Text_11;
	// UnityEngine.UI.Text ActionSelector::Level2Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level2Text_12;
	// UnityEngine.UI.Text ActionSelector::Level3Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level3Text_13;
	// UnityEngine.UI.Text ActionSelector::Level4Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Level4Text_14;

public:
	inline static int32_t get_offset_of_ActionMenu_4() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___ActionMenu_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ActionMenu_4() const { return ___ActionMenu_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ActionMenu_4() { return &___ActionMenu_4; }
	inline void set_ActionMenu_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ActionMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionMenu_4), (void*)value);
	}

	inline static int32_t get_offset_of_Level0Button_5() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level0Button_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level0Button_5() const { return ___Level0Button_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level0Button_5() { return &___Level0Button_5; }
	inline void set_Level0Button_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level0Button_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level0Button_5), (void*)value);
	}

	inline static int32_t get_offset_of_Level1Button_6() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level1Button_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level1Button_6() const { return ___Level1Button_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level1Button_6() { return &___Level1Button_6; }
	inline void set_Level1Button_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level1Button_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level1Button_6), (void*)value);
	}

	inline static int32_t get_offset_of_Level2Button_7() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level2Button_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level2Button_7() const { return ___Level2Button_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level2Button_7() { return &___Level2Button_7; }
	inline void set_Level2Button_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level2Button_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level2Button_7), (void*)value);
	}

	inline static int32_t get_offset_of_Level3Button_8() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level3Button_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level3Button_8() const { return ___Level3Button_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level3Button_8() { return &___Level3Button_8; }
	inline void set_Level3Button_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level3Button_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level3Button_8), (void*)value);
	}

	inline static int32_t get_offset_of_Level4Button_9() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level4Button_9)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Level4Button_9() const { return ___Level4Button_9; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Level4Button_9() { return &___Level4Button_9; }
	inline void set_Level4Button_9(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Level4Button_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level4Button_9), (void*)value);
	}

	inline static int32_t get_offset_of_Level0Text_10() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level0Text_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level0Text_10() const { return ___Level0Text_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level0Text_10() { return &___Level0Text_10; }
	inline void set_Level0Text_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level0Text_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level0Text_10), (void*)value);
	}

	inline static int32_t get_offset_of_Level1Text_11() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level1Text_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level1Text_11() const { return ___Level1Text_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level1Text_11() { return &___Level1Text_11; }
	inline void set_Level1Text_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level1Text_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level1Text_11), (void*)value);
	}

	inline static int32_t get_offset_of_Level2Text_12() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level2Text_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level2Text_12() const { return ___Level2Text_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level2Text_12() { return &___Level2Text_12; }
	inline void set_Level2Text_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level2Text_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level2Text_12), (void*)value);
	}

	inline static int32_t get_offset_of_Level3Text_13() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level3Text_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level3Text_13() const { return ___Level3Text_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level3Text_13() { return &___Level3Text_13; }
	inline void set_Level3Text_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level3Text_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level3Text_13), (void*)value);
	}

	inline static int32_t get_offset_of_Level4Text_14() { return static_cast<int32_t>(offsetof(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376, ___Level4Text_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Level4Text_14() const { return ___Level4Text_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Level4Text_14() { return &___Level4Text_14; }
	inline void set_Level4Text_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Level4Text_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Level4Text_14), (void*)value);
	}
};


// ActionType
struct ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MainHeroValues ActionType::Values
	MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * ___Values_4;
	// System.String ActionType::ButtonText
	String_t* ___ButtonText_5;
	// System.Int32 ActionType::clAddValue
	int32_t ___clAddValue_6;
	// System.Single ActionType::rwpAddValue
	float ___rwpAddValue_7;
	// KnownKnowledge ActionType::Knowledge
	KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1 * ___Knowledge_8;
	// TaskManager ActionType::taskManager
	TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * ___taskManager_9;

public:
	inline static int32_t get_offset_of_Values_4() { return static_cast<int32_t>(offsetof(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072, ___Values_4)); }
	inline MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * get_Values_4() const { return ___Values_4; }
	inline MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF ** get_address_of_Values_4() { return &___Values_4; }
	inline void set_Values_4(MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * value)
	{
		___Values_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_4), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonText_5() { return static_cast<int32_t>(offsetof(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072, ___ButtonText_5)); }
	inline String_t* get_ButtonText_5() const { return ___ButtonText_5; }
	inline String_t** get_address_of_ButtonText_5() { return &___ButtonText_5; }
	inline void set_ButtonText_5(String_t* value)
	{
		___ButtonText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonText_5), (void*)value);
	}

	inline static int32_t get_offset_of_clAddValue_6() { return static_cast<int32_t>(offsetof(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072, ___clAddValue_6)); }
	inline int32_t get_clAddValue_6() const { return ___clAddValue_6; }
	inline int32_t* get_address_of_clAddValue_6() { return &___clAddValue_6; }
	inline void set_clAddValue_6(int32_t value)
	{
		___clAddValue_6 = value;
	}

	inline static int32_t get_offset_of_rwpAddValue_7() { return static_cast<int32_t>(offsetof(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072, ___rwpAddValue_7)); }
	inline float get_rwpAddValue_7() const { return ___rwpAddValue_7; }
	inline float* get_address_of_rwpAddValue_7() { return &___rwpAddValue_7; }
	inline void set_rwpAddValue_7(float value)
	{
		___rwpAddValue_7 = value;
	}

	inline static int32_t get_offset_of_Knowledge_8() { return static_cast<int32_t>(offsetof(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072, ___Knowledge_8)); }
	inline KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1 * get_Knowledge_8() const { return ___Knowledge_8; }
	inline KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1 ** get_address_of_Knowledge_8() { return &___Knowledge_8; }
	inline void set_Knowledge_8(KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1 * value)
	{
		___Knowledge_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Knowledge_8), (void*)value);
	}

	inline static int32_t get_offset_of_taskManager_9() { return static_cast<int32_t>(offsetof(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072, ___taskManager_9)); }
	inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * get_taskManager_9() const { return ___taskManager_9; }
	inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 ** get_address_of_taskManager_9() { return &___taskManager_9; }
	inline void set_taskManager_9(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * value)
	{
		___taskManager_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___taskManager_9), (void*)value);
	}
};


// DataManager
struct DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_StaticFields
{
public:
	// UnityEngine.Events.UnityEvent`1<MainHeroValues> DataManager::Action
	UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * ___Action_4;

public:
	inline static int32_t get_offset_of_Action_4() { return static_cast<int32_t>(offsetof(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_StaticFields, ___Action_4)); }
	inline UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * get_Action_4() const { return ___Action_4; }
	inline UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 ** get_address_of_Action_4() { return &___Action_4; }
	inline void set_Action_4(UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * value)
	{
		___Action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Action_4), (void*)value);
	}
};


// Event
struct Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TaskManager Event::_taskManager
	TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * ____taskManager_4;
	// PlayerController Event::_playerController
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ____playerController_5;
	// UnityEngine.GameObject Event::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_6;
	// System.Boolean Event::IsEventEnd
	bool ___IsEventEnd_7;

public:
	inline static int32_t get_offset_of__taskManager_4() { return static_cast<int32_t>(offsetof(Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4, ____taskManager_4)); }
	inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * get__taskManager_4() const { return ____taskManager_4; }
	inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 ** get_address_of__taskManager_4() { return &____taskManager_4; }
	inline void set__taskManager_4(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * value)
	{
		____taskManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____taskManager_4), (void*)value);
	}

	inline static int32_t get_offset_of__playerController_5() { return static_cast<int32_t>(offsetof(Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4, ____playerController_5)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get__playerController_5() const { return ____playerController_5; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of__playerController_5() { return &____playerController_5; }
	inline void set__playerController_5(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		____playerController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerController_5), (void*)value);
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4, ___target_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_6() const { return ___target_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsEventEnd_7() { return static_cast<int32_t>(offsetof(Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4, ___IsEventEnd_7)); }
	inline bool get_IsEventEnd_7() const { return ___IsEventEnd_7; }
	inline bool* get_address_of_IsEventEnd_7() { return &___IsEventEnd_7; }
	inline void set_IsEventEnd_7(bool value)
	{
		___IsEventEnd_7 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// MainHeroValues GameManager::Values
	MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * ___Values_4;

public:
	inline static int32_t get_offset_of_Values_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Values_4)); }
	inline MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * get_Values_4() const { return ___Values_4; }
	inline MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF ** get_address_of_Values_4() { return &___Values_4; }
	inline void set_Values_4(MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * value)
	{
		___Values_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Values_4), (void*)value);
	}
};


// KnownKnowledge
struct KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Location
struct Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Location::Name
	String_t* ___Name_4;
	// UnityEngine.GameObject Location::Lights
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Lights_5;
	// UnityEngine.GameObject Location::LightSwitch
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LightSwitch_6;
	// System.Boolean Location::IsLightsOn
	bool ___IsLightsOn_7;

public:
	inline static int32_t get_offset_of_Name_4() { return static_cast<int32_t>(offsetof(Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9, ___Name_4)); }
	inline String_t* get_Name_4() const { return ___Name_4; }
	inline String_t** get_address_of_Name_4() { return &___Name_4; }
	inline void set_Name_4(String_t* value)
	{
		___Name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_4), (void*)value);
	}

	inline static int32_t get_offset_of_Lights_5() { return static_cast<int32_t>(offsetof(Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9, ___Lights_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Lights_5() const { return ___Lights_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Lights_5() { return &___Lights_5; }
	inline void set_Lights_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Lights_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Lights_5), (void*)value);
	}

	inline static int32_t get_offset_of_LightSwitch_6() { return static_cast<int32_t>(offsetof(Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9, ___LightSwitch_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LightSwitch_6() const { return ___LightSwitch_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LightSwitch_6() { return &___LightSwitch_6; }
	inline void set_LightSwitch_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LightSwitch_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LightSwitch_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsLightsOn_7() { return static_cast<int32_t>(offsetof(Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9, ___IsLightsOn_7)); }
	inline bool get_IsLightsOn_7() const { return ___IsLightsOn_7; }
	inline bool* get_address_of_IsLightsOn_7() { return &___IsLightsOn_7; }
	inline void set_IsLightsOn_7(bool value)
	{
		___IsLightsOn_7 = value;
	}
};


// ObjectActions
struct ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject ObjectActions::Player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Player_4;
	// System.String ObjectActions::ButtonsText
	String_t* ___ButtonsText_5;
	// ActionSelector ObjectActions::ActionMenu
	ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * ___ActionMenu_6;
	// System.Boolean ObjectActions::IsNeededAdditonAction
	bool ___IsNeededAdditonAction_7;
	// ActionType ObjectActions::ActionLevel0
	ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * ___ActionLevel0_8;
	// ActionType ObjectActions::ActionLevel1
	ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * ___ActionLevel1_9;
	// ActionType ObjectActions::ActionLevel2
	ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * ___ActionLevel2_10;
	// ActionType ObjectActions::ActionLevel3
	ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * ___ActionLevel3_11;
	// ActionType ObjectActions::ActionLevel4
	ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * ___ActionLevel4_12;

public:
	inline static int32_t get_offset_of_Player_4() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___Player_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Player_4() const { return ___Player_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Player_4() { return &___Player_4; }
	inline void set_Player_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_4), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonsText_5() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___ButtonsText_5)); }
	inline String_t* get_ButtonsText_5() const { return ___ButtonsText_5; }
	inline String_t** get_address_of_ButtonsText_5() { return &___ButtonsText_5; }
	inline void set_ButtonsText_5(String_t* value)
	{
		___ButtonsText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonsText_5), (void*)value);
	}

	inline static int32_t get_offset_of_ActionMenu_6() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___ActionMenu_6)); }
	inline ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * get_ActionMenu_6() const { return ___ActionMenu_6; }
	inline ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 ** get_address_of_ActionMenu_6() { return &___ActionMenu_6; }
	inline void set_ActionMenu_6(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * value)
	{
		___ActionMenu_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionMenu_6), (void*)value);
	}

	inline static int32_t get_offset_of_IsNeededAdditonAction_7() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___IsNeededAdditonAction_7)); }
	inline bool get_IsNeededAdditonAction_7() const { return ___IsNeededAdditonAction_7; }
	inline bool* get_address_of_IsNeededAdditonAction_7() { return &___IsNeededAdditonAction_7; }
	inline void set_IsNeededAdditonAction_7(bool value)
	{
		___IsNeededAdditonAction_7 = value;
	}

	inline static int32_t get_offset_of_ActionLevel0_8() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___ActionLevel0_8)); }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * get_ActionLevel0_8() const { return ___ActionLevel0_8; }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 ** get_address_of_ActionLevel0_8() { return &___ActionLevel0_8; }
	inline void set_ActionLevel0_8(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * value)
	{
		___ActionLevel0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionLevel0_8), (void*)value);
	}

	inline static int32_t get_offset_of_ActionLevel1_9() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___ActionLevel1_9)); }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * get_ActionLevel1_9() const { return ___ActionLevel1_9; }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 ** get_address_of_ActionLevel1_9() { return &___ActionLevel1_9; }
	inline void set_ActionLevel1_9(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * value)
	{
		___ActionLevel1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionLevel1_9), (void*)value);
	}

	inline static int32_t get_offset_of_ActionLevel2_10() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___ActionLevel2_10)); }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * get_ActionLevel2_10() const { return ___ActionLevel2_10; }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 ** get_address_of_ActionLevel2_10() { return &___ActionLevel2_10; }
	inline void set_ActionLevel2_10(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * value)
	{
		___ActionLevel2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionLevel2_10), (void*)value);
	}

	inline static int32_t get_offset_of_ActionLevel3_11() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___ActionLevel3_11)); }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * get_ActionLevel3_11() const { return ___ActionLevel3_11; }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 ** get_address_of_ActionLevel3_11() { return &___ActionLevel3_11; }
	inline void set_ActionLevel3_11(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * value)
	{
		___ActionLevel3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionLevel3_11), (void*)value);
	}

	inline static int32_t get_offset_of_ActionLevel4_12() { return static_cast<int32_t>(offsetof(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E, ___ActionLevel4_12)); }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * get_ActionLevel4_12() const { return ___ActionLevel4_12; }
	inline ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 ** get_address_of_ActionLevel4_12() { return &___ActionLevel4_12; }
	inline void set_ActionLevel4_12(ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * value)
	{
		___ActionLevel4_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionLevel4_12), (void*)value);
	}
};


// ObjectTriggerEvent
struct ObjectTriggerEvent_tC02651D94F808259EA543EF7EAACCCB21A2B6F8D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ObjectActions ObjectTriggerEvent::ParentObject
	ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * ___ParentObject_4;
	// ActionSelector ObjectTriggerEvent::ActionMenu
	ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * ___ActionMenu_5;

public:
	inline static int32_t get_offset_of_ParentObject_4() { return static_cast<int32_t>(offsetof(ObjectTriggerEvent_tC02651D94F808259EA543EF7EAACCCB21A2B6F8D, ___ParentObject_4)); }
	inline ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * get_ParentObject_4() const { return ___ParentObject_4; }
	inline ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E ** get_address_of_ParentObject_4() { return &___ParentObject_4; }
	inline void set_ParentObject_4(ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * value)
	{
		___ParentObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParentObject_4), (void*)value);
	}

	inline static int32_t get_offset_of_ActionMenu_5() { return static_cast<int32_t>(offsetof(ObjectTriggerEvent_tC02651D94F808259EA543EF7EAACCCB21A2B6F8D, ___ActionMenu_5)); }
	inline ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * get_ActionMenu_5() const { return ___ActionMenu_5; }
	inline ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 ** get_address_of_ActionMenu_5() { return &___ActionMenu_5; }
	inline void set_ActionMenu_5(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * value)
	{
		___ActionMenu_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionMenu_5), (void*)value);
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean PlayerController::IsPlayerHaveControl
	bool ___IsPlayerHaveControl_4;
	// UnityEngine.GameObject PlayerController::Player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Player_5;
	// TaskManager PlayerController::_taskManager
	TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * ____taskManager_6;
	// UnityEngine.Camera PlayerController::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_7;
	// UnityEngine.AI.NavMeshAgent PlayerController::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_8;
	// System.Int32 PlayerController::SwitchControlLevel
	int32_t ___SwitchControlLevel_9;

public:
	inline static int32_t get_offset_of_IsPlayerHaveControl_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___IsPlayerHaveControl_4)); }
	inline bool get_IsPlayerHaveControl_4() const { return ___IsPlayerHaveControl_4; }
	inline bool* get_address_of_IsPlayerHaveControl_4() { return &___IsPlayerHaveControl_4; }
	inline void set_IsPlayerHaveControl_4(bool value)
	{
		___IsPlayerHaveControl_4 = value;
	}

	inline static int32_t get_offset_of_Player_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Player_5() const { return ___Player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Player_5() { return &___Player_5; }
	inline void set_Player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Player_5), (void*)value);
	}

	inline static int32_t get_offset_of__taskManager_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ____taskManager_6)); }
	inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * get__taskManager_6() const { return ____taskManager_6; }
	inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 ** get_address_of__taskManager_6() { return &____taskManager_6; }
	inline void set__taskManager_6(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * value)
	{
		____taskManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____taskManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_mainCamera_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mainCamera_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_7() const { return ___mainCamera_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_7() { return &___mainCamera_7; }
	inline void set_mainCamera_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_7), (void*)value);
	}

	inline static int32_t get_offset_of_agent_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___agent_8)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_8() const { return ___agent_8; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_8() { return &___agent_8; }
	inline void set_agent_8(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_8), (void*)value);
	}

	inline static int32_t get_offset_of_SwitchControlLevel_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___SwitchControlLevel_9)); }
	inline int32_t get_SwitchControlLevel_9() const { return ___SwitchControlLevel_9; }
	inline int32_t* get_address_of_SwitchControlLevel_9() { return &___SwitchControlLevel_9; }
	inline void set_SwitchControlLevel_9(int32_t value)
	{
		___SwitchControlLevel_9 = value;
	}
};


// Task
struct Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Event> Task::events
	List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * ___events_4;
	// TaskManager Task::_taskManager
	TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * ____taskManager_5;
	// PlayerController Task::_playerController
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ____playerController_6;
	// System.Int32 Task::CurrentEventId
	int32_t ___CurrentEventId_7;
	// Event Task::CurrentEvent
	Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * ___CurrentEvent_8;

public:
	inline static int32_t get_offset_of_events_4() { return static_cast<int32_t>(offsetof(Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D, ___events_4)); }
	inline List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * get_events_4() const { return ___events_4; }
	inline List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D ** get_address_of_events_4() { return &___events_4; }
	inline void set_events_4(List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * value)
	{
		___events_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_4), (void*)value);
	}

	inline static int32_t get_offset_of__taskManager_5() { return static_cast<int32_t>(offsetof(Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D, ____taskManager_5)); }
	inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * get__taskManager_5() const { return ____taskManager_5; }
	inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 ** get_address_of__taskManager_5() { return &____taskManager_5; }
	inline void set__taskManager_5(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * value)
	{
		____taskManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____taskManager_5), (void*)value);
	}

	inline static int32_t get_offset_of__playerController_6() { return static_cast<int32_t>(offsetof(Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D, ____playerController_6)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get__playerController_6() const { return ____playerController_6; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of__playerController_6() { return &____playerController_6; }
	inline void set__playerController_6(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		____playerController_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____playerController_6), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentEventId_7() { return static_cast<int32_t>(offsetof(Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D, ___CurrentEventId_7)); }
	inline int32_t get_CurrentEventId_7() const { return ___CurrentEventId_7; }
	inline int32_t* get_address_of_CurrentEventId_7() { return &___CurrentEventId_7; }
	inline void set_CurrentEventId_7(int32_t value)
	{
		___CurrentEventId_7 = value;
	}

	inline static int32_t get_offset_of_CurrentEvent_8() { return static_cast<int32_t>(offsetof(Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D, ___CurrentEvent_8)); }
	inline Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * get_CurrentEvent_8() const { return ___CurrentEvent_8; }
	inline Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 ** get_address_of_CurrentEvent_8() { return &___CurrentEvent_8; }
	inline void set_CurrentEvent_8(Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * value)
	{
		___CurrentEvent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentEvent_8), (void*)value);
	}
};


// TaskManager
struct TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String TaskManager::CurrentLocationName
	String_t* ___CurrentLocationName_4;
	// Location TaskManager::CurrentLocation
	Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * ___CurrentLocation_5;
	// System.Collections.Generic.List`1<Task> TaskManager::tasks
	List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121 * ___tasks_6;
	// Task TaskManager::CurrentTask
	Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * ___CurrentTask_7;
	// System.Int32 TaskManager::CurrentTaskId
	int32_t ___CurrentTaskId_8;
	// UnityEngine.GameObject TaskManager::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_9;

public:
	inline static int32_t get_offset_of_CurrentLocationName_4() { return static_cast<int32_t>(offsetof(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7, ___CurrentLocationName_4)); }
	inline String_t* get_CurrentLocationName_4() const { return ___CurrentLocationName_4; }
	inline String_t** get_address_of_CurrentLocationName_4() { return &___CurrentLocationName_4; }
	inline void set_CurrentLocationName_4(String_t* value)
	{
		___CurrentLocationName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentLocationName_4), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentLocation_5() { return static_cast<int32_t>(offsetof(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7, ___CurrentLocation_5)); }
	inline Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * get_CurrentLocation_5() const { return ___CurrentLocation_5; }
	inline Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 ** get_address_of_CurrentLocation_5() { return &___CurrentLocation_5; }
	inline void set_CurrentLocation_5(Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * value)
	{
		___CurrentLocation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentLocation_5), (void*)value);
	}

	inline static int32_t get_offset_of_tasks_6() { return static_cast<int32_t>(offsetof(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7, ___tasks_6)); }
	inline List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121 * get_tasks_6() const { return ___tasks_6; }
	inline List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121 ** get_address_of_tasks_6() { return &___tasks_6; }
	inline void set_tasks_6(List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121 * value)
	{
		___tasks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tasks_6), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentTask_7() { return static_cast<int32_t>(offsetof(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7, ___CurrentTask_7)); }
	inline Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * get_CurrentTask_7() const { return ___CurrentTask_7; }
	inline Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D ** get_address_of_CurrentTask_7() { return &___CurrentTask_7; }
	inline void set_CurrentTask_7(Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * value)
	{
		___CurrentTask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CurrentTask_7), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentTaskId_8() { return static_cast<int32_t>(offsetof(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7, ___CurrentTaskId_8)); }
	inline int32_t get_CurrentTaskId_8() const { return ___CurrentTaskId_8; }
	inline int32_t* get_address_of_CurrentTaskId_8() { return &___CurrentTaskId_8; }
	inline void set_CurrentTaskId_8(int32_t value)
	{
		___CurrentTaskId_8 = value;
	}

	inline static int32_t get_offset_of_target_9() { return static_cast<int32_t>(offsetof(TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7, ___target_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_9() const { return ___target_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_9() { return &___target_9; }
	inline void set_target_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_9), (void*)value);
	}
};


// TestUIScript
struct TestUIScript_t321EE2BC03935061DD5D80DD492DB4D74D46B595  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text TestUIScript::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(TestUIScript_t321EE2BC03935061DD5D80DD492DB4D74D46B595, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Action_1_0
struct Action_1_0_t5826FC0B2A83B81F19AEF55644E809F8250A466C  : public ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072
{
public:

public:
};


// Action_2_0
struct Action_2_0_t5362C7B72D02F7078D37DAA54A57126F0E6FC373  : public ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072
{
public:

public:
};


// Action_3_1
struct Action_3_1_t69E849DA0C532A0DA2C24FCD2E5852FA1D7CC201  : public ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072
{
public:

public:
};


// Action_4_4
struct Action_4_4_t1DDC0AEA9AC60D752AB939B5DD6B92AB401665CD  : public ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072
{
public:
	// ActionSelector Action_4_4::ActionMenu
	ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * ___ActionMenu_10;

public:
	inline static int32_t get_offset_of_ActionMenu_10() { return static_cast<int32_t>(offsetof(Action_4_4_t1DDC0AEA9AC60D752AB939B5DD6B92AB401665CD, ___ActionMenu_10)); }
	inline ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * get_ActionMenu_10() const { return ___ActionMenu_10; }
	inline ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 ** get_address_of_ActionMenu_10() { return &___ActionMenu_10; }
	inline void set_ActionMenu_10(ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * value)
	{
		___ActionMenu_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActionMenu_10), (void*)value);
	}
};


// Door_4_1
struct Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4  : public ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072
{
public:
	// UnityEngine.Vector3 Door_4_1::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_10;
	// UnityEngine.Vector3 Door_4_1::startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_11;
	// System.Single Door_4_1::Distance
	float ___Distance_12;

public:
	inline static int32_t get_offset_of_targetPosition_10() { return static_cast<int32_t>(offsetof(Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4, ___targetPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_10() const { return ___targetPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_10() { return &___targetPosition_10; }
	inline void set_targetPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_10 = value;
	}

	inline static int32_t get_offset_of_startPosition_11() { return static_cast<int32_t>(offsetof(Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4, ___startPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPosition_11() const { return ___startPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPosition_11() { return &___startPosition_11; }
	inline void set_startPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPosition_11 = value;
	}

	inline static int32_t get_offset_of_Distance_12() { return static_cast<int32_t>(offsetof(Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4, ___Distance_12)); }
	inline float get_Distance_12() const { return ___Distance_12; }
	inline float* get_address_of_Distance_12() { return &___Distance_12; }
	inline void set_Distance_12(float value)
	{
		___Distance_12 = value;
	}
};


// EnterRoom
struct EnterRoom_tF0A06166AFA4643F2F2F2AD17F9C5D9D95641B0A  : public Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D
{
public:

public:
};


// GoToTheTarget
struct GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C  : public Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// LeaveRoom
struct LeaveRoom_tD3836D8AA73FB49003781382981740FFCD88AEBC  : public Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D
{
public:

public:
};


// LightSwitch_2_1
struct LightSwitch_2_1_tC8EDEE55E7020B94181698F2E41FB95EF12F52A4  : public ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072
{
public:

public:
};


// OpenDoor
struct OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C  : public Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4
{
public:
	// UnityEngine.GameObject OpenDoor::Door
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Door_8;
	// UnityEngine.Vector3 OpenDoor::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_9;
	// UnityEngine.Vector3 OpenDoor::startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_10;
	// System.Single OpenDoor::Distance
	float ___Distance_11;

public:
	inline static int32_t get_offset_of_Door_8() { return static_cast<int32_t>(offsetof(OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C, ___Door_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Door_8() const { return ___Door_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Door_8() { return &___Door_8; }
	inline void set_Door_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Door_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Door_8), (void*)value);
	}

	inline static int32_t get_offset_of_targetPosition_9() { return static_cast<int32_t>(offsetof(OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C, ___targetPosition_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_9() const { return ___targetPosition_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_9() { return &___targetPosition_9; }
	inline void set_targetPosition_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_9 = value;
	}

	inline static int32_t get_offset_of_startPosition_10() { return static_cast<int32_t>(offsetof(OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C, ___startPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPosition_10() const { return ___startPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPosition_10() { return &___startPosition_10; }
	inline void set_startPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPosition_10 = value;
	}

	inline static int32_t get_offset_of_Distance_11() { return static_cast<int32_t>(offsetof(OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C, ___Distance_11)); }
	inline float get_Distance_11() const { return ___Distance_11; }
	inline float* get_address_of_Distance_11() { return &___Distance_11; }
	inline void set_Distance_11(float value)
	{
		___Distance_11 = value;
	}
};


// Room
struct Room_t44A97854220FADE8C026E18625929E32B64B3F6A  : public Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9
{
public:

public:
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// TurnLightsOn
struct TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67  : public Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4
{
public:
	// Location TurnLightsOn::location
	Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * ___location_8;

public:
	inline static int32_t get_offset_of_location_8() { return static_cast<int32_t>(offsetof(TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67, ___location_8)); }
	inline Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * get_location_8() const { return ___location_8; }
	inline Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 ** get_address_of_location_8() { return &___location_8; }
	inline void set_location_8(Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * value)
	{
		___location_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___location_8), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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


// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// System.Void UnityEngine.Events.UnityAction`1<MainHeroValues>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF (UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<MainHeroValues>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE (UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * __this, UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 *, UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TaskManager>()
inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<KnownKnowledge>::Add(!0)
inline void List_1_Add_m03E22A7E7ECEA10F897336CDD2E559308BFD54AB (List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2 * __this, KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2 *, KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void ActionType::UpdateControlLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionType_UpdateControlLevel_mB0EF4A715E3F44B44FEFBE75EF1CF372E5900842 (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method);
// System.Void DataManager::StartAction(MainHeroValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5 (MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * ___Values0, const RuntimeMethod* method);
// System.Void ActionType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionType__ctor_mF0E9B9B9A1F2958C3137DE666F2253F0A5EA57E2 (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ActionSelector>()
inline ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<MainHeroValues>::Invoke(!0)
inline void UnityEvent_1_Invoke_mD4E1A070C1F063474B82D53D8E6B7EF555F78799 (UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * __this, MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 *, MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF *, const RuntimeMethod*))UnityEvent_1_Invoke_m73C0FE7D4CDD8627332257E8503F2E9862E33C3E_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<MainHeroValues>::.ctor()
inline void UnityEvent_1__ctor_mDDBF974C7446E474A472C74120391FEA1566F588 (UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 *, const RuntimeMethod*))UnityEvent_1__ctor_mD87552C18A41196B69A62A366C8238FC246B151A_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Collections.IEnumerator Door_4_1::MoveDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Door_4_1_MoveDoor_mD63D11C85EFD126C1A76CF8F20732B130DF32FE6 (Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Door_4_1/<MoveDoor>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveDoorU3Ed__6__ctor_mDECB3742BFC3D767CEC34B6B5D189F853E93CF8C (U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Task::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_mDCF34F71A6A8267585FFC491EE51809DA119B5EE (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Event>::get_Item(System.Int32)
inline Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_inline (List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * (*) (List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AI.NavMeshAgent::get_remainingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_remainingDistance_mB55D92B0CBEA48367C5FC6879FDEE2915FB6CD36 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Void Event::StopPreviousEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_StopPreviousEvent_mA227F19A9DA2CDD8059338B0F240527BB528552D (Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.IEnumerator GoToTheTarget::StartWalkToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoToTheTarget_StartWalkToTarget_mACA1482A2916448CE7090649603B9352B63A6DA7 (GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * __this, const RuntimeMethod* method);
// System.Void GoToTheTarget/<StartWalkToTarget>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWalkToTargetU3Ed__1__ctor_m67B6649AFC30855FA94C2960856B86893EF0068C (U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mD229CAE285A8C746EDC9C97D3B3B3CEBC502DCEF (Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * __this, const RuntimeMethod* method);
// System.Boolean Event::IsPlayerReachDestanation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_IsPlayerReachDestanation_m8F2F315385CC529AE2BA9397FCE9D9D8BB4E6B37 (Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * __this, const RuntimeMethod* method);
// System.Void Location::SwitchLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_SwitchLights_mDB3517FAC84C4BD70AADB44576F36B81E329D53C (Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::TryGetComponent<TaskManager>(!!0&)
inline bool GameObject_TryGetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m6CDC6C77CB9FFD2A1CC80EFAFB316CDE312CB1DA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 **, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_mC7639C3E3E2A65695113BCF25718826CC392D6CB_gshared)(__this, ___component0, method);
}
// System.Void TaskManager::LoadLocationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskManager_LoadLocationProperties_mB3D6B8C300F8358BB83C489B474A38D05D87B295 (TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * __this, const RuntimeMethod* method);
// System.Void TaskManager::ResetLocationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskManager_ResetLocationProperties_m13982400571BE475C3DE472FC29E283D5E793C39 (TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void ObjectActions::StoreButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_StoreButtons_mBB7C3169CEB0F9A097FDC2C0D82AB03129CBDD04 (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method);
// System.Void ObjectActions::InitializedTriggerText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225 (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9 (UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<ObjectActions>()
inline ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * Component_GetComponentInParent_TisObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E_mFDB70656924D5188AA03CE9EB61930A6B016718E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void ObjectActions::SetActionsIntoUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_SetActionsIntoUI_m4ECA7BF366CF8557227C693A3B3176BC629F09EB (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method);
// System.Void ObjectActions::CleanButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_CleanButtons_m9DA2A3D17794D2ECB1C97BB92D4E9ED6B3B7F8BA (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator OpenDoor::StartWalkToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenDoor_StartWalkToTarget_m16F8424B868369C73266C954D97FD41168CD51D1 (OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * __this, const RuntimeMethod* method);
// System.Void OpenDoor/<StartWalkToTarget>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWalkToTargetU3Ed__6__ctor_m61C487D58E12FECEEBAA7CA22DCAB59CFB6C5457 (U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void OpenDoor/<MoveDoor>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveDoorU3Ed__7__ctor_mEA788C35FD09E061461470B5E13D3E0E19B113FB (U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TaskManager>()
inline TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * Component_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m289E27FEE80C8FA2D92C4C39ADC279E1722B1FA9 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// System.Void Location::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location__ctor_mE8BDA7A878909BB7942F020078B7D5430C402604 (Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Task::EventOrderList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_EventOrderList_m2D8EC3816F0680E7E7174E42666EFE00FF9D2497 (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method);
// System.Void Task/<EventOrderList>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventOrderListU3Ed__7__ctor_m9DF680A51CEA841F6F0367C946E0E8FEB53EDB02 (U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Event>::get_Count()
inline int32_t List_1_get_Count_m92F62EAD84C90AB9EE2C29C3B5F81A596FE36021_inline (List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Task>::get_Item(System.Int32)
inline Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * List_1_get_Item_mCCA08815A964C23165CFD679026A2B9FE9EF6E7C_inline (List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * (*) (List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Task::StartNewTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_StartNewTask_m487FDDD2945A724ADA1B66D9F212C872609106C7 (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TurnLightsOn::SwitchLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnLightsOn_SwitchLight_mC60B1072D0A98964A1D79DC3CC2F7B8BD200BF46 (TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * __this, const RuntimeMethod* method);
// System.Void TurnLightsOn/<SwitchLight>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchLightU3Ed__2__ctor_m949132A91EF36DC66396A2D48A0679CDAEF060DD (U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9 (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * __this, Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___predicate0, const RuntimeMethod* method);
// System.Collections.IEnumerator OpenDoor::MoveDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenDoor_MoveDoor_mD4CE58A2EBDC0047FF934C0E8FCF78451833945D (OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * __this, const RuntimeMethod* method);
// System.Void Task::StartNextEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_StartNextEvent_m972C1F5080F135FF20610DDBA1D4B25B229C030C (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ActionSelector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSelector_Start_m9C568CEFBCE04EEC7CD32BFD2612CF2E515502CC (ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionSelector_Interactable_mC6D4D2BF8373C3A8F907AC4F2DB389AC2F2BDB34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataManager.Action.AddListener(Interactable);
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * L_0 = ((DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var))->get_Action_4();
		UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 * L_1 = (UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 *)il2cpp_codegen_object_new(UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF(L_1, __this, (intptr_t)((intptr_t)ActionSelector_Interactable_mC6D4D2BF8373C3A8F907AC4F2DB389AC2F2BDB34_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF_RuntimeMethod_var);
		UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE(L_0, L_1, /*hidden argument*/UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ActionSelector::Interactable(MainHeroValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSelector_Interactable_mC6D4D2BF8373C3A8F907AC4F2DB389AC2F2BDB34 (ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * __this, MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * ___Values0, const RuntimeMethod* method)
{
	{
		// if (Values.cl < MainHeroValues.LEVEL_4_EDGE)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = ___Values0;
		int32_t L_1 = L_0->get_cl_4();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)20))))
		{
			goto IL_003b;
		}
	}
	{
		// Level4Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2 = __this->get_Level4Button_9();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_2, (bool)1, /*hidden argument*/NULL);
		// Level3Button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_Level3Button_8();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_3, (bool)0, /*hidden argument*/NULL);
		// Level2Button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_Level2Button_7();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_4, (bool)0, /*hidden argument*/NULL);
		// Level1Button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = __this->get_Level1Button_6();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003b:
	{
		// Level4Button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_Level4Button_9();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_6, (bool)0, /*hidden argument*/NULL);
		// if (Values.cl < MainHeroValues.LEVEL_3_EDGE)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_7 = ___Values0;
		int32_t L_8 = L_7->get_cl_4();
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)50))))
		{
			goto IL_005f;
		}
	}
	{
		// Level3Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_Level3Button_8();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_006b;
	}

IL_005f:
	{
		// Level3Button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_Level3Button_8();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_10, (bool)0, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// if (Values.cl < MainHeroValues.LEVEL_2_EDGE)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_11 = ___Values0;
		int32_t L_12 = L_11->get_cl_4();
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)70))))
		{
			goto IL_0083;
		}
	}
	{
		// Level2Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_Level2Button_7();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_13, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_008f;
	}

IL_0083:
	{
		// Level2Button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_14 = __this->get_Level2Button_7();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// if (Values.cl < MainHeroValues.LEVEL_1_EDGE)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_15 = ___Values0;
		int32_t L_16 = L_15->get_cl_4();
		if ((((int32_t)L_16) >= ((int32_t)((int32_t)95))))
		{
			goto IL_00a6;
		}
	}
	{
		// Level1Button.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = __this->get_Level1Button_6();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_17, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a6:
	{
		// Level1Button.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_18 = __this->get_Level1Button_6();
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_18, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ActionSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionSelector__ctor_mED63DD92094767671F3A67643CE7CF68C3789D84 (ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ActionType::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionType_Awake_m146EC4DE2DF97C3D5564D2B0C1209C792BA49788 (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// taskManager = GameObject.Find("Player").GetComponent<TaskManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_1;
		L_1 = GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179(L_0, /*hidden argument*/GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179_RuntimeMethod_var);
		__this->set_taskManager_9(L_1);
		// }
		return;
	}
}
// System.Void ActionType::UpdateControlLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionType_UpdateControlLevel_mB0EF4A715E3F44B44FEFBE75EF1CF372E5900842 (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method)
{
	{
		// if (Values.cl + clAddValue >= 0 && Values.cl + clAddValue <= 100)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = __this->get_Values_4();
		int32_t L_1 = L_0->get_cl_4();
		int32_t L_2 = __this->get_clAddValue_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2))) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_3 = __this->get_Values_4();
		int32_t L_4 = L_3->get_cl_4();
		int32_t L_5 = __this->get_clAddValue_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5))) > ((int32_t)((int32_t)100))))
		{
			goto IL_0044;
		}
	}
	{
		// Values.cl += clAddValue;
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_6 = __this->get_Values_4();
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_7 = L_6;
		int32_t L_8 = L_7->get_cl_4();
		int32_t L_9 = __this->get_clAddValue_6();
		L_7->set_cl_4(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9)));
		// }
		return;
	}

IL_0044:
	{
		// else if (Values.cl + clAddValue <= 0)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_10 = __this->get_Values_4();
		int32_t L_11 = L_10->get_cl_4();
		int32_t L_12 = __this->get_clAddValue_6();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)L_12))) > ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		// Values.cl = 0;
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_13 = __this->get_Values_4();
		L_13->set_cl_4(0);
		// }
		return;
	}

IL_0066:
	{
		// Values.cl = 100;
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_14 = __this->get_Values_4();
		L_14->set_cl_4(((int32_t)100));
		// }
		return;
	}
}
// System.Void ActionType::UpdateRWP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionType_UpdateRWP_mBDF9B7F1542EE795395B95E42111D0A070E90124 (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method)
{
	{
		// if (Values.rwp + rwpAddValue > 10 && Values.rwp + rwpAddValue < 0)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = __this->get_Values_4();
		float L_1 = L_0->get_rwp_5();
		float L_2 = __this->get_rwpAddValue_7();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_1, (float)L_2))) > ((float)(10.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_3 = __this->get_Values_4();
		float L_4 = L_3->get_rwp_5();
		float L_5 = __this->get_rwpAddValue_7();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_4, (float)L_5))) < ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// Values.rwp += rwpAddValue;
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_6 = __this->get_Values_4();
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_7 = L_6;
		float L_8 = L_7->get_rwp_5();
		float L_9 = __this->get_rwpAddValue_7();
		L_7->set_rwp_5(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		// }
		return;
	}

IL_004b:
	{
		// else if (Values.rwp + rwpAddValue <= 0)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_10 = __this->get_Values_4();
		float L_11 = L_10->get_rwp_5();
		float L_12 = __this->get_rwpAddValue_7();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_11, (float)L_12))) <= ((float)(0.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		// Values.rwp = 0;
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_13 = __this->get_Values_4();
		L_13->set_rwp_5((0.0f));
		// }
		return;
	}

IL_0075:
	{
		// else Values.rwp = 10;
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_14 = __this->get_Values_4();
		L_14->set_rwp_5((10.0f));
		// }
		return;
	}
}
// System.Void ActionType::AddNewKnowledge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionType_AddNewKnowledge_m0AE527DE86AAD6ABFD6C74B148F7E5B93A0DE9AD (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m03E22A7E7ECEA10F897336CDD2E559308BFD54AB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Values.Knowledges.Add(Knowledge);
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = __this->get_Values_4();
		List_1_t7E51A18CB3115C4D821332B5C3F8205517AED9A2 * L_1 = L_0->get_Knowledges_6();
		KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1 * L_2 = __this->get_Knowledge_8();
		List_1_Add_m03E22A7E7ECEA10F897336CDD2E559308BFD54AB(L_1, L_2, /*hidden argument*/List_1_Add_m03E22A7E7ECEA10F897336CDD2E559308BFD54AB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ActionType::DoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionType_DoAction_mA86B2D13CD7FA5B0AD240FC9AD2E73784CBACA10 (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method)
{
	{
		// virtual public void DoAction() { }
		return;
	}
}
// System.String ActionType::SetActionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ActionType_SetActionName_mD0324B9B7C57B4DD01AFF7F996F05DD261D5AE47 (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method)
{
	{
		// virtual public string SetActionName() { return null; }
		return (String_t*)NULL;
	}
}
// System.Void ActionType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionType__ctor_mF0E9B9B9A1F2958C3137DE666F2253F0A5EA57E2 (ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFAFF85DF74400679174C5F0333D61B38A066670);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] protected string ButtonText = "Place holder";
		__this->set_ButtonText_5(_stringLiteralAFAFF85DF74400679174C5F0333D61B38A066670);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Action_1_0::DoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_0_DoAction_m1C93C18BC2EE0021C04AAF532AE38F98E75F9924 (Action_1_0_t5826FC0B2A83B81F19AEF55644E809F8250A466C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateControlLevel();
		ActionType_UpdateControlLevel_mB0EF4A715E3F44B44FEFBE75EF1CF372E5900842(__this, /*hidden argument*/NULL);
		// DataManager.StartAction(Values);
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_Values_4();
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Action_1_0::SetActionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Action_1_0_SetActionName_mEF1535174323220C6BCE5D6D445D659C1A670F90 (Action_1_0_t5826FC0B2A83B81F19AEF55644E809F8250A466C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4D586945292878694EC7D38F9C3681955F10411);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ButtonText = "Increase Control Level";
		((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->set_ButtonText_5(_stringLiteralB4D586945292878694EC7D38F9C3681955F10411);
		// return ButtonText;
		String_t* L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_ButtonText_5();
		return L_0;
	}
}
// System.Void Action_1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_0__ctor_m8D78F24E2BE052B9129C0AFC9C7CB49843B32435 (Action_1_0_t5826FC0B2A83B81F19AEF55644E809F8250A466C * __this, const RuntimeMethod* method)
{
	{
		ActionType__ctor_mF0E9B9B9A1F2958C3137DE666F2253F0A5EA57E2(__this, /*hidden argument*/NULL);
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
// System.Void Action_2_0::DoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_0_DoAction_m405EF704A5FA8493EE8AF82B246475496A45CE27 (Action_2_0_t5362C7B72D02F7078D37DAA54A57126F0E6FC373 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateControlLevel();
		ActionType_UpdateControlLevel_mB0EF4A715E3F44B44FEFBE75EF1CF372E5900842(__this, /*hidden argument*/NULL);
		// DataManager.StartAction(Values);
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_Values_4();
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Action_2_0::SetActionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Action_2_0_SetActionName_mF6463CCC490EC621BBB83A17730BF67045DA8DD2 (Action_2_0_t5362C7B72D02F7078D37DAA54A57126F0E6FC373 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CE70853659A3D66FBE674E364548BBC2EBAF857);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ButtonText = "Reduce Control Level";
		((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->set_ButtonText_5(_stringLiteral0CE70853659A3D66FBE674E364548BBC2EBAF857);
		// return ButtonText;
		String_t* L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_ButtonText_5();
		return L_0;
	}
}
// System.Void Action_2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_0__ctor_m04DC440D27DF40A427B41EA1A1792E2D26468F16 (Action_2_0_t5362C7B72D02F7078D37DAA54A57126F0E6FC373 * __this, const RuntimeMethod* method)
{
	{
		ActionType__ctor_mF0E9B9B9A1F2958C3137DE666F2253F0A5EA57E2(__this, /*hidden argument*/NULL);
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
// System.Void Action_3_1::DoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_1_DoAction_mDFC966C82CD67FDA2AB4999BB404561FE0EF8999 (Action_3_1_t69E849DA0C532A0DA2C24FCD2E5852FA1D7CC201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateControlLevel();
		ActionType_UpdateControlLevel_mB0EF4A715E3F44B44FEFBE75EF1CF372E5900842(__this, /*hidden argument*/NULL);
		// DataManager.StartAction(Values);
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_Values_4();
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Action_3_1::SetActionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Action_3_1_SetActionName_m1F7F5027A49DE6CA44A5A3A130B9571BA0D0B8A1 (Action_3_1_t69E849DA0C532A0DA2C24FCD2E5852FA1D7CC201 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F30F647DCBA657687FA3FFBFCEA97D95F2E1B50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ButtonText = "Touch Cube";
		((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->set_ButtonText_5(_stringLiteral2F30F647DCBA657687FA3FFBFCEA97D95F2E1B50);
		// return ButtonText;
		String_t* L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_ButtonText_5();
		return L_0;
	}
}
// System.Void Action_3_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_3_1__ctor_mC66E545372D8A7BFD0DF8983040FB9B5E0C1E877 (Action_3_1_t69E849DA0C532A0DA2C24FCD2E5852FA1D7CC201 * __this, const RuntimeMethod* method)
{
	{
		ActionType__ctor_mF0E9B9B9A1F2958C3137DE666F2253F0A5EA57E2(__this, /*hidden argument*/NULL);
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
// System.Void Action_4_4::DoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4_4_DoAction_m6E5F4B43FB79A91CD7E0855649E5F73818C736EF (Action_4_4_t1DDC0AEA9AC60D752AB939B5DD6B92AB401665CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ActionMenu = GameObject.Find("UI").GetComponent<ActionSelector>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, /*hidden argument*/NULL);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_1;
		L_1 = GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5(L_0, /*hidden argument*/GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5_RuntimeMethod_var);
		__this->set_ActionMenu_10(L_1);
		// ActionMenu.ActionMenu.gameObject.SetActive(false);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_2 = __this->get_ActionMenu_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_2->get_ActionMenu_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// UpdateControlLevel();
		ActionType_UpdateControlLevel_mB0EF4A715E3F44B44FEFBE75EF1CF372E5900842(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// DataManager.StartAction(Values);
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_6 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_Values_4();
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5(L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Action_4_4::SetActionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Action_4_4_SetActionName_m634B6EF0B525572F6C6017F93E7F0175C133397F (Action_4_4_t1DDC0AEA9AC60D752AB939B5DD6B92AB401665CD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA5B6B7B116638D685F661FF510E5B67169E0904);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ButtonText = "KILL THIS FUCKING CUBE";
		((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->set_ButtonText_5(_stringLiteralFA5B6B7B116638D685F661FF510E5B67169E0904);
		// return ButtonText;
		String_t* L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_ButtonText_5();
		return L_0;
	}
}
// System.Void Action_4_4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_4_4__ctor_m09E82E6FC8796A8411789DC3D5C5467CFD170458 (Action_4_4_t1DDC0AEA9AC60D752AB939B5DD6B92AB401665CD * __this, const RuntimeMethod* method)
{
	{
		ActionType__ctor_mF0E9B9B9A1F2958C3137DE666F2253F0A5EA57E2(__this, /*hidden argument*/NULL);
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
// System.Void DataManager::StartAction(MainHeroValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5 (MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * ___Values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD4E1A070C1F063474B82D53D8E6B7EF555F78799_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action.Invoke(Values);
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * L_0 = ((DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var))->get_Action_4();
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_1 = ___Values0;
		UnityEvent_1_Invoke_mD4E1A070C1F063474B82D53D8E6B7EF555F78799(L_0, L_1, /*hidden argument*/UnityEvent_1_Invoke_mD4E1A070C1F063474B82D53D8E6B7EF555F78799_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DataManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__ctor_m8A6DD19CA5399C36D89F0B103A74AB7F0A7BA4DE (DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DataManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataManager__cctor_m26BD1FEC4B546274E3EE901B2537C5516FF1D598 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mDDBF974C7446E474A472C74120391FEA1566F588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityEvent<MainHeroValues> Action = new UnityEvent<MainHeroValues>();
		UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * L_0 = (UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 *)il2cpp_codegen_object_new(UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2_il2cpp_TypeInfo_var);
		UnityEvent_1__ctor_mDDBF974C7446E474A472C74120391FEA1566F588(L_0, /*hidden argument*/UnityEvent_1__ctor_mDDBF974C7446E474A472C74120391FEA1566F588_RuntimeMethod_var);
		((DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var))->set_Action_4(L_0);
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
// System.Void Door_4_1::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_4_1_Awake_m5EEA8E28CF384F9C78559D4507E3A95D50A22A3D (Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * __this, const RuntimeMethod* method)
{
	{
		// startPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_startPosition_11(L_1);
		// targetPosition = transform.position + Vector3.up * Distance;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_5 = __this->get_Distance_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_6, /*hidden argument*/NULL);
		__this->set_targetPosition_10(L_7);
		// }
		return;
	}
}
// System.Void Door_4_1::DoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_4_1_DoAction_m7B6577995EF9E7974C829DB7B361BE6688AD81CB (Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(MoveDoor());
		RuntimeObject* L_0;
		L_0 = Door_4_1_MoveDoor_mD63D11C85EFD126C1A76CF8F20732B130DF32FE6(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Door_4_1::SetActionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Door_4_1_SetActionName_mC0C4EC84DB57CF8BA1B85D2093B2E871357748D8 (Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B5E17974DC6D4B26728482EBF164B288736F4C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ButtonText = "Open Door";
		((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->set_ButtonText_5(_stringLiteral8B5E17974DC6D4B26728482EBF164B288736F4C6);
		// return ButtonText;
		String_t* L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_ButtonText_5();
		return L_0;
	}
}
// System.Collections.IEnumerator Door_4_1::MoveDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Door_4_1_MoveDoor_mD63D11C85EFD126C1A76CF8F20732B130DF32FE6 (Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * L_0 = (U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 *)il2cpp_codegen_object_new(U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5_il2cpp_TypeInfo_var);
		U3CMoveDoorU3Ed__6__ctor_mDECB3742BFC3D767CEC34B6B5D189F853E93CF8C(L_0, 0, /*hidden argument*/NULL);
		U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Door_4_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Door_4_1__ctor_mD27260189A6EA2CB67DBF89FFF86D186B46DB40F (Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * __this, const RuntimeMethod* method)
{
	{
		ActionType__ctor_mF0E9B9B9A1F2958C3137DE666F2253F0A5EA57E2(__this, /*hidden argument*/NULL);
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
// System.Void EnterRoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoom__ctor_mB2D53623CAF436E6467317B12B6AFDCEE7342779 (EnterRoom_tF0A06166AFA4643F2F2F2AD17F9C5D9D95641B0A * __this, const RuntimeMethod* method)
{
	{
		Task__ctor_mDCF34F71A6A8267585FFC491EE51809DA119B5EE(__this, /*hidden argument*/NULL);
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
// System.Void Event::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_Start_mDE8088AEE49BDC7318117A66377F259ABA830738 (Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _taskManager = GameObject.Find("Player").GetComponent<TaskManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_1;
		L_1 = GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179(L_0, /*hidden argument*/GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179_RuntimeMethod_var);
		__this->set__taskManager_4(L_1);
		// _playerController = GameObject.Find("Player").GetComponent<PlayerController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_3;
		L_3 = GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		__this->set__playerController_5(L_3);
		// }
		return;
	}
}
// System.Void Event::StartEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_StartEvent_mFEB403D7A227E955D681FD3F05537F83ED74F0E0 (Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Event::StopPreviousEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event_StopPreviousEvent_mA227F19A9DA2CDD8059338B0F240527BB528552D (Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_taskManager.CurrentTask.CurrentEventId > 0)
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_0 = __this->get__taskManager_4();
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_1 = L_0->get_CurrentTask_7();
		int32_t L_2 = L_1->get_CurrentEventId_7();
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// _taskManager.CurrentTask.events[_taskManager.CurrentTask.CurrentEventId - 1].StopAllCoroutines();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_3 = __this->get__taskManager_4();
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_4 = L_3->get_CurrentTask_7();
		List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * L_5 = L_4->get_events_4();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_6 = __this->get__taskManager_4();
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_7 = L_6->get_CurrentTask_7();
		int32_t L_8 = L_7->get_CurrentEventId_7();
		Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * L_9;
		L_9 = List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_inline(L_5, ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)), /*hidden argument*/List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_RuntimeMethod_var);
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(L_9, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Boolean Event::IsPlayerReachDestanation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Event_IsPlayerReachDestanation_m8F2F315385CC529AE2BA9397FCE9D9D8BB4E6B37 (Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * __this, const RuntimeMethod* method)
{
	{
		// return _playerController.agent.remainingDistance == 0;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0 = __this->get__playerController_5();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_1 = L_0->get_agent_8();
		float L_2;
		L_2 = NavMeshAgent_get_remainingDistance_mB55D92B0CBEA48367C5FC6879FDEE2915FB6CD36(L_1, /*hidden argument*/NULL);
		return (bool)((((float)L_2) == ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void Event::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_mD229CAE285A8C746EDC9C97D3B3B3CEBC502DCEF (Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataManager.StartAction(Values);
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = __this->get_Values_4();
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::UpdateAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_UpdateAll_m043C2124ADB1B302C0A419FBC84F9F4B453D3746 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataManager.StartAction(Values);
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = __this->get_Values_4();
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GoToTheTarget::StartEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoToTheTarget_StartEvent_mD81D01378F9AD0606EEF8EEF67E64A9B161757DE (GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopPreviousEvent();
		Event_StopPreviousEvent_mA227F19A9DA2CDD8059338B0F240527BB528552D(__this, /*hidden argument*/NULL);
		// IsEventEnd = false;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->set_IsEventEnd_7((bool)0);
		// if (target != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->get_target_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// StartCoroutine(StartWalkToTarget());
		RuntimeObject* L_2;
		L_2 = GoToTheTarget_StartWalkToTarget_mACA1482A2916448CE7090649603B9352B63A6DA7(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// IsEventEnd = true;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->set_IsEventEnd_7((bool)1);
		// }
		return;
	}
}
// System.Collections.IEnumerator GoToTheTarget::StartWalkToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GoToTheTarget_StartWalkToTarget_mACA1482A2916448CE7090649603B9352B63A6DA7 (GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * L_0 = (U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 *)il2cpp_codegen_object_new(U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6_il2cpp_TypeInfo_var);
		U3CStartWalkToTargetU3Ed__1__ctor_m67B6649AFC30855FA94C2960856B86893EF0068C(L_0, 0, /*hidden argument*/NULL);
		U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GoToTheTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoToTheTarget__ctor_m1465CD691DC10DE91A97FE658D5896135A2E74BE (GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * __this, const RuntimeMethod* method)
{
	{
		Event__ctor_mD229CAE285A8C746EDC9C97D3B3B3CEBC502DCEF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GoToTheTarget::<StartWalkToTarget>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GoToTheTarget_U3CStartWalkToTargetU3Eb__1_0_m84129F8B0F4D1AE29E918683DB4233EEA192FF68 (GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * __this, const RuntimeMethod* method)
{
	{
		// yield return new WaitUntil(() => IsPlayerReachDestanation());
		bool L_0;
		L_0 = Event_IsPlayerReachDestanation_m8F2F315385CC529AE2BA9397FCE9D9D8BB4E6B37(__this, /*hidden argument*/NULL);
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
// System.Void KnownKnowledge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KnownKnowledge__ctor_mE5ECED028F9D2DC93438C0B42950C44F1D27FABC (KnownKnowledge_t0F573968D981B1B68967F989D809DF4E13726EC1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LeaveRoom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaveRoom__ctor_m80A9000D7AA389AECCC977E8DB199E7E25C22227 (LeaveRoom_tD3836D8AA73FB49003781382981740FFCD88AEBC * __this, const RuntimeMethod* method)
{
	{
		Task__ctor_mDCF34F71A6A8267585FFC491EE51809DA119B5EE(__this, /*hidden argument*/NULL);
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
// System.Void LightSwitch_2_1::DoAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSwitch_2_1_DoAction_mEEBA4CE5AC7BB011724ED373A6DD7CCC906DE3CF (LightSwitch_2_1_tC8EDEE55E7020B94181698F2E41FB95EF12F52A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// taskManager.CurrentLocation.IsLightsOn = !taskManager.CurrentLocation.IsLightsOn;
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_taskManager_9();
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_1 = L_0->get_CurrentLocation_5();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_2 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_taskManager_9();
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_3 = L_2->get_CurrentLocation_5();
		bool L_4 = L_3->get_IsLightsOn_7();
		L_1->set_IsLightsOn_7((bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0));
		// taskManager.CurrentLocation.SwitchLights();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_5 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_taskManager_9();
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_6 = L_5->get_CurrentLocation_5();
		Location_SwitchLights_mDB3517FAC84C4BD70AADB44576F36B81E329D53C(L_6, /*hidden argument*/NULL);
		// UpdateControlLevel();
		ActionType_UpdateControlLevel_mB0EF4A715E3F44B44FEFBE75EF1CF372E5900842(__this, /*hidden argument*/NULL);
		// SetActionName();
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String ActionType::SetActionName() */, __this);
		// DataManager.StartAction(Values);
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_8 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_Values_4();
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		DataManager_StartAction_m189D20F5A7BBE678553F9BDBFA4764CF12B4DDD5(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String LightSwitch_2_1::SetActionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LightSwitch_2_1_SetActionName_m2DFF76D176F634FBE5DC289B2EE8EF2A1F8B2F2A (LightSwitch_2_1_tC8EDEE55E7020B94181698F2E41FB95EF12F52A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral109C5533B44E87140CA2F92D59E1187AB60C4098);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FB7C0772F9FF8D5A2FE15C1A01D5630BB84098);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (taskManager.CurrentLocation.IsLightsOn)
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_0 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_taskManager_9();
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_1 = L_0->get_CurrentLocation_5();
		bool L_2 = L_1->get_IsLightsOn_7();
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// ButtonText = "Turn off light";
		((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->set_ButtonText_5(_stringLiteralA9FB7C0772F9FF8D5A2FE15C1A01D5630BB84098);
		// return ButtonText;
		String_t* L_3 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_ButtonText_5();
		return L_3;
	}

IL_0024:
	{
		// ButtonText = "Turn on light";
		((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->set_ButtonText_5(_stringLiteral109C5533B44E87140CA2F92D59E1187AB60C4098);
		// return ButtonText;
		String_t* L_4 = ((ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 *)__this)->get_ButtonText_5();
		return L_4;
	}
}
// System.Void LightSwitch_2_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightSwitch_2_1__ctor_mA8580E90C55C7E5D95D6E0546B28F5F77ECE7593 (LightSwitch_2_1_tC8EDEE55E7020B94181698F2E41FB95EF12F52A4 * __this, const RuntimeMethod* method)
{
	{
		ActionType__ctor_mF0E9B9B9A1F2958C3137DE666F2253F0A5EA57E2(__this, /*hidden argument*/NULL);
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
// System.Void Location::SwitchLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_SwitchLights_mDB3517FAC84C4BD70AADB44576F36B81E329D53C (Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Lights != null && IsLightsOn)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Lights_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = __this->get_IsLightsOn_7();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// Lights.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Lights_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// else if(Lights != null && !IsLightsOn)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_Lights_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		bool L_7 = __this->get_IsLightsOn_7();
		if (L_7)
		{
			goto IL_004f;
		}
	}
	{
		// Lights.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_Lights_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Location::CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_CustomProperties_mAD6F479851EB66A829F4EEA51C6DB976BB14BB8C (Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * __this, const RuntimeMethod* method)
{
	{
		// public virtual void CustomProperties() { }
		return;
	}
}
// System.Void Location::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_OnTriggerEnter_m3682856CDC2AEBAE98C363F40DCBB35E1A004D98 (Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m6CDC6C77CB9FFD2A1CC80EFAFB316CDE312CB1DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * V_0 = NULL;
	{
		// other.gameObject.TryGetComponent<TaskManager>(out TaskManager taskManager);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_TryGetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m6CDC6C77CB9FFD2A1CC80EFAFB316CDE312CB1DA(L_1, (TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 **)(&V_0), /*hidden argument*/GameObject_TryGetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m6CDC6C77CB9FFD2A1CC80EFAFB316CDE312CB1DA_RuntimeMethod_var);
		// taskManager.CurrentLocation = this;
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_3 = V_0;
		L_3->set_CurrentLocation_5(__this);
		// taskManager.LoadLocationProperties();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_4 = V_0;
		TaskManager_LoadLocationProperties_mB3D6B8C300F8358BB83C489B474A38D05D87B295(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Location::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location_OnTriggerExit_mFE3C9BF4783AEDE6E4CC9E10D0DB7B9B0C04D74E (Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m6CDC6C77CB9FFD2A1CC80EFAFB316CDE312CB1DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * V_0 = NULL;
	{
		// other.gameObject.TryGetComponent<TaskManager>(out TaskManager taskManager);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_TryGetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m6CDC6C77CB9FFD2A1CC80EFAFB316CDE312CB1DA(L_1, (TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 **)(&V_0), /*hidden argument*/GameObject_TryGetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m6CDC6C77CB9FFD2A1CC80EFAFB316CDE312CB1DA_RuntimeMethod_var);
		// taskManager.ResetLocationProperties();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_3 = V_0;
		TaskManager_ResetLocationProperties_m13982400571BE475C3DE472FC29E283D5E793C39(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Location::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Location__ctor_mE8BDA7A878909BB7942F020078B7D5430C402604 (Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MainHeroValues::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainHeroValues__ctor_m0E89F9E4D711F5363428865A3FD1455C76B993B8 (MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void ObjectActions::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_Awake_m6FDA9DED8F16C289DDB1D57D81667BE5C99CD898 (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player = GameObject.Find("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_Player_4(L_0);
		// ActionMenu = GameObject.Find("UI").GetComponent<ActionSelector>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, /*hidden argument*/NULL);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_2;
		L_2 = GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5(L_1, /*hidden argument*/GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5_RuntimeMethod_var);
		__this->set_ActionMenu_6(L_2);
		// }
		return;
	}
}
// System.Void ObjectActions::SetActionsIntoUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_SetActionsIntoUI_m4ECA7BF366CF8557227C693A3B3176BC629F09EB (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method)
{
	{
		// StoreButtons();
		ObjectActions_StoreButtons_mBB7C3169CEB0F9A097FDC2C0D82AB03129CBDD04(__this, /*hidden argument*/NULL);
		// InitializedTriggerText();
		ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectActions::StoreButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_StoreButtons_mBB7C3169CEB0F9A097FDC2C0D82AB03129CBDD04 (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ActionLevel4 != null)
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_0 = __this->get_ActionLevel4_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// ActionMenu.Level4Button.gameObject.SetActive(true);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_2 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = L_2->get_Level4Button_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// ActionMenu.Level4Button.onClick.AddListener(ActionLevel4.DoAction);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_5 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = L_5->get_Level4Button_9();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_7;
		L_7 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_6, /*hidden argument*/NULL);
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_8 = __this->get_ActionLevel4_12();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_9 = L_8;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_10 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_10, L_9, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_9, 4)), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_7, L_10, /*hidden argument*/NULL);
		// ActionMenu.Level4Button.onClick.AddListener(InitializedTriggerText);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_11 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = L_11->get_Level4Button_9();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_13;
		L_13 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_12, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_14 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_14, __this, (intptr_t)((intptr_t)ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_13, L_14, /*hidden argument*/NULL);
		// }
		goto IL_0084;
	}

IL_006e:
	{
		// else ActionMenu.Level4Button.gameObject.SetActive(false);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_15 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_16 = L_15->get_Level4Button_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// if (ActionLevel3 != null)
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_18 = __this->get_ActionLevel3_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00f2;
		}
	}
	{
		// ActionMenu.Level3Button.gameObject.SetActive(true);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_20 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_21 = L_20->get_Level3Button_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
		// ActionMenu.Level3Button.onClick.AddListener(ActionLevel3.DoAction);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_23 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_24 = L_23->get_Level3Button_8();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_25;
		L_25 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_24, /*hidden argument*/NULL);
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_26 = __this->get_ActionLevel3_11();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_27 = L_26;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_28 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_28, L_27, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_27, 4)), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_25, L_28, /*hidden argument*/NULL);
		// ActionMenu.Level3Button.onClick.AddListener(InitializedTriggerText);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_29 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_30 = L_29->get_Level3Button_8();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_31;
		L_31 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_30, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_32 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_32, __this, (intptr_t)((intptr_t)ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_31, L_32, /*hidden argument*/NULL);
		// }
		goto IL_0108;
	}

IL_00f2:
	{
		// else ActionMenu.Level3Button.gameObject.SetActive(false);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_33 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_34 = L_33->get_Level3Button_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_34, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)0, /*hidden argument*/NULL);
	}

IL_0108:
	{
		// if (ActionLevel2 != null)
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_36 = __this->get_ActionLevel2_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0176;
		}
	}
	{
		// ActionMenu.Level2Button.gameObject.SetActive(true);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_38 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_39 = L_38->get_Level2Button_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)1, /*hidden argument*/NULL);
		// ActionMenu.Level2Button.onClick.AddListener(ActionLevel2.DoAction);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_41 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_42 = L_41->get_Level2Button_7();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_43;
		L_43 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_42, /*hidden argument*/NULL);
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_44 = __this->get_ActionLevel2_10();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_45 = L_44;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_46 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_46, L_45, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_45, 4)), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_43, L_46, /*hidden argument*/NULL);
		// ActionMenu.Level2Button.onClick.AddListener(InitializedTriggerText);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_47 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_48 = L_47->get_Level2Button_7();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_49;
		L_49 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_48, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_50 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_50, __this, (intptr_t)((intptr_t)ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_49, L_50, /*hidden argument*/NULL);
		// }
		goto IL_018c;
	}

IL_0176:
	{
		// else ActionMenu.Level2Button.gameObject.SetActive(false);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_51 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_52 = L_51->get_Level2Button_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53;
		L_53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_52, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_53, (bool)0, /*hidden argument*/NULL);
	}

IL_018c:
	{
		// if (ActionLevel1 != null)
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_54 = __this->get_ActionLevel1_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_54, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01fa;
		}
	}
	{
		// ActionMenu.Level1Button.gameObject.SetActive(true);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_56 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_57 = L_56->get_Level1Button_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_57, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_58, (bool)1, /*hidden argument*/NULL);
		// ActionMenu.Level1Button.onClick.AddListener(ActionLevel1.DoAction);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_59 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_60 = L_59->get_Level1Button_6();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_61;
		L_61 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_60, /*hidden argument*/NULL);
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_62 = __this->get_ActionLevel1_9();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_63 = L_62;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_64 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_64, L_63, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_63, 4)), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_61, L_64, /*hidden argument*/NULL);
		// ActionMenu.Level1Button.onClick.AddListener(InitializedTriggerText);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_65 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_66 = L_65->get_Level1Button_6();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_67;
		L_67 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_66, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_68 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_68, __this, (intptr_t)((intptr_t)ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_67, L_68, /*hidden argument*/NULL);
		// }
		goto IL_0210;
	}

IL_01fa:
	{
		// else ActionMenu.Level1Button.gameObject.SetActive(false);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_69 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_70 = L_69->get_Level1Button_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_70, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_71, (bool)0, /*hidden argument*/NULL);
	}

IL_0210:
	{
		// if (IsNeededAdditonAction && ActionLevel0 != null)
		bool L_72 = __this->get_IsNeededAdditonAction_7();
		if (!L_72)
		{
			goto IL_0285;
		}
	}
	{
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_73 = __this->get_ActionLevel0_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_73, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_0285;
		}
	}
	{
		// ActionMenu.Level0Button.gameObject.SetActive(true);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_75 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_76 = L_75->get_Level0Button_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_76, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_77, (bool)1, /*hidden argument*/NULL);
		// ActionMenu.Level0Button.onClick.AddListener(ActionLevel0.DoAction);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_78 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_79 = L_78->get_Level0Button_5();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_80;
		L_80 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_79, /*hidden argument*/NULL);
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_81 = __this->get_ActionLevel0_8();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_82 = L_81;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_83 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_83, L_82, (intptr_t)((intptr_t)GetVirtualMethodInfo(L_82, 4)), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_80, L_83, /*hidden argument*/NULL);
		// ActionMenu.Level0Button.onClick.AddListener(InitializedTriggerText);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_84 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_85 = L_84->get_Level0Button_5();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_86;
		L_86 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_85, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_87 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_87, __this, (intptr_t)((intptr_t)ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_86, L_87, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0285:
	{
		// else ActionMenu.Level0Button.gameObject.SetActive(false);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_88 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_89 = L_88->get_Level0Button_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90;
		L_90 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_89, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_90, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectActions::CleanButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_CleanButtons_m9DA2A3D17794D2ECB1C97BB92D4E9ED6B3B7F8BA (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method)
{
	{
		// ActionMenu.Level4Button.onClick.RemoveAllListeners();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_0 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = L_0->get_Level4Button_9();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_2;
		L_2 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_2, /*hidden argument*/NULL);
		// ActionMenu.Level3Button.onClick.RemoveAllListeners();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_3 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = L_3->get_Level3Button_8();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_5;
		L_5 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_4, /*hidden argument*/NULL);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_5, /*hidden argument*/NULL);
		// ActionMenu.Level2Button.onClick.RemoveAllListeners();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_6 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = L_6->get_Level2Button_7();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_8;
		L_8 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_7, /*hidden argument*/NULL);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_8, /*hidden argument*/NULL);
		// ActionMenu.Level1Button.onClick.RemoveAllListeners();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_9 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = L_9->get_Level1Button_6();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_11;
		L_11 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_10, /*hidden argument*/NULL);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_11, /*hidden argument*/NULL);
		// ActionMenu.Level0Button.onClick.RemoveAllListeners();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_12 = __this->get_ActionMenu_6();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = L_12->get_Level0Button_5();
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_14;
		L_14 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_13, /*hidden argument*/NULL);
		UnityEventBase_RemoveAllListeners_m934834C85F5CFE62BEDA9CF4DE9C5B8B5470F1D9(L_14, /*hidden argument*/NULL);
		// ActionMenu.Level4Text.text = null;
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_15 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_Level4Text_14();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, (String_t*)NULL);
		// ActionMenu.Level3Text.text = null;
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_17 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = L_17->get_Level3Text_13();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, (String_t*)NULL);
		// ActionMenu.Level2Text.text = null;
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_19 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_20 = L_19->get_Level2Text_12();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, (String_t*)NULL);
		// ActionMenu.Level1Text.text = null;
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_21 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_22 = L_21->get_Level1Text_11();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, (String_t*)NULL);
		// ActionMenu.Level0Text.text = null;
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_23 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = L_23->get_Level0Text_10();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, (String_t*)NULL);
		// }
		return;
	}
}
// System.Void ObjectActions::InitializedTriggerText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions_InitializedTriggerText_m43A20277630363F70D3F16978D60A70C21FFD225 (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ActionLevel4 != null)
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_0 = __this->get_ActionLevel4_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// ActionMenu.Level4Text.text = ActionLevel4.SetActionName();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_2 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = L_2->get_Level4Text_14();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_4 = __this->get_ActionLevel4_12();
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String ActionType::SetActionName() */, L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_0029:
	{
		// if (ActionLevel3 != null)
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_6 = __this->get_ActionLevel3_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// ActionMenu.Level3Text.text = ActionLevel3.SetActionName();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_8 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = L_8->get_Level3Text_13();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_10 = __this->get_ActionLevel3_11();
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String ActionType::SetActionName() */, L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
	}

IL_0052:
	{
		// if (ActionLevel2 != null)
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_12 = __this->get_ActionLevel2_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		// ActionMenu.Level2Text.text = ActionLevel2.SetActionName();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_14 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = L_14->get_Level2Text_12();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_16 = __this->get_ActionLevel2_10();
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String ActionType::SetActionName() */, L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
	}

IL_007b:
	{
		// if (ActionLevel1 != null)
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_18 = __this->get_ActionLevel1_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a4;
		}
	}
	{
		// ActionMenu.Level1Text.text = ActionLevel1.SetActionName();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_20 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_Level1Text_11();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_22 = __this->get_ActionLevel1_9();
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String ActionType::SetActionName() */, L_22);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_23);
	}

IL_00a4:
	{
		// if (IsNeededAdditonAction && ActionLevel0 != null)
		bool L_24 = __this->get_IsNeededAdditonAction_7();
		if (!L_24)
		{
			goto IL_00d5;
		}
	}
	{
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_25 = __this->get_ActionLevel0_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00d5;
		}
	}
	{
		// ActionMenu.Level0Text.text = ActionLevel0.SetActionName();
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_27 = __this->get_ActionMenu_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_28 = L_27->get_Level0Text_10();
		ActionType_t97FDB11C9B8631F54BAC69470A754E645127D072 * L_29 = __this->get_ActionLevel0_8();
		String_t* L_30;
		L_30 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String ActionType::SetActionName() */, L_29);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, L_30);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void ObjectActions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectActions__ctor_m4E38A5C17009805AEB485616A76C4C42FE12F970 (ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectTriggerEvent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTriggerEvent_Start_mBAE16368B949E4A7537FC0520D6ED7FBDAFAD1A4 (ObjectTriggerEvent_tC02651D94F808259EA543EF7EAACCCB21A2B6F8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E_mFDB70656924D5188AA03CE9EB61930A6B016718E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ParentObject = GetComponentInParent<ObjectActions>();
		ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * L_0;
		L_0 = Component_GetComponentInParent_TisObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E_mFDB70656924D5188AA03CE9EB61930A6B016718E(__this, /*hidden argument*/Component_GetComponentInParent_TisObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E_mFDB70656924D5188AA03CE9EB61930A6B016718E_RuntimeMethod_var);
		__this->set_ParentObject_4(L_0);
		// ActionMenu = GameObject.Find("UI").GetComponent<ActionSelector>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, /*hidden argument*/NULL);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_2;
		L_2 = GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5(L_1, /*hidden argument*/GameObject_GetComponent_TisActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376_m494EE7707BE9DB5C40373B9CC5E133BCAE5933B5_RuntimeMethod_var);
		__this->set_ActionMenu_5(L_2);
		// }
		return;
	}
}
// System.Void ObjectTriggerEvent::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTriggerEvent_OnTriggerEnter_mF176D24710590214635D908A51D5F3E1FCA3009C (ObjectTriggerEvent_tC02651D94F808259EA543EF7EAACCCB21A2B6F8D * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// ParentObject.SetActionsIntoUI();
		ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * L_0 = __this->get_ParentObject_4();
		ObjectActions_SetActionsIntoUI_m4ECA7BF366CF8557227C693A3B3176BC629F09EB(L_0, /*hidden argument*/NULL);
		// ActionMenu.ActionMenu.gameObject.SetActive(true);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_1 = __this->get_ActionMenu_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_ActionMenu_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectTriggerEvent::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTriggerEvent_OnTriggerExit_mF18996C4B5E3B8AA9DE697879D9186329CDAEB04 (ObjectTriggerEvent_tC02651D94F808259EA543EF7EAACCCB21A2B6F8D * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// ParentObject.CleanButtons();
		ObjectActions_tF5C44F9C9D8014FEBB88F622A85A3DD25463996E * L_0 = __this->get_ParentObject_4();
		ObjectActions_CleanButtons_m9DA2A3D17794D2ECB1C97BB92D4E9ED6B3B7F8BA(L_0, /*hidden argument*/NULL);
		// ActionMenu.ActionMenu.gameObject.SetActive(false);
		ActionSelector_tDEFAC746C3893730BC2501C9C95528A5F08C0376 * L_1 = __this->get_ActionMenu_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_ActionMenu_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectTriggerEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTriggerEvent__ctor_mF0337177C3E73AED898F57C399F08954A1E0EE86 (ObjectTriggerEvent_tC02651D94F808259EA543EF7EAACCCB21A2B6F8D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void OpenDoor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenDoor_Awake_m46589ABA2ECF0D7594D7622FF81F3F62942C44FD (OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * __this, const RuntimeMethod* method)
{
	{
		// startPosition = Door.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Door_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		__this->set_startPosition_10(L_2);
		// targetPosition = Door.transform.position + Vector3.up * Distance;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_Door_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_7 = __this->get_Distance_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_8, /*hidden argument*/NULL);
		__this->set_targetPosition_9(L_9);
		// }
		return;
	}
}
// System.Void OpenDoor::StartEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenDoor_StartEvent_m12B967842CC5D8725A8423688FA429DD0183E6A8 (OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopPreviousEvent();
		Event_StopPreviousEvent_mA227F19A9DA2CDD8059338B0F240527BB528552D(__this, /*hidden argument*/NULL);
		// IsEventEnd = false;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->set_IsEventEnd_7((bool)0);
		// if (target != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->get_target_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// StartCoroutine(StartWalkToTarget());
		RuntimeObject* L_2;
		L_2 = OpenDoor_StartWalkToTarget_m16F8424B868369C73266C954D97FD41168CD51D1(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// IsEventEnd = true;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->set_IsEventEnd_7((bool)1);
		// }
		return;
	}
}
// System.Collections.IEnumerator OpenDoor::StartWalkToTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenDoor_StartWalkToTarget_m16F8424B868369C73266C954D97FD41168CD51D1 (OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * L_0 = (U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 *)il2cpp_codegen_object_new(U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147_il2cpp_TypeInfo_var);
		U3CStartWalkToTargetU3Ed__6__ctor_m61C487D58E12FECEEBAA7CA22DCAB59CFB6C5457(L_0, 0, /*hidden argument*/NULL);
		U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator OpenDoor::MoveDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenDoor_MoveDoor_mD4CE58A2EBDC0047FF934C0E8FCF78451833945D (OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * L_0 = (U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 *)il2cpp_codegen_object_new(U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2_il2cpp_TypeInfo_var);
		U3CMoveDoorU3Ed__7__ctor_mEA788C35FD09E061461470B5E13D3E0E19B113FB(L_0, 0, /*hidden argument*/NULL);
		U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void OpenDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenDoor__ctor_m16369C00A239E774A34F038F9D90915494C11B75 (OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * __this, const RuntimeMethod* method)
{
	{
		Event__ctor_mD229CAE285A8C746EDC9C97D3B3B3CEBC502DCEF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean OpenDoor::<StartWalkToTarget>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenDoor_U3CStartWalkToTargetU3Eb__6_0_mEA1E94370321B22250CA1A463EFD0C3EDF05EF11 (OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * __this, const RuntimeMethod* method)
{
	{
		// yield return new WaitUntil(() => IsPlayerReachDestanation());
		bool L_0;
		L_0 = Event_IsPlayerReachDestanation_m8F2F315385CC529AE2BA9397FCE9D9D8BB4E6B37(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m9531F30EC892BDD1758A2EEC724E86EFBDA150A3 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m289E27FEE80C8FA2D92C4C39ADC279E1722B1FA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_CheckingControlLevel_mB309D4E1149F53B2828B167C670D9F7C5CF7D275_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _taskManager = GetComponent<TaskManager>();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_0;
		L_0 = Component_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m289E27FEE80C8FA2D92C4C39ADC279E1722B1FA9(__this, /*hidden argument*/Component_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m289E27FEE80C8FA2D92C4C39ADC279E1722B1FA9_RuntimeMethod_var);
		__this->set__taskManager_6(L_0);
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_1;
		L_1 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_agent_8(L_1);
		// Player = gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		__this->set_Player_5(L_2);
		// DataManager.Action.AddListener(CheckingControlLevel);
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * L_3 = ((DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var))->get_Action_4();
		UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 * L_4 = (UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 *)il2cpp_codegen_object_new(UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF(L_4, __this, (intptr_t)((intptr_t)PlayerController_CheckingControlLevel_mB309D4E1149F53B2828B167C670D9F7C5CF7D275_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF_RuntimeMethod_var);
		UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE(L_3, L_4, /*hidden argument*/UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE_RuntimeMethod_var);
		// mainCamera = Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_mainCamera_7(L_5);
		// }
		return;
	}
}
// System.Void PlayerController::CheckingControlLevel(MainHeroValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CheckingControlLevel_mB309D4E1149F53B2828B167C670D9F7C5CF7D275 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * ___Values0, const RuntimeMethod* method)
{
	{
		// if (Values.cl <= SwitchControlLevel)
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_0 = ___Values0;
		int32_t L_1 = L_0->get_cl_4();
		int32_t L_2 = __this->get_SwitchControlLevel_9();
		if ((((int32_t)L_1) > ((int32_t)L_2)))
		{
			goto IL_0016;
		}
	}
	{
		// IsPlayerHaveControl = true;
		__this->set_IsPlayerHaveControl_4((bool)1);
		// } else IsPlayerHaveControl = false;
		return;
	}

IL_0016:
	{
		// } else IsPlayerHaveControl = false;
		__this->set_IsPlayerHaveControl_4((bool)0);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mB31159CAD7DD2329859472554BC9154A83D8E794 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (IsPlayerHaveControl)
		bool L_0 = __this->get_IsPlayerHaveControl_4();
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_1;
		L_1 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0071;
		}
	}
	{
		// if (Physics.Raycast(mainCamera.ScreenPointToRay(Input.mousePosition), out hit))
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2 = __this->get_mainCamera_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_4;
		L_4 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_2, L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_4, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0071;
		}
	}
	{
		// agent.SetDestination(hit.point);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_6 = __this->get_agent_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		bool L_8;
		L_8 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_003d:
	{
		// else if (_taskManager.target != null)
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_9 = __this->get__taskManager_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_target_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		// agent.SetDestination(_taskManager.target.transform.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_12 = __this->get_agent_8();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_13 = __this->get__taskManager_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13->get_target_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_12, L_16, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private int SwitchControlLevel = 50;
		__this->set_SwitchControlLevel_9(((int32_t)50));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Room::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_Awake_mD337276455687E14C0EE718EBE2417F0A4367CFA (Room_t44A97854220FADE8C026E18625929E32B64B3F6A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB35E1959C97E7C82761FCAA57ECBBF50E94419B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Name = "Room";
		((Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 *)__this)->set_Name_4(_stringLiteralB35E1959C97E7C82761FCAA57ECBBF50E94419B2);
		// }
		return;
	}
}
// System.Void Room::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room__ctor_m970729D9D91E49A7173A5AFD56CC3D9047A7BC8C (Room_t44A97854220FADE8C026E18625929E32B64B3F6A * __this, const RuntimeMethod* method)
{
	{
		Location__ctor_mE8BDA7A878909BB7942F020078B7D5430C402604(__this, /*hidden argument*/NULL);
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
// System.Void Task::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Awake_m2342E0B7B860A2A2326F247797ADE012AD9F5C6E (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _taskManager = GameObject.Find("Player").GetComponent<TaskManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_1;
		L_1 = GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179(L_0, /*hidden argument*/GameObject_GetComponent_TisTaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7_m199AA0056EDA8CEB9BCD9E449AF72DB9B4B51179_RuntimeMethod_var);
		__this->set__taskManager_5(L_1);
		// _playerController = GameObject.Find("Player").GetComponent<PlayerController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_3;
		L_3 = GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8(L_2, /*hidden argument*/GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		__this->set__playerController_6(L_3);
		// }
		return;
	}
}
// System.Void Task::StartNewTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_StartNewTask_m487FDDD2945A724ADA1B66D9F212C872609106C7 (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(EventOrderList());
		RuntimeObject* L_0;
		L_0 = Task_EventOrderList_m2D8EC3816F0680E7E7174E42666EFE00FF9D2497(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Task::EventOrderList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_EventOrderList_m2D8EC3816F0680E7E7174E42666EFE00FF9D2497 (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * L_0 = (U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 *)il2cpp_codegen_object_new(U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81_il2cpp_TypeInfo_var);
		U3CEventOrderListU3Ed__7__ctor_m9DF680A51CEA841F6F0367C946E0E8FEB53EDB02(L_0, 0, /*hidden argument*/NULL);
		U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Task::StartNextEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_StartNextEvent_m972C1F5080F135FF20610DDBA1D4B25B229C030C (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m92F62EAD84C90AB9EE2C29C3B5F81A596FE36021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8247E89B2C4B4BE93FCFE7D2D951C0789B2244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1C0C3BDE228F657EA0C8EDFDE74253EA1CF1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CurrentEventId < events.Count)
		int32_t L_0 = __this->get_CurrentEventId_7();
		List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * L_1 = __this->get_events_4();
		int32_t L_2;
		L_2 = List_1_get_Count_m92F62EAD84C90AB9EE2C29C3B5F81A596FE36021_inline(L_1, /*hidden argument*/List_1_get_Count_m92F62EAD84C90AB9EE2C29C3B5F81A596FE36021_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_005e;
		}
	}
	{
		// CurrentEvent = events[CurrentEventId];
		List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * L_3 = __this->get_events_4();
		int32_t L_4 = __this->get_CurrentEventId_7();
		Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * L_5;
		L_5 = List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_RuntimeMethod_var);
		__this->set_CurrentEvent_8(L_5);
		// CurrentEvent.StartEvent();
		Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * L_6 = __this->get_CurrentEvent_8();
		VirtActionInvoker0::Invoke(4 /* System.Void Event::StartEvent() */, L_6);
		// CurrentEventId++;
		int32_t L_7 = __this->get_CurrentEventId_7();
		__this->set_CurrentEventId_7(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// Debug.Log("Starting Event " + CurrentEventId);
		int32_t* L_8 = __this->get_address_of_CurrentEventId_7();
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_8, /*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral8A8247E89B2C4B4BE93FCFE7D2D951C0789B2244, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_005e:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// Debug.Log("This is last event, starting next task");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFBC1C0C3BDE228F657EA0C8EDFDE74253EA1CF1D, /*hidden argument*/NULL);
		// _taskManager.CurrentTaskId++;
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_11 = __this->get__taskManager_5();
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_12 = L_11;
		int32_t L_13 = L_12->get_CurrentTaskId_8();
		L_12->set_CurrentTaskId_8(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Task::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_mDCF34F71A6A8267585FFC491EE51809DA119B5EE (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Task::<EventOrderList>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_U3CEventOrderListU3Eb__7_0_mB6E4C154F51A895CCEFC45D9FAD3BBB304414063 (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method)
{
	{
		// yield return new WaitUntil(() => !_playerController.IsPlayerHaveControl);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0 = __this->get__playerController_6();
		bool L_1 = L_0->get_IsPlayerHaveControl_4();
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Task::<EventOrderList>b__7_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_U3CEventOrderListU3Eb__7_1_m5546D63933747CCAD1B52B0F1C5552B78B6110DA (Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * __this, const RuntimeMethod* method)
{
	{
		// yield return new WaitUntil(() => CurrentEvent.IsEventEnd == true);
		Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * L_0 = __this->get_CurrentEvent_8();
		bool L_1 = L_0->get_IsEventEnd_7();
		return L_1;
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
// System.Void TaskManager::LoadLocationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskManager_LoadLocationProperties_mB3D6B8C300F8358BB83C489B474A38D05D87B295 (TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * __this, const RuntimeMethod* method)
{
	{
		// CurrentLocationName = CurrentLocation.Name;
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_0 = __this->get_CurrentLocation_5();
		String_t* L_1 = L_0->get_Name_4();
		__this->set_CurrentLocationName_4(L_1);
		// }
		return;
	}
}
// System.Void TaskManager::ResetLocationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskManager_ResetLocationProperties_m13982400571BE475C3DE472FC29E283D5E793C39 (TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * __this, const RuntimeMethod* method)
{
	{
		// CurrentLocation = null;
		__this->set_CurrentLocation_5((Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 *)NULL);
		// CurrentLocationName = null;
		__this->set_CurrentLocationName_4((String_t*)NULL);
		// }
		return;
	}
}
// System.Void TaskManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskManager_Awake_mBA4C5C8139F687800085114E10991DC3885AD03C (TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCCA08815A964C23165CFD679026A2B9FE9EF6E7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentTask = tasks[CurrentTaskId];
		List_1_t10E24463B0094ACAE80B60F4BC9BAB8E17E3D121 * L_0 = __this->get_tasks_6();
		int32_t L_1 = __this->get_CurrentTaskId_8();
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_2;
		L_2 = List_1_get_Item_mCCA08815A964C23165CFD679026A2B9FE9EF6E7C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mCCA08815A964C23165CFD679026A2B9FE9EF6E7C_RuntimeMethod_var);
		__this->set_CurrentTask_7(L_2);
		// CurrentTask.StartNewTask();
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_3 = __this->get_CurrentTask_7();
		Task_StartNewTask_m487FDDD2945A724ADA1B66D9F212C872609106C7(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TaskManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskManager__ctor_mF1311A978CCA61196EC238DDCA18481767D25DF7 (TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TestUIScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestUIScript_Start_mE6B7AC4259BF809DB4EA81754F3DFA6ECF8251BF (TestUIScript_t321EE2BC03935061DD5D80DD492DB4D74D46B595 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TestUIScript_UpdateText_m9E95183E9528E1FE8D4C528359BD0B6A6BF24192_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DataManager.Action.AddListener(UpdateText);
		IL2CPP_RUNTIME_CLASS_INIT(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var);
		UnityEvent_1_t79B173F7A311EB0F4A86FBD76DC92E90F03A12E2 * L_0 = ((DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_StaticFields*)il2cpp_codegen_static_fields_for(DataManager_t01518B3D49E16D1E80F0C7C9F0533427905EC1E2_il2cpp_TypeInfo_var))->get_Action_4();
		UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 * L_1 = (UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1 *)il2cpp_codegen_object_new(UnityAction_1_t1D4C1DB5251ABF92B3D6E63ECE8ADB78E8790ED1_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF(L_1, __this, (intptr_t)((intptr_t)TestUIScript_UpdateText_m9E95183E9528E1FE8D4C528359BD0B6A6BF24192_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m68453874FD22BA148898E57B7C13F6BECCE5F8BF_RuntimeMethod_var);
		UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE(L_0, L_1, /*hidden argument*/UnityEvent_1_AddListener_m93A37B415B7883174129519F0F5D6BFE95E485DE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TestUIScript::UpdateText(MainHeroValues)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestUIScript_UpdateText_m9E95183E9528E1FE8D4C528359BD0B6A6BF24192 (TestUIScript_t321EE2BC03935061DD5D80DD492DB4D74D46B595 * __this, MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * ___ControlLevel0, const RuntimeMethod* method)
{
	{
		// text.text = ControlLevel.cl.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_4();
		MainHeroValues_t2F370894BC61270E3B295FE72F6C7EA45538E1EF * L_1 = ___ControlLevel0;
		int32_t* L_2 = L_1->get_address_of_cl_4();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void TestUIScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TestUIScript__ctor_m4227BC9604A951B3100D3190541A5541DC5581EB (TestUIScript_t321EE2BC03935061DD5D80DD492DB4D74D46B595 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TurnLightsOn::StartEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnLightsOn_StartEvent_m1CAC855E4F852A045083CA97C2B1B1FE7A624573 (TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopPreviousEvent();
		Event_StopPreviousEvent_mA227F19A9DA2CDD8059338B0F240527BB528552D(__this, /*hidden argument*/NULL);
		// IsEventEnd = false;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->set_IsEventEnd_7((bool)0);
		// if (location != null && target != null)
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_0 = __this->get_location_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->get_target_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// StartCoroutine(SwitchLight());
		RuntimeObject* L_4;
		L_4 = TurnLightsOn_SwitchLight_mC60B1072D0A98964A1D79DC3CC2F7B8BD200BF46(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0037:
	{
		// IsEventEnd = true;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)__this)->set_IsEventEnd_7((bool)1);
		// }
		return;
	}
}
// System.Collections.IEnumerator TurnLightsOn::SwitchLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TurnLightsOn_SwitchLight_mC60B1072D0A98964A1D79DC3CC2F7B8BD200BF46 (TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * L_0 = (U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 *)il2cpp_codegen_object_new(U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4_il2cpp_TypeInfo_var);
		U3CSwitchLightU3Ed__2__ctor_m949132A91EF36DC66396A2D48A0679CDAEF060DD(L_0, 0, /*hidden argument*/NULL);
		U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void TurnLightsOn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurnLightsOn__ctor_m004493A7D844A85B8D33D61CC3479367E3490891 (TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * __this, const RuntimeMethod* method)
{
	{
		Event__ctor_mD229CAE285A8C746EDC9C97D3B3B3CEBC502DCEF(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TurnLightsOn::<SwitchLight>b__2_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TurnLightsOn_U3CSwitchLightU3Eb__2_0_mE1CC4D7F3ACD35ED8BED07E9718DE0D46EB69459 (TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * __this, const RuntimeMethod* method)
{
	{
		// yield return new WaitUntil(() => IsPlayerReachDestanation());
		bool L_0;
		L_0 = Event_IsPlayerReachDestanation_m8F2F315385CC529AE2BA9397FCE9D9D8BB4E6B37(__this, /*hidden argument*/NULL);
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
// System.Void Door_4_1/<MoveDoor>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveDoorU3Ed__6__ctor_mDECB3742BFC3D767CEC34B6B5D189F853E93CF8C (U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Door_4_1/<MoveDoor>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveDoorU3Ed__6_System_IDisposable_Dispose_mD1D40846CC32DBAA072AE33733B04D8951EDC2AE (U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Door_4_1/<MoveDoor>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveDoorU3Ed__6_MoveNext_mFACEFCD63665FE5C8C7AADFBF4A0C5E6AA729858 (U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (float i = 0; i < 1; i += Time.deltaTime)
		__this->set_U3CiU3E5__2_3((0.0f));
		goto IL_0076;
	}

IL_002b:
	{
		// transform.position = Vector3.Lerp(startPosition, targetPosition, i);
		Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * L_4 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * L_6 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = L_6->get_startPosition_11();
		Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * L_8 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = L_8->get_targetPosition_10();
		float L_10 = __this->get_U3CiU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_7, L_9, L_10, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_11, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (float i = 0; i < 1; i += Time.deltaTime)
		float L_12 = __this->get_U3CiU3E5__2_3();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CiU3E5__2_3(((float)il2cpp_codegen_add((float)L_12, (float)L_13)));
	}

IL_0076:
	{
		// for (float i = 0; i < 1; i += Time.deltaTime)
		float L_14 = __this->get_U3CiU3E5__2_3();
		if ((((float)L_14) < ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// transform.position = targetPosition;
		Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * L_15 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_15, /*hidden argument*/NULL);
		Door_4_1_t01AF72E22265D24F1B3B3464F78531C37709CDB4 * L_17 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = L_17->get_targetPosition_10();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_16, L_18, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Door_4_1/<MoveDoor>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveDoorU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF87BA4803E1C8137BFE2846CCCCF04317CD9375A (U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Door_4_1/<MoveDoor>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveDoorU3Ed__6_System_Collections_IEnumerator_Reset_mF32C7D1C2E8DD55DF74D927B49328A2866A72075 (U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveDoorU3Ed__6_System_Collections_IEnumerator_Reset_mF32C7D1C2E8DD55DF74D927B49328A2866A72075_RuntimeMethod_var)));
	}
}
// System.Object Door_4_1/<MoveDoor>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveDoorU3Ed__6_System_Collections_IEnumerator_get_Current_m641FDBF9B5E9D83EBD1E2A66A19ADAE46DFB9F8F (U3CMoveDoorU3Ed__6_tC41B683AA6B366D55672FC0613403C057E67F2B5 * __this, const RuntimeMethod* method)
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
// System.Void GoToTheTarget/<StartWalkToTarget>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWalkToTargetU3Ed__1__ctor_m67B6649AFC30855FA94C2960856B86893EF0068C (U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GoToTheTarget/<StartWalkToTarget>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWalkToTargetU3Ed__1_System_IDisposable_Dispose_m43971E8E6E692A9F5B160098713759B36E827401 (U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GoToTheTarget/<StartWalkToTarget>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartWalkToTargetU3Ed__1_MoveNext_m6C12A8841C3663F1895561F6DB7547CDA3714CBB (U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoToTheTarget_U3CStartWalkToTargetU3Eb__1_0_m84129F8B0F4D1AE29E918683DB4233EEA192FF68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_007a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _taskManager.target = target;
		GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * L_3 = V_1;
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_4 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_3)->get__taskManager_4();
		GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_5)->get_target_6();
		L_4->set_target_9(L_6);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitUntil(() => IsPlayerReachDestanation());
		GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * L_8 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_9 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_9, L_8, (intptr_t)((intptr_t)GoToTheTarget_U3CStartWalkToTargetU3Eb__1_0_m84129F8B0F4D1AE29E918683DB4233EEA192FF68_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_10 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// IsEventEnd = true;
		GoToTheTarget_tEF319B983A741351873A6791ED43438BD546906C * L_11 = V_1;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_11)->set_IsEventEnd_7((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object GoToTheTarget/<StartWalkToTarget>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartWalkToTargetU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9CF623AEDE62A4AAD644C4E772DDB938452B0569 (U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GoToTheTarget/<StartWalkToTarget>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWalkToTargetU3Ed__1_System_Collections_IEnumerator_Reset_m355713DEB096A1920A5B5A2605B786A8A70F1B91 (U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartWalkToTargetU3Ed__1_System_Collections_IEnumerator_Reset_m355713DEB096A1920A5B5A2605B786A8A70F1B91_RuntimeMethod_var)));
	}
}
// System.Object GoToTheTarget/<StartWalkToTarget>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartWalkToTargetU3Ed__1_System_Collections_IEnumerator_get_Current_m4DB7C5A74E50F22148737E8A5ABBC4E600C55408 (U3CStartWalkToTargetU3Ed__1_t6AFC2DFC52C96115CAB4F0DD18976373E7C8B5F6 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OpenDoor/<MoveDoor>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveDoorU3Ed__7__ctor_mEA788C35FD09E061461470B5E13D3E0E19B113FB (U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OpenDoor/<MoveDoor>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveDoorU3Ed__7_System_IDisposable_Dispose_m07771EC8B907CCCD6049855EA194A5B1E23DE1FF (U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OpenDoor/<MoveDoor>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveDoorU3Ed__7_MoveNext_mAF47BEFBE71A448C27E1CF2376271F1853CDBEBB (U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0062;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (float i = 0; i < 1; i += Time.deltaTime)
		__this->set_U3CiU3E5__2_3((0.0f));
		goto IL_007b;
	}

IL_002b:
	{
		// Door.transform.position = Vector3.Lerp(startPosition, targetPosition, i);
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_Door_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_7 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_startPosition_10();
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_9 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9->get_targetPosition_9();
		float L_11 = __this->get_U3CiU3E5__2_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_8, L_10, L_11, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_12, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0062:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (float i = 0; i < 1; i += Time.deltaTime)
		float L_13 = __this->get_U3CiU3E5__2_3();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CiU3E5__2_3(((float)il2cpp_codegen_add((float)L_13, (float)L_14)));
	}

IL_007b:
	{
		// for (float i = 0; i < 1; i += Time.deltaTime)
		float L_15 = __this->get_U3CiU3E5__2_3();
		if ((((float)L_15) < ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// transform.position = targetPosition;
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_16 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_18 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = L_18->get_targetPosition_9();
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_19, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object OpenDoor/<MoveDoor>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveDoorU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m148B6E78AABF532752D92789A3C2A4F1FDA921F5 (U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OpenDoor/<MoveDoor>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveDoorU3Ed__7_System_Collections_IEnumerator_Reset_mFDB4C9DE543B90E2707CA4A823381BC4EE3DCC23 (U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveDoorU3Ed__7_System_Collections_IEnumerator_Reset_mFDB4C9DE543B90E2707CA4A823381BC4EE3DCC23_RuntimeMethod_var)));
	}
}
// System.Object OpenDoor/<MoveDoor>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveDoorU3Ed__7_System_Collections_IEnumerator_get_Current_mC539689AB1203ABC9ED1BF3CE8C96F7864869275 (U3CMoveDoorU3Ed__7_tE5CF4A1A2C3264BC4C7C4B5BA0B8FA3E6A8A1BF2 * __this, const RuntimeMethod* method)
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
// System.Void OpenDoor/<StartWalkToTarget>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWalkToTargetU3Ed__6__ctor_m61C487D58E12FECEEBAA7CA22DCAB59CFB6C5457 (U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void OpenDoor/<StartWalkToTarget>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWalkToTargetU3Ed__6_System_IDisposable_Dispose_m38C3DF568521C1800DEC310A4CBE39CDA09585F1 (U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean OpenDoor/<StartWalkToTarget>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartWalkToTargetU3Ed__6_MoveNext_mCFA456D6EBB0C1DAB0CA391E81233ABCA3E082CA (U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenDoor_U3CStartWalkToTargetU3Eb__6_0_mEA1E94370321B22250CA1A463EFD0C3EDF05EF11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_0082;
			}
			case 3:
			{
				goto IL_00a2;
			}
			case 4:
			{
				goto IL_00cf;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _taskManager.target = target;
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_3 = V_1;
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_4 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_3)->get__taskManager_4();
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_5)->get_target_6();
		L_4->set_target_9(L_6);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitUntil(() => IsPlayerReachDestanation());
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_8 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_9 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_9, L_8, (intptr_t)((intptr_t)OpenDoor_U3CStartWalkToTargetU3Eb__6_0_mEA1E94370321B22250CA1A463EFD0C3EDF05EF11_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_10 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0082:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00a2:
	{
		__this->set_U3CU3E1__state_0((-1));
		// StartCoroutine(MoveDoor());
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_12 = V_1;
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_13 = V_1;
		RuntimeObject* L_14;
		L_14 = OpenDoor_MoveDoor_mD4CE58A2EBDC0047FF934C0E8FCF78451833945D(L_13, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_15;
		L_15 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_12, L_14, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_16 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_16, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_16);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_00cf:
	{
		__this->set_U3CU3E1__state_0((-1));
		// IsEventEnd = true;
		OpenDoor_t654875E0C17F62FA54DF70E4553B77E0AFA4371C * L_17 = V_1;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_17)->set_IsEventEnd_7((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object OpenDoor/<StartWalkToTarget>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartWalkToTargetU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m430D19E86F4EC62C15D839631AD8C7107BF1D503 (U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void OpenDoor/<StartWalkToTarget>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartWalkToTargetU3Ed__6_System_Collections_IEnumerator_Reset_m110D8FC502C8DB03E15E38641661E0DB32EE1328 (U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartWalkToTargetU3Ed__6_System_Collections_IEnumerator_Reset_m110D8FC502C8DB03E15E38641661E0DB32EE1328_RuntimeMethod_var)));
	}
}
// System.Object OpenDoor/<StartWalkToTarget>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartWalkToTargetU3Ed__6_System_Collections_IEnumerator_get_Current_mBE62B0436BEDEF7BE2CADDD8C46E04D8C3118E68 (U3CStartWalkToTargetU3Ed__6_t4D099D83BFA62BC3BCAD23A983C6CDF49516E147 * __this, const RuntimeMethod* method)
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
// System.Void Task/<EventOrderList>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventOrderListU3Ed__7__ctor_m9DF680A51CEA841F6F0367C946E0E8FEB53EDB02 (U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Task/<EventOrderList>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventOrderListU3Ed__7_System_IDisposable_Dispose_mB77F31E958E94D55447BAC43E2A2E423B9923552 (U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Task/<EventOrderList>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEventOrderListU3Ed__7_MoveNext_mDB452E282D4A6966348D3775DB14172370F338F0 (U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_U3CEventOrderListU3Eb__7_0_mB6E4C154F51A895CCEFC45D9FAD3BBB304414063_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_U3CEventOrderListU3Eb__7_1_m5546D63933747CCAD1B52B0F1C5552B78B6110DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0087;
			}
			case 3:
			{
				goto IL_00b4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0044:
	{
		// if (_playerController.IsPlayerHaveControl)
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_3 = V_1;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = L_3->get__playerController_6();
		bool L_5 = L_4->get_IsPlayerHaveControl_4();
		if (!L_5)
		{
			goto IL_008e;
		}
	}
	{
		// events[CurrentEventId].StopAllCoroutines();
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_6 = V_1;
		List_1_tFDDEA8851A61AAE14692D2D494A62B49470D149D * L_7 = L_6->get_events_4();
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_8 = V_1;
		int32_t L_9 = L_8->get_CurrentEventId_7();
		Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 * L_10;
		L_10 = List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_inline(L_7, L_9, /*hidden argument*/List_1_get_Item_m16B72FA71BA458FCF9B110AB1481F81A5F8254DD_RuntimeMethod_var);
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(L_10, /*hidden argument*/NULL);
		// yield return new WaitUntil(() => !_playerController.IsPlayerHaveControl);
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_11 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_12 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_12, L_11, (intptr_t)((intptr_t)Task_U3CEventOrderListU3Eb__7_0_mB6E4C154F51A895CCEFC45D9FAD3BBB304414063_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_13 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_13, L_12, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_13);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0087:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_008e:
	{
		// StartNextEvent();
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_14 = V_1;
		Task_StartNextEvent_m972C1F5080F135FF20610DDBA1D4B25B229C030C(L_14, /*hidden argument*/NULL);
		// yield return new WaitUntil(() => CurrentEvent.IsEventEnd == true);
		Task_t50C166B10D822120A73AF1EB3DDF7BB93717607D * L_15 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_16 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_16, L_15, (intptr_t)((intptr_t)Task_U3CEventOrderListU3Eb__7_1_m5546D63933747CCAD1B52B0F1C5552B78B6110DA_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_17 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_17, L_16, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_17);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_00b4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0044;
	}
}
// System.Object Task/<EventOrderList>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEventOrderListU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A7709D6334655B6B22E394DD171E42FE934FA05 (U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Task/<EventOrderList>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEventOrderListU3Ed__7_System_Collections_IEnumerator_Reset_m32E336BF7B354E18984E565AE1367A94BD5375DA (U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEventOrderListU3Ed__7_System_Collections_IEnumerator_Reset_m32E336BF7B354E18984E565AE1367A94BD5375DA_RuntimeMethod_var)));
	}
}
// System.Object Task/<EventOrderList>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CEventOrderListU3Ed__7_System_Collections_IEnumerator_get_Current_m10451B38CC4D682710B36CB51D9EC5ECA4BA52D5 (U3CEventOrderListU3Ed__7_tC6E57D9149DEFF31D061F350BDAAAEDA480BEE81 * __this, const RuntimeMethod* method)
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
// System.Void TurnLightsOn/<SwitchLight>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchLightU3Ed__2__ctor_m949132A91EF36DC66396A2D48A0679CDAEF060DD (U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TurnLightsOn/<SwitchLight>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchLightU3Ed__2_System_IDisposable_Dispose_mF7EE699B7906A5C9988422A8098019587158F950 (U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TurnLightsOn/<SwitchLight>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSwitchLightU3Ed__2_MoveNext_m18F0EEA8CF1D3ABA7DC6D69DD0F31412EC5D22B4 (U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TurnLightsOn_U3CSwitchLightU3Eb__2_0_mE1CC4D7F3ACD35ED8BED07E9718DE0D46EB69459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0053;
			}
			case 2:
			{
				goto IL_007a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// _taskManager.target = target;
		TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * L_3 = V_1;
		TaskManager_tD953F380A7AE9105863FED44DA8717AB88950DE7 * L_4 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_3)->get__taskManager_4();
		TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_5)->get_target_6();
		L_4->set_target_9(L_6);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_7 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_7, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0053:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitUntil(() => IsPlayerReachDestanation());
		TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * L_8 = V_1;
		Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * L_9 = (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)il2cpp_codegen_object_new(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
		Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9(L_9, L_8, (intptr_t)((intptr_t)TurnLightsOn_U3CSwitchLightU3Eb__2_0_mE1CC4D7F3ACD35ED8BED07E9718DE0D46EB69459_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
		WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 * L_10 = (WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21 *)il2cpp_codegen_object_new(WaitUntil_t2BCFEEF9372AFA754955A9733004060D1F609F21_il2cpp_TypeInfo_var);
		WaitUntil__ctor_m4D825CB1C0570631514BFF24AEF1FB17D646C76F(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_007a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// location.IsLightsOn = !location.IsLightsOn;
		TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * L_11 = V_1;
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_12 = L_11->get_location_8();
		TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * L_13 = V_1;
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_14 = L_13->get_location_8();
		bool L_15 = L_14->get_IsLightsOn_7();
		L_12->set_IsLightsOn_7((bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0));
		// location.SwitchLights();
		TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * L_16 = V_1;
		Location_t6C8A31F2AE89D8718B1694A63AFBBA7C174B93A9 * L_17 = L_16->get_location_8();
		Location_SwitchLights_mDB3517FAC84C4BD70AADB44576F36B81E329D53C(L_17, /*hidden argument*/NULL);
		// IsEventEnd = true;
		TurnLightsOn_t40BD87664807FD1AC0F82DCDA82A1E0ECA066F67 * L_18 = V_1;
		((Event_tF2F88BEEDAAFC790C4E9E6FD402742CB69C9A2C4 *)L_18)->set_IsEventEnd_7((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object TurnLightsOn/<SwitchLight>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwitchLightU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m24B223AC93FEB9EAB0BDAF5BBD57D11AC71B82C6 (U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TurnLightsOn/<SwitchLight>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSwitchLightU3Ed__2_System_Collections_IEnumerator_Reset_m00B09BC8CD6EB703FE2B45298205009C2402F182 (U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSwitchLightU3Ed__2_System_Collections_IEnumerator_Reset_m00B09BC8CD6EB703FE2B45298205009C2402F182_RuntimeMethod_var)));
	}
}
// System.Object TurnLightsOn/<SwitchLight>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSwitchLightU3Ed__2_System_Collections_IEnumerator_get_Current_m54A011C76E8205BB424C8CDEEA14654333BD4D50 (U3CSwitchLightU3Ed__2_t31B4CD03114188DAEA463D9CF621E1154FCBD9C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
