#pragma once

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

// Enum ATSpecialTrack.ESECTION_SE_TYPE
enum class ATSpecialTrack_ESECTION_SE_TYPE : uint8_t
{
	ESECTION_SE_TYPE__USE_COMMON_SE = 0,
	ESECTION_SE_TYPE__USE_FIELD_SE = 1,
	ESECTION_SE_TYPE__USE_BATTLE_SE = 2,
	ESECTION_SE_TYPE__USE_MINIGAME_SE = 3,
	ESECTION_SE_TYPE__USE_AMBIENT_SE = 4,
	ESECTION_SE_TYPE__ESE_TYPE_MAX = 5,
	ESECTION_SE_TYPE__ESECTION_SE_MAX = 6,

};

// Enum ATSpecialTrack.ESECTION_CMN_SE_TYPE
enum class ATSpecialTrack_ESECTION_CMN_SE_TYPE : uint8_t
{
	ESECTION_CMN_SE_TYPE__USE_SND_CODE = 0,
	ESECTION_CMN_SE_TYPE__USE_SND_CODE_CMN = 1,
	ESECTION_CMN_SE_TYPE__ECMNSE_TYPE_MAX = 2,
	ESECTION_CMN_SE_TYPE__ESECTION_CMN_SE_MAX = 3,

};

// Enum ATSpecialTrack.EFUNC_TYPE
enum class ATSpecialTrack_EFUNC_TYPE : uint8_t
{
	EFUNC_TYPE__FUNC_TYPE          = 0,
	EFUNC_TYPE__BGM_PLAY           = 1,
	EFUNC_TYPE__BGM_STOP           = 2,
	EFUNC_TYPE__SE_PLAY            = 3,
	EFUNC_TYPE__SE_STOP            = 4,
	EFUNC_TYPE__VOICE_PLAY         = 5,
	EFUNC_TYPE__VOLUME_MAIN        = 6,
	EFUNC_TYPE__VOLUME_BGM         = 7,
	EFUNC_TYPE__VOLUME_SE          = 8,
	EFUNC_TYPE__VOLUME_VOICE       = 9,
	EFUNC_TYPE__VOLUME_MOVIE       = 10,
	EFUNC_TYPE__EFUNC_TYPE_MAX     = 11,
	EFUNC_TYPE__EFUNC_MAX          = 12,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ATSpecialTrack.DirectionKey
// 0x0008
struct FDirectionKey
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ATSpecialTrack.MovieSceneDirectionSectionData
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneDirectionSectionData : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                     // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FDirectionKey>                       KeyValues;                                                 // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_18ZL[0x68];                                    // 0x0028(0x0068) MISSED OFFSET (PADDING)

};

// ScriptStruct ATSpecialTrack.DemoLocationInfo
// 0x0018
struct FDemoLocationInfo
{
	struct FName                                       LocationID;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2CX6[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewTitleData
// 0x0010
struct FATMovieSceneNextPreviewTitleData
{
	struct FString                                     TitleMessageId;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewDetailData
// 0x0020
struct FATMovieSceneNextPreviewDetailData
{
	struct FString                                     HeaderMessageId;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SubjectMessageId;                                          // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ATSpecialTrack.SoundSeOptionData
// 0x000C
struct FSoundSeOptionData
{
	ATSpecialTrack_ESECTION_SE_TYPE                    SeType;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESndCodeCmn                                     commonCode;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESndCodeField                                   fieldCode;                                                 // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESndCodeBattle                                  battleCode;                                                // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESndCodeMinigame                                minigameCode;                                              // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ESndCodeAmbient                                 ambientCode;                                               // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WXQB[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Pitch;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ATSpecialTrack.SoundBgmOptionData
// 0x0008
struct FSoundBgmOptionData
{
	AT_EBgmCode                                        bgmID;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QT94[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Channel;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ATSpecialTrack.SoundVoiceOptionData
// 0x0002
struct FSoundVoiceOptionData
{
	AT_EPlBattleVoice_ID                               code;                                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ECHARACTER_TYPE                                 charatype;                                                 // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneCharaIntroductionSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneCharaIntroductionSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       CharacterID;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       PopularNameID;                                             // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                                   DispPos;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneDirectionSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FATMovieSceneDirectionSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneDirectionSectionData             DirectionsData;                                            // 0x0020(0x0090) (NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneFadeSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FATMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	int                                                SectionStartTime;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SectionEndTime;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	AT_EUMG_FADE_TYPE                                  FadeType;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	AT_EUMG_FADE_COLOR                                 FadeColor;                                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bImmidiate;                                                // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               IsFirstSection;                                            // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               IsNeedFirstTickEvaluate;                                   // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AMYL[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneForcedLodSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FATMovieSceneForcedLodSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ForcedLodModel;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                TargetType;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneLipSyncSectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FATMovieSceneLipSyncSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       SubtitleID;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlendSpace*                                 BlendSpaceAsset;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneLocationSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FATMovieSceneLocationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       AreaID;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	AT_EDEMO_TYPE                                      DemoType;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5ACR[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDemoLocationInfo>                   LocationInfo;                                              // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneMovieSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FATMovieSceneMovieSectionTemplate : public FMovieSceneEvalTemplate
{
	int                                                SectionStartTime;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                SectionEndTime;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneNearClipSectionTemplate
// 0x00A0 (0x00C0 - 0x0020)
struct FATMovieSceneNearClipSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel                     FloatCurve;                                                // 0x0020(0x00A0) (NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewSectionTemplate
// 0x0048 (0x0068 - 0x0020)
struct FATMovieSceneNextPreviewSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bTitle;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ADJY[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TitleMessageId;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bDetail;                                                   // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_GT1J[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DetailHeaderMessageId;                                     // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     DetailSubjectMessageId;                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneQuestMainLogoSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FATMovieSceneQuestMainLogoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.DemoSoundInfo
// 0x0018
struct FDemoSoundInfo
{
	struct FName                                       LocationID;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Position;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VNMX[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneSoundSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneSoundSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartTime;                                          // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndTime;                                            // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ATSpecialTrack_EFUNC_TYPE                          FuncType;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_SF5A[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AreaID;                                                    // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATMovieSceneSoundSection*                   MovSection;                                                // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneSubtitleSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneSubtitleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bEnableSubtitle;                                           // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7NPE[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SubtitleID;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bContinue;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bOnlyVoice;                                                // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_K8WO[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TargetCh;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct ATSpecialTrack.ATMovieSceneTelopSectionTemplate
// 0x0058 (0x0078 - 0x0020)
struct FATMovieSceneTelopSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                         // 0x0020(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                                SectionEndFrame;                                           // 0x0024(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FTelopInfo                                  TelopInfo;                                                 // 0x0028(0x0028) (NoDestructor, NativeAccessSpecifierPrivate)
	struct FTelopInfo                                  TelopInfo2;                                                // 0x0050(0x0028) (NoDestructor, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
