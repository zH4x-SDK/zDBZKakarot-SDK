// Name: DBZ-Kakarot, Version: 4.21.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.DisableDoor
// (Public, BlueprintCallable, BlueprintEvent)
void AC01_EVT_MAIN_01002_C::DisableDoor()
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.DisableDoor");

	AC01_EVT_MAIN_01002_C_DisableDoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OpenDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   findId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::OpenDoor(const struct FName& findId)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OpenDoor");

	AC01_EVT_MAIN_01002_C_OpenDoor_Params params;
	params.findId = findId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AC01_EVT_MAIN_01002_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.UserConstructionScript");

	AC01_EVT_MAIN_01002_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.PhaseEvent
// (Event, Public, BlueprintEvent)
void AC01_EVT_MAIN_01002_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.PhaseEvent");

	AC01_EVT_MAIN_01002_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnCooking
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// AT_EEventTimingType            Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bCooked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           bCompletedQuestPhase           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FName>           CookedList                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AC01_EVT_MAIN_01002_C::OnCooking(AT_EEventTimingType Timing, bool bCooked, bool bCompletedQuestPhase, TArray<struct FName> CookedList)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnCooking");

	AC01_EVT_MAIN_01002_C_OnCooking_Params params;
	params.Timing = Timing;
	params.bCooked = bCooked;
	params.bCompletedQuestPhase = bCompletedQuestPhase;
	params.CookedList = CookedList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::CustomEvent_1(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_1");

	AC01_EVT_MAIN_01002_C_CustomEvent_1_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnAddedItem
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::OnAddedItem(const struct FName& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnAddedItem");

	AC01_EVT_MAIN_01002_C_OnAddedItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::CustomEvent_4(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_4");

	AC01_EVT_MAIN_01002_C_CustomEvent_4_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::CustomEvent(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent");

	AC01_EVT_MAIN_01002_C_CustomEvent_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::CustomEvent_3(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_3");

	AC01_EVT_MAIN_01002_C_CustomEvent_3_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::CustomEvent_6(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_6");

	AC01_EVT_MAIN_01002_C_CustomEvent_6_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::CustomEvent_7(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_7");

	AC01_EVT_MAIN_01002_C_CustomEvent_7_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::CustomEvent_2(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_2");

	AC01_EVT_MAIN_01002_C_CustomEvent_2_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnBonfireEvent
// (Event, Public, BlueprintEvent)
void AC01_EVT_MAIN_01002_C::OnBonfireEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnBonfireEvent");

	AC01_EVT_MAIN_01002_C_OnBonfireEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnLoadCompleted
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            GenericFlg                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::OnLoadCompleted(int GenericFlg)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnLoadCompleted");

	AC01_EVT_MAIN_01002_C_OnLoadCompleted_Params params;
	params.GenericFlg = GenericFlg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnCryingEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// AT_EQuestCharacterBehaveState  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::OnCryingEvent(AT_EQuestCharacterBehaveState State)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.OnCryingEvent");

	AC01_EVT_MAIN_01002_C_OnCryingEvent_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.BndEvt__FishTips_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::BndEvt__FishTips_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.BndEvt__FishTips_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature");

	AC01_EVT_MAIN_01002_C_BndEvt__FishTips_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::CustomEvent_5(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.CustomEvent_5");

	AC01_EVT_MAIN_01002_C_CustomEvent_5_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.ExecuteUbergraph_C01_EVT_MAIN_01002
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_EVT_MAIN_01002_C::ExecuteUbergraph_C01_EVT_MAIN_01002(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01002.C01_EVT_MAIN_01002_C.ExecuteUbergraph_C01_EVT_MAIN_01002");

	AC01_EVT_MAIN_01002_C_ExecuteUbergraph_C01_EVT_MAIN_01002_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
