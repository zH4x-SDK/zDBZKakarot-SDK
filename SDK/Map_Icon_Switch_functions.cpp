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

// Function Map_Icon_Switch.Map_Icon_Switch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UMap_Icon_Switch_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Icon_Switch.Map_Icon_Switch_C.Construct");

	UMap_Icon_Switch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Map_Icon_Switch.Map_Icon_Switch_C.ExecuteUbergraph_Map_Icon_Switch
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMap_Icon_Switch_C::ExecuteUbergraph_Map_Icon_Switch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Icon_Switch.Map_Icon_Switch_C.ExecuteUbergraph_Map_Icon_Switch");

	UMap_Icon_Switch_C_ExecuteUbergraph_Map_Icon_Switch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
