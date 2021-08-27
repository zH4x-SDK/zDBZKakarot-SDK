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

// Function AtrociousEnemyBossEvent_Area09.AtrociousEnemyBossEvent_Area09_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAtrociousEnemyBossEvent_Area09_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area09.AtrociousEnemyBossEvent_Area09_C.UserConstructionScript");

	AAtrociousEnemyBossEvent_Area09_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AtrociousEnemyBossEvent_Area09.AtrociousEnemyBossEvent_Area09_C.PhaseEvent
// (Event, Public, BlueprintEvent)
void AAtrociousEnemyBossEvent_Area09_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area09.AtrociousEnemyBossEvent_Area09_C.PhaseEvent");

	AAtrociousEnemyBossEvent_Area09_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AtrociousEnemyBossEvent_Area09.AtrociousEnemyBossEvent_Area09_C.ExecuteUbergraph_AtrociousEnemyBossEvent_Area09
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAtrociousEnemyBossEvent_Area09_C::ExecuteUbergraph_AtrociousEnemyBossEvent_Area09(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area09.AtrociousEnemyBossEvent_Area09_C.ExecuteUbergraph_AtrociousEnemyBossEvent_Area09");

	AAtrociousEnemyBossEvent_Area09_C_ExecuteUbergraph_AtrociousEnemyBossEvent_Area09_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
