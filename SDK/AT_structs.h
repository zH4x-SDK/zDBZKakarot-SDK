#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AT.LoadingBaseballGameAsset
// 0x0028
struct FLoadingBaseballGameAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingBattleAIAsset
// 0x0050
struct FLoadingBattleAIAsset
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.LoadingBattleGroupAIAsset
// 0x0028
struct FLoadingBattleGroupAIAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingCharacterActionAsset
// 0x0028
struct FLoadingCharacterActionAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingCharacterAsset
// 0x0028
struct FLoadingCharacterAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingCharacterAsset.Character
};

// ScriptStruct AT.ATLoadingVariationMeshAsset
// 0x0030
struct FATLoadingVariationMeshAsset
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATLoadingFormMeshAsset
// 0x0030
struct FATLoadingFormMeshAsset
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATLoadingCookingDemoCharacterResourceAsset
// 0x02D8
struct FATLoadingCookingDemoCharacterResourceAsset
{
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x0000(0x02D8) MISSED OFFSET
};

// ScriptStruct AT.LoadingCrossTalkAsset
// 0x0038
struct FLoadingCrossTalkAsset
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.LoadingDamageTypeAsset
// 0x0028
struct FLoadingDamageTypeAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingDamageTypeAsset.DamageType
};

// ScriptStruct AT.LoadingEventBattleAsset
// 0x0028
struct FLoadingEventBattleAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATLoadingFacialAsset
// 0x0030
struct FATLoadingFacialAsset
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.LoadingFishGameMeshAsset
// 0x0050
struct FLoadingFishGameMeshAsset
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.LoadingItemAsset
// 0x0001
struct FLoadingItemAsset
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AT.LoadingJostleBeamAsset
// 0x0028
struct FLoadingJostleBeamAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.LoadingJostleBeamAsset.ATJostleBeamParam
};

// ScriptStruct AT.LoadingMechaDevAsset
// 0x0028
struct FLoadingMechaDevAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingMechaDevAsset.Object
};

// ScriptStruct AT.LoadingMiniGameAsset
// 0x0028
struct FLoadingMiniGameAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingParticleAsset
// 0x0028
struct FLoadingParticleAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingParticleAsset.ParticleSystem
};

// ScriptStruct AT.LoadingQuestAsset
// 0x0028
struct FLoadingQuestAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingQuestAsset.DataTable
};

// ScriptStruct AT.LoadingRaceGameAsset
// 0x0028
struct FLoadingRaceGameAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingSoundAsset
// 0x0028
struct FLoadingSoundAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingStarScaleFinishAsset
// 0x0028
struct FLoadingStarScaleFinishAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingSupportCharacterTalkAsset
// 0x0028
struct FLoadingSupportCharacterTalkAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingTPSSkillViewCancelAsset
// 0x0028
struct FLoadingTPSSkillViewCancelAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingTPSSkillViewCancelAsset.TPSSkillViewCancelDataTable
};

// ScriptStruct AT.LoadingAsset
// 0x0050
struct FLoadingAsset
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.LoadingUiCaptureAsset
// 0x0100
struct FLoadingUiCaptureAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.LoadingUiCaptureAsset.StaticMesh
	unsigned char                                      UnknownData01[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
};

// ScriptStruct AT.ATLevelEventParam
// 0x0020
struct FATLevelEventParam
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.PlaceObjectPatternTableRow
// 0x0038 (0x0040 - 0x0008)
struct FPlaceObjectPatternTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.TelopInfo
// 0x0028
struct FTelopInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.EventParam
// 0x0108
struct FEventParam
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0000(0x0108) MISSED OFFSET
};

// ScriptStruct AT.GrassData
// 0x0040
struct FGrassData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.MinigameTimingArgment
// 0x0018
struct FMinigameTimingArgment
{
	                                                   State;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct AT.DirectionParameter
// 0x0040
struct FDirectionParameter
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.TrackingEffect
// 0x0010
struct FTrackingEffect
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ColorGrading
// 0x0018
struct FColorGrading
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.LandEffect
// 0x0010
struct FLandEffect
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.AI_ActionTbl
// 0x0038
struct FAI_ActionTbl
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.AI_BehaviorTbl
// 0x001C
struct FAI_BehaviorTbl
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AT.AI_PHEASE
// 0x001C
struct FAI_PHEASE
{
	unsigned char                                      Number;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1B];                                      // 0x0001(0x001B) MISSED OFFSET
};

// ScriptStruct AT.EnemyParamDistRelationTbl
// 0x0038 (0x0040 - 0x0008)
struct FEnemyParamDistRelationTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.MoveDistanceTbl
// 0x0010 (0x0018 - 0x0008)
struct FMoveDistanceTbl : public FTableRowBase
{
	float                                              Speed;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct AT.MoveForwardTbl
// 0x0010 (0x0018 - 0x0008)
struct FMoveForwardTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.MoveAroundTbl
// 0x0028 (0x0030 - 0x0008)
struct FMoveAroundTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.AI_TPSActionBehaviorTbl
// 0x0038 (0x0040 - 0x0008)
struct FAI_TPSActionBehaviorTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.SpawnList
// 0x0050
struct FSpawnList
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.SpawnParam
// 0x0018
struct FSpawnParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.AnimalParam
// 0x0018 (0x0020 - 0x0008)
struct FAnimalParam : public FTableRowBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct AT.AnimalSpawnSettingData
// 0x0020
struct FAnimalSpawnSettingData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.AnimalSpawnSettingData_Sky
// 0x0000 (0x0020 - 0x0020)
struct FAnimalSpawnSettingData_Sky : public FAnimalSpawnSettingData
{

};

// ScriptStruct AT.AnimNode_LookAtEyeBlend
// 0x0128 (0x0180 - 0x0058)
struct FAnimNode_LookAtEyeBlend : public FAnimNode_AssetPlayerBase
{
	struct FPoseLink                                   BasePose;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x118];                                     // 0x0068(0x0118) MISSED OFFSET
};

// ScriptStruct AT.ProjectileLaunchPattern
// 0x0010
struct FProjectileLaunchPattern
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ProjectileLaunchData
// 0x0010
struct FProjectileLaunchData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.CharacterEffectSetting
// 0x0058 (0x0060 - 0x0008)
struct FCharacterEffectSetting : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct AT.EffectBaseData
// 0x0018
struct FEffectBaseData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.EffectData
// 0x0028 (0x0040 - 0x0018)
struct FEffectData : public FEffectBaseData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct AT.EF_ParticleData
// 0x0010 (0x0050 - 0x0040)
struct FEF_ParticleData : public FEffectData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct AT.EF_TrailParticleData
// 0x0058 (0x0060 - 0x0008)
struct FEF_TrailParticleData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct AT.TrailData
// 0x0028 (0x0040 - 0x0018)
struct FTrailData : public FEffectBaseData
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct AT.EffectConditionData
// 0x0002
struct FEffectConditionData
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct AT.LandEffectSetting
// 0x0058 (0x0060 - 0x0008)
struct FLandEffectSetting : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct AT.DirectionalLights
// 0x0010
struct FDirectionalLights
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.RadialBlurParam
// 0x0050
struct FRadialBlurParam
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterTickFunction
// 0x0028 (0x0080 - 0x0058)
struct FATCharacterTickFunction : public FActorTickFunction
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET
};

// ScriptStruct AT.CharacterOffsetSetting
// 0x0020 (0x0028 - 0x0008)
struct FCharacterOffsetSetting : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.AT_CharacterCameraParam
// 0x0030 (0x0038 - 0x0008)
struct FAT_CharacterCameraParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.AT_CharacterConstParam
// 0x0008 (0x0010 - 0x0008)
struct FAT_CharacterConstParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.SkillAssistTable
// 0x0008 (0x0010 - 0x0008)
struct FSkillAssistTable : public FTableRowBase
{
	int                                                Priority;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AT.SkillAssistTriggerTable
// 0x0008 (0x0010 - 0x0008)
struct FSkillAssistTriggerTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.SupportRecoveryMpParameter
// 0x000C
struct FSupportRecoveryMpParameter
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.SupportRecoveryHpParameter
// 0x000C
struct FSupportRecoveryHpParameter
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.SupportStyleParameter
// 0x0010
struct FSupportStyleParameter
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SupportActionParameter
// 0x0010
struct FSupportActionParameter
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.CharacterSupportParameter
// 0x0020 (0x0028 - 0x0008)
struct FCharacterSupportParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ATGameHUDSettings
// 0x0028
struct FATGameHUDSettings
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty AT.ATGameHUDSettings.Class
};

// ScriptStruct AT.ATPreLoadFile
// 0x0018 (0x0020 - 0x0008)
struct FATPreLoadFile : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATDefaultInputAssignParam
// 0x0048 (0x0050 - 0x0008)
struct FATDefaultInputAssignParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.LightTowerSetting
// 0x0028 (0x0030 - 0x0008)
struct FLightTowerSetting : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ParticleRefs
// 0x0020
struct FParticleRefs
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.TransformFaceInfo
// 0x0010
struct FTransformFaceInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.Hit
// 0x0090
struct FHit
{
	struct FHitResult                                  HitResult;                                                // 0x0000(0x0088) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CharacterName
// 0x0010 (0x0018 - 0x0008)
struct FCharacterName : public FTableRowBase
{
	struct FString                                     CharacterName;                                            // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AT.FloatTableRow
// 0x0008 (0x0010 - 0x0008)
struct FFloatTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CharacterUIParamTableRow
// 0x0010 (0x0018 - 0x0008)
struct FCharacterUIParamTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.StatusTableRow
// 0x0060 (0x0068 - 0x0008)
struct FStatusTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.AT_TableRow_Float
// 0x0008 (0x0010 - 0x0008)
struct FAT_TableRow_Float : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.AT_TalkAnimNode_LookAt
// 0x0060 (0x0280 - 0x0220)
struct FAT_TalkAnimNode_LookAt : public FAnimNode_LookAt
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0220(0x0060) MISSED OFFSET
};

// ScriptStruct AT.LoadingTipsTableRow
// 0x0030 (0x0038 - 0x0008)
struct FLoadingTipsTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.QuestProgressTextureTableRow
// 0x0030 (0x0038 - 0x0008)
struct FQuestProgressTextureTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.CmnTabIconParam
// 0x0002
struct FCmnTabIconParam
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct AT.CommandPaletteBase
// 0x0003
struct FCommandPaletteBase
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) MISSED OFFSET
};

// ScriptStruct AT.CommandPaletteSkill
// 0x002D (0x0030 - 0x0003)
struct FCommandPaletteSkill : public FCommandPaletteBase
{
	unsigned char                                      UnknownData00[0x2D];                                      // 0x0003(0x002D) MISSED OFFSET
};

// ScriptStruct AT.CommandPaletteFormChange
// 0x0008 (0x0038 - 0x0030)
struct FCommandPaletteFormChange : public FCommandPaletteSkill
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CommandPaletteItem
// 0x0025 (0x0028 - 0x0003)
struct FCommandPaletteItem : public FCommandPaletteBase
{
	unsigned char                                      UnknownData00[0x25];                                      // 0x0003(0x0025) MISSED OFFSET
};

// ScriptStruct AT.CommandPaletteSupport
// 0x007D (0x0080 - 0x0003)
struct FCommandPaletteSupport : public FCommandPaletteBase
{
	unsigned char                                      UnknownData00[0x7D];                                      // 0x0003(0x007D) MISSED OFFSET
};

// ScriptStruct AT.CommandPaletteSupportSkill
// 0x002D (0x0030 - 0x0003)
struct FCommandPaletteSupportSkill : public FCommandPaletteBase
{
	unsigned char                                      UnknownData00[0x2D];                                      // 0x0003(0x002D) MISSED OFFSET
};

// ScriptStruct AT.CommandPaletteRoot
// 0x0015 (0x0018 - 0x0003)
struct FCommandPaletteRoot : public FCommandPaletteBase
{
	unsigned char                                      UnknownData00[0x15];                                      // 0x0003(0x0015) MISSED OFFSET
};

// ScriptStruct AT.LinkPanelInfo
// 0x0010
struct FLinkPanelInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.AT_UICompZListParam
// 0x0030
struct FAT_UICompZListParam
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.AT_UICompZListBgmParam
// 0x0028
struct FAT_UICompZListBgmParam
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.AT_UICompZListCardParam
// 0x0048
struct FAT_UICompZListCardParam
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AT.AT_UICompZListDemoParam
// 0x0048
struct FAT_UICompZListDemoParam
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AT.CookTextBarInfo
// 0x0068
struct FCookTextBarInfo
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct AT.FoodWidgetInfo
// 0x0040
struct FFoodWidgetInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.RecipeInfo
// 0x0020
struct FRecipeInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.DamagePopPlayInfo
// 0x0038
struct FDamagePopPlayInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.EnemyGaugeNumInfo
// 0x0008 (0x0010 - 0x0008)
struct FEnemyGaugeNumInfo : public FTableRowBase
{
	                                                   Type;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AT.Credit
// 0x0030 (0x0038 - 0x0008)
struct FCredit : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.LinkBonusVoiceProgress
// 0x0060 (0x0068 - 0x0008)
struct FLinkBonusVoiceProgress : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.LinkBonusVoice
// 0x0060 (0x0068 - 0x0008)
struct FLinkBonusVoice : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.WorldMapMaterialInfo
// 0x0018 (0x0020 - 0x0008)
struct FWorldMapMaterialInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.WorldMapActiveParamRow
// 0x0008 (0x0010 - 0x0008)
struct FWorldMapActiveParamRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.KeyGuideListParam
// 0x0010 (0x0018 - 0x0008)
struct FKeyGuideListParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.KeyGuideItem
// 0x0020
struct FKeyGuideItem
{
	struct FName                                       Note;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.BannedSkillParam
// 0x0020 (0x0028 - 0x0008)
struct FBannedSkillParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.LandMarkVisibleParam
// 0x0028 (0x0030 - 0x0008)
struct FLandMarkVisibleParam : public FTableRowBase
{
	                                                   Type;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0009(0x0027) MISSED OFFSET
};

// ScriptStruct AT.RandomItemRewardParam
// 0x0068 (0x0070 - 0x0008)
struct FRandomItemRewardParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct AT.SimulationBattleParam
// 0x0040 (0x0048 - 0x0008)
struct FSimulationBattleParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.TrainingBattleParam
// 0x0040 (0x0048 - 0x0008)
struct FTrainingBattleParam : public FTableRowBase
{
	                                                   Character;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0009(0x003F) MISSED OFFSET
};

// ScriptStruct AT.TrainingRemodelingParam
// 0x0060 (0x0068 - 0x0008)
struct FTrainingRemodelingParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.TelopDataParam
// 0x0040 (0x0048 - 0x0008)
struct FTelopDataParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.BonfireDataParam
// 0x0068 (0x0070 - 0x0008)
struct FBonfireDataParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct AT.TrainingDataParam
// 0x0028 (0x0030 - 0x0008)
struct FTrainingDataParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.TrainingConditionDataParam
// 0x0028
struct FTrainingConditionDataParam
{
	                                                   Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct AT.TrainingEventBattleExtendedParam
// 0x0010 (0x0018 - 0x0008)
struct FTrainingEventBattleExtendedParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.CharacterDetailParam
// 0x0050 (0x0058 - 0x0008)
struct FCharacterDetailParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct AT.WishLotteryParam
// 0x0018 (0x0020 - 0x0008)
struct FWishLotteryParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.WishLotteryGroupParam
// 0x0030 (0x0038 - 0x0008)
struct FWishLotteryGroupParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.WishLotteryCountParam
// 0x0030 (0x0038 - 0x0008)
struct FWishLotteryCountParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.WishAddParam
// 0x0038 (0x0040 - 0x0008)
struct FWishAddParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.AddZOrbCount
// 0x0008
struct FAddZOrbCount
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.WishCountParam
// 0x0028 (0x0030 - 0x0008)
struct FWishCountParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.WishInfoParam
// 0x0078 (0x0080 - 0x0008)
struct FWishInfoParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct AT.ShopInfoParam
// 0x0030 (0x0038 - 0x0008)
struct FShopInfoParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.CaptureFacialTypeParam
// 0x0008 (0x0010 - 0x0008)
struct FCaptureFacialTypeParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CaptureModelParam
// 0x0058 (0x0060 - 0x0008)
struct FCaptureModelParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct AT.MinigameBaseballRewardParam
// 0x0028 (0x0030 - 0x0008)
struct FMinigameBaseballRewardParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.MinigameBaseballLocalRankingParam
// 0x0020 (0x0028 - 0x0008)
struct FMinigameBaseballLocalRankingParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.MinigameBaseballDifficultyParam
// 0x0020 (0x0028 - 0x0008)
struct FMinigameBaseballDifficultyParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.MinigameRaceLocalRankingParam
// 0x0040 (0x0048 - 0x0008)
struct FMinigameRaceLocalRankingParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.MinigameRaceRewardsParam
// 0x0038 (0x0040 - 0x0008)
struct FMinigameRaceRewardsParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.MinigameRaceCourseParam
// 0x0030 (0x0038 - 0x0008)
struct FMinigameRaceCourseParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.DisplayParam
// 0x0008 (0x0010 - 0x0008)
struct FDisplayParam : public FTableRowBase
{
	int                                                Width;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.OptionParam
// 0x0060 (0x0068 - 0x0008)
struct FOptionParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.EnemyHpGaugeOneBar
// 0x0010 (0x0018 - 0x0008)
struct FEnemyHpGaugeOneBar : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.BattleTipsTutorialParam
// 0x0010 (0x0018 - 0x0008)
struct FBattleTipsTutorialParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.KeyTipsParam
// 0x0020 (0x0028 - 0x0008)
struct FKeyTipsParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.TipsParam
// 0x0038 (0x0040 - 0x0008)
struct FTipsParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.UiMapParam
// 0x00A0 (0x00A8 - 0x0008)
struct FUiMapParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0008(0x00A0) MISSED OFFSET
};

// ScriptStruct AT.BattlePowerTextData
// 0x0028
struct FBattlePowerTextData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.WalkingMobTalk
// 0x0018 (0x0020 - 0x0008)
struct FWalkingMobTalk : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupBannedSkillList
// 0x0018
struct FGameWindowSetupBannedSkillList
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupBuffInfo
// 0x0020
struct FGameWindowSetupBuffInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupLinkList
// 0x0058
struct FGameWindowSetupLinkList
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupWishInfo
// 0x0030
struct FGameWindowSetupWishInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupComuEmbInfo
// 0x0008
struct FGameWindowSetupComuEmbInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupTextMenuInfo
// 0x0010
struct FGameWindowSetupTextMenuInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupCheckInfo
// 0x0038
struct FGameWindowSetupCheckInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupSelectItemInfo
// 0x0030
struct FGameWindowSetupSelectItemInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.GameWindowSetupItemInfo
// 0x0020
struct FGameWindowSetupItemInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.MessageItem
// 0x0058 (0x0060 - 0x0008)
struct FMessageItem : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct AT.Anim2DParam_F
// 0x0008 (0x0010 - 0x0008)
struct FAnim2DParam_F : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.EnemyGageParam
// 0x0018 (0x0020 - 0x0008)
struct FEnemyGageParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.MessageInfoTbl
// 0x01A0 (0x01A8 - 0x0008)
struct FMessageInfoTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0008(0x01A0) MISSED OFFSET
};

// ScriptStruct AT.TargetInfo
// 0x0038
struct FTargetInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.DamageInfo
// 0x0054
struct FDamageInfo
{
	unsigned char                                      UnknownData00[0x54];                                      // 0x0000(0x0054) MISSED OFFSET
};

// ScriptStruct AT.MultiEncounterEnemyInfo
// 0x0010
struct FMultiEncounterEnemyInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.EncounterEnemyInfo
// 0x0030
struct FEncounterEnemyInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.EncounterInfo
// 0x0038
struct FEncounterInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.EncounterDBInfo
// 0x0010
struct FEncounterDBInfo
{
	TArray<struct FEncounterInfo>                      EncounterDBInfo;                                          // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AT.MultiBattleDirectionInfo
// 0x0010
struct FMultiBattleDirectionInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.BattleDirectionInfo
// 0x0024
struct FBattleDirectionInfo
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct AT.MiniMapInfo
// 0x0060
struct FMiniMapInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct AT.SkillChainComboHudInfo
// 0x0020
struct FSkillChainComboHudInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.EnemyInfo
// 0x0450
struct FEnemyInfo
{
	unsigned char                                      UnknownData00[0x450];                                     // 0x0000(0x0450) MISSED OFFSET
};

// ScriptStruct AT.EnemyHudInfo
// 0x006C
struct FEnemyHudInfo
{
	unsigned char                                      UnknownData00[0x6C];                                      // 0x0000(0x006C) MISSED OFFSET
};

// ScriptStruct AT.Condition
// 0x001C
struct FCondition
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AT.Condition_E
// 0x0008
struct FCondition_E
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.PlayerInfo
// 0x0038
struct FPlayerInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.DBHaveCharInfo
// 0x0010
struct FDBHaveCharInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SkillTreeImpLogInfo
// 0x0018
struct FSkillTreeImpLogInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.LevelUpLogItem
// 0x0010
struct FLevelUpLogItem
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.InfoLogInfo
// 0x0020
struct FInfoLogInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.InfoLog02Info
// 0x0018
struct FInfoLog02Info
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.InfoLogBar02InfoDesc
// 0x0018
struct FInfoLogBar02InfoDesc
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.InfoZOrbLogInfo
// 0x0008
struct FInfoZOrbLogInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.AT_UICursorParam
// 0x0010
struct FAT_UICursorParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.MapMIconLegend
// 0x0018
struct FMapMIconLegend
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.IconBlinker
// 0x0020
struct FIconBlinker
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.BlinkIconData
// 0x0010
struct FBlinkIconData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.WorldMapIconData
// 0x0010
struct FWorldMapIconData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.WorldMapsSymbol
// 0x0020
struct FWorldMapsSymbol
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CmnMenuBar03Param
// 0x0060
struct FCmnMenuBar03Param
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct AT.CmnWishMenuList00Param
// 0x0020
struct FCmnWishMenuList00Param
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CmnSkillMenuList00Param
// 0x0030
struct FCmnSkillMenuList00Param
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.CmnMenuList00Param
// 0x0028
struct FCmnMenuList00Param
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.CmnMenuListParam
// 0x0068
struct FCmnMenuListParam
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct AT.CmnMenuList03Param
// 0x0020
struct FCmnMenuList03Param
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CmnQuestMenuList06Param
// 0x0048
struct FCmnQuestMenuList06Param
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AT.MenuWIndowSetupListNumMenuInfo
// 0x0018
struct FMenuWIndowSetupListNumMenuInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.MenuData
// 0x0018
struct FMenuData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.UIQuestInfo
// 0x0080
struct FUIQuestInfo
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct AT.UIQuestDetail
// 0x0018
struct FUIQuestDetail
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.UIShopCustomColorParam
// 0x0030
struct FUIShopCustomColorParam
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.GaugeUpdateSpeedThresholdParam
// 0x0008
struct FGaugeUpdateSpeedThresholdParam
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CaptureSkillDetail
// 0x0048
struct FCaptureSkillDetail
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AT.TrainingDetailTask
// 0x0070
struct FTrainingDetailTask
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AT.TrainingDetailTaskData
// 0x0070
struct FTrainingDetailTaskData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AT.UISkillTreeLayoutIdTbl
// 0x0008 (0x0010 - 0x0008)
struct FUISkillTreeLayoutIdTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.UISkillTreeLayout
// 0x0078 (0x0080 - 0x0008)
struct FUISkillTreeLayout : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct AT.CaptureParam
// 0x0050
struct FCaptureParam
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.BarData
// 0x0028
struct FBarData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.StartpartyPartySelectData
// 0x00B0
struct FStartpartyPartySelectData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct AT.StartStatusBasicParam
// 0x00C0
struct FStartStatusBasicParam
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct AT.SaveLoadBarParam
// 0x0080
struct FSaveLoadBarParam
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct AT.StartStatusParam
// 0x00B0
struct FStartStatusParam
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct AT.StateIconInfo
// 0x0010
struct FStateIconInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.CharacterIconCodeList
// 0x0020 (0x0028 - 0x0008)
struct FCharacterIconCodeList : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CharacterResourceInfo
// 0x0020
struct FCharacterResourceInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CharacterIconInfo
// 0x0030 (0x0038 - 0x0008)
struct FCharacterIconInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ScrollText
// 0x00A0
struct FScrollText
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct AT.TextStyle
// 0x001C
struct FTextStyle
{
	struct FLinearColor                                Color;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0010(0x000C) MISSED OFFSET
};

// ScriptStruct AT.CreditDetail
// 0x0020
struct FCreditDetail
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.UIXcmnPlatBtnInfo
// 0x0038
struct FUIXcmnPlatBtnInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.UIXcmnPlatBtnTypeInfo
// 0x0030
struct FUIXcmnPlatBtnTypeInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.XlistBar04Info
// 0x0058
struct FXlistBar04Info
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct AT.UIXlistCustom00Param
// 0x0030
struct FUIXlistCustom00Param
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.XlistList05Lay7Param
// 0x0028
struct FXlistList05Lay7Param
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ZCWNavigation
// 0x0048
struct FZCWNavigation
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AT.AT_ViewActorPlayerMoveParam
// 0x0048 (0x0050 - 0x0008)
struct FAT_ViewActorPlayerMoveParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.ActChargeHeatCutInfo
// 0x0010
struct FActChargeHeatCutInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.Cpl002MakoudanShotParam
// 0x0018
struct FCpl002MakoudanShotParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.Cpl002MakoudanDirectionParam
// 0x0008
struct FCpl002MakoudanDirectionParam
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.Cpl005DeathSlicerAroundProjectile
// 0x000C
struct FCpl005DeathSlicerAroundProjectile
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct AT.Cpl005LongRangeAProjectileParam
// 0x0024
struct FCpl005LongRangeAProjectileParam
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct AT.DoubleSundayBeamOrbitInfo
// 0x0020
struct FDoubleSundayBeamOrbitInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ATActCpl034SkillPunishStormData
// 0x0020
struct FATActCpl034SkillPunishStormData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ATActCpl034SkillSonicBlowData
// 0x0010
struct FATActCpl034SkillSonicBlowData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.LongBlowoffChaseMontageInfo
// 0x0018
struct FLongBlowoffChaseMontageInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.LongComboInfo
// 0x0018
struct FLongComboInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ShortComboInfo
// 0x00A8
struct FShortComboInfo
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct AT.SparkingComboInfo
// 0x0018
struct FSparkingComboInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SkillMontageFormChangeCutinInfo
// 0x0010
struct FSkillMontageFormChangeCutinInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SkillAnimInfo
// 0x0010
struct FSkillAnimInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SkillMontageInfo
// 0x0078
struct FSkillMontageInfo
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.ExclusiveTalkInfo
// 0x0040
struct FExclusiveTalkInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.CooperationTalkInfo
// 0x0010
struct FCooperationTalkInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.MemberTalkInfo
// 0x0018
struct FMemberTalkInfo
{
	                                                   Character;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FCooperationTalkInfo                        Info;                                                     // 0x0008(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct AT.CooperationCameraInfo
// 0x0000 (0x002C - 0x002C)
struct FCooperationCameraInfo : public FSkillCameraInfo
{

};

// ScriptStruct AT.CooperationRushMontageInfo
// 0x0010
struct FCooperationRushMontageInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SkillMoveTeleportParam
// 0x0018
struct FSkillMoveTeleportParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ReplicateBodyAttackPattern
// 0x000C
struct FReplicateBodyAttackPattern
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.TemporaryMeshInfo
// 0x0030
struct FTemporaryMeshInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATAdjustConstParam
// 0x0008 (0x0010 - 0x0008)
struct FATAdjustConstParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATAmbientSplineData
// 0x0018
struct FATAmbientSplineData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ParticleFloatParam
// 0x0018
struct FParticleFloatParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATAtrociousPhaseClasses
// 0x0018
struct FATAtrociousPhaseClasses
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATAtrociousConditionParam
// 0x0010
struct FATAtrociousConditionParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATAtrociousAdjustParam
// 0x0010 (0x0018 - 0x0008)
struct FATAtrociousAdjustParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATAtrociousPhaseTable
// 0x0030 (0x0038 - 0x0008)
struct FATAtrociousPhaseTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATAtrociousPhaseParamArray
// 0x0030
struct FATAtrociousPhaseParamArray
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATAtrociousPhaseParam
// 0x0010
struct FATAtrociousPhaseParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.AttachParticleParameter
// 0x0050
struct FAttachParticleParameter
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.BattleAIBehaviorTable
// 0x0180 (0x0188 - 0x0008)
struct FBattleAIBehaviorTable : public FTableRowBase
{
	int                                                Priority;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17C];                                     // 0x000C(0x017C) MISSED OFFSET
};

// ScriptStruct AT.BattleAIPhaseTable
// 0x0020 (0x0028 - 0x0008)
struct FBattleAIPhaseTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.BattleGroupAICharacters
// 0x0010
struct FBattleGroupAICharacters
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.BattleGroupAIBehaviorTable
// 0x0228 (0x0230 - 0x0008)
struct FBattleGroupAIBehaviorTable : public FTableRowBase
{
	int                                                Priority;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x224];                                     // 0x000C(0x0224) MISSED OFFSET
};

// ScriptStruct AT.BattleGroupAIPhaseTable
// 0x0020 (0x0028 - 0x0008)
struct FBattleGroupAIPhaseTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.BattleGroupAIMemberConditionTable
// 0x0008 (0x0010 - 0x0008)
struct FBattleGroupAIMemberConditionTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.BattleGroupAIBreakConditionTable
// 0x0020 (0x0028 - 0x0008)
struct FBattleGroupAIBreakConditionTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.BattleGroupAIEntryConditionTable
// 0x0028 (0x0030 - 0x0008)
struct FBattleGroupAIEntryConditionTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.BonfireActivateCondition
// 0x0030 (0x0038 - 0x0008)
struct FBonfireActivateCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.SkillActionData
// 0x0030
struct FSkillActionData
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.CharacterActionClassData
// 0x0018
struct FCharacterActionClassData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.CharacterMontage
// 0x0010
struct FCharacterMontage
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterStandWaitVariationLoopParam
// 0x000C
struct FATCharacterStandWaitVariationLoopParam
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0001(0x000B) MISSED OFFSET
};

// ScriptStruct AT.CharacterBuffTable
// 0x00C0 (0x00C8 - 0x0008)
struct FCharacterBuffTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0008(0x00C0) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterBuff
// 0x00C0
struct FATCharacterBuff
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterStatus
// 0x0078
struct FATCharacterStatus
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.ATDamageCollision
// 0x0008
struct FATDamageCollision
{
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AT.ATUniqueCharacterTableRow
// 0x0008 (0x0010 - 0x0008)
struct FATUniqueCharacterTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATVariationData
// 0x0040
struct FATVariationData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.ATFormData
// 0x0010
struct FATFormData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterDataTable
// 0x0100 (0x0108 - 0x0008)
struct FATCharacterDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0008(0x0100) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterEffectTableIDSet
// 0x0010
struct FATCharacterEffectTableIDSet
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATMeshAttachObject
// 0x0040
struct FATMeshAttachObject
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.ATMeshParts
// 0x0010
struct FATMeshParts
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATFightingPowerPhaseParam
// 0x0018 (0x0020 - 0x0008)
struct FATFightingPowerPhaseParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATEnemyZOrbTable
// 0x0018 (0x0020 - 0x0008)
struct FATEnemyZOrbTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATEnemyExpTable
// 0x0008 (0x0010 - 0x0008)
struct FATEnemyExpTable : public FTableRowBase
{
	int                                                Exp;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterExpTable
// 0x0008 (0x0010 - 0x0008)
struct FATCharacterExpTable : public FTableRowBase
{
	int                                                Next;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterStatusTable
// 0x0078 (0x0080 - 0x0008)
struct FATCharacterStatusTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct AT.ContentReleaseCondition
// 0x0028 (0x0030 - 0x0008)
struct FContentReleaseCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATCookingBuff
// 0x0008
struct FATCookingBuff
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATDamagePositiveParam
// 0x0030
struct FATDamagePositiveParam
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.DamageCollisionElem
// 0x0168
struct FDamageCollisionElem
{
	unsigned char                                      UnknownData00[0x168];                                     // 0x0000(0x0168) MISSED OFFSET
};

// ScriptStruct AT.ATDamageEvent
// 0x0078 (0x0120 - 0x00A8)
struct FATDamageEvent : public FPointDamageEvent
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x00A8(0x0078) MISSED OFFSET
};

// ScriptStruct AT.DamageRequestData
// 0x0170
struct FDamageRequestData
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0000(0x0170) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToAIMoveAssetInstance
// 0x0018
struct FReferenceToAIMoveAssetInstance
{
	class UDataTable*                                  MoveForwardData;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  MoveDistanceData;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  MoveAroundData;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.ReferenceToEncountAssetInstance
// 0x0018
struct FReferenceToEncountAssetInstance
{
	class UDataTable*                                  EnemyParameterList;                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  EnemyAppearTable;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  EnemyParamDistRelation;                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.LoadingAIBehaviorAssetInstance
// 0x0010
struct FLoadingAIBehaviorAssetInstance
{
	class UBehaviorTree*                               BehaviorTree;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlackboardData*                             BlackboardData;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.LoadingAIMoveAsset
// 0x0078
struct FLoadingAIMoveAsset
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.LoadingEncountAsset
// 0x0078
struct FLoadingEncountAsset
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.LoadingAIBehaviorAsset
// 0x0050
struct FLoadingAIBehaviorAsset
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetBaseballGameCommonInfo
// 0x0938
struct FATDataAssetBaseballGameCommonInfo
{
	unsigned char                                      UnknownData00[0x938];                                     // 0x0000(0x0938) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetBaseballGameInfo
// 0x0030
struct FATDataAssetBaseballGameInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToBaseballGameCommonAssetInstance
// 0x01D8
struct FReferenceToBaseballGameCommonAssetInstance
{
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0000(0x01D8) MISSED OFFSET
};

// ScriptStruct AT.LoadingBaseballGameCommonAsset
// 0x0938
struct FLoadingBaseballGameCommonAsset
{
	unsigned char                                      UnknownData00[0x938];                                     // 0x0000(0x0938) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToBaseballGameAssetInstance
// 0x0008
struct FReferenceToBaseballGameAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetBattleGroupAIInfo
// 0x0030
struct FATDataAssetBattleGroupAIInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetBattleAIInfo
// 0x0058
struct FATDataAssetBattleAIInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToBattleGroupAIAssetInstance
// 0x0008
struct FReferenceToBattleGroupAIAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToBattleAIAssetInstance
// 0x0010
struct FReferenceToBattleAIAssetInstance
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetCharacterInfo
// 0x0030
struct FATDataAssetCharacterInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetCharacterActionInfo
// 0x0030
struct FATDataAssetCharacterActionInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToCharacterActionAssetInstance
// 0x0008
struct FReferenceToCharacterActionAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToCharacterAssetInstance
// 0x0008
struct FReferenceToCharacterAssetInstance
{
	class UClass*                                      Character;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.ATDataAssetFormMeshInfo
// 0x0030
struct FATDataAssetFormMeshInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetVariationMeshInfo
// 0x0030
struct FATDataAssetVariationMeshInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATReferenceToFormMeshAssetInstance
// 0x0010
struct FATReferenceToFormMeshAssetInstance
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATReferenceToVariationMeshAssetInstance
// 0x0010
struct FATReferenceToVariationMeshAssetInstance
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetCookingDemoInfo
// 0x0030
struct FATDataAssetCookingDemoInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetCookingDemoCharacterResourceInfo
// 0x02D8
struct FATDataAssetCookingDemoCharacterResourceInfo
{
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x0000(0x02D8) MISSED OFFSET
};

// ScriptStruct AT.ATReferenceToCookingDemoCharacterResourceAssetInstance
// 0x0098
struct FATReferenceToCookingDemoCharacterResourceAssetInstance
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetCrossTalkInfo
// 0x0008
struct FATDataAssetCrossTalkInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToCrossTalkAssetInstance
// 0x0018
struct FReferenceToCrossTalkAssetInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetDamageTypeInfo
// 0x0030
struct FATDataAssetDamageTypeInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToDamageTypeAssetInstance
// 0x0008
struct FReferenceToDamageTypeAssetInstance
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.ATDataAssetEventBattlePostProcessEffectInfo
// 0x0078
struct FATDataAssetEventBattlePostProcessEffectInfo
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetEventBattleInfo
// 0x0030
struct FATDataAssetEventBattleInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToEventBattleAssetInstance
// 0x0008
struct FReferenceToEventBattleAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToEventBattlePostProcessEffectAssetInstance
// 0x0018
struct FReferenceToEventBattlePostProcessEffectAssetInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.LoadingEventBattlePostProcessEffectAsset
// 0x0078
struct FLoadingEventBattlePostProcessEffectAsset
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetFacialInfo
// 0x0030
struct FATDataAssetFacialInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATReferenceToFacialAssetInstance
// 0x0010
struct FATReferenceToFacialAssetInstance
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetFieldInfo
// 0x0030
struct FATDataAssetFieldInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetFishGameCharaAnimationInfo
// 0x0328
struct FATDataAssetFishGameCharaAnimationInfo
{
	unsigned char                                      UnknownData00[0x328];                                     // 0x0000(0x0328) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetFishParticleEffInfo
// 0x0140
struct FATDataAssetFishParticleEffInfo
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetFishCurveParamInfo
// 0x0078
struct FATDataAssetFishCurveParamInfo
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetFishGameAnimationInfo
// 0x00F8
struct FATDataAssetFishGameAnimationInfo
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetFishGameMeshInfo
// 0x0058
struct FATDataAssetFishGameMeshInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToFishGameCharaAnimationAssetInstance
// 0x00A0
struct FReferenceToFishGameCharaAnimationAssetInstance
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToFishParticleEffAssetInstance
// 0x0040
struct FReferenceToFishParticleEffAssetInstance
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToFishCurveParamAssetInstance
// 0x0018
struct FReferenceToFishCurveParamAssetInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToFishGameAnimationAssetInstance
// 0x0030
struct FReferenceToFishGameAnimationAssetInstance
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToFishGameMeshAssetInstance
// 0x0010
struct FReferenceToFishGameMeshAssetInstance
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.LoadingFishGameCharaAnimationAsset
// 0x0320
struct FLoadingFishGameCharaAnimationAsset
{
	unsigned char                                      UnknownData00[0x320];                                     // 0x0000(0x0320) MISSED OFFSET
};

// ScriptStruct AT.LoadingFishParticleEffAsset
// 0x0140
struct FLoadingFishParticleEffAsset
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

// ScriptStruct AT.LoadingFishCurveParamAsset
// 0x0078
struct FLoadingFishCurveParamAsset
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.LoadingFishGameAnimationAsset
// 0x00F0
struct FLoadingFishGameAnimationAsset
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetItemInfo
// 0x0008
struct FATDataAssetItemInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToItemAssetInstance
// 0x0001
struct FReferenceToItemAssetInstance
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetJostleBeamInfo
// 0x0030
struct FATDataAssetJostleBeamInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToJostleBeamAssetInstance
// 0x0008
struct FReferenceToJostleBeamAssetInstance
{
	class UClass*                                      ATJostleBeamParam;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.ATDataAssetMechaDevInfo
// 0x0030
struct FATDataAssetMechaDevInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToMechaDevAssetInstance
// 0x0008
struct FReferenceToMechaDevAssetInstance
{
	class UObject*                                     Object;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.ATDataAssetMiniGameInfo
// 0x0030
struct FATDataAssetMiniGameInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToMiniGameAssetInstance
// 0x0008
struct FReferenceToMiniGameAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetMiniGameMobAnimationInfo
// 0x0030
struct FATDataAssetMiniGameMobAnimationInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToMiniGameMobMeshInstance
// 0x0008
struct FReferenceToMiniGameMobMeshInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToMiniGameMobAnimBPInstance
// 0x0008
struct FReferenceToMiniGameMobAnimBPInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.LoadingMiniGameMobMesh
// 0x0028
struct FLoadingMiniGameMobMesh
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingMiniGameMobAnimBP
// 0x0028
struct FLoadingMiniGameMobAnimBP
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetNpcMobAnimationInfo
// 0x0030
struct FATDataAssetNpcMobAnimationInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToNpcMeshInstance
// 0x0008
struct FReferenceToNpcMeshInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToNpcAnimBPInstance
// 0x0008
struct FReferenceToNpcAnimBPInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.LoadingNpcMesh
// 0x0028
struct FLoadingNpcMesh
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.LoadingNpcAnimBP
// 0x0028
struct FLoadingNpcAnimBP
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetParticleInfo
// 0x0030
struct FATDataAssetParticleInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToParticleAssetInstance
// 0x0008
struct FReferenceToParticleAssetInstance
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.QuestDataAssetPair
// 0x0038 (0x0040 - 0x0008)
struct FQuestDataAssetPair : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToQuestAssetInstance
// 0x0008
struct FReferenceToQuestAssetInstance
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.ATDataAssetRaceGameAssistantInfo
// 0x0028
struct FATDataAssetRaceGameAssistantInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetRaceGameCommonInfo
// 0x0028
struct FATDataAssetRaceGameCommonInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetRaceGameInfo
// 0x0030
struct FATDataAssetRaceGameInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToRaceGameAssistantAssetInstance
// 0x0008
struct FReferenceToRaceGameAssistantAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.LoadingRaceGameAssistantAsset
// 0x0028
struct FLoadingRaceGameAssistantAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToRaceGameCommonAssetInstance
// 0x0008
struct FReferenceToRaceGameCommonAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.LoadingRaceGameCommonAsset
// 0x0028
struct FLoadingRaceGameCommonAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToRaceGameAssetInstance
// 0x0008
struct FReferenceToRaceGameAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetSoundInfo
// 0x0058
struct FATDataAssetSoundInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToSoundAssetInstance
// 0x0008
struct FReferenceToSoundAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetStarScaleFinishInfo
// 0x0030
struct FATDataAssetStarScaleFinishInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToStarScaleFinishAssetInstance
// 0x0008
struct FReferenceToStarScaleFinishAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetSupportCharacterTalkInfo
// 0x0030
struct FATDataAssetSupportCharacterTalkInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToSupportCharacterTalkAssetInstance
// 0x0008
struct FReferenceToSupportCharacterTalkAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetTPSSkillViewCancelInfo
// 0x0030
struct FATDataAssetTPSSkillViewCancelInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToTPSSkillViewCancelAssetInstance
// 0x0008
struct FReferenceToTPSSkillViewCancelAssetInstance
{
	class UDataTable*                                  TPSSkillViewCancelDataTable;                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.ATDataAssetLoadType
// 0x0010 (0x0018 - 0x0008)
struct FATDataAssetLoadType : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATDataTableUiInfo
// 0x0038
struct FATDataTableUiInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetUiInfo
// 0x0030
struct FATDataAssetUiInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToAssetInstance
// 0x0010
struct FReferenceToAssetInstance
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATDataAssetUiCaptureInfo
// 0x0108
struct FATDataAssetUiCaptureInfo
{
	unsigned char                                      UnknownData00[0x108];                                     // 0x0000(0x0108) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToUiCaptureAssetInstance
// 0x0040
struct FReferenceToUiCaptureAssetInstance
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.DemoInfoBase
// 0x0010
struct FDemoInfoBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.DemoTimingDelayed
// 0x0008 (0x0018 - 0x0010)
struct FDemoTimingDelayed : public FDemoInfoBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AT.PlayingDemoInfo
// 0x0008 (0x0018 - 0x0010)
struct FPlayingDemoInfo : public FDemoInfoBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AT.DemoParam
// 0x0018
struct FDemoParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.DiffLevelInfoParameter
// 0x0008
struct FDiffLevelInfoParameter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.DlcElementRow
// 0x0040 (0x0048 - 0x0008)
struct FDlcElementRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.DLCIdParam
// 0x0010 (0x0018 - 0x0008)
struct FDLCIdParam : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AT.DoorEventArgment
// 0x0004
struct FDoorEventArgment
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct AT.ATDragonBallSpawnGroupInfo
// 0x0018 (0x0020 - 0x0008)
struct FATDragonBallSpawnGroupInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATDragonBallSpawnIgnoreProgress
// 0x0010
struct FATDragonBallSpawnIgnoreProgress
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATDragonBallSpawnPointInfo
// 0x0028 (0x0030 - 0x0008)
struct FATDragonBallSpawnPointInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATEnemiesBaseCondition
// 0x0010 (0x0018 - 0x0008)
struct FATEnemiesBaseCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATEnemiesBaseParameter
// 0x0038 (0x0040 - 0x0008)
struct FATEnemiesBaseParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.DirectionRequests
// 0x0010
struct FDirectionRequests
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.DirectionRequest
// 0x0018
struct FDirectionRequest
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ShadowData
// 0x0018
struct FShadowData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.Direction
// 0x0020
struct FDirection
{
	TArray<struct FName>                               Enable;                                                   // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct AT.DebugEventBattleCondition
// 0x0010 (0x0018 - 0x0008)
struct FDebugEventBattleCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.EventBattleInfo
// 0x00B8
struct FEventBattleInfo
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct AT.EventBattleParam
// 0x00B8 (0x00C0 - 0x0008)
struct FEventBattleParam : public FTableRowBase
{
	struct FEventBattleInfo                            EventBattleParam;                                         // 0x0008(0x00B8) (Edit, DisableEditOnInstance)
};

// ScriptStruct AT.BattleConditionInfo
// 0x0030
struct FBattleConditionInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.EventBattleEnemyInfo
// 0x0060
struct FEventBattleEnemyInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct AT.EventBattleDefeatConditions
// 0x0008
struct FEventBattleDefeatConditions
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.EventBattleVictoryConditions
// 0x0008
struct FEventBattleVictoryConditions
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.FeverIgnoreSubQuestTableRow
// 0x0008 (0x0010 - 0x0008)
struct FFeverIgnoreSubQuestTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.FeverIgnoreMainQuestTableRow
// 0x0010 (0x0018 - 0x0008)
struct FFeverIgnoreMainQuestTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.FeverDetailTableRow
// 0x0048 (0x0050 - 0x0008)
struct FFeverDetailTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.FeverAreaTableRow
// 0x0010 (0x0018 - 0x0008)
struct FFeverAreaTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.FeverParamsRow
// 0x0028 (0x0030 - 0x0008)
struct FFeverParamsRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.FetchingTalkParameter
// 0x0028
struct FFetchingTalkParameter
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATFieldMemoriesParameter
// 0x0040 (0x0048 - 0x0008)
struct FATFieldMemoriesParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.FishingConditionParameter
// 0x0010 (0x0018 - 0x0008)
struct FFishingConditionParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATGameModeActorComponentSettings
// 0x0018
struct FATGameModeActorComponentSettings
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterList
// 0x0010
struct FATCharacterList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.TPCharacterList
// 0x0010
struct FTPCharacterList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.InitialPlayerData
// 0x0070 (0x0078 - 0x0008)
struct FInitialPlayerData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0008(0x0070) MISSED OFFSET
};

// ScriptStruct AT.ItemPair
// 0x0010
struct FItemPair
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATInteractiveActionParam
// 0x0008 (0x0010 - 0x0008)
struct FATInteractiveActionParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ItemTradeParameter
// 0x0010 (0x0018 - 0x0008)
struct FItemTradeParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ItemTraderCondition
// 0x0030 (0x0038 - 0x0008)
struct FItemTraderCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ItemTradeUpdatableCondition
// 0x0020
struct FItemTradeUpdatableCondition
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ItemTradeProbability
// 0x0010
struct FItemTradeProbability
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.JostleBeamDiffLevelInfoParameter
// 0x0008
struct FJostleBeamDiffLevelInfoParameter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.LoginParam
// 0x0028
struct FLoginParam
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATPersistentLevelInfo
// 0x0020 (0x0028 - 0x0008)
struct FATPersistentLevelInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ATLevelProgressPair
// 0x0080 (0x0088 - 0x0008)
struct FATLevelProgressPair : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLevelProgressPair.Level
	unsigned char                                      UnknownData01[0x58];                                      // 0x0030(0x0058) MISSED OFFSET
};

// ScriptStruct AT.ATLoadedLevel
// 0x0010
struct FATLoadedLevel
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATLevelLoadInfo
// 0x0030 (0x0038 - 0x0008)
struct FATLevelLoadInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATLevelLoadInfo.Level
	                                                   Type;                                                     // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct AT.ATLongBlowoffObject
// 0x0010
struct FATLongBlowoffObject
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.DevelopColorTable
// 0x0010 (0x0018 - 0x0008)
struct FDevelopColorTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.DevelopLevelTable
// 0x0028 (0x0030 - 0x0008)
struct FDevelopLevelTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.DevelopSettingTable
// 0x0048 (0x0050 - 0x0008)
struct FDevelopSettingTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.DevelopCommunityTable
// 0x0018 (0x0020 - 0x0008)
struct FDevelopCommunityTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.DevelopCaptureTable
// 0x0018 (0x0020 - 0x0008)
struct FDevelopCaptureTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.RidingParam
// 0x001C
struct FRidingParam
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AT.MissionUpdateInfoIgnoreParameter
// 0x0010 (0x0018 - 0x0008)
struct FMissionUpdateInfoIgnoreParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.MissionHermitRewardParameter
// 0x0028 (0x0030 - 0x0008)
struct FMissionHermitRewardParameter : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct AT.MissionPhaseParameter
// 0x0048 (0x0050 - 0x0008)
struct FMissionPhaseParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.MissionProgressUserData
// 0x0050
struct FMissionProgressUserData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.MissionProgressSet
// 0x0950
struct FMissionProgressSet
{
	unsigned char                                      UnknownData00[0x950];                                     // 0x0000(0x0950) MISSED OFFSET
};

// ScriptStruct AT.MissionProgress
// 0x0018
struct FMissionProgress
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.NeedCharacterSubQuest
// 0x0010 (0x0018 - 0x0008)
struct FNeedCharacterSubQuest : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.OverrideAnimation
// 0x0070
struct FOverrideAnimation
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AT.ATParticleSystemData
// 0x0018
struct FATParticleSystemData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATParticleDataBase
// 0x0018
struct FATParticleDataBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATParticleData
// 0x0028 (0x0040 - 0x0018)
struct FATParticleData : public FATParticleDataBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct AT.PartyMember
// 0x0028
struct FPartyMember
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.PhaseCollisionParam
// 0x0008
struct FPhaseCollisionParam
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.PhaseTalkParam
// 0x0018
struct FPhaseTalkParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATControlInputInfo
// 0x0104
struct FATControlInputInfo
{
	unsigned char                                      UnknownData00[0x104];                                     // 0x0000(0x0104) MISSED OFFSET
};

// ScriptStruct AT.QuestAnimationParameter
// 0x00E8 (0x00F0 - 0x0008)
struct FQuestAnimationParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0008(0x00E8) MISSED OFFSET
};

// ScriptStruct AT.QuestCharacterFetcherCondition
// 0x0010 (0x0018 - 0x0008)
struct FQuestCharacterFetcherCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.QuestDataTableStore
// 0x02D8
struct FQuestDataTableStore
{
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x0000(0x02D8) MISSED OFFSET
};

// ScriptStruct AT.ProgressCheckQuestInfo
// 0x0010
struct FProgressCheckQuestInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.QuestPhasePair
// 0x0058
struct FQuestPhasePair
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct AT.QuestDirectionCoordinateParameter
// 0x0020 (0x0028 - 0x0008)
struct FQuestDirectionCoordinateParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.QuestDistanceObserverParameter
// 0x0010 (0x0018 - 0x0008)
struct FQuestDistanceObserverParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ObserverCondition
// 0x0040
struct FObserverCondition
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct AT.GeneralTalkEventArgment
// 0x0008
struct FGeneralTalkEventArgment
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.QuestImageAssetsReference
// 0x0028 (0x0030 - 0x0008)
struct FQuestImageAssetsReference : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.QuestImageParameter
// 0x0020 (0x0028 - 0x0008)
struct FQuestImageParameter : public FTableRowBase
{
	                                                   Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0009(0x001F) MISSED OFFSET
};

// ScriptStruct AT.QuestImageParameterSet
// 0x0018 (0x0020 - 0x0008)
struct FQuestImageParameterSet : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.QuestNotifyCondition
// 0x0018 (0x0020 - 0x0008)
struct FQuestNotifyCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.QuestNotificationParameter
// 0x0038 (0x0040 - 0x0008)
struct FQuestNotificationParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.QuestSpawnParameter
// 0x0038 (0x0040 - 0x0008)
struct FQuestSpawnParameter : public FTableRowBase
{
	class UClass*                                      QuestCharacter;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct AT.WorldMapLandMarkParam
// 0x0018
struct FWorldMapLandMarkParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.QuestWorldMapLandmarkParameter
// 0x0010 (0x0018 - 0x0008)
struct FQuestWorldMapLandmarkParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.QuestWorldMapParameter
// 0x0020 (0x0028 - 0x0008)
struct FQuestWorldMapParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.RequestQuestInfo
// 0x0048
struct FRequestQuestInfo
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AT.QuestPhaseProgressSet
// 0x0018
struct FQuestPhaseProgressSet
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.QuestPhaseProgress
// 0x0008
struct FQuestPhaseProgress
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.NPCPoseSet
// 0x0018
struct FNPCPoseSet
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SeIdManage
// 0x0008
struct FSeIdManage
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.SndTestStruct
// 0x0038
struct FSndTestStruct
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.ATStarScaleFinishAreaTable
// 0x0010 (0x0018 - 0x0008)
struct FATStarScaleFinishAreaTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATStarScaleFinishTableRow
// 0x0018 (0x0020 - 0x0008)
struct FATStarScaleFinishTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SubQuestBgmCondition
// 0x0010 (0x0018 - 0x0008)
struct FSubQuestBgmCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SubQuestStartCondition
// 0x0010 (0x0018 - 0x0008)
struct FSubQuestStartCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SubQuestStartMontageTableRow
// 0x0028 (0x0030 - 0x0008)
struct FSubQuestStartMontageTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.SubQuestStartUITableRow
// 0x0010 (0x0018 - 0x0008)
struct FSubQuestStartUITableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATSupportCharacterTalkDataTable
// 0x0018 (0x0020 - 0x0008)
struct FATSupportCharacterTalkDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SupportTeamBonusParam
// 0x0060 (0x0068 - 0x0008)
struct FSupportTeamBonusParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.ATSurfaceName
// 0x0050
struct FATSurfaceName
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.AttackRangeEffectInfo
// 0x0048
struct FAttackRangeEffectInfo
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AT.AttackRangeEffectSetting
// 0x0038 (0x0040 - 0x0008)
struct FAttackRangeEffectSetting : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.SimpleTalkParam
// 0x0088 (0x0090 - 0x0008)
struct FSimpleTalkParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct AT.SelectionItemParam
// 0x00B0 (0x00B8 - 0x0008)
struct FSelectionItemParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0008(0x00B0) MISSED OFFSET
};

// ScriptStruct AT.ActionCommandParam
// 0x00C0 (0x00C8 - 0x0008)
struct FActionCommandParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0008(0x00C0) MISSED OFFSET
};

// ScriptStruct AT.BalloonTalkParam
// 0x0050 (0x0058 - 0x0008)
struct FBalloonTalkParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct AT.NpcTalkMinigameParam
// 0x0040 (0x0048 - 0x0008)
struct FNpcTalkMinigameParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.NpcTalkEventParameter
// 0x0008 (0x0010 - 0x0008)
struct FNpcTalkEventParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.NpcTalkParam
// 0x00E8 (0x00F0 - 0x0008)
struct FNpcTalkParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0008(0x00E8) MISSED OFFSET
};

// ScriptStruct AT.LipSyncParam
// 0x0008 (0x0010 - 0x0008)
struct FLipSyncParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.TalkParticleParam
// 0x0040 (0x0048 - 0x0008)
struct FTalkParticleParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.CameraAnimParam
// 0x0008 (0x0010 - 0x0008)
struct FCameraAnimParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.TalkMontageParam
// 0x0048 (0x0050 - 0x0008)
struct FTalkMontageParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.ComponentActiveInfo
// 0x0008 (0x0010 - 0x0008)
struct FComponentActiveInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.TickControllerInfo
// 0x0030 (0x0038 - 0x0008)
struct FTickControllerInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ActiveStateInfo
// 0x0018 (0x0020 - 0x0008)
struct FActiveStateInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.TickLODInfo
// 0x0020 (0x0028 - 0x0008)
struct FTickLODInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ATCharacterInfo
// 0x0010
struct FATCharacterInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.CreateCaptureSetParameter
// 0x00A0
struct FCreateCaptureSetParameter
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct AT.CaptureSets
// 0x0010
struct FCaptureSets
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SubTitleInfo
// 0x0020
struct FSubTitleInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ATWindRoadCameraParam
// 0x0001
struct FATWindRoadCameraParam
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AT.ATWindRoadEnterParam
// 0x0001
struct FATWindRoadEnterParam
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AT.ATWindRoadParam
// 0x0028
struct FATWindRoadParam
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ATWindRoadPointParam
// 0x0024
struct FATWindRoadPointParam
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct AT.ATWindRoadPointParamCamera
// 0x0018
struct FATWindRoadPointParamCamera
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ATWindRoadPointParamChangeSpeed
// 0x000C
struct FATWindRoadPointParamChangeSpeed
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.WindRoadParamTableType
// 0x0040 (0x0048 - 0x0008)
struct FWindRoadParamTableType : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.ATWindRoadPointParamBlur
// 0x0018
struct FATWindRoadPointParamBlur
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.RareWindRoadAppearanceDataTableType
// 0x0010 (0x0018 - 0x0008)
struct FRareWindRoadAppearanceDataTableType : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATWindRoadAppearanceInfo
// 0x0058
struct FATWindRoadAppearanceInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct AT.ATWorldBlockingVolumes
// 0x0010
struct FATWorldBlockingVolumes
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ATWorldMapMovementData
// 0x0060
struct FATWorldMapMovementData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct AT.ATProgressAreaMoveList
// 0x0018 (0x0020 - 0x0008)
struct FATProgressAreaMoveList : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.AuraSearchItemEffectParam
// 0x0010 (0x0018 - 0x0008)
struct FAuraSearchItemEffectParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.BaseballMobTable
// 0x0008 (0x0010 - 0x0008)
struct FBaseballMobTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.BaseballGameCutinTable
// 0x0018 (0x0020 - 0x0008)
struct FBaseballGameCutinTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.BaseballGameBallTypeTable
// 0x0048 (0x0050 - 0x0008)
struct FBaseballGameBallTypeTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.BaseballGameBallTable
// 0x0010 (0x0018 - 0x0008)
struct FBaseballGameBallTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.BaseballGamePitcherTable
// 0x00C8 (0x00D0 - 0x0008)
struct FBaseballGamePitcherTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0008(0x00C8) MISSED OFFSET
};

// ScriptStruct AT.BaseballGameCameraTable
// 0x0018 (0x0020 - 0x0008)
struct FBaseballGameCameraTable : public FTableRowBase
{
	float                                              FOV;                                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct AT.BaseballGameHitTimingTable
// 0x0010 (0x0018 - 0x0008)
struct FBaseballGameHitTimingTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.BaseballGameBattlePowerTable
// 0x0008 (0x0010 - 0x0008)
struct FBaseballGameBattlePowerTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.BaseballGameConstantTable
// 0x0008 (0x0010 - 0x0008)
struct FBaseballGameConstantTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.BattleBarrierParam
// 0x0014
struct FBattleBarrierParam
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct AT.BattleBarrierParamBox
// 0x0010
struct FBattleBarrierParamBox
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.BlowTargetPointInfo
// 0x0028
struct FBlowTargetPointInfo
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0014(0x0014) MISSED OFFSET
};

// ScriptStruct AT.BonfireFacialTable
// 0x0030 (0x0038 - 0x0008)
struct FBonfireFacialTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.AnimationPathSet
// 0x0040
struct FAnimationPathSet
{
	struct FString                                     Paths[0x4];                                               // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct AT.DestroyedMeshData
// 0x0040
struct FDestroyedMeshData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.BuffTableRow
// 0x0048 (0x0050 - 0x0008)
struct FBuffTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.CameraTableRow
// 0x0030 (0x0038 - 0x0008)
struct FCameraTableRow : public FTableRowBase
{
	float                                              FOV;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x000C(0x002C) MISSED OFFSET
};

// ScriptStruct AT.CarGroupInfo
// 0x0020 (0x0028 - 0x0008)
struct FCarGroupInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CarParameterGlobal
// 0x00D0 (0x00D8 - 0x0008)
struct FCarParameterGlobal : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0008(0x00D0) MISSED OFFSET
};

// ScriptStruct AT.CarParameterArea
// 0x0018 (0x0020 - 0x0008)
struct FCarParameterArea : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.NpcFightingSetting
// 0x0028
struct FNpcFightingSetting
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.AuraColorInfo
// 0x0030
struct FAuraColorInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.AuraMaterialColorInfo
// 0x00E8
struct FAuraMaterialColorInfo
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct AT.AuraScaleInfo
// 0x0040
struct FAuraScaleInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.AuraScale
// 0x0008
struct FAuraScale
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CharacterAuraParamRow
// 0x00B0 (0x00B8 - 0x0008)
struct FCharacterAuraParamRow : public FTableRowBase
{
	struct FAuraScaleInfo                              Info;                                                     // 0x0008(0x0040) (Edit)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0048(0x0070) MISSED OFFSET
};

// ScriptStruct AT.CharacterDamageComponentTickFunction
// 0x0028 (0x0080 - 0x0058)
struct FCharacterDamageComponentTickFunction : public FActorComponentTickFunction
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0058(0x0028) MISSED OFFSET
};

// ScriptStruct AT.CharacterTableRow
// 0x0008 (0x0010 - 0x0008)
struct FCharacterTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CharaIconTableRow
// 0x0018 (0x0020 - 0x0008)
struct FCharaIconTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.RaceGameCamera
// 0x0010
struct FRaceGameCamera
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.CollectionRewardNotice
// 0x0010
struct FCollectionRewardNotice
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.CollectionSearchIndex
// 0x0018
struct FCollectionSearchIndex
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.CollectionInfomation
// 0x0038
struct FCollectionInfomation
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.CollectionNavigation
// 0x0030
struct FCollectionNavigation
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.CollectionPersonalIDTable
// 0x0008 (0x0010 - 0x0008)
struct FCollectionPersonalIDTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CollectionBgmIDTable
// 0x0008 (0x0010 - 0x0008)
struct FCollectionBgmIDTable : public FTableRowBase
{
	                                                   ID;                                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AT.CollectionFishIDTable
// 0x0008 (0x0010 - 0x0008)
struct FCollectionFishIDTable : public FTableRowBase
{
	                                                   ID;                                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AT.CollectionAnimalIDTable
// 0x0008 (0x0010 - 0x0008)
struct FCollectionAnimalIDTable : public FTableRowBase
{
	                                                   ID;                                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AT.CollectionCharaTypeTable
// 0x0008 (0x0010 - 0x0008)
struct FCollectionCharaTypeTable : public FTableRowBase
{
	                                                   ID;                                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AT.CollectionOpenFlag
// 0x0002
struct FCollectionOpenFlag
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct AT.AT_Timer
// 0x0020
struct FAT_Timer
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CookingCharacterMotion
// 0x0038
struct FCookingCharacterMotion
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct AT.CookingSequenceLevelName
// 0x0018 (0x0020 - 0x0008)
struct FCookingSequenceLevelName : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.CookingSequenceResourceName
// 0x0018 (0x0020 - 0x0008)
struct FCookingSequenceResourceName : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.CookEffectData
// 0x0020
struct FCookEffectData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CookFoodMeshData
// 0x0078
struct FCookFoodMeshData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct AT.CookCharacterMotion
// 0x0090
struct FCookCharacterMotion
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct AT.FullCourceItemParam
// 0x0078 (0x0080 - 0x0008)
struct FFullCourceItemParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct AT.FullCourseMealParam
// 0x0010 (0x0018 - 0x0008)
struct FFullCourseMealParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ReferenceToCookDemoAssetInstance
// 0x0008
struct FReferenceToCookDemoAssetInstance
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CookingDemoChangeFormParam
// 0x0008 (0x0010 - 0x0008)
struct FCookingDemoChangeFormParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CookingEffectOffsetConstParam
// 0x0010 (0x0018 - 0x0008)
struct FCookingEffectOffsetConstParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.CookingConstParam
// 0x0020 (0x0028 - 0x0008)
struct FCookingConstParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CourseEatUpStatus
// 0x0028 (0x0030 - 0x0008)
struct FCourseEatUpStatus : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.CookingFoodInfo
// 0x0010
struct FCookingFoodInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Num;                                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AT.CookingDecideInfo
// 0x0020
struct FCookingDecideInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.SuccessProbabilityParam
// 0x0010 (0x0018 - 0x0008)
struct FSuccessProbabilityParam : public FTableRowBase
{
	int                                                Base;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct AT.RecipeParam
// 0x00C8 (0x00D0 - 0x0008)
struct FRecipeParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0008(0x00C8) MISSED OFFSET
};

// ScriptStruct AT.IgnoreCrossTalkCompanionPoint
// 0x0010 (0x0018 - 0x0008)
struct FIgnoreCrossTalkCompanionPoint : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.GeneralCrossTalkConditionParam
// 0x0020 (0x0028 - 0x0008)
struct FGeneralCrossTalkConditionParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.CrossTalkTableRow
// 0x0078 (0x0080 - 0x0008)
struct FCrossTalkTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct AT.DamageTable
// 0x0020 (0x0028 - 0x0008)
struct FDamageTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ToogleExecutionParam
// 0x0020 (0x0028 - 0x0008)
struct FToogleExecutionParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.DebugMenuStruct
// 0x0098
struct FDebugMenuStruct
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct AT.DestructParam
// 0x0028 (0x0030 - 0x0008)
struct FDestructParam : public FTableRowBase
{
	                                                   Type;                                                     // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0009(0x0027) MISSED OFFSET
};

// ScriptStruct AT.DragonBallRecovery
// 0x0008
struct FDragonBallRecovery
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.DragonBallResetTiming
// 0x0010
struct FDragonBallResetTiming
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.WishResultInfoLog
// 0x0020
struct FWishResultInfoLog
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.WishResultInfo
// 0x0028
struct FWishResultInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.DragonBallSpawnAreaInfo
// 0x0018
struct FDragonBallSpawnAreaInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.DragonBallPlacementInfo
// 0x0028
struct FDragonBallPlacementInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.MissionParameter
// 0x0030 (0x0038 - 0x0008)
struct FMissionParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.EncountEnemyPartyListTableRow
// 0x0018 (0x0020 - 0x0008)
struct FEncountEnemyPartyListTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.EncounterEnemyTableRow
// 0x0030 (0x0038 - 0x0008)
struct FEncounterEnemyTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.EncounterHeightAreaTableRow
// 0x0008 (0x0010 - 0x0008)
struct FEncounterHeightAreaTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.EncounterMapTableRow
// 0x0040 (0x0048 - 0x0008)
struct FEncounterMapTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.AtrociousConditonInfo
// 0x0018
struct FAtrociousConditonInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.AtrociousConditionParamTable
// 0x0030 (0x0038 - 0x0008)
struct FAtrociousConditionParamTable : public FTableRowBase
{
	TArray<struct FAtrociousConditonInfo>              AtrociousConditonInfo;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct AT.AtrociousEnemyParamTable
// 0x0018 (0x0020 - 0x0008)
struct FAtrociousEnemyParamTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.EncountEnemyParamTable
// 0x00E0 (0x00E8 - 0x0008)
struct FEncountEnemyParamTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0008(0x00E0) MISSED OFFSET
};

// ScriptStruct AT.DropGroupTable
// 0x0080 (0x0088 - 0x0008)
struct FDropGroupTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

// ScriptStruct AT.EnemyPartyTable
// 0x0120 (0x0128 - 0x0008)
struct FEnemyPartyTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0008(0x0120) MISSED OFFSET
};

// ScriptStruct AT.SpawnDataTable
// 0x0040 (0x0048 - 0x0008)
struct FSpawnDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.EnemyPartyAccessTable
// 0x0008 (0x0010 - 0x0008)
struct FEnemyPartyAccessTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CharaStatusSetting
// 0x0020
struct FCharaStatusSetting
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.EncounterTableRow
// 0x0038 (0x0040 - 0x0008)
struct FEncounterTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.EncountPositionTableRow
// 0x0008 (0x0010 - 0x0008)
struct FEncountPositionTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.EnemyAppearTableRow
// 0x0018 (0x0020 - 0x0008)
struct FEnemyAppearTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.CharaPositionAdjust
// 0x0028
struct FCharaPositionAdjust
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.FieldBattleBgmTableRow
// 0x0008 (0x0010 - 0x0008)
struct FFieldBattleBgmTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.FieldDefaultBgmTableRow
// 0x0008 (0x0010 - 0x0008)
struct FFieldDefaultBgmTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.FieldDropItemTableRow
// 0x0090 (0x0098 - 0x0008)
struct FFieldDropItemTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0008(0x0090) MISSED OFFSET
};

// ScriptStruct AT.FieldItemTableRow
// 0x0080 (0x0088 - 0x0008)
struct FFieldItemTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

// ScriptStruct AT.FieldItemData
// 0x0010
struct FFieldItemData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.FishAreaSettingParam
// 0x0070
struct FFishAreaSettingParam
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AT.FishManagerParam
// 0x00B8
struct FFishManagerParam
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct AT.FishProbabilityInfo
// 0x0010 (0x0018 - 0x0008)
struct FFishProbabilityInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.FishInfo
// 0x0020 (0x0028 - 0x0008)
struct FFishInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.FishDataTable
// 0x0070 (0x0078 - 0x0008)
struct FFishDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0008(0x0070) MISSED OFFSET
};

// ScriptStruct AT.FishGetItemTable
// 0x0010 (0x0018 - 0x0008)
struct FFishGetItemTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.FishShadowTable
// 0x0048 (0x0050 - 0x0008)
struct FFishShadowTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.FishShadowSpawnTable
// 0x0098 (0x00A0 - 0x0008)
struct FFishShadowSpawnTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0008(0x0098) MISSED OFFSET
};

// ScriptStruct AT.BaitParam
// 0x0030 (0x0038 - 0x0008)
struct FBaitParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.FishModelData
// 0x0040
struct FFishModelData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.GrassTransform
// 0x0040 (0x0048 - 0x0008)
struct FGrassTransform : public FTableRowBase
{
	uint32_t                                           ID;                                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x000C(0x003C) MISSED OFFSET
};

// ScriptStruct AT.AnimClassInfo
// 0x0010
struct FAnimClassInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.IntBox
// 0x001C
struct FIntBox
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AT.IntPlane
// 0x0004 (0x0010 - 0x000C)
struct FIntPlane : public FIntVector
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AT.IntVector4_AT
// 0x0010
struct FIntVector4_AT
{
	int                                                X;                                                        // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                W;                                                        // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.InventoryItem
// 0x0010
struct FInventoryItem
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ItemGetParticleManageComponentParam
// 0x0008 (0x0010 - 0x0008)
struct FItemGetParticleManageComponentParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ShopListDataTableType
// 0x0010 (0x0018 - 0x0008)
struct FShopListDataTableType : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ItemShopDataTableType
// 0x0020 (0x0028 - 0x0008)
struct FItemShopDataTableType : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.UniqueItemInventory
// 0x0001
struct FUniqueItemInventory
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AT.ItemInventory
// 0x000C
struct FItemInventory
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.ItemInventoryDefault
// 0x0008 (0x0010 - 0x0008)
struct FItemInventoryDefault : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ItemUsageRestrictionDataTableType
// 0x0028 (0x0030 - 0x0008)
struct FItemUsageRestrictionDataTableType : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ItemMessageData
// 0x0030
struct FItemMessageData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.RewardBonusTable
// 0x0020 (0x0028 - 0x0008)
struct FRewardBonusTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.DetailTableDevelop
// 0x0028 (0x0030 - 0x0008)
struct FDetailTableDevelop : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.RecipeTableDevelop
// 0x0068 (0x0070 - 0x0008)
struct FRecipeTableDevelop : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct AT.ItemInfoParam
// 0x0038 (0x0040 - 0x0008)
struct FItemInfoParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.ItemTableRecipe
// 0x0010 (0x0050 - 0x0040)
struct FItemTableRecipe : public FItemInfoParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ItemTablePresent
// 0x0040 (0x0080 - 0x0040)
struct FItemTablePresent : public FItemInfoParam
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct AT.ItemTableMaterial
// 0x0008 (0x0048 - 0x0040)
struct FItemTableMaterial : public FItemInfoParam
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ItemTableImportant
// 0x0000 (0x0040 - 0x0040)
struct FItemTableImportant : public FItemInfoParam
{

};

// ScriptStruct AT.ItemTableHeal
// 0x0018 (0x0058 - 0x0040)
struct FItemTableHeal : public FItemInfoParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ItemTableDevelop
// 0x0008 (0x0048 - 0x0040)
struct FItemTableDevelop : public FItemInfoParam
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ItemTableChip
// 0x0020 (0x0060 - 0x0040)
struct FItemTableChip : public FItemInfoParam
{
	                                                   Type;                                                     // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0041(0x001F) MISSED OFFSET
};

// ScriptStruct AT.ItemTableBento
// 0x0010 (0x0050 - 0x0040)
struct FItemTableBento : public FItemInfoParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ItemTableBait
// 0x0010 (0x0050 - 0x0040)
struct FItemTableBait : public FItemInfoParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ItemEffectTable
// 0x0010 (0x0018 - 0x0008)
struct FItemEffectTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.AuraSearchRadialBlurParam
// 0x0018 (0x0020 - 0x0008)
struct FAuraSearchRadialBlurParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.GrassWeightBackupControl2
// 0x0010
struct FGrassWeightBackupControl2
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.GrassWeightBackupControlWrite2
// 0x0000 (0x0010 - 0x0010)
struct FGrassWeightBackupControlWrite2 : public FGrassWeightBackupControl2
{

};

// ScriptStruct AT.DirtyData
// 0x00B8
struct FDirtyData
{
	struct FIntVector4_AT                              Offset;                                                   // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0010(0x00A0) MISSED OFFSET
	float                                              Height;                                                   // 0x00B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
};

// ScriptStruct AT.LandscapeParams
// 0x0040
struct FLandscapeParams
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct AT.LeafTreeVolume
// 0x0020
struct FLeafTreeVolume
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.LipSyncAreaData
// 0x0010 (0x0018 - 0x0008)
struct FLipSyncAreaData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.TimerTalkParam
// 0x0020
struct FTimerTalkParam
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.LiveTalkParam
// 0x0018
struct FLiveTalkParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.MiniGameFinishParam
// 0x0008 (0x0010 - 0x0008)
struct FMiniGameFinishParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.MiniGameFishingSaveInfo
// 0x00A0
struct FMiniGameFishingSaveInfo
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct AT.MiniGameQuizSaveInfo
// 0x0001
struct FMiniGameQuizSaveInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AT.MiniGameBaseBallSaveInfo
// 0x00B0
struct FMiniGameBaseBallSaveInfo
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct AT.MiniGameAcquiredReward
// 0x0008
struct FMiniGameAcquiredReward
{
	uint32_t                                           ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct AT.LocalRank
// 0x0010
struct FLocalRank
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.LocalRankParam
// 0x0018
struct FLocalRankParam
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AT.MiniGameBaseballSaveDetails
// 0x0030
struct FMiniGameBaseballSaveDetails
{
	struct FString                                     CharacterName;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct AT.MiniGameRaceSaveInfo
// 0x0060
struct FMiniGameRaceSaveInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct AT.MiniGameRaceSaveOutline
// 0x00A0
struct FMiniGameRaceSaveOutline
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct AT.LocalRaceRank
// 0x0010
struct FLocalRaceRank
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.LocalRaceRankParam
// 0x0018
struct FLocalRaceRankParam
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FTimespan                                   Time;                                                     // 0x0010(0x0008) (ZeroConstructor)
};

// ScriptStruct AT.MiniGameRaceSaveDetails
// 0x0030
struct FMiniGameRaceSaveDetails
{
	struct FString                                     CharacterName;                                            // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct AT.MobLookGroup
// 0x0018 (0x0020 - 0x0008)
struct FMobLookGroup : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.AnimalParameterTable
// 0x00A8 (0x00B0 - 0x0008)
struct FAnimalParameterTable : public FTableRowBase
{
	                                                   ID;                                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA7];                                      // 0x0009(0x00A7) MISSED OFFSET
};

// ScriptStruct AT.NpcLoadMontageTable
// 0x0010 (0x0018 - 0x0008)
struct FNpcLoadMontageTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.NpcMultipurposeTable
// 0x0050 (0x0058 - 0x0008)
struct FNpcMultipurposeTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct AT.NpcMultipurposeInfo
// 0x0018
struct FNpcMultipurposeInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SetTownMobParameter
// 0x0020 (0x0028 - 0x0008)
struct FSetTownMobParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.MobParameterInfo
// 0x0018
struct FMobParameterInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.AnimalData
// 0x0020 (0x0028 - 0x0008)
struct FAnimalData : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct AT.NpcAreaPreset
// 0x0018 (0x0020 - 0x0008)
struct FNpcAreaPreset : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.NpcAreaSetInfo
// 0x0010
struct FNpcAreaSetInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.NpcPreset
// 0x0018 (0x0020 - 0x0008)
struct FNpcPreset : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.NpcParts
// 0x0070
struct FNpcParts
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct AT.CustomColorInfo
// 0x0040
struct FCustomColorInfo
{
	struct FLinearColor                                ColorA;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorB;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorG;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorR;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.NpcSoundInfo
// 0x0010
struct FNpcSoundInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.NpcVarietyInfo
// 0x002C
struct FNpcVarietyInfo
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct AT.NpcMontageInfo
// 0x0170
struct FNpcMontageInfo
{
	unsigned char                                      UnknownData00[0x170];                                     // 0x0000(0x0170) MISSED OFFSET
};

// ScriptStruct AT.NpcVariety_Fly
// 0x0018
struct FNpcVariety_Fly
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.NpcActionEventInfo
// 0x0014
struct FNpcActionEventInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct AT.AnimalStatusData
// 0x0020 (0x0028 - 0x0008)
struct FAnimalStatusData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.AnimalActionData
// 0x0010 (0x0018 - 0x0008)
struct FAnimalActionData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.AnimalActionTbl
// 0x0008 (0x0020 - 0x0018)
struct FAnimalActionTbl : public FAnimalActionData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct AT.NpcTickLODInfo
// 0x001C
struct FNpcTickLODInfo
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AT.MobActionTbl
// 0x0008 (0x0010 - 0x0008)
struct FMobActionTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.NpcFightingPowerParam
// 0x0030 (0x0038 - 0x0008)
struct FNpcFightingPowerParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.MobMoveDataTbl
// 0x0018 (0x0020 - 0x0008)
struct FMobMoveDataTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.MobCategoryStateTbl
// 0x0010 (0x0018 - 0x0008)
struct FMobCategoryStateTbl : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.NpcSplineSpawnInfo
// 0x0010
struct FNpcSplineSpawnInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.NpcSplineInfo
// 0x0010
struct FNpcSplineInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.OptionData
// 0x0008
struct FOptionData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.OptionSampleSoundData
// 0x0008 (0x0010 - 0x0008)
struct FOptionSampleSoundData : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.PageLayoutStack
// 0x0088
struct FPageLayoutStack
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct AT.PageLayoutIndex
// 0x0008
struct FPageLayoutIndex
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.PageLayoutPair
// 0x0068
struct FPageLayoutPair
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct AT.PageLayout
// 0x0030
struct FPageLayout
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.PassiveSkillSlotReleaseTable
// 0x0010 (0x0018 - 0x0008)
struct FPassiveSkillSlotReleaseTable : public FTableRowBase
{
	                                                   Character;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0009(0x000F) MISSED OFFSET
};

// ScriptStruct AT.PassiveSkillSlotReleaseConditionsTable
// 0x0020 (0x0028 - 0x0008)
struct FPassiveSkillSlotReleaseConditionsTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.PassiveSkillTable
// 0x0060 (0x0068 - 0x0008)
struct FPassiveSkillTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.ProceduralData
// 0x0028
struct FProceduralData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.RootDebrisRemoveInfo
// 0x0020
struct FRootDebrisRemoveInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.DestructibleRegisterMeshData
// 0x0018
struct FDestructibleRegisterMeshData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.DestructibleDelayRemoveData
// 0x0018
struct FDestructibleDelayRemoveData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ProcedualLinkedActorData
// 0x0018
struct FProcedualLinkedActorData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.DecorateEntitiesTouchedDestructibleMesh
// 0x0010
struct FDecorateEntitiesTouchedDestructibleMesh
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ProgressMap
// 0x0018 (0x0020 - 0x0008)
struct FProgressMap : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.Cpl003MakohoParam
// 0x0018
struct FCpl003MakohoParam
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.Cpl024SpecialProjectileParam
// 0x0030
struct FCpl024SpecialProjectileParam
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ProjectileCpl034SkillPunishStormExplosionData
// 0x0018
struct FProjectileCpl034SkillPunishStormExplosionData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.VanishingBallAttackRangeParam
// 0x000C
struct FVanishingBallAttackRangeParam
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.EnemyKidan_Param
// 0x0018
struct FEnemyKidan_Param
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.GhostMeshInfo
// 0x0010
struct FGhostMeshInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.GhostTrailInfo
// 0x0018
struct FGhostTrailInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.RushShotOffsetParam
// 0x001C
struct FRushShotOffsetParam
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AT.RushShotProjectileParam
// 0x0030
struct FRushShotProjectileParam
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.SlashWaveLaunchPattern
// 0x0020
struct FSlashWaveLaunchPattern
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct AT.SlashWaveLaunchData
// 0x0010
struct FSlashWaveLaunchData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.PhaseTimingInfo
// 0x0010
struct FPhaseTimingInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.QuestProgressPair
// 0x0040
struct FQuestProgressPair
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct AT.AttackRangeParam
// 0x000C
struct FAttackRangeParam
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.TimemachineMenu
// 0x0038 (0x0040 - 0x0008)
struct FTimemachineMenu : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.CharacterTypeProgressSet
// 0x0020 (0x0028 - 0x0008)
struct FCharacterTypeProgressSet : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.StartingBoostBlockInfo
// 0x0010 (0x0018 - 0x0008)
struct FStartingBoostBlockInfo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SerializeMiniQuestParam
// 0x0010 (0x0018 - 0x0008)
struct FSerializeMiniQuestParam : public FTableRowBase
{
	struct FName                                       CharacterName;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CharacterAbsenceParam
// 0x0008 (0x0010 - 0x0008)
struct FCharacterAbsenceParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.CharacterPriority
// 0x0008 (0x0010 - 0x0008)
struct FCharacterPriority : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.QuestPartyOrganizeCondition
// 0x0038 (0x0040 - 0x0008)
struct FQuestPartyOrganizeCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.QuestCharacterSet
// 0x0048 (0x0050 - 0x0008)
struct FQuestCharacterSet : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct AT.QuestPartyCondition
// 0x0008 (0x0010 - 0x0008)
struct FQuestPartyCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.QuestHuntingCondition
// 0x0038 (0x0040 - 0x0008)
struct FQuestHuntingCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.QuestEventBattleTable
// 0x0030 (0x0038 - 0x0008)
struct FQuestEventBattleTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.QuestInstanceMap
// 0x0040 (0x0048 - 0x0008)
struct FQuestInstanceMap : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.ItemListWindowParam
// 0x0010 (0x0018 - 0x0008)
struct FItemListWindowParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.QuestFormChangeDisableParam
// 0x0010 (0x0018 - 0x0008)
struct FQuestFormChangeDisableParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SubQuestCostume
// 0x0030 (0x0038 - 0x0008)
struct FSubQuestCostume : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.QuestCostume
// 0x0040 (0x0048 - 0x0008)
struct FQuestCostume : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.QuestMessagePhaseParameter
// 0x0030 (0x0038 - 0x0008)
struct FQuestMessagePhaseParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.QuestCommunityParam
// 0x0020 (0x0028 - 0x0008)
struct FQuestCommunityParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.FishingPhaseCondition
// 0x0058 (0x0060 - 0x0008)
struct FFishingPhaseCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct AT.QuestRewardParamSet
// 0x0010 (0x0018 - 0x0008)
struct FQuestRewardParamSet : public FTableRowBase
{
	struct FName                                       QuestRewardParam;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct AT.QuestRewardParam
// 0x00C8 (0x00D0 - 0x0008)
struct FQuestRewardParam : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xBC];                                      // 0x0014(0x00BC) MISSED OFFSET
};

// ScriptStruct AT.QuestRewardExpCondition
// 0x0018 (0x0020 - 0x0008)
struct FQuestRewardExpCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.QuestLiveTalkParam
// 0x0028 (0x0030 - 0x0008)
struct FQuestLiveTalkParam : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct AT.WindowClosedPhaseCondition
// 0x0018 (0x0020 - 0x0008)
struct FWindowClosedPhaseCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.QuestRewardPhaseCondition
// 0x0018 (0x0020 - 0x0008)
struct FQuestRewardPhaseCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.QuestBlurParameter
// 0x0040 (0x0048 - 0x0008)
struct FQuestBlurParameter : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct AT.QuestItemParam
// 0x0038 (0x0040 - 0x0008)
struct FQuestItemParam : public FTableRowBase
{
	struct FName                                       ID;                                                       // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct AT.QuestDemoParam
// 0x0038 (0x0040 - 0x0008)
struct FQuestDemoParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.ConditionalSimpleTalkSet
// 0x0020 (0x0028 - 0x0008)
struct FConditionalSimpleTalkSet : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.SpawnDragonball
// 0x0030 (0x0038 - 0x0008)
struct FSpawnDragonball : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.QuestDefeatEnemiesSet
// 0x0010 (0x0018 - 0x0008)
struct FQuestDefeatEnemiesSet : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.QuestCameraShake
// 0x0010 (0x0018 - 0x0008)
struct FQuestCameraShake : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.QuestBGM
// 0x0018 (0x0020 - 0x0008)
struct FQuestBGM : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.QuestPurposeInfo
// 0x0028
struct FQuestPurposeInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct AT.QuestActorSet
// 0x0018
struct FQuestActorSet
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.MinigamePhaseCondition
// 0x0010 (0x0018 - 0x0008)
struct FMinigamePhaseCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.TalkPhaseCondition
// 0x0028 (0x0030 - 0x0008)
struct FTalkPhaseCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.QuestWishCondition
// 0x0008 (0x0010 - 0x0008)
struct FQuestWishCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.QuestIdHashMap
// 0x0018 (0x0020 - 0x0008)
struct FQuestIdHashMap : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SubQuestRetryCondition
// 0x0050 (0x0058 - 0x0008)
struct FSubQuestRetryCondition : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct AT.QuestPhaseParam
// 0x0090 (0x0098 - 0x0008)
struct FQuestPhaseParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0008(0x0090) MISSED OFFSET
};

// ScriptStruct AT.QuestParam
// 0x00B0 (0x00B8 - 0x0008)
struct FQuestParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0008(0x00B0) MISSED OFFSET
};

// ScriptStruct AT.MapInformation
// 0x0050 (0x0058 - 0x0008)
struct FMapInformation : public FTableRowBase
{
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0018(0x0040) MISSED OFFSET
};

// ScriptStruct AT.RaceGameConstParam
// 0x0008 (0x0010 - 0x0008)
struct FRaceGameConstParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.RaceGameLoadLevelName
// 0x0010 (0x0018 - 0x0008)
struct FRaceGameLoadLevelName : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.BreakableObjectReactionVoiceParam
// 0x0010 (0x0018 - 0x0008)
struct FBreakableObjectReactionVoiceParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.FishingReactionVoiceParam
// 0x0028 (0x0030 - 0x0008)
struct FFishingReactionVoiceParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ReactionVoiceParam
// 0x0010 (0x0018 - 0x0008)
struct FReactionVoiceParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ResultBonusDataTable
// 0x00C0 (0x00C8 - 0x0008)
struct FResultBonusDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0008(0x00C0) MISSED OFFSET
};

// ScriptStruct AT.ExperienceReplay
// 0x0010
struct FExperienceReplay
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.RankConditions
// 0x0006
struct FRankConditions
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) MISSED OFFSET
};

// ScriptStruct AT.ExperienceBonus
// 0x000C
struct FExperienceBonus
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.EvaluationNum
// 0x0018
struct FEvaluationNum
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.RideConstParam
// 0x0008 (0x0010 - 0x0008)
struct FRideConstParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.RideExclusion
// 0x0028 (0x0030 - 0x0008)
struct FRideExclusion : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.RidingStatus
// 0x0260
struct FRidingStatus
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Exp;                                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x258];                                     // 0x0008(0x0258) MISSED OFFSET
};

// ScriptStruct AT.RootMenuInvalidTableRow
// 0x0020 (0x0028 - 0x0008)
struct FRootMenuInvalidTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ShopInfoSaveData
// 0x0023
struct FShopInfoSaveData
{
	unsigned char                                      UnknownData00[0x23];                                      // 0x0000(0x0023) MISSED OFFSET
};

// ScriptStruct AT.SkillDataTable
// 0x0060 (0x0068 - 0x0008)
struct FSkillDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.SkillPaletteDataTable
// 0x0120 (0x0128 - 0x0008)
struct FSkillPaletteDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0008(0x0120) MISSED OFFSET
};

// ScriptStruct AT.SkillSaveInfo
// 0x0178
struct FSkillSaveInfo
{
	unsigned char                                      UnknownData00[0x178];                                     // 0x0000(0x0178) MISSED OFFSET
};

// ScriptStruct AT.SkillSparkingDataTable
// 0x0060 (0x0068 - 0x0008)
struct FSkillSparkingDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0008(0x0060) MISSED OFFSET
};

// ScriptStruct AT.SkillSparkingVariationInfo
// 0x0004
struct FSkillSparkingVariationInfo
{
	unsigned char                                      Normal[0x2];                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
};

// ScriptStruct AT.SkillTreeDataTable
// 0x0070 (0x0078 - 0x0008)
struct FSkillTreeDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0008(0x0070) MISSED OFFSET
};

// ScriptStruct AT.SoundDebugStruct
// 0x0018
struct FSoundDebugStruct
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SpawnerFruitParamTableRow
// 0x0010 (0x0018 - 0x0008)
struct FSpawnerFruitParamTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.FruitRadiusSetting
// 0x0018
struct FFruitRadiusSetting
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SpawnerItemData
// 0x0050
struct FSpawnerItemData
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct AT.MineralSpawnConfirmedData
// 0x0008
struct FMineralSpawnConfirmedData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.MineralSpawnItemRateTableRow
// 0x0010 (0x0018 - 0x0008)
struct FMineralSpawnItemRateTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.MineralSpawnNumLotTableRow
// 0x0008 (0x0010 - 0x0008)
struct FMineralSpawnNumLotTableRow : public FTableRowBase
{
	int                                                Num;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AT.SubQuestCompleteMontageTableRow
// 0x0010 (0x0018 - 0x0008)
struct FSubQuestCompleteMontageTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.SubQuestCompleteUITableRow
// 0x0068 (0x0070 - 0x0008)
struct FSubQuestCompleteUITableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct AT.SupportActionLotTableRow
// 0x0018 (0x0020 - 0x0008)
struct FSupportActionLotTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SupportActionLotParam
// 0x0008
struct FSupportActionLotParam
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.RequestData
// 0x0018
struct FRequestData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.CheckHitValid
// 0x0090
struct FCheckHitValid
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct AT.HitProceduralComponent
// 0x0018
struct FHitProceduralComponent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.HitPhotonHistory
// 0x001C
struct FHitPhotonHistory
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecorateFadeOutInfo
// 0x0008
struct FTerrainDecorateFadeOutInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecoratePhotonInfo
// 0x0008
struct FTerrainDecoratePhotonInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecorateEffectInfo
// 0x00E8
struct FTerrainDecorateEffectInfo
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecorateDebriInfo
// 0x00C8
struct FTerrainDecorateDebriInfo
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecorateDecalInfo
// 0x00C8
struct FTerrainDecorateDecalInfo
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0000(0x00C8) MISSED OFFSET
};

// ScriptStruct AT.UniqueTerrainDecorateResourcesRow
// 0x0340
struct FUniqueTerrainDecorateResourcesRow
{
	unsigned char                                      UnknownData00[0x340];                                     // 0x0000(0x0340) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecorateParameters
// 0x0118
struct FTerrainDecorateParameters
{
	unsigned char                                      UnknownData00[0x118];                                     // 0x0000(0x0118) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecorateResourcesLoadManualy
// 0x0220
struct FTerrainDecorateResourcesLoadManualy
{
	unsigned char                                      UnknownData00[0x220];                                     // 0x0000(0x0220) MISSED OFFSET
};

// ScriptStruct AT.DebriMeshAssetPath
// 0x0030
struct FDebriMeshAssetPath
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct AT.GeneralTerrainDecorateResourcesRow
// 0x0168
struct FGeneralTerrainDecorateResourcesRow
{
	unsigned char                                      UnknownData00[0x168];                                     // 0x0000(0x0168) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecorateEffectColorMultiByAreaTebleRow
// 0x0010
struct FTerrainDecorateEffectColorMultiByAreaTebleRow
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.TerrainDecorateEffectColorMultiByArea
// 0x0048
struct FTerrainDecorateEffectColorMultiByArea
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct AT.AreaSurfacesData
// 0x0010
struct FAreaSurfacesData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.TimeOrbAppearanceParam
// 0x0008 (0x0010 - 0x0008)
struct FTimeOrbAppearanceParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct AT.TPSSkillViewCancelDataTable
// 0x0010 (0x0018 - 0x0008)
struct FTPSSkillViewCancelDataTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.TreasureAccessPointSaveTable
// 0x0028 (0x0030 - 0x0008)
struct FTreasureAccessPointSaveTable : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.DMedalTakenData
// 0x0008
struct FDMedalTakenData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ATRenderingPage
// 0x0018
struct FATRenderingPage
{
	                                                   State;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData01[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct AT.ATWearEffectColor
// 0x0010
struct FATWearEffectColor
{
	float                                              R;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct AT.ATWearEffectColorTable
// 0x0040 (0x0048 - 0x0008)
struct FATWearEffectColorTable : public FTableRowBase
{
	struct FATWearEffectColor                          BaseColor;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ATOutlineColor
// 0x000C
struct FATOutlineColor
{
	float                                              R;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AT.ATFresnelColor
// 0x0014
struct FATFresnelColor
{
	float                                              R;                                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              G;                                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              B;                                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
};

// ScriptStruct AT.WMapProgress
// 0x000C
struct FWMapProgress
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksReward
// 0x0018 (0x0020 - 0x0008)
struct FZCompworksReward : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksAreaNavRate
// 0x0020 (0x0028 - 0x0008)
struct FZCompworksAreaNavRate : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksAreaNav
// 0x0020 (0x0028 - 0x0008)
struct FZCompworksAreaNav : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataFieldMemoryText
// 0x0058 (0x0060 - 0x0008)
struct FZCompworksUIDataFieldMemoryText : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataVoice
// 0x0028 (0x0030 - 0x0008)
struct FZCompworksUIDataVoice : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataDemo
// 0x0010 (0x0018 - 0x0008)
struct FZCompworksUIDataDemo : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataModelOptional
// 0x0030 (0x0038 - 0x0008)
struct FZCompworksUIDataModelOptional : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataModel
// 0x0020 (0x0028 - 0x0008)
struct FZCompworksUIDataModel : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataModelUnique
// 0x0020 (0x0048 - 0x0028)
struct FZCompworksUIDataModelUnique : public FZCompworksUIDataModel
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataModelChara
// 0x0018 (0x0040 - 0x0028)
struct FZCompworksUIDataModelChara : public FZCompworksUIDataModel
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataModelNormal
// 0x0028 (0x0050 - 0x0028)
struct FZCompworksUIDataModelNormal : public FZCompworksUIDataModel
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataCarddass
// 0x0038 (0x0040 - 0x0008)
struct FZCompworksUIDataCarddass : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksUIDataPicture
// 0x0010 (0x0018 - 0x0008)
struct FZCompworksUIDataPicture : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksParamBase
// 0x0018 (0x0020 - 0x0008)
struct FZCompworksParamBase : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksParamText
// 0x0028 (0x0048 - 0x0020)
struct FZCompworksParamText : public FZCompworksParamBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksParamBGM
// 0x0010 (0x0030 - 0x0020)
struct FZCompworksParamBGM : public FZCompworksParamBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksParamCarddass
// 0x0010 (0x0030 - 0x0020)
struct FZCompworksParamCarddass : public FZCompworksParamBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksParamDemo
// 0x0008 (0x0028 - 0x0020)
struct FZCompworksParamDemo : public FZCompworksParamBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksParamDiaLine
// 0x0028 (0x0030 - 0x0008)
struct FZCompworksParamDiaLine : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct AT.ZCompworksParamDiagram
// 0x0018 (0x0038 - 0x0020)
struct FZCompworksParamDiagram : public FZCompworksParamBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ZCW_LightControl
// 0x0010
struct FZCW_LightControl
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AT.ZCW_MeshMaterial
// 0x0018
struct FZCW_MeshMaterial
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.ZOrbInitializeParam
// 0x002C
struct FZOrbInitializeParam
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct AT.ZOrbSettingParam
// 0x0088 (0x0090 - 0x0008)
struct FZOrbSettingParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct AT.ZOrbSet
// 0x0018
struct FZOrbSet
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AT.SplineZOrbObject
// 0x0018
struct FSplineZOrbObject
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
