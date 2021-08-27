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

// ScriptStruct ATSpecialTrack.ATMovieSceneCharaIntroductionSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneCharaIntroductionSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.MovieSceneDirectionSectionData
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneDirectionSectionData : public FMovieSceneChannel
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0008(0x0088) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.DirectionKey
// 0x0008
struct FDirectionKey
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneDirectionSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FATMovieSceneDirectionSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0020(0x0090) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneFadeSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FATMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneForcedLodSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FATMovieSceneForcedLodSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneLipSyncSectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FATMovieSceneLipSyncSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0020(0x0018) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.DemoLocationInfo
// 0x0018
struct FDemoLocationInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneLocationSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FATMovieSceneLocationSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0020(0x0028) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneMovieSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FATMovieSceneMovieSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneNearClipSectionTemplate
// 0x00A0 (0x00C0 - 0x0020)
struct FATMovieSceneNearClipSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x0020(0x00A0)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewDetailData
// 0x0020
struct FATMovieSceneNextPreviewDetailData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewTitleData
// 0x0010
struct FATMovieSceneNextPreviewTitleData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewSectionTemplate
// 0x0048 (0x0068 - 0x0020)
struct FATMovieSceneNextPreviewSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0020(0x0048) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneQuestMainLogoSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FATMovieSceneQuestMainLogoSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.SoundVoiceOptionData
// 0x0002
struct FSoundVoiceOptionData
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.SoundBgmOptionData
// 0x0008
struct FSoundBgmOptionData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.SoundSeOptionData
// 0x000C
struct FSoundSeOptionData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.DemoSoundInfo
// 0x0018
struct FDemoSoundInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneSoundSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneSoundSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneSubtitleSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneSubtitleSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneTelopSectionTemplate
// 0x0058 (0x0078 - 0x0020)
struct FATMovieSceneTelopSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
