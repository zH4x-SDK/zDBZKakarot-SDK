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

// Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime
struct UTimeManagementBlueprintLibrary_TransformTime_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Subtract_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber
struct UTimeManagementBlueprintLibrary_Subtract_FrameNumberFrameNumber_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	struct FFrameNumber                                B;                                                        // (Parm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate
struct UTimeManagementBlueprintLibrary_SnapFrameTimeToRate_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
struct UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Multiply_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf
struct UTimeManagementBlueprintLibrary_IsValid_MultipleOf_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate
struct UTimeManagementBlueprintLibrary_IsValid_Framerate_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode
struct UTimeManagementBlueprintLibrary_GetTimecode_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Divide_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString
struct UTimeManagementBlueprintLibrary_Conv_TimecodeToString_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
struct UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
struct UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger
struct UTimeManagementBlueprintLibrary_Conv_FrameNumberToInteger_Params
{
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger
struct UTimeManagementBlueprintLibrary_Add_FrameNumberInteger_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	int                                                B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber
struct UTimeManagementBlueprintLibrary_Add_FrameNumberFrameNumber_Params
{
	struct FFrameNumber                                A;                                                        // (Parm)
	struct FFrameNumber                                B;                                                        // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
