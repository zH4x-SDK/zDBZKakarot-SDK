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

// Function Quest_Main_Clear.Quest_Main_Clear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UQuest_Main_Clear_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Main_Clear.Quest_Main_Clear_C.Construct");

	UQuest_Main_Clear_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Main_Clear.Quest_Main_Clear_C.ExecuteUbergraph_Quest_Main_Clear
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuest_Main_Clear_C::ExecuteUbergraph_Quest_Main_Clear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Main_Clear.Quest_Main_Clear_C.ExecuteUbergraph_Quest_Main_Clear");

	UQuest_Main_Clear_C_ExecuteUbergraph_Quest_Main_Clear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
