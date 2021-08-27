
#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming
// (Final, Native, Private)

void UATGeneralBattleDirectionPhase::OnDemoTiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming");

	UATGeneralBattleDirectionPhase_OnDemoTiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning
// (Final, Native, Private)

void UATGeneralBattleSettlePhase::OnEndWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning");

	UATGeneralBattleSettlePhase_OnEndWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndResult
// (Final, Native, Private)

void UATGeneralBattleSettlePhase::OnEndResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndResult");

	UATGeneralBattleSettlePhase_OnEndResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD
// (Final, Native, Private)

void UATGeneralBattleSettlePhase::OnEndBattleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD");

	UATGeneralBattleSettlePhase_OnEndBattleHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATLake.Update
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UPostProcessComponent*   PostProcessComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AATLake::Update(class UPostProcessComponent* PostProcessComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATLake.Update");

	AATLake_Update_Params params;
	params.PostProcessComponent = PostProcessComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATLake.Init
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UPostProcessComponent*   PostProcessComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AATLake::Init(class UPostProcessComponent* PostProcessComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATLake.Init");

	AATLake_Init_Params params;
	params.PostProcessComponent = PostProcessComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleBegin.OnBattleBegin
// (Native, Protected)

void UATSceneBattleBegin::OnBattleBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleBegin.OnBattleBegin");

	UATSceneBattleBegin_OnBattleBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleEnd.OnEndFinishUI
// (Native, Protected)

void UATSceneBattleEnd::OnEndFinishUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleEnd.OnEndFinishUI");

	UATSceneBattleEnd_OnEndFinishUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleGameOverMenu.OnEndGameOverUI
// (Native, Protected)

void UATSceneBattleGameOverMenu::OnEndGameOverUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleGameOverMenu.OnEndGameOverUI");

	UATSceneBattleGameOverMenu_OnEndGameOverUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleMain.OnBattleGameOverStart
// (Native, Protected)

void UATSceneBattleMain::OnBattleGameOverStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleMain.OnBattleGameOverStart");

	UATSceneBattleMain_OnBattleGameOverStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleMain.OnBattleEnd
// (Native, Protected)

void UATSceneBattleMain::OnBattleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleMain.OnBattleEnd");

	UATSceneBattleMain_OnBattleEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneDemoBase.OnDemoTiming
// (Final, Native, Private)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneDemoBase::OnDemoTiming( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneDemoBase.OnDemoTiming");

	UATSceneDemoBase_OnDemoTiming_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneFree.OnQuestPhaseBegin
// (Native, Protected)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneFree::OnQuestPhaseBegin( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneFree.OnQuestPhaseBegin");

	UATSceneFree_OnQuestPhaseBegin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneFree.OnQuestEventBegin
// (Native, Protected)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneFree::OnQuestEventBegin( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneFree.OnQuestEventBegin");

	UATSceneFree_OnQuestEventBegin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneFree.OnDemoTiming
// (Native, Protected)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneFree::OnDemoTiming( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneFree.OnDemoTiming");

	UATSceneFree_OnDemoTiming_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneFreeLoadBase.OnQuestEventBegin
// (Native, Protected)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneFreeLoadBase::OnQuestEventBegin( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneFreeLoadBase.OnQuestEventBegin");

	UATSceneFreeLoadBase_OnQuestEventBegin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneEvent.OnQuestPhaseBegin
// (Native, Protected)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneEvent::OnQuestPhaseBegin( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneEvent.OnQuestPhaseBegin");

	UATSceneEvent_OnQuestPhaseBegin_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneEvent.OnQuestEventEnd
// (Native, Protected)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneEvent::OnQuestEventEnd( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneEvent.OnQuestEventEnd");

	UATSceneEvent_OnQuestEventEnd_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneEvent.OnDemoTiming
// (Native, Protected)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneEvent::OnDemoTiming( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneEvent.OnDemoTiming");

	UATSceneEvent_OnDemoTiming_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneGeneralTalk.OnQuestPhaseEnd
// (Native, Protected)
// Parameters:
//                                Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneGeneralTalk::OnQuestPhaseEnd( Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneGeneralTalk.OnQuestPhaseEnd");

	UATSceneGeneralTalk_OnQuestPhaseEnd_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneTrialClear.OnEndFinishUI
// (Native, Protected)

void UATSceneTrialClear::OnEndFinishUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneTrialClear.OnEndFinishUI");

	UATSceneTrialClear_OnEndFinishUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
