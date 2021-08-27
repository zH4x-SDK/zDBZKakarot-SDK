// Name: DBZ-Kakarot, Version: 4.21.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ATExt.ATCharacterCpl030.OnChangeAction
// (Final, Native, Private)
// Parameters:
// class AAT_Character*           InCharacter                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InActionIdPrev                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InActionIdNext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATCharacterCpl030::OnChangeAction(class AAT_Character* InCharacter, int InActionIdPrev, int InActionIdNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCharacterCpl030.OnChangeAction");

	AATCharacterCpl030_OnChangeAction_Params params;
	params.InCharacter = InCharacter;
	params.InActionIdPrev = InActionIdPrev;
	params.InActionIdNext = InActionIdNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATCharacterCpl040.OnChangeAction
// (Final, Native, Private)
// Parameters:
// class AAT_Character*           InCharacter                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InActionIdPrev                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int                            InActionIdNext                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATCharacterCpl040::OnChangeAction(class AAT_Character* InCharacter, int InActionIdPrev, int InActionIdNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCharacterCpl040.OnChangeAction");

	AATCharacterCpl040_OnChangeAction_Params params;
	params.InCharacter = InCharacter;
	params.InActionIdPrev = InActionIdPrev;
	params.InActionIdNext = InActionIdNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATCommunityManager.OnSaveData
// (Final, Native, Public)
void UATCommunityManager::OnSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCommunityManager.OnSaveData");

	UATCommunityManager_OnSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATCommunityManager.OnLoadData
// (Final, Native, Public)
// Parameters:
// bool                           bIsSuccess                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATCommunityManager::OnLoadData(bool bIsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCommunityManager.OnLoadData");

	UATCommunityManager_OnLoadData_Params params;
	params.bIsSuccess = bIsSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATCommunityManager.OnAutoSaveData
// (Final, Native, Public)
void UATCommunityManager::OnAutoSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCommunityManager.OnAutoSaveData");

	UATCommunityManager_OnAutoSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATCommunityManager.CTExec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InTestCase                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   testId                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATCommunityManager::CTExec(int InTestCase, const struct FName& testId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCommunityManager.CTExec");

	UATCommunityManager_CTExec_Params params;
	params.InTestCase = InTestCase;
	params.testId = testId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATTalkAnimLoader.CompleteLoad
// (Final, Native, Private)
// Parameters:
// class UATDataAssetTalkAnimAsyncLoad* loader                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATTalkAnimLoader::CompleteLoad(class UATDataAssetTalkAnimAsyncLoad* loader)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATTalkAnimLoader.CompleteLoad");

	UATTalkAnimLoader_CompleteLoad_Params params;
	params.loader = loader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming
// (Final, Native, Private)
// Parameters:
// AT_EDEMO_TYPE                  DemoType                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// AT_EDEMO_TIMING_TYPE           DemoTiming                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FName                   DemoName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                           continueFlag                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UATGeneralBattleDirectionPhase::OnDemoTiming(AT_EDEMO_TYPE DemoType, AT_EDEMO_TIMING_TYPE DemoTiming, const struct FName& DemoName, bool continueFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming");

	UATGeneralBattleDirectionPhase_OnDemoTiming_Params params;
	params.DemoType = DemoType;
	params.DemoTiming = DemoTiming;
	params.DemoName = DemoName;
	params.continueFlag = continueFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning
// (Final, Native, Private)
void UATGeneralBattleSettlePhase::OnEndWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning");

	UATGeneralBattleSettlePhase_OnEndWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndResult
// (Final, Native, Private)
void UATGeneralBattleSettlePhase::OnEndResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndResult");

	UATGeneralBattleSettlePhase_OnEndResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD
// (Final, Native, Private)
void UATGeneralBattleSettlePhase::OnEndBattleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD");

	UATGeneralBattleSettlePhase_OnEndBattleHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATLake.Update
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UPostProcessComponent*   PostProcessComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*    LakeMesh                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*    UnderLakeMesh                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATLake::Update(class UPostProcessComponent* PostProcessComponent, class UStaticMeshComponent* LakeMesh, class UStaticMeshComponent* UnderLakeMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATLake.Update");

	AATLake_Update_Params params;
	params.PostProcessComponent = PostProcessComponent;
	params.LakeMesh = LakeMesh;
	params.UnderLakeMesh = UnderLakeMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ATExt.ATLake.Init
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UPostProcessComponent*   PostProcessComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*    LakeMesh                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStaticMeshComponent*    UnderLakeMesh                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AATLake::Init(class UPostProcessComponent* PostProcessComponent, class UStaticMeshComponent* LakeMesh, class UStaticMeshComponent* UnderLakeMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATLake.Init");

	AATLake_Init_Params params;
	params.PostProcessComponent = PostProcessComponent;
	params.LakeMesh = LakeMesh;
	params.UnderLakeMesh = UnderLakeMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
