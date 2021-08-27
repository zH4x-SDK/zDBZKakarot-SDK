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

// Function SupportCrossTalkTrigger.SupportCrossTalkTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASupportCrossTalkTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportCrossTalkTrigger.SupportCrossTalkTrigger_C.UserConstructionScript");

	ASupportCrossTalkTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SupportCrossTalkTrigger.SupportCrossTalkTrigger_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASupportCrossTalkTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportCrossTalkTrigger.SupportCrossTalkTrigger_C.ReceiveActorBeginOverlap");

	ASupportCrossTalkTrigger_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SupportCrossTalkTrigger.SupportCrossTalkTrigger_C.ExecuteUbergraph_SupportCrossTalkTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASupportCrossTalkTrigger_C::ExecuteUbergraph_SupportCrossTalkTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupportCrossTalkTrigger.SupportCrossTalkTrigger_C.ExecuteUbergraph_SupportCrossTalkTrigger");

	ASupportCrossTalkTrigger_C_ExecuteUbergraph_SupportCrossTalkTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
