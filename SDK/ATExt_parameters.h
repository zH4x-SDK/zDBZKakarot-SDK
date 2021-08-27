#pragma once

#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming
struct UATGeneralBattleDirectionPhase_OnDemoTiming_Params
{
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning
struct UATGeneralBattleSettlePhase_OnEndWarning_Params
{
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndResult
struct UATGeneralBattleSettlePhase_OnEndResult_Params
{
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD
struct UATGeneralBattleSettlePhase_OnEndBattleHUD_Params
{
};

// Function ATExt.ATLake.Update
struct AATLake_Update_Params
{
	class UPostProcessComponent*                       PostProcessComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ATExt.ATLake.Init
struct AATLake_Init_Params
{
	class UPostProcessComponent*                       PostProcessComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ATExt.ATSceneBattleBegin.OnBattleBegin
struct UATSceneBattleBegin_OnBattleBegin_Params
{
};

// Function ATExt.ATSceneBattleEnd.OnEndFinishUI
struct UATSceneBattleEnd_OnEndFinishUI_Params
{
};

// Function ATExt.ATSceneBattleGameOverMenu.OnEndGameOverUI
struct UATSceneBattleGameOverMenu_OnEndGameOverUI_Params
{
};

// Function ATExt.ATSceneBattleMain.OnBattleGameOverStart
struct UATSceneBattleMain_OnBattleGameOverStart_Params
{
};

// Function ATExt.ATSceneBattleMain.OnBattleEnd
struct UATSceneBattleMain_OnBattleEnd_Params
{
};

// Function ATExt.ATSceneDemoBase.OnDemoTiming
struct UATSceneDemoBase_OnDemoTiming_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneFree.OnQuestPhaseBegin
struct UATSceneFree_OnQuestPhaseBegin_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneFree.OnQuestEventBegin
struct UATSceneFree_OnQuestEventBegin_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneFree.OnDemoTiming
struct UATSceneFree_OnDemoTiming_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneFreeLoadBase.OnQuestEventBegin
struct UATSceneFreeLoadBase_OnQuestEventBegin_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneEvent.OnQuestPhaseBegin
struct UATSceneEvent_OnQuestPhaseBegin_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneEvent.OnQuestEventEnd
struct UATSceneEvent_OnQuestEventEnd_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneEvent.OnDemoTiming
struct UATSceneEvent_OnDemoTiming_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneGeneralTalk.OnQuestPhaseEnd
struct UATSceneGeneralTalk_OnQuestPhaseEnd_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneTrialClear.OnEndFinishUI
struct UATSceneTrialClear_OnEndFinishUI_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
