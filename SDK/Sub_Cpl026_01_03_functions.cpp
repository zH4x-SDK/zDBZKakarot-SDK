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

// Function Sub_Cpl026_01_03.Sub_Cpl026_01_03_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASub_Cpl026_01_03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_03.Sub_Cpl026_01_03_C.UserConstructionScript");

	ASub_Cpl026_01_03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Cpl026_01_03.Sub_Cpl026_01_03_C.PhaseEvent
// (Event, Public, BlueprintEvent)
void ASub_Cpl026_01_03_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_03.Sub_Cpl026_01_03_C.PhaseEvent");

	ASub_Cpl026_01_03_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Cpl026_01_03.Sub_Cpl026_01_03_C.OnIngameBegan
// (Event, Public, BlueprintEvent)
void ASub_Cpl026_01_03_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_03.Sub_Cpl026_01_03_C.OnIngameBegan");

	ASub_Cpl026_01_03_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Sub_Cpl026_01_03.Sub_Cpl026_01_03_C.ExecuteUbergraph_Sub_Cpl026_01_03
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASub_Cpl026_01_03_C::ExecuteUbergraph_Sub_Cpl026_01_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_03.Sub_Cpl026_01_03_C.ExecuteUbergraph_Sub_Cpl026_01_03");

	ASub_Cpl026_01_03_C_ExecuteUbergraph_Sub_Cpl026_01_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
