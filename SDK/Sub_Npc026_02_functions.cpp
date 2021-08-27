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

// Function Sub_Npc026_02.Sub_Npc026_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASub_Npc026_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.UserConstructionScript");

	ASub_Npc026_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.PhaseEvent
// (Event, Public, BlueprintEvent)
void ASub_Npc026_02_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.PhaseEvent");

	ASub_Npc026_02_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.OnCancelSubQuest
// (Event, Public, BlueprintEvent)
void ASub_Npc026_02_C::OnCancelSubQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.OnCancelSubQuest");

	ASub_Npc026_02_C_OnCancelSubQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.ChangeActorEnabele
// (BlueprintCallable, BlueprintEvent)
void ASub_Npc026_02_C::ChangeActorEnabele()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.ChangeActorEnabele");

	ASub_Npc026_02_C_ChangeActorEnabele_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.OnOpenSimpleTalk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   SimpleTalkId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   messageId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASub_Npc026_02_C::OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.OnOpenSimpleTalk");

	ASub_Npc026_02_C_OnOpenSimpleTalk_Params params;
	params.SimpleTalkId = SimpleTalkId;
	params.messageId = messageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.OnCancelSubQuestTransition
// (Event, Public, BlueprintEvent)
void ASub_Npc026_02_C::OnCancelSubQuestTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.OnCancelSubQuestTransition");

	ASub_Npc026_02_C_OnCancelSubQuestTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.OnIngameBegan
// (Event, Public, BlueprintEvent)
void ASub_Npc026_02_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.OnIngameBegan");

	ASub_Npc026_02_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.DoorOpenCloseArea03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bInDoor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASub_Npc026_02_C::DoorOpenCloseArea03(const struct FName& DoorName, bool bInDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.DoorOpenCloseArea03");

	ASub_Npc026_02_C_DoorOpenCloseArea03_Params params;
	params.DoorName = DoorName;
	params.bInDoor = bInDoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.DoorOpenCloseArea18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bInDoor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASub_Npc026_02_C::DoorOpenCloseArea18(const struct FName& DoorName, bool bInDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.DoorOpenCloseArea18");

	ASub_Npc026_02_C_DoorOpenCloseArea18_Params params;
	params.DoorName = DoorName;
	params.bInDoor = bInDoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc026_02.Sub_Npc026_02_C.ExecuteUbergraph_Sub_Npc026_02
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASub_Npc026_02_C::ExecuteUbergraph_Sub_Npc026_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc026_02.Sub_Npc026_02_C.ExecuteUbergraph_Sub_Npc026_02");

	ASub_Npc026_02_C_ExecuteUbergraph_Sub_Npc026_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
