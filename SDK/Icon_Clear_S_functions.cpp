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

// Function Icon_Clear_S.Icon_Clear_S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UIcon_Clear_S_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_Clear_S.Icon_Clear_S_C.Construct");

	UIcon_Clear_S_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Icon_Clear_S.Icon_Clear_S_C.ExecuteUbergraph_Icon_Clear_S
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIcon_Clear_S_C::ExecuteUbergraph_Icon_Clear_S(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_Clear_S.Icon_Clear_S_C.ExecuteUbergraph_Icon_Clear_S");

	UIcon_Clear_S_C_ExecuteUbergraph_Icon_Clear_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
