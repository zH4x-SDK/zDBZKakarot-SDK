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

// Function AT_GameHUD_BP.AT_GameHUD_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAT_GameHUD_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AT_GameHUD_BP.AT_GameHUD_BP_C.UserConstructionScript");

	AAT_GameHUD_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AT_GameHUD_BP.AT_GameHUD_BP_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int                            SizeX                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            SizeY                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAT_GameHUD_BP_C::ReceiveDrawHUD(int SizeX, int SizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function AT_GameHUD_BP.AT_GameHUD_BP_C.ReceiveDrawHUD");

	AAT_GameHUD_BP_C_ReceiveDrawHUD_Params params;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AT_GameHUD_BP.AT_GameHUD_BP_C.ExecuteUbergraph_AT_GameHUD_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAT_GameHUD_BP_C::ExecuteUbergraph_AT_GameHUD_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AT_GameHUD_BP.AT_GameHUD_BP_C.ExecuteUbergraph_AT_GameHUD_BP");

	AAT_GameHUD_BP_C_ExecuteUbergraph_AT_GameHUD_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
