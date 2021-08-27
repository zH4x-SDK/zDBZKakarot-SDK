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

// Function Quest_Sub_Reward.Quest_Sub_Reward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UQuest_Sub_Reward_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub_Reward.Quest_Sub_Reward_C.Construct");

	UQuest_Sub_Reward_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Sub_Reward.Quest_Sub_Reward_C.ExecuteUbergraph_Quest_Sub_Reward
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuest_Sub_Reward_C::ExecuteUbergraph_Quest_Sub_Reward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub_Reward.Quest_Sub_Reward_C.ExecuteUbergraph_Quest_Sub_Reward");

	UQuest_Sub_Reward_C_ExecuteUbergraph_Quest_Sub_Reward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
