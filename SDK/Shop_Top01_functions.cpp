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

// Function Shop_Top01.Shop_Top01_C.Out_Header
// (BlueprintCallable, BlueprintEvent)
void UShop_Top01_C::Out_Header()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Top01.Shop_Top01_C.Out_Header");

	UShop_Top01_C_Out_Header_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Shop_Top01.Shop_Top01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UShop_Top01_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Top01.Shop_Top01_C.Construct");

	UShop_Top01_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Shop_Top01.Shop_Top01_C.ExecuteUbergraph_Shop_Top01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShop_Top01_C::ExecuteUbergraph_Shop_Top01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Top01.Shop_Top01_C.ExecuteUbergraph_Shop_Top01");

	UShop_Top01_C_ExecuteUbergraph_Shop_Top01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
