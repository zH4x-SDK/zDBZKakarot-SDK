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

// Function Shop_Cmn_Money.Shop_Cmn_Money_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UShop_Cmn_Money_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Cmn_Money.Shop_Cmn_Money_C.Construct");

	UShop_Cmn_Money_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Shop_Cmn_Money.Shop_Cmn_Money_C.ExecuteUbergraph_Shop_Cmn_Money
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UShop_Cmn_Money_C::ExecuteUbergraph_Shop_Cmn_Money(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Cmn_Money.Shop_Cmn_Money_C.ExecuteUbergraph_Shop_Cmn_Money");

	UShop_Cmn_Money_C_ExecuteUbergraph_Shop_Cmn_Money_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
