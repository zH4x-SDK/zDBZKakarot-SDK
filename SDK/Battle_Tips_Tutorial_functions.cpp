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

// Function Battle_Tips_Tutorial.Battle_Tips_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UBattle_Tips_Tutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Tips_Tutorial.Battle_Tips_Tutorial_C.Construct");

	UBattle_Tips_Tutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Battle_Tips_Tutorial.Battle_Tips_Tutorial_C.ExecuteUbergraph_Battle_Tips_Tutorial
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBattle_Tips_Tutorial_C::ExecuteUbergraph_Battle_Tips_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Tips_Tutorial.Battle_Tips_Tutorial_C.ExecuteUbergraph_Battle_Tips_Tutorial");

	UBattle_Tips_Tutorial_C_ExecuteUbergraph_Battle_Tips_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
