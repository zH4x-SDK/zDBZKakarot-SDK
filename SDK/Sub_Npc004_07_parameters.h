﻿#pragma once

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

// Function Sub_Npc004_07.Sub_Npc004_07_C.hidden_actor
struct ASub_Npc004_07_C_hidden_actor_Params
{
	struct FName                                       findId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.UserConstructionScript
struct ASub_Npc004_07_C_UserConstructionScript_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.PhaseEvent
struct ASub_Npc004_07_C_PhaseEvent_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnCancelSubQuest
struct ASub_Npc004_07_C_OnCancelSubQuest_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnCancelSubQuestTransition
struct ASub_Npc004_07_C_OnCancelSubQuestTransition_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnOpenSimpleTalk
struct ASub_Npc004_07_C_OnOpenSimpleTalk_Params
{
	struct FName                                       SimpleTalkId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       messageId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnIngameBegan
struct ASub_Npc004_07_C_OnIngameBegan_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.MiniGameTiming
struct ASub_Npc004_07_C_MiniGameTiming_Params
{
	struct FMinigameTimingArgment                      Argment;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.Init
struct ASub_Npc004_07_C_Init_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.ReceiveEndPlay
struct ASub_Npc004_07_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnBeganSubQuestDirection
struct ASub_Npc004_07_C_OnBeganSubQuestDirection_Params
{
	AT_ESubQuestDirectionTiming                        Timing;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.ExecuteUbergraph_Sub_Npc004_07
struct ASub_Npc004_07_C_ExecuteUbergraph_Sub_Npc004_07_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
