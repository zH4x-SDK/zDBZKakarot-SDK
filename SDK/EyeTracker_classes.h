#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EyeTracker.EyeTrackerFunctionLibrary");
		return ptr;
	}


	void STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController);
	void STATIC_IsStereoGazeDataAvailable();
	void STATIC_IsEyeTrackerConnected();
	void STATIC_GetStereoGazeData();
	void STATIC_GetGazeData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
