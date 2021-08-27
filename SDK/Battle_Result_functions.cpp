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

// Function Battle_Result.Battle_Result_C.PrintTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBattle_Result_C::PrintTransform(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Result.Battle_Result_C.PrintTransform");

	UBattle_Result_C_PrintTransform_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Battle_Result.Battle_Result_C.InitSetting
// (Event, Protected, BlueprintEvent)
void UBattle_Result_C::InitSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Result.Battle_Result_C.InitSetting");

	UBattle_Result_C_InitSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Battle_Result.Battle_Result_C.ExecuteUbergraph_Battle_Result
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBattle_Result_C::ExecuteUbergraph_Battle_Result(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Result.Battle_Result_C.ExecuteUbergraph_Battle_Result");

	UBattle_Result_C_ExecuteUbergraph_Battle_Result_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
