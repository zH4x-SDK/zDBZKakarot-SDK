
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

// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
// (Final, Native, Public, BlueprintCallable)

void ALevelVariantSetsActor::SwitchOnVariantByName()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName");

	ALevelVariantSetsActor_SwitchOnVariantByName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
// (Final, Native, Public, BlueprintCallable)

void ALevelVariantSetsActor::SwitchOnVariantByIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex");

	ALevelVariantSetsActor_SwitchOnVariantByIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
// (Final, Native, Public, BlueprintCallable)

void ALevelVariantSetsActor::SetLevelVariantSets()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets");

	ALevelVariantSetsActor_SetLevelVariantSets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void ALevelVariantSetsActor::GetLevelVariantSets()
{
	static auto fn = UObject::FindObject<UFunction>("Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets");

	ALevelVariantSetsActor_GetLevelVariantSets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
