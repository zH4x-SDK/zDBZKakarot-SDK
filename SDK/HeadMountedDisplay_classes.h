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

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
		return ptr;
	}


	void STATIC_UpdateExternalTrackingHMDPosition();
	void STATIC_SetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_SetTrackingOrigin();
	void STATIC_SetSpectatorScreenTexture();
	void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout();
	void STATIC_SetSpectatorScreenMode();
	void STATIC_SetClippingPlanes();
	void STATIC_ResetOrientationAndPosition();
	void STATIC_IsSpectatorScreenModeControllable();
	void STATIC_IsInLowPersistenceMode();
	void STATIC_IsHeadMountedDisplayEnabled();
	void STATIC_IsHeadMountedDisplayConnected();
	void STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	void STATIC_HasValidTrackingPosition();
	void STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	void STATIC_GetVRFocusState();
	void STATIC_GetTrackingToWorldTransform(class UObject* WorldContext);
	void STATIC_GetTrackingSensorParameters();
	void STATIC_GetTrackingOrigin();
	void STATIC_GetScreenPercentage();
	void STATIC_GetPositionalTrackingCameraParameters();
	void STATIC_GetPixelDensity();
	void STATIC_GetOrientationAndPosition();
	void STATIC_GetNumOfTrackingSensors();
	void STATIC_GetHMDWornState();
	void STATIC_GetHMDDeviceName();
	void STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId);
	void STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId);
	void STATIC_EnumerateTrackedDevices();
	void STATIC_EnableLowPersistenceMode();
	void STATIC_EnableHMD();
	void STATIC_CalibrateExternalTrackingToHMD();
};


// Class HeadMountedDisplay.MotionControllerComponent
// 0x00B0 (0x0620 - 0x0570)
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0570(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionControllerComponent");
		return ptr;
	}

};


// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
		return ptr;
	}


	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	void STATIC_IsMotionTrackingEnabledForSource();
	void STATIC_IsMotionTrackingEnabledForDevice();
	void STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	void STATIC_IsMotionSourceTracking();
	void STATIC_GetMotionTrackingEnabledControllerCount();
	void STATIC_GetMaximumMotionTrackedControllerCount();
	void STATIC_GetActiveTrackingSystemName();
	void STATIC_EnumerateMotionSources();
	void STATIC_EnableMotionTrackingOfSource();
	void STATIC_EnableMotionTrackingOfDevice();
	void STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	void STATIC_DisableMotionTrackingOfSource();
	void STATIC_DisableMotionTrackingOfDevice();
	void STATIC_DisableMotionTrackingOfControllersForPlayer();
	void STATIC_DisableMotionTrackingOfAllControllers();
	void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
};


// Class HeadMountedDisplay.VRNotificationsComponent
// 0x0090 (0x0190 - 0x0100)
class UVRNotificationsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0100(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.VRNotificationsComponent");
		return ptr;
	}

};


// Class HeadMountedDisplay.XRAssetFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.XRAssetFunctionLibrary");
		return ptr;
	}


	void STATIC_AddNamedDeviceVisualizationComponentBlocking(class AActor* Target);
	void STATIC_AddDeviceVisualizationComponentBlocking(class AActor* Target, const struct FXRDeviceId& XRDeviceId);
};


// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// 0x0030 (0x0060 - 0x0030)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
