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

// Function Num_S.Num_S_C.Set_Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNum_S_C::Set_Icon(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Num_S.Num_S_C.Set_Icon");

	UNum_S_C_Set_Icon_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Num_S.Num_S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UNum_S_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Num_S.Num_S_C.Construct");

	UNum_S_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Num_S.Num_S_C.ExecuteUbergraph_Num_S
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNum_S_C::ExecuteUbergraph_Num_S(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Num_S.Num_S_C.ExecuteUbergraph_Num_S");

	UNum_S_C_ExecuteUbergraph_Num_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
