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

// Function Sub_Cpl009_02_02.Sub_Cpl009_02_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASub_Cpl009_02_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl009_02_02.Sub_Cpl009_02_02_C.UserConstructionScript");

	ASub_Cpl009_02_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Cpl009_02_02.Sub_Cpl009_02_02_C.PhaseEvent
// (Event, Public, BlueprintEvent)
void ASub_Cpl009_02_02_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl009_02_02.Sub_Cpl009_02_02_C.PhaseEvent");

	ASub_Cpl009_02_02_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Cpl009_02_02.Sub_Cpl009_02_02_C.ExecuteUbergraph_Sub_Cpl009_02_02
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASub_Cpl009_02_02_C::ExecuteUbergraph_Sub_Cpl009_02_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl009_02_02.Sub_Cpl009_02_02_C.ExecuteUbergraph_Sub_Cpl009_02_02");

	ASub_Cpl009_02_02_C_ExecuteUbergraph_Sub_Cpl009_02_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
