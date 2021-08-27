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

// Class OculusHMD.OculusFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusFunctionLibrary");
		return ptr;
	}


	void STATIC_ShowLoadingSplashScreen();
	void STATIC_ShowLoadingIcon(class UTexture2D* Texture);
	void STATIC_SetTiledMultiresLevel( Level);
	void STATIC_SetReorientHMDOnControllerRecenter();
	void STATIC_SetPositionScale3D();
	void STATIC_SetLoadingSplashParams();
	void STATIC_SetGuardianVisibility();
	void STATIC_SetDisplayFrequency();
	void STATIC_SetCPUAndGPULevels();
	void STATIC_SetBaseRotationAndPositionOffset();
	void STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation);
	void STATIC_IsLoadingIconEnabled();
	void STATIC_IsGuardianDisplayed();
	void STATIC_IsDeviceTracked( DeviceType);
	void STATIC_IsAutoLoadingSplashScreenEnabled();
	void STATIC_HideLoadingSplashScreen();
	void STATIC_HideLoadingIcon();
	void STATIC_HasSystemOverlayPresent();
	void STATIC_HasInputFocus();
	void STATIC_GetUserProfile();
	void STATIC_GetTiledMultiresLevel();
	void STATIC_GetRawSensorData();
	void STATIC_GetPose();
	void STATIC_GetPointGuardianIntersection(const struct FVector& Point);
	void STATIC_GetPlayAreaTransform();
	void STATIC_GetNodeGuardianIntersection( DeviceType);
	void STATIC_GetLoadingSplashParams();
	void STATIC_GetGuardianPoints();
	void STATIC_GetGuardianDimensions();
	void STATIC_GetGPUUtilization();
	void STATIC_GetGPUFrameTime();
	void STATIC_GetDeviceName();
	void STATIC_GetCurrentDisplayFrequency();
	void STATIC_GetBaseRotationAndPositionOffset();
	void STATIC_GetBaseRotationAndBaseOffsetInMeters();
	void STATIC_GetAvailableDisplayFrequencies();
	void STATIC_EnablePositionTracking();
	void STATIC_EnableOrientationTracking();
	void STATIC_EnableAutoLoadingSplashScreen();
	void STATIC_ClearLoadingSplashScreens();
	void STATIC_AddLoadingSplashScreen(class UTexture2D* Texture);
};


// Class OculusHMD.OculusHMDRuntimeSettings
// 0x0018 (0x0040 - 0x0028)
class UOculusHMDRuntimeSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusHMDRuntimeSettings");
		return ptr;
	}

};


// Class OculusHMD.OculusSceneCaptureCubemap
// 0x0068 (0x0090 - 0x0028)
class UOculusSceneCaptureCubemap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusHMD.OculusSceneCaptureCubemap");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
