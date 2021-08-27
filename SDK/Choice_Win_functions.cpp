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

// Function Choice_Win.Choice_Win_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UChoice_Win_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Choice_Win.Choice_Win_C.Construct");

	UChoice_Win_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Choice_Win.Choice_Win_C.ExecuteUbergraph_Choice_Win
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChoice_Win_C::ExecuteUbergraph_Choice_Win(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Choice_Win.Choice_Win_C.ExecuteUbergraph_Choice_Win");

	UChoice_Win_C_ExecuteUbergraph_Choice_Win_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
