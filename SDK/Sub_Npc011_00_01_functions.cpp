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

// Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASub_Npc011_00_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.UserConstructionScript");

	ASub_Npc011_00_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.PhaseEvent
// (Event, Public, BlueprintEvent)
void ASub_Npc011_00_01_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.PhaseEvent");

	ASub_Npc011_00_01_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnCancelSubQuest
// (Event, Public, BlueprintEvent)
void ASub_Npc011_00_01_C::OnCancelSubQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnCancelSubQuest");

	ASub_Npc011_00_01_C_OnCancelSubQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnCancelSubQuestTransition
// (Event, Public, BlueprintEvent)
void ASub_Npc011_00_01_C::OnCancelSubQuestTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnCancelSubQuestTransition");

	ASub_Npc011_00_01_C_OnCancelSubQuestTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnOpenSimpleTalk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   SimpleTalkId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   messageId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASub_Npc011_00_01_C::OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnOpenSimpleTalk");

	ASub_Npc011_00_01_C_OnOpenSimpleTalk_Params params;
	params.SimpleTalkId = SimpleTalkId;
	params.messageId = messageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnAddedItem
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASub_Npc011_00_01_C::OnAddedItem(const struct FName& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnAddedItem");

	ASub_Npc011_00_01_C_OnAddedItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnIngameBegan
// (Event, Public, BlueprintEvent)
void ASub_Npc011_00_01_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.OnIngameBegan");

	ASub_Npc011_00_01_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.ExecuteUbergraph_Sub_Npc011_00_01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASub_Npc011_00_01_C::ExecuteUbergraph_Sub_Npc011_00_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc011_00_01.Sub_Npc011_00_01_C.ExecuteUbergraph_Sub_Npc011_00_01");

	ASub_Npc011_00_01_C_ExecuteUbergraph_Sub_Npc011_00_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
