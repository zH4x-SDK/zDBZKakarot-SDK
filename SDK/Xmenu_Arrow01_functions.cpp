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

// Function Xmenu_Arrow01.Xmenu_Arrow01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UXmenu_Arrow01_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Arrow01.Xmenu_Arrow01_C.Construct");

	UXmenu_Arrow01_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Xmenu_Arrow01.Xmenu_Arrow01_C.ExecuteUbergraph_Xmenu_Arrow01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UXmenu_Arrow01_C::ExecuteUbergraph_Xmenu_Arrow01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Arrow01.Xmenu_Arrow01_C.ExecuteUbergraph_Xmenu_Arrow01");

	UXmenu_Arrow01_C_ExecuteUbergraph_Xmenu_Arrow01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
