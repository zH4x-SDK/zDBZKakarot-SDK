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

// Function BP_ATGameModeMain.BP_ATGameModeMain_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ATGameModeMain_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ATGameModeMain.BP_ATGameModeMain_C.UserConstructionScript");

	ABP_ATGameModeMain_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ATGameModeMain.BP_ATGameModeMain_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ATGameModeMain_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ATGameModeMain.BP_ATGameModeMain_C.ReceiveTick");

	ABP_ATGameModeMain_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ATGameModeMain.BP_ATGameModeMain_C.ExecuteUbergraph_BP_ATGameModeMain
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ATGameModeMain_C::ExecuteUbergraph_BP_ATGameModeMain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ATGameModeMain.BP_ATGameModeMain_C.ExecuteUbergraph_BP_ATGameModeMain");

	ABP_ATGameModeMain_C_ExecuteUbergraph_BP_ATGameModeMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
