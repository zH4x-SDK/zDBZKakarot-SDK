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

// Function AB_BaseballGame_Cpl001p1.AB_BaseballGame_Cpl001p1_C.ExecuteUbergraph_AB_BaseballGame_Cpl001p1
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAB_BaseballGame_Cpl001p1_C::ExecuteUbergraph_AB_BaseballGame_Cpl001p1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_BaseballGame_Cpl001p1.AB_BaseballGame_Cpl001p1_C.ExecuteUbergraph_AB_BaseballGame_Cpl001p1");

	UAB_BaseballGame_Cpl001p1_C_ExecuteUbergraph_AB_BaseballGame_Cpl001p1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
