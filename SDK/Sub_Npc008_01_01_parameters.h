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

// Function Sub_Npc008_01_01.Sub_Npc008_01_01_C.UserConstructionScript
struct ASub_Npc008_01_01_C_UserConstructionScript_Params
{
};

// Function Sub_Npc008_01_01.Sub_Npc008_01_01_C.PhaseEvent
struct ASub_Npc008_01_01_C_PhaseEvent_Params
{
};

// Function Sub_Npc008_01_01.Sub_Npc008_01_01_C.OnCancelSubQuest
struct ASub_Npc008_01_01_C_OnCancelSubQuest_Params
{
};

// Function Sub_Npc008_01_01.Sub_Npc008_01_01_C.OnCancelSubQuestTransition
struct ASub_Npc008_01_01_C_OnCancelSubQuestTransition_Params
{
};

// Function Sub_Npc008_01_01.Sub_Npc008_01_01_C.OnAddedItem
struct ASub_Npc008_01_01_C_OnAddedItem_Params
{
	struct FName                                       ItemId;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Sub_Npc008_01_01.Sub_Npc008_01_01_C.OnOpenSimpleTalk
struct ASub_Npc008_01_01_C_OnOpenSimpleTalk_Params
{
	struct FName                                       SimpleTalkId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       messageId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Sub_Npc008_01_01.Sub_Npc008_01_01_C.OnIngameBegan
struct ASub_Npc008_01_01_C_OnIngameBegan_Params
{
};

// Function Sub_Npc008_01_01.Sub_Npc008_01_01_C.ExecuteUbergraph_Sub_Npc008_01_01
struct ASub_Npc008_01_01_C_ExecuteUbergraph_Sub_Npc008_01_01_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
