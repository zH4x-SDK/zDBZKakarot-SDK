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

// Function BP_Memories_Area03.BP_Memories_Area03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Memories_Area03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Memories_Area03.BP_Memories_Area03_C.UserConstructionScript");

	ABP_Memories_Area03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Memories_Area03.BP_Memories_Area03_C.OnBrokeObject
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   TriggerId                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Memories_Area03_C::OnBrokeObject(const struct FName& TriggerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Memories_Area03.BP_Memories_Area03_C.OnBrokeObject");

	ABP_Memories_Area03_C_OnBrokeObject_Params params;
	params.TriggerId = TriggerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Memories_Area03.BP_Memories_Area03_C.OnAddedItem
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FName                   ItemId                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Memories_Area03_C::OnAddedItem(const struct FName& ItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Memories_Area03.BP_Memories_Area03_C.OnAddedItem");

	ABP_Memories_Area03_C_OnAddedItem_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Memories_Area03.BP_Memories_Area03_C.ExecuteUbergraph_BP_Memories_Area03
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Memories_Area03_C::ExecuteUbergraph_BP_Memories_Area03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Memories_Area03.BP_Memories_Area03_C.ExecuteUbergraph_BP_Memories_Area03");

	ABP_Memories_Area03_C_ExecuteUbergraph_BP_Memories_Area03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
