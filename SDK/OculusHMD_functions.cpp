
#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_ShowLoadingSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen");

	UOculusFunctionLibrary_ShowLoadingSplashScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_ShowLoadingIcon(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon");

	UOculusFunctionLibrary_ShowLoadingIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//                                Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetTiledMultiresLevel( Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetTiledMultiresLevel");

	UOculusFunctionLibrary_SetTiledMultiresLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_SetReorientHMDOnControllerRecenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter");

	UOculusFunctionLibrary_SetReorientHMDOnControllerRecenter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_SetPositionScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D");

	UOculusFunctionLibrary_SetPositionScale3D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_SetLoadingSplashParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams");

	UOculusFunctionLibrary_SetLoadingSplashParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_SetGuardianVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility");

	UOculusFunctionLibrary_SetGuardianVisibility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_SetDisplayFrequency()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency");

	UOculusFunctionLibrary_SetDisplayFrequency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_SetCPUAndGPULevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels");

	UOculusFunctionLibrary_SetCPUAndGPULevels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_SetBaseRotationAndPositionOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_SetBaseRotationAndBaseOffsetInMeters(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_IsLoadingIconEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled");

	UOculusFunctionLibrary_IsLoadingIconEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_IsGuardianDisplayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed");

	UOculusFunctionLibrary_IsGuardianDisplayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//                                DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_IsDeviceTracked( DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked");

	UOculusFunctionLibrary_IsDeviceTracked_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_IsAutoLoadingSplashScreenEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled");

	UOculusFunctionLibrary_IsAutoLoadingSplashScreenEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_HideLoadingSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen");

	UOculusFunctionLibrary_HideLoadingSplashScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_HideLoadingIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon");

	UOculusFunctionLibrary_HideLoadingIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_HasSystemOverlayPresent()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent");

	UOculusFunctionLibrary_HasSystemOverlayPresent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.HasInputFocus
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_HasInputFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.HasInputFocus");

	UOculusFunctionLibrary_HasInputFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetUserProfile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetUserProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetUserProfile");

	UOculusFunctionLibrary_GetUserProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetTiledMultiresLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetTiledMultiresLevel");

	UOculusFunctionLibrary_GetTiledMultiresLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetRawSensorData
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetRawSensorData()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetRawSensorData");

	UOculusFunctionLibrary_GetRawSensorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetPose()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPose");

	UOculusFunctionLibrary_GetPose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Point                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetPointGuardianIntersection(const struct FVector& Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection");

	UOculusFunctionLibrary_GetPointGuardianIntersection_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetPlayAreaTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform");

	UOculusFunctionLibrary_GetPlayAreaTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//                                DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_GetNodeGuardianIntersection( DeviceType)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection");

	UOculusFunctionLibrary_GetNodeGuardianIntersection_Params params;
	params.DeviceType = DeviceType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetLoadingSplashParams()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams");

	UOculusFunctionLibrary_GetLoadingSplashParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetGuardianPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints");

	UOculusFunctionLibrary_GetGuardianPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetGuardianDimensions()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions");

	UOculusFunctionLibrary_GetGuardianDimensions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetGPUUtilization()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization");

	UOculusFunctionLibrary_GetGPUUtilization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetGPUFrameTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime");

	UOculusFunctionLibrary_GetGPUFrameTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetDeviceName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetDeviceName()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetDeviceName");

	UOculusFunctionLibrary_GetDeviceName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetCurrentDisplayFrequency()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency");

	UOculusFunctionLibrary_GetCurrentDisplayFrequency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_GetBaseRotationAndPositionOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset");

	UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetBaseRotationAndBaseOffsetInMeters()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters");

	UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UOculusFunctionLibrary::STATIC_GetAvailableDisplayFrequencies()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies");

	UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_EnablePositionTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking");

	UOculusFunctionLibrary_EnablePositionTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_EnableOrientationTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking");

	UOculusFunctionLibrary_EnableOrientationTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_EnableAutoLoadingSplashScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen");

	UOculusFunctionLibrary_EnableAutoLoadingSplashScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens
// (Final, Native, Static, Public, BlueprintCallable)

void UOculusFunctionLibrary::STATIC_ClearLoadingSplashScreens()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens");

	UOculusFunctionLibrary_ClearLoadingSplashScreens_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UOculusFunctionLibrary::STATIC_AddLoadingSplashScreen(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen");

	UOculusFunctionLibrary_AddLoadingSplashScreen_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
