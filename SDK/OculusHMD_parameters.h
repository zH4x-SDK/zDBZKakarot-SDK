#pragma once

#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
struct UOculusFunctionLibrary_ShowLoadingSplashScreen_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
struct UOculusFunctionLibrary_ShowLoadingIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel
struct UOculusFunctionLibrary_SetTiledMultiresLevel_Params
{
	                                                   Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
struct UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
struct UOculusFunctionLibrary_SetPositionScale3D_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
struct UOculusFunctionLibrary_SetLoadingSplashParams_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
struct UOculusFunctionLibrary_SetGuardianVisibility_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
struct UOculusFunctionLibrary_SetDisplayFrequency_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
struct UOculusFunctionLibrary_SetCPUAndGPULevels_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params
{
	struct FRotator                                    Rotation;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
struct UOculusFunctionLibrary_IsLoadingIconEnabled_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
struct UOculusFunctionLibrary_IsGuardianDisplayed_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
struct UOculusFunctionLibrary_IsDeviceTracked_Params
{
	                                                   DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
struct UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
struct UOculusFunctionLibrary_HideLoadingSplashScreen_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
struct UOculusFunctionLibrary_HideLoadingIcon_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
struct UOculusFunctionLibrary_HasSystemOverlayPresent_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
struct UOculusFunctionLibrary_HasInputFocus_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
struct UOculusFunctionLibrary_GetUserProfile_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel
struct UOculusFunctionLibrary_GetTiledMultiresLevel_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
struct UOculusFunctionLibrary_GetRawSensorData_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetPose
struct UOculusFunctionLibrary_GetPose_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
struct UOculusFunctionLibrary_GetPointGuardianIntersection_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
struct UOculusFunctionLibrary_GetPlayAreaTransform_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
struct UOculusFunctionLibrary_GetNodeGuardianIntersection_Params
{
	                                                   DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
struct UOculusFunctionLibrary_GetLoadingSplashParams_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
struct UOculusFunctionLibrary_GetGuardianPoints_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
struct UOculusFunctionLibrary_GetGuardianDimensions_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
struct UOculusFunctionLibrary_GetGPUUtilization_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
struct UOculusFunctionLibrary_GetGPUFrameTime_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
struct UOculusFunctionLibrary_GetDeviceName_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
struct UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
struct UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
struct UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
struct UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
struct UOculusFunctionLibrary_EnablePositionTracking_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
struct UOculusFunctionLibrary_EnableOrientationTracking_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
struct UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
struct UOculusFunctionLibrary_ClearLoadingSplashScreens_Params
{
};

// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
struct UOculusFunctionLibrary_AddLoadingSplashScreen_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
