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

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// 0x0028
struct FMovieSceneGeometryCacheParams
{
	struct FSoftObjectPath                             GeometryCache;                                            // 0x0000(0x0018) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// 0x0038 (0x0058 - 0x0020)
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0020(0x0038) MISSED OFFSET
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// 0x0010 (0x0038 - 0x0028)
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
