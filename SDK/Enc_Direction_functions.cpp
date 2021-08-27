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

// Function Enc_Direction.Enc_Direction_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UEnc_Direction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enc_Direction.Enc_Direction_C.Construct");

	UEnc_Direction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Enc_Direction.Enc_Direction_C.SetEncounterDirectionType
// (Event, Public, BlueprintEvent)
// Parameters:
// AT_EEncounterDirectionType     Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEnc_Direction_C::SetEncounterDirectionType(AT_EEncounterDirectionType Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enc_Direction.Enc_Direction_C.SetEncounterDirectionType");

	UEnc_Direction_C_SetEncounterDirectionType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Enc_Direction.Enc_Direction_C.ExecuteUbergraph_Enc_Direction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEnc_Direction_C::ExecuteUbergraph_Enc_Direction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enc_Direction.Enc_Direction_C.ExecuteUbergraph_Enc_Direction");

	UEnc_Direction_C_ExecuteUbergraph_Enc_Direction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
