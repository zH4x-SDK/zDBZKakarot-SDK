
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

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_TransformTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime");

	UTimeManagementBlueprintLibrary_TransformTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)

void UTimeManagementBlueprintLibrary::STATIC_Subtract_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger");

	UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// struct FFrameNumber            B                              (Parm)

void UTimeManagementBlueprintLibrary::STATIC_Subtract_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber");

	UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_SnapFrameTimeToRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate");

	UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_Multiply_SecondsFrameRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");

	UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)

void UTimeManagementBlueprintLibrary::STATIC_Multiply_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger");

	UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_IsValid_MultipleOf()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf");

	UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_IsValid_Framerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate");

	UTimeManagementBlueprintLibrary_IsValid_Framerate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_GetTimecode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode");

	UTimeManagementBlueprintLibrary_GetTimecode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)

void UTimeManagementBlueprintLibrary::STATIC_Divide_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger");

	UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_Conv_TimecodeToString()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString");

	UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_Conv_QualifiedFrameTimeToSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");

	UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_Conv_FrameRateToSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");

	UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)

void UTimeManagementBlueprintLibrary::STATIC_Conv_FrameNumberToInteger()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger");

	UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)

void UTimeManagementBlueprintLibrary::STATIC_Add_FrameNumberInteger(const struct FFrameNumber& A, int B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger");

	UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameNumber            A                              (Parm)
// struct FFrameNumber            B                              (Parm)

void UTimeManagementBlueprintLibrary::STATIC_Add_FrameNumberFrameNumber(const struct FFrameNumber& A, const struct FFrameNumber& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber");

	UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
