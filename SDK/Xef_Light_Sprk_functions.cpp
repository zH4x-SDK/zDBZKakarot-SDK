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

// Function Xef_Light_Sprk.Xef_Light_Sprk_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UXef_Light_Sprk_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xef_Light_Sprk.Xef_Light_Sprk_C.Construct");

	UXef_Light_Sprk_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Xef_Light_Sprk.Xef_Light_Sprk_C.ExecuteUbergraph_Xef_Light_Sprk
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UXef_Light_Sprk_C::ExecuteUbergraph_Xef_Light_Sprk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xef_Light_Sprk.Xef_Light_Sprk_C.ExecuteUbergraph_Xef_Light_Sprk");

	UXef_Light_Sprk_C_ExecuteUbergraph_Xef_Light_Sprk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
