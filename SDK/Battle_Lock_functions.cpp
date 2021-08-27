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

// Function Battle_Lock.Battle_Lock_C.ShortInAnimCompleted
// (BlueprintCallable, BlueprintEvent)
void UBattle_Lock_C::ShortInAnimCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Lock.Battle_Lock_C.ShortInAnimCompleted");

	UBattle_Lock_C_ShortInAnimCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Battle_Lock.Battle_Lock_C.ExecuteUbergraph_Battle_Lock
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBattle_Lock_C::ExecuteUbergraph_Battle_Lock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Lock.Battle_Lock_C.ExecuteUbergraph_Battle_Lock");

	UBattle_Lock_C_ExecuteUbergraph_Battle_Lock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
