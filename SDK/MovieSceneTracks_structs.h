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

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneStringChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0008(0x0098) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0020(0x0030) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x00C0 (0x00E0 - 0x0020)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0020(0x00C0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// 0x0004
struct FMovieSceneTransformMask
{
	uint32_t                                           Mask;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0040 (0x0048 - 0x0008)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0014(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0014(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0018(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
// 0x0650 (0x0670 - 0x0020)
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x650];                                     // 0x0020(0x0650) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformTemplateData
// 0x0650
struct FMovieScene3DTransformTemplateData
{
	unsigned char                                      UnknownData00[0x650];                                     // 0x0000(0x0650) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneActorReferenceData : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0008(0x0098) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// 0x0018
struct FMovieSceneActorReferenceKey
{
	struct FMovieSceneObjectBindingID                  Object;                                                   // 0x0000(0x0018) (Edit)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x00C8 (0x00E8 - 0x0020)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0020(0x00C8) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0198 (0x01B8 - 0x0020)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x198];                                     // 0x0020(0x0198) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
// 0x0198
struct FMovieSceneAudioSectionTemplateData
{
	unsigned char                                      UnknownData00[0x198];                                     // 0x0000(0x0198) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
struct FMovieSceneCameraAnimSectionData
{
	class UCameraAnim*                                 CameraAnim;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000 (0x0020 - 0x0020)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0020
struct FMovieSceneCameraShakeSectionData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0060 (0x0080 - 0x0020)
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0020(0x0060) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0030 (0x0038 - 0x0008)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FFrameNumber                                Time;                                                     // 0x0018(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x001C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x288];                                     // 0x0048(0x0288) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// 0x0008
struct FMovieSceneEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// 0x0080 (0x0088 - 0x0008)
struct FMovieSceneEventChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0080 (0x0088 - 0x0008)
struct FMovieSceneEventSectionData : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x80];                                      // 0x0008(0x0080) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x0030
struct FEventPayload
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0028
struct FMovieSceneEventParameters
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTemplateBase
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneEventTemplateBase : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventRepeaterTemplate
// 0x0008 (0x0040 - 0x0038)
struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerTemplate
// 0x0020 (0x0058 - 0x0038)
struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0088 (0x00C0 - 0x0038)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x00B8 (0x00D8 - 0x0020)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0020(0x00B8) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	                                                   Visibility;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0021(0x0017) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0020(0x0030) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x0288
struct FColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x280];                                     // 0x0008(0x0280) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x01E8
struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0008(0x01E0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x00A8
struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0008(0x00A0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
// 0x0008 (0x0058 - 0x0050)
struct FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0058 - 0x0050)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0050 - 0x0050)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// 0x0000 (0x0098 - 0x0098)
struct FMovieSceneParticleChannel : public FMovieSceneByteChannel
{

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0098 (0x00B8 - 0x0020)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0020(0x0098) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEulerTransformPropertySectionTemplate
// 0x0650 (0x0698 - 0x0048)
struct FMovieSceneEulerTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x650];                                     // 0x0048(0x0650) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
// 0x0650 (0x0698 - 0x0048)
struct FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x650];                                     // 0x0048(0x0650) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x0288 (0x02D0 - 0x0048)
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x288];                                     // 0x0048(0x0288) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x00A0 (0x00E8 - 0x0048)
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	struct FMovieSceneStringChannel                    StringCurve;                                              // 0x0048(0x00A0)
};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0048(0x0098) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0048(0x0098) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0098 (0x00E0 - 0x0048)
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0048(0x0098) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x00A8 (0x00F0 - 0x0048)
struct FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0048(0x00A8) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0090 (0x00D8 - 0x0048)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0048(0x0090) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x00C8
struct FMovieSceneSkeletalAnimationParams
{
	class UAnimSequenceBase*                           Animation;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0008(0x00C0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x00D0 (0x00F0 - 0x0020)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0020(0x00D0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x00D0 - 0x00C8)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x00A0 (0x00C0 - 0x0020)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0020(0x00A0) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0020(0x0090) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0020 (0x0028 - 0x0008)
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0018 (0x0040 - 0x0028)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector4                                    Vector;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0038 - 0x0028)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector                                     Vector;                                                   // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0030 - 0x0028)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0000 (0x00D8 - 0x00D8)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
