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

// Function Mgame_Bar00.Mgame_Bar00_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMgame_Bar00_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mgame_Bar00.Mgame_Bar00_C.Construct");

	UMgame_Bar00_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mgame_Bar00.Mgame_Bar00_C.ExecuteUbergraph_Mgame_Bar00
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMgame_Bar00_C::ExecuteUbergraph_Mgame_Bar00(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mgame_Bar00.Mgame_Bar00_C.ExecuteUbergraph_Mgame_Bar00");

	UMgame_Bar00_C_ExecuteUbergraph_Mgame_Bar00_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
