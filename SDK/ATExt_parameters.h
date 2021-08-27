#pragma once

// Name: DBZ-Kakarot, Version: 4.21.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ATExt.ATCharacterCpl030.OnChangeAction
struct AATCharacterCpl030_OnChangeAction_Params
{
	class AAT_Character*                               InCharacter;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdPrev;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdNext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ATExt.ATCharacterCpl040.OnChangeAction
struct AATCharacterCpl040_OnChangeAction_Params
{
	class AAT_Character*                               InCharacter;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdPrev;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdNext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ATExt.ATCommunityManager.OnSaveData
struct UATCommunityManager_OnSaveData_Params
{
};

// Function ATExt.ATCommunityManager.OnLoadData
struct UATCommunityManager_OnLoadData_Params
{
	bool                                               bIsSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ATExt.ATCommunityManager.OnAutoSaveData
struct UATCommunityManager_OnAutoSaveData_Params
{
};

// Function ATExt.ATCommunityManager.CTExec
struct UATCommunityManager_CTExec_Params
{
	int                                                InTestCase;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       testId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ATExt.ATTalkAnimLoader.CompleteLoad
struct UATTalkAnimLoader_CompleteLoad_Params
{
	class UATDataAssetTalkAnimAsyncLoad*               loader;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming
struct UATGeneralBattleDirectionPhase_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      DemoType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               DemoTiming;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               continueFlag;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning
struct UATGeneralBattleSettlePhase_OnEndWarning_Params
{
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndResult
struct UATGeneralBattleSettlePhase_OnEndResult_Params
{
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD
struct UATGeneralBattleSettlePhase_OnEndBattleHUD_Params
{
};

// Function ATExt.ATLake.Update
struct AATLake_Update_Params
{
	class UPostProcessComponent*                       PostProcessComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        LakeMesh;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        UnderLakeMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ATExt.ATLake.Init
struct AATLake_Init_Params
{
	class UPostProcessComponent*                       PostProcessComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        LakeMesh;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        UnderLakeMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
