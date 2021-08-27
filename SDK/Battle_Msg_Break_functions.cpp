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

// Function Battle_Msg_Break.Battle_Msg_Break_C.ConstructFirstOnly
// (Event, Protected, BlueprintEvent)
void UBattle_Msg_Break_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Msg_Break.Battle_Msg_Break_C.ConstructFirstOnly");

	UBattle_Msg_Break_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Battle_Msg_Break.Battle_Msg_Break_C.ExecuteUbergraph_Battle_Msg_Break
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBattle_Msg_Break_C::ExecuteUbergraph_Battle_Msg_Break(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Msg_Break.Battle_Msg_Break_C.ExecuteUbergraph_Battle_Msg_Break");

	UBattle_Msg_Break_C_ExecuteUbergraph_Battle_Msg_Break_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
