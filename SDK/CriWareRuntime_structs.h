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

// ScriptStruct CriWareRuntime.AtomSelectorParam
// 0x0020
struct FAtomSelectorParam
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomAisacControlParam
// 0x0018
struct FAtomAisacControlParam
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.ManaEventPointInfo
// 0x0028
struct FManaEventPointInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              Time;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                Type;                                                     // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomAisacInfo
// 0x0030
struct FAtomAisacInfo
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomProfileItem
// 0x0078
struct FAtomProfileItem
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomSoundManager
// 0x0001
struct FAtomSoundManager
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomTriggerRow
// 0x0018 (0x0020 - 0x0008)
struct FAtomTriggerRow : public FTableRowBase
{
	float                                              Time;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x000C(0x0014) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomAsrRackConfig
// 0x0004
struct FAtomAsrRackConfig
{
	int                                                SoundRendererType;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct CriWareRuntime.AtomAsrRackConfigUI
// 0x0008
struct FAtomAsrRackConfigUI
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.ManaAudioTrackInfo
// 0x0010
struct FManaAudioTrackInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.ManaVideoTrackInfo
// 0x001C
struct FManaVideoTrackInfo
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomTrackKeyframe
// 0x0010
struct FAtomTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomCueIdTrackKeyframe
// 0x0008
struct FAtomCueIdTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomCueNameTrackKeyframe
// 0x0018
struct FAtomCueNameTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.AtomSelectorTrackKeyframe
// 0x0018
struct FAtomSelectorTrackKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplate
// 0x0160 (0x0180 - 0x0020)
struct FMovieSceneAtomSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x160];                                     // 0x0020(0x0160) MISSED OFFSET
};

// ScriptStruct CriWareRuntime.MovieSceneAtomSectionTemplateData
// 0x0160
struct FMovieSceneAtomSectionTemplateData
{
	unsigned char                                      UnknownData00[0x160];                                     // 0x0000(0x0160) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
