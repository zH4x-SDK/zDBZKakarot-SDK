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

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x0030 (0x0050 - 0x0020)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0020(0x0030) MISSED OFFSET
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x0030
struct FMovieSceneMediaSectionParams
{
	class UMediaSoundComponent*                        MediaSoundComponent;                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMediaSource*                                MediaSource;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0020(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
