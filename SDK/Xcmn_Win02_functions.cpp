﻿// Name: DBZ-Kakarot, Version: 4.21.2

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

// Function Xcmn_Win02.Xcmn_Win02_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UXcmn_Win02_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Win02.Xcmn_Win02_C.Construct");

	UXcmn_Win02_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Xcmn_Win02.Xcmn_Win02_C.ExecuteUbergraph_Xcmn_Win02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UXcmn_Win02_C::ExecuteUbergraph_Xcmn_Win02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Win02.Xcmn_Win02_C.ExecuteUbergraph_Xcmn_Win02");

	UXcmn_Win02_C_ExecuteUbergraph_Xcmn_Win02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif