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
// Enums
//---------------------------------------------------------------------------

// Enum CFramework.EExportOutType
enum class CFramework_EExportOutType : uint8_t
{
	EExportOutType__TypeCSV        = 0,
	EExportOutType__TypeJSON       = 1,
	EExportOutType__TypeAll        = 2,
	EExportOutType__EExportOutType_MAX = 3,

};

// Enum CFramework.ECFRichTextIconWidgetStyleSize
enum class CFramework_ECFRichTextIconWidgetStyleSize : uint8_t
{
	ECFRichTextIconWidgetStyleSize__Small = 0,
	ECFRichTextIconWidgetStyleSize__Medium = 1,
	ECFRichTextIconWidgetStyleSize__Large = 2,
	ECFRichTextIconWidgetStyleSize__MAX = 3,

};

// Enum CFramework.ERegionType
enum class CFramework_ERegionType : uint8_t
{
	REGION_JPN                     = 0,
	REGION_ASIA                    = 1,
	REGION_NA                      = 2,
	REGION_EU                      = 3,
	REGION_NUM                     = 4,
	REGION_MAX                     = 5,

};

// Enum CFramework.ELanguageType
enum class CFramework_ELanguageType : uint8_t
{
	LANGUAGE_JAJP                  = 0,
	LANGUAGE_ENUS                  = 1,
	LANGUAGE_FRFR                  = 2,
	LANGUAGE_DEDE                  = 3,
	LANGUAGE_ESES                  = 4,
	LANGUAGE_ESMX                  = 5,
	LANGUAGE_ITIT                  = 6,
	LANGUAGE_KOKR                  = 7,
	LANGUAGE_PLPL                  = 8,
	LANGUAGE_PTBR                  = 9,
	LANGUAGE_RURU                  = 10,
	LANGUAGE_ZHCN                  = 11,
	LANGUAGE_ZHTW                  = 12,
	LANGUAGE_ARAE                  = 13,
	LANGUAGE_THTH                  = 14,
	LANGUAGE_NUM                   = 15,
	LANGUAGE_MAX                   = 16,

};

// Enum CFramework.ECFGameSpeedUID
enum class CFramework_ECFGameSpeedUID : uint8_t
{
	ECFGameSpeedUID__Dummy         = 0,
	ECFGameSpeedUID__ECFGameSpeedUID_MAX = 1,

};

// Enum CFramework.ECFReplaceItemTextType
enum class CFramework_ECFReplaceItemTextType : uint8_t
{
	ECFReplaceItemTextType__Type_MessageID = 0,
	ECFReplaceItemTextType__Type_NounID = 1,
	ECFReplaceItemTextType__Type_Text = 2,
	ECFReplaceItemTextType__Type_Integer = 3,
	ECFReplaceItemTextType__Type_Float = 4,
	ECFReplaceItemTextType__Type_MAX = 5,

};

// Enum CFramework.ECFParticleSpawnLocation
enum class CFramework_ECFParticleSpawnLocation : uint8_t
{
	ECFParticleSpawnLocation__AttachedSocket = 0,
	ECFParticleSpawnLocation__WorldSocket = 1,
	ECFParticleSpawnLocation__WorldSocketLocOnly = 2,
	ECFParticleSpawnLocation__World = 3,
	ECFParticleSpawnLocation__WorldLocOnly = 4,
	ECFParticleSpawnLocation__ECFParticleSpawnLocation_MAX = 5,

};

// Enum CFramework.ECFParticleAttachLocation
enum class CFramework_ECFParticleAttachLocation : uint8_t
{
	ECFParticleAttachLocation__Attached = 0,
	ECFParticleAttachLocation__World = 1,
	ECFParticleAttachLocation__AttachedBody = 2,
	ECFParticleAttachLocation__MAX = 3,

};

// Enum CFramework.ECFCommonParticleData
enum class CFramework_ECFCommonParticleData : uint8_t
{
	ECFCommonParticleData__None    = 0,
	ECFCommonParticleData__MAX     = 1,

};

// Enum CFramework.ECFPauseUID
enum class CFramework_ECFPauseUID : uint8_t
{
	ECFPauseUID__Dummy             = 0,
	ECFPauseUID__ECFPauseUID_MAX   = 1,

};

// Enum CFramework.EAdditionalFont
enum class CFramework_EAdditionalFont : uint8_t
{
	EAdditionalFont__Debug         = 0,
	EAdditionalFont__EAdditionalFont_MAX = 1,

};

// Enum CFramework.EAlignVertical
enum class CFramework_EAlignVertical : uint8_t
{
	EAlignVertical__Top            = 0,
	EAlignVertical__Center         = 1,
	EAlignVertical__Bottom         = 2,
	EAlignVertical__EAlignVertical_MAX = 3,

};

// Enum CFramework.EAlignHorizontal
enum class CFramework_EAlignHorizontal : uint8_t
{
	EAlignHorizontal__Left         = 0,
	EAlignHorizontal__Center       = 1,
	EAlignHorizontal__Right        = 2,
	EAlignHorizontal__EAlignHorizontal_MAX = 3,

};

// Enum CFramework.ECFKeyboardLocaleType
enum class CFramework_ECFKeyboardLocaleType : uint8_t
{
	ECFKeyboardLocaleType__JP      = 0,
	ECFKeyboardLocaleType__US      = 1,
	ECFKeyboardLocaleType__FR      = 2,
	ECFKeyboardLocaleType__DE      = 3,
	ECFKeyboardLocaleType__IT      = 4,
	ECFKeyboardLocaleType__ES      = 5,
	ECFKeyboardLocaleType__BR      = 6,
	ECFKeyboardLocaleType__CO      = 7,
	ECFKeyboardLocaleType__RU      = 8,
	ECFKeyboardLocaleType__TW      = 9,
	ECFKeyboardLocaleType__CN      = 10,
	ECFKeyboardLocaleType__KR      = 11,
	ECFKeyboardLocaleType__ECFKeyboardLocaleType_MAX = 12,

};

// Enum CFramework.ECFKeyboardLayoutType
enum class CFramework_ECFKeyboardLayoutType : uint8_t
{
	ECFKeyboardLayoutType__Qwerty  = 0,
	ECFKeyboardLayoutType__Azerty  = 1,
	ECFKeyboardLayoutType__Qwertz  = 2,
	ECFKeyboardLayoutType__ECFKeyboardLayoutType_MAX = 3,

};

// Enum CFramework.AddToViewportLayer
enum class CFramework_EAddToViewportLayer : uint8_t
{
	UMG_WIDGET_LAYER_00            = 0,
	UMG_WIDGET_LAYER_01            = 1,
	UMG_WIDGET_LAYER_02            = 2,
	UMG_WIDGET_LAYER_03            = 3,
	UMG_WIDGET_LAYER_04            = 4,
	UMG_WIDGET_LAYER_05            = 5,
	UMG_WIDGET_LAYER_06            = 6,
	UMG_WIDGET_LAYER_07            = 7,
	UMG_WIDGET_LAYER_08            = 8,
	UMG_WIDGET_LAYER_09            = 9,
	UMG_WIDGET_LAYER_DEFAULT       = 10,
	UMG_WIDGET_LAYER               = 11,
	UMG_WIDGET_LAYER01             = 12,
	UMG_WIDGET_LAYER02             = 13,
	UMG_WIDGET_LAYER03             = 14,
	UMG_WIDGET_LAYER04             = 15,
	UMG_WIDGET_LAYER05             = 16,
	UMG_WIDGET_LAYER06             = 17,
	UMG_WIDGET_LAYER07             = 18,
	UMG_WIDGET_LAYER08             = 19,
	UMG_WIDGET_LAYER09             = 20,
	UMG_WIDGET_LAYER10             = 21,
	UMG_WIDGET_LAYER11             = 22,
	UMG_WIDGET_LAYER12             = 23,
	UMG_WIDGET_LAYER13             = 24,
	UMG_WIDGET_LAYER14             = 25,
	UMG_WIDGET_LAYER_MAX           = 26,

};

// Enum CFramework.ECFUIScrollDirection
enum class CFramework_ECFUIScrollDirection : uint8_t
{
	ECFUIScrollDirection__Left     = 0,
	ECFUIScrollDirection__Right    = 1,
	ECFUIScrollDirection__ECFUIScrollDirection_MAX = 2,

};

// Enum CFramework.ECFUIScrollFadeType
enum class CFramework_ECFUIScrollFadeType : uint8_t
{
	ECFUIScrollFadeType__None      = 0,
	ECFUIScrollFadeType__Left      = 1,
	ECFUIScrollFadeType__Right     = 2,
	ECFUIScrollFadeType__Both      = 3,
	ECFUIScrollFadeType__ECFUIScrollFadeType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CFramework.CFLevelLoadingPack
// 0x0010
struct FCFLevelLoadingPack
{
	unsigned char                                      UnknownData_HP4M[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.DebugMenuNumericParam
// 0x0010
struct FDebugMenuNumericParam
{
	unsigned char                                      UnknownData_XRZ2[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFKeyConfigAssign
// 0x0038
struct FCFKeyConfigAssign
{
	struct FString                                     ConfigName;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IconName;                                                  // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DynamicAssignInputId;                                      // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XORF[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFIconArt
// 0x01B0
struct FCFIconArt
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 PLAT_P_Icon;                                               // 0x0010(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 PLAT_X_Icon;                                               // 0x0098(0x0088) (Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 PLAT_W_Icon;                                               // 0x0120(0x0088) (Edit, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TYBW[0x8];                                     // 0x01A8(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFGameSpeedApplyActorInfo
// 0x0024
struct FCFGameSpeedApplyActorInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                        Pawn;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UParticleSystemComponent>     ParticleComp;                                              // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCFTickObject>                TickObject;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_935P[0x4];                                     // 0x0020(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFGameSpeedExec
// 0x0010
struct FCFGameSpeedExec
{
	unsigned char                                      UnknownData_3GWB[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFNounParamTableRow
// 0x0080 (0x0088 - 0x0008)
struct FCFNounParamTableRow : public FTableRowBase
{
	struct FString                                     SingleNoun;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PluralNoun;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZeroNoun;                                                  // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Unique;                                                    // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gender;                                                    // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Vowel;                                                     // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1VX[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SingleIndef;                                               // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PluralIndef;                                               // 0x0058(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SingleDef;                                                 // 0x0068(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PluralDef;                                                 // 0x0078(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFMessageTableRow
// 0x0040 (0x0048 - 0x0008)
struct FCFMessageTableRow : public FTableRowBase
{
	struct FString                                     VoiceGroupID;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VoiceID;                                                   // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     speakerID;                                                 // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFParticleDataBase
// 0x0018
struct FCFParticleDataBase
{
	class UParticleSystem*                             Particle;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeSpan;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BYCF[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  Sound;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFParticleSystemData
// 0x0018
struct FCFParticleSystemData
{
	class UParticleSystemComponent*                    PSC;                                                       // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0HQY[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFParticleData
// 0x0028 (0x0040 - 0x0018)
struct FCFParticleData : public FCFParticleDataBase
{
	struct FName                                       SocketName;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpawnLocationRoot;                                        // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CFramework_ECFParticleSpawnLocation                SpawnLocationType;                                         // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8NPV[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocationOffset;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotationOffset;                                            // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              RandomAngle;                                               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFPauseApplyActorInfo
// 0x002C
struct FCFPauseApplyActorInfo
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class APawn>                        Pawn;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UActorComponent>              Comp;                                                      // 0x0010(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCFTickObject>                TickObject;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ACFPlayerController>          PlayerController;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KK6Q[0x4];                                     // 0x0028(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFPauseExec
// 0x0008
struct FCFPauseExec
{
	unsigned char                                      UnknownData_WQUG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFMoveSolverData
// 0x0018
struct FCFMoveSolverData
{
	class USceneComponent*                             SceneComp;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovementComponent*                          cmc;                                                       // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_6IT6[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.TestAcbHnWork
// 0x0008
struct FTestAcbHnWork
{
	int                                                cueNum;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               padFlag;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PR8P[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFKeyResourceMapping
// 0x0008
struct FCFKeyResourceMapping
{
	class UObject*                                     Resource;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFUIWidgetPathAnimationController
// 0x0040
struct FCFUIWidgetPathAnimationController
{
	unsigned char                                      UnknownData_RC1Y[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFUIWidgetPathAnimationParam
// 0x0028
struct FCFUIWidgetPathAnimationParam
{
	class UCurveVector*                                pathAsset;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   TransOffset;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               useRotation;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WW4I[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              angleOffset;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              pathRangeStart;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              pathRangeEnd;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                loopCount;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              playSpeed;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFUITagReplaceInfo
// 0x0020
struct FCFUITagReplaceInfo
{
	struct FString                                     TargetWord;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReplaceWord;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFUIRubyInfo
// 0x0040
struct FCFUIRubyInfo
{
	unsigned char                                      UnknownData_523C[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCFUIMultiLineTextBox*                       WL_RubyText;                                               // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFCtrlSubLevelInfoBySceneDataRow
// 0x0018 (0x0020 - 0x0008)
struct FCFCtrlSubLevelInfoBySceneDataRow : public FTableRowBase
{
	int                                                SceneKeyFrom;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SceneKeyTo;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        SceneKeyUnload;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFExtendRichTextSpanClassTableRow
// 0x0028 (0x0030 - 0x0008)
struct FCFExtendRichTextSpanClassTableRow : public FTableRowBase
{
	unsigned char                                      DialougeTextStyle[0x28];                                   // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CFramework.CFExtendRichTextSpanClassTableRow.DialougeTextStyle

};

// ScriptStruct CFramework.CFRegionDependenceLangTableRow
// 0x0020 (0x0028 - 0x0008)
struct FCFRegionDependenceLangTableRow : public FTableRowBase
{
	struct FString                                     LangCode;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DefaultLang;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFGameSpeedKindParam
// 0x000C
struct FCFGameSpeedKindParam
{
	unsigned char                                      UnknownData_W1UB[0xC];                                     // 0x0000(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFReplaceItemTextInfo
// 0x0060
struct FCFReplaceItemTextInfo
{
	CFramework_ECFReplaceItemTextType                  ReplaceType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_77MG[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReplaceMessageID;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SZZ3[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ReplaceNounID;                                             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReplaceText;                                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntegerNo;                                                 // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FloatNo;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutputOption;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFPausePresetHeader
// 0x0004
struct FCFPausePresetHeader
{
	unsigned char                                      UnknownData_GRZ4[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFPauseKindParam
// 0x0008
struct FCFPauseKindParam
{
	unsigned char                                      UnknownData_BV1M[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFRegistFontTextData
// 0x0018 (0x0020 - 0x0008)
struct FCFRegistFontTextData : public FTableRowBase
{
	struct FText                                       Text;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFRangedFloat
// 0x0008
struct FCFRangedFloat
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFDataTableFloat
// 0x0008 (0x0010 - 0x0008)
struct FCFDataTableFloat : public FTableRowBase
{
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2SYK[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFInputAssignMappingParam
// 0x0030 (0x0038 - 0x0008)
struct FCFInputAssignMappingParam : public FTableRowBase
{
	struct FKey                                        QWERTZ;                                                    // 0x0008(0x0018) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                        AZERTY;                                                    // 0x0020(0x0018) (Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFKeyboardMappingParam
// 0x0020 (0x0028 - 0x0008)
struct FCFKeyboardMappingParam : public FTableRowBase
{
	struct FString                                     DefaultKey;                                                // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MappingKey;                                                // 0x0018(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CFramework.CFUIUserWidgetAnimationCacheControlData
// 0x0020
struct FCFUIUserWidgetAnimationCacheControlData
{
	unsigned char                                      UnknownData_IDR4[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct CFramework.CFPunctuationTableRow
// 0x0038 (0x0040 - 0x0008)
struct FCFPunctuationTableRow : public FTableRowBase
{
	struct FString                                     LangCode;                                                  // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NumberOfDigits;                                            // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DecimalPointTxt;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isEnableSpaceBetweenUnit;                                  // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AQ3A[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
