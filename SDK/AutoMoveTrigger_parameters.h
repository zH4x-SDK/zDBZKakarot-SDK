#pragma once

// Name: DBZ-Kakarot, Version: 4.21.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function AutoMoveTrigger.AutoMoveTrigger_C.UserConstructionScript
struct AAutoMoveTrigger_C_UserConstructionScript_Params
{
};

// Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveActorBeginOverlap
struct AAutoMoveTrigger_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveTick
struct AAutoMoveTrigger_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveActorEndOverlap
struct AAutoMoveTrigger_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AutoMoveTrigger.AutoMoveTrigger_C.StartArrival
struct AAutoMoveTrigger_C_StartArrival_Params
{
};

// Function AutoMoveTrigger.AutoMoveTrigger_C.ExecuteUbergraph_AutoMoveTrigger
struct AAutoMoveTrigger_C_ExecuteUbergraph_AutoMoveTrigger_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
