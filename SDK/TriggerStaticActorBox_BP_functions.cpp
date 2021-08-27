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

// Function TriggerStaticActorBox_BP.TriggerStaticActorBox_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATriggerStaticActorBox_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerStaticActorBox_BP.TriggerStaticActorBox_BP_C.UserConstructionScript");

	ATriggerStaticActorBox_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TriggerStaticActorBox_BP.TriggerStaticActorBox_BP_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATriggerStaticActorBox_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerStaticActorBox_BP.TriggerStaticActorBox_BP_C.ReceiveActorBeginOverlap");

	ATriggerStaticActorBox_BP_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TriggerStaticActorBox_BP.TriggerStaticActorBox_BP_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATriggerStaticActorBox_BP_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerStaticActorBox_BP.TriggerStaticActorBox_BP_C.ReceiveActorEndOverlap");

	ATriggerStaticActorBox_BP_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TriggerStaticActorBox_BP.TriggerStaticActorBox_BP_C.ExecuteUbergraph_TriggerStaticActorBox_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATriggerStaticActorBox_BP_C::ExecuteUbergraph_TriggerStaticActorBox_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerStaticActorBox_BP.TriggerStaticActorBox_BP_C.ExecuteUbergraph_TriggerStaticActorBox_BP");

	ATriggerStaticActorBox_BP_C_ExecuteUbergraph_TriggerStaticActorBox_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
