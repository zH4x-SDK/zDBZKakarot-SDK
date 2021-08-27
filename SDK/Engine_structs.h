#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{

};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{

};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{

};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{

};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{

};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{

};


// Enum Engine.EComponentType
enum class EComponentType : uint8_t
{

};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{

};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{

};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{

};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{

};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{

};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{

};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{

};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{

};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{

};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{

};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{

};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{

};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{

};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{

};


// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{

};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{

};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.SplineCurves
// 0x0060
struct FSplineCurves
{
	struct FInterpCurveVector                          Position;                                                 // 0x0000(0x0018) (ZeroConstructor)
	struct FInterpCurveQuat                            Rotation;                                                 // 0x0018(0x0018) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.CachedKeyToActionInfo
// 0x0070
struct FCachedKeyToActionInfo
{
	class UPlayerInput*                                PlayerInput;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0008(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// 0x0088
struct FPrimaryAssetTypeInfo
{
	struct FName                                       PrimaryAssetType;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.ReverbSettings
// 0x0020
struct FReverbSettings
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.CustomChannelSetup
// 0x0018
struct FCustomChannelSetup
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0058
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.RichCurve
// 0x0018 (0x0070 - 0x0058)
struct FRichCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.TextureLODGroup
// 0x0050
struct FTextureLODGroup
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.HitResult
// 0x0088
struct FHitResult
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct Engine.ImportanceTexture
// 0x0050
struct FImportanceTexture
{
	struct FIntPoint                                   Size;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0008(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.UserActivity
// 0x0018
struct FUserActivity
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ExpressionInput
// 0x0010
struct FExpressionInput
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0008 (0x0018 - 0x0010)
struct FMaterialAttributesInput : public FExpressionInput
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RawDistributionVector
// 0x0050
struct FRawDistributionVector
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0038
struct FRawDistributionFloat
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintInstance
// 0x01B8
struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0000(0x01B8) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x0034
struct FRigidBodyErrorCorrection
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x0010
struct FPhysicalSurfaceName
{
	unsigned char                                      Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.BroadphaseSettings
// 0x0024
struct FBroadphaseSettings
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.KeyBind
// 0x0030
struct FKeyBind
{
	struct FKey                                        Key;                                                      // 0x0000(0x0018) (Config)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.PostProcessSettings
// 0x0630
struct FPostProcessSettings
{
	unsigned char                                      UnknownData00[0x630];                                     // 0x0000(0x0630) MISSED OFFSET
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	unsigned char                                      SoundGroup;                                               // 0x0000(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0001(0x001F) MISSED OFFSET
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0050
struct FSubsurfaceProfileStruct
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.VoiceSettings
// 0x0018
struct FVoiceSettings
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x01E0
struct FHierarchicalSimplification
{
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0000(0x01E0) MISSED OFFSET
};

// ScriptStruct Engine.FormatArgumentData
// 0x0040
struct FFormatArgumentData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.ColorMaterialInput
// 0x0010
struct FColorMaterialInput
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0010
struct FScalarMaterialInput
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.VectorMaterialInput
// 0x0010
struct FVectorMaterialInput
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0010
struct FVector2MaterialInput
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0020
struct FBranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.TickFunction
// 0x0050
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SubtitleCue
// 0x0020
struct FSubtitleCue
{
	struct FText                                       Text;                                                     // 0x0000(0x0018) (Edit)
	float                                              Time;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.TimerHandle
// 0x0008
struct FTimerHandle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BaseAttenuationSettings
// 0x00A0
struct FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0078
struct FRuntimeFloatCurve
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.KeyHandleMap
// 0x0050
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Engine.SoundAttenuationSettings
// 0x0208 (0x02A8 - 0x00A0)
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
	unsigned char                                      UnknownData00[0x208];                                     // 0x00A0(0x0208) MISSED OFFSET
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// 0x0030
struct FSoundAttenuationPluginSettings
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0028
struct FUniqueNetIdRepl
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.KeyHandleLookupTable
// 0x0060
struct FKeyHandleLookupTable
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.TableRowBase
// 0x0008
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Base
// 0x0030
struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0068
struct FExposedValueCopyRecord
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.InputScaleBiasClamp
// 0x0030
struct FInputScaleBiasClamp
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.InputRange
// 0x0008
struct FInputRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// 0x0050
struct FInputAlphaBoolBlend
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AlphaBlend
// 0x0038
struct FAlphaBlend
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PoseLinkBase
// 0x0010
struct FPoseLinkBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0010 - 0x0010)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimInstanceProxy
// 0x0590
struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x590];                                     // 0x0000(0x0590) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.BlendSampleData
// 0x0040
struct FBlendSampleData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0090
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.BoneReference
// 0x0018
struct FBoneReference
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0010 - 0x0010)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DamageEvent
// 0x0010
struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PointDamageEvent
// 0x0098 (0x00A8 - 0x0010)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x94];                                      // 0x0014(0x0094) MISSED OFFSET
};

// ScriptStruct Engine.LightingChannels
// 0x0001
struct FLightingChannels
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PerPlatformInt
// 0x0004
struct FPerPlatformInt
{
	int                                                Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerPlatformFloat
// 0x0004
struct FPerPlatformFloat
{
	float                                              Default;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BranchFilter
// 0x0010
struct FBranchFilter
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PoseSnapshot
// 0x0038
struct FPoseSnapshot
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveParam
// 0x0010
struct FAnimCurveParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0058
struct FKAggregateGeom
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.KShapeElem
// 0x0030
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.KTaperedCapsuleElem
// 0x0028 (0x0058 - 0x0030)
struct FKTaperedCapsuleElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x00A0 - 0x0030)
struct FKConvexElem : public FKShapeElem
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.KSphylElem
// 0x0020 (0x0050 - 0x0030)
struct FKSphylElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KBoxElem
// 0x0028 (0x0058 - 0x0030)
struct FKBoxElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0010 (0x0040 - 0x0030)
struct FKSphereElem : public FKShapeElem
{
	struct FVector                                     Center;                                                   // 0x0030(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimationGroupReference
// 0x0010
struct FAnimationGroupReference
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0078
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.AnimTickRecord
// 0x0048
struct FAnimTickRecord
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0018
struct FMarkerSyncAnimPosition
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x0010
struct FAnimationRecordingSettings
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ComponentSpacePose
// 0x0020
struct FComponentSpacePose
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.LocalSpacePose
// 0x0020
struct FLocalSpacePose
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.NamedTransform
// 0x0040
struct FNamedTransform
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.NamedColor
// 0x0010
struct FNamedColor
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.NamedVector
// 0x0018
struct FNamedVector
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.NamedFloat
// 0x0010
struct FNamedFloat
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SmartName
// 0x0010
struct FSmartName
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x0020
struct FAnimCurveBase
{
	struct FName                                       LastObservedName;                                         // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSmartName                                  Name;                                                     // 0x0008(0x0010)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.FloatCurve
// 0x0070 (0x0090 - 0x0020)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                               // 0x0020(0x0070)
};

// ScriptStruct Engine.TransformCurve
// 0x0450 (0x0470 - 0x0020)
struct FTransformCurve : public FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x450];                                     // 0x0020(0x0450) MISSED OFFSET
};

// ScriptStruct Engine.VectorCurve
// 0x0150 (0x0170 - 0x0020)
struct FVectorCurve : public FAnimCurveBase
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x0020(0x0150) MISSED OFFSET
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0040
struct FSlotEvaluationPose
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                                    // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.QueuedDrawDebugItem
// 0x0068
struct FQueuedDrawDebugItem
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimMontageInstance
// 0x01B0
struct FAnimMontageInstance
{
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0000(0x01B0) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                              // 0x0030(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x74];                                      // 0x0034(0x0074) MISSED OFFSET
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x00A8 (0x00D8 - 0x0030)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0030(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0048 (0x00A0 - 0x0058)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0060(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x00B0 (0x00E0 - 0x0030)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0030
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x00C8
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
	class UBlendProfile*                               BlendProfile;                                             // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0090(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInput
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_SubInput : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInstance
// 0x0098 (0x00C8 - 0x0030)
struct FAnimNode_SubInstance : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0010 (0x0040 - 0x0030)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyQueue
// 0x0070
struct FAnimNotifyQueue
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyArray
// 0x0010
struct FAnimNotifyArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyEventReference
// 0x0010
struct FAnimNotifyEventReference
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompressedSegment
// 0x0010
struct FCompressedSegment
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0180 (0x0710 - 0x0590)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x180];                                     // 0x0590(0x0180) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SingleNode
// 0x0020 (0x0050 - 0x0030)
struct FAnimNode_SingleNode : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0038 (0x0040 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.BakedAnimationState
// 0x0048
struct FBakedAnimationState
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0020
struct FBakedStateExitTransition
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncData
// 0x0020
struct FMarkerSyncData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimSyncMarker
// 0x0010
struct FAnimSyncMarker
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0038
struct FAnimNotifyTrack
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// 0x0020
struct FPrimaryAssetRulesOverride
{
	struct FPrimaryAssetId                             PrimaryAssetId;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PrimaryAssetRules
// 0x0010
struct FPrimaryAssetRules
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.AssetManagerRedirect
// 0x0020
struct FAssetManagerRedirect
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AssetMapping
// 0x0010
struct FAssetMapping
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0020
struct FAudioQualitySettings
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	struct FString                                     FilePath;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0020
struct FEditorMapPerformanceTestDefinition
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x01F0
struct FBuildPromotionTestSettings
{
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0000(0x01F0) MISSED OFFSET
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x0000(0x0150) MISSED OFFSET
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0030
struct FBlueprintEditorPromotionSettings
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0020
struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0020
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                            // 0x0000(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BPEditorBookmarkNode
// 0x0038
struct FBPEditorBookmarkNode
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0030
struct FEditedDocumentInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableDescription
// 0x00D8
struct FBPVariableDescription
{
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0000(0x00D8) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinType
// 0x0060
struct FEdGraphPinType
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x0020
struct FEdGraphTerminalType
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// 0x0001
struct FBlueprintMacroCosmeticInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CompilerNativizationOptions
// 0x0080
struct FCompilerNativizationOptions
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0050
struct FBlueprintCookedComponentInstancingData
{
	bool                                               bIsValid;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                                      // 0x0001(0x004F) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0018
struct FBlueprintComponentChangedPropertyInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x0190
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x190];                                     // 0x0000(0x0190) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.BodyInstance
// 0x0150
struct FBodyInstance
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) MISSED OFFSET
	TEnumAsByte<ECollisionChannel>                     ObjectType;                                               // 0x0006(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x149];                                     // 0x0007(0x0149) MISSED OFFSET
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0010
struct FWalkableSlopeOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.ResponseChannel
// 0x0010
struct FResponseChannel
{
	struct FName                                       Channel;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	unsigned char                                      WorldStatic;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      WorldDynamic;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Pawn;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Visibility;                                               // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Camera;                                                   // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PhysicsBody;                                              // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Vehicle;                                                  // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Destructible;                                             // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// 0x0001
struct FBookmarkBaseJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.BookmarkJumpToSettings
// 0x0000 (0x0001 - 0x0001)
struct FBookmarkJumpToSettings : public FBookmarkBaseJumpToSettings
{

};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BuilderPoly
// 0x0028
struct FBuilderPoly
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimTransitionData
// 0x0028
struct FCachedAnimTransitionData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// 0x0001
struct FBookmark2DJumpToSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// 0x0018
struct FCachedAnimAssetPlayerData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimRelevancyData
// 0x0020
struct FCachedAnimRelevancyData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateArray
// 0x0018
struct FCachedAnimStateArray
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.CachedAnimStateData
// 0x0020
struct FCachedAnimStateData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                        // 0x0000(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Y;                                                        // 0x000C(0x000C) (Edit, BlueprintVisible)
	struct FFOscillator                                Z;                                                        // 0x0018(0x000C) (Edit, BlueprintVisible)
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.MinimalViewInfo
// 0x0680
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x664];                                     // 0x001C(0x0664) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0160
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15C];                                     // 0x0004(0x015C) MISSED OFFSET
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0158
struct FRepRootMotionMontage
{
	unsigned char                                      UnknownData00[0x158];                                     // 0x0000(0x0158) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x00F8
struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FRootMotionSourceSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.FindFloorResult
// 0x0098
struct FFindFloorResult
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0014
struct FMeshUVChannelInfo
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x004C
struct FAngularDriveConstraint
{
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0000(0x004C) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintDrive
// 0x0010
struct FConstraintDrive
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x004C
struct FLinearDriveConstraint
{
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0000(0x004C) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0104
struct FConstraintProfileProperties
{
	unsigned char                                      UnknownData00[0x104];                                     // 0x0000(0x0104) MISSED OFFSET
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0014
struct FConstraintBaseParams
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.TwistConstraint
// 0x0008 (0x001C - 0x0014)
struct FTwistConstraint : public FConstraintBaseParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0014(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ConeConstraint
// 0x000C (0x0020 - 0x0014)
struct FConeConstraint : public FConstraintBaseParams
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0014(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.LinearConstraint
// 0x0008 (0x001C - 0x0014)
struct FLinearConstraint : public FConstraintBaseParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0014(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CurrentAnimations
// 0x0020
struct FCurrentAnimations
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.CurrentBlendSpace
// 0x0020
struct FCurrentBlendSpace
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x01C8
struct FRuntimeCurveLinearColor
{
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0000(0x01C8) MISSED OFFSET
};

// ScriptStruct Engine.NamedCurveValue
// 0x0010
struct FNamedCurveValue
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// 0x00A0
struct FRollbackNetStartupActorInfo
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.LevelNameAndTime
// 0x0018
struct FLevelNameAndTime
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0038
struct FDialogueContextMapping
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphPinReference
// 0x0018
struct FEdGraphPinReference
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x0100
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x100];                                     // 0x0000(0x0100) MISSED OFFSET
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x0108 - 0x0100)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FStructRedirect
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ClassRedirect
// 0x0040
struct FClassRedirect
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FGameNameRedirect
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ScreenMessageString
// 0x0030
struct FScreenMessageString
{
	uint64_t                                           Key;                                                      // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x0298
struct FWorldContext
{
	unsigned char                                      UnknownData00[0x298];                                     // 0x0000(0x0298) MISSED OFFSET
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                                // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.URL
// 0x0070
struct FURL
{
	struct FString                                     Protocol;                                                 // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0010(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.CollectionReference
// 0x0008
struct FCollectionReference
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ComponentReference
// 0x0018
struct FComponentReference
{
	class AActor*                                      OtherActor;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FRepAttachment
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0040 - 0x0010)
struct FRadialDamageEvent : public FDamageEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0010(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0030
struct FMeshBuildSettings
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0088
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotDesc
// 0x0010
struct FAnimSlotDesc
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                                // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.LocalizedSubtitle
// 0x0028
struct FLocalizedSubtitle
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0014(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                                 // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x34];                                      // 0x000C(0x0034) MISSED OFFSET
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// 0x0000 (0x00A0 - 0x00A0)
struct FForceFeedbackAttenuationSettings : public FBaseAttenuationSettings
{

};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0080
struct FForceFeedbackChannelDetails
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathResult
// 0x00B8
struct FPredictProjectilePathResult
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0000(0x00B8) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathPointData
// 0x001C
struct FPredictProjectilePathPointData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x000C(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PredictProjectilePathParams
// 0x0060
struct FPredictProjectilePathParams
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x00F0
struct FHapticFeedbackDetails_Curve
{
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode
// 0x0040
struct FClusterNode
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0018
struct FActiveHapticFeedbackEffect
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// 0x0028
struct FClusterNode_DEPRECATED
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.HLODProxyMesh
// 0x0030
struct FHLODProxyMesh
{
	TLazyObjectPtr<class ALODActor>                    LODActor;                                                 // 0x0000(0x001C) (Edit, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UStaticMesh*                                 StaticMesh;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       Key;                                                      // 0x0028(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0080
struct FComponentOverrideRecord
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x001C (0x0020 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FInputChord                                 InputChord;                                               // 0x0008(0x0020)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0040
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0070 - 0x0058)
struct FIntegralCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0018
struct FDirectorTrackCut
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.EventTrackKey
// 0x0010
struct FEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.InterpLookupPoint
// 0x0010
struct FInterpLookupPoint
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.VectorSpringState
// 0x0018
struct FVectorSpringState
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.FloatSpringState
// 0x0008
struct FFloatSpringState
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0010
struct FDrawToRenderTargetContext
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.LatentActionManager
// 0x00A0
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Total;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// 0x0028
struct FReplicatedStaticActorDestructionInfo
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x0144
struct FLevelSimplificationDetails
{
	unsigned char                                      UnknownData00[0x144];                                     // 0x0000(0x0144) MISSED OFFSET
};

// ScriptStruct Engine.MaterialProxySettings
// 0x0094
struct FMaterialProxySettings
{
	unsigned char                                      UnknownData00[0x94];                                      // 0x0000(0x0094) MISSED OFFSET
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0028
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0010 (0x0038 - 0x0028)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0028(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.ParameterGroupData
// 0x0018
struct FParameterGroupData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.CustomInput
// 0x0020
struct FCustomInput
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0020
struct FFunctionExpressionOutput
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0030
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                          // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.FontParameterValue
// 0x0030
struct FFontParameterValue
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.MaterialParameterInfo
// 0x0010
struct FMaterialParameterInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.TextureParameterValue
// 0x0028
struct FTextureParameterValue
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.VectorParameterValue
// 0x0030
struct FVectorParameterValue
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterValue
// 0x0028
struct FScalarParameterValue
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// 0x0058
struct FScalarParameterAtlasInstanceData
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0014
struct FMaterialInstanceBasePropertyOverrides
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0010
struct FMaterialTextureInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.MaterialLayersFunctions
// 0x0040
struct FMaterialLayersFunctions
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.SimplygonMaterialLODSettings
// 0x0080
struct FSimplygonMaterialLODSettings
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.OutputMaterialInfo
// 0x0058
struct FOutputMaterialInfo
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.SimplygonChannelCastingSettings
// 0x0010
struct FSimplygonChannelCastingSettings
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       ID;                                                       // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0008 (0x0020 - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.SimplygonRemeshingSettings
// 0x00A8
struct FSimplygonRemeshingSettings
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.MeshInstancingSettings
// 0x0018
struct FMeshInstancingSettings
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.MeshMergingSettings
// 0x00DC
struct FMeshMergingSettings
{
	unsigned char                                      UnknownData00[0xDC];                                      // 0x0000(0x00DC) MISSED OFFSET
};

// ScriptStruct Engine.MeshProxySettings
// 0x00E4
struct FMeshProxySettings
{
	int                                                ScreenSize;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0004(0x00E0) MISSED OFFSET
};

// ScriptStruct Engine.MeshReductionSettings
// 0x0148
struct FMeshReductionSettings
{
	unsigned char                                      UnknownData00[0x148];                                     // 0x0000(0x0148) MISSED OFFSET
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0068 - 0x0058)
struct FNameCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.NameCurveKey
// 0x0010
struct FNameCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.MovementProperties
// 0x0001
struct FMovementProperties
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.NavAgentProperties
// 0x002F (0x0030 - 0x0001)
struct FNavAgentProperties : public FMovementProperties
{
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              AgentRadius;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AgentHeight;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x000C(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.NavDataConfig
// 0x0038 (0x0068 - 0x0030)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x003C(0x002C) MISSED OFFSET
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0038
struct FNavigationLinkBase
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0068 - 0x0038)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0050 - 0x0038)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                                     // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Right;                                                    // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0014
struct FPacketSimulationSettings
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializer
// 0x00B0
struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x000C
struct FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.NodeItem
// 0x0040
struct FNodeItem
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.NuccSprParam
// 0x0002
struct FNuccSprParam
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.NuccSprParamsInSpring
// 0x0020
struct FNuccSprParamsInSpring
{
	TArray<struct FNuccSprParam>                       Param;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.NuccElpParam
// 0x0038
struct FNuccElpParam
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.NuccSppParam
// 0x0030
struct FNuccSppParam
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.nuccCdSprCtrlParam
// 0x0010
struct FnuccCdSprCtrlParam
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FParticleBurst
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                                // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<EParticleEventType>                    Type;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0018
struct FLocationBoneSocketInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.BeamTargetData
// 0x0010
struct FBeamTargetData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0160
struct FGPUSpriteResourceData
{
	unsigned char                                      UnknownData00[0x160];                                     // 0x0000(0x0160) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x02C0
struct FGPUSpriteEmitterInfo
{
	unsigned char                                      UnknownData00[0x2C0];                                     // 0x0000(0x02C0) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x0010(0x0030) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x30];                                      // 0x0040(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSysParam
// 0x0080
struct FParticleSysParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0008(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0028
struct FPhysicalAnimationData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x0030
struct FPhysicalAnimationProfile
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x0110
struct FPhysicsConstraintProfileHandle
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0000(0x0110) MISSED OFFSET
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TViewTarget
// 0x06A0
struct FTViewTarget
{
	class AActor*                                      Target;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                                      // 0x0010(0x0680) (Edit, BlueprintVisible)
	class APlayerState*                                PlayerState;                                              // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0698(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x0690
struct FCameraCacheEntry
{
	unsigned char                                      UnknownData00[0x690];                                     // 0x0000(0x0690) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// 0x0010
struct FUpdateLevelVisibilityLevelInfo
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// 0x0010
struct FUpdateLevelStreamingLevelStatus
{
	struct FName                                       PackageName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0028
struct FInputAxisKeyMapping
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0028
struct FInputActionKeyMapping
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PlayerMuteList
// 0x0038
struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.PoseDataContainer
// 0x0090
struct FPoseDataContainer
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.PoseData
// 0x0070
struct FPoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                           // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0010(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0038
struct FPreviewAttachedObjectPair
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0028
struct FPreviewMeshCollectionEntry
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Engine.PreviewMeshCollectionEntry.SkeletalMesh
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0038
struct FSpriteCategoryInfo
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransformBaseConstraint                    Constraints[0x2];                                         // 0x0008(0x0010) (Edit)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0018
struct FRigTransformConstraint
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource
// 0x00A0
struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           Priority;                                                 // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8E];                                      // 0x0012(0x008E) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// 0x0014
struct FRootMotionFinishVelocitySettings
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FRootMotionSourceStatus
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x00A4(0x002C) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0030 (0x00D0 - 0x00A0)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A0(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0020 (0x00C0 - 0x00A0)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0040 (0x00E0 - 0x00A0)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                                 // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x00A4(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0010 (0x00B0 - 0x00A0)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CameraExposureSettings
// 0x002C
struct FCameraExposureSettings
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct Engine.LensSettings
// 0x00E8
struct FLensSettings
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct Engine.LensImperfectionSettings
// 0x0020
struct FLensImperfectionSettings
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.LensBloomSettings
// 0x00C0
struct FLensBloomSettings
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0000(0x00C0) MISSED OFFSET
};

// ScriptStruct Engine.ConvolutionBloomSettings
// 0x0028
struct FConvolutionBloomSettings
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct Engine.GaussianSumBloomSettings
// 0x008C
struct FGaussianSumBloomSettings
{
	float                                              Intensity;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0004(0x0088) MISSED OFFSET
};

// ScriptStruct Engine.FilmStockSettings
// 0x0014
struct FFilmStockSettings
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// 0x0050
struct FColorGradePerRangeSettings
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.ColorGradingSettings
// 0x0150
struct FColorGradingSettings
{
	struct FColorGradePerRangeSettings                 Global;                                                   // 0x0000(0x0050) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x100];                                     // 0x0050(0x0100) MISSED OFFSET
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0018
struct FSingleAnimationPlayData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0028
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// 0x0078
struct FClothingAssetData_Legacy
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// 0x0050
struct FClothPhysicsProperties_Legacy
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x0480
struct FSkeletalMeshLODInfo
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x47C];                                     // 0x0004(0x047C) MISSED OFFSET
};

// ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// 0x0240
struct FGroupedSkeletalOptimizationSettings
{
	unsigned char                                      UnknownData00[0x240];                                     // 0x0000(0x0240) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0150
struct FSkeletalMeshOptimizationSettings
{
	unsigned char                                      UnknownData00[0x150];                                     // 0x0000(0x0150) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// 0x0058
struct FSkeletalMeshClothBuildParams
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0018
struct FBoneMirrorExport
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0170
struct FSkeletalMeshLODGroupSettings
{
	struct FPerPlatformFloat                           ScreenSize;                                               // 0x0000(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x16C];                                     // 0x0004(0x016C) MISSED OFFSET
};

// ScriptStruct Engine.BoneFilter
// 0x0010
struct FBoneFilter
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// 0x0030
struct FSkeletalMeshSamplingInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// 0x0020
struct FSkeletalMeshSamplingBuiltData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// 0x0078
struct FSkeletalMeshSamplingRegionBuiltData
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// 0x0048
struct FSkeletalMeshSamplingLODBuiltData
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// 0x0030
struct FSkeletalMeshSamplingRegion
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// 0x0010
struct FSkeletalMeshSamplingRegionBoneFilter
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// 0x0008
struct FSkeletalMeshSamplingRegionMaterialFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.VirtualBone
// 0x0018
struct FVirtualBone
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0020
struct FSkelMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// 0x0028
struct FSkelMeshSkinWeightInfo
{
	int                                                Bones[0x8];                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.SmartNameMapping
// 0x0060
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.CurveMetaData
// 0x0020
struct FCurveMetaData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveType
// 0x0002
struct FAnimCurveType
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinVolumeThreshold;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassProperties
// 0x002C
struct FSoundClassProperties
{
	float                                              Volume;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0004(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0010
struct FSoundConcurrencySettings
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SourceEffectChainEntry
// 0x0010
struct FSourceEffectChainEntry
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0018
struct FSoundClassAdjuster
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AudioEQEffect
// 0x0038
struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              FrequencyCenter0;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Gain0;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// 0x0010
struct FSoundSourceBusSendInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SoundSubmixSendInfo
// 0x0010
struct FSoundSubmixSendInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.SplinePoint
// 0x0044
struct FSplinePoint
{
	unsigned char                                      UnknownData00[0x44];                                      // 0x0000(0x0044) MISSED OFFSET
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0018
struct FMaterialRemapIndex
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.StaticMaterial
// 0x0030
struct FStaticMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: MapProperty Engine.MeshSectionInfoMap.Map
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x0478
struct FStaticMeshSourceModel
{
	unsigned char                                      UnknownData00[0x478];                                     // 0x0000(0x0478) MISSED OFFSET
};

// ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// 0x0238
struct FGroupedStaticMeshOptimizationSettings
{
	unsigned char                                      UnknownData00[0x238];                                     // 0x0000(0x0238) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x00A8
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct Engine.PaintedVertex
// 0x0030
struct FPaintedVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FVector4                                    Normal;                                                   // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.StaticParameterSet
// 0x0040
struct FStaticParameterSet
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// 0x0068
struct FStaticMaterialLayersParameter
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// 0x0030
struct FStaticTerrainLayerWeightParameter
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.StaticComponentMaskParameter
// 0x0028
struct FStaticComponentMaskParameter
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.StaticSwitchParameter
// 0x0028
struct FStaticSwitchParameter
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0078 - 0x0058)
struct FStringCurve : public FIndexedCurve
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FStringCurveKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.TexturePlatformData
// 0x0020
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x0080
struct FTextureSource
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x000C
struct FStreamingTextureBuildInfo
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTexturePrimitiveInfo
// 0x0030
struct FStreamingTexturePrimitiveInfo
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x0098
struct FTimeline
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0040
struct FTimelineLinearColorTrack
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0040
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0040
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0018
struct FTimelineEventEntry
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.TTTrackBase
// 0x0010
struct FTTTrackBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTLinearColorTrack : public FTTTrackBase
{
	class UCurveLinearColor*                           CurveLinearColor;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTVectorTrack : public FTTTrackBase
{
	class UCurveVector*                                CurveVector;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTFloatTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveFloat;                                               // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Engine.TTEventTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTEventTrack : public FTTTrackBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveInstance
// 0x0030
struct FTimeStretchCurveInstance
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurve
// 0x0028
struct FTimeStretchCurve
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.TimeStretchCurveMarker
// 0x0010
struct FTimeStretchCurveMarker
{
	float                                              Time[0x3];                                                // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Engine.TouchInputControl
// 0x0068
struct FTouchInputControl
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct Engine.HardwareCursorReference
// 0x0010
struct FHardwareCursorReference
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.VirtualTextureLayer
// 0x0004
struct FVirtualTextureLayer
{
	unsigned char                                      Format;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x0080
struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AGameStateBase*                              GameState;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDemoNetDriver*                              DemoNetDriver;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class ULevel*                                      PersistentLevel;                                          // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.StartAsyncSimulationFunction
// 0x0008 (0x0058 - 0x0050)
struct FStartAsyncSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.WorldPSCPool
// 0x0058
struct FWorldPSCPool
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct Engine.PSCPool
// 0x0038
struct FPSCPool
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.PSCPoolElem
// 0x0010
struct FPSCPoolElem
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.NetViewer
// 0x0030
struct FNetViewer
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0054
struct FLightmassWorldInfoSettings
{
	unsigned char                                      UnknownData00[0x54];                                      // 0x0000(0x0054) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
