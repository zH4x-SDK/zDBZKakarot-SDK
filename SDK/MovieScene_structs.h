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

// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
// 0x0010
struct FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplate
// 0x0010 (0x0020 - 0x0010)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneChannel
// 0x0008
struct FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneFloatChannel
// 0x0098 (0x00A0 - 0x0008)
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0008(0x0098) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyHandleMap
// 0x0000 (0x0060 - 0x0060)
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{

};

// ScriptStruct MovieScene.MovieSceneFloatValue
// 0x001C
struct FMovieSceneFloatValue
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTangentData
// 0x0014
struct FMovieSceneTangentData
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackLabels
// 0x0010
struct FMovieSceneTrackLabels
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEditorData
// 0x00E0
struct FMovieSceneEditorData
{
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0000(0x00E0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneExpansionState
// 0x0001
struct FMovieSceneExpansionState
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTimecodeSource
// 0x0018
struct FMovieSceneTimecodeSource
{
	struct FTimecode                                   Timecode;                                                 // 0x0000(0x0014) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBinding
// 0x0030
struct FMovieSceneBinding
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBindingOverrideData
// 0x0024
struct FMovieSceneBindingOverrideData
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneObjectBindingID
// 0x0018
struct FMovieSceneObjectBindingID
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.OptionalMovieSceneBlendType
// 0x0002
struct FOptionalMovieSceneBlendType
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneBoolChannel
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneByteChannel
// 0x0090 (0x0098 - 0x0008)
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0008(0x0090) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
// 0x0038
struct FMovieSceneEvalTemplatePtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEmptyStruct
// 0x0001
struct FMovieSceneEmptyStruct
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationField
// 0x0030
struct FMovieSceneEvaluationField
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
// 0x0070
struct FMovieSceneEvaluationMetaData
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceID
// 0x0004
struct FMovieSceneSequenceID
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationKey
// 0x000C
struct FMovieSceneEvaluationKey
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
// 0x0010
struct FMovieSceneOrderedEvaluationKey
{
	struct FMovieSceneEvaluationKey                    Key;                                                      // 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackIdentifier
// 0x0004
struct FMovieSceneTrackIdentifier
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroup
// 0x0020
struct FMovieSceneEvaluationGroup
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
// 0x0008
struct FMovieSceneEvaluationFieldTrackPtr
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
// 0x0004 (0x000C - 0x0008)
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
// 0x0004
struct FMovieSceneSegmentIdentifier
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
// 0x000C
struct FMovieSceneEvaluationGroupLUTIndex
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneFrameRange
// 0x0010
struct FMovieSceneFrameRange
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationOperand
// 0x0014
struct FMovieSceneEvaluationOperand
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
// 0x02F0
struct FMovieSceneEvaluationTemplate
{
	unsigned char                                      UnknownData00[0x2F0];                                     // 0x0000(0x02F0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSectionFieldData
// 0x0060
struct FMovieSceneSubSectionFieldData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackFieldData
// 0x0060
struct FMovieSceneTrackFieldData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
// 0x00A8
struct FMovieSceneTemplateGenerationLedger
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
// 0x0004
struct FMovieSceneEvaluationTemplateSerialNumber
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
// 0x00A0
struct FMovieSceneSequenceHierarchy
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
// 0x0018
struct FMovieSceneSequenceHierarchyNode
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSequenceData
// 0x00A8
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath                             Sequence;                                                 // 0x0000(0x0018) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0018(0x0090) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceTransform
// 0x000C
struct FMovieSceneSequenceTransform
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
// 0x0018
struct FMovieSceneSequenceInstanceDataPtr
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrack
// 0x00F8
struct FMovieSceneEvaluationTrack
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
// 0x0038
struct FMovieSceneTrackImplementationPtr
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.SectionEvaluationDataTree
// 0x0060
struct FSectionEvaluationDataTree
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
// 0x0020
struct FMovieSceneEvaluationTrackSegments
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSegment
// 0x0058
struct FMovieSceneSegment
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0000(0x0058) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSubSectionData
// 0x001C
struct FMovieSceneSubSectionData
{
	TWeakObjectPtr<class UMovieSceneSubSection>        Section;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0008(0x0014) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
// 0x0300
struct FMovieSceneRootEvaluationTemplateInstance
{
	unsigned char                                      UnknownData00[0x300];                                     // 0x0000(0x0300) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneIntegerChannel
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyStruct
// 0x0008
struct FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
// 0x0020 (0x0028 - 0x0008)
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
	struct FFrameNumber                                Time;                                                     // 0x0008(0x0004) (Edit)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x000C(0x001C) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePossessable
// 0x0048
struct FMovieScenePossessable
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieScenePropertySectionData
// 0x0028
struct FMovieScenePropertySectionData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneEasingSettings
// 0x0038
struct FMovieSceneEasingSettings
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
// 0x0002
struct FMovieSceneSectionEvalOptions
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSectionParameters
// 0x0018
struct FMovieSceneSectionParameters
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct MovieScene.SectionEvaluationData
// 0x000C
struct FSectionEvaluationData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
// 0x0008
struct FMovieSceneSequenceInstanceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
// 0x0040
struct FMovieSceneSequencePlaybackSettings
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneSpawnable
// 0x0090
struct FMovieSceneSpawnable
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
// 0x0000 (0x0020 - 0x0020)
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{

};

// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
// 0x0004
struct FMovieSceneTrackEvalOptions
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MovieScene.MovieSceneTrackImplementation
// 0x0000 (0x0010 - 0x0010)
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
