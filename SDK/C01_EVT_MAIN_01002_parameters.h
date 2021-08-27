#pragma once

// Name: DBZ-Kakarot, Version: 4.21.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.DisableDoor
struct AC01_EVT_MAIN_01002_C_DisableDoor_Params
{
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OpenDoor
struct AC01_EVT_MAIN_01002_C_OpenDoor_Params
{
	struct FName                                       findId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.UserConstructionScript
struct AC01_EVT_MAIN_01002_C_UserConstructionScript_Params
{
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.PhaseEvent
struct AC01_EVT_MAIN_01002_C_PhaseEvent_Params
{
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnCooking
struct AC01_EVT_MAIN_01002_C_OnCooking_Params
{
	AT_EEventTimingType                                Timing;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCooked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bCompletedQuestPhase;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FName>                               CookedList;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_1
struct AC01_EVT_MAIN_01002_C_CustomEvent_1_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnAddedItem
struct AC01_EVT_MAIN_01002_C_OnAddedItem_Params
{
	struct FName                                       ItemId;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_4
struct AC01_EVT_MAIN_01002_C_CustomEvent_4_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent
struct AC01_EVT_MAIN_01002_C_CustomEvent_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_3
struct AC01_EVT_MAIN_01002_C_CustomEvent_3_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_6
struct AC01_EVT_MAIN_01002_C_CustomEvent_6_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_7
struct AC01_EVT_MAIN_01002_C_CustomEvent_7_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_2
struct AC01_EVT_MAIN_01002_C_CustomEvent_2_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnBonfireEvent
struct AC01_EVT_MAIN_01002_C_OnBonfireEvent_Params
{
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnLoadCompleted
struct AC01_EVT_MAIN_01002_C_OnLoadCompleted_Params
{
	int                                                GenericFlg;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnCryingEvent
struct AC01_EVT_MAIN_01002_C_OnCryingEvent_Params
{
	AT_EQuestCharacterBehaveState                      State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.BndEvt__FishTips_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct AC01_EVT_MAIN_01002_C_BndEvt__FishTips_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_5
struct AC01_EVT_MAIN_01002_C_CustomEvent_5_Params
{
	class AActor*                                      OverlappedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.ExecuteUbergraph_C01_EVT_MAIN_01002
struct AC01_EVT_MAIN_01002_C_ExecuteUbergraph_C01_EVT_MAIN_01002_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
