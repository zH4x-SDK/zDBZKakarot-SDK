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

// ScriptStruct EyeTracker.EyeTrackerStereoGazeData
// 0x0040
struct FEyeTrackerStereoGazeData
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct EyeTracker.EyeTrackerGazeData
// 0x0028
struct FEyeTrackerGazeData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
