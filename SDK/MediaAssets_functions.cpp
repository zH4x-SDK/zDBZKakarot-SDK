
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

// Function MediaAssets.MediaSource.Validate
// (Native, Public, BlueprintCallable, BlueprintPure, Const)

void UMediaSource::Validate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.Validate");

	UMediaSource_Validate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaSource.GetUrl
// (Native, Public, BlueprintCallable, BlueprintPure, Const)

void UMediaSource::GetUrl()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaSource.GetUrl");

	UMediaSource_GetUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.FileMediaSource.SetFilePath
// (Final, Native, Public, BlueprintCallable)

void UFileMediaSource::SetFilePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.FileMediaSource.SetFilePath");

	UFileMediaSource_SetFilePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UMediaBlueprintFunctionLibrary::STATIC_EnumerateWebcamCaptureDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices");

	UMediaBlueprintFunctionLibrary_EnumerateWebcamCaptureDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UMediaBlueprintFunctionLibrary::STATIC_EnumerateVideoCaptureDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices");

	UMediaBlueprintFunctionLibrary_EnumerateVideoCaptureDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UMediaBlueprintFunctionLibrary::STATIC_EnumerateAudioCaptureDevices()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices");

	UMediaBlueprintFunctionLibrary_EnumerateAudioCaptureDevices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
