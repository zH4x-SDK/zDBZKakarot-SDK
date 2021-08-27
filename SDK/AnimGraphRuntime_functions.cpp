
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

// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)

void UKismetAnimationLibrary::STATIC_K2_TwoBoneIK()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK");

	UKismetAnimationLibrary_K2_TwoBoneIK_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap");

	UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UKismetAnimationLibrary::STATIC_K2_MakePerlinNoiseAndRemap()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap");

	UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)

void UKismetAnimationLibrary::STATIC_K2_LookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt");

	UKismetAnimationLibrary_K2_LookAt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UKismetAnimationLibrary::STATIC_K2_DistanceBetweenTwoSocketsAndMapRange()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange");

	UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)

void UKismetAnimationLibrary::STATIC_K2_DirectionBetweenSockets()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets");

	UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
