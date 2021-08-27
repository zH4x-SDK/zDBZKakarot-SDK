
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

// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*       PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UEyeTrackerFunctionLibrary::STATIC_SetEyeTrackedPlayer(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer");

	UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UEyeTrackerFunctionLibrary::STATIC_IsStereoGazeDataAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable");

	UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UEyeTrackerFunctionLibrary::STATIC_IsEyeTrackerConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected");

	UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UEyeTrackerFunctionLibrary::STATIC_GetStereoGazeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData");

	UEyeTrackerFunctionLibrary_GetStereoGazeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UEyeTrackerFunctionLibrary::STATIC_GetGazeData()
{
	static auto fn = UObject::FindObject<UFunction>("Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData");

	UEyeTrackerFunctionLibrary_GetGazeData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
