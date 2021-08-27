
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

// Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
// (Final, Native, Static, Public, BlueprintCallable)

void UMovieSceneCaptureEnvironment::STATIC_IsCaptureInProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress");

	UMovieSceneCaptureEnvironment_IsCaptureInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UMovieSceneCaptureEnvironment::STATIC_GetCaptureFrameNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber");

	UMovieSceneCaptureEnvironment_GetCaptureFrameNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UMovieSceneCaptureEnvironment::STATIC_GetCaptureElapsedTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime");

	UMovieSceneCaptureEnvironment_GetCaptureElapsedTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)

void UMovieSceneCaptureEnvironment::STATIC_FindImageCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol");

	UMovieSceneCaptureEnvironment_FindImageCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
// (Final, Native, Static, Public, BlueprintCallable)

void UMovieSceneCaptureEnvironment::STATIC_FindAudioCaptureProtocol()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol");

	UMovieSceneCaptureEnvironment_FindAudioCaptureProtocol_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
// (Final, Native, Public, BlueprintCallable)

void UUserDefinedCaptureProtocol::StopCapturingFinalPixels()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");

	UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
// (Final, Native, Public, BlueprintCallable)

void UUserDefinedCaptureProtocol::StartCapturingFinalPixels()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");

	UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
// (Final, Native, Public, BlueprintCallable)

void UUserDefinedCaptureProtocol::ResolveBuffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");

	UUserDefinedCaptureProtocol_ResolveBuffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.PushBufferToStream
// (Final, Native, Public, BlueprintCallable)

void UUserDefinedCaptureProtocol::PushBufferToStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.PushBufferToStream");

	UUserDefinedCaptureProtocol_PushBufferToStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnWarmUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");

	UUserDefinedCaptureProtocol_OnWarmUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");

	UUserDefinedCaptureProtocol_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnStartCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");

	UUserDefinedCaptureProtocol_OnStartCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
// (Native, Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");

	UUserDefinedCaptureProtocol_OnSetup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnPreTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");

	UUserDefinedCaptureProtocol_OnPreTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");

	UUserDefinedCaptureProtocol_OnPauseCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");

	UUserDefinedCaptureProtocol_OnFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");

	UUserDefinedCaptureProtocol_OnCaptureFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
// (Native, Event, Protected, BlueprintEvent, Const)

void UUserDefinedCaptureProtocol::OnCanFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");

	UUserDefinedCaptureProtocol_OnCanFinalize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
// (Event, Protected, BlueprintEvent)

void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");

	UUserDefinedCaptureProtocol_OnBeginFinalize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UUserDefinedCaptureProtocol::GetCurrentFrameMetrics()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");

	UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UUserDefinedCaptureProtocol::GenerateFilename()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");

	UUserDefinedCaptureProtocol_GenerateFilename_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieSceneCapture.UserDefinedCaptureProtocol.BindToStream
// (Final, Native, Public, BlueprintCallable)

void UUserDefinedCaptureProtocol::BindToStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.BindToStream");

	UUserDefinedCaptureProtocol_BindToStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
