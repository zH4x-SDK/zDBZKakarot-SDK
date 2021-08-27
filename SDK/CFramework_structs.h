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

// ScriptStruct CFramework.DebugMenuNumericParam
// 0x0010
struct FDebugMenuNumericParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct CFramework.CFCtrlSubLevelInfoBySceneDataRow
// 0x0018 (0x0020 - 0x0008)
struct FCFCtrlSubLevelInfoBySceneDataRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct CFramework.CFKeyConfigAssign
// 0x0038
struct FCFKeyConfigAssign
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct CFramework.CFIconArt
// 0x01B0
struct FCFIconArt
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0010(0x01A0) MISSED OFFSET
};

// ScriptStruct CFramework.CFExtendRichTextSpanClassTableRow
// 0x0028 (0x0030 - 0x0008)
struct FCFExtendRichTextSpanClassTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct CFramework.CFRegionDependenceLangTableRow
// 0x0020 (0x0028 - 0x0008)
struct FCFRegionDependenceLangTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct CFramework.CFGameSpeedExec
// 0x0010
struct FCFGameSpeedExec
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct CFramework.CFGameSpeedApplyActorInfo
// 0x0024
struct FCFGameSpeedApplyActorInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        Pawn;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0010(0x0014) MISSED OFFSET
};

// ScriptStruct CFramework.CFGameSpeedKindParam
// 0x000C
struct FCFGameSpeedKindParam
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct CFramework.CFLevelLoadingPack
// 0x0010
struct FCFLevelLoadingPack
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct CFramework.CFReplaceItemTextInfo
// 0x0060
struct FCFReplaceItemTextInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct CFramework.CFNounParamTableRow
// 0x0080 (0x0088 - 0x0008)
struct FCFNounParamTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

// ScriptStruct CFramework.CFMessageTableRow
// 0x0040 (0x0048 - 0x0008)
struct FCFMessageTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct CFramework.CFParticleSystemData
// 0x0018
struct FCFParticleSystemData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct CFramework.CFParticleDataBase
// 0x0018
struct FCFParticleDataBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct CFramework.CFParticleData
// 0x0028 (0x0040 - 0x0018)
struct FCFParticleData : public FCFParticleDataBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0018(0x0028) MISSED OFFSET
};

// ScriptStruct CFramework.CFPauseExec
// 0x0008
struct FCFPauseExec
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CFramework.CFPausePresetHeader
// 0x0004
struct FCFPausePresetHeader
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct CFramework.CFPauseApplyActorInfo
// 0x002C
struct FCFPauseApplyActorInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        Pawn;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0010(0x001C) MISSED OFFSET
};

// ScriptStruct CFramework.CFPauseKindParam
// 0x0008
struct FCFPauseKindParam
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CFramework.CFMoveSolverData
// 0x0018
struct FCFMoveSolverData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct CFramework.CFRegistFontTextData
// 0x0018 (0x0020 - 0x0008)
struct FCFRegistFontTextData : public FTableRowBase
{
	struct FText                                       Text;                                                     // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
};

// ScriptStruct CFramework.TestAcbHnWork
// 0x0008
struct FTestAcbHnWork
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CFramework.CFRangedFloat
// 0x0008
struct FCFRangedFloat
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct CFramework.CFDataTableFloat
// 0x0008 (0x0010 - 0x0008)
struct FCFDataTableFloat : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct CFramework.CFInputAssignMappingParam
// 0x0030 (0x0038 - 0x0008)
struct FCFInputAssignMappingParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct CFramework.CFKeyResourceMapping
// 0x0008
struct FCFKeyResourceMapping
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CFramework.CFKeyboardMappingParam
// 0x0020 (0x0028 - 0x0008)
struct FCFKeyboardMappingParam : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct CFramework.CFUIUserWidgetAnimationCacheControlData
// 0x0020
struct FCFUIUserWidgetAnimationCacheControlData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct CFramework.CFPunctuationTableRow
// 0x0038 (0x0040 - 0x0008)
struct FCFPunctuationTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct CFramework.CFUIWidgetPathAnimationController
// 0x0040
struct FCFUIWidgetPathAnimationController
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct CFramework.CFUIWidgetPathAnimationParam
// 0x0028
struct FCFUIWidgetPathAnimationParam
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct CFramework.CFUITagReplaceInfo
// 0x0020
struct FCFUITagReplaceInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct CFramework.CFUIRubyInfo
// 0x0040
struct FCFUIRubyInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
