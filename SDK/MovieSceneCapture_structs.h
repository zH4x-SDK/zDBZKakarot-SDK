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

// ScriptStruct MovieSceneCapture.FrameMetrics
// 0x0010
struct FFrameMetrics
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CapturedPixels
// 0x0010
struct FCapturedPixels
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010
struct FCompositionGraphCapturePasses
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0050
struct FMovieSceneCaptureSettings
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	int                                                ResX;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	int                                                ResY;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
