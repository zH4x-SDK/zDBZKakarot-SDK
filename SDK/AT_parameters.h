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

// Function AT.AccessPointBase.OpenPoint
struct AAccessPointBase_OpenPoint_Params
{
};

// Function AT.AccessPointBase.FinishedEffect
struct AAccessPointBase_FinishedEffect_Params
{
	class UParticleSystemComponent*                    PSysComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AccessPointBaseComponent.OpenPoint
struct UAccessPointBaseComponent_OpenPoint_Params
{
};

// Function AT.AccessPointBaseComponent.NotifyStateChangeRequest
struct UAccessPointBaseComponent_NotifyStateChangeRequest_Params
{
};

// Function AT.ActorTrackingEffectComponent.DeleteTrackingEffect
struct UActorTrackingEffectComponent_DeleteTrackingEffect_Params
{
	class AActor*                                      Owner;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimNotifyState_AG_Trail.OverridePSTemplate
struct UAnimNotifyState_AG_Trail_OverridePSTemplate_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.UpdataStatus
struct UAIBase_UpdataStatus_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.SetSpecialBehavior
struct UAIBase_SetSpecialBehavior_Params
{
	AT_E_AI_SPECIAL                                    Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.SetMiniGame
struct UAIBase_SetMiniGame_Params
{
	AT_E_AI_MINIGAME                                   Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.SetBehavior
struct UAIBase_SetBehavior_Params
{
};

// Function AT.AIBase.RequestCheck
struct UAIBase_RequestCheck_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.RequestBehaviorCheck
struct UAIBase_RequestBehaviorCheck_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.OnDemoTiming
struct UAIBase_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      DemoType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               DemoTiming;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               continueFlag;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.OnCookingTiming
struct UAIBase_OnCookingTiming_Params
{
	AT_EEventTimingType                                Timing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.GetSlopeY
struct UAIBase_GetSlopeY_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.GetSlopeX
struct UAIBase_GetSlopeX_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.GetMiniGame
struct UAIBase_GetMiniGame_Params
{
	AT_E_AI_MINIGAME                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.GetDebugFlg
struct UAIBase_GetDebugFlg_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.GetDebugAIStop
struct UAIBase_GetDebugAIStop_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.GetCharacter
struct UAIBase_GetCharacter_Params
{
	class AAT_Character*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.GetAIStopEvent
struct UAIBase_GetAIStopEvent_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.DoMiniGame
struct UAIBase_DoMiniGame_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.CheckState
struct UAIBase_CheckState_Params
{
	AT_E_AI_STATE                                      State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.CheckSeq
struct UAIBase_CheckSeq_Params
{
	AT_E_SEQ_AI                                        seq;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.BehaviorLot
struct UAIBase_BehaviorLot_Params
{
	float                                              fDlt;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIBase.BehaviorCheck
struct UAIBase_BehaviorCheck_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIManager.DeleteFriend
struct UAIManager_DeleteFriend_Params
{
	class AAT_Character*                               chara;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AIManager.CreateFriendDetails
struct UAIManager_CreateFriendDetails_Params
{
	AT_ECHARACTER_TYPE                                 CHARACTER_TYPE;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     pos;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    rot;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bFalling;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIndependent;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAT_Character*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.RideCharacterBase.OnCollisionOverlapEnd
struct ARideCharacterBase_OnCollisionOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.RideCharacterBase.OnCollisionOverlapBegin
struct ARideCharacterBase_OnCollisionOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.RidePlayerControllerBase.WasPressed
struct ARidePlayerControllerBase_WasPressed_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      pastTickNum;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPermitHoldDown;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.RidePlayerControllerBase.WasJustReleased
struct ARidePlayerControllerBase_WasJustReleased_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.RidePlayerControllerBase.WasJustPressed
struct ARidePlayerControllerBase_WasJustPressed_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.RidePlayerControllerBase.SetPauseMenu
struct ARidePlayerControllerBase_SetPauseMenu_Params
{
	bool                                               bMenuPauseOff;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.RidePlayerControllerBase.PressedSimultaneous
struct ARidePlayerControllerBase_PressedSimultaneous_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType1;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType2;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      pastTickNum;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPermitHoldDown;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.RidePlayerControllerBase.IsPressed
struct ARidePlayerControllerBase_IsPressed_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.RidePlayerControllerBase.GetAxisValue
struct ARidePlayerControllerBase_GetAxisValue_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_AXIS>             axisType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      pastTickNum;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimalAccessPoint.FinishedEffect
struct UAnimalAccessPoint_FinishedEffect_Params
{
	class UParticleSystemComponent*                    PSysComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.NpcComponentBase.SplineMoveProc
struct UNpcComponentBase_SplineMoveProc_Params
{
	float                                              DeltaTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.NpcComponentBase.OnMontageEnded_Call
struct UNpcComponentBase_OnMontageEnded_Call_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.NpcComponentBase.OnMontageBlendingOut_Call
struct UNpcComponentBase_OnMontageBlendingOut_Call_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimalComponentBase.UpdateAnimalParameter
struct UAnimalComponentBase_UpdateAnimalParameter_Params
{
};

// Function AT.AnimalSpawnerVolumeGround.OnOverlapEnd
struct AAnimalSpawnerVolumeGround_OnOverlapEnd_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimalSpawnerVolumeGround.OnOverlapBegin
struct AAnimalSpawnerVolumeGround_OnOverlapBegin_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimalSpawnerVolumeSky.OnOverlapEnd
struct AAnimalSpawnerVolumeSky_OnOverlapEnd_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimalSpawnerVolumeSky.OnOverlapBegin
struct AAnimalSpawnerVolumeSky_OnOverlapBegin_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimNotifyState_AG_CharacterTrail.OverridePSTemplate
struct UAnimNotifyState_AG_CharacterTrail_OverridePSTemplate_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimNotifyState_DirectionCamera.OnNotifyEnd
struct UAnimNotifyState_DirectionCamera_OnNotifyEnd_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimNotifyState_DirectionCamera.OnNotifyBegin
struct UAnimNotifyState_DirectionCamera_OnNotifyBegin_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                           Animation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AreaBoundsVolume.OnOverlapEnd
struct AAreaBoundsVolume_OnOverlapEnd_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AreaBoundsVolume.OnOverlapBegin
struct AAreaBoundsVolume_OnOverlapBegin_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.IsSlotAnimationExtend
struct UAT_AnimInstance_IsSlotAnimationExtend_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.IsAdditiveOptions
struct UAT_AnimInstance_IsAdditiveOptions_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.IsAdditiveHair
struct UAT_AnimInstance_IsAdditiveHair_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.IsAdditiveClothes
struct UAT_AnimInstance_IsAdditiveClothes_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.GetOptionsAdditiveAlpha
struct UAT_AnimInstance_GetOptionsAdditiveAlpha_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.GetIsJoinIngameDemo
struct UAT_AnimInstance_GetIsJoinIngameDemo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.GetHairAdditiveAlpha
struct UAT_AnimInstance_GetHairAdditiveAlpha_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.GetClothesAdditiveAlpha
struct UAT_AnimInstance_GetClothesAdditiveAlpha_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.GetCharacter
struct UAT_AnimInstance_GetCharacter_Params
{
	class AAT_CharacterBase*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_AnimInstance.ATStopSlotAnimation
struct UAT_AnimInstance_ATStopSlotAnimation_Params
{
	float                                              InBlendOutTime;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotNodeName;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BaseHUD.CanvasSize
struct AAT_BaseHUD_CanvasSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.UnloadUiCaptureById
struct UAT_BlueprintFunctionLibrary_UnloadUiCaptureById_Params
{
	struct FName                                       MasterId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.UnloadUiCaptureByCharacter
struct UAT_BlueprintFunctionLibrary_UnloadUiCaptureByCharacter_Params
{
	AT_ECHARACTER_TYPE                                 CharacterType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      VariationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FormId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.StopBgm
struct UAT_BlueprintFunctionLibrary_StopBgm_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.StartTrialClearMenu
struct UAT_BlueprintFunctionLibrary_StartTrialClearMenu_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.StartQuest
struct UAT_BlueprintFunctionLibrary_StartQuest_Params
{
	struct FUIQuestInfo                                InQuestInfo;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.SetScreenResolution
struct UAT_BlueprintFunctionLibrary_SetScreenResolution_Params
{
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EWindowMode>                    WindowMode;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.SetKeyGuideType
struct UAT_BlueprintFunctionLibrary_SetKeyGuideType_Params
{
	AT_EKeyGuideType                                   InMode;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.SetKeyGuideTutorialSetting
struct UAT_BlueprintFunctionLibrary_SetKeyGuideTutorialSetting_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.SetKeyGuideCtrlMode
struct UAT_BlueprintFunctionLibrary_SetKeyGuideCtrlMode_Params
{
	AT_EKeyGuideCtrlMode                               InMode;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.SetFieldRideSelectBlock
struct UAT_BlueprintFunctionLibrary_SetFieldRideSelectBlock_Params
{
	bool                                               bBlock;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.ResumeAllParticle
struct UAT_BlueprintFunctionLibrary_ResumeAllParticle_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.RequestLoadUiCaptureById
struct UAT_BlueprintFunctionLibrary_RequestLoadUiCaptureById_Params
{
	struct FName                                       MasterId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.RequestLoadUiCaptureByCharacter
struct UAT_BlueprintFunctionLibrary_RequestLoadUiCaptureByCharacter_Params
{
	AT_ECHARACTER_TYPE                                 CharacterType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      VariationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FormId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.RequestInDisplayPopularNameUI
struct UAT_BlueprintFunctionLibrary_RequestInDisplayPopularNameUI_Params
{
	struct FName                                       nameMsg;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       popularNameMsg;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DispPos;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayTime;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.RequestInDisplayNameUI
struct UAT_BlueprintFunctionLibrary_RequestInDisplayNameUI_Params
{
	struct FName                                       nameMsg;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DispPos;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DisplayTime;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.ReplaceTxtMacro
struct UAT_BlueprintFunctionLibrary_ReplaceTxtMacro_Params
{
	struct FString                                     txtId;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             replaceTxtIdCtn;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.ReplaceIntegerMacro
struct UAT_BlueprintFunctionLibrary_ReplaceIntegerMacro_Params
{
	struct FString                                     txtId;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        replaceIntCtn;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.ReplaceFloatMacro
struct UAT_BlueprintFunctionLibrary_ReplaceFloatMacro_Params
{
	struct FString                                     txtId;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      repplaceFloatCtn;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.ReleaseCooking
struct UAT_BlueprintFunctionLibrary_ReleaseCooking_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.Progress_Set
struct UAT_BlueprintFunctionLibrary_Progress_Set_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                phase_no;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.Progress_Next
struct UAT_BlueprintFunctionLibrary_Progress_Next_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.Progress_GetName
struct UAT_BlueprintFunctionLibrary_Progress_GetName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.Progress_DebugSet
struct UAT_BlueprintFunctionLibrary_Progress_DebugSet_Params
{
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                phase_no;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.PlayBgm
struct UAT_BlueprintFunctionLibrary_PlayBgm_Params
{
	struct FName                                       ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.PhaseID2QuestID
struct UAT_BlueprintFunctionLibrary_PhaseID2QuestID_Params
{
	struct FName                                       InPhaseID;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.PermissionSkill
struct UAT_BlueprintFunctionLibrary_PermissionSkill_Params
{
	struct FName                                       SkillId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.PauseMenu
struct UAT_BlueprintFunctionLibrary_PauseMenu_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.PauseMainQuestTitleAnim
struct UAT_BlueprintFunctionLibrary_PauseMainQuestTitleAnim_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.PauseAllParticle
struct UAT_BlueprintFunctionLibrary_PauseAllParticle_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.OpenItemMenuByTutorialMode
struct UAT_BlueprintFunctionLibrary_OpenItemMenuByTutorialMode_Params
{
	AT_EQuestTutorialType                              TutorialType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.OpenCookingMenuChichiActorName
struct UAT_BlueprintFunctionLibrary_OpenCookingMenuChichiActorName_Params
{
	struct FString                                     ActorName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.OpenCookingMenuChichi
struct UAT_BlueprintFunctionLibrary_OpenCookingMenuChichi_Params
{
	class UActorComponent*                             ownerComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.OpenCommunityMenuByTutorialMode
struct UAT_BlueprintFunctionLibrary_OpenCommunityMenuByTutorialMode_Params
{
	struct FName                                       UniqueId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.LockCooking
struct UAT_BlueprintFunctionLibrary_LockCooking_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.isFlagOn
struct UAT_BlueprintFunctionLibrary_isFlagOn_Params
{
	int                                                Source;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Enum;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.HideKeyGuideUntilQuestCaption
struct UAT_BlueprintFunctionLibrary_HideKeyGuideUntilQuestCaption_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.GetSkyLights
struct UAT_BlueprintFunctionLibrary_GetSkyLights_Params
{
	struct FName                                       TagName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ASkyLight*>                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetSkyConditionManager
struct UAT_BlueprintFunctionLibrary_GetSkyConditionManager_Params
{
	class USkyConditionManager*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetRideManager
struct UAT_BlueprintFunctionLibrary_GetRideManager_Params
{
	class URideManager*                                ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetRaceGameManager
struct UAT_BlueprintFunctionLibrary_GetRaceGameManager_Params
{
	class URaceGameManager*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetQuestManager
struct UAT_BlueprintFunctionLibrary_GetQuestManager_Params
{
	class UQuestManager*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetHeightFogs
struct UAT_BlueprintFunctionLibrary_GetHeightFogs_Params
{
	struct FName                                       TagName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AExponentialHeightFog*>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetDragonBallManager
struct UAT_BlueprintFunctionLibrary_GetDragonBallManager_Params
{
	class UDragonBallManager*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetDemoManageComponent
struct UAT_BlueprintFunctionLibrary_GetDemoManageComponent_Params
{
	class UATDemoManageComponent*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetDefaultGameHud
struct UAT_BlueprintFunctionLibrary_GetDefaultGameHud_Params
{
	class AAT_GameHUD*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetDebugMenu
struct UAT_BlueprintFunctionLibrary_GetDebugMenu_Params
{
	class UDebugMenu*                                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetCharacterName
struct UAT_BlueprintFunctionLibrary_GetCharacterName_Params
{
	struct FString                                     ID;                                                        // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetCaptureManager
struct UAT_BlueprintFunctionLibrary_GetCaptureManager_Params
{
	class UATUiCaptureManager*                         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetBuildConfiguration
struct UAT_BlueprintFunctionLibrary_GetBuildConfiguration_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetBaseballGameManager
struct UAT_BlueprintFunctionLibrary_GetBaseballGameManager_Params
{
	class UBaseballGameManager*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetATVersion
struct UAT_BlueprintFunctionLibrary_GetATVersion_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetAtmosphericFogs
struct UAT_BlueprintFunctionLibrary_GetAtmosphericFogs_Params
{
	struct FName                                       TagName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AAtmosphericFog*>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetATCharacterByType
struct UAT_BlueprintFunctionLibrary_GetATCharacterByType_Params
{
	AT_ECHARACTER_TYPE                                 Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAT_Character*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetATCharacter
struct UAT_BlueprintFunctionLibrary_GetATCharacter_Params
{
	int                                                UniqueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAT_Character*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetAIManager
struct UAT_BlueprintFunctionLibrary_GetAIManager_Params
{
	class UAIManager*                                  ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetAIBase
struct UAT_BlueprintFunctionLibrary_GetAIBase_Params
{
	class APawn*                                       InPawn;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAIBase*                                     ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetActorByTag
struct UAT_BlueprintFunctionLibrary_GetActorByTag_Params
{
	struct FName                                       TagName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetActorByClassTag
struct UAT_BlueprintFunctionLibrary_GetActorByClassTag_Params
{
	class UClass*                                      Class;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TagName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.GetActor
struct UAT_BlueprintFunctionLibrary_GetActor_Params
{
	int                                                UniqueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.ForceRequestOutDisplayNameUI
struct UAT_BlueprintFunctionLibrary_ForceRequestOutDisplayNameUI_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.EnumToBitFlag
struct UAT_BlueprintFunctionLibrary_EnumToBitFlag_Params
{
	int                                                Enum;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.EnableDepthOfField
struct UAT_BlueprintFunctionLibrary_EnableDepthOfField_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enable;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.DebugUnlockAllArea
struct UAT_BlueprintFunctionLibrary_DebugUnlockAllArea_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.ClearBannedSkillSetting
struct UAT_BlueprintFunctionLibrary_ClearBannedSkillSetting_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.CallTutorialTips_IN
struct UAT_BlueprintFunctionLibrary_CallTutorialTips_IN_Params
{
	struct FName                                       TipsId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnforce;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.CallTutorialTips_CONTROL
struct UAT_BlueprintFunctionLibrary_CallTutorialTips_CONTROL_Params
{
	int                                                Input;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.CallMainQuestEnd_IN
struct UAT_BlueprintFunctionLibrary_CallMainQuestEnd_IN_Params
{
	int                                                ChapterNum;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EpisodeNum;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.CallMainQuestEnd_CONTROL
struct UAT_BlueprintFunctionLibrary_CallMainQuestEnd_CONTROL_Params
{
	int                                                Input;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Delta;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.CallMainQuestBegin_OUT
struct UAT_BlueprintFunctionLibrary_CallMainQuestBegin_OUT_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.CallMainQuestBegin_IN
struct UAT_BlueprintFunctionLibrary_CallMainQuestBegin_IN_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.CallFavorRateUp_IN
struct UAT_BlueprintFunctionLibrary_CallFavorRateUp_IN_Params
{
	int                                                Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.CallFavorRateUp_CONTROL
struct UAT_BlueprintFunctionLibrary_CallFavorRateUp_CONTROL_Params
{
	int                                                Input;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_BlueprintFunctionLibrary.CallBossBattleResult
struct UAT_BlueprintFunctionLibrary_CallBossBattleResult_Params
{
};

// Function AT.AT_BlueprintFunctionLibrary.BannedAndRipoffSkill
struct UAT_BlueprintFunctionLibrary_BannedAndRipoffSkill_Params
{
	AT_ECHARACTER_TYPE                                 CharacterType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkillId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.SetLookAtTargetLocation
struct AAT_CharacterBase_SetLookAtTargetLocation_Params
{
	struct FVector                                     Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.SetLookAtTarget
struct AAT_CharacterBase_SetLookAtTarget_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.SetEnableLookAt
struct AAT_CharacterBase_SetEnableLookAt_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.ResetLookAtTargetLocation
struct AAT_CharacterBase_ResetLookAtTargetLocation_Params
{
};

// Function AT.AT_CharacterBase.OnPreChangeAnimationBlueprint
struct AAT_CharacterBase_OnPreChangeAnimationBlueprint_Params
{
	class UClass*                                      InClass;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      InMesh;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.OnPostChangeAnimationBlueprint
struct AAT_CharacterBase_OnPostChangeAnimationBlueprint_Params
{
	class UClass*                                      InClass;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      InMesh;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.OnMontageStarted
struct AAT_CharacterBase_OnMontageStarted_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.OnMontageEnded
struct AAT_CharacterBase_OnMontageEnded_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.OnMontageBlendingOut
struct AAT_CharacterBase_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.OnBluePrintUpdateAnimation
struct AAT_CharacterBase_OnBluePrintUpdateAnimation_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndPreLand2Fly
struct AAT_CharacterBase_OnAnmEndPreLand2Fly_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalWalkStart
struct AAT_CharacterBase_OnAnmEndNormalWalkStart_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalWalkEnd
struct AAT_CharacterBase_OnAnmEndNormalWalkEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalRunStart
struct AAT_CharacterBase_OnAnmEndNormalRunStart_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalRunEnd
struct AAT_CharacterBase_OnAnmEndNormalRunEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalLandBoostPreLoop
struct AAT_CharacterBase_OnAnmEndNormalLandBoostPreLoop_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalLandBoostEnd
struct AAT_CharacterBase_OnAnmEndNormalLandBoostEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyUp
struct AAT_CharacterBase_OnAnmEndNormalFlyUp_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyTurn
struct AAT_CharacterBase_OnAnmEndNormalFlyTurn_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyStop
struct AAT_CharacterBase_OnAnmEndNormalFlyStop_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyStart
struct AAT_CharacterBase_OnAnmEndNormalFlyStart_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyLoop
struct AAT_CharacterBase_OnAnmEndNormalFlyLoop_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyEnd
struct AAT_CharacterBase_OnAnmEndNormalFlyEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyDown
struct AAT_CharacterBase_OnAnmEndNormalFlyDown_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyBoostStop
struct AAT_CharacterBase_OnAnmEndNormalFlyBoostStop_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyBoostRestart
struct AAT_CharacterBase_OnAnmEndNormalFlyBoostRestart_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyBoostPreLoop
struct AAT_CharacterBase_OnAnmEndNormalFlyBoostPreLoop_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalFlyBoostEnd
struct AAT_CharacterBase_OnAnmEndNormalFlyBoostEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndNormalBoostLanding
struct AAT_CharacterBase_OnAnmEndNormalBoostLanding_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndLandTargetStart
struct AAT_CharacterBase_OnAnmEndLandTargetStart_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndLandTargetEnd
struct AAT_CharacterBase_OnAnmEndLandTargetEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndLandNut
struct AAT_CharacterBase_OnAnmEndLandNut_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndLandJumpStart
struct AAT_CharacterBase_OnAnmEndLandJumpStart_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndLandJumpEnd
struct AAT_CharacterBase_OnAnmEndLandJumpEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndLand2FlyNut
struct AAT_CharacterBase_OnAnmEndLand2FlyNut_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndLand2FlyEnd
struct AAT_CharacterBase_OnAnmEndLand2FlyEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndJumpCancelWait
struct AAT_CharacterBase_OnAnmEndJumpCancelWait_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndFallLoop
struct AAT_CharacterBase_OnAnmEndFallLoop_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndBattleStepStart
struct AAT_CharacterBase_OnAnmEndBattleStepStart_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndBattleStepEnd
struct AAT_CharacterBase_OnAnmEndBattleStepEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndAirTrickStart
struct AAT_CharacterBase_OnAnmEndAirTrickStart_Params
{
};

// Function AT.AT_CharacterBase.OnAnmEndAirTrickEnd
struct AAT_CharacterBase_OnAnmEndAirTrickEnd_Params
{
};

// Function AT.AT_CharacterBase.OnAnmBgnNormalFlyUp
struct AAT_CharacterBase_OnAnmBgnNormalFlyUp_Params
{
};

// Function AT.AT_CharacterBase.OnAnmBgnNormalFlyLoop
struct AAT_CharacterBase_OnAnmBgnNormalFlyLoop_Params
{
};

// Function AT.AT_CharacterBase.OnAnmBgnNormalFlyDown
struct AAT_CharacterBase_OnAnmBgnNormalFlyDown_Params
{
};

// Function AT.AT_CharacterBase.OnAnmBgnLandNut
struct AAT_CharacterBase_OnAnmBgnLandNut_Params
{
};

// Function AT.AT_CharacterBase.OnAnmBgnLand2FlyNut
struct AAT_CharacterBase_OnAnmBgnLand2FlyNut_Params
{
};

// Function AT.AT_CharacterBase.OnAnmBgnJumpCancelWait
struct AAT_CharacterBase_OnAnmBgnJumpCancelWait_Params
{
};

// Function AT.AT_CharacterBase.OnAnmBgnFallLoop
struct AAT_CharacterBase_OnAnmBgnFallLoop_Params
{
};

// Function AT.AT_CharacterBase.OnActorHit
struct AAT_CharacterBase_OnActorHit_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.OnActorEndOverlap
struct AAT_CharacterBase_OnActorEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.OnActorBeginOverlap
struct AAT_CharacterBase_OnActorBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.IsGetItemAutoPilotLoopAction
struct AAT_CharacterBase_IsGetItemAutoPilotLoopAction_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.IsFall
struct AAT_CharacterBase_IsFall_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.IsBattleStepStartAction
struct AAT_CharacterBase_IsBattleStepStartAction_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.IsBattleStepLoopAction
struct AAT_CharacterBase_IsBattleStepLoopAction_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.HasFacial
struct AAT_CharacterBase_HasFacial_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.GetLookAtLocation
struct AAT_CharacterBase_GetLookAtLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CharacterBase.GetAnimInstance
struct AAT_CharacterBase_GetAnimInstance_Params
{
	class UAnimInstance*                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.SetHairMorphingValue
struct AAT_Character_SetHairMorphingValue_Params
{
	TArray<struct FName>                               sTargetNames;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsMove;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRepeat;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fvalue;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FMin;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FMax;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fRate;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.SetActorLocationAndRotationDelayProc
struct AAT_Character_SetActorLocationAndRotationDelayProc_Params
{
};

// Function AT.AT_Character.ResetCharacter
struct AAT_Character_ResetCharacter_Params
{
	TEnumAsByte<AT_EATCharacterReset>                  InState;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InPos;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InDir;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.OnReturn
struct AAT_Character_OnReturn_Params
{
};

// Function AT.AT_Character.OnRent
struct AAT_Character_OnRent_Params
{
};

// Function AT.AT_Character.OnLevelUp
struct AAT_Character_OnLevelUp_Params
{
	class AAT_Character*                               Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.OnDemoTiming
struct AAT_Character_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      DemoType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               DemoTiming;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               continueFlag;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.OnCookingTiming
struct AAT_Character_OnCookingTiming_Params
{
	AT_EEventTimingType                                TimingType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.OnAbsorbApplied
struct AAT_Character_OnAbsorbApplied_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.IsWalkAction
struct AAT_Character_IsWalkAction_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.IsTargetCharacter
struct AAT_Character_IsTargetCharacter_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.GetVirtualController
struct AAT_Character_GetVirtualController_Params
{
	class UATVirtualController*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.GetTargetVector
struct AAT_Character_GetTargetVector_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.GetTargetCharacter
struct AAT_Character_GetTargetCharacter_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.GetRestrictMoveControl
struct AAT_Character_GetRestrictMoveControl_Params
{
	class UATRestrictMoveControl*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.DeActiveLeafEffect
struct AAT_Character_DeActiveLeafEffect_Params
{
};

// Function AT.AT_Character.CheckIsApplyBoostCameraShake
struct AAT_Character_CheckIsApplyBoostCameraShake_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_Character.ActiveLeafEffect
struct AAT_Character_ActiveLeafEffect_Params
{
	class UParticleSystem*                             LeafEffect;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDamageCollisionBase.EndOverlap
struct AATDamageCollisionBase_EndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDamageCollisionBase.BeginOverlap
struct AATDamageCollisionBase_BeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.AT_DamageExpCharacter.ApplyAppearance
struct AAT_DamageExpCharacter_ApplyAppearance_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_DepthOfFieldManager.OnDemoTiming
struct UAT_DepthOfFieldManager_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      DemoType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               DemoTiming;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bContinueFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.TickTrail
struct UAT_EffectStatics_TickTrail_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FirstSocketName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SecondSocketName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETrailWidthMode>                WidthMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.IsNearlyGround
struct UAT_EffectStatics_IsNearlyGround_Params
{
	class AActor*                                      Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.IsNearly
struct UAT_EffectStatics_IsNearly_Params
{
	class AActor*                                      Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.IsNearCamera
struct UAT_EffectStatics_IsNearCamera_Params
{
	struct FVector                                     ImpactPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              thre;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.EnlargeEffect
struct UAT_EffectStatics_EnlargeEffect_Params
{
	class UParticleSystemComponent*                    Component;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KamehaSize;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OtherSmokeSize;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.EndTrail
struct UAT_EffectStatics_EndTrail_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.DrawPhysicalSurfaceDebug
struct UAT_EffectStatics_DrawPhysicalSurfaceDebug_Params
{
	class AActor*                                      Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETraceTypeQuery>                TraceType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  res;                                                       // (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     vStart;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     vEnd;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.CallHitEffectCPP
struct UAT_EffectStatics_CallHitEffectCPP_Params
{
	struct FVector                                     HitPosition;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Origin;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      HitActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             Effect;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                      AttachToActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.CallGuardHitEffectCPP
struct UAT_EffectStatics_CallGuardHitEffectCPP_Params
{
	class AActor*                                      HitActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      DamageOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             EffectType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetSize;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_EffectStatics.BeginTrail
struct UAT_EffectStatics_BeginTrail_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             pParticle;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FirstSocketName;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SecondSocketName;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETrailWidthMode>                WidthMode;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               DestroyOtherParticle;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.SetWidePosition
struct AAT_GameHUD_SetWidePosition_Params
{
	bool                                               bWidePosition;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.SetHudVisible
struct AAT_GameHUD_SetHudVisible_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.ResetDragonBallComp
struct AAT_GameHUD_ResetDragonBallComp_Params
{
};

// Function AT.AT_GameHUD.OnVisibleMobSerif
struct AAT_GameHUD_OnVisibleMobSerif_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.OnVisibleDragonBallActIcon
struct AAT_GameHUD_OnVisibleDragonBallActIcon_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pActor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.OnSpawnedDragonball
struct AAT_GameHUD_OnSpawnedDragonball_Params
{
	class AActor*                                      pActor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nDbIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.OnMobMessage
struct AAT_GameHUD_OnMobMessage_Params
{
	struct FString                                     Speaker;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               buttonVisible;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.OnMobFrontMessage
struct AAT_GameHUD_OnMobFrontMessage_Params
{
	struct FString                                     Speaker;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               buttonVisible;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.OnLoadCompleted
struct AAT_GameHUD_OnLoadCompleted_Params
{
};

// Function AT.AT_GameHUD.OnGetDragonball
struct AAT_GameHUD_OnGetDragonball_Params
{
	class AActor*                                      pActor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nDbIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.OnEnableBalloonDragonball
struct AAT_GameHUD_OnEnableBalloonDragonball_Params
{
	class AActor*                                      pActor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nDbIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.OnDisableBalloonDragonball
struct AAT_GameHUD_OnDisableBalloonDragonball_Params
{
	class AActor*                                      pActor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nDbIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.OnDemoTiming
struct AAT_GameHUD_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      DemoType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               DemoTiming;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               continueFlag;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.GetUIMiniGameManager
struct AAT_GameHUD_GetUIMiniGameManager_Params
{
	class UAT_UIMiniGameManager*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameHUD.GetUIFieldManager
struct AAT_GameHUD_GetUIFieldManager_Params
{
	class UAT_UIFieldManager*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameInstance.LLM_ManualOutput
struct UAT_GameInstance_LLM_ManualOutput_Params
{
};

// Function AT.AT_GameInstance.GetLoadScreen
struct UAT_GameInstance_GetLoadScreen_Params
{
	class UAT_UILoadingScreen*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameInstance.GetInstallUI
struct UAT_GameInstance_GetInstallUI_Params
{
	class UAT_UIXcmnInstall*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameInstance.GetCmnSystemIcon
struct UAT_GameInstance_GetCmnSystemIcon_Params
{
	class UAT_UIXcmnSystemIcon*                        ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameInstance.GetCmnSystemDialog
struct UAT_GameInstance_GetCmnSystemDialog_Params
{
	class UAT_UIXcmnSystemDialog*                      ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameInstance.GetCmnFade
struct UAT_GameInstance_GetCmnFade_Params
{
	class UAT_UICmnFade*                               ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_GameInstance.CompleteLoadTerrainDecorateResouces
struct UAT_GameInstance_CompleteLoadTerrainDecorateResouces_Params
{
};

// Function AT.AT_LightTowerEffectComponent.OnQuestTiming
struct UAT_LightTowerEffectComponent_OnQuestTiming_Params
{
	AT_EQUEST_ACTOR_TIMING_TYPE                        Timing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.NpcPawn.GetNpcMovementComponent
struct ANpcPawn_GetNpcMovementComponent_Params
{
	class UNpcMovementComponent*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_MobBase.WalkingMoveDelegate_CallBack
struct AAT_MobBase_WalkingMoveDelegate_CallBack_Params
{
};

// Function AT.AT_MobBase.SpawnFallStart_CallBack
struct AAT_MobBase_SpawnFallStart_CallBack_Params
{
};

// Function AT.AT_MobBase.SpawnFallEnd_CallBack
struct AAT_MobBase_SpawnFallEnd_CallBack_Params
{
};

// Function AT.AT_MobBase.OnCollisionHit
struct AAT_MobBase_OnCollisionHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.AT_MobAnimalBase.OnActionChange
struct AAT_MobAnimalBase_OnActionChange_Params
{
	class AAT_Character*                               InCharacter;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdPrev;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdNext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_MobAnimalBase.Get_AnimalParameter
struct AAT_MobAnimalBase_Get_AnimalParameter_Params
{
	struct FAnimalParameterTable                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_MobCharacter.CreateMessageWindow
struct AAT_MobCharacter_CreateMessageWindow_Params
{
};

// Function AT.AT_TriggerStaticActorInterface.IsTouch
struct UAT_TriggerStaticActorInterface_IsTouch_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureOptional.CompleteLoad
struct UAT_UI3DCaptureOptional_CompleteLoad_Params
{
	class UATDataAssetUiCaptureAsyncLoad*              loader;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATUIUserWidget.SetForceTick
struct UATUIUserWidget_SetForceTick_Params
{
	bool                                               IsOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.Zoom
struct UAT_UI3DCaptureWidget_Zoom_Params
{
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.UpdateCameraTransform
struct UAT_UI3DCaptureWidget_UpdateCameraTransform_Params
{
};

// Function AT.AT_UI3DCaptureWidget.UnLoadModel
struct UAT_UI3DCaptureWidget_UnLoadModel_Params
{
};

// Function AT.AT_UI3DCaptureWidget.SetRenderTargetFromIndex
struct UAT_UI3DCaptureWidget_SetRenderTargetFromIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.SetRenderTargetEvent
struct UAT_UI3DCaptureWidget_SetRenderTargetEvent_Params
{
};

// Function AT.AT_UI3DCaptureWidget.SetModelInitRotation
struct UAT_UI3DCaptureWidget_SetModelInitRotation_Params
{
	float                                              XAngle;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YAngle;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZAngle;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.SetModelColor
struct UAT_UI3DCaptureWidget_SetModelColor_Params
{
	struct FLinearColor                                Color;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.SetLoadIcon
struct UAT_UI3DCaptureWidget_SetLoadIcon_Params
{
	class UWidget*                                     Widget;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.SetFOV
struct UAT_UI3DCaptureWidget_SetFOV_Params
{
	float                                              FOV;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.SetCameraTransform
struct UAT_UI3DCaptureWidget_SetCameraTransform_Params
{
	struct FTransform                                  Trans;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.LoadParticle
struct UAT_UI3DCaptureWidget_LoadParticle_Params
{
	struct FString                                     ParticlePath;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MasterId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.LoadModelByUniqueId
struct UAT_UI3DCaptureWidget_LoadModelByUniqueId_Params
{
	AT_ECHARACTER_TYPE                                 Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UniqueId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      form;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FaceId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.LoadModelById
struct UAT_UI3DCaptureWidget_LoadModelById_Params
{
	struct FName                                       MasterId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.LoadModelByCharacterType
struct UAT_UI3DCaptureWidget_LoadModelByCharacterType_Params
{
	AT_ECHARACTER_TYPE                                 Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      form;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FaceId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.LoadModel
struct UAT_UI3DCaptureWidget_LoadModel_Params
{
	struct FString                                     ModelPath;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimPath;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimBPPath;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MontagePath;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MasterId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.IsLoaded
struct UAT_UI3DCaptureWidget_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.GetZoomRate
struct UAT_UI3DCaptureWidget_GetZoomRate_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.GetCurrentModelColor
struct UAT_UI3DCaptureWidget_GetCurrentModelColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.GetCameraTransform
struct UAT_UI3DCaptureWidget_GetCameraTransform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.GetCameraLocation
struct UAT_UI3DCaptureWidget_GetCameraLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.DestroyPostProcess
struct UAT_UI3DCaptureWidget_DestroyPostProcess_Params
{
};

// Function AT.AT_UI3DCaptureWidget.Destroy
struct UAT_UI3DCaptureWidget_Destroy_Params
{
};

// Function AT.AT_UI3DCaptureWidget.CreatePostProcess
struct UAT_UI3DCaptureWidget_CreatePostProcess_Params
{
};

// Function AT.AT_UI3DCaptureWidget.CompleteLoadVariation
struct UAT_UI3DCaptureWidget_CompleteLoadVariation_Params
{
	class UATDataAssetVariationMeshAsyncLoad*          loader;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.CompleteLoadFormId
struct UAT_UI3DCaptureWidget_CompleteLoadFormId_Params
{
	class UATDataAssetUiCaptureAsyncLoad*              loader;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.CompleteLoadForm
struct UAT_UI3DCaptureWidget_CompleteLoadForm_Params
{
	class UATDataAssetFormMeshAsyncLoad*               loader;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.CompleteLoadFacialParts
struct UAT_UI3DCaptureWidget_CompleteLoadFacialParts_Params
{
	class UATDataAssetFacialAsyncLoad*                 loader;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.AddTranslate
struct UAT_UI3DCaptureWidget_AddTranslate_Params
{
	float                                              X;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Y;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Z;                                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.AddRotationHorizontal
struct UAT_UI3DCaptureWidget_AddRotationHorizontal_Params
{
	float                                              InPower;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UI3DCaptureWidget.AddRotation
struct UAT_UI3DCaptureWidget_AddRotation_Params
{
	float                                              XAngle;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YAngle;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ZAngle;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleCond.OnStartEventBattle
struct UAT_UIBattleCond_OnStartEventBattle_Params
{
};

// Function AT.AT_UIBattleCond.OnEndEventBattle
struct UAT_UIBattleCond_OnEndEventBattle_Params
{
};

// Function AT.AT_UIBattleCond.OnBattleCutinEnd
struct UAT_UIBattleCond_OnBattleCutinEnd_Params
{
	AT_EBattleCutin_AnimType                           InAnimType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleCond.ConstructFirstOnly
struct UAT_UIBattleCond_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIBattleHudEnemy.SetDebugHpMax
struct UAT_UIBattleHudEnemy_SetDebugHpMax_Params
{
	int                                                InMax;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudEnemy.SetDebugHp
struct UAT_UIBattleHudEnemy_SetDebugHp_Params
{
	int                                                InVal;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnim;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudEnemy.SetDebugBreakMax
struct UAT_UIBattleHudEnemy_SetDebugBreakMax_Params
{
	int                                                InMax;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudEnemy.SetDebugBreak
struct UAT_UIBattleHudEnemy_SetDebugBreak_Params
{
	int                                                InVal;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAnim;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudEnemy.SetDebugBarMax
struct UAT_UIBattleHudEnemy_SetDebugBarMax_Params
{
	int                                                InBar;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudEnemy.OnEvtBattleStart
struct UAT_UIBattleHudEnemy_OnEvtBattleStart_Params
{
};

// Function AT.AT_UIBattleHudEnemy.OnEvtBattleEnd
struct UAT_UIBattleHudEnemy_OnEvtBattleEnd_Params
{
};

// Function AT.AT_UIBattleHudEnemy.OnChangeTarget
struct UAT_UIBattleHudEnemy_OnChangeTarget_Params
{
	class AAT_Character*                               InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InTargetEnemy;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudEnemy.OnBattleStart
struct UAT_UIBattleHudEnemy_OnBattleStart_Params
{
};

// Function AT.AT_UIBattleHudEnemy.OnBattleEnd
struct UAT_UIBattleHudEnemy_OnBattleEnd_Params
{
};

// Function AT.AT_UIBattleHudPlayer.OutEvent
struct UAT_UIBattleHudPlayer_OutEvent_Params
{
};

// Function AT.AT_UIBattleHudPlayer.OnFormChange
struct UAT_UIBattleHudPlayer_OnFormChange_Params
{
	bool                                               IsOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      VariationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FormId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudPlayer.OnExitSupport
struct UAT_UIBattleHudPlayer_OnExitSupport_Params
{
	struct FPartyMember                                InMember;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      InMemberType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudPlayer.OnEntrySupport
struct UAT_UIBattleHudPlayer_OnEntrySupport_Params
{
	struct FPartyMember                                InMember;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      InMemberType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudPlayer.OnChangePlayer
struct UAT_UIBattleHudPlayer_OnChangePlayer_Params
{
	class AAT_Character*                               InChar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudPlayer.OnChangeCostume
struct UAT_UIBattleHudPlayer_OnChangeCostume_Params
{
	unsigned char                                      InVatiationID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InFormID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudPlayer.OnBeginFormChange
struct UAT_UIBattleHudPlayer_OnBeginFormChange_Params
{
};

// Function AT.AT_UIBattleHudPlayer.OnBeginCoopSkill
struct UAT_UIBattleHudPlayer_OnBeginCoopSkill_Params
{
};

// Function AT.AT_UIBattleHudPlayer.OnBattleStart
struct UAT_UIBattleHudPlayer_OnBattleStart_Params
{
};

// Function AT.AT_UIBattleHudPlayer.OnBattleEnd
struct UAT_UIBattleHudPlayer_OnBattleEnd_Params
{
};

// Function AT.AT_UIBattleHudPlayer.Change_Char
struct UAT_UIBattleHudPlayer_Change_Char_Params
{
};

// Function AT.AT_UIBattleHudPlayerSpo.OnUpdateSkill
struct UAT_UIBattleHudPlayerSpo_OnUpdateSkill_Params
{
};

// Function AT.AT_UIBattleHudPlayerSpo.OnSkillBegin
struct UAT_UIBattleHudPlayerSpo_OnSkillBegin_Params
{
	class USkill*                                      Skill;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleHudPlayerSpo.OnFormChange
struct UAT_UIBattleHudPlayerSpo_OnFormChange_Params
{
	bool                                               IsOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InVariationID;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InFormID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleManager.OnPause
struct UAT_UIBattleManager_OnPause_Params
{
	struct FEventParam                                 EventParam;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleManager.OnBattleCutinAnimEnd
struct UAT_UIBattleManager_OnBattleCutinAnimEnd_Params
{
	AT_EBattleCutin_AnimType                           InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleMsgBreak_Lang.ConstructFirstOnly
struct UAT_UIBattleMsgBreak_Lang_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIBattleRescueParts.OnBattleStart
struct UAT_UIBattleRescueParts_OnBattleStart_Params
{
};

// Function AT.AT_UIBattleResult.TestRequestAnim
struct UAT_UIBattleResult_TestRequestAnim_Params
{
	int                                                animType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleResult.StartAnimRank
struct UAT_UIBattleResult_StartAnimRank_Params
{
};

// Function AT.AT_UIBattleResult.StartAnimCloudStart
struct UAT_UIBattleResult_StartAnimCloudStart_Params
{
};

// Function AT.AT_UIBattleResult.RequestStartAnim
struct UAT_UIBattleResult_RequestStartAnim_Params
{
	int                                                Rank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalExp;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleResult.InitSetting
struct UAT_UIBattleResult_InitSetting_Params
{
};

// Function AT.AT_UIBattleTipsList.SetText
struct UAT_UIBattleTipsList_SetText_Params
{
	struct FName                                       InBtnMsgId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InOpeMsgId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleTipsList.SetOffSet
struct UAT_UIBattleTipsList_SetOffSet_Params
{
	float                                              Offset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleTipsTutorial.SetTutorialQuestSetting
struct UAT_UIBattleTipsTutorial_SetTutorialQuestSetting_Params
{
};

// Function AT.AT_UIBattleTipsTutorial.SetGuideType
struct UAT_UIBattleTipsTutorial_SetGuideType_Params
{
	AT_EKeyGuideType                                   InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleTipsTutorial.SetCtrlMode
struct UAT_UIBattleTipsTutorial_SetCtrlMode_Params
{
	AT_EKeyGuideCtrlMode                               InMode;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleTipsTutorial.PlayIn
struct UAT_UIBattleTipsTutorial_PlayIn_Params
{
};

// Function AT.AT_UIBattleTipsTutorial.OnChangePlayer
struct UAT_UIBattleTipsTutorial_OnChangePlayer_Params
{
	class AAT_Character*                               InChar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBattleTipsTutorial.OnBattleStart
struct UAT_UIBattleTipsTutorial_OnBattleStart_Params
{
};

// Function AT.AT_UIBattleTipsTutorial.OnBattleEnd
struct UAT_UIBattleTipsTutorial_OnBattleEnd_Params
{
};

// Function AT.AT_UIBootLogo.IsLoadComplete
struct UAT_UIBootLogo_IsLoadComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBootLogo.IsComplete
struct UAT_UIBootLogo_IsComplete_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIChoiceWin.Choice_Exit
struct UAT_UIChoiceWin_Choice_Exit_Params
{
};

// Function AT.AT_UIMenuListBase00.ShowAllNut
struct UAT_UIMenuListBase00_ShowAllNut_Params
{
};

// Function AT.AT_UIMenuListBase00.SetWidth
struct UAT_UIMenuListBase00_SetWidth_Params
{
	float                                              Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.SetThinMode
struct UAT_UIMenuListBase00_SetThinMode_Params
{
	bool                                               bIsThin;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.SetListAllActive
struct UAT_UIMenuListBase00_SetListAllActive_Params
{
};

// Function AT.AT_UIMenuListBase00.SetListActive
struct UAT_UIMenuListBase00_SetListActive_Params
{
	bool                                               bIsActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                startIdx;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                endIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.SetEnableLoop
struct UAT_UIMenuListBase00_SetEnableLoop_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.SelectUp
struct UAT_UIMenuListBase00_SelectUp_Params
{
};

// Function AT.AT_UIMenuListBase00.SelectDown
struct UAT_UIMenuListBase00_SelectDown_Params
{
};

// Function AT.AT_UIMenuListBase00.RequestPlayOutAnim
struct UAT_UIMenuListBase00_RequestPlayOutAnim_Params
{
};

// Function AT.AT_UIMenuListBase00.RequestPlayInAnim
struct UAT_UIMenuListBase00_RequestPlayInAnim_Params
{
};

// Function AT.AT_UIMenuListBase00.RequestEnterAnim
struct UAT_UIMenuListBase00_RequestEnterAnim_Params
{
	bool                                               isEndDeactive;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isOut;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.PageUp
struct UAT_UIMenuListBase00_PageUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.PageDown
struct UAT_UIMenuListBase00_PageDown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.MouseWheel
struct UAT_UIMenuListBase00_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.InitSkillListSetting
struct UAT_UIMenuListBase00_InitSkillListSetting_Params
{
	struct FString                                     titleTxt;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCmnSkillMenuList00Param>            menuItemCtn;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                selectNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.InitListSetting
struct UAT_UIMenuListBase00_InitListSetting_Params
{
	struct FString                                     titleTxt;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     numTxt;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCmnMenuList00Param>                 menuItemCtn;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                selectNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isRankStar;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.HideAllNut
struct UAT_UIMenuListBase00_HideAllNut_Params
{
};

// Function AT.AT_UIMenuListBase00.GetSelectValue
struct UAT_UIMenuListBase00_GetSelectValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.GetListNum
struct UAT_UIMenuListBase00_GetListNum_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase00.ForceSetSelect
struct UAT_UIMenuListBase00_ForceSetSelect_Params
{
	int                                                NO;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsPlayInAnim;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmn00MenuList7.RequestPlayActiveAnim
struct UAT_UICmn00MenuList7_RequestPlayActiveAnim_Params
{
};

// Function AT.AT_UIMenuListBase01.UpdateList
struct UAT_UIMenuListBase01_UpdateList_Params
{
};

// Function AT.AT_UIMenuListBase01.SubtractionMenuNum
struct UAT_UIMenuListBase01_SubtractionMenuNum_Params
{
};

// Function AT.AT_UIMenuListBase01.ShowAllNut
struct UAT_UIMenuListBase01_ShowAllNut_Params
{
};

// Function AT.AT_UIMenuListBase01.SetEnableLoop
struct UAT_UIMenuListBase01_SetEnableLoop_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase01.SelectUp
struct UAT_UIMenuListBase01_SelectUp_Params
{
};

// Function AT.AT_UIMenuListBase01.SelectDown
struct UAT_UIMenuListBase01_SelectDown_Params
{
};

// Function AT.AT_UIMenuListBase01.ResetAllAnim
struct UAT_UIMenuListBase01_ResetAllAnim_Params
{
};

// Function AT.AT_UIMenuListBase01.RequestPlayOutAnim
struct UAT_UIMenuListBase01_RequestPlayOutAnim_Params
{
	bool                                               isFade;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase01.RequestPlayInAnim
struct UAT_UIMenuListBase01_RequestPlayInAnim_Params
{
	bool                                               isFade;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase01.RequestPlayEnterAnim
struct UAT_UIMenuListBase01_RequestPlayEnterAnim_Params
{
};

// Function AT.AT_UIMenuListBase01.PageUp
struct UAT_UIMenuListBase01_PageUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase01.PageDown
struct UAT_UIMenuListBase01_PageDown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase01.MouseWheel
struct UAT_UIMenuListBase01_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase01.InitListSetting
struct UAT_UIMenuListBase01_InitListSetting_Params
{
	struct FString                                     titleTxt;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     numTxt;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCmnMenuListParam>                   menuItemCtn;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                selectNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               allDisp;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase01.HideAllNut
struct UAT_UIMenuListBase01_HideAllNut_Params
{
};

// Function AT.AT_UIMenuListBase01.GetSelectValue
struct UAT_UIMenuListBase01_GetSelectValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuBarBase03.ShowAllNut
struct UAT_UIMenuBarBase03_ShowAllNut_Params
{
};

// Function AT.AT_UIMenuBarBase03.SetEnableLoop
struct UAT_UIMenuBarBase03_SetEnableLoop_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuBarBase03.SelectUp
struct UAT_UIMenuBarBase03_SelectUp_Params
{
};

// Function AT.AT_UIMenuBarBase03.SelectDown
struct UAT_UIMenuBarBase03_SelectDown_Params
{
};

// Function AT.AT_UIMenuBarBase03.RequestPlayOutAnim
struct UAT_UIMenuBarBase03_RequestPlayOutAnim_Params
{
};

// Function AT.AT_UIMenuBarBase03.RequestPlayInAnim
struct UAT_UIMenuBarBase03_RequestPlayInAnim_Params
{
};

// Function AT.AT_UIMenuBarBase03.PlayEnter
struct UAT_UIMenuBarBase03_PlayEnter_Params
{
};

// Function AT.AT_UIMenuBarBase03.PlayDecide
struct UAT_UIMenuBarBase03_PlayDecide_Params
{
};

// Function AT.AT_UIMenuBarBase03.PlayCancel
struct UAT_UIMenuBarBase03_PlayCancel_Params
{
};

// Function AT.AT_UIMenuBarBase03.PlayArrow
struct UAT_UIMenuBarBase03_PlayArrow_Params
{
	bool                                               bLeft;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuBarBase03.PageUp
struct UAT_UIMenuBarBase03_PageUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuBarBase03.PageDown
struct UAT_UIMenuBarBase03_PageDown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuBarBase03.MouseWheel
struct UAT_UIMenuBarBase03_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuBarBase03.InitListSetting
struct UAT_UIMenuBarBase03_InitListSetting_Params
{
	TArray<struct FCmnMenuBar03Param>                  menuItemCtn;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                selectNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuBarBase03.HideAllNut
struct UAT_UIMenuBarBase03_HideAllNut_Params
{
};

// Function AT.AT_UIMenuBarBase03.GetSelectValue
struct UAT_UIMenuBarBase03_GetSelectValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase03.ShowAllNut
struct UAT_UIMenuListBase03_ShowAllNut_Params
{
};

// Function AT.AT_UIMenuListBase03.SetEnableLoop
struct UAT_UIMenuListBase03_SetEnableLoop_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase03.SelectUp
struct UAT_UIMenuListBase03_SelectUp_Params
{
};

// Function AT.AT_UIMenuListBase03.SelectDown
struct UAT_UIMenuListBase03_SelectDown_Params
{
};

// Function AT.AT_UIMenuListBase03.RequestPlayOutAnim
struct UAT_UIMenuListBase03_RequestPlayOutAnim_Params
{
};

// Function AT.AT_UIMenuListBase03.RequestPlayInAnim
struct UAT_UIMenuListBase03_RequestPlayInAnim_Params
{
};

// Function AT.AT_UIMenuListBase03.RequestPlayEnterAnim
struct UAT_UIMenuListBase03_RequestPlayEnterAnim_Params
{
};

// Function AT.AT_UIMenuListBase03.PageUp
struct UAT_UIMenuListBase03_PageUp_Params
{
};

// Function AT.AT_UIMenuListBase03.PageDown
struct UAT_UIMenuListBase03_PageDown_Params
{
};

// Function AT.AT_UIMenuListBase03.InitListSetting
struct UAT_UIMenuListBase03_InitListSetting_Params
{
	struct FString                                     titleTxt;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCmnMenuList03Param>                 menuItemCtn;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                selectNo;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase03.HideAllNut
struct UAT_UIMenuListBase03_HideAllNut_Params
{
};

// Function AT.AT_UIMenuListBase03.GetSelectValue
struct UAT_UIMenuListBase03_GetSelectValue_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase06.SelectUp
struct UAT_UIMenuListBase06_SelectUp_Params
{
};

// Function AT.AT_UIMenuListBase06.SelectDown
struct UAT_UIMenuListBase06_SelectDown_Params
{
};

// Function AT.AT_UIMenuListBase06.PageUp
struct UAT_UIMenuListBase06_PageUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase06.PageDown
struct UAT_UIMenuListBase06_PageDown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuListBase06.MouseWheel
struct UAT_UIMenuListBase06_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmnFade.StartFade
struct UAT_UICmnFade_StartFade_Params
{
	AT_EUMG_FADE_TYPE                                  FadeType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EUMG_FADE_COLOR                                 FadeColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              fadeSecond;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ETWEEN_TYPE                                     tweenType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UILoadingScreen.UpdateProgress
struct UAT_UILoadingScreen_UpdateProgress_Params
{
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UILoadingScreen.SetVisibleProgressBar
struct UAT_UILoadingScreen_SetVisibleProgressBar_Params
{
};

// Function AT.AT_UILoadingScreen.RequestPlayOutAnim
struct UAT_UILoadingScreen_RequestPlayOutAnim_Params
{
};

// Function AT.AT_UILoadingScreen.RequestPlayInAnim
struct UAT_UILoadingScreen_RequestPlayInAnim_Params
{
};

// Function AT.AT_UILoadingScreen.IsInactive
struct UAT_UILoadingScreen_IsInactive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UILoadingScreen.IsEndAnim
struct UAT_UILoadingScreen_IsEndAnim_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UILoadingScreen.InitSetting
struct UAT_UILoadingScreen_InitSetting_Params
{
	bool                                               IsSimple;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UILoadingScreen.Ev_Anm_Change_Tips00
struct UAT_UILoadingScreen_Ev_Anm_Change_Tips00_Params
{
};

// Function AT.AT_UICmnLoadingBar.SetProgress
struct UAT_UICmnLoadingBar_SetProgress_Params
{
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmnLoadingBar.RequestPlayOutAnim
struct UAT_UICmnLoadingBar_RequestPlayOutAnim_Params
{
};

// Function AT.AT_UICmnLoadingBar.RequestPlayInAnim
struct UAT_UICmnLoadingBar_RequestPlayInAnim_Params
{
};

// Function AT.AT_UICmnLoadingBar.IsEndAnim
struct UAT_UICmnLoadingBar_IsEndAnim_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmnTab.SetEnableSelect
struct UAT_UICmnTab_SetEnableSelect_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmnTab.SetEnable
struct UAT_UICmnTab_SetEnable_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmnTab.SetDisableSelectAll
struct UAT_UICmnTab_SetDisableSelectAll_Params
{
};

// Function AT.AT_UICmnTab.RequestPlayEnterAnim
struct UAT_UICmnTab_RequestPlayEnterAnim_Params
{
	bool                                               isLeftArraw;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmnTab.InitCategoryIcon
struct UAT_UICmnTab_InitCategoryIcon_Params
{
	TArray<struct FCmnTabIconParam>                    IconTypeCtn;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmnTab.ChangeEnableSelect
struct UAT_UICmnTab_ChangeEnableSelect_Params
{
	bool                                               isLeft;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICmnTabIcon.IconClickEvent
struct UAT_UICmnTabIcon_IconClickEvent_Params
{
};

// Function AT.AT_UICommandPalette.OnSkillBegin
struct UAT_UICommandPalette_OnSkillBegin_Params
{
	class USkill*                                      Skill;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommandPalette.OnPlayerChange
struct UAT_UICommandPalette_OnPlayerChange_Params
{
	class AAT_Character*                               Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommandPalette.OnExitSupport
struct UAT_UICommandPalette_OnExitSupport_Params
{
	struct FPartyMember                                InMember;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      InMemberType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommandPalette.OnEntrySupport
struct UAT_UICommandPalette_OnEntrySupport_Params
{
	struct FPartyMember                                InMember;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      InMemberType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommandPalette.OnBeginCoopSkill
struct UAT_UICommandPalette_OnBeginCoopSkill_Params
{
};

// Function AT.AT_UICommandPalette.OnBattleStart
struct UAT_UICommandPalette_OnBattleStart_Params
{
};

// Function AT.AT_UICommandPalette.OnBattleEnd
struct UAT_UICommandPalette_OnBattleEnd_Params
{
};

// Function AT.AT_UICommunityBoard.StartHeader
struct UAT_UICommunityBoard_StartHeader_Params
{
};

// Function AT.AT_UICommunityBoard.SetSelectTab
struct UAT_UICommunityBoard_SetSelectTab_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommunityBoard.PlayOutCommRank
struct UAT_UICommunityBoard_PlayOutCommRank_Params
{
};

// Function AT.AT_UICommunityBoard.PlayInCommRank
struct UAT_UICommunityBoard_PlayInCommRank_Params
{
};

// Function AT.AT_UICommunityBoard.MouseClickTabRight
struct UAT_UICommunityBoard_MouseClickTabRight_Params
{
};

// Function AT.AT_UICommunityBoard.MouseClickTabLeft
struct UAT_UICommunityBoard_MouseClickTabLeft_Params
{
};

// Function AT.AT_UICommunityBoard.MouseClickDecide
struct UAT_UICommunityBoard_MouseClickDecide_Params
{
};

// Function AT.AT_UICommunityBoard.EndHeader
struct UAT_UICommunityBoard_EndHeader_Params
{
};

// Function AT.AT_UICommunityBoard.CheckHovered
struct UAT_UICommunityBoard_CheckHovered_Params
{
};

// Function AT.AT_UICommunityBoard_PanelFrame.SetReleaseLevel
struct UAT_UICommunityBoard_PanelFrame_SetReleaseLevel_Params
{
	int                                                RelLv;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommunityBoard_PanelFrame.OnLinkBonusChange
struct UAT_UICommunityBoard_PanelFrame_OnLinkBonusChange_Params
{
	struct FName                                       LinkBonusID;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOccur;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommunityBoard_PanelFrame.Evt_Anm_Get_Emb
struct UAT_UICommunityBoard_PanelFrame_Evt_Anm_Get_Emb_Params
{
};

// Function AT.AT_UICommunityBoard_PanelFrame.Evt_Anm_Change_Emb
struct UAT_UICommunityBoard_PanelFrame_Evt_Anm_Change_Emb_Params
{
};

// Function AT.AT_UICommunityBoardDetail.SetPreSubLv
struct UAT_UICommunityBoardDetail_SetPreSubLv_Params
{
	ATExt_ECOMMUNITY_CATEGORY                          InCate;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InLv;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommunityBoardDetail.SetCategory
struct UAT_UICommunityBoardDetail_SetCategory_Params
{
	ATExt_ECOMMUNITY_CATEGORY                          InCate;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommunityBoardDetail.Evt_Anim_Rank_Up
struct UAT_UICommunityBoardDetail_Evt_Anim_Rank_Up_Params
{
};

// Function AT.AT_UICommunityBoardDetail.CommitMove
struct UAT_UICommunityBoardDetail_CommitMove_Params
{
};

// Function AT.AT_UICommunityBoardDetail.CancelMove
struct UAT_UICommunityBoardDetail_CancelMove_Params
{
};

// Function AT.AT_UICommunityManager.OnLoadWidget
struct UAT_UICommunityManager_OnLoadWidget_Params
{
	class UATDataAssetUiAsyncLoad*                     InLoader;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommunityManager.OnLoadTexture
struct UAT_UICommunityManager_OnLoadTexture_Params
{
	struct FString                                     InPath;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  InTexture;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommunityStart.StartHeader
struct UAT_UICommunityStart_StartHeader_Params
{
};

// Function AT.AT_UICommunityStart.OnOutEnd
struct UAT_UICommunityStart_OnOutEnd_Params
{
};

// Function AT.AT_UICommunityStart.OnInEnd
struct UAT_UICommunityStart_OnInEnd_Params
{
};

// Function AT.AT_UICommunityStart.MouseClickTabRight
struct UAT_UICommunityStart_MouseClickTabRight_Params
{
};

// Function AT.AT_UICommunityStart.MouseClickTabLeft
struct UAT_UICommunityStart_MouseClickTabLeft_Params
{
};

// Function AT.AT_UICommunityStart.MouseClickDecide
struct UAT_UICommunityStart_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICommunityStart.EndHeader
struct UAT_UICommunityStart_EndHeader_Params
{
};

// Function AT.AT_UICommunityStart.ConstructFirstOnly
struct UAT_UICommunityStart_ConstructFirstOnly_Params
{
};

// Function AT.AT_UICommunityStart.CheckHovered
struct UAT_UICommunityStart_CheckHovered_Params
{
};

// Function AT.AT_UICommunityStart_EmbList.OnOutEnd
struct UAT_UICommunityStart_EmbList_OnOutEnd_Params
{
};

// Function AT.AT_UICommunityStart_EmbList.OnInEnd
struct UAT_UICommunityStart_EmbList_OnInEnd_Params
{
};

// Function AT.AT_UICommunityStart_EmbList.ConstructFirstOnly
struct UAT_UICommunityStart_EmbList_ConstructFirstOnly_Params
{
};

// Function AT.AT_UICompZListCds.Anim_In
struct UAT_UICompZListCds_Anim_In_Params
{
};

// Function AT.AT_UICookingComplete.Start_Dev_Level
struct UAT_UICookingComplete_Start_Dev_Level_Params
{
};

// Function AT.AT_UICookingComplete.OpenDevelop
struct UAT_UICookingComplete_OpenDevelop_Params
{
	struct FString                                     TargetMsgId;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Grade;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLevelUp;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingComplete.Open
struct UAT_UICookingComplete_Open_Params
{
};

// Function AT.AT_UICookingComplete.OnReceivedCreateStartEvent
struct UAT_UICookingComplete_OnReceivedCreateStartEvent_Params
{
};

// Function AT.AT_UICookingComplete.OnReceivedCreateEndEvent
struct UAT_UICookingComplete_OnReceivedCreateEndEvent_Params
{
};

// Function AT.AT_UICookingComplete.Close
struct UAT_UICookingComplete_Close_Params
{
};

// Function AT.AT_UICookingEffect.SetEffectType
struct UAT_UICookingEffect_SetEffectType_Params
{
	int                                                smlType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EEFFECT_TYPE                                    InEffType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingEffect.SetCookRank
struct UAT_UICookingEffect_SetCookRank_Params
{
	int                                                Rank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingEffect.Open
struct UAT_UICookingEffect_Open_Params
{
};

// Function AT.AT_UICookingEffect.OnReceivedCookingTimingStartEvent
struct UAT_UICookingEffect_OnReceivedCookingTimingStartEvent_Params
{
};

// Function AT.AT_UICookingEffect.OnReceivedCookingTimingEndEvent
struct UAT_UICookingEffect_OnReceivedCookingTimingEndEvent_Params
{
};

// Function AT.AT_UICookingEffect.DebugOpen
struct UAT_UICookingEffect_DebugOpen_Params
{
};

// Function AT.AT_UICookingEffect.Close
struct UAT_UICookingEffect_Close_Params
{
};

// Function AT.AT_UICookingEffect.ClearEffectType
struct UAT_UICookingEffect_ClearEffectType_Params
{
};

// Function AT.AT_UICookingMenu.SetSelectTab
struct UAT_UICookingMenu_SetSelectTab_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingMenu.SelectCourceClose
struct UAT_UICookingMenu_SelectCourceClose_Params
{
};

// Function AT.AT_UICookingMenu.Open
struct UAT_UICookingMenu_Open_Params
{
	AT_ECOOKING_ACCESSER                               InAccesser;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingMenu.OnX
struct UAT_UICookingMenu_OnX_Params
{
};

// Function AT.AT_UICookingMenu.OnUp
struct UAT_UICookingMenu_OnUp_Params
{
};

// Function AT.AT_UICookingMenu.OnRB
struct UAT_UICookingMenu_OnRB_Params
{
};

// Function AT.AT_UICookingMenu.OnLB
struct UAT_UICookingMenu_OnLB_Params
{
};

// Function AT.AT_UICookingMenu.OnDown
struct UAT_UICookingMenu_OnDown_Params
{
};

// Function AT.AT_UICookingMenu.OnDecide
struct UAT_UICookingMenu_OnDecide_Params
{
};

// Function AT.AT_UICookingMenu.OnCookDemoStart
struct UAT_UICookingMenu_OnCookDemoStart_Params
{
	int8_t                                             CutNo;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingMenu.OnCookDemoEnd
struct UAT_UICookingMenu_OnCookDemoEnd_Params
{
	int8_t                                             CutNo;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingMenu.OnCancel
struct UAT_UICookingMenu_OnCancel_Params
{
};

// Function AT.AT_UICookingMenu.OnBentoCreateEnd
struct UAT_UICookingMenu_OnBentoCreateEnd_Params
{
};

// Function AT.AT_UICookingMenu.MouseClickTabRight
struct UAT_UICookingMenu_MouseClickTabRight_Params
{
};

// Function AT.AT_UICookingMenu.MouseClickTabLeft
struct UAT_UICookingMenu_MouseClickTabLeft_Params
{
};

// Function AT.AT_UICookingMenu.MouseClickStateResult
struct UAT_UICookingMenu_MouseClickStateResult_Params
{
};

// Function AT.AT_UICookingMenu.MouseClickDecide
struct UAT_UICookingMenu_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingMenu.Close
struct UAT_UICookingMenu_Close_Params
{
	bool                                               bIsCourse;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingMenu.CheckHovered
struct UAT_UICookingMenu_CheckHovered_Params
{
};

// Function AT.AT_UICookingMenuShopList.MouseWheel
struct UAT_UICookingMenuShopList_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICookingResult.DebugRequest
struct UAT_UICookingResult_DebugRequest_Params
{
	int                                                inNo;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UICutinLevelUp.ConstructFirstOnly
struct UAT_UICutinLevelUp_ConstructFirstOnly_Params
{
};

// Function AT.AT_UICutinLevelUp_Lang.Ev_In_Xef_Shine
struct UAT_UICutinLevelUp_Lang_Ev_In_Xef_Shine_Params
{
};

// Function AT.AT_UICutinLevelUp_Lang.ConstructFirstOnly
struct UAT_UICutinLevelUp_Lang_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIDamagePop.SetVisibleAndTickable
struct UAT_UIDamagePop_SetVisibleAndTickable_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIDamagePop.AnimTextSetting
struct UAT_UIDamagePop_AnimTextSetting_Params
{
	int                                                InDamageValue;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstance*                           InNumMaterial;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIDemoSkipDialog.OnDemoTiming
struct UAT_UIDemoSkipDialog_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      DemoType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               DemoTiming;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               continueFlag;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIEncounterDirection.ConstructFirstOnly
struct UAT_UIEncounterDirection_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIEncounterDirectionChild.SetEncounterDirectionType
struct UAT_UIEncounterDirectionChild_SetEncounterDirectionType_Params
{
	AT_EEncounterDirectionType                         Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIEncounterHud.InitSetting
struct UAT_UIEncounterHud_InitSetting_Params
{
};

// Function AT.AT_UIEncounterHudCore.RemoveParentWidget
struct UAT_UIEncounterHudCore_RemoveParentWidget_Params
{
};

// Function AT.AT_UIEncounterHudCore.InitSetting
struct UAT_UIEncounterHudCore_InitSetting_Params
{
};

// Function AT.AT_UIStateIconCtnBase.DebugTargetChange
struct UAT_UIStateIconCtnBase_DebugTargetChange_Params
{
	TArray<AT_E_STATE_ICON_TYPE>                       InBuffList;                                                // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIconCtnBase.DebugRemoveStateIcon
struct UAT_UIStateIconCtnBase_DebugRemoveStateIcon_Params
{
	TArray<AT_E_STATE_ICON_TYPE>                       InBuff;                                                    // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIconCtnBase.DebugAddStateIcon
struct UAT_UIStateIconCtnBase_DebugAddStateIcon_Params
{
	TArray<AT_E_STATE_ICON_TYPE>                       InBuff;                                                    // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIEnemyStateIcon.OnTargetChange
struct UAT_UIEnemyStateIcon_OnTargetChange_Params
{
	class AActor*                                      InEnemy;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIEnemyStateIcon.OnPlayerChange
struct UAT_UIEnemyStateIcon_OnPlayerChange_Params
{
	class AAT_Character*                               InPlayerChar;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIEnemyStateIcon.OnBattleStart
struct UAT_UIEnemyStateIcon_OnBattleStart_Params
{
};

// Function AT.AT_UIEnemyStateIcon.OnBattleEnd
struct UAT_UIEnemyStateIcon_OnBattleEnd_Params
{
};

// Function AT.AT_UIFieldManager.StopQuestImgAnimation
struct UAT_UIFieldManager_StopQuestImgAnimation_Params
{
};

// Function AT.AT_UIFieldManager.StartUsingQuestImg
struct UAT_UIFieldManager_StartUsingQuestImg_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.StartDragonballAcquisition
struct UAT_UIFieldManager_StartDragonballAcquisition_Params
{
	int                                                InDragonballIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.SpawnDragonball
struct UAT_UIFieldManager_SpawnDragonball_Params
{
	class AActor*                                      pActor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nDbIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.ShowSceneCaptureLayer
struct UAT_UIFieldManager_ShowSceneCaptureLayer_Params
{
};

// Function AT.AT_UIFieldManager.ShowNextPreviewTitle
struct UAT_UIFieldManager_ShowNextPreviewTitle_Params
{
	struct FString                                     TitleMessageId;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.ShowNextPreviewDetail
struct UAT_UIFieldManager_ShowNextPreviewDetail_Params
{
	struct FString                                     HeaderMessageId;                                           // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SubjectMessageId;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.SetQuestImgVisible
struct UAT_UIFieldManager_SetQuestImgVisible_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EQuestImageAnimationType                        InQuestImageAnimationType;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInCrossFade;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.SetQuestImgLoadAsset
struct UAT_UIFieldManager_SetQuestImgLoadAsset_Params
{
	struct FString                                     PathToImageAsset;                                          // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.SetQuestImgLayerOrder
struct UAT_UIFieldManager_SetQuestImgLayerOrder_Params
{
	TEnumAsByte<CFramework_EAddToViewportLayer>        LayerOrder;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.SetQuestImgBaseColor
struct UAT_UIFieldManager_SetQuestImgBaseColor_Params
{
	struct FLinearColor                                LinearColor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.ResetDragonBallComp
struct UAT_UIFieldManager_ResetDragonBallComp_Params
{
};

// Function AT.AT_UIFieldManager.RemoveEventIcon
struct UAT_UIFieldManager_RemoveEventIcon_Params
{
	AT_EMapIcon                                        InIconType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.RemoveAtrociousIcon
struct UAT_UIFieldManager_RemoveAtrociousIcon_Params
{
};

// Function AT.AT_UIFieldManager.RemoveAllEventIcon
struct UAT_UIFieldManager_RemoveAllEventIcon_Params
{
};

// Function AT.AT_UIFieldManager.OnPause
struct UAT_UIFieldManager_OnPause_Params
{
	struct FEventParam                                 EventParam;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.IsUpdateState
struct UAT_UIFieldManager_IsUpdateState_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.IsShowQuestImgPicture
struct UAT_UIFieldManager_IsShowQuestImgPicture_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.IsQuestImgLoadedAsset
struct UAT_UIFieldManager_IsQuestImgLoadedAsset_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.IsQuestImgFadeFinished
struct UAT_UIFieldManager_IsQuestImgFadeFinished_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.IsNextPreviewFadeFinished
struct UAT_UIFieldManager_IsNextPreviewFadeFinished_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.IsEventIcon
struct UAT_UIFieldManager_IsEventIcon_Params
{
	AT_EMapIcon                                        InIconType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.HideSceneCaptureLayer
struct UAT_UIFieldManager_HideSceneCaptureLayer_Params
{
};

// Function AT.AT_UIFieldManager.HideNextPreviewTitle
struct UAT_UIFieldManager_HideNextPreviewTitle_Params
{
};

// Function AT.AT_UIFieldManager.HideNextPreviewDetail
struct UAT_UIFieldManager_HideNextPreviewDetail_Params
{
};

// Function AT.AT_UIFieldManager.GetXCmnHeader
struct UAT_UIFieldManager_GetXCmnHeader_Params
{
	class UAT_UIXCmnHeader*                            ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.GetXCmnFadeBlur
struct UAT_UIFieldManager_GetXCmnFadeBlur_Params
{
	class UAT_UIXcmnFadeBlur*                          ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.GetUIFieldManagerInstance
struct UAT_UIFieldManager_GetUIFieldManagerInstance_Params
{
	class UAT_UIFieldManager*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.GetMapManager
struct UAT_UIFieldManager_GetMapManager_Params
{
	class UAT_UIMapManager*                            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.GetDragonball
struct UAT_UIFieldManager_GetDragonball_Params
{
	class AActor*                                      pActor;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                nDbIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.EndOfUseQuestImg
struct UAT_UIFieldManager_EndOfUseQuestImg_Params
{
};

// Function AT.AT_UIFieldManager.BeginQuestImgFadeOut
struct UAT_UIFieldManager_BeginQuestImgFadeOut_Params
{
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EUMG_FADE_COLOR                                 FadeColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.BeginQuestImgFadeIn
struct UAT_UIFieldManager_BeginQuestImgFadeIn_Params
{
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EUMG_FADE_COLOR                                 FadeColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.BeginNextPreviewFadeOut
struct UAT_UIFieldManager_BeginNextPreviewFadeOut_Params
{
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EUMG_FADE_COLOR                                 FadeColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.BeginNextPreviewFadeIn
struct UAT_UIFieldManager_BeginNextPreviewFadeIn_Params
{
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EUMG_FADE_COLOR                                 FadeColor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldManager.AddEventIcon
struct UAT_UIFieldManager_AddEventIcon_Params
{
	AT_EMapIcon                                        InIconType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CircleRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldNaviWin.OnEndBattle
struct UAT_UIFieldNaviWin_OnEndBattle_Params
{
};

// Function AT.AT_UIFieldNaviWin.OnBeginBattle
struct UAT_UIFieldNaviWin_OnBeginBattle_Params
{
};

// Function AT.AT_UIFieldRideIcon.SetType
struct UAT_UIFieldRideIcon_SetType_Params
{
	AT_ERIDE_ICON_TYPE                                 Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Highlight;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldRideIcon.SetRootVisibility
struct UAT_UIFieldRideIcon_SetRootVisibility_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldRideIcon.SetGauge
struct UAT_UIFieldRideIcon_SetGauge_Params
{
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldRideIcon.SetBan
struct UAT_UIFieldRideIcon_SetBan_Params
{
	bool                                               isBan;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldRideIcon.GetType
struct UAT_UIFieldRideIcon_GetType_Params
{
	AT_ERIDE_ICON_TYPE                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldSearch.SetVisible
struct UAT_UIFieldSearch_SetVisible_Params
{
	bool                                               inIsVisible;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldSearch.SetCircleRange
struct UAT_UIFieldSearch_SetCircleRange_Params
{
	float                                              InRange;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldSearch.SetCirclePosition
struct UAT_UIFieldSearch_SetCirclePosition_Params
{
	struct FVector                                     InPos;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldSearch.RemoveSearchIcon
struct UAT_UIFieldSearch_RemoveSearchIcon_Params
{
	int                                                ID;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldSearch.DebugGetAT_UIFieldSearch_BP
struct UAT_UIFieldSearch_DebugGetAT_UIFieldSearch_BP_Params
{
	class UAT_UIFieldSearch*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldSearch.AddSearchIcon
struct UAT_UIFieldSearch_AddSearchIcon_Params
{
	struct FVector                                     pos;                                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EITEM_ICON_TYPE                                 icon;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldTalkFree.RequestOpenEventSpeak
struct UAT_UIFieldTalkFree_RequestOpenEventSpeak_Params
{
	struct FVector                                     InPos;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      inTarget;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInUseSpecialFrame;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSpeakerUniqueId;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AQuestCharacter*                             InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     inString;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsStringId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              inLifeTime;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldTalkFree.RequestCloseEventSpeak
struct UAT_UIFieldTalkFree_RequestCloseEventSpeak_Params
{
	class AActor*                                      ID;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldTalkFree.DebugGetAT_UIFieldTalkFree_BP
struct UAT_UIFieldTalkFree_DebugGetAT_UIFieldTalkFree_BP_Params
{
	class UAT_UIFieldTalkFree*                         ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldTalkFree.CheckEventSpeakOpened
struct UAT_UIFieldTalkFree_CheckEventSpeakOpened_Params
{
	class AActor*                                      ID;                                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldTalkFreeCore.IsEnd
struct UAT_UIFieldTalkFreeCore_IsEnd_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldTalkFreeCore.DebugRequest
struct UAT_UIFieldTalkFreeCore_DebugRequest_Params
{
	class AActor*                                      Obj;                                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     inStr;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldTalkWin.SetVisible
struct UAT_UIFieldTalkWin_SetVisible_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIFieldTalkWin.OnMobMessage
struct UAT_UIFieldTalkWin_OnMobMessage_Params
{
	struct FString                                     Speaker;                                                   // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bButtonVisible;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIGameover.OnEndBarAnim
struct UAT_UIGameover_OnEndBarAnim_Params
{
};

// Function AT.AT_UIGameover.MouseClickDecide
struct UAT_UIGameover_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIGameover.CheckHovered
struct UAT_UIGameover_CheckHovered_Params
{
};

// Function AT.AT_UIGameTitle.SetWorldContext
struct UAT_UIGameTitle_SetWorldContext_Params
{
	class UObject*                                     a_WorldContextObject;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIGameTitle.SetAnimationWithToriggeredByFadein
struct UAT_UIGameTitle_SetAnimationWithToriggeredByFadein_Params
{
};

// Function AT.AT_UIGameTitle.MouseClickDecide
struct UAT_UIGameTitle_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIGameTitle.ListUp
struct UAT_UIGameTitle_ListUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIGameTitle.ListDown
struct UAT_UIGameTitle_ListDown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIGameTitle.InStart
struct UAT_UIGameTitle_InStart_Params
{
};

// Function AT.AT_UIGameTitle.InPress
struct UAT_UIGameTitle_InPress_Params
{
};

// Function AT.AT_UIGameTitle.GotoNextMenu
struct UAT_UIGameTitle_GotoNextMenu_Params
{
};

// Function AT.AT_UIGameTitle.GotoMenuList
struct UAT_UIGameTitle_GotoMenuList_Params
{
};

// Function AT.AT_UIGameTitle.GotoLoadGame
struct UAT_UIGameTitle_GotoLoadGame_Params
{
};

// Function AT.AT_UIGameTitle.CheckHovered
struct UAT_UIGameTitle_CheckHovered_Params
{
};

// Function AT.AT_UIGameTitle.BackToPressButtonDisplay
struct UAT_UIGameTitle_BackToPressButtonDisplay_Params
{
};

// Function AT.AT_UIGameTitle.BackAndClose
struct UAT_UIGameTitle_BackAndClose_Params
{
};

// Function AT.AT_UIGameWindow.MouseWheel
struct UAT_UIGameWindow_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIGameWindow.MouseClickDecide
struct UAT_UIGameWindow_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIGameWindow.CheckHovered
struct UAT_UIGameWindow_CheckHovered_Params
{
};

// Function AT.AT_UIIconLoad.DebugRequestAnim
struct UAT_UIIconLoad_DebugRequestAnim_Params
{
};

// Function AT.AT_UIInfoLogBar.ConstructFirstOnly
struct UAT_UIInfoLogBar_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIItemMenu.UpdateInventory
struct UAT_UIItemMenu_UpdateInventory_Params
{
};

// Function AT.AT_UIItemMenu.SetSelectTab
struct UAT_UIItemMenu_SetSelectTab_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIItemMenu.SetInitInventory
struct UAT_UIItemMenu_SetInitInventory_Params
{
};

// Function AT.AT_UIItemMenu.RequestPlayOutCharaSelectAnim
struct UAT_UIItemMenu_RequestPlayOutCharaSelectAnim_Params
{
};

// Function AT.AT_UIItemMenu.RequestPlayOutAnim
struct UAT_UIItemMenu_RequestPlayOutAnim_Params
{
};

// Function AT.AT_UIItemMenu.RequestPlayInCharaSelectAnim
struct UAT_UIItemMenu_RequestPlayInCharaSelectAnim_Params
{
};

// Function AT.AT_UIItemMenu.RequestPlayInAnim
struct UAT_UIItemMenu_RequestPlayInAnim_Params
{
};

// Function AT.AT_UIItemMenu.MouseWheel
struct UAT_UIItemMenu_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIItemMenu.MenuBgOutCore
struct UAT_UIItemMenu_MenuBgOutCore_Params
{
};

// Function AT.AT_UIItemMenu.MenuBgInCore
struct UAT_UIItemMenu_MenuBgInCore_Params
{
};

// Function AT.AT_UIItemMenu.ListOutCore
struct UAT_UIItemMenu_ListOutCore_Params
{
};

// Function AT.AT_UIItemMenu.ListInCore
struct UAT_UIItemMenu_ListInCore_Params
{
};

// Function AT.AT_UIItemMenu.IsAnimCompleted
struct UAT_UIItemMenu_IsAnimCompleted_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIItemMenu.HeaderOutCore
struct UAT_UIItemMenu_HeaderOutCore_Params
{
};

// Function AT.AT_UIItemMenu.HeaderInCore
struct UAT_UIItemMenu_HeaderInCore_Params
{
};

// Function AT.AT_UIItemMenu.CheckHovered
struct UAT_UIItemMenu_CheckHovered_Params
{
};

// Function AT.AT_UIItemMenu.ChangeSelectTab
struct UAT_UIItemMenu_ChangeSelectTab_Params
{
	bool                                               isLeft;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIItemMenu.ChangeSelectMenuUp
struct UAT_UIItemMenu_ChangeSelectMenuUp_Params
{
};

// Function AT.AT_UIItemMenu.ChangeSelectMenuPageUp
struct UAT_UIItemMenu_ChangeSelectMenuPageUp_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIItemMenu.ChangeSelectMenuPageDown
struct UAT_UIItemMenu_ChangeSelectMenuPageDown_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIItemMenu.ChangeSelectMenuDown
struct UAT_UIItemMenu_ChangeSelectMenuDown_Params
{
};

// Function AT.AT_UIItemPaletteCustomize.CheckHovered
struct UAT_UIItemPaletteCustomize_CheckHovered_Params
{
};

// Function AT.AT_UIKeyHelp.SetHelpMsgTextTop
struct UAT_UIKeyHelp_SetHelpMsgTextTop_Params
{
	struct FString                                     MsgId;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIKeyHelp.SetHelpMsgText
struct UAT_UIKeyHelp_SetHelpMsgText_Params
{
	struct FString                                     MsgId;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIKeyHelp.SaveKeyHelpArrangement
struct UAT_UIKeyHelp_SaveKeyHelpArrangement_Params
{
};

// Function AT.AT_UIKeyHelp.RequestKeyHelpShow
struct UAT_UIKeyHelp_RequestKeyHelpShow_Params
{
	AT_EKeyHelpGroup                                   InUserGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIKeyHelp.RequestKeyHelpHide
struct UAT_UIKeyHelp_RequestKeyHelpHide_Params
{
	AT_EKeyHelpGroup                                   InUserGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIKeyHelp.PushKeyHelp
struct UAT_UIKeyHelp_PushKeyHelp_Params
{
	AT_EKeyHelpId                                      InKeyHelpId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MsgId;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EKeyHelpGroup                                   InUserGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIKeyHelp.LoadKeyHelpArrangement
struct UAT_UIKeyHelp_LoadKeyHelpArrangement_Params
{
};

// Function AT.AT_UIKeyHelp.IsKeyHelpExited
struct UAT_UIKeyHelp_IsKeyHelpExited_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIKeyHelp.IsKeyHelpAppeared
struct UAT_UIKeyHelp_IsKeyHelpAppeared_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIKeyHelp.ClearKeyHelp
struct UAT_UIKeyHelp_ClearKeyHelp_Params
{
	AT_EKeyHelpGroup                                   InUserGroup;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapM.TransitionToWorldMap
struct UAT_UIMapM_TransitionToWorldMap_Params
{
};

// Function AT.AT_UIMapM.RequestOutAnim
struct UAT_UIMapM_RequestOutAnim_Params
{
};

// Function AT.AT_UIMapM.RequestInAnim
struct UAT_UIMapM_RequestInAnim_Params
{
};

// Function AT.AT_UIMapM.OnOutHeader
struct UAT_UIMapM_OnOutHeader_Params
{
};

// Function AT.AT_UIMapM.OnOffMapS
struct UAT_UIMapM_OnOffMapS_Params
{
};

// Function AT.AT_UIMapM.OnInHeader
struct UAT_UIMapM_OnInHeader_Params
{
};

// Function AT.AT_UIMapM.LoadMapTexture
struct UAT_UIMapM_LoadMapTexture_Params
{
	struct FString                                     inLevelName;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapM.IsMapTexValid
struct UAT_UIMapM_IsMapTexValid_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapM.IsMapTexLoaded
struct UAT_UIMapM_IsMapTexLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapM.ForceClose
struct UAT_UIMapM_ForceClose_Params
{
};

// Function AT.AT_UIMapM.ChangeArea
struct UAT_UIMapM_ChangeArea_Params
{
	struct FName                                       AreaName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapManager.SwitchMap
struct UAT_UIMapManager_SwitchMap_Params
{
	unsigned char                                      mapState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      animState;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapTex.OnChangeQuestTiming
struct UAT_UIMapTex_OnChangeQuestTiming_Params
{
	struct FName                                       NewName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapTex.OnChangePhaseTiming
struct UAT_UIMapTex_OnChangePhaseTiming_Params
{
	int                                                phase;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATWorldMapInfo.OnInGameBeginPlay
struct UATWorldMapInfo_OnInGameBeginPlay_Params
{
	struct FEventParam                                 EventParam;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapWorld.OnCursorMove
struct UAT_UIMapWorld_OnCursorMove_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapWorld.OnClosedInfoWindow
struct UAT_UIMapWorld_OnClosedInfoWindow_Params
{
};

// Function AT.AT_UIMapWorld.MouseClickDecide
struct UAT_UIMapWorld_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMapWorld.InputY
struct UAT_UIMapWorld_InputY_Params
{
};

// Function AT.AT_UIMapWorld.InputX
struct UAT_UIMapWorld_InputX_Params
{
};

// Function AT.AT_UIMapWorld.InputUp
struct UAT_UIMapWorld_InputUp_Params
{
};

// Function AT.AT_UIMapWorld.InputRight
struct UAT_UIMapWorld_InputRight_Params
{
};

// Function AT.AT_UIMapWorld.InputLeft
struct UAT_UIMapWorld_InputLeft_Params
{
};

// Function AT.AT_UIMapWorld.InputDown
struct UAT_UIMapWorld_InputDown_Params
{
};

// Function AT.AT_UIMapWorld.InputConfirm
struct UAT_UIMapWorld_InputConfirm_Params
{
};

// Function AT.AT_UIMapWorld.InputCancel
struct UAT_UIMapWorld_InputCancel_Params
{
};

// Function AT.AT_UIMapWorld.CheckHovered
struct UAT_UIMapWorld_CheckHovered_Params
{
};

// Function AT.AT_UIMapWorldCurs.RequestOpen
struct UAT_UIMapWorldCurs_RequestOpen_Params
{
};

// Function AT.AT_UIMapWorldCurs.RequestClose
struct UAT_UIMapWorldCurs_RequestClose_Params
{
};

// Function AT.AT_UIMapWorldCurs01.RequestOpen
struct UAT_UIMapWorldCurs01_RequestOpen_Params
{
};

// Function AT.AT_UIMapWorldCurs01.RequestClose
struct UAT_UIMapWorldCurs01_RequestClose_Params
{
};

// Function AT.AT_UIMapWorldWin.MouseWheel
struct UAT_UIMapWorldWin_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIBar03Choice.UpdateVolumeEvent
struct UAT_UIBar03Choice_UpdateVolumeEvent_Params
{
};

// Function AT.AT_UIList03Choice.SetToFastTravel
struct UAT_UIList03Choice_SetToFastTravel_Params
{
};

// Function AT.AT_UIList03Choice.SetSelect
struct UAT_UIList03Choice_SetSelect_Params
{
	bool                                               isSelect;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIList03Choice.SetMenu
struct UAT_UIList03Choice_SetMenu_Params
{
	struct FString                                     NameTxt;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isNewIcon;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               inIsActive;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               inIsCheck;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIList03Choice.RequestPlayEnter
struct UAT_UIList03Choice_RequestPlayEnter_Params
{
};

// Function AT.AT_UIList03Choice.CanSelect
struct UAT_UIList03Choice_CanSelect_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMenuWindow.SetupListConfirmWindow
struct UAT_UIMenuWindow_SetupListConfirmWindow_Params
{
	struct FString                                     titleTxt;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMenuWIndowSetupListNumMenuInfo>     listCtn;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             choiceCtn;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameBar01.SetParamWithTime
struct UAT_UIMiniGameBar01_SetParamWithTime_Params
{
	int                                                Rank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   record;                                                    // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsShine;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameBar01.SetParamWithPoints
struct UAT_UIMiniGameBar01_SetParamWithPoints_Params
{
	int                                                Rank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isPlayer;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameBar01.PlayChangeAnimation
struct UAT_UIMiniGameBar01_PlayChangeAnimation_Params
{
	float                                              StartAtTime;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.UpdateDirection
struct UAT_UIMiniGameRace_UpdateDirection_Params
{
	class AHUD*                                        HUD;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.TimerOpen
struct UAT_UIMiniGameRace_TimerOpen_Params
{
};

// Function AT.AT_UIMiniGameRace.TimerClose
struct UAT_UIMiniGameRace_TimerClose_Params
{
};

// Function AT.AT_UIMiniGameRace.StopBlinkLmitTimeTextAnimation
struct UAT_UIMiniGameRace_StopBlinkLmitTimeTextAnimation_Params
{
};

// Function AT.AT_UIMiniGameRace.StartBlinkLmitTimeTextAnimation
struct UAT_UIMiniGameRace_StartBlinkLmitTimeTextAnimation_Params
{
};

// Function AT.AT_UIMiniGameRace.SppedOpen
struct UAT_UIMiniGameRace_SppedOpen_Params
{
};

// Function AT.AT_UIMiniGameRace.SppedClose
struct UAT_UIMiniGameRace_SppedClose_Params
{
};

// Function AT.AT_UIMiniGameRace.SetTime
struct UAT_UIMiniGameRace_SetTime_Params
{
	struct FTimespan                                   timeLimit;                                                 // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.SetSpped
struct UAT_UIMiniGameRace_SetSpped_Params
{
	int                                                Speed;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.SetPlayerLocation
struct UAT_UIMiniGameRace_SetPlayerLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.SetNextCheckPointLocation
struct UAT_UIMiniGameRace_SetNextCheckPointLocation_Params
{
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.SetLimitTime
struct UAT_UIMiniGameRace_SetLimitTime_Params
{
	struct FTimespan                                   timeLimit;                                                 // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.SetEnableDefaultLimitTimeTextColor
struct UAT_UIMiniGameRace_SetEnableDefaultLimitTimeTextColor_Params
{
};

// Function AT.AT_UIMiniGameRace.SetEnableBlinkLimitTimeTextColor
struct UAT_UIMiniGameRace_SetEnableBlinkLimitTimeTextColor_Params
{
};

// Function AT.AT_UIMiniGameRace.SetCircleRadius
struct UAT_UIMiniGameRace_SetCircleRadius_Params
{
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.SetCheckPointPassageText
struct UAT_UIMiniGameRace_SetCheckPointPassageText_Params
{
};

// Function AT.AT_UIMiniGameRace.SetCheckPoint
struct UAT_UIMiniGameRace_SetCheckPoint_Params
{
	int                                                NowNum;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxNum;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.OpenTips
struct UAT_UIMiniGameRace_OpenTips_Params
{
};

// Function AT.AT_UIMiniGameRace.OpenDirection
struct UAT_UIMiniGameRace_OpenDirection_Params
{
};

// Function AT.AT_UIMiniGameRace.LimitTimerOpen
struct UAT_UIMiniGameRace_LimitTimerOpen_Params
{
};

// Function AT.AT_UIMiniGameRace.LimitTimerClose
struct UAT_UIMiniGameRace_LimitTimerClose_Params
{
};

// Function AT.AT_UIMiniGameRace.GetPlayerLocation
struct UAT_UIMiniGameRace_GetPlayerLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.GetNextCheckPointLocation
struct UAT_UIMiniGameRace_GetNextCheckPointLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.GetCircleRadius
struct UAT_UIMiniGameRace_GetCircleRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameRace.CloseTips
struct UAT_UIMiniGameRace_CloseTips_Params
{
};

// Function AT.AT_UIMiniGameRace.CloseDirection
struct UAT_UIMiniGameRace_CloseDirection_Params
{
};

// Function AT.AT_UIMiniGameRace.CheckPointOpen
struct UAT_UIMiniGameRace_CheckPointOpen_Params
{
};

// Function AT.AT_UIMiniGameRace.CheckPointClose
struct UAT_UIMiniGameRace_CheckPointClose_Params
{
};

// Function AT.AT_UIMiniGameResult.PlayAnimOut
struct UAT_UIMiniGameResult_PlayAnimOut_Params
{
};

// Function AT.AT_UIMiniGameResult.DebugRequest
struct UAT_UIMiniGameResult_DebugRequest_Params
{
	AT_EMiniGameType                                   miniGameType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameResult.DebugOpenWindow
struct UAT_UIMiniGameResult_DebugOpenWindow_Params
{
	int                                                Num;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameResult.ConstructFirstOnly
struct UAT_UIMiniGameResult_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIMiniGameTime.SetTooShortTime
struct UAT_UIMiniGameTime_SetTooShortTime_Params
{
};

// Function AT.AT_UIMiniGameTime.SetTime
struct UAT_UIMiniGameTime_SetTime_Params
{
	struct FTimespan                                   timeLimit;                                                 // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameTime.SetEnoughTime
struct UAT_UIMiniGameTime_SetEnoughTime_Params
{
};

// Function AT.AT_UIMiniGameTime.Recovery
struct UAT_UIMiniGameTime_Recovery_Params
{
};

// Function AT.AT_UIMiniGameTime.Open
struct UAT_UIMiniGameTime_Open_Params
{
};

// Function AT.AT_UIMiniGameTime.Close
struct UAT_UIMiniGameTime_Close_Params
{
};

// Function AT.AT_UIMiniGameTime.Blink
struct UAT_UIMiniGameTime_Blink_Params
{
};

// Function AT.AT_UIMiniGameTop.SetType
struct UAT_UIMiniGameTop_SetType_Params
{
	AT_EMINIGAMETOPTYPE_ID                             InType;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameTop.SetRecordWithTime
struct UAT_UIMiniGameTop_SetRecordWithTime_Params
{
	int                                                Rank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimespan                                   BestTime;                                                  // (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameTop.SetRecordWithPoints
struct UAT_UIMiniGameTop_SetRecordWithPoints_Params
{
	int                                                Rank;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Points;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameTop.PlayIn
struct UAT_UIMiniGameTop_PlayIn_Params
{
};

// Function AT.AT_UIMiniGameTop.PlayBack
struct UAT_UIMiniGameTop_PlayBack_Params
{
};

// Function AT.AT_UIMiniGameTop.MouseClickDecide
struct UAT_UIMiniGameTop_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameTop.IsEnd
struct UAT_UIMiniGameTop_IsEnd_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameTop.GetType
struct UAT_UIMiniGameTop_GetType_Params
{
	AT_EMINIGAMETOPTYPE_ID                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameTop.GetSelectItem
struct UAT_UIMiniGameTop_GetSelectItem_Params
{
	AT_EUI_MINIGAME_TOP_ESELECT_ID                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniGameTop.CheckHovered
struct UAT_UIMiniGameTop_CheckHovered_Params
{
};

// Function AT.AT_UIMiniGameWin00.MouseClickTabRight
struct UAT_UIMiniGameWin00_MouseClickTabRight_Params
{
};

// Function AT.AT_UIMiniGameWin00.MouseClickTabLeft
struct UAT_UIMiniGameWin00_MouseClickTabLeft_Params
{
};

// Function AT.AT_UIMiniMapRadar.OnChangePlayer
struct UAT_UIMiniMapRadar_OnChangePlayer_Params
{
	class AAT_Character*                               InPlayerIns;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIMiniMapRadar.OnBattleStart
struct UAT_UIMiniMapRadar_OnBattleStart_Params
{
};

// Function AT.AT_UIMiniMapRadar.OnBattleEnd
struct UAT_UIMiniMapRadar_OnBattleEnd_Params
{
};

// Function AT.AT_UIMiniMapRadar.MapTexAfterInit
struct UAT_UIMiniMapRadar_MapTexAfterInit_Params
{
};

// Function AT.AT_UINotificationManager.OnBattleResultStartRank
struct UAT_UINotificationManager_OnBattleResultStartRank_Params
{
};

// Function AT.AT_UINotificationManager.OnBattleResultEndEvaluation
struct UAT_UINotificationManager_OnBattleResultEndEvaluation_Params
{
};

// Function AT.AT_UINotificationManager.OnBattleFinishCutinEnd
struct UAT_UINotificationManager_OnBattleFinishCutinEnd_Params
{
	AT_EBattleCutin_AnimType                           InAnimType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UINotificationManager.OnBattleEscapeCutinEnd
struct UAT_UINotificationManager_OnBattleEscapeCutinEnd_Params
{
	AT_EBattleCutin_AnimType                           InAnimType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIPlayerStateIcon.OnPlayerChange
struct UAT_UIPlayerStateIcon_OnPlayerChange_Params
{
	class AAT_Character*                               InChar;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIPlayerStateIcon.OnBattleStart
struct UAT_UIPlayerStateIcon_OnBattleStart_Params
{
};

// Function AT.AT_UIPlayerStateIcon.OnBattleEnd
struct UAT_UIPlayerStateIcon_OnBattleEnd_Params
{
};

// Function AT.AT_UIQuestMainClear.Start_Rank5
struct UAT_UIQuestMainClear_Start_Rank5_Params
{
};

// Function AT.AT_UIQuestMainClear.Start_Rank4
struct UAT_UIQuestMainClear_Start_Rank4_Params
{
};

// Function AT.AT_UIQuestMainClear.Start_Rank3
struct UAT_UIQuestMainClear_Start_Rank3_Params
{
};

// Function AT.AT_UIQuestMainClear.Start_Rank2
struct UAT_UIQuestMainClear_Start_Rank2_Params
{
};

// Function AT.AT_UIQuestMainClear.Start_Rank1
struct UAT_UIQuestMainClear_Start_Rank1_Params
{
};

// Function AT.AT_UIQuestMainClear.Scroll_Cloud_Out
struct UAT_UIQuestMainClear_Scroll_Cloud_Out_Params
{
};

// Function AT.AT_UIQuestMainClear.Rank_Out
struct UAT_UIQuestMainClear_Rank_Out_Params
{
};

// Function AT.AT_UIQuestMainClear.Rank_In_Se
struct UAT_UIQuestMainClear_Rank_In_Se_Params
{
};

// Function AT.AT_UIQuestMainClear.Rank_In
struct UAT_UIQuestMainClear_Rank_In_Params
{
};

// Function AT.AT_UIQuestMainClear.Header_Out
struct UAT_UIQuestMainClear_Header_Out_Params
{
};

// Function AT.AT_UIQuestMainClear.Header_Cloud_In
struct UAT_UIQuestMainClear_Header_Cloud_In_Params
{
};

// Function AT.AT_UIQuestMainLogo.OnChangeProgress
struct UAT_UIQuestMainLogo_OnChangeProgress_Params
{
	struct FName                                       InProgressId;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestNavigation.UpdateQuestList
struct UAT_UIQuestNavigation_UpdateQuestList_Params
{
	struct FUIQuestInfo                                InQuestInfo;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestNavigation.StartQuest
struct UAT_UIQuestNavigation_StartQuest_Params
{
	struct FUIQuestInfo                                InQuestInfo;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestNavigation.SetSubQuestCollectionNum
struct UAT_UIQuestNavigation_SetSubQuestCollectionNum_Params
{
	int                                                InListIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InGetNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestNavigation.SetMainQuestCollectionNum
struct UAT_UIQuestNavigation_SetMainQuestCollectionNum_Params
{
	int                                                InListIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InGetNum;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestNavigation.PlayOutQuestList
struct UAT_UIQuestNavigation_PlayOutQuestList_Params
{
};

// Function AT.AT_UIQuestNavigation.PlayInQuestListAndUpdateList
struct UAT_UIQuestNavigation_PlayInQuestListAndUpdateList_Params
{
	struct FUIQuestInfo                                InQuestInfo;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestNavigation.PlayInQuestList
struct UAT_UIQuestNavigation_PlayInQuestList_Params
{
};

// Function AT.AT_UIQuestNavigation.OnChangedProgress
struct UAT_UIQuestNavigation_OnChangedProgress_Params
{
	struct FName                                       ProgressID;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestNavigation.OnBattleStart
struct UAT_UIQuestNavigation_OnBattleStart_Params
{
};

// Function AT.AT_UIQuestNavigation.OnBattleEnd
struct UAT_UIQuestNavigation_OnBattleEnd_Params
{
};

// Function AT.AT_UIQuestNavigation.HideQuestInfo
struct UAT_UIQuestNavigation_HideQuestInfo_Params
{
};

// Function AT.AT_UIQuestNavigation.ClearSubQuestList
struct UAT_UIQuestNavigation_ClearSubQuestList_Params
{
	struct FName                                       QuestId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestNavigation.ClearQuestReplay
struct UAT_UIQuestNavigation_ClearQuestReplay_Params
{
};

// Function AT.AT_UIQuestNavigation.ClearMainQuestList
struct UAT_UIQuestNavigation_ClearMainQuestList_Params
{
};

// Function AT.AT_UIQuestRetry.On_Out_Header
struct UAT_UIQuestRetry_On_Out_Header_Params
{
};

// Function AT.AT_UIQuestRetry.On_Out_Bg
struct UAT_UIQuestRetry_On_Out_Bg_Params
{
};

// Function AT.AT_UIQuestRetry.On_In_Header_Bg
struct UAT_UIQuestRetry_On_In_Header_Bg_Params
{
};

// Function AT.AT_UIQuestRetry.On_Ev_Anm_Out_List
struct UAT_UIQuestRetry_On_Ev_Anm_Out_List_Params
{
};

// Function AT.AT_UIQuestRetry.On_Ev_Anm_In_List
struct UAT_UIQuestRetry_On_Ev_Anm_In_List_Params
{
};

// Function AT.AT_UIQuestRetry.CheckHovered
struct UAT_UIQuestRetry_CheckHovered_Params
{
};

// Function AT.AT_UIQuestSub.Title_Out
struct UAT_UIQuestSub_Title_Out_Params
{
};

// Function AT.AT_UIQuestSub.Title_In
struct UAT_UIQuestSub_Title_In_Params
{
};

// Function AT.AT_UIQuestSub.MouseClickDecide
struct UAT_UIQuestSub_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIQuestSub.Icon_Clear_Se
struct UAT_UIQuestSub_Icon_Clear_Se_Params
{
};

// Function AT.AT_UIQuestSub.Header_Out_Internal
struct UAT_UIQuestSub_Header_Out_Internal_Params
{
};

// Function AT.AT_UIQuestSub.Header_In_Internal
struct UAT_UIQuestSub_Header_In_Internal_Params
{
};

// Function AT.AT_UIQuestSub.Header_Choice_Out_Internal
struct UAT_UIQuestSub_Header_Choice_Out_Internal_Params
{
};

// Function AT.AT_UIQuestSub.Choice_In_Internal
struct UAT_UIQuestSub_Choice_In_Internal_Params
{
};

// Function AT.AT_UIQuestSub.CheckHovered
struct UAT_UIQuestSub_CheckHovered_Params
{
};

// Function AT.AT_UIQuestSubReward.Win_Out
struct UAT_UIQuestSubReward_Win_Out_Params
{
};

// Function AT.AT_UIQuestSubReward.Win_In
struct UAT_UIQuestSubReward_Win_In_Params
{
};

// Function AT.AT_UIQuestSubReward.Deco_In
struct UAT_UIQuestSubReward_Deco_In_Params
{
};

// Function AT.AT_UIScrollBar.SetValue
struct UAT_UIScrollBar_SetValue_Params
{
	int                                                menuValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIScrollBar.SetTop
struct UAT_UIScrollBar_SetTop_Params
{
};

// Function AT.AT_UIScrollBar.SetBottom
struct UAT_UIScrollBar_SetBottom_Params
{
};

// Function AT.AT_UIScrollBar.ScrollUp
struct UAT_UIScrollBar_ScrollUp_Params
{
};

// Function AT.AT_UIScrollBar.ScrollDown
struct UAT_UIScrollBar_ScrollDown_Params
{
};

// Function AT.AT_UIScrollBar.InitScrollValue
struct UAT_UIScrollBar_InitScrollValue_Params
{
	float                                              scrollBarHeight;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                displayMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                scrollMaxMenu;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                moveVolume;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction AT.AT_UIScrollText.UmgDelegate__DelegateSignature
struct UAT_UIScrollText_UmgDelegate__DelegateSignature_Params
{
};

// Function AT.AT_UIScrollText.StopScroll
struct UAT_UIScrollText_StopScroll_Params
{
};

// Function AT.AT_UIScrollText.SetText
struct UAT_UIScrollText_SetText_Params
{
	struct FString                                     StrTxt;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIScrollText.PlayScroll
struct UAT_UIScrollText_PlayScroll_Params
{
};

// Function AT.AT_UIScrollText.InitSetting
struct UAT_UIScrollText_InitSetting_Params
{
};

// Function AT.AT_UIShopCommon.SetShopItem
struct UAT_UIShopCommon_SetShopItem_Params
{
	TArray<struct FXlistBar04Info>                     a_ShopItemList;                                            // (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopCommon.PlayOut
struct UAT_UIShopCommon_PlayOut_Params
{
};

// Function AT.AT_UIShopCommon.PlayIn
struct UAT_UIShopCommon_PlayIn_Params
{
};

// Function AT.AT_UIShopCommon.On_OutHeader
struct UAT_UIShopCommon_On_OutHeader_Params
{
};

// Function AT.AT_UIShopCommon.On_OutBg
struct UAT_UIShopCommon_On_OutBg_Params
{
};

// Function AT.AT_UIShopCommon.On_InHeaderBg
struct UAT_UIShopCommon_On_InHeaderBg_Params
{
};

// Function AT.AT_UIShopCommon.MouseWheel
struct UAT_UIShopCommon_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopCommon.MouseClickTabRight
struct UAT_UIShopCommon_MouseClickTabRight_Params
{
};

// Function AT.AT_UIShopCommon.MouseClickTabLeft
struct UAT_UIShopCommon_MouseClickTabLeft_Params
{
};

// Function AT.AT_UIShopCommon.MouseClickDecide
struct UAT_UIShopCommon_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopCommon.GetShopItem
struct UAT_UIShopCommon_GetShopItem_Params
{
	TArray<struct FXlistBar04Info>                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopCommon.CheckHovered
struct UAT_UIShopCommon_CheckHovered_Params
{
};

// Function AT.AT_UIShopDevelop.SetSelectTab
struct UAT_UIShopDevelop_SetSelectTab_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopDevelop.Out_List
struct UAT_UIShopDevelop_Out_List_Params
{
};

// Function AT.AT_UIShopDevelop.Out_Header
struct UAT_UIShopDevelop_Out_Header_Params
{
};

// Function AT.AT_UIShopDevelop.Out_Bg
struct UAT_UIShopDevelop_Out_Bg_Params
{
};

// Function AT.AT_UIShopDevelop.In_List
struct UAT_UIShopDevelop_In_List_Params
{
};

// Function AT.AT_UIShopDevelop.In_Header_Bg
struct UAT_UIShopDevelop_In_Header_Bg_Params
{
};

// Function AT.AT_UIShopDevelop.CheckHovered
struct UAT_UIShopDevelop_CheckHovered_Params
{
};

// Function AT.AT_UIShopDevelopCustom.SetSelectTab
struct UAT_UIShopDevelopCustom_SetSelectTab_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopDevelopCustom.PartsUpdateInMouseWheel
struct UAT_UIShopDevelopCustom_PartsUpdateInMouseWheel_Params
{
};

// Function AT.AT_UIShopDevelopCustom.Out_SubList
struct UAT_UIShopDevelopCustom_Out_SubList_Params
{
};

// Function AT.AT_UIShopDevelopCustom.Out_List
struct UAT_UIShopDevelopCustom_Out_List_Params
{
};

// Function AT.AT_UIShopDevelopCustom.Out_Header
struct UAT_UIShopDevelopCustom_Out_Header_Params
{
};

// Function AT.AT_UIShopDevelopCustom.Out_Bg
struct UAT_UIShopDevelopCustom_Out_Bg_Params
{
};

// Function AT.AT_UIShopDevelopCustom.In_SubList
struct UAT_UIShopDevelopCustom_In_SubList_Params
{
};

// Function AT.AT_UIShopDevelopCustom.In_List
struct UAT_UIShopDevelopCustom_In_List_Params
{
};

// Function AT.AT_UIShopDevelopCustom.In_Header_Bg
struct UAT_UIShopDevelopCustom_In_Header_Bg_Params
{
};

// Function AT.AT_UIShopDevelopCustom.CheckHovered
struct UAT_UIShopDevelopCustom_CheckHovered_Params
{
};

// Function AT.AT_UIShopInfo.MouseClickDecide
struct UAT_UIShopInfo_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopInfo.DebugRequest
struct UAT_UIShopInfo_DebugRequest_Params
{
};

// Function AT.AT_UIShopInfo.CheckHovered
struct UAT_UIShopInfo_CheckHovered_Params
{
};

// Function AT.AT_UIShopTop.Out_List_Commu
struct UAT_UIShopTop_Out_List_Commu_Params
{
};

// Function AT.AT_UIShopTop.MouseClickDecide
struct UAT_UIShopTop_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopTop.In_List_Commu
struct UAT_UIShopTop_In_List_Commu_Params
{
};

// Function AT.AT_UIShopTop.DebugRequest
struct UAT_UIShopTop_DebugRequest_Params
{
	AT_ESHOPTOP_DEBUG_ID                               inNo;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopTop.CheckHovered
struct UAT_UIShopTop_CheckHovered_Params
{
};

// Function AT.AT_UIShopTraining.OnIconClearAnimation
struct UAT_UIShopTraining_OnIconClearAnimation_Params
{
};

// Function AT.AT_UIShopTraining.OnFinishedSlide_R_OutAnimation
struct UAT_UIShopTraining_OnFinishedSlide_R_OutAnimation_Params
{
};

// Function AT.AT_UIShopTraining.OnFinishedSlide_L_OutAnimation
struct UAT_UIShopTraining_OnFinishedSlide_L_OutAnimation_Params
{
};

// Function AT.AT_UIShopTraining.OnEventBattleStart
struct UAT_UIShopTraining_OnEventBattleStart_Params
{
};

// Function AT.AT_UIShopTraining.OnEventBattleNotify
struct UAT_UIShopTraining_OnEventBattleNotify_Params
{
};

// Function AT.AT_UIShopTraining.OnEventBattleEnd
struct UAT_UIShopTraining_OnEventBattleEnd_Params
{
};

// Function AT.AT_UIShopTraining.OnClearAnimation
struct UAT_UIShopTraining_OnClearAnimation_Params
{
};

// Function AT.AT_UIShopTraining.MouseClickTabRight
struct UAT_UIShopTraining_MouseClickTabRight_Params
{
};

// Function AT.AT_UIShopTraining.MouseClickTabLeft
struct UAT_UIShopTraining_MouseClickTabLeft_Params
{
};

// Function AT.AT_UIShopTraining.MouseClickDecide
struct UAT_UIShopTraining_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopTraining.DetailUpdate
struct UAT_UIShopTraining_DetailUpdate_Params
{
};

// Function AT.AT_UIShopTraining.CheckHovered
struct UAT_UIShopTraining_CheckHovered_Params
{
};

// Function AT.AT_UIShopTraining00.PlayOut
struct UAT_UIShopTraining00_PlayOut_Params
{
};

// Function AT.AT_UIShopTraining00.OnConfirmWindowSelectItem
struct UAT_UIShopTraining00_OnConfirmWindowSelectItem_Params
{
	int                                                SELECT;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopTraining00.MouseClickDecide
struct UAT_UIShopTraining00_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopTraining00.DetailUpdate
struct UAT_UIShopTraining00_DetailUpdate_Params
{
};

// Function AT.AT_UIShopTraining00.CheckHovered
struct UAT_UIShopTraining00_CheckHovered_Params
{
};

// Function AT.AT_UIShopTraining01.OnFinishedSlide_R_OutAnimation
struct UAT_UIShopTraining01_OnFinishedSlide_R_OutAnimation_Params
{
};

// Function AT.AT_UIShopTraining01.OnFinishedSlide_L_OutAnimation
struct UAT_UIShopTraining01_OnFinishedSlide_L_OutAnimation_Params
{
};

// Function AT.AT_UIShopTraining01.MouseClickTabRight
struct UAT_UIShopTraining01_MouseClickTabRight_Params
{
};

// Function AT.AT_UIShopTraining01.MouseClickTabLeft
struct UAT_UIShopTraining01_MouseClickTabLeft_Params
{
};

// Function AT.AT_UIShopTraining01.MouseClickDecide
struct UAT_UIShopTraining01_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopTraining01.DetailUpdate
struct UAT_UIShopTraining01_DetailUpdate_Params
{
};

// Function AT.AT_UIShopTraining01.CheckHovered
struct UAT_UIShopTraining01_CheckHovered_Params
{
};

// Function AT.AT_UIShopTraining02.MouseClickDecide
struct UAT_UIShopTraining02_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIShopTraining02.DetailUpdate
struct UAT_UIShopTraining02_DetailUpdate_Params
{
};

// Function AT.AT_UIShopTraining02.CheckHovered
struct UAT_UIShopTraining02_CheckHovered_Params
{
};

// Function AT.AT_UISkillChain.OnTotalDamageEnd
struct UAT_UISkillChain_OnTotalDamageEnd_Params
{
};

// Function AT.AT_UISkillChain.OnComboEndEvent
struct UAT_UISkillChain_OnComboEndEvent_Params
{
	struct FEventParam                                 evParam;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISkillChain.OnComboAddEvent
struct UAT_UISkillChain_OnComboAddEvent_Params
{
	struct FEventParam                                 evParam;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISkillChain.OnBattleStart
struct UAT_UISkillChain_OnBattleStart_Params
{
};

// Function AT.AT_UISkillChain.OnBattleEnd
struct UAT_UISkillChain_OnBattleEnd_Params
{
};

// Function AT.AT_UISkillCustomize.Out_List
struct UAT_UISkillCustomize_Out_List_Params
{
};

// Function AT.AT_UISkillCustomize.Out_Header
struct UAT_UISkillCustomize_Out_Header_Params
{
};

// Function AT.AT_UISkillCustomize.Out_Bg
struct UAT_UISkillCustomize_Out_Bg_Params
{
};

// Function AT.AT_UISkillCustomize.MouseClickTabRight
struct UAT_UISkillCustomize_MouseClickTabRight_Params
{
};

// Function AT.AT_UISkillCustomize.MouseClickTabLeft
struct UAT_UISkillCustomize_MouseClickTabLeft_Params
{
};

// Function AT.AT_UISkillCustomize.MouseClickDecide
struct UAT_UISkillCustomize_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISkillCustomize.In_List
struct UAT_UISkillCustomize_In_List_Params
{
};

// Function AT.AT_UISkillCustomize.In_Header_Bg
struct UAT_UISkillCustomize_In_Header_Bg_Params
{
};

// Function AT.AT_UISkillCustomize.DetailUpdate
struct UAT_UISkillCustomize_DetailUpdate_Params
{
};

// Function AT.AT_UISkillCustomize.CheckHovered
struct UAT_UISkillCustomize_CheckHovered_Params
{
};

// Function AT.AT_UISkillCustomizePlate.Change_Txt
struct UAT_UISkillCustomizePlate_Change_Txt_Params
{
};

// Function AT.AT_UISkillEnemyIcon.ConstructFirstOnly
struct UAT_UISkillEnemyIcon_ConstructFirstOnly_Params
{
};

// Function AT.AT_UISkillTree.Open
struct UAT_UISkillTree_Open_Params
{
	class UAT_UISkillTreeMenu*                         OwnerMenu;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInStartWithTraining;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ECHARACTER_TYPE                                 InCharType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AwakePassiveMode;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       superPassiveSkillID;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISkillTree.OnInputZoomOut
struct UAT_UISkillTree_OnInputZoomOut_Params
{
};

// Function AT.AT_UISkillTree.OnInputGotoSkillCustomize
struct UAT_UISkillTree_OnInputGotoSkillCustomize_Params
{
};

// Function AT.AT_UISkillTree.OnInputDPadUp
struct UAT_UISkillTree_OnInputDPadUp_Params
{
};

// Function AT.AT_UISkillTree.OnInputDPadRight
struct UAT_UISkillTree_OnInputDPadRight_Params
{
};

// Function AT.AT_UISkillTree.OnInputDPadLeft
struct UAT_UISkillTree_OnInputDPadLeft_Params
{
};

// Function AT.AT_UISkillTree.OnInputDPadDown
struct UAT_UISkillTree_OnInputDPadDown_Params
{
};

// Function AT.AT_UISkillTree.OnInputDecide
struct UAT_UISkillTree_OnInputDecide_Params
{
};

// Function AT.AT_UISkillTree.OnInputCancel
struct UAT_UISkillTree_OnInputCancel_Params
{
};

// Function AT.AT_UISkillTreeMenu.Out_Header
struct UAT_UISkillTreeMenu_Out_Header_Params
{
};

// Function AT.AT_UISkillTreeMenu.Out_Bg
struct UAT_UISkillTreeMenu_Out_Bg_Params
{
};

// Function AT.AT_UISkillTreeMenu.OnSkillGetWindowClosedInSuperPassiveOpend
struct UAT_UISkillTreeMenu_OnSkillGetWindowClosedInSuperPassiveOpend_Params
{
	int                                                SELECT;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISkillTreeMenu.OnSkillGetWindowClosed
struct UAT_UISkillTreeMenu_OnSkillGetWindowClosed_Params
{
	int                                                SELECT;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISkillTreeMenu.OnMessegeWindowUp
struct UAT_UISkillTreeMenu_OnMessegeWindowUp_Params
{
};

// Function AT.AT_UISkillTreeMenu.OnMessegeWindowDown
struct UAT_UISkillTreeMenu_OnMessegeWindowDown_Params
{
};

// Function AT.AT_UISkillTreeMenu.OnMessegeWindowDecide
struct UAT_UISkillTreeMenu_OnMessegeWindowDecide_Params
{
};

// Function AT.AT_UISkillTreeMenu.OnMessegeWindowCancel
struct UAT_UISkillTreeMenu_OnMessegeWindowCancel_Params
{
};

// Function AT.AT_UISkillTreeMenu.In_Header_Bg
struct UAT_UISkillTreeMenu_In_Header_Bg_Params
{
};

// Function AT.AT_UISkillTreePanel.OnIn_Line
struct UAT_UISkillTreePanel_OnIn_Line_Params
{
};

// Function AT.AT_UIStartChar.SetViewIndexAndCursorIndex
struct UAT_UIStartChar_SetViewIndexAndCursorIndex_Params
{
	int                                                a_view;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                a_cursor;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartChar.Open
struct UAT_UIStartChar_Open_Params
{
};

// Function AT.AT_UIStartChar.OnOutHeader
struct UAT_UIStartChar_OnOutHeader_Params
{
};

// Function AT.AT_UIStartChar.OnOutBg
struct UAT_UIStartChar_OnOutBg_Params
{
};

// Function AT.AT_UIStartChar.OnInBgHeader
struct UAT_UIStartChar_OnInBgHeader_Params
{
};

// Function AT.AT_UIStartChar.MouseWheel
struct UAT_UIStartChar_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartChar.MouseClickDecide
struct UAT_UIStartChar_MouseClickDecide_Params
{
	struct FGeometry                                   MyGeometry;                                                // (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               MouseEvent;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartChar.LoadAsset
struct UAT_UIStartChar_LoadAsset_Params
{
};

// Function AT.AT_UIStartChar.IsLoaded
struct UAT_UIStartChar_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartChar.GetViewIndex
struct UAT_UIStartChar_GetViewIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartChar.GetFocusNum
struct UAT_UIStartChar_GetFocusNum_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartChar.GetCursorIndex
struct UAT_UIStartChar_GetCursorIndex_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartChar.Close
struct UAT_UIStartChar_Close_Params
{
};

// Function AT.AT_UIStartChar.CheckHovered
struct UAT_UIStartChar_CheckHovered_Params
{
};

// Function AT.AT_UIStartChar.AddCaptureParam
struct UAT_UIStartChar_AddCaptureParam_Params
{
	AT_ECHARACTER_TYPE                                 icon;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      VariationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FormId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AnimId;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      FaceId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EFacialType                                     FacialType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  CameraTrans;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartCharBar.SetToRemoveView
struct UAT_UIStartCharBar_SetToRemoveView_Params
{
};

// Function AT.AT_UIStartCharBar.SetParam
struct UAT_UIStartCharBar_SetParam_Params
{
	AT_ECHARACTER_TYPE                                 Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  icon;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EUnselectableFilterText                         Mode;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartCharBar.LoseFocus
struct UAT_UIStartCharBar_LoseFocus_Params
{
};

// Function AT.AT_UIStartCharBar.InputDecide
struct UAT_UIStartCharBar_InputDecide_Params
{
};

// Function AT.AT_UIStartCharBar.Focus
struct UAT_UIStartCharBar_Focus_Params
{
};

// Function AT.AT_UIStartCommuDetail.MouseClickDecide
struct UAT_UIStartCommuDetail_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartCommuDetail.Header_Out_Internal
struct UAT_UIStartCommuDetail_Header_Out_Internal_Params
{
};

// Function AT.AT_UIStartCommuDetail.Header_Bg_In_Internal
struct UAT_UIStartCommuDetail_Header_Bg_In_Internal_Params
{
};

// Function AT.AT_UIStartCommuDetail.CheckHovered
struct UAT_UIStartCommuDetail_CheckHovered_Params
{
};

// Function AT.AT_UIStartCommuDetail.Bg_Out
struct UAT_UIStartCommuDetail_Bg_Out_Params
{
};

// Function AT.AT_UIStartDragonBallMenu.PlayOutHeader
struct UAT_UIStartDragonBallMenu_PlayOutHeader_Params
{
};

// Function AT.AT_UIStartDragonBallMenu.PlayOutBg
struct UAT_UIStartDragonBallMenu_PlayOutBg_Params
{
};

// Function AT.AT_UIStartDragonBallMenu.PlayInHeaderBg
struct UAT_UIStartDragonBallMenu_PlayInHeaderBg_Params
{
};

// Function AT.AT_UIStartDragonBallMenu.MouseClickDecide
struct UAT_UIStartDragonBallMenu_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartDragonBallMenu.CheckHovered
struct UAT_UIStartDragonBallMenu_CheckHovered_Params
{
};

// Function AT.AT_UIStartDragonBallMenuBar.SetText
struct UAT_UIStartDragonBallMenuBar_SetText_Params
{
};

// Function AT.AT_UIStartDragonBallMenuBar.CancelText
struct UAT_UIStartDragonBallMenuBar_CancelText_Params
{
};

// Function AT.AT_UIStartOption.Out_List
struct UAT_UIStartOption_Out_List_Params
{
};

// Function AT.AT_UIStartOption.Out_Header
struct UAT_UIStartOption_Out_Header_Params
{
};

// Function AT.AT_UIStartOption.Out_Bg
struct UAT_UIStartOption_Out_Bg_Params
{
};

// Function AT.AT_UIStartOption.In_List
struct UAT_UIStartOption_In_List_Params
{
};

// Function AT.AT_UIStartOption.In_Header_Bg
struct UAT_UIStartOption_In_Header_Bg_Params
{
};

// Function AT.AT_UIStartOption.CheckHovered
struct UAT_UIStartOption_CheckHovered_Params
{
};

// Function AT.AT_UIStartParty.On_Out_Down
struct UAT_UIStartParty_On_Out_Down_Params
{
};

// Function AT.AT_UIStartParty.On_In_Down
struct UAT_UIStartParty_On_In_Down_Params
{
};

// Function AT.AT_UIStartParty.MouseWheel
struct UAT_UIStartParty_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartParty.MouseClickDecide
struct UAT_UIStartParty_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartParty.CheckHovered
struct UAT_UIStartParty_CheckHovered_Params
{
};

// Function AT.AT_UIStartPartyBar.SetStartPartyBarParam
struct UAT_UIStartPartyBar_SetStartPartyBarParam_Params
{
	struct FStartStatusBasicParam                      StartStatusBasicParam;                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               isAnim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isSwap;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartPartyBar.SetAnimation
struct UAT_UIStartPartyBar_SetAnimation_Params
{
	class UWidgetAnimation*                            Enter;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            InCurs;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            InDown;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                            OutDown;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartPartyBar.GetIsPlayer
struct UAT_UIStartPartyBar_GetIsPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartPartyBar.GetEditMode
struct UAT_UIStartPartyBar_GetEditMode_Params
{
	AT_EStartPartyBarEditMode                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartPartyBar.GetCharaType
struct UAT_UIStartPartyBar_GetCharaType_Params
{
	AT_ECHARACTER_TYPE                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartPartyBar.Ev_Change_Char
struct UAT_UIStartPartyBar_Ev_Change_Char_Params
{
};

// Function AT.AT_UIStartPartyBar.ConstructFirstOnly
struct UAT_UIStartPartyBar_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIStartPartyList.SetParam
struct UAT_UIStartPartyList_SetParam_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ECHARACTER_TYPE                                 Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  tex;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUnConfigurable;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bChange;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSwap;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartPartyList.GetIsPlayer
struct UAT_UIStartPartyList_GetIsPlayer_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartPartyList.GetEditMode
struct UAT_UIStartPartyList_GetEditMode_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EStartPartyBarEditMode                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartPartyList.GetCharaType
struct UAT_UIStartPartyList_GetCharaType_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_ECHARACTER_TYPE                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartQuest.UpdateDetail
struct UAT_UIStartQuest_UpdateDetail_Params
{
};

// Function AT.AT_UIStartQuest.OnFinished_Anim_Chage_Task
struct UAT_UIStartQuest_OnFinished_Anim_Chage_Task_Params
{
};

// Function AT.AT_UIStartQuest.OnFinished_Anim_Chage_Story
struct UAT_UIStartQuest_OnFinished_Anim_Chage_Story_Params
{
};

// Function AT.AT_UIStartQuest.On_Out_List
struct UAT_UIStartQuest_On_Out_List_Params
{
};

// Function AT.AT_UIStartQuest.On_Out_Header
struct UAT_UIStartQuest_On_Out_Header_Params
{
};

// Function AT.AT_UIStartQuest.On_Out_Bg
struct UAT_UIStartQuest_On_Out_Bg_Params
{
};

// Function AT.AT_UIStartQuest.On_In_List
struct UAT_UIStartQuest_On_In_List_Params
{
};

// Function AT.AT_UIStartQuest.On_In_Header_Bg
struct UAT_UIStartQuest_On_In_Header_Bg_Params
{
};

// Function AT.AT_UIStartQuest.CheckHovered
struct UAT_UIStartQuest_CheckHovered_Params
{
};

// Function AT.AT_UIStartSaveLoad.Out_Header
struct UAT_UIStartSaveLoad_Out_Header_Params
{
};

// Function AT.AT_UIStartSaveLoad.Out_Bg
struct UAT_UIStartSaveLoad_Out_Bg_Params
{
};

// Function AT.AT_UIStartSaveLoad.In_Header_Bg
struct UAT_UIStartSaveLoad_In_Header_Bg_Params
{
};

// Function AT.AT_UIStartStatus.Open
struct UAT_UIStartStatus_Open_Params
{
};

// Function AT.AT_UIStartStatus.OnOutHeader
struct UAT_UIStartStatus_OnOutHeader_Params
{
};

// Function AT.AT_UIStartStatus.OnOutBg
struct UAT_UIStartStatus_OnOutBg_Params
{
};

// Function AT.AT_UIStartStatus.OnInBgHeader
struct UAT_UIStartStatus_OnInBgHeader_Params
{
};

// Function AT.AT_UIStartStatus.Close
struct UAT_UIStartStatus_Close_Params
{
};

// Function AT.AT_UIStartStatusHud.SetGauge
struct UAT_UIStartStatusHud_SetGauge_Params
{
	float                                              currentNum;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxNum;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EGaugeColor                                     Color;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isAnim;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartStatusList00.Set
struct UAT_UIStartStatusList00_Set_Params
{
	AT_ESkillIcon                                      icon;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SkillName;                                                 // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartStatusList01.Set
struct UAT_UIStartStatusList01_Set_Params
{
	AT_EViewStatusIconType                             StatusIconType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Num;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartStatusList02.Set
struct UAT_UIStartStatusList02_Set_Params
{
	struct FString                                     Title;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Num;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStartTips.Out_List
struct UAT_UIStartTips_Out_List_Params
{
};

// Function AT.AT_UIStartTips.Out_Header
struct UAT_UIStartTips_Out_Header_Params
{
};

// Function AT.AT_UIStartTips.Out_Bg
struct UAT_UIStartTips_Out_Bg_Params
{
};

// Function AT.AT_UIStartTips.In_List
struct UAT_UIStartTips_In_List_Params
{
};

// Function AT.AT_UIStartTips.In_Header_Bg
struct UAT_UIStartTips_In_Header_Bg_Params
{
};

// Function AT.AT_UIStartTips.CheckHovered
struct UAT_UIStartTips_CheckHovered_Params
{
};

// Function AT.AT_UIStartTop.Sys_Out_SubCurs
struct UAT_UIStartTop_Sys_Out_SubCurs_Params
{
};

// Function AT.AT_UIStartTop.Sys_Out_Curs
struct UAT_UIStartTop_Sys_Out_Curs_Params
{
};

// Function AT.AT_UIStartTop.Sys_Out
struct UAT_UIStartTop_Sys_Out_Params
{
};

// Function AT.AT_UIStartTop.Sys_In_SubCurs
struct UAT_UIStartTop_Sys_In_SubCurs_Params
{
};

// Function AT.AT_UIStartTop.Sys_In_Curs
struct UAT_UIStartTop_Sys_In_Curs_Params
{
};

// Function AT.AT_UIStartTop.Out_Curs
struct UAT_UIStartTop_Out_Curs_Params
{
};

// Function AT.AT_UIStartTop.Out_Bg
struct UAT_UIStartTop_Out_Bg_Params
{
};

// Function AT.AT_UIStartTop.Loop_CompZ_Deco
struct UAT_UIStartTop_Loop_CompZ_Deco_Params
{
};

// Function AT.AT_UIStartTop.In_Curs
struct UAT_UIStartTop_In_Curs_Params
{
};

// Function AT.AT_UIStartTop.In_Bg
struct UAT_UIStartTop_In_Bg_Params
{
};

// Function AT.AT_UIStartTop.Com_Out_SubCurs
struct UAT_UIStartTop_Com_Out_SubCurs_Params
{
};

// Function AT.AT_UIStartTop.Com_Out_Curs
struct UAT_UIStartTop_Com_Out_Curs_Params
{
};

// Function AT.AT_UIStartTop.Com_Out
struct UAT_UIStartTop_Com_Out_Params
{
};

// Function AT.AT_UIStartTop.Com_In_SubCurs
struct UAT_UIStartTop_Com_In_SubCurs_Params
{
};

// Function AT.AT_UIStartTop.Com_In_Curs
struct UAT_UIStartTop_Com_In_Curs_Params
{
};

// Function AT.AT_UIStartTop.CheckHovered
struct UAT_UIStartTop_CheckHovered_Params
{
};

// Function AT.AT_UIStateIcon.UndoAnimMovement
struct UAT_UIStateIcon_UndoAnimMovement_Params
{
};

// Function AT.AT_UIStateIcon.StopPlayAnimation
struct UAT_UIStateIcon_StopPlayAnimation_Params
{
};

// Function AT.AT_UIStateIcon.SetVisibleEffectLight
struct UAT_UIStateIcon_SetVisibleEffectLight_Params
{
	bool                                               InEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.SetVisible
struct UAT_UIStateIcon_SetVisible_Params
{
	bool                                               bIsVisible;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.SetSelfTimerMode
struct UAT_UIStateIcon_SetSelfTimerMode_Params
{
	bool                                               bOnTimer;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.SetPosition
struct UAT_UIStateIcon_SetPosition_Params
{
	struct FVector2D                                   InPostion;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.SetIconInfo
struct UAT_UIStateIcon_SetIconInfo_Params
{
	struct FStateIconInfo                              InIconInfo;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.SetBuffTimeRate
struct UAT_UIStateIcon_SetBuffTimeRate_Params
{
	float                                              InRate;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.SetBattleMode
struct UAT_UIStateIcon_SetBattleMode_Params
{
	bool                                               bInBatteleMode;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.SetAnimReqThrough
struct UAT_UIStateIcon_SetAnimReqThrough_Params
{
	bool                                               IsThrough;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.Resume
struct UAT_UIStateIcon_Resume_Params
{
};

// Function AT.AT_UIStateIcon.RequestPlayAnimation
struct UAT_UIStateIcon_RequestPlayAnimation_Params
{
	AT_EAnimType                                       animType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.Pause
struct UAT_UIStateIcon_Pause_Params
{
};

// Function AT.AT_UIStateIcon.IsVisibleEffectLight
struct UAT_UIStateIcon_IsVisibleEffectLight_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.GetPosition
struct UAT_UIStateIcon_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.GetPlayingAnim
struct UAT_UIStateIcon_GetPlayingAnim_Params
{
	AT_EAnimType                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIStateIcon.Clear
struct UAT_UIStateIcon_Clear_Params
{
};

// Function AT.AT_UIStateIcon.CheckEndSign
struct UAT_UIStateIcon_CheckEndSign_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISystemWindow.SetVisible
struct UAT_UISystemWindow_SetVisible_Params
{
	bool                                               visible;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISystemWindow.SetupTitleWindow
struct UAT_UISystemWindow_SetupTitleWindow_Params
{
	struct FString                                     titleTxt;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     mainMsg;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFeedMarkVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISystemWindow.SetupSelectOnlyWindow
struct UAT_UISystemWindow_SetupSelectOnlyWindow_Params
{
	TArray<struct FString>                             selectItemCtn;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                defaultSelectNo;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISystemWindow.SetupSelectItemTitleWindow
struct UAT_UISystemWindow_SetupSelectItemTitleWindow_Params
{
	struct FString                                     titleTxt;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             selectItemCtn;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                defaultSelectNo;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISystemWindow.SetupSelectItemMessageWindow
struct UAT_UISystemWindow_SetupSelectItemMessageWindow_Params
{
	struct FString                                     mainTxt;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             selectItemCtn;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                defaultSelectNo;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISystemWindow.SetUpMessageWindow
struct UAT_UISystemWindow_SetUpMessageWindow_Params
{
	struct FString                                     mainMsg;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFeedMarkVisible;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISystemWindow.SetClosed
struct UAT_UISystemWindow_SetClosed_Params
{
};

// Function AT.AT_UISystemWindow.MouseClickDecide
struct UAT_UISystemWindow_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UISystemWindow.CheckHovered
struct UAT_UISystemWindow_CheckHovered_Params
{
};

// Function AT.AT_UITips.Out_Win
struct UAT_UITips_Out_Win_Params
{
};

// Function AT.AT_UITips.Out_Headder
struct UAT_UITips_Out_Headder_Params
{
};

// Function AT.AT_UITips.MouseClickTabRight
struct UAT_UITips_MouseClickTabRight_Params
{
};

// Function AT.AT_UITips.MouseClickTabLeft
struct UAT_UITips_MouseClickTabLeft_Params
{
};

// Function AT.AT_UITips.MouseClickDecide
struct UAT_UITips_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UITips.Loop_Arrow
struct UAT_UITips_Loop_Arrow_Params
{
};

// Function AT.AT_UITips.In_Win
struct UAT_UITips_In_Win_Params
{
};

// Function AT.AT_UITips.In_Headder
struct UAT_UITips_In_Headder_Params
{
};

// Function AT.AT_UITips.CheckHovered
struct UAT_UITips_CheckHovered_Params
{
};

// Function AT.AT_UITotalDamage.ConstructFirstOnly
struct UAT_UITotalDamage_ConstructFirstOnly_Params
{
};

// Function AT.AT_UITrialClear.PlayIn
struct UAT_UITrialClear_PlayIn_Params
{
};

// Function AT.AT_UIUtil.SettoUICommonInput
struct UAT_UIUtil_SettoUICommonInput_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIUtil.DebugChangeLangage
struct UAT_UIUtil_DebugChangeLangage_Params
{
	TEnumAsByte<CFramework_ERegionType>                InRegion;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<CFramework_ELanguageType>              InLanguage;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIWindowManager.MouseClickDecide
struct UAT_UIWindowManager_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnAgreement.MouseClickTabRight
struct UAT_UIXcmnAgreement_MouseClickTabRight_Params
{
};

// Function AT.AT_UIXcmnAgreement.MouseClickTabLeft
struct UAT_UIXcmnAgreement_MouseClickTabLeft_Params
{
};

// Function AT.AT_UIXcmnAgreement.MouseClickDecide
struct UAT_UIXcmnAgreement_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnAgreement.Loop_Arrow
struct UAT_UIXcmnAgreement_Loop_Arrow_Params
{
};

// Function AT.AT_UIXcmnAgreement.CheckHovered
struct UAT_UIXcmnAgreement_CheckHovered_Params
{
};

// Function AT.AT_UIXcmnBg.SetRootVisibility
struct UAT_UIXcmnBg_SetRootVisibility_Params
{
	bool                                               bVisible;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnBg.PlayOut
struct UAT_UIXcmnBg_PlayOut_Params
{
};

// Function AT.AT_UIXcmnBg.PlayIn
struct UAT_UIXcmnBg_PlayIn_Params
{
};

// Function AT.AT_UIXcmnBg.IsStopAnimation
struct UAT_UIXcmnBg_IsStopAnimation_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnCredit.PlayOut
struct UAT_UIXcmnCredit_PlayOut_Params
{
};

// Function AT.AT_UIXcmnCredit.PlayIn
struct UAT_UIXcmnCredit_PlayIn_Params
{
};

// Function AT.AT_UIXcmnCredit.OnOutAnimationFinished
struct UAT_UIXcmnCredit_OnOutAnimationFinished_Params
{
};

// Function AT.AT_UIXcmnCredit.OnInAnimationFinished
struct UAT_UIXcmnCredit_OnInAnimationFinished_Params
{
};

// Function AT.AT_UIXcmnCredit.IsLoaded
struct UAT_UIXcmnCredit_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXCmnEmb.ConstructFirstOnly
struct UAT_UIXCmnEmb_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIXCmnEmb_Cursor.ConstructFirstOnly
struct UAT_UIXCmnEmb_Cursor_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIXCmnEmb_Reality.Evt_Anim_Frame_In00
struct UAT_UIXCmnEmb_Reality_Evt_Anim_Frame_In00_Params
{
};

// Function AT.AT_UIXCmnEmb_Reality.ConstructFirstOnly
struct UAT_UIXCmnEmb_Reality_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIXcmnFadeBlur.PlayOut
struct UAT_UIXcmnFadeBlur_PlayOut_Params
{
};

// Function AT.AT_UIXcmnFadeBlur.PlayIn
struct UAT_UIXcmnFadeBlur_PlayIn_Params
{
};

// Function AT.AT_UIXCmnHeader.SetFontTypeWithCategory
struct UAT_UIXCmnHeader_SetFontTypeWithCategory_Params
{
	AT_EXCmnHeaderFontType                             FontType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ATExt_ECOMMUNITY_CATEGORY                          CmuType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoStart;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXCmnHeader.SetFontType
struct UAT_UIXCmnHeader_SetFontType_Params
{
	AT_EXCmnHeaderFontType                             FontType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EXCmnHeaderIconType                             IconType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoStart;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXCmnHeader.PlayOut
struct UAT_UIXCmnHeader_PlayOut_Params
{
};

// Function AT.AT_UIXCmnHeader.PlayIn
struct UAT_UIXCmnHeader_PlayIn_Params
{
};

// Function AT.AT_UIXCmnHeader.IsHeaderStateIn
struct UAT_UIXCmnHeader_IsHeaderStateIn_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXCmnHeader.IsFinishSetFontType
struct UAT_UIXCmnHeader_IsFinishSetFontType_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnHeaderS.PlayOut
struct UAT_UIXcmnHeaderS_PlayOut_Params
{
};

// Function AT.AT_UIXcmnHeaderS.PlayIn
struct UAT_UIXcmnHeaderS_PlayIn_Params
{
	AT_EMiniHeaderType                                 HeaderType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnMultiLineTextFitBox.SetText
struct UAT_UIXcmnMultiLineTextFitBox_SetText_Params
{
	struct FText                                       InText;                                                    // (Parm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnMultiLineTextFitBox.GetText
struct UAT_UIXcmnMultiLineTextFitBox_GetText_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXCmnPause.OnEnterAnimEnd
struct UAT_UIXCmnPause_OnEnterAnimEnd_Params
{
};

// Function AT.AT_UIXCmnPause.MouseClickTabRight
struct UAT_UIXCmnPause_MouseClickTabRight_Params
{
};

// Function AT.AT_UIXCmnPause.MouseClickTabLeft
struct UAT_UIXCmnPause_MouseClickTabLeft_Params
{
};

// Function AT.AT_UIXCmnPause.MouseClickDecide
struct UAT_UIXCmnPause_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXCmnPause.CheckHovered
struct UAT_UIXCmnPause_CheckHovered_Params
{
};

// Function AT.AT_UIXcmnSystemIcon.OnSystemSaveLoadEnd
struct UAT_UIXcmnSystemIcon_OnSystemSaveLoadEnd_Params
{
	bool                                               IsSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnSystemIcon.OnSaveLoadBegin
struct UAT_UIXcmnSystemIcon_OnSaveLoadBegin_Params
{
};

// Function AT.AT_UIXcmnSystemIcon.OnSaveEnd
struct UAT_UIXcmnSystemIcon_OnSaveEnd_Params
{
	bool                                               IsSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnSystemIcon.OnSaveBegin
struct UAT_UIXcmnSystemIcon_OnSaveBegin_Params
{
};

// Function AT.AT_UIXcmnSystemIcon.DebugRequestLoad
struct UAT_UIXcmnSystemIcon_DebugRequestLoad_Params
{
	int                                                inNo;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnWin02.MouseClickUpArrow
struct UAT_UIXcmnWin02_MouseClickUpArrow_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnWin02.MouseClickDownArrow
struct UAT_UIXcmnWin02_MouseClickDownArrow_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnWin02.MouseClickDecide
struct UAT_UIXcmnWin02_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXcmnWin02.CheckHovered
struct UAT_UIXcmnWin02_CheckHovered_Params
{
};

// Function AT.AT_UIXList_Detail00.ConstructFirstOnly
struct UAT_UIXList_Detail00_ConstructFirstOnly_Params
{
};

// Function AT.AT_UIXListBar01.SetSubMenuParam
struct UAT_UIXListBar01_SetSubMenuParam_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.SetState
struct UAT_UIXListBar01_SetState_Params
{
	AT_EUIXLISTBAR01_STATE_ID                          InState;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.SetNotSelect
struct UAT_UIXListBar01_SetNotSelect_Params
{
	bool                                               notSelect;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.SetItemName
struct UAT_UIXListBar01_SetItemName_Params
{
	struct FString                                     inString;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.LoseFocus
struct UAT_UIXListBar01_LoseFocus_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.IsEndSubEnter
struct UAT_UIXListBar01_IsEndSubEnter_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.IsEndEnter
struct UAT_UIXListBar01_IsEndEnter_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.IsEnable
struct UAT_UIXListBar01_IsEnable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.IsBusy
struct UAT_UIXListBar01_IsBusy_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.GetState
struct UAT_UIXListBar01_GetState_Params
{
	AT_EUIXLISTBAR01_STATE_ID                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.GetNotSelect
struct UAT_UIXListBar01_GetNotSelect_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.Focus
struct UAT_UIXListBar01_Focus_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXListBar01.DebugRequest
struct UAT_UIXListBar01_DebugRequest_Params
{
	int                                                inNo;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXlistBar04.Set
struct UAT_UIXlistBar04_Set_Params
{
	struct FXlistBar04Info                             XlistBar04Info;                                            // (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXlistBar04.LoseFocus
struct UAT_UIXlistBar04_LoseFocus_Params
{
};

// Function AT.AT_UIXlistBar04.InputRight
struct UAT_UIXlistBar04_InputRight_Params
{
};

// Function AT.AT_UIXlistBar04.InputLeft
struct UAT_UIXlistBar04_InputLeft_Params
{
};

// Function AT.AT_UIXlistBar04.Focus
struct UAT_UIXlistBar04_Focus_Params
{
};

// Function AT.AT_UIXlistCustom00Item.Change_Txt
struct UAT_UIXlistCustom00Item_Change_Txt_Params
{
};

// Function AT.AT_UIXlistCustom00.MouseWheel
struct UAT_UIXlistCustom00_MouseWheel_Params
{
	float                                              dir;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_UIXmenuCommu.PlayOutAllStar
struct UAT_UIXmenuCommu_PlayOutAllStar_Params
{
};

// Function AT.AT_UIXmenuCommu.PlayInAllStar
struct UAT_UIXmenuCommu_PlayInAllStar_Params
{
};

// Function AT.AT_UIXmenuCommu.InitAllStar
struct UAT_UIXmenuCommu_InitAllStar_Params
{
};

// Function AT.AT_UIIconStar.OnEndOut
struct UAT_UIIconStar_OnEndOut_Params
{
};

// Function AT.AT_UIXtexPartsDb00.SetRandomDB
struct UAT_UIXtexPartsDb00_SetRandomDB_Params
{
};

// Function AT.AT_UIZCWCompletion.OnEvtBattleStart
struct UAT_UIZCWCompletion_OnEvtBattleStart_Params
{
};

// Function AT.AT_UIZCWCompletion.OnEndTalkEvent
struct UAT_UIZCWCompletion_OnEndTalkEvent_Params
{
};

// Function AT.AT_UIZCWCompletion.OnEndBattle
struct UAT_UIZCWCompletion_OnEndBattle_Params
{
};

// Function AT.AT_UIZCWCompletion.OnBeginBattle
struct UAT_UIZCWCompletion_OnBeginBattle_Params
{
};

// Function AT.ATActBase.OnFireProjectile
struct UATActBase_OnFireProjectile_Params
{
	class AProjectile*                                 InProjectile;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATActHugeSkillBeam.OnProjectileHitWall
struct UATActHugeSkillBeam_OnProjectileHitWall_Params
{
};

// Function AT.ATActCpl013ShockWave.OnEntryDamage
struct UATActCpl013ShockWave_OnEntryDamage_Params
{
};

// Function AT.ATActCpl013ShockWave.OnChangeProjectilePhase
struct UATActCpl013ShockWave_OnChangeProjectilePhase_Params
{
	bool                                               PlayerHit;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATActCpl018SkillSpecial.OnEntryDamage
struct UATActCpl018SkillSpecial_OnEntryDamage_Params
{
};

// Function AT.ATActCpl019BSkillSpecial.OnEntryDamage
struct UATActCpl019BSkillSpecial_OnEntryDamage_Params
{
};

// Function AT.ATActCpl034SkillBarrier.OnSpawnProjectile
struct UATActCpl034SkillBarrier_OnSpawnProjectile_Params
{
	class AProjectile*                                 InProjectile;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATActCpl034SkillPunishmentStorm.OnSpawnProjectile
struct UATActCpl034SkillPunishmentStorm_OnSpawnProjectile_Params
{
	class AProjectile*                                 InProjectile;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InOwner;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATActCpl041EVanishingBall.OnEntryDamage
struct UATActCpl041EVanishingBall_OnEntryDamage_Params
{
};

// Function AT.ATActCpl041EVanishingBall.OnChangeProjectilePhase
struct UATActCpl041EVanishingBall_OnChangeProjectilePhase_Params
{
	bool                                               PlayerHit;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATActDmgBlowoff.OnHitPhoton
struct UATActDmgBlowoff_OnHitPhoton_Params
{
	TArray<struct FHitResult>                          InResults;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              InShouldPassingActors;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATActDmgBlowoffRoll.OnHitPhoton
struct UATActDmgBlowoffRoll_OnHitPhoton_Params
{
	TArray<struct FHitResult>                          InResults;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              InShouldPassingActors;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATActDmgDeathFall.HitCharacter
struct UATActDmgDeathFall_HitCharacter_Params
{
	struct FHitResult                                  InHitResult;                                               // (Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATActDmgLock.OnEndLockAction
struct UATActDmgLock_OnEndLockAction_Params
{
	class AAT_Character*                               InCharacter;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATActDmgLongBlowoff.OnHitPhoton
struct UATActDmgLongBlowoff_OnHitPhoton_Params
{
	TArray<struct FHitResult>                          InResults;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              InShouldPassingActors;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATActDmgLongBlowoffDirection.OnHitPhoton
struct UATActDmgLongBlowoffDirection_OnHitPhoton_Params
{
	TArray<struct FHitResult>                          InResults;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              InShouldPassingActors;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATActDmgLongBlowoffVertical.OnHitPhoton
struct UATActDmgLongBlowoffVertical_OnHitPhoton_Params
{
	TArray<struct FHitResult>                          InResults;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              InShouldPassingActors;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATActHighBoost.DamageApplied
struct UATActHighBoost_DamageApplied_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATActSearch.OnChangeMoveState
struct UATActSearch_OnChangeMoveState_Params
{
	int                                                OldState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActiveState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATActSearch.OnBeginBattle
struct UATActSearch_OnBeginBattle_Params
{
};

// Function AT.ATActSkillBeam.OnProjectileHitWall
struct UATActSkillBeam_OnProjectileHitWall_Params
{
};

// Function AT.QuestBalloonTalk.InitializeTalkInformation
struct UQuestBalloonTalk_InitializeTalkInformation_Params
{
};

// Function AT.QuestBalloonTalk.CloseCurrentTalkIcon
struct UQuestBalloonTalk_CloseCurrentTalkIcon_Params
{
};

// Function AT.QuestCharacter.OnOutSupportCharacter
struct AQuestCharacter_OnOutSupportCharacter_Params
{
	struct FPartyMember                                InMember;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      MemberType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestCharacter.OnJoinedSupportCharacter
struct AQuestCharacter_OnJoinedSupportCharacter_Params
{
	struct FPartyMember                                InMember;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      MemberType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestCharacter.IsCostumeInitialized
struct AQuestCharacter_IsCostumeInitialized_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestCharacter.IsBeginPlayed
struct AQuestCharacter_IsBeginPlayed_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestCharacter.HiddenInEvents
struct AQuestCharacter_HiddenInEvents_Params
{
	AT_EQUEST_GENERAL_TALK_TIMING                      Timing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestCharacterAnimatorCpl002.OnUpdatedMovement
struct UQuestCharacterAnimatorCpl002_OnUpdatedMovement_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OldLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OldVelocity;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestCostumeChanger.OnTimer
struct UQuestCostumeChanger_OnTimer_Params
{
};

// Function AT.QuestCostumeChanger.OnLoadedVariationParts
struct UQuestCostumeChanger_OnLoadedVariationParts_Params
{
	class UATDataAssetVariationMeshAsyncLoad*          PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestCostumeChanger.OnLoadedFormParts
struct UQuestCostumeChanger_OnLoadedFormParts_Params
{
	class UATDataAssetFormMeshAsyncLoad*               PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestCostumeChanger.OnLoadedFacialParts
struct UQuestCostumeChanger_OnLoadedFacialParts_Params
{
	class UATDataAssetFacialAsyncLoad*                 PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestDirector.OnPlay
struct AQuestDirector_OnPlay_Params
{
};

// Function AT.QuestDirector.Finish
struct AQuestDirector_Finish_Params
{
};

// Function AT.QuestEventObservable.OnQuestGeneralTalkEvent
struct UQuestEventObservable_OnQuestGeneralTalkEvent_Params
{
	struct FGeneralTalkEventArgment                    Argment;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.QuestHiddenSwitcher.OnQuestClear
struct UQuestHiddenSwitcher_OnQuestClear_Params
{
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EQuestTimingType                                TimingType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestHiddenSwitcher.OnQuestActivated
struct UQuestHiddenSwitcher_OnQuestActivated_Params
{
	struct FName                                       QuestId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       PreQuestId;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBegin;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestPhaseBase.RequestShowNavigation
struct UQuestPhaseBase_RequestShowNavigation_Params
{
};

// Function AT.QuestPhaseBase.RequestDisplayPurpose
struct UQuestPhaseBase_RequestDisplayPurpose_Params
{
	struct FEventParam                                 EventParam;                                                // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.QuestPhase_ChangeCharacter.OnChangedPlayer
struct UQuestPhase_ChangeCharacter_OnChangedPlayer_Params
{
	class AAT_Character*                               Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestPhase_WishDragonBall.TryClear
struct UQuestPhase_WishDragonBall_TryClear_Params
{
	TArray<int>                                        WishedIds;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATQuestRetryActor.IsQuestRetryActive
struct AATQuestRetryActor_IsQuestRetryActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATQuestRetryActor.BeginQuestRetry
struct AATQuestRetryActor_BeginQuestRetry_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATQuestRetryManager.MouseClickDecide
struct UATQuestRetryManager_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.QuestSpawner.OnChangedProgress
struct UQuestSpawner_OnChangedProgress_Params
{
	struct FName                                       Progress;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.QuestSpawner.FetchDataTable
struct UQuestSpawner_FetchDataTable_Params
{
};

// Function AT.ATRestrictMoveControl.SetTargetLanding
struct UATRestrictMoveControl_SetTargetLanding_Params
{
	AT_EATRestrictMoveControlA                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetStandSecond
struct UATRestrictMoveControl_SetStandSecond_Params
{
	AT_EATRestrictMoveControlA                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetStandFirst
struct UATRestrictMoveControl_SetStandFirst_Params
{
	AT_EATRestrictMoveControlA                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetStandBoost
struct UATRestrictMoveControl_SetStandBoost_Params
{
	AT_EATRestrictMoveControlA                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetSearch
struct UATRestrictMoveControl_SetSearch_Params
{
	AT_EATRestrictMoveControlA                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetRideAll
struct UATRestrictMoveControl_SetRideAll_Params
{
	AT_EATRestrictMoveControlA                         InNimbus;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InAirCar;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InTwinFoot;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetNimbusMove
struct UATRestrictMoveControl_SetNimbusMove_Params
{
	AT_EATRestrictMoveControlB                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetJump
struct UATRestrictMoveControl_SetJump_Params
{
	AT_EATRestrictMoveControlA                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetFloatMove
struct UATRestrictMoveControl_SetFloatMove_Params
{
	AT_EATRestrictMoveControlB                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetFloatBoost
struct UATRestrictMoveControl_SetFloatBoost_Params
{
	AT_EATRestrictMoveControlA                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetFieldShot
struct UATRestrictMoveControl_SetFieldShot_Params
{
	AT_EATRestrictMoveControlA                         InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetByPreset
struct UATRestrictMoveControl_SetByPreset_Params
{
	AT_EATRestrictMoveControlPreset                    InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.SetAll
struct UATRestrictMoveControl_SetAll_Params
{
	AT_EATRestrictMoveControlA                         InJump;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InStandFirst;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InStandSecond;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InStandBoost;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InFloatBoost;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InTargetLanding;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InRide;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlB                         InFloatMove;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlB                         InNimbusMove;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InFieldShot;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InSearch;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InMultiJump;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EATRestrictMoveControlA                         InHighJump;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRestrictMoveControl.ResetAll
struct UATRestrictMoveControl_ResetAll_Params
{
};

// Function AT.ATRoomCharaManager.OnOverlapEnd
struct AATRoomCharaManager_OnOverlapEnd_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRoomCharaManager.OnOverlapBegin
struct AATRoomCharaManager_OnOverlapBegin_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRoomCharaManager.OnOutSupportCharacter
struct AATRoomCharaManager_OnOutSupportCharacter_Params
{
	struct FPartyMember                                PartyOutMember;                                            // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      MemberType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATRoomCharaManager.OnJoinedSupportCharacter
struct AATRoomCharaManager_OnJoinedSupportCharacter_Params
{
	struct FPartyMember                                PartyInMember;                                             // (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      MemberType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATActSpecialMoveZigzag.DamageApplied
struct UATActSpecialMoveZigzag_DamageApplied_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATActUseRadar.OnChangeMapState
struct UATActUseRadar_OnChangeMapState_Params
{
	unsigned char                                      InState;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InSubState;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATAnimNotify_PlayParticleEffectCustom.OnSpawnedParticle
struct UATAnimNotify_PlayParticleEffectCustom_OnSpawnedParticle_Params
{
	class UParticleSystemComponent*                    SpawnedParticle;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AnimNotifyState_PlayParticleEffectCustom.OnSpawnedParticle
struct UAnimNotifyState_PlayParticleEffectCustom_OnSpawnedParticle_Params
{
	class UParticleSystemComponent*                    SpawnedParticle;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATAsyncLoader.OnLoaded
struct UATAsyncLoader_OnLoaded_Params
{
};

// Function AT.ATAtrociousManager.OnCompletePhase
struct UATAtrociousManager_OnCompletePhase_Params
{
};

// Function AT.ATAtrociousManager.OnCompleteBeginDirection
struct UATAtrociousManager_OnCompleteBeginDirection_Params
{
};

// Function AT.ATAtrociousBattleBase.OnBeginPlayLevelTiming
struct UATAtrociousBattleBase_OnBeginPlayLevelTiming_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATAtrociousPreBattleBase.OnBeginPlayLevelTiming
struct UATAtrociousPreBattleBase_OnBeginPlayLevelTiming_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.TriggerStaticActor.OnUntouchSphereCollision
struct ATriggerStaticActor_OnUntouchSphereCollision_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.TriggerStaticActor.OnTouchSphereCollision
struct ATriggerStaticActor_OnTouchSphereCollision_Params
{
	class AActor*                                      Actor;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.TriggerStaticActor.OnBattleStart
struct ATriggerStaticActor_OnBattleStart_Params
{
};

// Function AT.TriggerStaticActor.OnBattleEnd
struct ATriggerStaticActor_OnBattleEnd_Params
{
};

// Function AT.AutoMoveTrigger.StartAutoMoveTrigger
struct AAutoMoveTrigger_StartAutoMoveTrigger_Params
{
};

// Function AT.AutoMoveTrigger.StartArrival
struct AAutoMoveTrigger_StartArrival_Params
{
};

// Function AT.AutoMoveTrigger.IsEnableTrigger
struct AAutoMoveTrigger_IsEnableTrigger_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AutoMoveTrigger.CheckTriggerId
struct AAutoMoveTrigger_CheckTriggerId_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATBattleAI.OnChangeAction
struct UATBattleAI_OnChangeAction_Params
{
	class AAT_Character*                               InCharacter;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdPrev;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdNext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATC_CharacterActionManager.OnMontageEnded
struct UATC_CharacterActionManager_OnMontageEnded_Params
{
	class UAnimMontage*                                InMontage;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATC_CharacterActionManager.OnMontageBlendingOut
struct UATC_CharacterActionManager_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                InMontage;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CapturedCharacter.PlayFacialMontage
struct AAT_CapturedCharacter_PlayFacialMontage_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.AT_CapturedCharacter.ApplyAppearance
struct AAT_CapturedCharacter_ApplyAppearance_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.ToDefaultProperty_Implementation
struct UATCharacterAnimInstance_ToDefaultProperty_Implementation_Params
{
};

// Function AT.ATCharacterAnimInstance.SetFirstPersonView
struct UATCharacterAnimInstance_SetFirstPersonView_Params
{
	bool                                               InView;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.SetDefaltProperty_Implementation
struct UATCharacterAnimInstance_SetDefaltProperty_Implementation_Params
{
};

// Function AT.ATCharacterAnimInstance.SetBlendTimeLookAtDefault
struct UATCharacterAnimInstance_SetBlendTimeLookAtDefault_Params
{
};

// Function AT.ATCharacterAnimInstance.SetBlendTimeLookAtCancelDefault
struct UATCharacterAnimInstance_SetBlendTimeLookAtCancelDefault_Params
{
};

// Function AT.ATCharacterAnimInstance.OnMontageStartedDelegate
struct UATCharacterAnimInstance_OnMontageStartedDelegate_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.OnMontageBlendingOutDelegate
struct UATCharacterAnimInstance_OnMontageBlendingOutDelegate_Params
{
	class UAnimMontage*                                Montage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsThirdJumpRolling
struct UATCharacterAnimInstance_IsThirdJumpRolling_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsThirdJumpLanding
struct UATCharacterAnimInstance_IsThirdJumpLanding_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsShotBattleMove
struct UATCharacterAnimInstance_IsShotBattleMove_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsLookForwardMoving
struct UATCharacterAnimInstance_IsLookForwardMoving_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsHighJump
struct UATCharacterAnimInstance_IsHighJump_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsFirstPersonView
struct UATCharacterAnimInstance_IsFirstPersonView_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsEnableRotateSpineBone
struct UATCharacterAnimInstance_IsEnableRotateSpineBone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsEnableRotatePelvisBone
struct UATCharacterAnimInstance_IsEnableRotatePelvisBone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsEnableRotateHeadBone
struct UATCharacterAnimInstance_IsEnableRotateHeadBone_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsEnableLookAt
struct UATCharacterAnimInstance_IsEnableLookAt_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsEnableLipSync
struct UATCharacterAnimInstance_IsEnableLipSync_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsEnableGeneralBlendSpace
struct UATCharacterAnimInstance_IsEnableGeneralBlendSpace_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsChangeLookAtRootNo
struct UATCharacterAnimInstance_IsChangeLookAtRootNo_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.IsApplyFootIK
struct UATCharacterAnimInstance_IsApplyFootIK_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetTriggerThreasholdLookAt
struct UATCharacterAnimInstance_GetTriggerThreasholdLookAt_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetStandWalkEDAnimStartPosition
struct UATCharacterAnimInstance_GetStandWalkEDAnimStartPosition_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetStandWaitVariationBlendTime
struct UATCharacterAnimInstance_GetStandWaitVariationBlendTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetStandWaitVariation
struct UATCharacterAnimInstance_GetStandWaitVariation_Params
{
	TEnumAsByte<AT_EATCharacterStandWaitVariationState> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetRightJointTarget
struct UATCharacterAnimInstance_GetRightJointTarget_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetRightFootEffectorLocation
struct UATCharacterAnimInstance_GetRightFootEffectorLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetNimbusRideType
struct UATCharacterAnimInstance_GetNimbusRideType_Params
{
	TEnumAsByte<AT_EATCharacterNimbusRide>             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetMoveSTMoveGear
struct UATCharacterAnimInstance_GetMoveSTMoveGear_Params
{
	TEnumAsByte<AT_EATCharacterMoveGear>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetMoveEDMoveGear
struct UATCharacterAnimInstance_GetMoveEDMoveGear_Params
{
	TEnumAsByte<AT_EATCharacterMoveGear>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetMontageBase
struct UATCharacterAnimInstance_GetMontageBase_Params
{
	TEnumAsByte<AT_EATCharacterMontageBase>            ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLookAtTargetLocation
struct UATCharacterAnimInstance_GetLookAtTargetLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLookAtTarget
struct UATCharacterAnimInstance_GetLookAtTarget_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLookAtLocationForward
struct UATCharacterAnimInstance_GetLookAtLocationForward_Params
{
	float                                              Length;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLookAtCalculator
struct UATCharacterAnimInstance_GetLookAtCalculator_Params
{
	class ULookAtCalculator*                           ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLipWeight
struct UATCharacterAnimInstance_GetLipWeight_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLipSize
struct UATCharacterAnimInstance_GetLipSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLeftJointTarget
struct UATCharacterAnimInstance_GetLeftJointTarget_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLeftFootEffectorLocation
struct UATCharacterAnimInstance_GetLeftFootEffectorLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetLastJump
struct UATCharacterAnimInstance_GetLastJump_Params
{
	TEnumAsByte<AT_EATCharacterJump>                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetInterpolationBlendTypeForLookAt
struct UATCharacterAnimInstance_GetInterpolationBlendTypeForLookAt_Params
{
	TEnumAsByte<AnimGraphRuntime_EInterpolationBlend>  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetHeadBoneScaleForFpView
struct UATCharacterAnimInstance_GetHeadBoneScaleForFpView_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetGeneralBlendSpaceAxisY
struct UATCharacterAnimInstance_GetGeneralBlendSpaceAxisY_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetGeneralBlendSpaceAxisX
struct UATCharacterAnimInstance_GetGeneralBlendSpaceAxisX_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetGeneralBlendSpace
struct UATCharacterAnimInstance_GetGeneralBlendSpace_Params
{
	class UBlendSpaceBase*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetGazeOffsetRV
struct UATCharacterAnimInstance_GetGazeOffsetRV_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetGazeOffsetRH
struct UATCharacterAnimInstance_GetGazeOffsetRH_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetGazeOffsetLV
struct UATCharacterAnimInstance_GetGazeOffsetLV_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetGazeOffsetLH
struct UATCharacterAnimInstance_GetGazeOffsetLH_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetFloatSwitchGearMoveGear
struct UATCharacterAnimInstance_GetFloatSwitchGearMoveGear_Params
{
	TEnumAsByte<AT_EATCharacterMoveGear>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetEyePupilScale
struct UATCharacterAnimInstance_GetEyePupilScale_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetEnableLookAt
struct UATCharacterAnimInstance_GetEnableLookAt_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetEnableGazing
struct UATCharacterAnimInstance_GetEnableGazing_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetCurrentMoveGear
struct UATCharacterAnimInstance_GetCurrentMoveGear_Params
{
	TEnumAsByte<AT_EATCharacterMoveGear>               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetCurrentJump
struct UATCharacterAnimInstance_GetCurrentJump_Params
{
	TEnumAsByte<AT_EATCharacterJump>                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetCurrentFloatRoll
struct UATCharacterAnimInstance_GetCurrentFloatRoll_Params
{
	TEnumAsByte<AT_EATCharacterFloatRoll>              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetCurrentFloatBoostMotionState
struct UATCharacterAnimInstance_GetCurrentFloatBoostMotionState_Params
{
	TEnumAsByte<AT_EATCharacterFloatBoostMotionState>  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetCurrentBattleFloatVariation
struct UATCharacterAnimInstance_GetCurrentBattleFloatVariation_Params
{
	AT_EATCharacterBattleFloatVariation                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetClampAngleSpineBone
struct UATCharacterAnimInstance_GetClampAngleSpineBone_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetClampAnglePelvisBone
struct UATCharacterAnimInstance_GetClampAnglePelvisBone_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetClampAngleHeadBoneUpDown
struct UATCharacterAnimInstance_GetClampAngleHeadBoneUpDown_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetClampAngleHeadBone
struct UATCharacterAnimInstance_GetClampAngleHeadBone_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBsParamStandMoveLP
struct UATCharacterAnimInstance_GetBsParamStandMoveLP_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBsParamNimbusMoveLP
struct UATCharacterAnimInstance_GetBsParamNimbusMoveLP_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBsParamFloatMoveLP
struct UATCharacterAnimInstance_GetBsParamFloatMoveLP_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBsParamBattleTurn
struct UATCharacterAnimInstance_GetBsParamBattleTurn_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBsParamBattleStep
struct UATCharacterAnimInstance_GetBsParamBattleStep_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBsParamBattleMove
struct UATCharacterAnimInstance_GetBsParamBattleMove_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBlendTimeLookAtCancel
struct UATCharacterAnimInstance_GetBlendTimeLookAtCancel_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBlendTimeLookAt
struct UATCharacterAnimInstance_GetBlendTimeLookAt_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBlendSpaceTypeForLipSync
struct UATCharacterAnimInstance_GetBlendSpaceTypeForLipSync_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterAnimInstance.GetBattleStandStepBack
struct UATCharacterAnimInstance_GetBattleStandStepBack_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCookResourceLoader.CompleteLoad
struct UATCookResourceLoader_CompleteLoad_Params
{
	class UATDataAssetCookingDemoCharacterResourceAsyncLoad* ResourceLoad;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCookResourceLoader.CompleteClear
struct UATCookResourceLoader_CompleteClear_Params
{
	class UATDataAssetCookingDemoCharacterResourceAsyncLoad* ResourceLoad;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterDamageCollision.OnCollisionOverlapEnd
struct UATCharacterDamageCollision_OnCollisionOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterDamageCollision.OnCollisionOverlapBegin
struct UATCharacterDamageCollision_OnCollisionOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterEffectControlComponent.Stop
struct UATCharacterEffectControlComponent_Stop_Params
{
};

// Function AT.ATCharacterEffectControlComponent.Start
struct UATCharacterEffectControlComponent_Start_Params
{
};

// Function AT.ATCharacterFootIKManager.OnPreChangeAnimationBlueprint
struct UATCharacterFootIKManager_OnPreChangeAnimationBlueprint_Params
{
	class UClass*                                      InClass;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      InMesh;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterFootIKManager.OnPostChangeAnimationBlueprint
struct UATCharacterFootIKManager_OnPostChangeAnimationBlueprint_Params
{
	class UClass*                                      InClass;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      InMesh;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterFootIKManager.OnMontageStarted
struct UATCharacterFootIKManager_OnMontageStarted_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterFootIKManager.OnMontageEnded
struct UATCharacterFootIKManager_OnMontageEnded_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.CharacterLocationUpdator.OnUpdatedMovement
struct UCharacterLocationUpdator_OnUpdatedMovement_Params
{
	float                                              DeltaSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OldLocation;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     OldVelocity;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterMovementComponent.OnMoveSolveByHit
struct UATCharacterMovementComponent_OnMoveSolveByHit_Params
{
	class UPrimitiveComponent*                         OverlappedComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      InCauserActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         InCauserComp;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InNormalImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  InHitResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterMoveState.OnReachedJumpApex
struct UATCharacterMoveState_OnReachedJumpApex_Params
{
};

// Function AT.ATCharacterMoveState.OnMovementModeChanged
struct UATCharacterMoveState_OnMovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PreviousCustomMode;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterMoveState.OnLanded
struct UATCharacterMoveState_OnLanded_Params
{
	struct FHitResult                                  InHit;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterMoveState.OnCookingDemoStart
struct UATCharacterMoveState_OnCookingDemoStart_Params
{
	int8_t                                             CutNum;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterMoveState.OnCookingDemoEnd
struct UATCharacterMoveState_OnCookingDemoEnd_Params
{
};

// Function AT.ATCharacterMoveState.OnChangeMoveState
struct UATCharacterMoveState_OnChangeMoveState_Params
{
	int                                                OldState;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActiveState;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterMoveState.OnChangeAction
struct UATCharacterMoveState_OnChangeAction_Params
{
	class AAT_Character*                               InCharacter;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdPrev;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdNext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATVariationPartsLoader.CompleteLoad
struct UATVariationPartsLoader_CompleteLoad_Params
{
	class UATDataAssetVariationMeshAsyncLoad*          PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATVariationPartsLoader.CompleteClear
struct UATVariationPartsLoader_CompleteClear_Params
{
	class UATDataAssetVariationMeshAsyncLoad*          PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFormPartsLoader.CompleteLoad
struct UATFormPartsLoader_CompleteLoad_Params
{
	class UATDataAssetFormMeshAsyncLoad*               PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFormPartsLoader.CompleteClear
struct UATFormPartsLoader_CompleteClear_Params
{
	class UATDataAssetFormMeshAsyncLoad*               PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFacialPartsLoader.CompleteLoad
struct UATFacialPartsLoader_CompleteLoad_Params
{
	class UATDataAssetFacialAsyncLoad*                 PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFacialPartsLoader.CompleteClear
struct UATFacialPartsLoader_CompleteClear_Params
{
	class UATDataAssetFacialAsyncLoad*                 PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterPartsManager.SpawnVariationParts
struct UATCharacterPartsManager_SpawnVariationParts_Params
{
	class UATDataAssetVariationMeshAsyncLoad*          PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterPartsManager.SpawnFormParts
struct UATCharacterPartsManager_SpawnFormParts_Params
{
	class UATDataAssetFormMeshAsyncLoad*               PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterPartsManager.SpawnFacialParts
struct UATCharacterPartsManager_SpawnFacialParts_Params
{
	class UATDataAssetFacialAsyncLoad*                 PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterPartsManager.DestroyVariationParts
struct UATCharacterPartsManager_DestroyVariationParts_Params
{
	class UATDataAssetVariationMeshAsyncLoad*          PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterPartsManager.DestroyFormParts
struct UATCharacterPartsManager_DestroyFormParts_Params
{
	class UATDataAssetFormMeshAsyncLoad*               PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterPartsManager.DestroyFacialParts
struct UATCharacterPartsManager_DestroyFacialParts_Params
{
	class UATDataAssetFacialAsyncLoad*                 PartsLoad;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterRestrictGate.OnEndOverlapGateTrigger
struct AATCharacterRestrictGate_OnEndOverlapGateTrigger_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterRestrictGate.OnBeginOverlapGateTrigger
struct AATCharacterRestrictGate_OnBeginOverlapGateTrigger_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterSparkingComponent.HitOffsetLose
struct UATCharacterSparkingComponent_HitOffsetLose_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterSparkingComponent.HitOffsetDraw
struct UATCharacterSparkingComponent_HitOffsetDraw_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATCharacterSparkingComponent.DamageApplied
struct UATCharacterSparkingComponent_DamageApplied_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.RequestDemoOnLevelVisible
struct UATCheatManager_RequestDemoOnLevelVisible_Params
{
	class ULevelStreaming*                             LevelStreaming;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.OnVisibledLevelByProgress
struct UATCheatManager_OnVisibledLevelByProgress_Params
{
	struct FName                                       InDemoName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.OnVisibledLevel
struct UATCheatManager_OnVisibledLevel_Params
{
	struct FName                                       InDemoName;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.OnLoadedCharacter
struct UATCheatManager_OnLoadedCharacter_Params
{
	class UATDataAssetCharacterAsyncLoad*              charLoad;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATUnloadSubLevel
struct UATCheatManager_ATUnloadSubLevel_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATUnloadCharacter
struct UATCheatManager_ATUnloadCharacter_Params
{
};

// Function AT.ATCheatManager.ATToggleShowDirectionCursorLog
struct UATCheatManager_ATToggleShowDirectionCursorLog_Params
{
};

// Function AT.ATCheatManager.ATToggleShowDamageCollision
struct UATCheatManager_ATToggleShowDamageCollision_Params
{
};

// Function AT.ATCheatManager.ATToggleHideDirectionCursor
struct UATCheatManager_ATToggleHideDirectionCursor_Params
{
};

// Function AT.ATCheatManager.ATStatSummaryAndRaw
struct UATCheatManager_ATStatSummaryAndRaw_Params
{
};

// Function AT.ATCheatManager.ATShowPhotonRoute
struct UATCheatManager_ATShowPhotonRoute_Params
{
};

// Function AT.ATCheatManager.ATShowNearestActionPoint
struct UATCheatManager_ATShowNearestActionPoint_Params
{
	struct FString                                     InFunctionName;                                            // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATSetProgress
struct UATCheatManager_ATSetProgress_Params
{
	struct FName                                       Progress;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                phase_no;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATPrintSubProgress
struct UATCheatManager_ATPrintSubProgress_Params
{
};

// Function AT.ATCheatManager.ATPrintMainProgress
struct UATCheatManager_ATPrintMainProgress_Params
{
};

// Function AT.ATCheatManager.ATMoveToActionPoint
struct UATCheatManager_ATMoveToActionPoint_Params
{
	int                                                InMethodNum;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATMiniGameTestStart
struct UATCheatManager_ATMiniGameTestStart_Params
{
	int                                                MiniGamaType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATLoadSubLevel
struct UATCheatManager_ATLoadSubLevel_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATHuntingDinoAble
struct UATCheatManager_ATHuntingDinoAble_Params
{
	bool                                               src;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATFrameRateVariable
struct UATCheatManager_ATFrameRateVariable_Params
{
	int                                                InFrameRate;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATFrameRateFixed
struct UATCheatManager_ATFrameRateFixed_Params
{
	int                                                InFrameRate;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATEventBattleStart
struct UATCheatManager_ATEventBattleStart_Params
{
};

// Function AT.ATCheatManager.ATEventBattleRetry
struct UATCheatManager_ATEventBattleRetry_Params
{
};

// Function AT.ATCheatManager.ATEventBattleRetire
struct UATCheatManager_ATEventBattleRetire_Params
{
};

// Function AT.ATCheatManager.ATEventBattleLoad
struct UATCheatManager_ATEventBattleLoad_Params
{
	struct FName                                       BattleName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugXOneSkipSignIn
struct UATCheatManager_ATDebugXOneSkipSignIn_Params
{
	bool                                               IsSkip;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugXOneEnableSignOutWatch
struct UATCheatManager_ATDebugXOneEnableSignOutWatch_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugWishDragonBall
struct UATCheatManager_ATDebugWishDragonBall_Params
{
};

// Function AT.ATCheatManager.ATDebugWindowTest
struct UATCheatManager_ATDebugWindowTest_Params
{
	int                                                WindowKind;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WindowType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                testCase;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugVisibleSkeletalMeshes
struct UATCheatManager_ATDebugVisibleSkeletalMeshes_Params
{
	struct FName                                       TargetCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugVisibleBattleHudFlag
struct UATCheatManager_ATDebugVisibleBattleHudFlag_Params
{
};

// Function AT.ATCheatManager.ATDebugViewMissionProgress
struct UATCheatManager_ATDebugViewMissionProgress_Params
{
	struct FName                                       MissionId;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugVariationChangeSupportRight
struct UATCheatManager_ATDebugVariationChangeSupportRight_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugVariationChangeSupportLeft
struct UATCheatManager_ATDebugVariationChangeSupportLeft_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugVariationChange
struct UATCheatManager_ATDebugVariationChange_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUpdateCurrentMission
struct UATCheatManager_ATDebugUpdateCurrentMission_Params
{
};

// Function AT.ATCheatManager.ATDebugUnsubscribe
struct UATCheatManager_ATDebugUnsubscribe_Params
{
};

// Function AT.ATCheatManager.ATDebugUnlockCommunity
struct UATCheatManager_ATDebugUnlockCommunity_Params
{
	int                                                Category;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUnlockAllArea
struct UATCheatManager_ATDebugUnlockAllArea_Params
{
};

// Function AT.ATCheatManager.ATDebugUnloadDataAssets
struct UATCheatManager_ATDebugUnloadDataAssets_Params
{
};

// Function AT.ATCheatManager.ATDebugUiUnlockMapInfo
struct UATCheatManager_ATDebugUiUnlockMapInfo_Params
{
	int                                                AreaID;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiTestSwitch3_FFV
struct UATCheatManager_ATDebugUiTestSwitch3_FFV_Params
{
	int                                                testCase;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value1;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value2;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Value3;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiTestSwitch2_I
struct UATCheatManager_ATDebugUiTestSwitch2_I_Params
{
	int                                                testCase;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value1;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value2;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiTestSwitch1_N
struct UATCheatManager_ATDebugUiTestSwitch1_N_Params
{
	int                                                testCase;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiTestSwitch1_I
struct UATCheatManager_ATDebugUiTestSwitch1_I_Params
{
	int                                                testCase;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value1;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiTestSwitch1_F
struct UATCheatManager_ATDebugUiTestSwitch1_F_Params
{
	int                                                testCase;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiTestSwitch
struct UATCheatManager_ATDebugUiTestSwitch_Params
{
	int                                                testCase;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiSetDummyTextType
struct UATCheatManager_ATDebugUiSetDummyTextType_Params
{
	int                                                InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiOutputWidgetInfo
struct UATCheatManager_ATDebugUiOutputWidgetInfo_Params
{
};

// Function AT.ATCheatManager.ATDebugUiNaviWindowStop
struct UATCheatManager_ATDebugUiNaviWindowStop_Params
{
	bool                                               IsStop;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiNaviWindowStart
struct UATCheatManager_ATDebugUiNaviWindowStart_Params
{
	struct FName                                       UniqueId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiMap
struct UATCheatManager_ATDebugUiMap_Params
{
	int                                                State;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                anim;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUILogDisplay
struct UATCheatManager_ATDebugUILogDisplay_Params
{
	struct FName                                       logLv;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUILog
struct UATCheatManager_ATDebugUILog_Params
{
	struct FName                                       logLv;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                logMode;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               fatalBreak;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiLoadingHide
struct UATCheatManager_ATDebugUiLoadingHide_Params
{
	bool                                               IsHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiFieldMemory
struct UATCheatManager_ATDebugUiFieldMemory_Params
{
	struct FName                                       CollectionId;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiEnableCmnInput
struct UATCheatManager_ATDebugUiEnableCmnInput_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiDispVisibleList
struct UATCheatManager_ATDebugUiDispVisibleList_Params
{
};

// Function AT.ATCheatManager.ATDebugUiDbGet
struct UATCheatManager_ATDebugUiDbGet_Params
{
	int                                                getIdx;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiChangeRegion
struct UATCheatManager_ATDebugUiChangeRegion_Params
{
	struct FString                                     RegionCode;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiChangePlatform
struct UATCheatManager_ATDebugUiChangePlatform_Params
{
	struct FString                                     PlatformCode;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiChangeLanguage
struct UATCheatManager_ATDebugUiChangeLanguage_Params
{
	struct FString                                     LangCode;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiChangeConfirmButton
struct UATCheatManager_ATDebugUiChangeConfirmButton_Params
{
	bool                                               IsAButton;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugUiAddWidgetLog
struct UATCheatManager_ATDebugUiAddWidgetLog_Params
{
};

// Function AT.ATCheatManager.ATDebugTutorialFlagSet
struct UATCheatManager_ATDebugTutorialFlagSet_Params
{
	int                                                SaveId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsView;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugTrophyLogType
struct UATCheatManager_ATDebugTrophyLogType_Params
{
	int                                                InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugToggleRecordingMode
struct UATCheatManager_ATDebugToggleRecordingMode_Params
{
};

// Function AT.ATCheatManager.ATDebugTestPartyOrganize
struct UATCheatManager_ATDebugTestPartyOrganize_Params
{
};

// Function AT.ATCheatManager.ATDebugTestLockOrganize
struct UATCheatManager_ATDebugTestLockOrganize_Params
{
};

// Function AT.ATCheatManager.ATDebugTeleportToItemActor
struct UATCheatManager_ATDebugTeleportToItemActor_Params
{
	struct FName                                       ItemId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugTeleportPlayer
struct UATCheatManager_ATDebugTeleportPlayer_Params
{
	float                                              Range;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugTargetController
struct UATCheatManager_ATDebugTargetController_Params
{
};

// Function AT.ATCheatManager.ATDebugTalkWindowOff
struct UATCheatManager_ATDebugTalkWindowOff_Params
{
};

// Function AT.ATCheatManager.ATDebugSubTitle
struct UATCheatManager_ATDebugSubTitle_Params
{
	struct FString                                     StringID;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              dispTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSubscribe
struct UATCheatManager_ATDebugSubscribe_Params
{
};

// Function AT.ATCheatManager.ATDebugStoryResultOpen
struct UATCheatManager_ATDebugStoryResultOpen_Params
{
};

// Function AT.ATCheatManager.ATDebugStopTalkMontage
struct UATCheatManager_ATDebugStopTalkMontage_Params
{
	struct FString                                     ActorName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TalkMontageId;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugStopBGMFromBGMPlayer
struct UATCheatManager_ATDebugStopBGMFromBGMPlayer_Params
{
	AT_EBGMCategory                                    bgmType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugStopAmbient
struct UATCheatManager_ATDebugStopAmbient_Params
{
};

// Function AT.ATCheatManager.ATDebugStatLoading
struct UATCheatManager_ATDebugStatLoading_Params
{
};

// Function AT.ATCheatManager.ATDebugStartFastForward
struct UATCheatManager_ATDebugStartFastForward_Params
{
};

// Function AT.ATCheatManager.ATDebugStartAutoDebugUI
struct UATCheatManager_ATDebugStartAutoDebugUI_Params
{
};

// Function AT.ATCheatManager.ATDebugSpawmFriend
struct UATCheatManager_ATDebugSpawmFriend_Params
{
	float                                              friendId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoundUnLoadCharacter
struct UATCheatManager_ATDebugSoundUnLoadCharacter_Params
{
	int                                                CharType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoundStopSE
struct UATCheatManager_ATDebugSoundStopSE_Params
{
};

// Function AT.ATCheatManager.ATDebugSoundStopBGM
struct UATCheatManager_ATDebugSoundStopBGM_Params
{
};

// Function AT.ATCheatManager.ATDebugSoundPlVoice
struct UATCheatManager_ATDebugSoundPlVoice_Params
{
	int                                                CueId;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CharType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoundPlaySE
struct UATCheatManager_ATDebugSoundPlaySE_Params
{
	int                                                CueId;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoundPlayBGM
struct UATCheatManager_ATDebugSoundPlayBGM_Params
{
	int                                                bgmID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoundLoadCharacter
struct UATCheatManager_ATDebugSoundLoadCharacter_Params
{
	int                                                CharType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoundListener
struct UATCheatManager_ATDebugSoundListener_Params
{
	bool                                               Param;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoundCategoryVolume
struct UATCheatManager_ATDebugSoundCategoryVolume_Params
{
	int                                                cateID;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Volume;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSound3D
struct UATCheatManager_ATDebugSound3D_Params
{
	bool                                               Param;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoulEmItemGet
struct UATCheatManager_ATDebugSoulEmItemGet_Params
{
};

// Function AT.ATCheatManager.ATDebugSoulEmAllUnlock
struct UATCheatManager_ATDebugSoulEmAllUnlock_Params
{
	int                                                execId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSoulEmAllRarity
struct UATCheatManager_ATDebugSoulEmAllRarity_Params
{
	int                                                Rarity;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSkipQuest
struct UATCheatManager_ATDebugSkipQuest_Params
{
};

// Function AT.ATCheatManager.ATDebugShowWorldBlockingVolume
struct UATCheatManager_ATDebugShowWorldBlockingVolume_Params
{
	struct FName                                       StringID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugShowUniquenessObserver
struct UATCheatManager_ATDebugShowUniquenessObserver_Params
{
};

// Function AT.ATCheatManager.ATDebugShowQuestSymbol
struct UATCheatManager_ATDebugShowQuestSymbol_Params
{
};

// Function AT.ATCheatManager.ATDebugShowQuestResult
struct UATCheatManager_ATDebugShowQuestResult_Params
{
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugShowQuestNotification
struct UATCheatManager_ATDebugShowQuestNotification_Params
{
	struct FName                                       NotificationId;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugShowQuestFindListId
struct UATCheatManager_ATDebugShowQuestFindListId_Params
{
};

// Function AT.ATCheatManager.ATDebugShowQuestCharacterHidden
struct UATCheatManager_ATDebugShowQuestCharacterHidden_Params
{
};

// Function AT.ATCheatManager.ATDebugShowPlayerControlMode
struct UATCheatManager_ATDebugShowPlayerControlMode_Params
{
};

// Function AT.ATCheatManager.ATDebugShowPartyOrganizeFromQuestID
struct UATCheatManager_ATDebugShowPartyOrganizeFromQuestID_Params
{
	struct FName                                       inID;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugShowNoneGeneralCrossTalkVolume
struct UATCheatManager_ATDebugShowNoneGeneralCrossTalkVolume_Params
{
	bool                                               isShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugShowLevelCondition
struct UATCheatManager_ATDebugShowLevelCondition_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugShowItemActor
struct UATCheatManager_ATDebugShowItemActor_Params
{
	struct FName                                       itemCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugShowCrossTalkVolume
struct UATCheatManager_ATDebugShowCrossTalkVolume_Params
{
	bool                                               isShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugShowConfigFiles
struct UATCheatManager_ATDebugShowConfigFiles_Params
{
};

// Function AT.ATCheatManager.ATDebugShowCharacterExp
struct UATCheatManager_ATDebugShowCharacterExp_Params
{
	struct FString                                     TargetType;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetTrainingRoomLevel
struct UATCheatManager_ATDebugSetTrainingRoomLevel_Params
{
	int                                                InLevel;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetSoulEmProficiency
struct UATCheatManager_ATDebugSetSoulEmProficiency_Params
{
	struct FName                                       SoulEmId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Category;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Lv;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetSkillPalette
struct UATCheatManager_ATDebugSetSkillPalette_Params
{
	struct FName                                       Palette;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkillId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetSkillLevelViewer
struct UATCheatManager_ATDebugSetSkillLevelViewer_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetSkillLevelAll
struct UATCheatManager_ATDebugSetSkillLevelAll_Params
{
	struct FName                                       CharaId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetSkillLevel
struct UATCheatManager_ATDebugSetSkillLevel_Params
{
	struct FName                                       CharaId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SkillId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkillLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetSkillEnemyIcon
struct UATCheatManager_ATDebugSetSkillEnemyIcon_Params
{
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetPositionDebugMenu
struct UATCheatManager_ATDebugSetPositionDebugMenu_Params
{
	float                                              PosX;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PosY;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetPlayerLocationToHitPosition
struct UATCheatManager_ATDebugSetPlayerLocationToHitPosition_Params
{
};

// Function AT.ATCheatManager.ATDebugSetPlayerLocationToActor
struct UATCheatManager_ATDebugSetPlayerLocationToActor_Params
{
	struct FName                                       ActorName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetMainProgress
struct UATCheatManager_ATDebugSetMainProgress_Params
{
	struct FName                                       InProgress;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetLevelCondition
struct UATCheatManager_ATDebugSetLevelCondition_Params
{
	struct FString                                     Key;                                                       // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetLayerTranslucencyRenderTargetTextureSize
struct UATCheatManager_ATDebugSetLayerTranslucencyRenderTargetTextureSize_Params
{
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetItemPalette
struct UATCheatManager_ATDebugSetItemPalette_Params
{
	struct FName                                       Pallete;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ItemId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetEnableDLCId
struct UATCheatManager_ATDebugSetEnableDLCId_Params
{
	struct FName                                       ID;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ContentId;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetEnableCrossTalkLipSync
struct UATCheatManager_ATDebugSetEnableCrossTalkLipSync_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetDefaultPositionDebugMenu
struct UATCheatManager_ATDebugSetDefaultPositionDebugMenu_Params
{
};

// Function AT.ATCheatManager.ATDebugSetCommunityFavor
struct UATCheatManager_ATDebugSetCommunityFavor_Params
{
	struct FName                                       SoulEmId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSetAvailableTrunks
struct UATCheatManager_ATDebugSetAvailableTrunks_Params
{
	bool                                               FlagAvailable;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSendTelepathyNotice
struct UATCheatManager_ATDebugSendTelepathyNotice_Params
{
};

// Function AT.ATCheatManager.ATDebugSendReusableNotice
struct UATCheatManager_ATDebugSendReusableNotice_Params
{
};

// Function AT.ATCheatManager.ATDebugSendNormalCrossTalk
struct UATCheatManager_ATDebugSendNormalCrossTalk_Params
{
};

// Function AT.ATCheatManager.ATDebugSendFeverNotice
struct UATCheatManager_ATDebugSendFeverNotice_Params
{
};

// Function AT.ATCheatManager.ATDebugSendEventCrossTalk
struct UATCheatManager_ATDebugSendEventCrossTalk_Params
{
};

// Function AT.ATCheatManager.ATDebugSaveVersionDifferences
struct UATCheatManager_ATDebugSaveVersionDifferences_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSaveSystemLoad
struct UATCheatManager_ATDebugSaveSystemLoad_Params
{
};

// Function AT.ATCheatManager.ATDebugSaveParty
struct UATCheatManager_ATDebugSaveParty_Params
{
};

// Function AT.ATCheatManager.ATDebugSaveMonitoringData
struct UATCheatManager_ATDebugSaveMonitoringData_Params
{
	struct FString                                     Filename;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSaveForcedCorrupt
struct UATCheatManager_ATDebugSaveForcedCorrupt_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugSaveDataSave
struct UATCheatManager_ATDebugSaveDataSave_Params
{
};

// Function AT.ATCheatManager.ATDebugSaveDataLoad
struct UATCheatManager_ATDebugSaveDataLoad_Params
{
};

// Function AT.ATCheatManager.ATDebugRideMachineDiscard
struct UATCheatManager_ATDebugRideMachineDiscard_Params
{
	bool                                               IsAirCar;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugResetEventCpl071
struct UATCheatManager_ATDebugResetEventCpl071_Params
{
};

// Function AT.ATCheatManager.ATDebugResetDragonBallUseTime
struct UATCheatManager_ATDebugResetDragonBallUseTime_Params
{
};

// Function AT.ATCheatManager.ATDebugRequestTurn
struct UATCheatManager_ATDebugRequestTurn_Params
{
	float                                              Angle;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugRequestStep
struct UATCheatManager_ATDebugRequestStep_Params
{
	float                                              Angle;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugRequestSkillTarget
struct UATCheatManager_ATDebugRequestSkillTarget_Params
{
	struct FName                                       ActId;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugRequestOffsetHighBoost
struct UATCheatManager_ATDebugRequestOffsetHighBoost_Params
{
	bool                                               bDirect;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugRequestMission
struct UATCheatManager_ATDebugRequestMission_Params
{
	int                                                MissionType;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       TargetID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugRequestActionTarget
struct UATCheatManager_ATDebugRequestActionTarget_Params
{
	struct FName                                       ActId;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugReportMission
struct UATCheatManager_ATDebugReportMission_Params
{
};

// Function AT.ATCheatManager.ATDebugRemoveStateIcon
struct UATCheatManager_ATDebugRemoveStateIcon_Params
{
	unsigned char                                      inTarget;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugReleasedCollection
struct UATCheatManager_ATDebugReleasedCollection_Params
{
};

// Function AT.ATCheatManager.ATDebugQuestSave
struct UATCheatManager_ATDebugQuestSave_Params
{
};

// Function AT.ATCheatManager.ATDebugQuestReplaying
struct UATCheatManager_ATDebugQuestReplaying_Params
{
	int                                                ChapterId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EpisodeId;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugQuestNavigationTest
struct UATCheatManager_ATDebugQuestNavigationTest_Params
{
};

// Function AT.ATCheatManager.ATDebugQuestNavigationSubTest
struct UATCheatManager_ATDebugQuestNavigationSubTest_Params
{
};

// Function AT.ATCheatManager.ATDebugQuestCommand
struct UATCheatManager_ATDebugQuestCommand_Params
{
	struct FString                                     QuestCommand;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPrintPreloadEnemyWarning
struct UATCheatManager_ATDebugPrintPreloadEnemyWarning_Params
{
	bool                                               toggle;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPrintEncountWarning
struct UATCheatManager_ATDebugPrintEncountWarning_Params
{
	bool                                               toggle;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPostProcessStat
struct UATCheatManager_ATDebugPostProcessStat_Params
{
};

// Function AT.ATCheatManager.ATDebugPlayZoomCamera
struct UATCheatManager_ATDebugPlayZoomCamera_Params
{
	struct FString                                     ActorName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Duration;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BlendType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendExp;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLockOutgoing;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayTalkMontage
struct UATCheatManager_ATDebugPlayTalkMontage_Params
{
	struct FString                                     ActorName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TalkMontageId;                                             // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayQuestDirection
struct UATCheatManager_ATDebugPlayQuestDirection_Params
{
	struct FName                                       FindName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayerTeamBreakDamage
struct UATCheatManager_ATDebugPlayerTeamBreakDamage_Params
{
	float                                              BreakDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayerStatusDisplay
struct UATCheatManager_ATDebugPlayerStatusDisplay_Params
{
};

// Function AT.ATCheatManager.ATDebugPlayerLevel
struct UATCheatManager_ATDebugPlayerLevel_Params
{
	float                                              Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayerHidden
struct UATCheatManager_ATDebugPlayerHidden_Params
{
	bool                                               bHidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayDemoAndProgressSet
struct UATCheatManager_ATDebugPlayDemoAndProgressSet_Params
{
	struct FName                                       InDemoName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InProgressId;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayDemoAndLoadStreaming
struct UATCheatManager_ATDebugPlayDemoAndLoadStreaming_Params
{
	struct FName                                       InDemoName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayDemo
struct UATCheatManager_ATDebugPlayDemo_Params
{
	struct FName                                       InDemoName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayBGMFromBGMPlayer
struct UATCheatManager_ATDebugPlayBGMFromBGMPlayer_Params
{
	AT_EBGMCategory                                    bgmType;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EBgmCode                                        bgmID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPlayBattleCutin
struct UATCheatManager_ATDebugPlayBattleCutin_Params
{
	int                                                CutinType;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugPassiveSkillLearnTest
struct UATCheatManager_ATDebugPassiveSkillLearnTest_Params
{
};

// Function AT.ATCheatManager.ATDebugPassiveSkillForgetTest
struct UATCheatManager_ATDebugPassiveSkillForgetTest_Params
{
};

// Function AT.ATCheatManager.ATDebugOutputSaveDataText
struct UATCheatManager_ATDebugOutputSaveDataText_Params
{
};

// Function AT.ATCheatManager.ATDebugOutputSaveDataDocument
struct UATCheatManager_ATDebugOutputSaveDataDocument_Params
{
};

// Function AT.ATCheatManager.ATDebugOutAllBattleHud
struct UATCheatManager_ATDebugOutAllBattleHud_Params
{
};

// Function AT.ATCheatManager.ATDebugOpenTurtleSchool
struct UATCheatManager_ATDebugOpenTurtleSchool_Params
{
};

// Function AT.ATCheatManager.ATDebugOpenTips
struct UATCheatManager_ATDebugOpenTips_Params
{
	struct FName                                       InTipsID;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugOpenProgressMission
struct UATCheatManager_ATDebugOpenProgressMission_Params
{
};

// Function AT.ATCheatManager.ATDebugOpenGameWindowByIndex
struct UATCheatManager_ATDebugOpenGameWindowByIndex_Params
{
	int                                                Index;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugOpenGameWindow
struct UATCheatManager_ATDebugOpenGameWindow_Params
{
	struct FName                                       StringID;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugOneHitDeath
struct UATCheatManager_ATDebugOneHitDeath_Params
{
};

// Function AT.ATCheatManager.ATDebugNotPlayNextFadeOut
struct UATCheatManager_ATDebugNotPlayNextFadeOut_Params
{
};

// Function AT.ATCheatManager.ATDebugNotCheckPartyOrganize
struct UATCheatManager_ATDebugNotCheckPartyOrganize_Params
{
};

// Function AT.ATCheatManager.ATDebugNoDead
struct UATCheatManager_ATDebugNoDead_Params
{
};

// Function AT.ATCheatManager.ATDebugNavigateQuestId
struct UATCheatManager_ATDebugNavigateQuestId_Params
{
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugMpInfinityPlayer
struct UATCheatManager_ATDebugMpInfinityPlayer_Params
{
};

// Function AT.ATCheatManager.ATDebugMpInfinity
struct UATCheatManager_ATDebugMpInfinity_Params
{
};

// Function AT.ATCheatManager.ATDebugMotionCheck
struct UATCheatManager_ATDebugMotionCheck_Params
{
	struct FString                                     Name;                                                      // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugMiniGamePop
struct UATCheatManager_ATDebugMiniGamePop_Params
{
	int                                                StartOrEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InTop;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InBottom;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugMessageCheck
struct UATCheatManager_ATDebugMessageCheck_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DummyString;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugMapMove
struct UATCheatManager_ATDebugMapMove_Params
{
	struct FName                                       MapName;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugLookAtInformation
struct UATCheatManager_ATDebugLookAtInformation_Params
{
	struct FString                                     ActorName;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugLoadRandomPadKeyWeight
struct UATCheatManager_ATDebugLoadRandomPadKeyWeight_Params
{
	struct FString                                     InPath;                                                    // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugLipSyncTimeDefault
struct UATCheatManager_ATDebugLipSyncTimeDefault_Params
{
};

// Function AT.ATCheatManager.ATDebugLipSyncTime
struct UATCheatManager_ATDebugLipSyncTime_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugLevelUp
struct UATCheatManager_ATDebugLevelUp_Params
{
	unsigned char                                      PartyIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugKpiLogin
struct UATCheatManager_ATDebugKpiLogin_Params
{
	bool                                               IsLogin;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugItemAdd
struct UATCheatManager_ATDebugItemAdd_Params
{
	struct FName                                       ItemId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AddNum;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugIncreaseCommunityLevel
struct UATCheatManager_ATDebugIncreaseCommunityLevel_Params
{
	int                                                Category;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugHideUI
struct UATCheatManager_ATDebugHideUI_Params
{
	bool                                               bHidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugHiddenInGame
struct UATCheatManager_ATDebugHiddenInGame_Params
{
	struct FName                                       TargetCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugGiveQuestReward
struct UATCheatManager_ATDebugGiveQuestReward_Params
{
	struct FName                                       RewardId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugGiveQuestExp
struct UATCheatManager_ATDebugGiveQuestExp_Params
{
	int                                                Exp;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugGiveHermitReward
struct UATCheatManager_ATDebugGiveHermitReward_Params
{
};

// Function AT.ATCheatManager.ATDebugGetMissionTitleMessage
struct UATCheatManager_ATDebugGetMissionTitleMessage_Params
{
};

// Function AT.ATCheatManager.ATDebugGetMissionProgressMessage
struct UATCheatManager_ATDebugGetMissionProgressMessage_Params
{
	struct FName                                       TargetMissionId;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugGetEmbList
struct UATCheatManager_ATDebugGetEmbList_Params
{
	int                                                InNum;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugGeneralQuestDemo
struct UATCheatManager_ATDebugGeneralQuestDemo_Params
{
	struct FName                                       DirectionId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugGameover
struct UATCheatManager_ATDebugGameover_Params
{
};

// Function AT.ATCheatManager.ATDebugFreeCameraStop
struct UATCheatManager_ATDebugFreeCameraStop_Params
{
};

// Function AT.ATCheatManager.ATDebugFreeCameraMode
struct UATCheatManager_ATDebugFreeCameraMode_Params
{
};

// Function AT.ATCheatManager.ATDebugFormChangeSupportRight
struct UATCheatManager_ATDebugFormChangeSupportRight_Params
{
	unsigned char                                      form;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugFormChangeSupportLeft
struct UATCheatManager_ATDebugFormChangeSupportLeft_Params
{
	unsigned char                                      form;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugFormChange
struct UATCheatManager_ATDebugFormChange_Params
{
	unsigned char                                      form;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugForceOpenCurrentMission
struct UATCheatManager_ATDebugForceOpenCurrentMission_Params
{
};

// Function AT.ATCheatManager.ATDebugForceGarbageCollection
struct UATCheatManager_ATDebugForceGarbageCollection_Params
{
};

// Function AT.ATCheatManager.ATDebugFieldTalkWin
struct UATCheatManager_ATDebugFieldTalkWin_Params
{
	struct FString                                     Speaker;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               buttonVisible;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugFadeOut
struct UATCheatManager_ATDebugFadeOut_Params
{
	int                                                InFadeType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugFadeIn
struct UATCheatManager_ATDebugFadeIn_Params
{
};

// Function AT.ATCheatManager.ATDebugFadeBugCheck
struct UATCheatManager_ATDebugFadeBugCheck_Params
{
	bool                                               Check;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugFacialMotionCheckEnd
struct UATCheatManager_ATDebugFacialMotionCheckEnd_Params
{
};

// Function AT.ATCheatManager.ATDebugFacialMotionCheckBegin
struct UATCheatManager_ATDebugFacialMotionCheckBegin_Params
{
	unsigned char                                      Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugFacialChangeSupportRight
struct UATCheatManager_ATDebugFacialChangeSupportRight_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugFacialChangeSupportLeft
struct UATCheatManager_ATDebugFacialChangeSupportLeft_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugFacialChange
struct UATCheatManager_ATDebugFacialChange_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugEulaCheck
struct UATCheatManager_ATDebugEulaCheck_Params
{
	bool                                               IsEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugEntryBuff
struct UATCheatManager_ATDebugEntryBuff_Params
{
	int                                                BuffType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       BuffName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PartyIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MembetType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugEnemyTeamBreakDamage
struct UATCheatManager_ATDebugEnemyTeamBreakDamage_Params
{
	float                                              BreakDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugEnemyMotionCheck
struct UATCheatManager_ATDebugEnemyMotionCheck_Params
{
};

// Function AT.ATCheatManager.ATDebugEndFastForward
struct UATCheatManager_ATDebugEndFastForward_Params
{
};

// Function AT.ATCheatManager.ATDebugEnableQuestLogList
struct UATCheatManager_ATDebugEnableQuestLogList_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugEnableQuestLog
struct UATCheatManager_ATDebugEnableQuestLog_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugEnableQuestErrorLog
struct UATCheatManager_ATDebugEnableQuestErrorLog_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugEnabledUniquenessObserver
struct UATCheatManager_ATDebugEnabledUniquenessObserver_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugEnableDrawFullScreenMovie
struct UATCheatManager_ATDebugEnableDrawFullScreenMovie_Params
{
};

// Function AT.ATCheatManager.ATDebugDLCListLog
struct UATCheatManager_ATDebugDLCListLog_Params
{
};

// Function AT.ATCheatManager.ATDebugDLCListCheck
struct UATCheatManager_ATDebugDLCListCheck_Params
{
};

// Function AT.ATCheatManager.ATDebugDisplayPurpose
struct UATCheatManager_ATDebugDisplayPurpose_Params
{
};

// Function AT.ATCheatManager.ATDebugDisableTps
struct UATCheatManager_ATDebugDisableTps_Params
{
};

// Function AT.ATCheatManager.ATDebugDisableTickUI
struct UATCheatManager_ATDebugDisableTickUI_Params
{
	bool                                               bDisable;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugDisableQuestNavigation
struct UATCheatManager_ATDebugDisableQuestNavigation_Params
{
};

// Function AT.ATCheatManager.ATDebugDisableItemHit
struct UATCheatManager_ATDebugDisableItemHit_Params
{
};

// Function AT.ATCheatManager.ATDebugDisableDrawFullScreenMovie
struct UATCheatManager_ATDebugDisableDrawFullScreenMovie_Params
{
};

// Function AT.ATCheatManager.ATDebugDeleteSaveData
struct UATCheatManager_ATDebugDeleteSaveData_Params
{
	unsigned char                                      Slot;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugDeleteQuestDataAll
struct UATCheatManager_ATDebugDeleteQuestDataAll_Params
{
};

// Function AT.ATCheatManager.ATDebugDeleteLeafVolume
struct UATCheatManager_ATDebugDeleteLeafVolume_Params
{
};

// Function AT.ATCheatManager.ATDebugDeleteFriend
struct UATCheatManager_ATDebugDeleteFriend_Params
{
};

// Function AT.ATCheatManager.ATDebugDelaySublevelActivation
struct UATCheatManager_ATDebugDelaySublevelActivation_Params
{
	bool                                               bDelay;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugDataInstallProgress
struct UATCheatManager_ATDebugDataInstallProgress_Params
{
	int                                                InProgress;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCreateLeafVolume
struct UATCheatManager_ATDebugCreateLeafVolume_Params
{
};

// Function AT.ATCheatManager.ATDebugControllerStatusDisplay
struct UATCheatManager_ATDebugControllerStatusDisplay_Params
{
};

// Function AT.ATCheatManager.ATDebugConsistencyCheckQuestCharacter
struct UATCheatManager_ATDebugConsistencyCheckQuestCharacter_Params
{
};

// Function AT.ATCheatManager.ATDebugCompleteReplaying
struct UATCheatManager_ATDebugCompleteReplaying_Params
{
};

// Function AT.ATCheatManager.ATDebugCompleteQuest
struct UATCheatManager_ATDebugCompleteQuest_Params
{
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCommunitySkill
struct UATCheatManager_ATDebugCommunitySkill_Params
{
	int                                                Category;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Lv;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCommunityRankTest
struct UATCheatManager_ATDebugCommunityRankTest_Params
{
};

// Function AT.ATCheatManager.ATDebugCommunityCTest
struct UATCheatManager_ATDebugCommunityCTest_Params
{
	int                                                testId;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCommunityBoardEdit
struct UATCheatManager_ATDebugCommunityBoardEdit_Params
{
	int                                                cate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCommunityBoard
struct UATCheatManager_ATDebugCommunityBoard_Params
{
};

// Function AT.ATCheatManager.ATDebugCommCalc
struct UATCheatManager_ATDebugCommCalc_Params
{
	int                                                Val;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Rate;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCommandPaletteCoopSkill
struct UATCheatManager_ATDebugCommandPaletteCoopSkill_Params
{
	int                                                IsOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCommandPaletteChangeActive
struct UATCheatManager_ATDebugCommandPaletteChangeActive_Params
{
	int                                                idx;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IsOn;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCombinePartsSupportRight
struct UATCheatManager_ATDebugCombinePartsSupportRight_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      form;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCombinePartsSupportLeft
struct UATCheatManager_ATDebugCombinePartsSupportLeft_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      form;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCombineParts
struct UATCheatManager_ATDebugCombineParts_Params
{
	unsigned char                                      variation;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      form;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCollectionOpen
struct UATCheatManager_ATDebugCollectionOpen_Params
{
};

// Function AT.ATCheatManager.ATDebugClearSubQuest
struct UATCheatManager_ATDebugClearSubQuest_Params
{
};

// Function AT.ATCheatManager.ATDebugClearMainQuest
struct UATCheatManager_ATDebugClearMainQuest_Params
{
};

// Function AT.ATCheatManager.ATDebugCheckMovableEvents
struct UATCheatManager_ATDebugCheckMovableEvents_Params
{
};

// Function AT.ATCheatManager.ATDebugCheckImpLogTest
struct UATCheatManager_ATDebugCheckImpLogTest_Params
{
};

// Function AT.ATCheatManager.ATDebugCheckCurrentSubQuestIds
struct UATCheatManager_ATDebugCheckCurrentSubQuestIds_Params
{
	struct FName                                       StartQuestId;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartPhaseNo;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EndQuestId;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndPhaseNo;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCharaLifeRate
struct UATCheatManager_ATDebugCharaLifeRate_Params
{
	float                                              LifeRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PartyIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugCharaDamageRate
struct UATCheatManager_ATDebugCharaDamageRate_Params
{
	float                                              DamageRate;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PartyIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugChangeTwinFoot
struct UATCheatManager_ATDebugChangeTwinFoot_Params
{
};

// Function AT.ATCheatManager.ATDebugChangePlayer
struct UATCheatManager_ATDebugChangePlayer_Params
{
};

// Function AT.ATCheatManager.ATDebugChangeDragonBallUsedState
struct UATCheatManager_ATDebugChangeDragonBallUsedState_Params
{
};

// Function AT.ATCheatManager.ATDebugChangeDlcOwnership
struct UATCheatManager_ATDebugChangeDlcOwnership_Params
{
	struct FName                                       DlcCommonId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugChangeAirCar
struct UATCheatManager_ATDebugChangeAirCar_Params
{
};

// Function AT.ATCheatManager.ATDebugBindControl
struct UATCheatManager_ATDebugBindControl_Params
{
};

// Function AT.ATCheatManager.ATDebugBGMDebugMode
struct UATCheatManager_ATDebugBGMDebugMode_Params
{
};

// Function AT.ATCheatManager.ATDebugBeginQuestDemo
struct UATCheatManager_ATDebugBeginQuestDemo_Params
{
	struct FName                                       ID;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugBeginQuest
struct UATCheatManager_ATDebugBeginQuest_Params
{
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhaseNo;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugBannedTest
struct UATCheatManager_ATDebugBannedTest_Params
{
	int                                                Op;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBanned;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InSkill;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugAtrociousComplete
struct UATCheatManager_ATDebugAtrociousComplete_Params
{
	struct FName                                       inLevelName;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      InPhase;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugAtrociousBegin
struct UATCheatManager_ATDebugAtrociousBegin_Params
{
};

// Function AT.ATCheatManager.ATDebugAIActive
struct UATCheatManager_ATDebugAIActive_Params
{
};

// Function AT.ATCheatManager.ATDebugAddZOrb
struct UATCheatManager_ATDebugAddZOrb_Params
{
	int                                                Num;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Type;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugAddStateIcon3
struct UATCheatManager_ATDebugAddStateIcon3_Params
{
	unsigned char                                      inTarget;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InType_2;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InType_3;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InType_4;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InTime;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugAddStateIcon
struct UATCheatManager_ATDebugAddStateIcon_Params
{
	unsigned char                                      inTarget;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InTime;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugAddQuestNavigateIcon
struct UATCheatManager_ATDebugAddQuestNavigateIcon_Params
{
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       ActorName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugAddPartyExp
struct UATCheatManager_ATDebugAddPartyExp_Params
{
	int                                                Exp;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugAddMoney
struct UATCheatManager_ATDebugAddMoney_Params
{
	int                                                Value;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDebugAddExp
struct UATCheatManager_ATDebugAddExp_Params
{
	int                                                Exp;                                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      PartyIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATDeactiveSubLevel
struct UATCheatManager_ATDeactiveSubLevel_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATChangePersistent
struct UATCheatManager_ATChangePersistent_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATBaseballGameBattlePower
struct UATCheatManager_ATBaseballGameBattlePower_Params
{
	double                                             power;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATAttachPhotonForCharacter
struct UATCheatManager_ATAttachPhotonForCharacter_Params
{
};

// Function AT.ATCheatManager.ATAsyncLoadCharacter
struct UATCheatManager_ATAsyncLoadCharacter_Params
{
	struct FName                                       MasterId;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATCheatManager.ATActiveSubLevel
struct UATCheatManager_ATActiveSubLevel_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATSequencerDemoCtrl.UnregisterSequenceActor
struct UATSequencerDemoCtrl_UnregisterSequenceActor_Params
{
	struct FName                                       DemoName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATSequencerDemoCtrl.RegisterSequenceActor
struct UATSequencerDemoCtrl_RegisterSequenceActor_Params
{
	struct FName                                       DemoName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ALevelSequenceActor*                         SequenceActor;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.CostumeLoader.OnLoadedVariation
struct UCostumeLoader_OnLoadedVariation_Params
{
	class UATDataAssetVariationMeshAsyncLoad*          Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.CostumeLoader.OnLoadedForm
struct UCostumeLoader_OnLoadedForm_Params
{
	class UATDataAssetFormMeshAsyncLoad*               Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.CostumeLoader.OnLoadedFacial
struct UCostumeLoader_OnLoadedFacial_Params
{
	class UATDataAssetFacialAsyncLoad*                 Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDataAssetAsyncLoad.IsLoaded
struct UATDataAssetAsyncLoad_IsLoaded_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATBattleAILoader.CompleteLoadGroup
struct UATBattleAILoader_CompleteLoadGroup_Params
{
	class UATDataAssetBattleGroupAIAsyncLoad*          loader;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATBattleAILoader.CompleteLoad
struct UATBattleAILoader_CompleteLoad_Params
{
	class UATDataAssetBattleAIAsyncLoad*               loader;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDataAssetQuest.OnProgressChanged
struct UATDataAssetQuest_OnProgressChanged_Params
{
	struct FName                                       NextProgressName;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDataAssetQuest.OnLoadedByProgress
struct UATDataAssetQuest_OnLoadedByProgress_Params
{
};

// Function AT.ATDataAssetSupportCharacterTalkAsyncLoad.CompleteLoadAlways
struct UATDataAssetSupportCharacterTalkAsyncLoad_CompleteLoadAlways_Params
{
};

// Function AT.ATDataAssetUiAsyncLoad.CompleteLoadAlways
struct UATDataAssetUiAsyncLoad_CompleteLoadAlways_Params
{
};

// Function AT.ATDebugUICharaIconManager.Instance
struct UATDebugUICharaIconManager_Instance_Params
{
	class UATDebugUICharaIconManager*                  ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDecalActor.SetDecalMaterial
struct AATDecalActor_SetDecalMaterial_Params
{
	class UMaterialInterface*                          NewDecalMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDecalActor.GetDecalMaterial
struct AATDecalActor_GetDecalMaterial_Params
{
	class UMaterialInterface*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDecalActor.CreateDynamicMaterialInstance
struct AATDecalActor_CreateDynamicMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATSceneCapture2D.Activate
struct AATSceneCapture2D_Activate_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoInputComponent.OnDemoTiming
struct UATDemoInputComponent_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      InType;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               InTiming;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       InName;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInContinue;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoManageComponent.SubLevelBeginPlayTiming
struct UATDemoManageComponent_SubLevelBeginPlayTiming_Params
{
	struct FName                                       SubLevelName;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoManageComponent.SetDemoLevelOffset
struct UATDemoManageComponent_SetDemoLevelOffset_Params
{
	struct FName                                       DemoLevelName;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Offset;                                                    // (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoManageComponent.RequestDemo
struct UATDemoManageComponent_RequestDemo_Params
{
	AT_EDEMO_TYPE                                      Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               Timing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImmediate;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InDurationAfterDirection;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotFadeinInDemoSkip;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoManageComponent.GetPreRenderDemoCtrl
struct UATDemoManageComponent_GetPreRenderDemoCtrl_Params
{
	class UATPreRenderDemoCtrl*                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoManageComponent.GetIngameDemoCtrl
struct UATDemoManageComponent_GetIngameDemoCtrl_Params
{
	class UATIngameDemoCtrl*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoManageComponent.GetGeneralDemoCtrl
struct UATDemoManageComponent_GetGeneralDemoCtrl_Params
{
	class UATGeneralDemoCtrl*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoManageComponent.GetCinemaDemoCtrl
struct UATDemoManageComponent_GetCinemaDemoCtrl_Params
{
	class UATCinemaDemoCtrl*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDemoManageComponent.DemoSkip
struct UATDemoManageComponent_DemoSkip_Params
{
};

// Function AT.ATDemoManageComponent.BroadcastDemoEvent
struct UATDemoManageComponent_BroadcastDemoEvent_Params
{
	struct FName                                       DemoName;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       EventName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDevelopManager.MouseClickTabRight
struct UATDevelopManager_MouseClickTabRight_Params
{
};

// Function AT.ATDevelopManager.MouseClickTabLeft
struct UATDevelopManager_MouseClickTabLeft_Params
{
};

// Function AT.ATDevelopManager.MouseClickDecide
struct UATDevelopManager_MouseClickDecide_Params
{
	struct FGeometry                                   InGeometry;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                               InMouseEvent;                                              // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATDinosaurMoveAreaVolume.OnEndOverlap
struct AATDinosaurMoveAreaVolume_OnEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDinosaurMoveAreaVolume.OnBeginOverlap
struct AATDinosaurMoveAreaVolume_OnBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDirectionBase.OnEndDirection
struct UATDirectionBase_OnEndDirection_Params
{
};

// Function AT.ATDirectionBase.OnBeginDirection
struct UATDirectionBase_OnBeginDirection_Params
{
	struct FDirectionParameter                         InParameter;                                               // (Parm, NativeAccessSpecifierPublic)
};

// Function AT.ATDoorVolume.Open
struct AATDoorVolume_Open_Params
{
};

// Function AT.ATDoorVolume.OnLevelShown
struct AATDoorVolume_OnLevelShown_Params
{
	class ULevelStreaming*                             LevelStreaming;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDoorVolume.OnActorBeginOverlap
struct AATDoorVolume_OnActorBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATDoorVolume.NotSetPlayer
struct AATDoorVolume_NotSetPlayer_Params
{
};

// Function AT.ATDoorVolume.FixPostProcessFromTag
struct AATDoorVolume_FixPostProcessFromTag_Params
{
	struct FName                                       inTag;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APostProcessVolume*                          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.EasingMovement.Start
struct UEasingMovement_Start_Params
{
};

// Function AT.EasingMovement.SetTargetPoint
struct UEasingMovement_SetTargetPoint_Params
{
	class AActor*                                      Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.EasingMovement.SetDuration
struct UEasingMovement_SetDuration_Params
{
	float                                              Time;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.EasingMovement.Pause
struct UEasingMovement_Pause_Params
{
};

// Function AT.Enable.SetEnable
struct UEnable_SetEnable_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.Enable.IsEnable
struct UEnable_IsEnable_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATEnvironmentEffectManager.OnDemoTiming
struct UATEnvironmentEffectManager_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      DemoType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               DemoTiming;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               continueFlag;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFacialComponent.SetFacialMontage
struct UATFacialComponent_SetFacialMontage_Params
{
	AT_EFacialType                                     Type;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFacialComponent.ResetForceSetting
struct UATFacialComponent_ResetForceSetting_Params
{
	AT_EQUEST_GENERAL_TALK_TIMING                      Timing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFacialComponent.OnPreChangeAnimationBlueprint
struct UATFacialComponent_OnPreChangeAnimationBlueprint_Params
{
	class UClass*                                      InClass;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      InMesh;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFacialComponent.OnPostChangeAnimationBlueprint
struct UATFacialComponent_OnPostChangeAnimationBlueprint_Params
{
	class UClass*                                      InClass;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                      InMesh;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFacialComponent.OnMontageStarted
struct UATFacialComponent_OnMontageStarted_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFacialComponent.OnMontageEnded
struct UATFacialComponent_OnMontageEnded_Params
{
	class UAnimMontage*                                pMontage;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInterrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFeverManager.OnQuestChangeTiming
struct UATFeverManager_OnQuestChangeTiming_Params
{
	struct FName                                       quest_id;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EQuestTimingType                                Timing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFieldManager.OnMapControl
struct UATFieldManager_OnMapControl_Params
{
};

// Function AT.ATFieldManager.OnInnerAreaMove
struct UATFieldManager_OnInnerAreaMove_Params
{
};

// Function AT.ATFieldManager.OnAreaMapClose
struct UATFieldManager_OnAreaMapClose_Params
{
};

// Function AT.ATFlyingNimbus.SetActiveNimbusParticle
struct UATFlyingNimbus_SetActiveNimbusParticle_Params
{
	bool                                               InbActive;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATFlyingNimbus.OnDestroyedOwnerActor
struct UATFlyingNimbus_OnDestroyedOwnerActor_Params
{
	class AActor*                                      DestroyedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATGameMode.OnPlayerInitialized
struct AATGameMode_OnPlayerInitialized_Params
{
	class AAT_Character*                               Character;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATGameMode.OnBattleEnd
struct AATGameMode_OnBattleEnd_Params
{
};

// Function AT.ATGameMode.OnBattleBegin
struct AATGameMode_OnBattleBegin_Params
{
};

// Function AT.ATGameMode.GetLevelManager
struct AATGameMode_GetLevelManager_Params
{
	class AATLevelManager*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATGameMode.CreateTerrainDecorateManager
struct AATGameMode_CreateTerrainDecorateManager_Params
{
};

// Function AT.ATGeneralDemoAnimInstance.SetEnableLipSync
struct UATGeneralDemoAnimInstance_SetEnableLipSync_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATGeneralDemoAnimInstance.IsEnableLipSync
struct UATGeneralDemoAnimInstance_IsEnableLipSync_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATGeneralDemoAnimInstance.InitializeLipSync
struct UATGeneralDemoAnimInstance_InitializeLipSync_Params
{
	struct FString                                     InMessageId;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 InBlendSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATGeneralDemoAnimInstance.GetLipSize
struct UATGeneralDemoAnimInstance_GetLipSize_Params
{
	struct FVector2D                                   ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATGeneralDemoCharacter.StopLipAnimation
struct AATGeneralDemoCharacter_StopLipAnimation_Params
{
};

// Function AT.ATGeneralDemoCharacter.SetEnableLipSync
struct AATGeneralDemoCharacter_SetEnableLipSync_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATGeneralDemoCharacter.PlayLipAnimation
struct AATGeneralDemoCharacter_PlayLipAnimation_Params
{
};

// Function AT.ATGeneralDemoCharacter.InitializeLipSync
struct AATGeneralDemoCharacter_InitializeLipSync_Params
{
	struct FString                                     InMessageId;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpace*                                 BlendSpaceAsset;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.GeneralTalkAnimationProperty.ToDefaultProperty
struct UGeneralTalkAnimationProperty_ToDefaultProperty_Params
{
};

// Function AT.GeneralTalkAnimationProperty.SetDefaltProperty
struct UGeneralTalkAnimationProperty_SetDefaltProperty_Params
{
};

// Function AT.IdlingSequentialAnimation.SetNearPlayer
struct UIdlingSequentialAnimation_SetNearPlayer_Params
{
	bool                                               bFlag;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.IdlingSequentialAnimation.SetIdlingSequencePattern
struct UIdlingSequentialAnimation_SetIdlingSequencePattern_Params
{
	int                                                PatternNo;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.IdlingSequentialAnimation.SetEnableIdlingSequence
struct UIdlingSequentialAnimation_SetEnableIdlingSequence_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.IdlingSequentialAnimation.IsNearPlayer
struct UIdlingSequentialAnimation_IsNearPlayer_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.IdlingSequentialAnimation.IsEnableIdlingSequence
struct UIdlingSequentialAnimation_IsEnableIdlingSequence_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.IdlingSequentialAnimation.GetIdlingSequencePattern
struct UIdlingSequentialAnimation_GetIdlingSequencePattern_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATIngameDemoCtrl.OnIngameDemoActionEnd
struct UATIngameDemoCtrl_OnIngameDemoActionEnd_Params
{
	class AAT_Character*                               InCharacter;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdPrev;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InActionIdNext;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATInteractComponent.OnPressedFieldSubAction
struct UATInteractComponent_OnPressedFieldSubAction_Params
{
};

// Function AT.ATInteractComponent.OnPressedFieldAction
struct UATInteractComponent_OnPressedFieldAction_Params
{
};

// Function AT.ATInteractComponent.EndOverlap
struct UATInteractComponent_EndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATInteractComponent.BeginOverlap
struct UATInteractComponent_BeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         OtherComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OtherBodyIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFromSweep;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ItemTrader.OnFinishedTalking
struct UItemTrader_OnFinishedTalking_Params
{
};

// Function AT.ATJostleBeam.OnPressedButton_RL
struct UATJostleBeam_OnPressedButton_RL_Params
{
};

// Function AT.KPIRequester.ResAPI
struct UKPIRequester_ResAPI_Params
{
	struct FString                                     Data;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.RequestFlagInWorldMap
struct UATLevelBlueprintFunctionLibrary_RequestFlagInWorldMap_Params
{
	struct FString                                     InFlagName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.RequestEvent
struct UATLevelBlueprintFunctionLibrary_RequestEvent_Params
{
	struct FATLevelEventParam                          Param;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.RemoveLevelCondition
struct UATLevelBlueprintFunctionLibrary_RemoveLevelCondition_Params
{
	struct FName                                       LevelConditionId;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.Level_UnloadSubLevel
struct UATLevelBlueprintFunctionLibrary_Level_UnloadSubLevel_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.Level_LoadSubLevel
struct UATLevelBlueprintFunctionLibrary_Level_LoadSubLevel_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.Level_DeactivateSubLevel
struct UATLevelBlueprintFunctionLibrary_Level_DeactivateSubLevel_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.Level_ActivateSubLevel
struct UATLevelBlueprintFunctionLibrary_Level_ActivateSubLevel_Params
{
	struct FName                                       LevelName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.IsInDoor
struct UATLevelBlueprintFunctionLibrary_IsInDoor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.GetLevelManager
struct UATLevelBlueprintFunctionLibrary_GetLevelManager_Params
{
	class AATLevelManager*                             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelBlueprintFunctionLibrary.ExitDoor
struct UATLevelBlueprintFunctionLibrary_ExitDoor_Params
{
};

// Function AT.ATLevelManager.OnVisibilityChanged
struct AATLevelManager_OnVisibilityChanged_Params
{
	class ULevelStreaming*                             StreamingLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelManager.OnProgressChangeTiming
struct AATLevelManager_OnProgressChangeTiming_Params
{
};

// Function AT.ATLevelManager.OnPlayerChanged
struct AATLevelManager_OnPlayerChanged_Params
{
	class AAT_Character*                               Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelManager.OnLoadedStreaming
struct AATLevelManager_OnLoadedStreaming_Params
{
};

// Function AT.ATLevelManager.OnLevelLoaded
struct AATLevelManager_OnLevelLoaded_Params
{
	class ULevelStreaming*                             StreamingLevel;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelScriptActor.ReceiveDemoEvent
struct AATLevelScriptActor_ReceiveDemoEvent_Params
{
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               Timing;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATLevelScriptActor.OnLevelLoaded
struct AATLevelScriptActor_OnLevelLoaded_Params
{
};

// Function AT.ATMapIconComponent.SetMapIconAndName
struct UATMapIconComponent_SetMapIconAndName_Params
{
	AT_EMapIcon                                        InMapIconType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InSearchRangeRadius;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       QuestId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PhaseNo;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATMapIconComponent.SetMapIcon
struct UATMapIconComponent_SetMapIcon_Params
{
	AT_EMapIcon                                        InMapIconType;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InSearchRangeRadius;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATMapIconComponent.SetLandMarkIcon
struct UATMapIconComponent_SetLandMarkIcon_Params
{
	AT_ELandmarkIconType                               InLandmarkType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATMapIconComponent.SetIsShowMapIcon
struct UATMapIconComponent_SetIsShowMapIcon_Params
{
	bool                                               bIsShow;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATMapIconComponent.RemoveMapIcon
struct UATMapIconComponent_RemoveMapIcon_Params
{
};

// Function AT.ATMapIconComponent.RemoveLandMarkIcon
struct UATMapIconComponent_RemoveLandMarkIcon_Params
{
	AT_ELandmarkIconType                               InLandmarkType;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATMapIconComponent.NativeInitialize
struct UATMapIconComponent_NativeInitialize_Params
{
	struct FEventParam                                 Param;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATMechaDevManager.IsMechaDevActive
struct AATMechaDevManager_IsMechaDevActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATMechaDevManager.BeginMechaDev
struct AATMechaDevManager_BeginMechaDev_Params
{
	class AActor*                                      OwnerCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.MiniQuest.OnIngameBegan
struct AMiniQuest_OnIngameBegan_Params
{
};

// Function AT.MiniQuest.OnBrokeObject
struct AMiniQuest_OnBrokeObject_Params
{
	struct FName                                       TriggerId;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.MiniQuest.OnAddedItem
struct AMiniQuest_OnAddedItem_Params
{
	struct FName                                       ItemId;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.MissionStore.OnFinishedEventBattle
struct UMissionStore_OnFinishedEventBattle_Params
{
};

// Function AT.MissionStore.OnFinishedBattle
struct UMissionStore_OnFinishedBattle_Params
{
};

// Function AT.MoveAnimation.SetEnableMove
struct UMoveAnimation_SetEnableMove_Params
{
	bool                                               bEnabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.MoveAnimation.IsEnableMove
struct UMoveAnimation_IsEnableMove_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATParticleManager.OnSystemFinished
struct UATParticleManager_OnSystemFinished_Params
{
	class UParticleSystemComponent*                    InFinishedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATParticleManager.GetParticleComponent
struct UATParticleManager_GetParticleComponent_Params
{
	int                                                InUID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATParticleManager.DeactiveParticleComponent
struct UATParticleManager_DeactiveParticleComponent_Params
{
	int                                                InUID;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPartyManager.OnNormalBattleBegin
struct UATPartyManager_OnNormalBattleBegin_Params
{
};

// Function AT.ATPartyManager.OnEventBattleBegin
struct UATPartyManager_OnEventBattleBegin_Params
{
};

// Function AT.ATPartyManager.OnChangedPlayer
struct UATPartyManager_OnChangedPlayer_Params
{
	class AAT_Character*                               Target;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPartyManager.OnBattleEnd
struct UATPartyManager_OnBattleEnd_Params
{
};

// Function AT.ATPlatformFeatures.EnableStreaming
struct UATPlatformFeatures_EnableStreaming_Params
{
	bool                                               bEnableStreaming;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlatformFeatures.EnableSharing
struct UATPlatformFeatures_EnableSharing_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlatformFeatures.EnableScreenshots
struct UATPlatformFeatures_EnableScreenshots_Params
{
	bool                                               bEnable;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlatformFeatures.EnableRecording
struct UATPlatformFeatures_EnableRecording_Params
{
	bool                                               bEnableRecording;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlComponent.QuestChangePhaseTiming
struct UATPlayerAutoControlComponent_QuestChangePhaseTiming_Params
{
	int                                                NextPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlComponent.OnEndOverlap
struct UATPlayerAutoControlComponent_OnEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlComponent.OnBeginOverlap
struct UATPlayerAutoControlComponent_OnBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.QuestChangePhaseTiming
struct AATPlayerAutoControlTrigger_QuestChangePhaseTiming_Params
{
	int                                                NextPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoTurnOrderQuest
struct AATPlayerAutoControlTrigger_PlayerAutoTurnOrderQuest_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoTurnNearestTarget
struct AATPlayerAutoControlTrigger_PlayerAutoTurnNearestTarget_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                              TargetActors;                                              // (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoTurn
struct AATPlayerAutoControlTrigger_PlayerAutoTurn_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoTalk
struct AATPlayerAutoControlTrigger_PlayerAutoTalk_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TalkEventID;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoMoveTargetActor
struct AATPlayerAutoControlTrigger_PlayerAutoMoveTargetActor_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AT_EAutoMoveSpeed>                     MoveSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoMoveParentActor
struct AATPlayerAutoControlTrigger_PlayerAutoMoveParentActor_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AT_EAutoMoveSpeed>                     MoveSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoMoveLocation
struct AATPlayerAutoControlTrigger_PlayerAutoMoveLocation_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AT_EAutoMoveSpeed>                     MoveSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoMoveForwardLocation
struct AATPlayerAutoControlTrigger_PlayerAutoMoveForwardLocation_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ForwardLength;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AT_EAutoMoveSpeed>                     MoveSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.PlayerAutoMoveBackwardLocation
struct AATPlayerAutoControlTrigger_PlayerAutoMoveBackwardLocation_Params
{
	class AActor*                                      Player;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BackwardLength;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AT_EAutoMoveSpeed>                     MoveSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DelayTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.OnHit
struct AATPlayerAutoControlTrigger_OnHit_Params
{
	class AActor*                                      SelfActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NormalImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                                  Hit;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.OnEndOverlap
struct AATPlayerAutoControlTrigger_OnEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      OtherActor;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.GetCurrentTalkEventId
struct AATPlayerAutoControlTrigger_GetCurrentTalkEventId_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerAutoControlTrigger.CheckPlayerState
struct AATPlayerAutoControlTrigger_CheckPlayerState_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerCameraManager.SetViewByControlCharacterWithBlemdTime
struct AATPlayerCameraManager_SetViewByControlCharacterWithBlemdTime_Params
{
	float                                              fBlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerCameraManager.SetViewByControlCharacter
struct AATPlayerCameraManager_SetViewByControlCharacter_Params
{
	bool                                               InbImmediate;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerCameraManager.OnInGameBeginPlay
struct AATPlayerCameraManager_OnInGameBeginPlay_Params
{
	struct FEventParam                                 Param;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerCameraManager.OnDemoTiming
struct AATPlayerCameraManager_OnDemoTiming_Params
{
	AT_EDEMO_TYPE                                      DemoType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AT_EDEMO_TIMING_TYPE                               DemoTiming;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DemoName;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bContinueFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCallSelf;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerCameraManager.GetViewActor
struct AATPlayerCameraManager_GetViewActor_Params
{
	TEnumAsByte<AT_ECameraMode>                        eMode;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerCameraManager.ChangeView
struct AATPlayerCameraManager_ChangeView_Params
{
	TEnumAsByte<AT_ECameraMode>                        eMode;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pOwner;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      pSubActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               forcedChange;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bReset;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReserveChange;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.WasPressed
struct AATPlayerController_WasPressed_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      pastTickNum;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPermitHoldDown;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.WasJustReleased
struct AATPlayerController_WasJustReleased_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.WasJustPressed
struct AATPlayerController_WasJustPressed_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.UnbindActionDefault
struct AATPlayerController_UnbindActionDefault_Params
{
	bool                                               bLeaveBaseInput;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.TargetChangedHandler
struct AATPlayerController_TargetChangedHandler_Params
{
	class AActor*                                      InNewTargetCharacter;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.SetPauseMenu
struct AATPlayerController_SetPauseMenu_Params
{
	bool                                               bMenuPauseOff;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.SetKeepViewTargetChange
struct AATPlayerController_SetKeepViewTargetChange_Params
{
	bool                                               Enabled;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.SetBattlePauseMenu
struct AATPlayerController_SetBattlePauseMenu_Params
{
	bool                                               bMenuPauseOff;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.PressedSimultaneous
struct AATPlayerController_PressedSimultaneous_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType1;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType2;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      pastTickNum;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPermitHoldDown;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.OnWindRoadExit
struct AATPlayerController_OnWindRoadExit_Params
{
};

// Function AT.ATPlayerController.OnWindRoadEnter
struct AATPlayerController_OnWindRoadEnter_Params
{
	struct FATWindRoadEnterParam                       InParam;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.OnWindRoadChangeCamera
struct AATPlayerController_OnWindRoadChangeCamera_Params
{
	struct FATWindRoadCameraParam                      InParam;                                                   // (Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.OnStartStandDash
struct AATPlayerController_OnStartStandDash_Params
{
};

// Function AT.ATPlayerController.OnStartNimbusRoll
struct AATPlayerController_OnStartNimbusRoll_Params
{
};

// Function AT.ATPlayerController.OnEndStandDash
struct AATPlayerController_OnEndStandDash_Params
{
};

// Function AT.ATPlayerController.OnEndNimbusRoll
struct AATPlayerController_OnEndNimbusRoll_Params
{
};

// Function AT.ATPlayerController.IsPressed
struct AATPlayerController_IsPressed_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_ACTION>           actionType;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.getViewRotation
struct AATPlayerController_getViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.GetAxisValue
struct AATPlayerController_GetAxisValue_Params
{
	TEnumAsByte<AT_EAT_CONTROL_INPUT_AXIS>             axisType;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      pastTickNum;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AT.ATPlayerController.BindActionDefault
struct AATPlayerController_BindActionDefault_Params
{
};

// Function AT.Projectile.OffsetReflect
struct AProjectile_OffsetReflect_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.Projectile.OffsetLose
struct AProjectile_OffsetLose_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.Projectile.OffsetDraw
struct AProjectile_OffsetDraw_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.Projectile.OffsetAbsorb
struct AProjectile_OffsetAbsorb_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.Projectile.DamageApplied
struct AProjectile_DamageApplied_Params
{
	struct FHitResult                                  HitResult;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATProjectileBullet.HitRootSphere
struct AATProjectileBullet_HitRootSphere_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATProjectileField.HitRootSphere
struct AATProjectileField_HitRootSphere_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AT.ATProjectileMine.OnBattleEnd
struct AATProjectileMine_OnBattleEnd_Params
{
};

// Function AT.ATProjectileMine.HitRootSphere
struct AATProjectileMine_HitRootSphere_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
