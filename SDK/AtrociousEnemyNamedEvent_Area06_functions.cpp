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

// Function AtrociousEnemyNamedEvent_Area06.AtrociousEnemyNamedEvent_Area06_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAtrociousEnemyNamedEvent_Area06_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area06.AtrociousEnemyNamedEvent_Area06_C.UserConstructionScript");

	AAtrociousEnemyNamedEvent_Area06_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AtrociousEnemyNamedEvent_Area06.AtrociousEnemyNamedEvent_Area06_C.PhaseEvent
// (Event, Public, BlueprintEvent)
void AAtrociousEnemyNamedEvent_Area06_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area06.AtrociousEnemyNamedEvent_Area06_C.PhaseEvent");

	AAtrociousEnemyNamedEvent_Area06_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AtrociousEnemyNamedEvent_Area06.AtrociousEnemyNamedEvent_Area06_C.ExecuteUbergraph_AtrociousEnemyNamedEvent_Area06
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAtrociousEnemyNamedEvent_Area06_C::ExecuteUbergraph_AtrociousEnemyNamedEvent_Area06(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area06.AtrociousEnemyNamedEvent_Area06_C.ExecuteUbergraph_AtrociousEnemyNamedEvent_Area06");

	AAtrociousEnemyNamedEvent_Area06_C_ExecuteUbergraph_AtrociousEnemyNamedEvent_Area06_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
