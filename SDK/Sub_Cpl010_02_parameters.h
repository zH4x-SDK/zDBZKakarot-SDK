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

// Function Sub_Cpl010_02.Sub_Cpl010_02_C.UserConstructionScript
struct ASub_Cpl010_02_C_UserConstructionScript_Params
{
};

// Function Sub_Cpl010_02.Sub_Cpl010_02_C.PhaseEvent
struct ASub_Cpl010_02_C_PhaseEvent_Params
{
};

// Function Sub_Cpl010_02.Sub_Cpl010_02_C.OnCancelSubQuest
struct ASub_Cpl010_02_C_OnCancelSubQuest_Params
{
};

// Function Sub_Cpl010_02.Sub_Cpl010_02_C.OnCancelSubQuestTransition
struct ASub_Cpl010_02_C_OnCancelSubQuestTransition_Params
{
};

// Function Sub_Cpl010_02.Sub_Cpl010_02_C.OnIngameBegan
struct ASub_Cpl010_02_C_OnIngameBegan_Params
{
};

// Function Sub_Cpl010_02.Sub_Cpl010_02_C.ReceiveEndPlay
struct ASub_Cpl010_02_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Sub_Cpl010_02.Sub_Cpl010_02_C.ExecuteUbergraph_Sub_Cpl010_02
struct ASub_Cpl010_02_C_ExecuteUbergraph_Sub_Cpl010_02_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
