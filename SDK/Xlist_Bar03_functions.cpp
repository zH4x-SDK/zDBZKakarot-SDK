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

// Function Xlist_Bar03.Xlist_Bar03_C.UpdateVolumeEvent
// (Event, Protected, BlueprintEvent)
void UXlist_Bar03_C::UpdateVolumeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Bar03.Xlist_Bar03_C.UpdateVolumeEvent");

	UXlist_Bar03_C_UpdateVolumeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Xlist_Bar03.Xlist_Bar03_C.ExecuteUbergraph_Xlist_Bar03
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UXlist_Bar03_C::ExecuteUbergraph_Xlist_Bar03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Bar03.Xlist_Bar03_C.ExecuteUbergraph_Xlist_Bar03");

	UXlist_Bar03_C_ExecuteUbergraph_Xlist_Bar03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
