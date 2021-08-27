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

// Function Xlist_Reward_Commu.Xlist_Reward_Commu_C.V_Eff
// (BlueprintCallable, BlueprintEvent)
void UXlist_Reward_Commu_C::V_Eff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Reward_Commu.Xlist_Reward_Commu_C.V_Eff");

	UXlist_Reward_Commu_C_V_Eff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Xlist_Reward_Commu.Xlist_Reward_Commu_C.ConstructFirstOnly
// (BlueprintCallable, BlueprintEvent)
void UXlist_Reward_Commu_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Reward_Commu.Xlist_Reward_Commu_C.ConstructFirstOnly");

	UXlist_Reward_Commu_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Xlist_Reward_Commu.Xlist_Reward_Commu_C.ExecuteUbergraph_Xlist_Reward_Commu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UXlist_Reward_Commu_C::ExecuteUbergraph_Xlist_Reward_Commu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Reward_Commu.Xlist_Reward_Commu_C.ExecuteUbergraph_Xlist_Reward_Commu");

	UXlist_Reward_Commu_C_ExecuteUbergraph_Xlist_Reward_Commu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
