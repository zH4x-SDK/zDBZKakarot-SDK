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

// Enum CriWareRuntime.EAtomComponentStatus
enum class CriWareRuntime_EAtomComponentStatus : uint8_t
{
	EAtomComponentStatus__Stop     = 0,
	EAtomComponentStatus__Prep     = 1,
	EAtomComponentStatus__Playing  = 2,
	EAtomComponentStatus__PlayEnd  = 3,
	EAtomComponentStatus__Error    = 4,
	EAtomComponentStatus__EAtomComponentStatus_MAX = 5,

};

// Enum CriWareRuntime.ECriFsBinderStatus
enum class CriWareRuntime_ECriFsBinderStatus : uint8_t
{
	ECriFsBinderStatus__Stop       = 0,
	ECriFsBinderStatus__Binding    = 1,
	ECriFsBinderStatus__Complete   = 2,
	ECriFsBinderStatus__Error      = 3,
	ECriFsBinderStatus__ECriFsBinderStatus_MAX = 4,

};

// Enum CriWareRuntime.EAtomCueSheetLoaderComponentStatus
enum class CriWareRuntime_EAtomCueSheetLoaderComponentStatus : uint8_t
{
	EAtomCueSheetLoaderComponentStatus__Stop = 0,
	EAtomCueSheetLoaderComponentStatus__Loading = 1,
	EAtomCueSheetLoaderComponentStatus__LoadEnd = 2,
	EAtomCueSheetLoaderComponentStatus__Serializing = 3,
	EAtomCueSheetLoaderComponentStatus__SerializeEnd = 4,
	EAtomCueSheetLoaderComponentStatus__Binding = 5,
	EAtomCueSheetLoaderComponentStatus__BindEnd = 6,
	EAtomCueSheetLoaderComponentStatus__Complete = 7,
	EAtomCueSheetLoaderComponentStatus__Error = 8,
	EAtomCueSheetLoaderComponentStatus__EAtomCueSheetLoaderComponentStatus_MAX = 9,

};

// Enum CriWareRuntime.ECriFsLoaderStatus
enum class CriWareRuntime_ECriFsLoaderStatus : uint8_t
{
	ECriFsLoaderStatus__Stop       = 0,
	ECriFsLoaderStatus__Loading    = 1,
	ECriFsLoaderStatus__Complete   = 2,
	ECriFsLoaderStatus__Error      = 3,
	ECriFsLoaderStatus__ECriFsLoaderStatus_MAX = 4,

};

// Enum CriWareRuntime.EManaSubtitlesEncoding
enum class CriWareRuntime_EManaSubtitlesEncoding : uint8_t
{
	EManaSubtitlesEncoding__Default = 0,
	EManaSubtitlesEncoding__ANSI   = 1,
	EManaSubtitlesEncoding__Utf8   = 2,
	EManaSubtitlesEncoding__Utf16  = 3,
	EManaSubtitlesEncoding__EManaSubtitlesEncoding_MAX = 4,

};

// Enum CriWareRuntime.EManaComponentStatus
enum class CriWareRuntime_EManaComponentStatus : uint8_t
{
	EManaComponentStatus__Stop     = 0,
	EManaComponentStatus__DecHdr   = 1,
	EManaComponentStatus__WaitPrep = 2,
	EManaComponentStatus__Prep     = 3,
	EManaComponentStatus__Ready    = 4,
	EManaComponentStatus__Playing  = 5,
	EManaComponentStatus__PlayEnd  = 6,
	EManaComponentStatus__Error    = 7,
	EManaComponentStatus__StopProcessing = 8,
	EManaComponentStatus__EManaComponentStatus_MAX = 9,

};

// Enum CriWareRuntime.EManaMaxFrameDrop
enum class CriWareRuntime_EManaMaxFrameDrop : uint8_t
{
	EManaMaxFrameDrop__Disabled    = 0,
	EManaMaxFrameDrop__One         = 1,
	EManaMaxFrameDrop__Two         = 2,
	EManaMaxFrameDrop__Three       = 3,
	EManaMaxFrameDrop__For         = 4,
	EManaMaxFrameDrop__Five        = 5,
	EManaMaxFrameDrop__Six         = 6,
	EManaMaxFrameDrop__Seven       = 7,
	EManaMaxFrameDrop__Eight       = 8,
	EManaMaxFrameDrop__Nine        = 9,
	EManaMaxFrameDrop__Ten         = 10,
	EManaMaxFrameDrop__Infinite    = 11,
	EManaMaxFrameDrop__EManaMaxFrameDrop_MAX = 12,

};

// Enum CriWareRuntime.EManaPlaybackTimer
enum class CriWareRuntime_EManaPlaybackTimer : uint8_t
{
	EManaPlaybackTimer__Default    = 0,
	EManaPlaybackTimer__RealTime   = 1,
	EManaPlaybackTimer__FrameTime  = 2,
	EManaPlaybackTimer__EManaPlaybackTimer_MAX = 3,

};

// Enum CriWareRuntime.EManaFrameAction
enum class CriWareRuntime_EManaFrameAction : uint8_t
{
	EManaFrameAction__Default      = 0,
	EManaFrameAction__Hold         = 1,
	EManaFrameAction__Clear        = 2,
	EManaFrameAction__EManaFrameAction_MAX = 3,

};

// Enum CriWareRuntime.EAtomSortOrderType
enum class CriWareRuntime_EAtomSortOrderType : uint8_t
{
	EAtomSortOrderType__Ascending  = 0,
	EAtomSortOrderType__Descending = 1,
	EAtomSortOrderType__EAtomSortOrderType_MAX = 2,

};

// Enum CriWareRuntime.EAtomProfileSortType
enum class CriWareRuntime_EAtomProfileSortType : uint8_t
{
	EAtomProfileSortType__AtomComponentID = 0,
	EAtomProfileSortType__Distance = 1,
	EAtomProfileSortType__Name     = 2,
	EAtomProfileSortType__Time     = 3,
	EAtomProfileSortType__EAtomProfileSortType_MAX = 4,

};

// Enum CriWareRuntime.ECriWareSpeakerSystem
enum class CriWareRuntime_ECriWareSpeakerSystem : uint8_t
{
	ECriWareSpeakerSystem__Surround5Point1 = 0,
	ECriWareSpeakerSystem__Surround7Point1 = 1,
	ECriWareSpeakerSystem__ECriWareSpeakerSystem_MAX = 2,

};

// Enum CriWareRuntime.EAtomSoundRendererType
enum class CriWareRuntime_EAtomSoundRendererType : uint8_t
{
	EAtomSoundRendererType__Any    = 0,
	EAtomSoundRendererType__Native = 1,
	EAtomSoundRendererType__Asr    = 2,
	EAtomSoundRendererType__Hardware1 = 3,
	EAtomSoundRendererType__Hardware2 = 4,
	EAtomSoundRendererType__Hardware3 = 5,
	EAtomSoundRendererType__Hardware4 = 6,
	EAtomSoundRendererType__Pad    = 7,
	EAtomSoundRendererType__EAtomSoundRendererType_MAX = 8,

};

// Enum CriWareRuntime.EEngineIniFileType
enum class CriWareRuntime_EEngineIniFileType : uint8_t
{
	EEngineIniFileType__EngBaseEngineIni = 0,
	EEngineIniFileType__EngWindowsEngineIni = 1,
	EEngineIniFileType__ProjDefaultEngineIni = 2,
	EEngineIniFileType__ProjWindowsEngineIni = 3,
	EEngineIniFileType__EEngineIniFileType_MAX = 4,

};

// Enum CriWareRuntime.EManaComponentTextureType
enum class CriWareRuntime_EManaComponentTextureType : uint8_t
{
	EManaComponentTextureType__Texture_Y = 0,
	EManaComponentTextureType__Texture_U = 1,
	EManaComponentTextureType__Texture_V = 2,
	EManaComponentTextureType__Texture_A = 3,
	EManaComponentTextureType__Texture_UV = 4,
	EManaComponentTextureType__Texture_RGB = 5,
	EManaComponentTextureType__Texture_MAX = 6,

};

// Enum CriWareRuntime.EManaSoundType
enum class CriWareRuntime_EManaSoundType : uint8_t
{
	EManaSoundType__Adx            = 0,
	EManaSoundType__HCA            = 1,
	EManaSoundType__Num            = 2,
	EManaSoundType__Unknown        = 3,
	EManaSoundType__EManaSoundType_MAX = 4,

};

// Enum CriWareRuntime.EManaColorSpace
enum class CriWareRuntime_EManaColorSpace : uint8_t
{
	EManaColorSpace__Rec601        = 0,
	EManaColorSpace__Rec709        = 1,
	EManaColorSpace__Num           = 2,
	EManaColorSpace__EManaColorSpace_MAX = 3,

};

// Enum CriWareRuntime.EManaMovieType
enum class CriWareRuntime_EManaMovieType : uint8_t
{
	EManaMovieType__SofdecPrime    = 0,
	EManaMovieType__H264           = 1,
	EManaMovieType__VP9            = 2,
	EManaMovieType__Num            = 3,
	EManaMovieType__Unknown        = 4,
	EManaMovieType__EManaMovieType_MAX = 5,

};

// Enum CriWareRuntime.ESndVoiceLanguage
enum class CriWareRuntime_ESndVoiceLanguage : uint8_t
{
	ESndVoiceLanguage__JAPANESE    = 0,
	ESndVoiceLanguage__ENGLISH     = 1,
	ESndVoiceLanguage__LANG_TOTAL  = 2,
	ESndVoiceLanguage__ESndVoiceLanguage_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CriWareRuntime.AtomAisacInfo
// 0x0030
struct FAtomAisacInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DefaultControlFlag;                                        // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RM8Z[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DefaultControlValue;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ControlId;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5QE[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ControlName;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.AtomAisacControlParam
// 0x0018
struct FAtomAisacControlParam
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_74QY[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CriWareRuntime.AtomSelectorParam
// 0x0020
struct FAtomSelectorParam
{
	struct FString                                     Selector;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Label;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.AtomProfileItem
// 0x0078
struct FAtomProfileItem
{
	int                                                AtomComponentID;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O5JJ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AtomCueName;                                               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AtomComponentLocation;                                     // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFromListener;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PlayingTime;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AX7W[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerState;                                               // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSounds;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_88QZ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ConcurrencyName;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNKT[0x20];                                    // 0x0058(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct CriWareRuntime.AtomTriggerRow
// 0x0018 (0x0020 - 0x0008)
struct FAtomTriggerRow : public FTableRowBase
{
	float                                              Time;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XL0W[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Bone;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAtomCue*                               Cue;                                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.AtomAsrRackConfigUI
// 0x0008
struct FAtomAsrRackConfigUI
{
	TEnumAsByte<CriWareRuntime_EAtomSoundRendererType> SoundRendererTypeUI;                                       // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGNN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ElementID;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.AtomAsrRackConfig
// 0x0004
struct FAtomAsrRackConfig
{
	int                                                SoundRendererType;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.ManaEventPointInfo
// 0x0028
struct FManaEventPointInfo
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Type;                                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Parameter;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.ManaAudioTrackInfo
// 0x0010
struct FManaAudioTrackInfo
{
	int                                                NumChannels;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SamplingRate;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalSamples;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAmbisonics;                                             // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CriWareRuntime_EManaSoundType                      Type;                                                      // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QUV9[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct CriWareRuntime.ManaVideoTrackInfo
// 0x001C
struct FManaVideoTrackInfo
{
	struct FIntPoint                                   TextureDimensions;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   DisplayDimensions;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameRate;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFrames;                                               // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAlpha;                                                  // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	CriWareRuntime_EManaMovieType                      Type;                                                      // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CN24[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct CriWareRuntime.AtomTrackKeyframe
// 0x0010
struct FAtomTrackKeyframe
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZRQU[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundAtomCue*                               Cue;                                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.AtomCueIdTrackKeyframe
// 0x0008
struct FAtomCueIdTrackKeyframe
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CueId;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.AtomCueNameTrackKeyframe
// 0x0018
struct FAtomCueNameTrackKeyframe
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SCAV[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CueName;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.AtomSelectorTrackKeyframe
// 0x0018
struct FAtomSelectorTrackKeyframe
{
	float                                              Time;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6P38[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SelectorLabel;                                             // 0x0008(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct CriWareRuntime.AtomSoundManager
// 0x0001
struct FAtomSoundManager
{
	unsigned char                                      UnknownData_9YA2[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplateData
// 0x0160
struct FMovieSceneAtomSectionTemplateData
{
	class USoundAtomCue*                               Sound;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AtomStartOffset;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TI9H[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             SectionStartTimeSeconds;                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     AtomPitchMultiplierCurve;                                  // 0x0018(0x00A0) (NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel                     AtomVolumeCurve;                                           // 0x00B8(0x00A0) (NativeAccessSpecifierPublic)
	int                                                RowIndex;                                                  // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JPGX[0x4];                                     // 0x015C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplate
// 0x0160 (0x0180 - 0x0020)
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneAtomSectionTemplateData          AtomData;                                                  // 0x0020(0x0160) (NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
