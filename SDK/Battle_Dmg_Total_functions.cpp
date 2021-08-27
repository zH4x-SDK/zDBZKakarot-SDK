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

// Function Battle_Dmg_Total.Battle_Dmg_Total_C.ConstructFirstOnly
// (Event, Protected, BlueprintEvent)
void UBattle_Dmg_Total_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Dmg_Total.Battle_Dmg_Total_C.ConstructFirstOnly");

	UBattle_Dmg_Total_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Battle_Dmg_Total.Battle_Dmg_Total_C.ExecuteUbergraph_Battle_Dmg_Total
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBattle_Dmg_Total_C::ExecuteUbergraph_Battle_Dmg_Total(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Dmg_Total.Battle_Dmg_Total_C.ExecuteUbergraph_Battle_Dmg_Total");

	UBattle_Dmg_Total_C_ExecuteUbergraph_Battle_Dmg_Total_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
