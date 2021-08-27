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

// Function AT_Character_cpl064c01_BP.AT_Character_cpl064c01_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAT_Character_cpl064c01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AT_Character_cpl064c01_BP.AT_Character_cpl064c01_BP_C.UserConstructionScript");

	AAT_Character_cpl064c01_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AT_Character_cpl064c01_BP.AT_Character_cpl064c01_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AAT_Character_cpl064c01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AT_Character_cpl064c01_BP.AT_Character_cpl064c01_BP_C.ReceiveBeginPlay");

	AAT_Character_cpl064c01_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AT_Character_cpl064c01_BP.AT_Character_cpl064c01_BP_C.ExecuteUbergraph_AT_Character_cpl064c01_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAT_Character_cpl064c01_BP_C::ExecuteUbergraph_AT_Character_cpl064c01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AT_Character_cpl064c01_BP.AT_Character_cpl064c01_BP_C.ExecuteUbergraph_AT_Character_cpl064c01_BP");

	AAT_Character_cpl064c01_BP_C_ExecuteUbergraph_AT_Character_cpl064c01_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
