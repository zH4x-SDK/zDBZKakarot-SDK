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

// Function Navi_CompZ.Navi_CompZ_C.ConstructFirstOnly
// (BlueprintCallable, BlueprintEvent)
void UNavi_CompZ_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Navi_CompZ.Navi_CompZ_C.ConstructFirstOnly");

	UNavi_CompZ_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Navi_CompZ.Navi_CompZ_C.ExecuteUbergraph_Navi_CompZ
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNavi_CompZ_C::ExecuteUbergraph_Navi_CompZ(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Navi_CompZ.Navi_CompZ_C.ExecuteUbergraph_Navi_CompZ");

	UNavi_CompZ_C_ExecuteUbergraph_Navi_CompZ_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
