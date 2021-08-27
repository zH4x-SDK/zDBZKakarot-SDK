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

// Function FontRegist.FontRegist_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UFontRegist_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FontRegist.FontRegist_C.Construct");

	UFontRegist_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function FontRegist.FontRegist_C.ExecuteUbergraph_FontRegist
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UFontRegist_C::ExecuteUbergraph_FontRegist(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FontRegist.FontRegist_C.ExecuteUbergraph_FontRegist");

	UFontRegist_C_ExecuteUbergraph_FontRegist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
