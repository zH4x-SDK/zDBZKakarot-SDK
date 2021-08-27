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

// Function AT.AT_BaseHUD.CanvasSize
struct AAT_BaseHUD_CanvasSize_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.UnloadUiCaptureById
struct UAT_BlueprintFunctionLibrary_UnloadUiCaptureById_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.UnloadUiCaptureByCharacter
struct UAT_BlueprintFunctionLibrary_UnloadUiCaptureByCharacter_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.StopBgm
struct UAT_BlueprintFunctionLibrary_StopBgm_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.StartTrialClearMenu
struct UAT_BlueprintFunctionLibrary_StartTrialClearMenu_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.StartQuest
struct UAT_BlueprintFunctionLibrary_StartQuest_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.SetScreenResolution
struct UAT_BlueprintFunctionLibrary_SetScreenResolution_Params
{
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.SetKeyGuideType
struct UAT_BlueprintFunctionLibrary_SetKeyGuideType_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.SetKeyGuideTutorialSetting
struct UAT_BlueprintFunctionLibrary_SetKeyGuideTutorialSetting_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.SetKeyGuideCtrlMode
struct UAT_BlueprintFunctionLibrary_SetKeyGuideCtrlMode_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.SetFieldRideSelectBlock
struct UAT_BlueprintFunctionLibrary_SetFieldRideSelectBlock_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.ResumeAllParticle
struct UAT_BlueprintFunctionLibrary_ResumeAllParticle_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.RequestLoadUiCaptureById
struct UAT_BlueprintFunctionLibrary_RequestLoadUiCaptureById_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.RequestLoadUiCaptureByCharacter
struct UAT_BlueprintFunctionLibrary_RequestLoadUiCaptureByCharacter_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.RequestInDisplayPopularNameUI
struct UAT_BlueprintFunctionLibrary_RequestInDisplayPopularNameUI_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.RequestInDisplayNameUI
struct UAT_BlueprintFunctionLibrary_RequestInDisplayNameUI_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.ReplaceTxtMacro
struct UAT_BlueprintFunctionLibrary_ReplaceTxtMacro_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.ReplaceIntegerMacro
struct UAT_BlueprintFunctionLibrary_ReplaceIntegerMacro_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.ReplaceFloatMacro
struct UAT_BlueprintFunctionLibrary_ReplaceFloatMacro_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.ReleaseCooking
struct UAT_BlueprintFunctionLibrary_ReleaseCooking_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.Progress_Set
struct UAT_BlueprintFunctionLibrary_Progress_Set_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.Progress_Next
struct UAT_BlueprintFunctionLibrary_Progress_Next_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.Progress_GetName
struct UAT_BlueprintFunctionLibrary_Progress_GetName_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.Progress_DebugSet
struct UAT_BlueprintFunctionLibrary_Progress_DebugSet_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.PlayBgm
struct UAT_BlueprintFunctionLibrary_PlayBgm_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.PhaseID2QuestID
struct UAT_BlueprintFunctionLibrary_PhaseID2QuestID_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.PermissionSkill
struct UAT_BlueprintFunctionLibrary_PermissionSkill_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.PauseMenu
struct UAT_BlueprintFunctionLibrary_PauseMenu_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.PauseMainQuestTitleAnim
struct UAT_BlueprintFunctionLibrary_PauseMainQuestTitleAnim_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.PauseAllParticle
struct UAT_BlueprintFunctionLibrary_PauseAllParticle_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.OpenItemMenuByTutorialMode
struct UAT_BlueprintFunctionLibrary_OpenItemMenuByTutorialMode_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.OpenCookingMenuChichiActorName
struct UAT_BlueprintFunctionLibrary_OpenCookingMenuChichiActorName_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.OpenCookingMenuChichi
struct UAT_BlueprintFunctionLibrary_OpenCookingMenuChichi_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.OpenCommunityMenuByTutorialMode
struct UAT_BlueprintFunctionLibrary_OpenCommunityMenuByTutorialMode_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.LockCooking
struct UAT_BlueprintFunctionLibrary_LockCooking_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.isFlagOn
struct UAT_BlueprintFunctionLibrary_isFlagOn_Params
{
	int                                                Source;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Enum;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.HideKeyGuideUntilQuestCaption
struct UAT_BlueprintFunctionLibrary_HideKeyGuideUntilQuestCaption_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetSkyLights
struct UAT_BlueprintFunctionLibrary_GetSkyLights_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetSkyConditionManager
struct UAT_BlueprintFunctionLibrary_GetSkyConditionManager_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetRideManager
struct UAT_BlueprintFunctionLibrary_GetRideManager_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetRaceGameManager
struct UAT_BlueprintFunctionLibrary_GetRaceGameManager_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetQuestManager
struct UAT_BlueprintFunctionLibrary_GetQuestManager_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetHeightFogs
struct UAT_BlueprintFunctionLibrary_GetHeightFogs_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetDragonBallManager
struct UAT_BlueprintFunctionLibrary_GetDragonBallManager_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetDemoManageComponent
struct UAT_BlueprintFunctionLibrary_GetDemoManageComponent_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetDefaultGameHud
struct UAT_BlueprintFunctionLibrary_GetDefaultGameHud_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetDebugMenu
struct UAT_BlueprintFunctionLibrary_GetDebugMenu_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetCharacterName
struct UAT_BlueprintFunctionLibrary_GetCharacterName_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
};

// Function AT.AT_BlueprintFunctionLibrary.GetCaptureManager
struct UAT_BlueprintFunctionLibrary_GetCaptureManager_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetBuildConfiguration
struct UAT_BlueprintFunctionLibrary_GetBuildConfiguration_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetBaseballGameManager
struct UAT_BlueprintFunctionLibrary_GetBaseballGameManager_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetATVersion
struct UAT_BlueprintFunctionLibrary_GetATVersion_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetAtmosphericFogs
struct UAT_BlueprintFunctionLibrary_GetAtmosphericFogs_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetATCharacterByType
struct UAT_BlueprintFunctionLibrary_GetATCharacterByType_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.GetATCharacter
struct UAT_BlueprintFunctionLibrary_GetATCharacter_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetAIManager
struct UAT_BlueprintFunctionLibrary_GetAIManager_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetAIBase
struct UAT_BlueprintFunctionLibrary_GetAIBase_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetActorByTag
struct UAT_BlueprintFunctionLibrary_GetActorByTag_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetActorByClassTag
struct UAT_BlueprintFunctionLibrary_GetActorByClassTag_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.GetActor
struct UAT_BlueprintFunctionLibrary_GetActor_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.ForceRequestOutDisplayNameUI
struct UAT_BlueprintFunctionLibrary_ForceRequestOutDisplayNameUI_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.EnumToBitFlag
struct UAT_BlueprintFunctionLibrary_EnumToBitFlag_Params
{
	int                                                Enum;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.EnableDepthOfField
struct UAT_BlueprintFunctionLibrary_EnableDepthOfField_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.DebugUnlockAllArea
struct UAT_BlueprintFunctionLibrary_DebugUnlockAllArea_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.ClearBannedSkillSetting
struct UAT_BlueprintFunctionLibrary_ClearBannedSkillSetting_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.CallTutorialTips_IN
struct UAT_BlueprintFunctionLibrary_CallTutorialTips_IN_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.CallTutorialTips_CONTROL
struct UAT_BlueprintFunctionLibrary_CallTutorialTips_CONTROL_Params
{
	int                                                Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.CallMainQuestEnd_IN
struct UAT_BlueprintFunctionLibrary_CallMainQuestEnd_IN_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.CallMainQuestEnd_CONTROL
struct UAT_BlueprintFunctionLibrary_CallMainQuestEnd_CONTROL_Params
{
	int                                                Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.CallMainQuestBegin_OUT
struct UAT_BlueprintFunctionLibrary_CallMainQuestBegin_OUT_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.CallMainQuestBegin_IN
struct UAT_BlueprintFunctionLibrary_CallMainQuestBegin_IN_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.CallFavorRateUp_IN
struct UAT_BlueprintFunctionLibrary_CallFavorRateUp_IN_Params
{
	int                                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.CallFavorRateUp_CONTROL
struct UAT_BlueprintFunctionLibrary_CallFavorRateUp_CONTROL_Params
{
	int                                                Input;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_BlueprintFunctionLibrary.CallBossBattleResult
struct UAT_BlueprintFunctionLibrary_CallBossBattleResult_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.BannedAndRipoffSkill
struct UAT_BlueprintFunctionLibrary_BannedAndRipoffSkill_Params
{
};

// Function AT.ATDamageCollisionBase.EndOverlap
struct AATDamageCollisionBase_EndOverlap_Params
{
};

// Function AT.ATDamageCollisionBase.BeginOverlap
struct AATDamageCollisionBase_BeginOverlap_Params
{
};

// Function AT.AT_DepthOfFieldManager.OnDemoTiming
struct UAT_DepthOfFieldManager_OnDemoTiming_Params
{
};

// Function AT.AT_EffectStatics.TickTrail
struct UAT_EffectStatics_TickTrail_Params
{
};

// Function AT.AT_EffectStatics.IsNearlyGround
struct UAT_EffectStatics_IsNearlyGround_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_EffectStatics.IsNearly
struct UAT_EffectStatics_IsNearly_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_EffectStatics.IsNearCamera
struct UAT_EffectStatics_IsNearCamera_Params
{
};

// Function AT.AT_EffectStatics.EnlargeEffect
struct UAT_EffectStatics_EnlargeEffect_Params
{
};

// Function AT.AT_EffectStatics.EndTrail
struct UAT_EffectStatics_EndTrail_Params
{
};

// Function AT.AT_EffectStatics.DrawPhysicalSurfaceDebug
struct UAT_EffectStatics_DrawPhysicalSurfaceDebug_Params
{
	class AActor*                                      Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.AT_EffectStatics.CallHitEffectCPP
struct UAT_EffectStatics_CallHitEffectCPP_Params
{
};

// Function AT.AT_EffectStatics.CallGuardHitEffectCPP
struct UAT_EffectStatics_CallGuardHitEffectCPP_Params
{
};

// Function AT.AT_EffectStatics.BeginTrail
struct UAT_EffectStatics_BeginTrail_Params
{
};

// Function AT.NpcPawn.GetNpcMovementComponent
struct ANpcPawn_GetNpcMovementComponent_Params
{
};

// Function AT.AT_MobCharacter.CreateMessageWindow
struct AAT_MobCharacter_CreateMessageWindow_Params
{
};

// Function AT.AT_TriggerStaticActorInterface.IsTouch
struct UAT_TriggerStaticActorInterface_IsTouch_Params
{
};

// Function AT.AT_UI3DCaptureOptional.CompleteLoad
struct UAT_UI3DCaptureOptional_CompleteLoad_Params
{
};

// Function AT.ATUIUserWidget.SetForceTick
struct UATUIUserWidget_SetForceTick_Params
{
};

// Function AT.AT_UIDemoSkipDialog.OnDemoTiming
struct UAT_UIDemoSkipDialog_OnDemoTiming_Params
{
};

// Function AT.AT_UIUtil.SettoUICommonInput
struct UAT_UIUtil_SettoUICommonInput_Params
{
};

// Function AT.AT_UIUtil.DebugChangeLangage
struct UAT_UIUtil_DebugChangeLangage_Params
{
};

// Function AT.ATActDmgBlowoff.OnHitPhoton
struct UATActDmgBlowoff_OnHitPhoton_Params
{
};

// Function AT.ATActDmgBlowoffRoll.OnHitPhoton
struct UATActDmgBlowoffRoll_OnHitPhoton_Params
{
};

// Function AT.ATActDmgLock.OnEndLockAction
struct UATActDmgLock_OnEndLockAction_Params
{
};

// Function AT.ATActDmgLongBlowoff.OnHitPhoton
struct UATActDmgLongBlowoff_OnHitPhoton_Params
{
};

// Function AT.ATAnimNotify_PlayParticleEffectCustom.OnSpawnedParticle
struct UATAnimNotify_PlayParticleEffectCustom_OnSpawnedParticle_Params
{
};

// Function AT.AnimNotifyState_PlayParticleEffectCustom.OnSpawnedParticle
struct UAnimNotifyState_PlayParticleEffectCustom_OnSpawnedParticle_Params
{
};

// Function AT.ATActDmgDeathFall.HitCharacter
struct UATActDmgDeathFall_HitCharacter_Params
{
};

// Function AT.ATAtrociousBattleBase.OnBeginPlayLevelTiming
struct UATAtrociousBattleBase_OnBeginPlayLevelTiming_Params
{
};

// Function AT.ATAtrociousPreBattleBase.OnBeginPlayLevelTiming
struct UATAtrociousPreBattleBase_OnBeginPlayLevelTiming_Params
{
};

// Function AT.ATCharacterSparkingComponent.HitOffsetLose
struct UATCharacterSparkingComponent_HitOffsetLose_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AT.ATCharacterSparkingComponent.HitOffsetDraw
struct UATCharacterSparkingComponent_HitOffsetDraw_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AT.ATCharacterSparkingComponent.DamageApplied
struct UATCharacterSparkingComponent_DamageApplied_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AT.CostumeLoader.OnLoadedVariation
struct UCostumeLoader_OnLoadedVariation_Params
{
	class UATDataAssetVariationMeshAsyncLoad*          Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.CostumeLoader.OnLoadedForm
struct UCostumeLoader_OnLoadedForm_Params
{
	class UATDataAssetFormMeshAsyncLoad*               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.CostumeLoader.OnLoadedFacial
struct UCostumeLoader_OnLoadedFacial_Params
{
	class UATDataAssetFacialAsyncLoad*                 Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.ATDataAssetAsyncLoad.IsLoaded
struct UATDataAssetAsyncLoad_IsLoaded_Params
{
};

// Function AT.ATSceneCapture2D.Activate
struct AATSceneCapture2D_Activate_Params
{
};

// Function AT.ATDemoInputComponent.OnDemoTiming
struct UATDemoInputComponent_OnDemoTiming_Params
{
};

// Function AT.ATDinosaurMoveAreaVolume.OnEndOverlap
struct AATDinosaurMoveAreaVolume_OnEndOverlap_Params
{
};

// Function AT.ATDinosaurMoveAreaVolume.OnBeginOverlap
struct AATDinosaurMoveAreaVolume_OnBeginOverlap_Params
{
};

// Function AT.ATDebugUICharaIconManager.Instance
struct UATDebugUICharaIconManager_Instance_Params
{
};

// Function AT.Enable.SetEnable
struct UEnable_SetEnable_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.Enable.IsEnable
struct UEnable_IsEnable_Params
{
};

// Function AT.ATFeverManager.OnQuestChangeTiming
struct UATFeverManager_OnQuestChangeTiming_Params
{
};

// Function AT.GeneralTalkAnimationProperty.ToDefaultProperty
struct UGeneralTalkAnimationProperty_ToDefaultProperty_Params
{
};

// Function AT.GeneralTalkAnimationProperty.SetDefaltProperty
struct UGeneralTalkAnimationProperty_SetDefaltProperty_Params
{
};

// Function AT.IdlingSequentialAnimation.SetNearPlayer
struct UIdlingSequentialAnimation_SetNearPlayer_Params
{
};

// Function AT.IdlingSequentialAnimation.SetIdlingSequencePattern
struct UIdlingSequentialAnimation_SetIdlingSequencePattern_Params
{
};

// Function AT.IdlingSequentialAnimation.SetEnableIdlingSequence
struct UIdlingSequentialAnimation_SetEnableIdlingSequence_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.IdlingSequentialAnimation.IsNearPlayer
struct UIdlingSequentialAnimation_IsNearPlayer_Params
{
};

// Function AT.IdlingSequentialAnimation.IsEnableIdlingSequence
struct UIdlingSequentialAnimation_IsEnableIdlingSequence_Params
{
};

// Function AT.IdlingSequentialAnimation.GetIdlingSequencePattern
struct UIdlingSequentialAnimation_GetIdlingSequencePattern_Params
{
};

// Function AT.KPIRequester.ResAPI
struct UKPIRequester_ResAPI_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.RequestFlagInWorldMap
struct UATLevelBlueprintFunctionLibrary_RequestFlagInWorldMap_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.RequestEvent
struct UATLevelBlueprintFunctionLibrary_RequestEvent_Params
{
	struct FATLevelEventParam                          Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AT.ATLevelBlueprintFunctionLibrary.RemoveLevelCondition
struct UATLevelBlueprintFunctionLibrary_RemoveLevelCondition_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.Level_UnloadSubLevel
struct UATLevelBlueprintFunctionLibrary_Level_UnloadSubLevel_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.Level_LoadSubLevel
struct UATLevelBlueprintFunctionLibrary_Level_LoadSubLevel_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.Level_DeactivateSubLevel
struct UATLevelBlueprintFunctionLibrary_Level_DeactivateSubLevel_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.Level_ActivateSubLevel
struct UATLevelBlueprintFunctionLibrary_Level_ActivateSubLevel_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.IsInDoor
struct UATLevelBlueprintFunctionLibrary_IsInDoor_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.GetLevelManager
struct UATLevelBlueprintFunctionLibrary_GetLevelManager_Params
{
};

// Function AT.ATLevelBlueprintFunctionLibrary.ExitDoor
struct UATLevelBlueprintFunctionLibrary_ExitDoor_Params
{
};

// Function AT.ATLevelScriptActor.ReceiveDemoEvent
struct AATLevelScriptActor_ReceiveDemoEvent_Params
{
};

// Function AT.ATLevelScriptActor.OnLevelLoaded
struct AATLevelScriptActor_OnLevelLoaded_Params
{
};

// Function AT.MiniQuest.OnIngameBegan
struct AMiniQuest_OnIngameBegan_Params
{
};

// Function AT.MiniQuest.OnBrokeObject
struct AMiniQuest_OnBrokeObject_Params
{
};

// Function AT.MiniQuest.OnAddedItem
struct AMiniQuest_OnAddedItem_Params
{
};

// Function AT.MissionStore.OnFinishedEventBattle
struct UMissionStore_OnFinishedEventBattle_Params
{
};

// Function AT.MissionStore.OnFinishedBattle
struct UMissionStore_OnFinishedBattle_Params
{
};

// Function AT.MoveAnimation.SetEnableMove
struct UMoveAnimation_SetEnableMove_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.MoveAnimation.IsEnableMove
struct UMoveAnimation_IsEnableMove_Params
{
};

// Function AT.ATPlatformFeatures.EnableStreaming
struct UATPlatformFeatures_EnableStreaming_Params
{
};

// Function AT.ATPlatformFeatures.EnableSharing
struct UATPlatformFeatures_EnableSharing_Params
{
};

// Function AT.ATPlatformFeatures.EnableScreenshots
struct UATPlatformFeatures_EnableScreenshots_Params
{
};

// Function AT.ATPlatformFeatures.EnableRecording
struct UATPlatformFeatures_EnableRecording_Params
{
};

// Function AT.QuestEventObservable.OnQuestGeneralTalkEvent
struct UQuestEventObservable_OnQuestGeneralTalkEvent_Params
{
};

// Function AT.QuestPhase_ChangeCharacter.OnChangedPlayer
struct UQuestPhase_ChangeCharacter_OnChangedPlayer_Params
{
	class AAT_Character*                               Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.QuestPhase_WishDragonBall.TryClear
struct UQuestPhase_WishDragonBall_TryClear_Params
{
};

// Function AT.ATRestrictMoveControl.SetTargetLanding
struct UATRestrictMoveControl_SetTargetLanding_Params
{
};

// Function AT.ATRestrictMoveControl.SetStandSecond
struct UATRestrictMoveControl_SetStandSecond_Params
{
};

// Function AT.ATRestrictMoveControl.SetStandFirst
struct UATRestrictMoveControl_SetStandFirst_Params
{
};

// Function AT.ATRestrictMoveControl.SetStandBoost
struct UATRestrictMoveControl_SetStandBoost_Params
{
};

// Function AT.ATRestrictMoveControl.SetSearch
struct UATRestrictMoveControl_SetSearch_Params
{
};

// Function AT.ATRestrictMoveControl.SetRideAll
struct UATRestrictMoveControl_SetRideAll_Params
{
};

// Function AT.ATRestrictMoveControl.SetNimbusMove
struct UATRestrictMoveControl_SetNimbusMove_Params
{
};

// Function AT.ATRestrictMoveControl.SetJump
struct UATRestrictMoveControl_SetJump_Params
{
};

// Function AT.ATRestrictMoveControl.SetFloatMove
struct UATRestrictMoveControl_SetFloatMove_Params
{
};

// Function AT.ATRestrictMoveControl.SetFloatBoost
struct UATRestrictMoveControl_SetFloatBoost_Params
{
};

// Function AT.ATRestrictMoveControl.SetFieldShot
struct UATRestrictMoveControl_SetFieldShot_Params
{
};

// Function AT.ATRestrictMoveControl.SetByPreset
struct UATRestrictMoveControl_SetByPreset_Params
{
};

// Function AT.ATRestrictMoveControl.SetAll
struct UATRestrictMoveControl_SetAll_Params
{
};

// Function AT.ATRestrictMoveControl.ResetAll
struct UATRestrictMoveControl_ResetAll_Params
{
};

// Function AT.ATSceneCaptureComponent2D.SetCaptureEveryFrame
struct UATSceneCaptureComponent2D_SetCaptureEveryFrame_Params
{
};

// Function AT.Spawnable.SetSpawned
struct USpawnable_SetSpawned_Params
{
};

// Function AT.Spawnable.IsSpawned
struct USpawnable_IsSpawned_Params
{
};

// Function AT.Speakable.SetEnableLipSync
struct USpeakable_SetEnableLipSync_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.Speakable.IsEnableLipSync
struct USpeakable_IsEnableLipSync_Params
{
};

// Function AT.Speakable.GetSpeakerId
struct USpeakable_GetSpeakerId_Params
{
};

// Function AT.UpperFacialAnimation.SetEnableUpperFaceAnimation
struct UUpperFacialAnimation_SetEnableUpperFaceAnimation_Params
{
};

// Function AT.UpperFacialAnimation.IsEnableUpperFaceAnimation
struct UUpperFacialAnimation_IsEnableUpperFaceAnimation_Params
{
};

// Function AT.ATWaterVolume.OnOverlapEnd
struct AATWaterVolume_OnOverlapEnd_Params
{
};

// Function AT.ATWaterVolume.OnOverlapBegin
struct AATWaterVolume_OnOverlapBegin_Params
{
};

// Function AT.BaseballGamePitcherCharacter.OnMontageStarted
struct ABaseballGamePitcherCharacter_OnMontageStarted_Params
{
};

// Function AT.BaseballGamePitcherCharacter.OnMontageEnded
struct ABaseballGamePitcherCharacter_OnMontageEnded_Params
{
};

// Function AT.BaseballGamePitcherCharacter.OnMontageBlendingOut
struct ABaseballGamePitcherCharacter_OnMontageBlendingOut_Params
{
};

// Function AT.CollectivelyCollectVolume.OnOverlapBegin
struct ACollectivelyCollectVolume_OnOverlapBegin_Params
{
};

// Function AT.CookingState.OnMontageBlendingOutStart
struct UCookingState_OnMontageBlendingOutStart_Params
{
};

// Function AT.CookingState.OnMontageBlendingOut
struct UCookingState_OnMontageBlendingOut_Params
{
};

// Function AT.CookingState.OnDemoTiming
struct UCookingState_OnDemoTiming_Params
{
};

// Function AT.CrossTalkConditionTouchNoEntryVolume.OnBeginOverlap
struct UCrossTalkConditionTouchNoEntryVolume_OnBeginOverlap_Params
{
};

// Function AT.DestructibleBlueprintLibrary.DrawDebugComponentChunks
struct UDestructibleBlueprintLibrary_DrawDebugComponentChunks_Params
{
};

// Function AT.DestructibleBlueprintLibrary.DrawDebugActorChunks
struct UDestructibleBlueprintLibrary_DrawDebugActorChunks_Params
{
	class ADestructibleActor*                          Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.DirectionManager.RequestEndDirection
struct UDirectionManager_RequestEndDirection_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.DirectionManager.RequestBeginDirection
struct UDirectionManager_RequestBeginDirection_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.DirectionManager.IsRequestType
struct UDirectionManager_IsRequestType_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.DirectionManager.IsDirectionType
struct UDirectionManager_IsDirectionType_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.DirectionManager.IsDirection
struct UDirectionManager_IsDirection_Params
{
};

// Function AT.DirectionManager.GetCurrentDirectionTypeName
struct UDirectionManager_GetCurrentDirectionTypeName_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.UnlockSaiyanSagaTrophy
struct UEventBlueprintFunctionLibrary_UnlockSaiyanSagaTrophy_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.UnlockFriezaSagaTrophy
struct UEventBlueprintFunctionLibrary_UnlockFriezaSagaTrophy_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.UnlockDefeatedPiccoloTrophy
struct UEventBlueprintFunctionLibrary_UnlockDefeatedPiccoloTrophy_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.UnlockCellSagaTrophy
struct UEventBlueprintFunctionLibrary_UnlockCellSagaTrophy_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.UnlockAtrociousBossTrophy
struct UEventBlueprintFunctionLibrary_UnlockAtrociousBossTrophy_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.StartQuestGeneralTalkEvent
struct UEventBlueprintFunctionLibrary_StartQuestGeneralTalkEvent_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SpawnDragonball
struct UEventBlueprintFunctionLibrary_SpawnDragonball_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SpawnActorWithName
struct UEventBlueprintFunctionLibrary_SpawnActorWithName_Params
{
	class UClass*                                      ClassName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.ShowTurtleSchoolTutorial
struct UEventBlueprintFunctionLibrary_ShowTurtleSchoolTutorial_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ShowTelop
struct UEventBlueprintFunctionLibrary_ShowTelop_Params
{
	struct FTelopInfo                                  TelopInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AT.EventBlueprintFunctionLibrary.ShowQuestMainLogo
struct UEventBlueprintFunctionLibrary_ShowQuestMainLogo_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ShowQuestImage
struct UEventBlueprintFunctionLibrary_ShowQuestImage_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ShowNextPreviewTitle
struct UEventBlueprintFunctionLibrary_ShowNextPreviewTitle_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ShowNextPreviewDetail
struct UEventBlueprintFunctionLibrary_ShowNextPreviewDetail_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetViewTarget
struct UEventBlueprintFunctionLibrary_SetViewTarget_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetViewByControlCharacterWithBlemdTime
struct UEventBlueprintFunctionLibrary_SetViewByControlCharacterWithBlemdTime_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetViewByControlCharacter
struct UEventBlueprintFunctionLibrary_SetViewByControlCharacter_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetTargetAim
struct UEventBlueprintFunctionLibrary_SetTargetAim_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetSubtitlesQuestDelayTime
struct UEventBlueprintFunctionLibrary_SetSubtitlesQuestDelayTime_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetSubtitlesQuest
struct UEventBlueprintFunctionLibrary_SetSubtitlesQuest_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetSubtitles
struct UEventBlueprintFunctionLibrary_SetSubtitles_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetSelectRideIcon
struct UEventBlueprintFunctionLibrary_SetSelectRideIcon_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetQuestTalkEventHUDType
struct UEventBlueprintFunctionLibrary_SetQuestTalkEventHUDType_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetPlayerLocation
struct UEventBlueprintFunctionLibrary_SetPlayerLocation_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.SetMessageIDDelayTime
struct UEventBlueprintFunctionLibrary_SetMessageIDDelayTime_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetHaveDBCharacter
struct UEventBlueprintFunctionLibrary_SetHaveDBCharacter_Params
{
	class AAT_Character*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.SetEnableScreenFade
struct UEventBlueprintFunctionLibrary_SetEnableScreenFade_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetEnableRidingOnQuest
struct UEventBlueprintFunctionLibrary_SetEnableRidingOnQuest_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.SetEnablePlayerCameraView
struct UEventBlueprintFunctionLibrary_SetEnablePlayerCameraView_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetEnablePlayerCameraUpdate
struct UEventBlueprintFunctionLibrary_SetEnablePlayerCameraUpdate_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetEnablePlatformFeatures
struct UEventBlueprintFunctionLibrary_SetEnablePlatformFeatures_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetDrawActor
struct UEventBlueprintFunctionLibrary_SetDrawActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.SetDisabledAutoSaveUI
struct UEventBlueprintFunctionLibrary_SetDisabledAutoSaveUI_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetDisabledAutoSave
struct UEventBlueprintFunctionLibrary_SetDisabledAutoSave_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetDisableCompletedSave
struct UEventBlueprintFunctionLibrary_SetDisableCompletedSave_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetCharacterSpeakerId
struct UEventBlueprintFunctionLibrary_SetCharacterSpeakerId_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetCameraAngle
struct UEventBlueprintFunctionLibrary_SetCameraAngle_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.SetAvailableTrunks
struct UEventBlueprintFunctionLibrary_SetAvailableTrunks_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ResetTriggerQuestStart
struct UEventBlueprintFunctionLibrary_ResetTriggerQuestStart_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ResetSubtitle
struct UEventBlueprintFunctionLibrary_ResetSubtitle_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ResetMobTalkID
struct UEventBlueprintFunctionLibrary_ResetMobTalkID_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ResetHaveDBCharacter
struct UEventBlueprintFunctionLibrary_ResetHaveDBCharacter_Params
{
	class AAT_Character*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.RequestSimpleWindow
struct UEventBlueprintFunctionLibrary_RequestSimpleWindow_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestQuestNotification
struct UEventBlueprintFunctionLibrary_RequestQuestNotification_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestQuestCommand
struct UEventBlueprintFunctionLibrary_RequestQuestCommand_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestOpenLevelWhenResultClosed
struct UEventBlueprintFunctionLibrary_RequestOpenLevelWhenResultClosed_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestLoadParts
struct UEventBlueprintFunctionLibrary_RequestLoadParts_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestForceCloseGameWindow
struct UEventBlueprintFunctionLibrary_RequestForceCloseGameWindow_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestFadeAfterDemo
struct UEventBlueprintFunctionLibrary_RequestFadeAfterDemo_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestCrossTalk
struct UEventBlueprintFunctionLibrary_RequestCrossTalk_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestClearQuestProgressInformation
struct UEventBlueprintFunctionLibrary_RequestClearQuestProgressInformation_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestChangeTalkId
struct UEventBlueprintFunctionLibrary_RequestChangeTalkId_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestChangePlayerCharaFromCType
struct UEventBlueprintFunctionLibrary_RequestChangePlayerCharaFromCType_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RequestAddQuestActorName
struct UEventBlueprintFunctionLibrary_RequestAddQuestActorName_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RemoveSubQuestIcon
struct UEventBlueprintFunctionLibrary_RemoveSubQuestIcon_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RemoveMobEnemy
struct UEventBlueprintFunctionLibrary_RemoveMobEnemy_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RemoveMainQuestIcon
struct UEventBlueprintFunctionLibrary_RemoveMainQuestIcon_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.RemoveHaveDBCharacter
struct UEventBlueprintFunctionLibrary_RemoveHaveDBCharacter_Params
{
	class AAT_Character*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.RemoveDestination
struct UEventBlueprintFunctionLibrary_RemoveDestination_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.ReleaseZCollection
struct UEventBlueprintFunctionLibrary_ReleaseZCollection_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ReleaseQuestTalkEventHUDType
struct UEventBlueprintFunctionLibrary_ReleaseQuestTalkEventHUDType_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.Recovery
struct UEventBlueprintFunctionLibrary_Recovery_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.PlayTalkEvent
struct UEventBlueprintFunctionLibrary_PlayTalkEvent_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.OpenSystemWindowReplacedStrings
struct UEventBlueprintFunctionLibrary_OpenSystemWindowReplacedStrings_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.OpenSystemWindowAppendMessage
struct UEventBlueprintFunctionLibrary_OpenSystemWindowAppendMessage_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.OpenSystemWindow
struct UEventBlueprintFunctionLibrary_OpenSystemWindow_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.OpenCommunityFavorRateUpMenu
struct UEventBlueprintFunctionLibrary_OpenCommunityFavorRateUpMenu_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.OpenChangePlayerWindow
struct UEventBlueprintFunctionLibrary_OpenChangePlayerWindow_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.OpenChangePlayerAnim2D
struct UEventBlueprintFunctionLibrary_OpenChangePlayerAnim2D_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.OnCryingAnimationFinished
struct UEventBlueprintFunctionLibrary_OnCryingAnimationFinished_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.NotPlayNextFadeOut
struct UEventBlueprintFunctionLibrary_NotPlayNextFadeOut_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.LoadQuestImage
struct UEventBlueprintFunctionLibrary_LoadQuestImage_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.IsRiding
struct UEventBlueprintFunctionLibrary_IsRiding_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.IsLoadedParts
struct UEventBlueprintFunctionLibrary_IsLoadedParts_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.IsGeneralTalkingEvent
struct UEventBlueprintFunctionLibrary_IsGeneralTalkingEvent_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.IsEventBattleLoaded
struct UEventBlueprintFunctionLibrary_IsEventBattleLoaded_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.IsEqualTalkingCondition
struct UEventBlueprintFunctionLibrary_IsEqualTalkingCondition_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function AT.EventBlueprintFunctionLibrary.IsEnableQuestTalkEventHUDType
struct UEventBlueprintFunctionLibrary_IsEnableQuestTalkEventHUDType_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.IsBreakingTriggerOnFromBreakableObj
struct UEventBlueprintFunctionLibrary_IsBreakingTriggerOnFromBreakableObj_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.IsBreakingTriggerOn
struct UEventBlueprintFunctionLibrary_IsBreakingTriggerOn_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.IsActivePlayerCharaType
struct UEventBlueprintFunctionLibrary_IsActivePlayerCharaType_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.IsActivatedWindow
struct UEventBlueprintFunctionLibrary_IsActivatedWindow_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.HideTelop
struct UEventBlueprintFunctionLibrary_HideTelop_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.HideQuestMainLogo
struct UEventBlueprintFunctionLibrary_HideQuestMainLogo_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.HideNextPreviewTitle
struct UEventBlueprintFunctionLibrary_HideNextPreviewTitle_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.HideNextPreviewDetail
struct UEventBlueprintFunctionLibrary_HideNextPreviewDetail_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GrantWish
struct UEventBlueprintFunctionLibrary_GrantWish_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GettingDownVehiclePlayer
struct UEventBlueprintFunctionLibrary_GettingDownVehiclePlayer_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetSpeakerFromID
struct UEventBlueprintFunctionLibrary_GetSpeakerFromID_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetQuestMainLogoHideTotalFrames
struct UEventBlueprintFunctionLibrary_GetQuestMainLogoHideTotalFrames_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetPlayer
struct UEventBlueprintFunctionLibrary_GetPlayer_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetPartySupportRight
struct UEventBlueprintFunctionLibrary_GetPartySupportRight_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetPartySupportLeft
struct UEventBlueprintFunctionLibrary_GetPartySupportLeft_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetPartyLeader
struct UEventBlueprintFunctionLibrary_GetPartyLeader_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetMessageFromID
struct UEventBlueprintFunctionLibrary_GetMessageFromID_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetItemNum
struct UEventBlueprintFunctionLibrary_GetItemNum_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetCharacterMoveState
struct UEventBlueprintFunctionLibrary_GetCharacterMoveState_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetBrokenReasonFromBreakableObj
struct UEventBlueprintFunctionLibrary_GetBrokenReasonFromBreakableObj_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.GetBrokenReason
struct UEventBlueprintFunctionLibrary_GetBrokenReason_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.EventBattleStart
struct UEventBlueprintFunctionLibrary_EventBattleStart_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.EventBattleRetry
struct UEventBlueprintFunctionLibrary_EventBattleRetry_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.EventBattleRetire
struct UEventBlueprintFunctionLibrary_EventBattleRetire_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.EventBattleLoad
struct UEventBlueprintFunctionLibrary_EventBattleLoad_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.EventBattleEnd
struct UEventBlueprintFunctionLibrary_EventBattleEnd_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.EndQuestMainLogo
struct UEventBlueprintFunctionLibrary_EndQuestMainLogo_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.EndQuestGeneralTalkEvent
struct UEventBlueprintFunctionLibrary_EndQuestGeneralTalkEvent_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.DisableNpcHeadIcon
struct UEventBlueprintFunctionLibrary_DisableNpcHeadIcon_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.DeleteFriend
struct UEventBlueprintFunctionLibrary_DeleteFriend_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.DeleteAllFriend
struct UEventBlueprintFunctionLibrary_DeleteAllFriend_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.DebugStartGame
struct UEventBlueprintFunctionLibrary_DebugStartGame_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.DebugSaveQuest
struct UEventBlueprintFunctionLibrary_DebugSaveQuest_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.DebugLoadQuest
struct UEventBlueprintFunctionLibrary_DebugLoadQuest_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.DebugChangeBalloonTalkId
struct UEventBlueprintFunctionLibrary_DebugChangeBalloonTalkId_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.DebugAddMoney
struct UEventBlueprintFunctionLibrary_DebugAddMoney_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CreateFriendDetails
struct UEventBlueprintFunctionLibrary_CreateFriendDetails_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CountBreakingTriggerOnWithReasonFromBreakableObj
struct UEventBlueprintFunctionLibrary_CountBreakingTriggerOnWithReasonFromBreakableObj_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CountBreakingTriggerOnWithReason
struct UEventBlueprintFunctionLibrary_CountBreakingTriggerOnWithReason_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CountBreakingTriggerOnFromBreakableObj
struct UEventBlueprintFunctionLibrary_CountBreakingTriggerOnFromBreakableObj_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CountBreakingTriggerOn
struct UEventBlueprintFunctionLibrary_CountBreakingTriggerOn_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ClearSpeakerActor
struct UEventBlueprintFunctionLibrary_ClearSpeakerActor_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ClearHaveDBCharacter
struct UEventBlueprintFunctionLibrary_ClearHaveDBCharacter_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CheckBreakingTriggerWithReasonFromBreakableObj
struct UEventBlueprintFunctionLibrary_CheckBreakingTriggerWithReasonFromBreakableObj_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CheckBreakingTriggerWithReason
struct UEventBlueprintFunctionLibrary_CheckBreakingTriggerWithReason_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CheckBreakingTriggerFromBreakableObj
struct UEventBlueprintFunctionLibrary_CheckBreakingTriggerFromBreakableObj_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.CheckBreakingTrigger
struct UEventBlueprintFunctionLibrary_CheckBreakingTrigger_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeSubtitle
struct UEventBlueprintFunctionLibrary_ChangeSubtitle_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeQuestCharacterParts
struct UEventBlueprintFunctionLibrary_ChangeQuestCharacterParts_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeQuestActorEnable
struct UEventBlueprintFunctionLibrary_ChangeQuestActorEnable_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangePlayerParts
struct UEventBlueprintFunctionLibrary_ChangePlayerParts_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeNpcTalkID
struct UEventBlueprintFunctionLibrary_ChangeNpcTalkID_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeNpcTalkIcon
struct UEventBlueprintFunctionLibrary_ChangeNpcTalkIcon_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeMobTalkID
struct UEventBlueprintFunctionLibrary_ChangeMobTalkID_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeMobCharacterEnable
struct UEventBlueprintFunctionLibrary_ChangeMobCharacterEnable_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeFriendAIStop
struct UEventBlueprintFunctionLibrary_ChangeFriendAIStop_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeDragonBallState
struct UEventBlueprintFunctionLibrary_ChangeDragonBallState_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.ChangeCharacterParts
struct UEventBlueprintFunctionLibrary_ChangeCharacterParts_Params
{
	class AAT_Character*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.BreakQuest
struct UEventBlueprintFunctionLibrary_BreakQuest_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.BackTalkTimes
struct UEventBlueprintFunctionLibrary_BackTalkTimes_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.AutoMoveToActor
struct UEventBlueprintFunctionLibrary_AutoMoveToActor_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventBlueprintFunctionLibrary.AddSpeakerMapPlayer
struct UEventBlueprintFunctionLibrary_AddSpeakerMapPlayer_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.AddSpeakerMapActor
struct UEventBlueprintFunctionLibrary_AddSpeakerMapActor_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.AddSpeakerMap
struct UEventBlueprintFunctionLibrary_AddSpeakerMap_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.AddItemsToInventory
struct UEventBlueprintFunctionLibrary_AddItemsToInventory_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.AddItem
struct UEventBlueprintFunctionLibrary_AddItem_Params
{
};

// Function AT.EventBlueprintFunctionLibrary.AddDestination
struct UEventBlueprintFunctionLibrary_AddDestination_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventManager.RequestEventParam
struct UEventManager_RequestEventParam_Params
{
	struct FEventParam                                 Param;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function AT.EventManager.RequestEventI
struct UEventManager_RequestEventI_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventManager.RequestEventF
struct UEventManager_RequestEventF_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventManager.RequestEvent
struct UEventManager_RequestEvent_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.EventManager.IsRequestType
struct UEventManager_IsRequestType_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.FieldActionGashaponActor.Entry
struct AFieldActionGashaponActor_Entry_Params
{
};

// Function AT.HudManager.VisibleHud
struct UHudManager_VisibleHud_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.HudManager.SetHudVisible
struct UHudManager_SetHudVisible_Params
{
};

// Function AT.HudManager.ResetVisibleMask
struct UHudManager_ResetVisibleMask_Params
{
};

// Function AT.HudManager.OnlyVisibleHud
struct UHudManager_OnlyVisibleHud_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.HudManager.IsVisible
struct UHudManager_IsVisible_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.HudManager.InvisibleHud
struct UHudManager_InvisibleHud_Params
{
	                                                   Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.LipSyncUtils.GetAreaRowByName
struct ULipSyncUtils_GetAreaRowByName_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.NoneGeneralCrossTalkVolume.OnOverlapEnd
struct ANoneGeneralCrossTalkVolume_OnOverlapEnd_Params
{
};

// Function AT.NoneGeneralCrossTalkVolume.OnOverlapBegin
struct ANoneGeneralCrossTalkVolume_OnOverlapBegin_Params
{
};

// Function AT.NpcAction_PathWalk.OnNpcVisibleChanged
struct UNpcAction_PathWalk_OnNpcVisibleChanged_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.NpcAction_PathWalk.OnNpcGeneralDelegateMap_MoveStop
struct UNpcAction_PathWalk_OnNpcGeneralDelegateMap_MoveStop_Params
{
};

// Function AT.NpcAction_PathWalk.OnNpcGeneralDelegateMap_LoopEnd
struct UNpcAction_PathWalk_OnNpcGeneralDelegateMap_LoopEnd_Params
{
};

// Function AT.NpcAction_PathWalk.OnMontageBlendingOut_Call
struct UNpcAction_PathWalk_OnMontageBlendingOut_Call_Params
{
};

// Function AT.NpcAction_Wait.OnNpcGeneralDelegateMap_End
struct UNpcAction_Wait_OnNpcGeneralDelegateMap_End_Params
{
};

// Function AT.LipSyncInfoObj.OnFinishedVoice
struct ULipSyncInfoObj_OnFinishedVoice_Params
{
};

// Function AT.ATInteractTalkObject.OnPressedFieldAction
struct UATInteractTalkObject_OnPressedFieldAction_Params
{
};

// Function AT.PoolingObject.OnReturn
struct UPoolingObject_OnReturn_Params
{
};

// Function AT.PoolingObject.OnRent
struct UPoolingObject_OnRent_Params
{
};

// Function AT.QuestPhase_BattleEnd.OnBattleEnd
struct UQuestPhase_BattleEnd_OnBattleEnd_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.QuestPhase_Cooking.OnCookingTiming
struct UQuestPhase_Cooking_OnCookingTiming_Params
{
};

// Function AT.QuestPhase_Demo.OnDemoTiming
struct UQuestPhase_Demo_OnDemoTiming_Params
{
};

// Function AT.QuestPhase_QuestClear.OnQuestClearTiming
struct UQuestPhase_QuestClear_OnQuestClearTiming_Params
{
};

// Function AT.RaceCheckPoint.EndOverlap
struct URaceCheckPoint_EndOverlap_Params
{
};

// Function AT.RaceCheckPoint.BeginOverlap
struct URaceCheckPoint_BeginOverlap_Params
{
};

// Function AT.TerrainDecoratePhotonEntity.OnReturn
struct UTerrainDecoratePhotonEntity_OnReturn_Params
{
};

// Function AT.TerrainDecoratePhotonEntity.OnRent
struct UTerrainDecoratePhotonEntity_OnRent_Params
{
};

// Function AT.TerrainDecoratePhotonEntity.OnLevelRemoved
struct UTerrainDecoratePhotonEntity_OnLevelRemoved_Params
{
};

// Function AT.TreasureAccessPointTable.GetTreasureAccessPointTable
struct UTreasureAccessPointTable_GetTreasureAccessPointTable_Params
{
};

// Function AT.TriggerBoxPerceptionAI.AreaOut
struct ATriggerBoxPerceptionAI_AreaOut_Params
{
};

// Function AT.TriggerBoxPerceptionAI.AreaIn
struct ATriggerBoxPerceptionAI_AreaIn_Params
{
};

// Function AT.TriggerSphereFieldBase.OnPressedFieldAction
struct ATriggerSphereFieldBase_OnPressedFieldAction_Params
{
};

// Function AT.TriggerSphereFieldCooking.OnUntouchSphereCollision
struct ATriggerSphereFieldCooking_OnUntouchSphereCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.TriggerSphereFieldCooking.OnTouchSphereCollision
struct ATriggerSphereFieldCooking_OnTouchSphereCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.TriggerStaticActorBox.OnUntouchBoxCollision
struct ATriggerStaticActorBox_OnUntouchBoxCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.TriggerStaticActorBox.OnTouchBoxCollision
struct ATriggerStaticActorBox_OnTouchBoxCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT.TriggerStaticActorBox.OnBattleStart
struct ATriggerStaticActorBox_OnBattleStart_Params
{
};

// Function AT.TriggerStaticActorBox.OnBattleEnd
struct ATriggerStaticActorBox_OnBattleEnd_Params
{
};

// Function AT.ZCW_PreRenderDemoActor.OnDemoTiming
struct AZCW_PreRenderDemoActor_OnDemoTiming_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
