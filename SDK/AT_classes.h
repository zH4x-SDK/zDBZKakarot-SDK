#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AT.AccessPointBase
// 0x0088 (0x03C0 - 0x0338)
class AAccessPointBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0338(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AccessPointBase");
		return ptr;
	}

};


// Class AT.AccessPointBaseComponent
// 0x0040 (0x05D0 - 0x0590)
class UAccessPointBaseComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0590(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AccessPointBaseComponent");
		return ptr;
	}

};


// Class AT.AccessPointItemBase
// 0x0040 (0x0400 - 0x03C0)
class AAccessPointItemBase : public AAccessPointBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03C0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AccessPointItemBase");
		return ptr;
	}

};


// Class AT.ActorTrackingEffectComponent
// 0x00D0 (0x01D0 - 0x0100)
class UActorTrackingEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0100(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ActorTrackingEffectComponent");
		return ptr;
	}

};


// Class AT.AG_DarkEffectNotifyState
// 0x0018 (0x0048 - 0x0030)
class UAG_DarkEffectNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AG_DarkEffectNotifyState");
		return ptr;
	}

};


// Class AT.AG_PostEffectNotifyState
// 0x0038 (0x0068 - 0x0030)
class UAG_PostEffectNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AG_PostEffectNotifyState");
		return ptr;
	}

};


// Class AT.AG_TimedParticleAnimNotifyState
// 0x00D8 (0x0108 - 0x0030)
class UAG_TimedParticleAnimNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0030(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AG_TimedParticleAnimNotifyState");
		return ptr;
	}

};


// Class AT.AnimNotifyState_AG_Trail
// 0x0048 (0x0078 - 0x0030)
class UAnimNotifyState_AG_Trail : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_AG_Trail");
		return ptr;
	}

};


// Class AT.AgreeKPI
// 0x0018 (0x0040 - 0x0028)
class UAgreeKPI : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AgreeKPI");
		return ptr;
	}

};


// Class AT.AIBase
// 0x0118 (0x0218 - 0x0100)
class UAIBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0100(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AIBase");
		return ptr;
	}

};


// Class AT.AIManager
// 0x0200 (0x0300 - 0x0100)
class UAIManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x200];                                     // 0x0100(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AIManager");
		return ptr;
	}

};


// Class AT.RideCharacterBase
// 0x00F0 (0x0840 - 0x0750)
class ARideCharacterBase : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0750(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RideCharacterBase");
		return ptr;
	}

};


// Class AT.AirCar
// 0x0150 (0x0990 - 0x0840)
class AAirCar : public ARideCharacterBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0840(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AirCar");
		return ptr;
	}

};


// Class AT.ATPlayerControllerBase
// 0x0030 (0x06B8 - 0x0688)
class AATPlayerControllerBase : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0688(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerControllerBase");
		return ptr;
	}

};


// Class AT.RidePlayerControllerBase
// 0x0150 (0x0808 - 0x06B8)
class ARidePlayerControllerBase : public AATPlayerControllerBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x06B8(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RidePlayerControllerBase");
		return ptr;
	}

};


// Class AT.AirCarController
// 0x0040 (0x0848 - 0x0808)
class AAirCarController : public ARidePlayerControllerBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0808(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AirCarController");
		return ptr;
	}

};


// Class AT.RideMoveStateBase
// 0x0000 (0x0100 - 0x0100)
class URideMoveStateBase : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RideMoveStateBase");
		return ptr;
	}

};


// Class AT.AirCarMoveState
// 0x0148 (0x0248 - 0x0100)
class UAirCarMoveState : public URideMoveStateBase
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0100(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AirCarMoveState");
		return ptr;
	}

};


// Class AT.AirCarVirtualController
// 0x0010 (0x0110 - 0x0100)
class UAirCarVirtualController : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AirCarVirtualController");
		return ptr;
	}

};


// Class AT.AnimalAccessPoint
// 0x01C0 (0x0790 - 0x05D0)
class UAnimalAccessPoint : public UAccessPointBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x05D0(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimalAccessPoint");
		return ptr;
	}

};


// Class AT.AnimalAccessPointSaveData
// 0x0008 (0x0030 - 0x0028)
class UAnimalAccessPointSaveData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimalAccessPointSaveData");
		return ptr;
	}

};


// Class AT.AnimalCaptureManager
// 0x0098 (0x0198 - 0x0100)
class UAnimalCaptureManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0100(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimalCaptureManager");
		return ptr;
	}

};


// Class AT.NpcComponentBase
// 0x0360 (0x0460 - 0x0100)
class UNpcComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x360];                                     // 0x0100(0x0360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcComponentBase");
		return ptr;
	}

};


// Class AT.AnimalComponentBase
// 0x0280 (0x06E0 - 0x0460)
class UAnimalComponentBase : public UNpcComponentBase
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0460(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimalComponentBase");
		return ptr;
	}

};


// Class AT.AnimalSpawnerTargetPoint
// 0x0018 (0x0350 - 0x0338)
class AAnimalSpawnerTargetPoint : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimalSpawnerTargetPoint");
		return ptr;
	}

};


// Class AT.AnimalSpawnerVolumeBase
// 0x0040 (0x03B0 - 0x0370)
class AAnimalSpawnerVolumeBase : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimalSpawnerVolumeBase");
		return ptr;
	}

};


// Class AT.AnimalSpawnerVolumeGround
// 0x0030 (0x03E0 - 0x03B0)
class AAnimalSpawnerVolumeGround : public AAnimalSpawnerVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimalSpawnerVolumeGround");
		return ptr;
	}

};


// Class AT.AnimalSpawnerVolumeSky
// 0x0030 (0x03E0 - 0x03B0)
class AAnimalSpawnerVolumeSky : public AAnimalSpawnerVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimalSpawnerVolumeSky");
		return ptr;
	}

};


// Class AT.AnimNotifyState_AG_Effect
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_AG_Effect : public UAnimNotifyState
{
public:
	struct FName                                       Name;                                                     // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_AG_Effect");
		return ptr;
	}

};


// Class AT.AnimNotify_AG_WaterSurface
// 0x0030 (0x0068 - 0x0038)
class UAnimNotify_AG_WaterSurface : public UAnimNotifyState_AG_Effect
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_AG_WaterSurface");
		return ptr;
	}

};


// Class AT.AnimNotify_BaitEffect
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_BaitEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_BaitEffect");
		return ptr;
	}

};


// Class AT.AnimNotify_BaseballGame
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_BaseballGame : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_BaseballGame");
		return ptr;
	}

};


// Class AT.AnimNotify_BookAnimFinish
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_BookAnimFinish : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_BookAnimFinish");
		return ptr;
	}

};


// Class AT.AnimNotify_Buff
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_Buff : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Buff");
		return ptr;
	}

};


// Class AT.AnimNotify_BuffTeam
// 0x0000 (0x0048 - 0x0048)
class UAnimNotify_BuffTeam : public UAnimNotify_Buff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_BuffTeam");
		return ptr;
	}

};


// Class AT.AnimNotify_ComboAssist
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_ComboAssist : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_ComboAssist");
		return ptr;
	}

};


// Class AT.AnimNotify_Cpl030AbsorbModeStart
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Cpl030AbsorbModeStart : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Cpl030AbsorbModeStart");
		return ptr;
	}

};


// Class AT.AnimNotify_Cpl071Summon
// 0x0020 (0x0058 - 0x0038)
class UAnimNotify_Cpl071Summon : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Cpl071Summon");
		return ptr;
	}

};


// Class AT.AnimNotify_DestroyProjectile
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_DestroyProjectile : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_DestroyProjectile");
		return ptr;
	}

};


// Class AT.AnimNotify_DestroyReplicatedCharacter
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_DestroyReplicatedCharacter : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_DestroyReplicatedCharacter");
		return ptr;
	}

};


// Class AT.AnimNotify_DirectDamage
// 0x0060 (0x0098 - 0x0038)
class UAnimNotify_DirectDamage : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_DirectDamage");
		return ptr;
	}

};


// Class AT.AnimNotify_DisableDelayDeathAction
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_DisableDelayDeathAction : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_DisableDelayDeathAction");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_EffectHide
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_EffectHide : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_EffectHide");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_EffectVisible
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_EffectVisible : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_EffectVisible");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_FailedReaction
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_FailedReaction : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_FailedReaction");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_FishAttach
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_Fishing_FishAttach : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_FishAttach");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_FishDetach
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_FishDetach : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_FishDetach");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_FishHide
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_FishHide : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_FishHide");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_FishVisible
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_FishVisible : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_FishVisible");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_QTE_Start
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_QTE_Start : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_QTE_Start");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_RodAttach
// 0x0028 (0x0060 - 0x0038)
class UAnimNotify_Fishing_RodAttach : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_RodAttach");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_RodDetach
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_RodDetach : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_RodDetach");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_RodHide
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_RodHide : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_RodHide");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_RodVisible
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_RodVisible : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_RodVisible");
		return ptr;
	}

};


// Class AT.AnimNotify_Fishing_StartReaction
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Fishing_StartReaction : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Fishing_StartReaction");
		return ptr;
	}

};


// Class AT.AnimNotify_Heal
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_Heal : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Heal");
		return ptr;
	}

};


// Class AT.AnimNotify_HealTeam
// 0x0000 (0x0040 - 0x0040)
class UAnimNotify_HealTeam : public UAnimNotify_Heal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_HealTeam");
		return ptr;
	}

};


// Class AT.AnimNotify_PlaySkillMessage
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_PlaySkillMessage : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_PlaySkillMessage");
		return ptr;
	}

};


// Class AT.AnimNotify_Provocation
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_Provocation : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Provocation");
		return ptr;
	}

};


// Class AT.AnimNotify_Rage
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_Rage : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_Rage");
		return ptr;
	}

};


// Class AT.AnimNotify_SetCpl018SkillSpecial
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_SetCpl018SkillSpecial : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SetCpl018SkillSpecial");
		return ptr;
	}

};


// Class AT.AnimNotify_SetFacialByID
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_SetFacialByID : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SetFacialByID");
		return ptr;
	}

};


// Class AT.AnimNotify_SetMobCallBack
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_SetMobCallBack : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SetMobCallBack");
		return ptr;
	}

};


// Class AT.AnimNotify_SetNPAShockWave
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_SetNPAShockWave : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SetNPAShockWave");
		return ptr;
	}

};


// Class AT.AnimNotifyState_SpawnProjectileBase
// 0x0040 (0x0070 - 0x0030)
class UAnimNotifyState_SpawnProjectileBase : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_SpawnProjectileBase");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileBeam
// 0x0008 (0x0078 - 0x0070)
class UAnimNotify_SpawnProjectileBeam : public UAnimNotifyState_SpawnProjectileBase
{
public:
	class UClass*                                      Projectile;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileBeam");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileBeamHuge
// 0x0010 (0x0088 - 0x0078)
class UAnimNotify_SpawnProjectileBeamHuge : public UAnimNotify_SpawnProjectileBeam
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileBeamHuge");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileBase
// 0x0030 (0x0060 - 0x0030)
class UAnimNotify_SpawnProjectileBase : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileBase");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileBullet
// 0x0008 (0x0068 - 0x0060)
class UAnimNotify_SpawnProjectileBullet : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileBullet");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileCpl005LongRangeA
// 0x0020 (0x0050 - 0x0030)
class UAnimNotify_SpawnProjectileCpl005LongRangeA : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileCpl005LongRangeA");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileCpl058FloatMine
// 0x0018 (0x0078 - 0x0060)
class UAnimNotify_SpawnProjectileCpl058FloatMine : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileCpl058FloatMine");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileEnemyBullet
// 0x0038 (0x0098 - 0x0060)
class UAnimNotify_SpawnProjectileEnemyBullet : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileEnemyBullet");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileFieldShot
// 0x0018 (0x0078 - 0x0060)
class UAnimNotify_SpawnProjectileFieldShot : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileFieldShot");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileMine
// 0x0018 (0x0078 - 0x0060)
class UAnimNotify_SpawnProjectileMine : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileMine");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectilePattern
// 0x0028 (0x0088 - 0x0060)
class UAnimNotify_SpawnProjectilePattern : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectilePattern");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileRepeat
// 0x0060 (0x00C0 - 0x0060)
class UAnimNotify_SpawnProjectileRepeat : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0060(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileRepeat");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileReserved
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_SpawnProjectileReserved : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileReserved");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileRushBullet
// 0x0010 (0x0070 - 0x0060)
class UAnimNotify_SpawnProjectileRushBullet : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileRushBullet");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileSlashWave
// 0x0030 (0x0090 - 0x0060)
class UAnimNotify_SpawnProjectileSlashWave : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0060(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileSlashWave");
		return ptr;
	}

};


// Class AT.AnimNotify_SpawnProjectileWideShot
// 0x0020 (0x0080 - 0x0060)
class UAnimNotify_SpawnProjectileWideShot : public UAnimNotify_SpawnProjectileBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SpawnProjectileWideShot");
		return ptr;
	}

};


// Class AT.AnimNotify_SummonCharacter
// 0x0018 (0x0050 - 0x0038)
class UAnimNotify_SummonCharacter : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_SummonCharacter");
		return ptr;
	}

};


// Class AT.AnimNotify_TeleportToRoot
// 0x0018 (0x0050 - 0x0038)
class UAnimNotify_TeleportToRoot : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_TeleportToRoot");
		return ptr;
	}

};


// Class AT.AnimNotify_TeleportToTarget
// 0x0010 (0x0048 - 0x0038)
class UAnimNotify_TeleportToTarget : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotify_TeleportToTarget");
		return ptr;
	}

};


// Class AT.AnimNotifyState_Absorb
// 0x00A0 (0x00D0 - 0x0030)
class UAnimNotifyState_Absorb : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_Absorb");
		return ptr;
	}

};


// Class AT.AnimNotifyState_CharacterEffect
// 0x0018 (0x0050 - 0x0038)
class UAnimNotifyState_CharacterEffect : public UAnimNotifyState_AG_Effect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_CharacterEffect");
		return ptr;
	}

};


// Class AT.AnimNotifyState_AG_CharacterTrail
// 0x0030 (0x0068 - 0x0038)
class UAnimNotifyState_AG_CharacterTrail : public UAnimNotifyState_AG_Effect
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_AG_CharacterTrail");
		return ptr;
	}

};


// Class AT.AnimNotifyState_AG_EF_Particle
// 0x0030 (0x0068 - 0x0038)
class UAnimNotifyState_AG_EF_Particle : public UAnimNotifyState_AG_Effect
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_AG_EF_Particle");
		return ptr;
	}

};


// Class AT.AnimNotifyState_AG_FootEffect
// 0x00F8 (0x0130 - 0x0038)
class UAnimNotifyState_AG_FootEffect : public UAnimNotifyState_AG_Effect
{
public:
	class UDataTable*                                  LandEffectSetting;                                        // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0040(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_AG_FootEffect");
		return ptr;
	}

};


// Class AT.AnimNotifyState_Attack
// 0x0100 (0x0130 - 0x0030)
class UAnimNotifyState_Attack : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0030(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_Attack");
		return ptr;
	}

};


// Class AT.AnimNotifyState_AttackMulti
// 0x0008 (0x0138 - 0x0130)
class UAnimNotifyState_AttackMulti : public UAnimNotifyState_Attack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_AttackMulti");
		return ptr;
	}

};


// Class AT.AnimNotifyState_AttackCapsule
// 0x0008 (0x0138 - 0x0130)
class UAnimNotifyState_AttackCapsule : public UAnimNotifyState_Attack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_AttackCapsule");
		return ptr;
	}

};


// Class AT.AnimNotifyState_AttackCapsuleMulti
// 0x0008 (0x0140 - 0x0138)
class UAnimNotifyState_AttackCapsuleMulti : public UAnimNotifyState_AttackCapsule
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_AttackCapsuleMulti");
		return ptr;
	}

};


// Class AT.AnimNotifyState_C002Z_B02_SKL001
// 0x0010 (0x0088 - 0x0078)
class UAnimNotifyState_C002Z_B02_SKL001 : public UAnimNotify_SpawnProjectileBeam
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_C002Z_B02_SKL001");
		return ptr;
	}

};


// Class AT.AnimNotifyState_CKG_HiddenAttach
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_CKG_HiddenAttach : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_CKG_HiddenAttach");
		return ptr;
	}

};


// Class AT.AnimNotifyState_CollectiveWarp
// 0x0078 (0x00A8 - 0x0030)
class UAnimNotifyState_CollectiveWarp : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_CollectiveWarp");
		return ptr;
	}

};


// Class AT.AnimNotifyState_Cpl024ShortRange
// 0x0058 (0x0088 - 0x0030)
class UAnimNotifyState_Cpl024ShortRange : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_Cpl024ShortRange");
		return ptr;
	}

};


// Class AT.AnimNotifyState_Cpl034SonicBlow
// 0x0010 (0x0040 - 0x0030)
class UAnimNotifyState_Cpl034SonicBlow : public UAnimNotifyState
{
public:
	float                                              Speed;                                                    // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0034(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_Cpl034SonicBlow");
		return ptr;
	}

};


// Class AT.AnimNotifyState_DirectionCamera
// 0x0048 (0x0078 - 0x0030)
class UAnimNotifyState_DirectionCamera : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_DirectionCamera");
		return ptr;
	}

};


// Class AT.AnimNotifyState_DisableBodyCollision
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_DisableBodyCollision : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_DisableBodyCollision");
		return ptr;
	}

};


// Class AT.AnimNotifyState_PlayParticleBeam
// 0x0190 (0x01C0 - 0x0030)
class UAnimNotifyState_PlayParticleBeam : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0030(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_PlayParticleBeam");
		return ptr;
	}

};


// Class AT.AnimNotifyState_RadialBlur
// 0x0028 (0x0058 - 0x0030)
class UAnimNotifyState_RadialBlur : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_RadialBlur");
		return ptr;
	}

};


// Class AT.AnimNotifyState_SensingVolume
// 0x0028 (0x0058 - 0x0030)
class UAnimNotifyState_SensingVolume : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_SensingVolume");
		return ptr;
	}

};


// Class AT.AnimNotifyState_SetMobAction
// 0x0038 (0x0068 - 0x0030)
class UAnimNotifyState_SetMobAction : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_SetMobAction");
		return ptr;
	}

};


// Class AT.AnimNotifyState_ShotComboInvalid
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_ShotComboInvalid : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_ShotComboInvalid");
		return ptr;
	}

};


// Class AT.AnimNotifyState_TargetCamera
// 0x0010 (0x0040 - 0x0030)
class UAnimNotifyState_TargetCamera : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_TargetCamera");
		return ptr;
	}

};


// Class AT.AnimNotifyState_TeleportToTarget
// 0x0058 (0x0088 - 0x0030)
class UAnimNotifyState_TeleportToTarget : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_TeleportToTarget");
		return ptr;
	}

};


// Class AT.AnimNotifyState_Turn
// 0x0038 (0x0068 - 0x0030)
class UAnimNotifyState_Turn : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_Turn");
		return ptr;
	}

};


// Class AT.AnimNotifyState_UseRetargetSetting
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_UseRetargetSetting : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_UseRetargetSetting");
		return ptr;
	}

};


// Class AT.AnimNotifySubTitle
// 0x0018 (0x0050 - 0x0038)
class UAnimNotifySubTitle : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifySubTitle");
		return ptr;
	}

};


// Class AT.AnimNotifyTreasureItemSpawn
// 0x0000 (0x0038 - 0x0038)
class UAnimNotifyTreasureItemSpawn : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyTreasureItemSpawn");
		return ptr;
	}

};


// Class AT.AreaBoundsVolume
// 0x0010 (0x0380 - 0x0370)
class AAreaBoundsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AreaBoundsVolume");
		return ptr;
	}

};


// Class AT.AT_AnimInstance
// 0x0060 (0x03C0 - 0x0360)
class UAT_AnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0360(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_AnimInstance");
		return ptr;
	}

};


// Class AT.AT_AnimNotifyState_ChickenEgg
// 0x0010 (0x0040 - 0x0030)
class UAT_AnimNotifyState_ChickenEgg : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_AnimNotifyState_ChickenEgg");
		return ptr;
	}

};


// Class AT.AT_AnimNotifyState_ToAccessPoint
// 0x0000 (0x0030 - 0x0030)
class UAT_AnimNotifyState_ToAccessPoint : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_AnimNotifyState_ToAccessPoint");
		return ptr;
	}

};


// Class AT.AT_AnimNotifyState_ToTreasureAP
// 0x0000 (0x0030 - 0x0030)
class UAT_AnimNotifyState_ToTreasureAP : public UAT_AnimNotifyState_ToAccessPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_AnimNotifyState_ToTreasureAP");
		return ptr;
	}

};


// Class AT.AT_BaseHUD
// 0x0028 (0x0508 - 0x04E0)
class AAT_BaseHUD : public ACFHUD
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_BaseHUD");
		return ptr;
	}


	void CanvasSize();
};


// Class AT.AT_BlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UAT_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_BlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_UnloadUiCaptureById();
	void STATIC_UnloadUiCaptureByCharacter();
	void STATIC_StopBgm();
	void STATIC_StartTrialClearMenu();
	void STATIC_StartQuest();
	void STATIC_SetScreenResolution(int Width, int Height);
	void STATIC_SetKeyGuideType();
	void STATIC_SetKeyGuideTutorialSetting();
	void STATIC_SetKeyGuideCtrlMode();
	void STATIC_SetFieldRideSelectBlock();
	void STATIC_ResumeAllParticle();
	void STATIC_RequestLoadUiCaptureById();
	void STATIC_RequestLoadUiCaptureByCharacter();
	void STATIC_RequestInDisplayPopularNameUI();
	void STATIC_RequestInDisplayNameUI();
	void STATIC_ReplaceTxtMacro();
	void STATIC_ReplaceIntegerMacro();
	void STATIC_ReplaceFloatMacro();
	void STATIC_ReleaseCooking();
	void STATIC_Progress_Set(const struct FName& Name);
	void STATIC_Progress_Next();
	void STATIC_Progress_GetName();
	void STATIC_Progress_DebugSet(const struct FName& Name);
	void STATIC_PlayBgm(const struct FName& ID);
	void STATIC_PhaseID2QuestID();
	void STATIC_PermissionSkill();
	void STATIC_PauseMenu();
	void STATIC_PauseMainQuestTitleAnim();
	void STATIC_PauseAllParticle();
	void STATIC_OpenItemMenuByTutorialMode();
	void STATIC_OpenCookingMenuChichiActorName();
	void STATIC_OpenCookingMenuChichi();
	void STATIC_OpenCommunityMenuByTutorialMode();
	void STATIC_LockCooking();
	void STATIC_isFlagOn(int Source, int Enum);
	void STATIC_HideKeyGuideUntilQuestCaption();
	void STATIC_GetSkyLights();
	void STATIC_GetSkyConditionManager();
	void STATIC_GetRideManager();
	void STATIC_GetRaceGameManager();
	void STATIC_GetQuestManager();
	void STATIC_GetHeightFogs();
	void STATIC_GetDragonBallManager();
	void STATIC_GetDemoManageComponent();
	void STATIC_GetDefaultGameHud();
	void STATIC_GetDebugMenu();
	void STATIC_GetCharacterName(const struct FString& ID);
	void STATIC_GetCaptureManager();
	void STATIC_GetBuildConfiguration();
	void STATIC_GetBaseballGameManager();
	void STATIC_GetATVersion();
	void STATIC_GetAtmosphericFogs();
	void STATIC_GetATCharacterByType( Type);
	void STATIC_GetATCharacter();
	void STATIC_GetAIManager();
	void STATIC_GetAIBase();
	void STATIC_GetActorByTag();
	void STATIC_GetActorByClassTag(class UClass* Class);
	void STATIC_GetActor();
	void STATIC_ForceRequestOutDisplayNameUI();
	void STATIC_EnumToBitFlag(int Enum);
	void STATIC_EnableDepthOfField();
	void STATIC_DebugUnlockAllArea();
	void STATIC_ClearBannedSkillSetting();
	void STATIC_CallTutorialTips_IN();
	void STATIC_CallTutorialTips_CONTROL(int Input);
	void STATIC_CallMainQuestEnd_IN();
	void STATIC_CallMainQuestEnd_CONTROL(int Input);
	void STATIC_CallMainQuestBegin_OUT();
	void STATIC_CallMainQuestBegin_IN();
	void STATIC_CallFavorRateUp_IN(int Target);
	void STATIC_CallFavorRateUp_CONTROL(int Input);
	void STATIC_CallBossBattleResult();
	void STATIC_BannedAndRipoffSkill();
};


// Class AT.AT_BlurManager
// 0x0078 (0x03B0 - 0x0338)
class AAT_BlurManager : public AActor
{
public:
	class UMaterial*                                   Material;                                                 // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0340(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_BlurManager");
		return ptr;
	}

};


// Class AT.AT_CapturedCharacterAnimInstance
// 0x0020 (0x0380 - 0x0360)
class UAT_CapturedCharacterAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0360(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_CapturedCharacterAnimInstance");
		return ptr;
	}

};


// Class AT.AT_CharacterBase
// 0x0170 (0x08C0 - 0x0750)
class AAT_CharacterBase : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0750(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_CharacterBase");
		return ptr;
	}

};


// Class AT.AT_Character
// 0x06E0 (0x0FA0 - 0x08C0)
class AAT_Character : public AAT_CharacterBase
{
public:
	unsigned char                                      UnknownData00[0x6E0];                                     // 0x08C0(0x06E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_Character");
		return ptr;
	}

};


// Class AT.AT_CharacterHugeBase
// 0x0010 (0x0FB0 - 0x0FA0)
class AAT_CharacterHugeBase : public AAT_Character
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FA0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_CharacterHugeBase");
		return ptr;
	}

};


// Class AT.AT_CharacterPlayableBase
// 0x0000 (0x0FA0 - 0x0FA0)
class AAT_CharacterPlayableBase : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_CharacterPlayableBase");
		return ptr;
	}

};


// Class AT.SupportActionInfo
// 0x00B8 (0x00E0 - 0x0028)
class USupportActionInfo : public UObject
{
public:
	class UDataTable*                                  CharacterSupportParameter;                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SupportActionInfo");
		return ptr;
	}

};


// Class AT.ATCorrectionFlySpeedComponent
// 0x0018 (0x0118 - 0x0100)
class UATCorrectionFlySpeedComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCorrectionFlySpeedComponent");
		return ptr;
	}

};


// Class AT.ATDamageCollisionBase
// 0x0230 (0x0570 - 0x0340)
class AATDamageCollisionBase : public ATriggerBase
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0340(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDamageCollisionBase");
		return ptr;
	}


	void EndOverlap();
	void BeginOverlap();
};


// Class AT.AT_DamageCollisionBox
// 0x0000 (0x0570 - 0x0570)
class AAT_DamageCollisionBox : public AATDamageCollisionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_DamageCollisionBox");
		return ptr;
	}

};


// Class AT.AT_DamageCollisionCapsule
// 0x0000 (0x0570 - 0x0570)
class AAT_DamageCollisionCapsule : public AATDamageCollisionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_DamageCollisionCapsule");
		return ptr;
	}

};


// Class AT.AT_DamageCollisionSphere
// 0x0000 (0x0570 - 0x0570)
class AAT_DamageCollisionSphere : public AATDamageCollisionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_DamageCollisionSphere");
		return ptr;
	}

};


// Class AT.AT_DamageExpCharacter
// 0x00A0 (0x07F0 - 0x0750)
class AAT_DamageExpCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0750(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_DamageExpCharacter");
		return ptr;
	}

};


// Class AT.AT_DamageType
// 0x0030 (0x0070 - 0x0040)
class UAT_DamageType : public UDamageType
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0040(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_DamageType");
		return ptr;
	}

};


// Class AT.AT_DepthOfFieldManager
// 0x0000 (0x0100 - 0x0100)
class UAT_DepthOfFieldManager : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_DepthOfFieldManager");
		return ptr;
	}


	void OnDemoTiming();
};


// Class AT.AT_DPICustomScalingRule
// 0x0000 (0x0028 - 0x0028)
class UAT_DPICustomScalingRule : public UDPICustomScalingRule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_DPICustomScalingRule");
		return ptr;
	}

};


// Class AT.AT_EffectStatics
// 0x0008 (0x0108 - 0x0100)
class UAT_EffectStatics : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_EffectStatics");
		return ptr;
	}


	void STATIC_TickTrail();
	void STATIC_IsNearlyGround(class AActor* Character);
	void STATIC_IsNearly(class AActor* Character);
	void STATIC_IsNearCamera();
	void STATIC_EnlargeEffect();
	void STATIC_EndTrail();
	void STATIC_DrawPhysicalSurfaceDebug(class AActor* Character);
	void STATIC_CallHitEffectCPP();
	void STATIC_CallGuardHitEffectCPP();
	void STATIC_BeginTrail();
};


// Class AT.AT_GameHUD
// 0x0110 (0x0618 - 0x0508)
class AAT_GameHUD : public AAT_BaseHUD
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0508(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_GameHUD");
		return ptr;
	}

};


// Class AT.AT_GameInstance
// 0x0228 (0x04C0 - 0x0298)
class UAT_GameInstance : public UCFGameInstance
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x0298(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_GameInstance");
		return ptr;
	}

};


// Class AT.AT_LightTowerEffectComponent
// 0x0198 (0x0298 - 0x0100)
class UAT_LightTowerEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0100(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_LightTowerEffectComponent");
		return ptr;
	}

};


// Class AT.AT_Logo
// 0x0100 (0x0438 - 0x0338)
class AAT_Logo : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0338(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_Logo");
		return ptr;
	}

};


// Class AT.AT_LookAtInterface
// 0x0000 (0x0028 - 0x0028)
class UAT_LookAtInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_LookAtInterface");
		return ptr;
	}

};


// Class AT.NpcPawn
// 0x0000 (0x0398 - 0x0398)
class ANpcPawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcPawn");
		return ptr;
	}


	void GetNpcMovementComponent();
};


// Class AT.AT_MobBase
// 0x0068 (0x0400 - 0x0398)
class AAT_MobBase : public ANpcPawn
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0398(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_MobBase");
		return ptr;
	}

};


// Class AT.AT_MobAnimalBase
// 0x0050 (0x0450 - 0x0400)
class AAT_MobAnimalBase : public AAT_MobBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0400(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_MobAnimalBase");
		return ptr;
	}

};


// Class AT.AT_MobBase_Static
// 0x0008 (0x0408 - 0x0400)
class AAT_MobBase_Static : public AAT_MobBase
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_MobBase_Static");
		return ptr;
	}

};


// Class AT.AT_MobCharacter
// 0x0000 (0x0750 - 0x0750)
class AAT_MobCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_MobCharacter");
		return ptr;
	}


	void CreateMessageWindow();
};


// Class AT.AT_MonitoringMouse
// 0x0010 (0x0038 - 0x0028)
class UAT_MonitoringMouse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_MonitoringMouse");
		return ptr;
	}

};


// Class AT.AT_MotionMetaData
// 0x0020 (0x0048 - 0x0028)
class UAT_MotionMetaData : public UAnimMetaData
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_MotionMetaData");
		return ptr;
	}

};


// Class AT.AT_Opening
// 0x0008 (0x0340 - 0x0338)
class AAT_Opening : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_Opening");
		return ptr;
	}

};


// Class AT.AT_ProjectileMovementComponent
// 0x0020 (0x0220 - 0x0200)
class UAT_ProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0200(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_ProjectileMovementComponent");
		return ptr;
	}

};


// Class AT.AT_Title
// 0x0110 (0x0448 - 0x0338)
class AAT_Title : public AActor
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0338(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_Title");
		return ptr;
	}

};


// Class AT.AT_TownCharacter
// 0x01C0 (0x05C0 - 0x0400)
class AAT_TownCharacter : public AAT_MobBase
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0400(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_TownCharacter");
		return ptr;
	}

};


// Class AT.AT_TPSSkillComponent
// 0x0060 (0x0160 - 0x0100)
class UAT_TPSSkillComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_TPSSkillComponent");
		return ptr;
	}

};


// Class AT.AT_TriggerStaticActorInterface
// 0x0000 (0x0028 - 0x0028)
class UAT_TriggerStaticActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_TriggerStaticActorInterface");
		return ptr;
	}


	void IsTouch();
};


// Class AT.AT_UI3DCaptureOptional
// 0x0148 (0x0170 - 0x0028)
class UAT_UI3DCaptureOptional : public UObject
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0028(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UI3DCaptureOptional");
		return ptr;
	}


	void CompleteLoad();
};


// Class AT.ATUIUserWidget
// 0x0040 (0x03B0 - 0x0370)
class UATUIUserWidget : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUIUserWidget");
		return ptr;
	}


	void SetForceTick();
};


// Class AT.AT_UI3DCaptureWidget
// 0x0330 (0x06E0 - 0x03B0)
class UAT_UI3DCaptureWidget : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x03B0(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UI3DCaptureWidget");
		return ptr;
	}

};


// Class AT.AT_UIBattleCond
// 0x0070 (0x0420 - 0x03B0)
class UAT_UIBattleCond : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x03B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleCond");
		return ptr;
	}

};


// Class AT.AT_UIBattleCutin
// 0x0028 (0x0398 - 0x0370)
class UAT_UIBattleCutin : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleCutin");
		return ptr;
	}

};


// Class AT.AT_UIBattleCutinChild
// 0x0060 (0x03D0 - 0x0370)
class UAT_UIBattleCutinChild : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0370(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleCutinChild");
		return ptr;
	}

};


// Class AT.AT_UIBattleCutinSkill
// 0x0038 (0x03E8 - 0x03B0)
class UAT_UIBattleCutinSkill : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleCutinSkill");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudEnemy
// 0x0330 (0x06E0 - 0x03B0)
class UAT_UIBattleHudEnemy : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x03B0(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudEnemy");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugeBase
// 0x0078 (0x0428 - 0x03B0)
class UAT_UIBattleHudGaugeBase : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x03B0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugeBase");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugePlayerHp
// 0x0048 (0x0470 - 0x0428)
class UAT_UIBattleHudGaugePlayerHp : public UAT_UIBattleHudGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0428(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugePlayerHp");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugePlayerSp
// 0x0040 (0x0468 - 0x0428)
class UAT_UIBattleHudGaugePlayerSp : public UAT_UIBattleHudGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0428(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugePlayerSp");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugePlayerHeatUp
// 0x0098 (0x0448 - 0x03B0)
class UAT_UIBattleHudGaugePlayerHeatUp : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x03B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugePlayerHeatUp");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugePlayerHeatUpTipEffect
// 0x0018 (0x03C8 - 0x03B0)
class UAT_UIBattleHudGaugePlayerHeatUpTipEffect : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugePlayerHeatUpTipEffect");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugeDurable
// 0x0040 (0x03F0 - 0x03B0)
class UAT_UIBattleHudGaugeDurable : public UATUIUserWidget
{
public:
	class UImage*                                      Ins_Gauge_Durable;                                        // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugeDurable");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugeEnemyHp
// 0x0060 (0x0488 - 0x0428)
class UAT_UIBattleHudGaugeEnemyHp : public UAT_UIBattleHudGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0428(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugeEnemyHp");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugeEnemyBreak
// 0x0038 (0x0460 - 0x0428)
class UAT_UIBattleHudGaugeEnemyBreak : public UAT_UIBattleHudGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0428(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugeEnemyBreak");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudGaugeEnemyBreakParts
// 0x0038 (0x03E8 - 0x03B0)
class UAT_UIBattleHudGaugeEnemyBreakParts : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudGaugeEnemyBreakParts");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudEnemySimple
// 0x0090 (0x04B8 - 0x0428)
class UAT_UIBattleHudEnemySimple : public UAT_UIBattleHudGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0428(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudEnemySimple");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudPlayer
// 0x0230 (0x05E0 - 0x03B0)
class UAT_UIBattleHudPlayer : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x03B0(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudPlayer");
		return ptr;
	}

};


// Class AT.AT_UIBattleHudPlayerSpo
// 0x0160 (0x0510 - 0x03B0)
class UAT_UIBattleHudPlayerSpo : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x03B0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleHudPlayerSpo");
		return ptr;
	}

};


// Class AT.BaseObject
// 0x0008 (0x0030 - 0x0028)
class UBaseObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BaseObject");
		return ptr;
	}

};


// Class AT.AT_UIBattleManager
// 0x0398 (0x03C8 - 0x0030)
class UAT_UIBattleManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x398];                                     // 0x0030(0x0398) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleManager");
		return ptr;
	}

};


// Class AT.AT_UIBattleMsgBreak
// 0x0028 (0x03D8 - 0x03B0)
class UAT_UIBattleMsgBreak : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleMsgBreak");
		return ptr;
	}

};


// Class AT.AT_UIBattleMsgBreak_Lang
// 0x0010 (0x03C0 - 0x03B0)
class UAT_UIBattleMsgBreak_Lang : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleMsgBreak_Lang");
		return ptr;
	}

};


// Class AT.AT_UIBattleMsgCounter
// 0x0058 (0x03C8 - 0x0370)
class UAT_UIBattleMsgCounter : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0370(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleMsgCounter");
		return ptr;
	}

};


// Class AT.AT_UIBattleMsgJustDodge
// 0x0058 (0x0408 - 0x03B0)
class UAT_UIBattleMsgJustDodge : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleMsgJustDodge");
		return ptr;
	}

};


// Class AT.AT_UIBattleRescueParts
// 0x0040 (0x03F0 - 0x03B0)
class UAT_UIBattleRescueParts : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleRescueParts");
		return ptr;
	}

};


// Class AT.AT_UIBattleRescue
// 0x0010 (0x03C0 - 0x03B0)
class UAT_UIBattleRescue : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleRescue");
		return ptr;
	}

};


// Class AT.AT_UIBattleResult
// 0x0120 (0x0490 - 0x0370)
class UAT_UIBattleResult : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0370(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleResult");
		return ptr;
	}

};


// Class AT.AT_UIBattleRushSpeedCore
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIBattleRushSpeedCore : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleRushSpeedCore");
		return ptr;
	}

};


// Class AT.AT_UIBattleTipsList
// 0x0010 (0x0380 - 0x0370)
class UAT_UIBattleTipsList : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleTipsList");
		return ptr;
	}

};


// Class AT.AT_UIBattleTipsTutorial
// 0x01D8 (0x0588 - 0x03B0)
class UAT_UIBattleTipsTutorial : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x03B0(0x01D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBattleTipsTutorial");
		return ptr;
	}

};


// Class AT.AT_UIBootLogo
// 0x0080 (0x03F0 - 0x0370)
class UAT_UIBootLogo : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0370(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBootLogo");
		return ptr;
	}

};


// Class AT.AT_UIChoiceCmd
// 0x0048 (0x03B8 - 0x0370)
class UAT_UIChoiceCmd : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0370(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIChoiceCmd");
		return ptr;
	}

};


// Class AT.AT_UIChoiceWin
// 0x0038 (0x03A8 - 0x0370)
class UAT_UIChoiceWin : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0370(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIChoiceWin");
		return ptr;
	}

};


// Class AT.AT_UICloudUnder
// 0x0028 (0x0398 - 0x0370)
class UAT_UICloudUnder : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICloudUnder");
		return ptr;
	}

};


// Class AT.AT_UIMenuListBase00
// 0x0108 (0x0478 - 0x0370)
class UAT_UIMenuListBase00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0370(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMenuListBase00");
		return ptr;
	}

};


// Class AT.AT_UICmn00MenuList11
// 0x0000 (0x0478 - 0x0478)
class UAT_UICmn00MenuList11 : public UAT_UIMenuListBase00
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmn00MenuList11");
		return ptr;
	}

};


// Class AT.AT_UICmn00MenuList7
// 0x0008 (0x0480 - 0x0478)
class UAT_UICmn00MenuList7 : public UAT_UIMenuListBase00
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmn00MenuList7");
		return ptr;
	}

};


// Class AT.AT_UICmn00MenuList9
// 0x0000 (0x0478 - 0x0478)
class UAT_UICmn00MenuList9 : public UAT_UIMenuListBase00
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmn00MenuList9");
		return ptr;
	}

};


// Class AT.AT_UIMenuListBase01
// 0x0078 (0x03E8 - 0x0370)
class UAT_UIMenuListBase01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0370(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMenuListBase01");
		return ptr;
	}

};


// Class AT.AT_UICmn01MenuList05Detail
// 0x0010 (0x03F8 - 0x03E8)
class UAT_UICmn01MenuList05Detail : public UAT_UIMenuListBase01
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmn01MenuList05Detail");
		return ptr;
	}

};


// Class AT.AT_UICmn01MenuList09
// 0x0000 (0x03E8 - 0x03E8)
class UAT_UICmn01MenuList09 : public UAT_UIMenuListBase01
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmn01MenuList09");
		return ptr;
	}

};


// Class AT.AT_UIMenuBarBase03
// 0x0050 (0x03C0 - 0x0370)
class UAT_UIMenuBarBase03 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMenuBarBase03");
		return ptr;
	}

};


// Class AT.AT_UICmn03MenuBar10
// 0x0000 (0x03C0 - 0x03C0)
class UAT_UICmn03MenuBar10 : public UAT_UIMenuBarBase03
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmn03MenuBar10");
		return ptr;
	}

};


// Class AT.AT_UIMenuListBase03
// 0x0058 (0x03C8 - 0x0370)
class UAT_UIMenuListBase03 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0370(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMenuListBase03");
		return ptr;
	}

};


// Class AT.AT_UICmn03MenuList10
// 0x0000 (0x03C8 - 0x03C8)
class UAT_UICmn03MenuList10 : public UAT_UIMenuListBase03
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmn03MenuList10");
		return ptr;
	}

};


// Class AT.AT_UIMenuListBase06
// 0x0078 (0x0428 - 0x03B0)
class UAT_UIMenuListBase06 : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x03B0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMenuListBase06");
		return ptr;
	}

};


// Class AT.AT_UICmn06MenuList09
// 0x0000 (0x0428 - 0x0428)
class UAT_UICmn06MenuList09 : public UAT_UIMenuListBase06
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmn06MenuList09");
		return ptr;
	}

};


// Class AT.AT_UICmnActionPopUp
// 0x0090 (0x0400 - 0x0370)
class UAT_UICmnActionPopUp : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0370(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmnActionPopUp");
		return ptr;
	}

};


// Class AT.AT_UICmnActionPopUpCore
// 0x0210 (0x0580 - 0x0370)
class UAT_UICmnActionPopUpCore : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x0370(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmnActionPopUpCore");
		return ptr;
	}

};


// Class AT.AT_UIUseItemEffect
// 0x0010 (0x0380 - 0x0370)
class UAT_UIUseItemEffect : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIUseItemEffect");
		return ptr;
	}

};


// Class AT.AT_UICmnFade
// 0x0088 (0x03F8 - 0x0370)
class UAT_UICmnFade : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0370(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmnFade");
		return ptr;
	}

};


// Class AT.AT_UICmnInput
// 0x0388 (0x03B0 - 0x0028)
class UAT_UICmnInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x388];                                     // 0x0028(0x0388) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmnInput");
		return ptr;
	}

};


// Class AT.AT_UILoadingScreen
// 0x0150 (0x04C0 - 0x0370)
class UAT_UILoadingScreen : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0370(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UILoadingScreen");
		return ptr;
	}

};


// Class AT.AT_UICmnLoadingBar
// 0x0090 (0x0400 - 0x0370)
class UAT_UICmnLoadingBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0370(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmnLoadingBar");
		return ptr;
	}

};


// Class AT.AT_UICmnTab
// 0x0038 (0x03A8 - 0x0370)
class UAT_UICmnTab : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0370(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmnTab");
		return ptr;
	}

};


// Class AT.AT_UICmnTabIcon
// 0x0040 (0x03B0 - 0x0370)
class UAT_UICmnTabIcon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICmnTabIcon");
		return ptr;
	}

};


// Class AT.AT_UICommandPalette
// 0x08A8 (0x0C58 - 0x03B0)
class UAT_UICommandPalette : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8A8];                                     // 0x03B0(0x08A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommandPalette");
		return ptr;
	}

};


// Class AT.AT_UICommandPaletteSkillCoopBar
// 0x0038 (0x03E8 - 0x03B0)
class UAT_UICommandPaletteSkillCoopBar : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommandPaletteSkillCoopBar");
		return ptr;
	}

};


// Class AT.AT_UICommandPaletteBar
// 0x0090 (0x0440 - 0x03B0)
class UAT_UICommandPaletteBar : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x03B0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommandPaletteBar");
		return ptr;
	}

};


// Class AT.AT_UICommandPaletteBarSpo
// 0x0040 (0x03F0 - 0x03B0)
class UAT_UICommandPaletteBarSpo : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommandPaletteBarSpo");
		return ptr;
	}

};


// Class AT.AT_UICommuLv
// 0x0050 (0x03C0 - 0x0370)
class UAT_UICommuLv : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommuLv");
		return ptr;
	}

};


// Class AT.AT_UICommunityBoard
// 0x02B8 (0x0668 - 0x03B0)
class UAT_UICommunityBoard : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2B8];                                     // 0x03B0(0x02B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityBoard");
		return ptr;
	}

};


// Class AT.AT_UICommunityBoard_Panel
// 0x01A8 (0x0558 - 0x03B0)
class UAT_UICommunityBoard_Panel : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x03B0(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityBoard_Panel");
		return ptr;
	}

};


// Class AT.AT_UICommunityBoard_LinkLine
// 0x00E0 (0x0490 - 0x03B0)
class UAT_UICommunityBoard_LinkLine : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x03B0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityBoard_LinkLine");
		return ptr;
	}

};


// Class AT.AT_UICommunityBoard_PanelFrame
// 0x0580 (0x0930 - 0x03B0)
class UAT_UICommunityBoard_PanelFrame : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x580];                                     // 0x03B0(0x0580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityBoard_PanelFrame");
		return ptr;
	}

};


// Class AT.AT_UICommunityBoardDetail
// 0x0218 (0x05C8 - 0x03B0)
class UAT_UICommunityBoardDetail : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x03B0(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityBoardDetail");
		return ptr;
	}

};


// Class AT.AT_UICommunityBoardDetailSkillParts
// 0x0058 (0x0408 - 0x03B0)
class UAT_UICommunityBoardDetailSkillParts : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityBoardDetailSkillParts");
		return ptr;
	}

};


// Class AT.AT_UICommunityBoardDetailActiveSkillParts
// 0x0018 (0x03C8 - 0x03B0)
class UAT_UICommunityBoardDetailActiveSkillParts : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityBoardDetailActiveSkillParts");
		return ptr;
	}

};


// Class AT.AT_UICommunityManager
// 0x0288 (0x02B8 - 0x0030)
class UAT_UICommunityManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x288];                                     // 0x0030(0x0288) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityManager");
		return ptr;
	}

};


// Class AT.AT_UICommunityStart
// 0x00A0 (0x0410 - 0x0370)
class UAT_UICommunityStart : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0370(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityStart");
		return ptr;
	}

};


// Class AT.AT_UICommunityStart_EmbList
// 0x0080 (0x03F0 - 0x0370)
class UAT_UICommunityStart_EmbList : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0370(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityStart_EmbList");
		return ptr;
	}

};


// Class AT.AT_UICompZPartsBase
// 0x0000 (0x0370 - 0x0370)
class UAT_UICompZPartsBase : public UCFUIUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPartsBase");
		return ptr;
	}

};


// Class AT.AT_UICompZBgm
// 0x0010 (0x0380 - 0x0370)
class UAT_UICompZBgm : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZBgm");
		return ptr;
	}

};


// Class AT.AT_UICompZCds
// 0x00F8 (0x0468 - 0x0370)
class UAT_UICompZCds : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0370(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZCds");
		return ptr;
	}

};


// Class AT.AT_UICompZCurs
// 0x0030 (0x03A0 - 0x0370)
class UAT_UICompZCurs : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZCurs");
		return ptr;
	}

};


// Class AT.AT_UICompZDemo
// 0x0050 (0x03C0 - 0x0370)
class UAT_UICompZDemo : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZDemo");
		return ptr;
	}

};


// Class AT.AT_UICompZItems
// 0x0020 (0x0390 - 0x0370)
class UAT_UICompZItems : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZItems");
		return ptr;
	}

};


// Class AT.AT_UICompZList
// 0x0048 (0x03B8 - 0x0370)
class UAT_UICompZList : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0370(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZList");
		return ptr;
	}

};


// Class AT.AT_UICompZListController
// 0x0028 (0x0050 - 0x0028)
class UAT_UICompZListController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZListController");
		return ptr;
	}

};


// Class AT.AT_UICompZListBgm
// 0x0048 (0x03B8 - 0x0370)
class UAT_UICompZListBgm : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0370(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZListBgm");
		return ptr;
	}

};


// Class AT.AT_UICompZListBgmController
// 0x0028 (0x0050 - 0x0028)
class UAT_UICompZListBgmController : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZListBgmController");
		return ptr;
	}

};


// Class AT.AT_UICompZListCds
// 0x0100 (0x0470 - 0x0370)
class UAT_UICompZListCds : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0370(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZListCds");
		return ptr;
	}

};


// Class AT.AT_UICompZListDemo
// 0x00C8 (0x0438 - 0x0370)
class UAT_UICompZListDemo : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0370(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZListDemo");
		return ptr;
	}

};


// Class AT.AT_UICompZPageBase
// 0x00C0 (0x0430 - 0x0370)
class UAT_UICompZPageBase : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0370(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageBase");
		return ptr;
	}

};


// Class AT.AT_UICompZPageDetailBase
// 0x0030 (0x0460 - 0x0430)
class UAT_UICompZPageDetailBase : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageDetailBase");
		return ptr;
	}

};


// Class AT.AT_UICompZPage3D
// 0x0068 (0x04C8 - 0x0460)
class UAT_UICompZPage3D : public UAT_UICompZPageDetailBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0460(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPage3D");
		return ptr;
	}

};


// Class AT.AT_UICompZPageBgm
// 0x0010 (0x0440 - 0x0430)
class UAT_UICompZPageBgm : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageBgm");
		return ptr;
	}

};


// Class AT.AT_UICompZPageCds
// 0x0010 (0x0440 - 0x0430)
class UAT_UICompZPageCds : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageCds");
		return ptr;
	}

};


// Class AT.AT_UICompZPageContents
// 0x0010 (0x0440 - 0x0430)
class UAT_UICompZPageContents : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageContents");
		return ptr;
	}

};


// Class AT.PanelCharacter
// 0x0018 (0x0040 - 0x0028)
class UPanelCharacter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PanelCharacter");
		return ptr;
	}

};


// Class AT.RelatedLine
// 0x0008 (0x0030 - 0x0028)
class URelatedLine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RelatedLine");
		return ptr;
	}

};


// Class AT.AT_UICompZPageCorrelationBase
// 0x0158 (0x0588 - 0x0430)
class UAT_UICompZPageCorrelationBase : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0430(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageCorrelationBase");
		return ptr;
	}

};


// Class AT.AT_UICompZPageCorrelationBuu
// 0x0000 (0x0588 - 0x0588)
class UAT_UICompZPageCorrelationBuu : public UAT_UICompZPageCorrelationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageCorrelationBuu");
		return ptr;
	}

};


// Class AT.AT_UICompZPageCorrelationCell
// 0x0000 (0x0588 - 0x0588)
class UAT_UICompZPageCorrelationCell : public UAT_UICompZPageCorrelationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageCorrelationCell");
		return ptr;
	}

};


// Class AT.AT_UICompZPageCorrelationFreeza
// 0x0000 (0x0588 - 0x0588)
class UAT_UICompZPageCorrelationFreeza : public UAT_UICompZPageCorrelationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageCorrelationFreeza");
		return ptr;
	}

};


// Class AT.AT_UICompZPageCorrelationSaiyan
// 0x0000 (0x0588 - 0x0588)
class UAT_UICompZPageCorrelationSaiyan : public UAT_UICompZPageCorrelationBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageCorrelationSaiyan");
		return ptr;
	}

};


// Class AT.AT_UICompZPageDemo
// 0x0010 (0x0440 - 0x0430)
class UAT_UICompZPageDemo : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageDemo");
		return ptr;
	}

};


// Class AT.AT_UICompZPageDetail
// 0x0050 (0x04B0 - 0x0460)
class UAT_UICompZPageDetail : public UAT_UICompZPageDetailBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0460(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageDetail");
		return ptr;
	}

};


// Class AT.AT_UICompZPageImg
// 0x0030 (0x0490 - 0x0460)
class UAT_UICompZPageImg : public UAT_UICompZPageDetailBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0460(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageImg");
		return ptr;
	}

};


// Class AT.AT_UICompZPageItems
// 0x0010 (0x0440 - 0x0430)
class UAT_UICompZPageItems : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0430(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageItems");
		return ptr;
	}

};


// Class AT.AT_UICompZPageMemo
// 0x0028 (0x0458 - 0x0430)
class UAT_UICompZPageMemo : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0430(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageMemo");
		return ptr;
	}

};


// Class AT.AT_UICompZPartsDetail
// 0x0030 (0x03A0 - 0x0370)
class UAT_UICompZPartsDetail : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPartsDetail");
		return ptr;
	}

};


// Class AT.AT_UICompZPartsIconNavi
// 0x0010 (0x0380 - 0x0370)
class UAT_UICompZPartsIconNavi : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPartsIconNavi");
		return ptr;
	}

};


// Class AT.AT_UICompZPartsName
// 0x0018 (0x0388 - 0x0370)
class UAT_UICompZPartsName : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPartsName");
		return ptr;
	}

};


// Class AT.AT_UICompZPartsTempL
// 0x0010 (0x0380 - 0x0370)
class UAT_UICompZPartsTempL : public UAT_UICompZPartsBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPartsTempL");
		return ptr;
	}

};


// Class AT.AT_UICompZPageTempL
// 0x0008 (0x0438 - 0x0430)
class UAT_UICompZPageTempL : public UAT_UICompZPageBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0430(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICompZPageTempL");
		return ptr;
	}

};


// Class AT.AT_UICookingComplete
// 0x02D8 (0x0688 - 0x03B0)
class UAT_UICookingComplete : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2D8];                                     // 0x03B0(0x02D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICookingComplete");
		return ptr;
	}

};


// Class AT.AT_UICookingEffect
// 0x0358 (0x0708 - 0x03B0)
class UAT_UICookingEffect : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x358];                                     // 0x03B0(0x0358) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICookingEffect");
		return ptr;
	}

};


// Class AT.AT_UICookingEffectArrow
// 0x0050 (0x0400 - 0x03B0)
class UAT_UICookingEffectArrow : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICookingEffectArrow");
		return ptr;
	}

};


// Class AT.AT_UICookingMenu
// 0x03C8 (0x0738 - 0x0370)
class UAT_UICookingMenu : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x3C8];                                     // 0x0370(0x03C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICookingMenu");
		return ptr;
	}

};


// Class AT.AT_UICookingMenuShopList
// 0x07D8 (0x0800 - 0x0028)
class UAT_UICookingMenuShopList : public UObject
{
public:
	class AATGameMode*                                 GameMode;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7D0];                                     // 0x0030(0x07D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICookingMenuShopList");
		return ptr;
	}

};


// Class AT.AT_UICookingResult
// 0x0048 (0x03B8 - 0x0370)
class UAT_UICookingResult : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0370(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICookingResult");
		return ptr;
	}

};


// Class AT.AT_UICutinLevelUp
// 0x0058 (0x0408 - 0x03B0)
class UAT_UICutinLevelUp : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICutinLevelUp");
		return ptr;
	}

};


// Class AT.AT_UICutinLevelUp_Lang
// 0x0038 (0x03E8 - 0x03B0)
class UAT_UICutinLevelUp_Lang : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICutinLevelUp_Lang");
		return ptr;
	}

};


// Class AT.AT_UIDamagePop
// 0x0140 (0x04F0 - 0x03B0)
class UAT_UIDamagePop : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x03B0(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIDamagePop");
		return ptr;
	}

};


// Class AT.AT_UIDamagePopManager
// 0x0058 (0x0088 - 0x0030)
class UAT_UIDamagePopManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIDamagePopManager");
		return ptr;
	}

};


// Class AT.AT_UIDebug
// 0x0240 (0x0268 - 0x0028)
class UAT_UIDebug : public UObject
{
public:
	unsigned char                                      UnknownData00[0x240];                                     // 0x0028(0x0240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIDebug");
		return ptr;
	}

};


// Class AT.AT_UIDemoSkipDialog
// 0x0030 (0x0058 - 0x0028)
class UAT_UIDemoSkipDialog : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIDemoSkipDialog");
		return ptr;
	}


	void OnDemoTiming();
};


// Class AT.AT_UIEncEmo
// 0x00C0 (0x0430 - 0x0370)
class UAT_UIEncEmo : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0370(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEncEmo");
		return ptr;
	}

};


// Class AT.AT_UIEncEmoManager
// 0x0050 (0x0080 - 0x0030)
class UAT_UIEncEmoManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEncEmoManager");
		return ptr;
	}

};


// Class AT.ChildWidgetControlData
// 0x0028 (0x0050 - 0x0028)
class UChildWidgetControlData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ChildWidgetControlData");
		return ptr;
	}

};


// Class AT.AT_UIEncounterDirection
// 0x0098 (0x0448 - 0x03B0)
class UAT_UIEncounterDirection : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x03B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEncounterDirection");
		return ptr;
	}

};


// Class AT.AT_UIEncounterDirectionChild
// 0x0040 (0x03B0 - 0x0370)
class UAT_UIEncounterDirectionChild : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEncounterDirectionChild");
		return ptr;
	}

};


// Class AT.AT_UIEncounterHud
// 0x0080 (0x03F0 - 0x0370)
class UAT_UIEncounterHud : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0370(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEncounterHud");
		return ptr;
	}

};


// Class AT.AT_UIEncounterHudCore
// 0x0078 (0x03E8 - 0x0370)
class UAT_UIEncounterHudCore : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0370(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEncounterHudCore");
		return ptr;
	}

};


// Class AT.AT_UIEncounterCharaIcon
// 0x0018 (0x0388 - 0x0370)
class UAT_UIEncounterCharaIcon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEncounterCharaIcon");
		return ptr;
	}

};


// Class AT.AT_UIStateIconCtnBase
// 0x0378 (0x0728 - 0x03B0)
class UAT_UIStateIconCtnBase : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x378];                                     // 0x03B0(0x0378) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStateIconCtnBase");
		return ptr;
	}

};


// Class AT.AT_UIEnemyStateIcon
// 0x0010 (0x0738 - 0x0728)
class UAT_UIEnemyStateIcon : public UAT_UIStateIconCtnBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0728(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEnemyStateIcon");
		return ptr;
	}

};


// Class AT.AT_UIEvaluation
// 0x0040 (0x03F0 - 0x03B0)
class UAT_UIEvaluation : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIEvaluation");
		return ptr;
	}

};


// Class AT.AT_UIFieldBGM
// 0x0028 (0x0398 - 0x0370)
class UAT_UIFieldBGM : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldBGM");
		return ptr;
	}

};


// Class AT.AT_UIFieldCursor
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIFieldCursor : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldCursor");
		return ptr;
	}

};


// Class AT.AT_UIFieldFishing
// 0x0028 (0x0398 - 0x0370)
class UAT_UIFieldFishing : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldFishing");
		return ptr;
	}

};


// Class AT.AT_UIFieldIconActor
// 0x00A0 (0x03D8 - 0x0338)
class AAT_UIFieldIconActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0338(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldIconActor");
		return ptr;
	}

};


// Class AT.AT_UIFieldIconManager
// 0x0410 (0x0440 - 0x0030)
class UAT_UIFieldIconManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x410];                                     // 0x0030(0x0410) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldIconManager");
		return ptr;
	}

};


// Class AT.AT_UIFieldManager
// 0x05B8 (0x05E8 - 0x0030)
class UAT_UIFieldManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x5B8];                                     // 0x0030(0x05B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldManager");
		return ptr;
	}

};


// Class AT.AT_UIFieldMemory
// 0x0078 (0x0428 - 0x03B0)
class UAT_UIFieldMemory : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x03B0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldMemory");
		return ptr;
	}

};


// Class AT.AT_UIFieldNaviWin
// 0x0130 (0x04E0 - 0x03B0)
class UAT_UIFieldNaviWin : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x03B0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldNaviWin");
		return ptr;
	}

};


// Class AT.AT_UIFieldRide
// 0x00D0 (0x0440 - 0x0370)
class UAT_UIFieldRide : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0370(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldRide");
		return ptr;
	}

};


// Class AT.AT_UIFieldRideIcon
// 0x0050 (0x03C0 - 0x0370)
class UAT_UIFieldRideIcon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldRideIcon");
		return ptr;
	}

};


// Class AT.AT_UIFieldSearch
// 0x0070 (0x03E0 - 0x0370)
class UAT_UIFieldSearch : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0370(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldSearch");
		return ptr;
	}

};


// Class AT.AT_UIFieldSearchCore
// 0x0070 (0x03E0 - 0x0370)
class UAT_UIFieldSearchCore : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0370(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldSearchCore");
		return ptr;
	}

};


// Class AT.AT_UIFieldSearchInfo
// 0x0018 (0x0040 - 0x0028)
class UAT_UIFieldSearchInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldSearchInfo");
		return ptr;
	}

};


// Class AT.AT_UIFieldTalkFree
// 0x0180 (0x04F0 - 0x0370)
class UAT_UIFieldTalkFree : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0370(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldTalkFree");
		return ptr;
	}

};


// Class AT.AT_UIFieldTalkFreeCore
// 0x0150 (0x04C0 - 0x0370)
class UAT_UIFieldTalkFreeCore : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0370(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldTalkFreeCore");
		return ptr;
	}

};


// Class AT.AT_UIFieldTalkWin
// 0x00B8 (0x0428 - 0x0370)
class UAT_UIFieldTalkWin : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0370(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIFieldTalkWin");
		return ptr;
	}

};


// Class AT.AT_UIGameover
// 0x00C8 (0x0438 - 0x0370)
class UAT_UIGameover : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0370(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameover");
		return ptr;
	}

};


// Class AT.AT_UIGameoverBar
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIGameoverBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameoverBar");
		return ptr;
	}

};


// Class AT.AT_UIGameTitle
// 0x0188 (0x04F8 - 0x0370)
class UAT_UIGameTitle : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0370(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameTitle");
		return ptr;
	}

};


// Class AT.AT_UIGameTitleList
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIGameTitleList : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameTitleList");
		return ptr;
	}

};


// Class AT.AT_UIGameWindow
// 0x02F0 (0x0660 - 0x0370)
class UAT_UIGameWindow : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2F0];                                     // 0x0370(0x02F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameWindow");
		return ptr;
	}

};


// Class AT.AT_UIGameWindowChoice
// 0x0050 (0x03C0 - 0x0370)
class UAT_UIGameWindowChoice : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameWindowChoice");
		return ptr;
	}

};


// Class AT.AT_UIGameWindowCmuChoice
// 0x0090 (0x0400 - 0x0370)
class UAT_UIGameWindowCmuChoice : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0370(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameWindowCmuChoice");
		return ptr;
	}

};


// Class AT.AT_UISystemWindowState
// 0x0018 (0x0388 - 0x0370)
class UAT_UISystemWindowState : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISystemWindowState");
		return ptr;
	}

};


// Class AT.AT_UIGameWindowCheck
// 0x0020 (0x0390 - 0x0370)
class UAT_UIGameWindowCheck : public UCFUIUserWidget
{
public:
	class UAT_UIXcmnCheckBox*                          CheckBox;                                                 // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0378(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameWindowCheck");
		return ptr;
	}

};


// Class AT.AT_UIGameWindowDetailReward
// 0x0028 (0x0398 - 0x0370)
class UAT_UIGameWindowDetailReward : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameWindowDetailReward");
		return ptr;
	}

};


// Class AT.AT_UIGameWindowLinkList
// 0x0048 (0x03B8 - 0x0370)
class UAT_UIGameWindowLinkList : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0370(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameWindowLinkList");
		return ptr;
	}

};


// Class AT.AT_UIGameWindowListState
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIGameWindowListState : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIGameWindowListState");
		return ptr;
	}

};


// Class AT.AT_UIHudInfo
// 0x0648 (0x0670 - 0x0028)
class UAT_UIHudInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x648];                                     // 0x0028(0x0648) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIHudInfo");
		return ptr;
	}

};


// Class AT.AT_UIIconClear
// 0x0010 (0x03C0 - 0x03B0)
class UAT_UIIconClear : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIIconClear");
		return ptr;
	}

};


// Class AT.AT_UIIconClearS
// 0x0008 (0x03B8 - 0x03B0)
class UAT_UIIconClearS : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIIconClearS");
		return ptr;
	}

};


// Class AT.AT_UIIconItem
// 0x0020 (0x0390 - 0x0370)
class UAT_UIIconItem : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIIconItem");
		return ptr;
	}

};


// Class AT.AT_UIIconLoad
// 0x0010 (0x0380 - 0x0370)
class UAT_UIIconLoad : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIIconLoad");
		return ptr;
	}

};


// Class AT.AT_UIIconNewRecord
// 0x00E8 (0x0498 - 0x03B0)
class UAT_UIIconNewRecord : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x03B0(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIIconNewRecord");
		return ptr;
	}

};


// Class AT.AT_UIIconSave
// 0x0028 (0x0398 - 0x0370)
class UAT_UIIconSave : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIIconSave");
		return ptr;
	}

};


// Class AT.AT_UIImageIcon
// 0x0000 (0x0200 - 0x0200)
class UAT_UIImageIcon : public UImage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIImageIcon");
		return ptr;
	}

};


// Class AT.AT_UIImportantLog
// 0x00C8 (0x00F0 - 0x0028)
class UAT_UIImportantLog : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIImportantLog");
		return ptr;
	}

};


// Class AT.AT_UIInfoArea
// 0x0018 (0x0388 - 0x0370)
class UAT_UIInfoArea : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoArea");
		return ptr;
	}

};


// Class AT.AT_UIInfoEndArea
// 0x0038 (0x03E8 - 0x03B0)
class UAT_UIInfoEndArea : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoEndArea");
		return ptr;
	}

};


// Class AT.AT_UIInfoLevelUp
// 0x0048 (0x03F8 - 0x03B0)
class UAT_UIInfoLevelUp : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoLevelUp");
		return ptr;
	}

};


// Class AT.AT_UIInfoLog
// 0x0068 (0x0418 - 0x03B0)
class UAT_UIInfoLog : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoLog");
		return ptr;
	}

};


// Class AT.AT_UIInfoLog02
// 0x0068 (0x0418 - 0x03B0)
class UAT_UIInfoLog02 : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoLog02");
		return ptr;
	}

};


// Class AT.AT_UIInfoLog02Bar
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIInfoLog02Bar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoLog02Bar");
		return ptr;
	}

};


// Class AT.AT_UIInfoLogBar
// 0x0050 (0x03C0 - 0x0370)
class UAT_UIInfoLogBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoLogBar");
		return ptr;
	}

};


// Class AT.AT_UIInfoLogBar01
// 0x0028 (0x0398 - 0x0370)
class UAT_UIInfoLogBar01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoLogBar01");
		return ptr;
	}

};


// Class AT.AT_UIInfoLogBar02
// 0x0038 (0x03A8 - 0x0370)
class UAT_UIInfoLogBar02 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0370(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoLogBar02");
		return ptr;
	}

};


// Class AT.AT_UIInfoName
// 0x0020 (0x0390 - 0x0370)
class UAT_UIInfoName : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoName");
		return ptr;
	}

};


// Class AT.AT_UIInfoNameCore
// 0x0040 (0x03B0 - 0x0370)
class UAT_UIInfoNameCore : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoNameCore");
		return ptr;
	}

};


// Class AT.AT_UIInfoZOrbLogBar
// 0x0060 (0x0410 - 0x03B0)
class UAT_UIInfoZOrbLogBar : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoZOrbLogBar");
		return ptr;
	}

};


// Class AT.AT_UIInfoZOrbLogBase
// 0x00F8 (0x04A8 - 0x03B0)
class UAT_UIInfoZOrbLogBase : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x03B0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIInfoZOrbLogBase");
		return ptr;
	}

};


// Class AT.AT_UIItemMenu
// 0x0320 (0x0690 - 0x0370)
class UAT_UIItemMenu : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x320];                                     // 0x0370(0x0320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIItemMenu");
		return ptr;
	}

};


// Class AT.AT_UIItemPaletteCustomize
// 0x0098 (0x0408 - 0x0370)
class UAT_UIItemPaletteCustomize : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0370(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIItemPaletteCustomize");
		return ptr;
	}

};


// Class AT.AT_UIItemPaletteBar
// 0x0088 (0x03F8 - 0x0370)
class UAT_UIItemPaletteBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0370(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIItemPaletteBar");
		return ptr;
	}

};


// Class AT.AT_UIKeyHelp
// 0x0380 (0x06F0 - 0x0370)
class UAT_UIKeyHelp : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x380];                                     // 0x0370(0x0380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIKeyHelp");
		return ptr;
	}

};


// Class AT.AT_UILinkBonus
// 0x0030 (0x03A0 - 0x0370)
class UAT_UILinkBonus : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UILinkBonus");
		return ptr;
	}

};


// Class AT.AT_UIListParts
// 0x0020 (0x0390 - 0x0370)
class UAT_UIListParts : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIListParts");
		return ptr;
	}

};


// Class AT.AT_UILockonCursor
// 0x0040 (0x03B0 - 0x0370)
class UAT_UILockonCursor : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UILockonCursor");
		return ptr;
	}

};


// Class AT.AT_UIMapIconFever
// 0x0018 (0x0388 - 0x0370)
class UAT_UIMapIconFever : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapIconFever");
		return ptr;
	}

};


// Class AT.AT_MapIconSwitchBase
// 0x0028 (0x0398 - 0x0370)
class UAT_MapIconSwitchBase : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0380(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_MapIconSwitchBase");
		return ptr;
	}

};


// Class AT.AT_UIMapIconSwitch
// 0x0008 (0x03A0 - 0x0398)
class UAT_UIMapIconSwitch : public UAT_MapIconSwitchBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0398(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapIconSwitch");
		return ptr;
	}

};


// Class AT.AT_UIMapNaviIconSwitch
// 0x0020 (0x0390 - 0x0370)
class UAT_UIMapNaviIconSwitch : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapNaviIconSwitch");
		return ptr;
	}

};


// Class AT.AT_UIMapQuestIconSwitch
// 0x0030 (0x03C8 - 0x0398)
class UAT_UIMapQuestIconSwitch : public UAT_MapIconSwitchBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0398(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapQuestIconSwitch");
		return ptr;
	}

};


// Class AT.AT_UIMapPlayerMarker
// 0x0018 (0x03B0 - 0x0398)
class UAT_UIMapPlayerMarker : public UAT_MapIconSwitchBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0398(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapPlayerMarker");
		return ptr;
	}

};


// Class AT.AT_UIMapDetailTxt
// 0x0020 (0x0390 - 0x0370)
class UAT_UIMapDetailTxt : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapDetailTxt");
		return ptr;
	}

};


// Class AT.AT_UIMapListInfo
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIMapListInfo : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapListInfo");
		return ptr;
	}

};


// Class AT.AT_UIMapM
// 0x08C8 (0x0C78 - 0x03B0)
class UAT_UIMapM : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8C8];                                     // 0x03B0(0x08C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapM");
		return ptr;
	}

};


// Class AT.AT_UIMapManager
// 0x0088 (0x00B0 - 0x0028)
class UAT_UIMapManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapManager");
		return ptr;
	}

};


// Class AT.AT_UIMapMBar
// 0x0010 (0x0380 - 0x0370)
class UAT_UIMapMBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapMBar");
		return ptr;
	}

};


// Class AT.AT_UIMapMSWorld
// 0x0040 (0x03F0 - 0x03B0)
class UAT_UIMapMSWorld : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapMSWorld");
		return ptr;
	}

};


// Class AT.AT_UIMapTex
// 0x0330 (0x06A0 - 0x0370)
class UAT_UIMapTex : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x0370(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapTex");
		return ptr;
	}

};


// Class AT.AT_UIMapWinList
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIMapWinList : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWinList");
		return ptr;
	}

};


// Class AT.ATWorldMapInfo
// 0x0010 (0x0038 - 0x0028)
class UATWorldMapInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWorldMapInfo");
		return ptr;
	}

};


// Class AT.AT_UIMapWorld
// 0x0220 (0x05D0 - 0x03B0)
class UAT_UIMapWorld : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x03B0(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWorld");
		return ptr;
	}

};


// Class AT.AT_UIMapWorldBG
// 0x0080 (0x0430 - 0x03B0)
class UAT_UIMapWorldBG : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWorldBG");
		return ptr;
	}

};


// Class AT.AT_UIMapWorldBorder
// 0x0028 (0x0050 - 0x0028)
class UAT_UIMapWorldBorder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWorldBorder");
		return ptr;
	}

};


// Class AT.AT_UIMapWorldCurs
// 0x0020 (0x0390 - 0x0370)
class UAT_UIMapWorldCurs : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWorldCurs");
		return ptr;
	}

};


// Class AT.AT_UIMapWorldCurs01
// 0x0020 (0x0390 - 0x0370)
class UAT_UIMapWorldCurs01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWorldCurs01");
		return ptr;
	}

};


// Class AT.AT_UIMapWorldEffStory
// 0x0010 (0x03C0 - 0x03B0)
class UAT_UIMapWorldEffStory : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWorldEffStory");
		return ptr;
	}

};


// Class AT.AT_UIMapWorldIcon
// 0x0078 (0x03E8 - 0x0370)
class UAT_UIMapWorldIcon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0370(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWorldIcon");
		return ptr;
	}

};


// Class AT.AT_UIMapWorldWin
// 0x00C0 (0x0430 - 0x0370)
class UAT_UIMapWorldWin : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0370(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMapWorldWin");
		return ptr;
	}

};


// Class AT.AT_UIBar03Choice
// 0x00C8 (0x0438 - 0x0370)
class UAT_UIBar03Choice : public UCFUIUserWidget
{
public:
	int                                                Volume;                                                   // 0x0370(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0374(0x00C4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIBar03Choice");
		return ptr;
	}

};


// Class AT.AT_UIList00Choice
// 0x00C0 (0x0430 - 0x0370)
class UAT_UIList00Choice : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0370(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIList00Choice");
		return ptr;
	}

};


// Class AT.AT_UIList01Choice
// 0x0060 (0x03D0 - 0x0370)
class UAT_UIList01Choice : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0370(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIList01Choice");
		return ptr;
	}

};


// Class AT.AT_UIList03Choice
// 0x0060 (0x03D0 - 0x0370)
class UAT_UIList03Choice : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0370(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIList03Choice");
		return ptr;
	}

};


// Class AT.AT_UIList06Choice
// 0x0078 (0x03E8 - 0x0370)
class UAT_UIList06Choice : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0370(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIList06Choice");
		return ptr;
	}

};


// Class AT.AT_UIMenuWindow
// 0x0098 (0x0408 - 0x0370)
class UAT_UIMenuWindow : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0370(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMenuWindow");
		return ptr;
	}

};


// Class AT.AT_UIMenuWindowChoice
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIMenuWindowChoice : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMenuWindowChoice");
		return ptr;
	}

};


// Class AT.AT_UIMgameFishing
// 0x0150 (0x04C0 - 0x0370)
class UAT_UIMgameFishing : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0370(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMgameFishing");
		return ptr;
	}

};


// Class AT.AT_UIMgameTips
// 0x0020 (0x0390 - 0x0370)
class UAT_UIMgameTips : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMgameTips");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameBar00
// 0x0040 (0x03F0 - 0x03B0)
class UAT_UIMiniGameBar00 : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameBar00");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameBar01
// 0x0038 (0x03A8 - 0x0370)
class UAT_UIMiniGameBar01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0370(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameBar01");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameBaseball
// 0x0070 (0x0420 - 0x03B0)
class UAT_UIMiniGameBaseball : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x03B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameBaseball");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameBaseballCircle
// 0x0038 (0x03E8 - 0x03B0)
class UAT_UIMiniGameBaseballCircle : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameBaseballCircle");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameBaseballCursor
// 0x0068 (0x0418 - 0x03B0)
class UAT_UIMiniGameBaseballCursor : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameBaseballCursor");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameBaseballList
// 0x0030 (0x03E0 - 0x03B0)
class UAT_UIMiniGameBaseballList : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameBaseballList");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameBaseballRecord
// 0x0080 (0x0430 - 0x03B0)
class UAT_UIMiniGameBaseballRecord : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x03B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameBaseballRecord");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameCutinBaseball
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIMiniGameCutinBaseball : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameCutinBaseball");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameCutinRace
// 0x00A8 (0x0418 - 0x0370)
class UAT_UIMiniGameCutinRace : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0370(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameCutinRace");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameEnemiesBase_Gauge
// 0x0070 (0x03E0 - 0x0370)
class UAT_UIMiniGameEnemiesBase_Gauge : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0370(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameEnemiesBase_Gauge");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameHunt
// 0x0090 (0x0400 - 0x0370)
class UAT_UIMiniGameHunt : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0370(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameHunt");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameHunt_Gauge
// 0x0058 (0x03C8 - 0x0370)
class UAT_UIMiniGameHunt_Gauge : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0370(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameHunt_Gauge");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameManager
// 0x0050 (0x0080 - 0x0030)
class UAT_UIMiniGameManager : public UBaseObject
{
public:
	class UMinigameDataTableAccessor*                  MinigameDataTableAccessor;                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameManager");
		return ptr;
	}

};


// Class AT.AT_UIMiniGamePop
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIMiniGamePop : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGamePop");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameRace
// 0x00F0 (0x0460 - 0x0370)
class UAT_UIMiniGameRace : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0370(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameRace");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameRaceList
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIMiniGameRaceList : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameRaceList");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameResult
// 0x01E0 (0x0550 - 0x0370)
class UAT_UIMiniGameResult : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0370(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameResult");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameTime
// 0x00D0 (0x0440 - 0x0370)
class UAT_UIMiniGameTime : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0370(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameTime");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameTop
// 0x00B8 (0x0428 - 0x0370)
class UAT_UIMiniGameTop : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0370(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameTop");
		return ptr;
	}

};


// Class AT.AT_UIMiniGameWin00
// 0x00F0 (0x0460 - 0x0370)
class UAT_UIMiniGameWin00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0370(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniGameWin00");
		return ptr;
	}

};


// Class AT.AT_UIMiniMapRadar
// 0x0558 (0x0908 - 0x03B0)
class UAT_UIMiniMapRadar : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x558];                                     // 0x03B0(0x0558) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniMapRadar");
		return ptr;
	}

};


// Class AT.AT_UIMiniMapSub_DB
// 0x00D8 (0x0100 - 0x0028)
class UAT_UIMiniMapSub_DB : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniMapSub_DB");
		return ptr;
	}

};


// Class AT.AT_UIMiniMapIcon
// 0x0078 (0x00A0 - 0x0028)
class UAT_UIMiniMapIcon : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniMapIcon");
		return ptr;
	}

};


// Class AT.AT_UIMiniMapNaviIcon
// 0x0068 (0x0108 - 0x00A0)
class UAT_UIMiniMapNaviIcon : public UAT_UIMiniMapIcon
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00A0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIMiniMapNaviIcon");
		return ptr;
	}

};


// Class AT.AT_UINotificationManager
// 0x0120 (0x0220 - 0x0100)
class UAT_UINotificationManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0100(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UINotificationManager");
		return ptr;
	}

};


// Class AT.AT_UINumber
// 0x0000 (0x0370 - 0x0370)
class UAT_UINumber : public UCFUIUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UINumber");
		return ptr;
	}

};


// Class AT.AT_UIPlayerStateIcon
// 0x0040 (0x0768 - 0x0728)
class UAT_UIPlayerStateIcon : public UAT_UIStateIconCtnBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0728(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIPlayerStateIcon");
		return ptr;
	}

};


// Class AT.AT_UIPopularGage
// 0x00E8 (0x0458 - 0x0370)
class UAT_UIPopularGage : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0370(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIPopularGage");
		return ptr;
	}

};


// Class AT.AT_UIPopularGageMemory
// 0x0018 (0x0388 - 0x0370)
class UAT_UIPopularGageMemory : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIPopularGageMemory");
		return ptr;
	}

};


// Class AT.AT_UIQteTingGauge
// 0x0008 (0x03B8 - 0x03B0)
class UAT_UIQteTingGauge : public UATUIUserWidget
{
public:
	class UImage*                                      Ins_Gauge;                                                // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQteTingGauge");
		return ptr;
	}

};


// Class AT.AT_UIQteChaseAttack
// 0x00F0 (0x04A0 - 0x03B0)
class UAT_UIQteChaseAttack : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x03B0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQteChaseAttack");
		return ptr;
	}

};


// Class AT.AT_UIQteBarrage
// 0x0068 (0x0418 - 0x03B0)
class UAT_UIQteBarrage : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQteBarrage");
		return ptr;
	}

};


// Class AT.AT_UIQteManager
// 0x0000 (0x0100 - 0x0100)
class UAT_UIQteManager : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQteManager");
		return ptr;
	}

};


// Class AT.AT_UIQuestImg
// 0x0188 (0x04F8 - 0x0370)
class UAT_UIQuestImg : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0370(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestImg");
		return ptr;
	}

};


// Class AT.AT_UIQuestMainClear
// 0x0080 (0x03F0 - 0x0370)
class UAT_UIQuestMainClear : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0370(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestMainClear");
		return ptr;
	}

};


// Class AT.AT_UIQuestMainClearBar
// 0x00C0 (0x0430 - 0x0370)
class UAT_UIQuestMainClearBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0370(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestMainClearBar");
		return ptr;
	}

};


// Class AT.AT_UIQuestMainClearDetail
// 0x0080 (0x03F0 - 0x0370)
class UAT_UIQuestMainClearDetail : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0370(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestMainClearDetail");
		return ptr;
	}

};


// Class AT.AT_UIQuestMainClearRank
// 0x0138 (0x04A8 - 0x0370)
class UAT_UIQuestMainClearRank : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0370(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestMainClearRank");
		return ptr;
	}

};


// Class AT.AT_UIQuestMainLogo
// 0x0030 (0x03E0 - 0x03B0)
class UAT_UIQuestMainLogo : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestMainLogo");
		return ptr;
	}

};


// Class AT.AT_UIQuestMainStart
// 0x0040 (0x03F0 - 0x03B0)
class UAT_UIQuestMainStart : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestMainStart");
		return ptr;
	}

};


// Class AT.AT_UIQuestMainTelop
// 0x00A0 (0x0410 - 0x0370)
class UAT_UIQuestMainTelop : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0370(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestMainTelop");
		return ptr;
	}

};


// Class AT.AT_UIQuestNavigation
// 0x0480 (0x0830 - 0x03B0)
class UAT_UIQuestNavigation : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x480];                                     // 0x03B0(0x0480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestNavigation");
		return ptr;
	}

};


// Class AT.AT_UIQuestNavigationListItem
// 0x0058 (0x0408 - 0x03B0)
class UAT_UIQuestNavigationListItem : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestNavigationListItem");
		return ptr;
	}

};


// Class AT.AT_UIQuestNavigationExMarkEff
// 0x0010 (0x03C0 - 0x03B0)
class UAT_UIQuestNavigationExMarkEff : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestNavigationExMarkEff");
		return ptr;
	}

};


// Class AT.AT_UIQuestRetry
// 0x0388 (0x0738 - 0x03B0)
class UAT_UIQuestRetry : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x388];                                     // 0x03B0(0x0388) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestRetry");
		return ptr;
	}

};


// Class AT.AT_UIQuestRetryBar
// 0x0030 (0x0460 - 0x0430)
class UAT_UIQuestRetryBar : public UAT_UIList00Choice
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0430(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestRetryBar");
		return ptr;
	}

};


// Class AT.AT_UIQuestRetryInfo
// 0x0020 (0x03D0 - 0x03B0)
class UAT_UIQuestRetryInfo : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestRetryInfo");
		return ptr;
	}

};


// Class AT.AT_UIQuestRetryList
// 0x0020 (0x0498 - 0x0478)
class UAT_UIQuestRetryList : public UAT_UIMenuListBase00
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0478(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestRetryList");
		return ptr;
	}

};


// Class AT.AT_UIQuestSub
// 0x01B8 (0x0528 - 0x0370)
class UAT_UIQuestSub : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1B8];                                     // 0x0370(0x01B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestSub");
		return ptr;
	}

};


// Class AT.AT_UIQuestSubReward
// 0x00F8 (0x0468 - 0x0370)
class UAT_UIQuestSubReward : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0370(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIQuestSubReward");
		return ptr;
	}

};


// Class AT.AT_UIRewardBar
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIRewardBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIRewardBar");
		return ptr;
	}

};


// Class AT.AT_UIRewardBarCommu
// 0x0080 (0x03F0 - 0x0370)
class UAT_UIRewardBarCommu : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0370(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIRewardBarCommu");
		return ptr;
	}

};


// Class AT.AT_UIScreenCapture
// 0x0040 (0x0068 - 0x0028)
class UAT_UIScreenCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIScreenCapture");
		return ptr;
	}

};


// Class AT.AT_UIScrollBar
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIScrollBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIScrollBar");
		return ptr;
	}

};


// Class AT.AT_UIScrollText
// 0x0058 (0x0408 - 0x03B0)
class UAT_UIScrollText : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x03B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIScrollText");
		return ptr;
	}

};


// Class AT.AT_UIShopCmnMoney
// 0x0050 (0x03C0 - 0x0370)
class UAT_UIShopCmnMoney : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopCmnMoney");
		return ptr;
	}

};


// Class AT.AT_UIShopCommon
// 0x0160 (0x04D0 - 0x0370)
class UAT_UIShopCommon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0370(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopCommon");
		return ptr;
	}

};


// Class AT.AT_UIShopCustomColorItem
// 0x0018 (0x0388 - 0x0370)
class UAT_UIShopCustomColorItem : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopCustomColorItem");
		return ptr;
	}

};


// Class AT.AT_UIShopCustomColor
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIShopCustomColor : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopCustomColor");
		return ptr;
	}

};


// Class AT.AT_UIShopDevelop
// 0x0260 (0x05D0 - 0x0370)
class UAT_UIShopDevelop : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0370(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopDevelop");
		return ptr;
	}

};


// Class AT.AT_UIShopDevelopCustom
// 0x0870 (0x0BE0 - 0x0370)
class UAT_UIShopDevelopCustom : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x870];                                     // 0x0370(0x0870) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopDevelopCustom");
		return ptr;
	}

};


// Class AT.AT_UIShopDevelopResult
// 0x00C8 (0x0438 - 0x0370)
class UAT_UIShopDevelopResult : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0370(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopDevelopResult");
		return ptr;
	}

};


// Class AT.AT_UIShopDevParam
// 0x00E8 (0x0458 - 0x0370)
class UAT_UIShopDevParam : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0370(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopDevParam");
		return ptr;
	}

};


// Class AT.AT_UIShopDevGauge
// 0x0070 (0x03E0 - 0x0370)
class UAT_UIShopDevGauge : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0370(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopDevGauge");
		return ptr;
	}

};


// Class AT.AT_UIShopInfo
// 0x00E0 (0x0490 - 0x03B0)
class UAT_UIShopInfo : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x03B0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopInfo");
		return ptr;
	}

};


// Class AT.AT_UIShopTop
// 0x0108 (0x0478 - 0x0370)
class UAT_UIShopTop : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0370(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopTop");
		return ptr;
	}

};


// Class AT.AT_UIShopTop01
// 0x0018 (0x0490 - 0x0478)
class UAT_UIShopTop01 : public UAT_UIShopTop
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0478(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopTop01");
		return ptr;
	}

};


// Class AT.AT_UIShopTraining
// 0x0450 (0x0800 - 0x03B0)
class UAT_UIShopTraining : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x450];                                     // 0x03B0(0x0450) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopTraining");
		return ptr;
	}

};


// Class AT.AT_UIShopTraining00
// 0x0110 (0x0480 - 0x0370)
class UAT_UIShopTraining00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0370(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopTraining00");
		return ptr;
	}

};


// Class AT.AT_UIShopTraining01
// 0x01A8 (0x0518 - 0x0370)
class UAT_UIShopTraining01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0370(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopTraining01");
		return ptr;
	}

};


// Class AT.AT_UIShopTraining02
// 0x0198 (0x0548 - 0x03B0)
class UAT_UIShopTraining02 : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x03B0(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIShopTraining02");
		return ptr;
	}

};


// Class AT.AT_UISkillChain
// 0x00C0 (0x0470 - 0x03B0)
class UAT_UISkillChain : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x03B0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillChain");
		return ptr;
	}

};


// Class AT.AT_UISkillChainEffect
// 0x0000 (0x0370 - 0x0370)
class UAT_UISkillChainEffect : public UCFUIUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillChainEffect");
		return ptr;
	}

};


// Class AT.AT_UISkillCustomize
// 0x03C0 (0x0730 - 0x0370)
class UAT_UISkillCustomize : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x3C0];                                     // 0x0370(0x03C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillCustomize");
		return ptr;
	}

};


// Class AT.AT_UISkillCustomizePlate
// 0x0090 (0x0400 - 0x0370)
class UAT_UISkillCustomizePlate : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0370(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillCustomizePlate");
		return ptr;
	}

};


// Class AT.AT_UISkillEnemyIcon
// 0x0088 (0x03F8 - 0x0370)
class UAT_UISkillEnemyIcon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0370(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillEnemyIcon");
		return ptr;
	}

};


// Class AT.AT_UISkillEnemySmallIcon
// 0x0070 (0x03E0 - 0x0370)
class UAT_UISkillEnemySmallIcon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0370(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillEnemySmallIcon");
		return ptr;
	}

};


// Class AT.AT_UISkillName
// 0x0060 (0x0410 - 0x03B0)
class UAT_UISkillName : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillName");
		return ptr;
	}

};


// Class AT.AT_UISkillTree
// 0x12A0 (0x1650 - 0x03B0)
class UAT_UISkillTree : public UATUIUserWidget
{
public:
	class UImage*                                      Ins_Connect00;                                            // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAT_UISkillTreePanel*                        Skilltree_Panel;                                          // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAT_UISkillTreePanel*                        Skilltree_Panel_S;                                        // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAT_UISkillTreeCursor*                       Skilltree_Cursor;                                         // 0x03C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1280];                                    // 0x03D0(0x1280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillTree");
		return ptr;
	}

};


// Class AT.AT_UISkillTreeCursor
// 0x0038 (0x03E8 - 0x03B0)
class UAT_UISkillTreeCursor : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03B0(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillTreeCursor");
		return ptr;
	}

};


// Class AT.AT_UISkillTreeMenu
// 0x0118 (0x04C8 - 0x03B0)
class UAT_UISkillTreeMenu : public UATUIUserWidget
{
public:
	class UAT_UIXcmnBg*                                Xmenu_Bg;                                                 // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x110];                                     // 0x03B8(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillTreeMenu");
		return ptr;
	}

};


// Class AT.AT_UISkillTreePanel
// 0x00D8 (0x0448 - 0x0370)
class UAT_UISkillTreePanel : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0370(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillTreePanel");
		return ptr;
	}

};


// Class AT.AT_UISkillTreeLine
// 0x0020 (0x0048 - 0x0028)
class UAT_UISkillTreeLine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkillTreeLine");
		return ptr;
	}

};


// Class AT.AT_UISkilltreeZorb
// 0x0020 (0x03D0 - 0x03B0)
class UAT_UISkilltreeZorb : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET
	class UImage*                                      Ins_Item;                                                 // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISkilltreeZorb");
		return ptr;
	}

};


// Class AT.AT_UIStartChar
// 0x0128 (0x0498 - 0x0370)
class UAT_UIStartChar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0370(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartChar");
		return ptr;
	}

};


// Class AT.AT_UIStartCharBar
// 0x0088 (0x03F8 - 0x0370)
class UAT_UIStartCharBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0370(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartCharBar");
		return ptr;
	}

};


// Class AT.AT_UIStartCommuDetail
// 0x0198 (0x0508 - 0x0370)
class UAT_UIStartCommuDetail : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x0370(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartCommuDetail");
		return ptr;
	}

};


// Class AT.AT_UICommunityDetailPresentButton
// 0x0068 (0x03D8 - 0x0370)
class UAT_UICommunityDetailPresentButton : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICommunityDetailPresentButton");
		return ptr;
	}

};


// Class AT.AT_UIStartDragonBallBtnWish
// 0x0060 (0x0410 - 0x03B0)
class UAT_UIStartDragonBallBtnWish : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartDragonBallBtnWish");
		return ptr;
	}

};


// Class AT.AT_UIStartDragonBallMenu
// 0x01A8 (0x0558 - 0x03B0)
class UAT_UIStartDragonBallMenu : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x03B0(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartDragonBallMenu");
		return ptr;
	}

};


// Class AT.AT_UIStartDragonBallMenuBar
// 0x00D0 (0x0480 - 0x03B0)
class UAT_UIStartDragonBallMenuBar : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x03B0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartDragonBallMenuBar");
		return ptr;
	}

};


// Class AT.AT_UIStartItemWin00
// 0x0048 (0x03F8 - 0x03B0)
class UAT_UIStartItemWin00 : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartItemWin00");
		return ptr;
	}

};


// Class AT.AT_UIStartOption
// 0x0428 (0x0798 - 0x0370)
class UAT_UIStartOption : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x428];                                     // 0x0370(0x0428) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartOption");
		return ptr;
	}

};


// Class AT.AT_UIStartParty
// 0x0330 (0x06A0 - 0x0370)
class UAT_UIStartParty : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x0370(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartParty");
		return ptr;
	}

};


// Class AT.AT_UIStartPartyBarGauge
// 0x0058 (0x0080 - 0x0028)
class UAT_UIStartPartyBarGauge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartPartyBarGauge");
		return ptr;
	}

};


// Class AT.AT_UIStartPartyBarStatus
// 0x0038 (0x0060 - 0x0028)
class UAT_UIStartPartyBarStatus : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartPartyBarStatus");
		return ptr;
	}

};


// Class AT.AT_UIStartPartyBar
// 0x03D0 (0x0740 - 0x0370)
class UAT_UIStartPartyBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x3D0];                                     // 0x0370(0x03D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartPartyBar");
		return ptr;
	}

};


// Class AT.AT_UIStartPartyList
// 0x0058 (0x03C8 - 0x0370)
class UAT_UIStartPartyList : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0370(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartPartyList");
		return ptr;
	}

};


// Class AT.AT_UIStartQuest
// 0x0718 (0x0A88 - 0x0370)
class UAT_UIStartQuest : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x718];                                     // 0x0370(0x0718) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartQuest");
		return ptr;
	}

};


// Class AT.AT_UIStartQuestBar
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIStartQuestBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartQuestBar");
		return ptr;
	}

};


// Class AT.AT_UIStartSaveLoad
// 0x0090 (0x0400 - 0x0370)
class UAT_UIStartSaveLoad : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0370(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartSaveLoad");
		return ptr;
	}

};


// Class AT.AT_UIStartSaveLoadBar
// 0x0118 (0x0488 - 0x0370)
class UAT_UIStartSaveLoadBar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0370(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartSaveLoadBar");
		return ptr;
	}

};


// Class AT.AT_UIStartStatus
// 0x0220 (0x0590 - 0x0370)
class UAT_UIStartStatus : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0370(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartStatus");
		return ptr;
	}

};


// Class AT.AT_UIStartStatusGauge
// 0x0018 (0x0388 - 0x0370)
class UAT_UIStartStatusGauge : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartStatusGauge");
		return ptr;
	}

};


// Class AT.AT_UIStartStatusBarGauge
// 0x0048 (0x0070 - 0x0028)
class UAT_UIStartStatusBarGauge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartStatusBarGauge");
		return ptr;
	}

};


// Class AT.AT_UIStartStatusHud
// 0x0060 (0x03D0 - 0x0370)
class UAT_UIStartStatusHud : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0370(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartStatusHud");
		return ptr;
	}

};


// Class AT.AT_UIStartStatusList00
// 0x0010 (0x0380 - 0x0370)
class UAT_UIStartStatusList00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartStatusList00");
		return ptr;
	}

};


// Class AT.AT_UIStartStatusList01
// 0x0070 (0x03E0 - 0x0370)
class UAT_UIStartStatusList01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0370(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartStatusList01");
		return ptr;
	}

};


// Class AT.AT_UIStartStatusList02
// 0x0010 (0x0380 - 0x0370)
class UAT_UIStartStatusList02 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartStatusList02");
		return ptr;
	}

};


// Class AT.AT_UIStartTips
// 0x0718 (0x0A88 - 0x0370)
class UAT_UIStartTips : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x718];                                     // 0x0370(0x0718) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartTips");
		return ptr;
	}

};


// Class AT.AT_UIStartTopListZ
// 0x0018 (0x0388 - 0x0370)
class UAT_UIStartTopListZ : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartTopListZ");
		return ptr;
	}

};


// Class AT.AT_UIStartTop
// 0x0248 (0x05B8 - 0x0370)
class UAT_UIStartTop : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0370(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartTop");
		return ptr;
	}

};


// Class AT.AT_UIStartTopCloud
// 0x0020 (0x0390 - 0x0370)
class UAT_UIStartTopCloud : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartTopCloud");
		return ptr;
	}

};


// Class AT.AT_UIStartTopList
// 0x0120 (0x0490 - 0x0370)
class UAT_UIStartTopList : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0370(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartTopList");
		return ptr;
	}

};


// Class AT.AT_UIStartTopState
// 0x0110 (0x04C0 - 0x03B0)
class UAT_UIStartTopState : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x03B0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStartTopState");
		return ptr;
	}

};


// Class AT.AT_UIStateIcon
// 0x0148 (0x04B8 - 0x0370)
class UAT_UIStateIcon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0370(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIStateIcon");
		return ptr;
	}

};


// Class AT.AT_UISystemWindow
// 0x0120 (0x0490 - 0x0370)
class UAT_UISystemWindow : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0370(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISystemWindow");
		return ptr;
	}

};


// Class AT.AT_UISystemWindowChoice
// 0x0040 (0x03B0 - 0x0370)
class UAT_UISystemWindowChoice : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UISystemWindowChoice");
		return ptr;
	}

};


// Class AT.AT_UITelopManager
// 0x0050 (0x0080 - 0x0030)
class UAT_UITelopManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITelopManager");
		return ptr;
	}

};


// Class AT.AT_UITelopTxt
// 0x0058 (0x03C8 - 0x0370)
class UAT_UITelopTxt : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0370(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITelopTxt");
		return ptr;
	}

};


// Class AT.AT_UITips
// 0x0150 (0x04C0 - 0x0370)
class UAT_UITips : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0370(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITips");
		return ptr;
	}

};


// Class AT.AT_UITipsWin
// 0x0268 (0x05D8 - 0x0370)
class UAT_UITipsWin : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x268];                                     // 0x0370(0x0268) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITipsWin");
		return ptr;
	}

};


// Class AT.AT_UITotalDamage
// 0x0060 (0x0410 - 0x03B0)
class UAT_UITotalDamage : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x03B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITotalDamage");
		return ptr;
	}

};


// Class AT.AT_UITPSSkill
// 0x0018 (0x0048 - 0x0030)
class UAT_UITPSSkill : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITPSSkill");
		return ptr;
	}

};


// Class AT.AT_UITPSSkillCursor
// 0x0018 (0x03C8 - 0x03B0)
class UAT_UITPSSkillCursor : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITPSSkillCursor");
		return ptr;
	}

};


// Class AT.AT_UITPSSkillCursorTypeA
// 0x0078 (0x0440 - 0x03C8)
class UAT_UITPSSkillCursorTypeA : public UAT_UITPSSkillCursor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x03C8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITPSSkillCursorTypeA");
		return ptr;
	}

};


// Class AT.AT_UITPSLockOnMark
// 0x0060 (0x03D0 - 0x0370)
class UAT_UITPSLockOnMark : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0370(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITPSLockOnMark");
		return ptr;
	}

};


// Class AT.AT_UITrialClear
// 0x0048 (0x03F8 - 0x03B0)
class UAT_UITrialClear : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UITrialClear");
		return ptr;
	}

};


// Class AT.AT_UIUtil
// 0x0000 (0x0028 - 0x0028)
class UAT_UIUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIUtil");
		return ptr;
	}


	void STATIC_SettoUICommonInput();
	void STATIC_DebugChangeLangage();
};


// Class AT.AT_UIWindowManager
// 0x0048 (0x0070 - 0x0028)
class UAT_UIWindowManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIWindowManager");
		return ptr;
	}

};


// Class AT.AT_UIWindRoad
// 0x0078 (0x00A0 - 0x0028)
class UAT_UIWindRoad : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIWindRoad");
		return ptr;
	}

};


// Class AT.AT_UIXcmnAgreement
// 0x0250 (0x05C0 - 0x0370)
class UAT_UIXcmnAgreement : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x250];                                     // 0x0370(0x0250) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnAgreement");
		return ptr;
	}

};


// Class AT.AT_UIXcmnArrow
// 0x0040 (0x03B0 - 0x0370)
class UAT_UIXcmnArrow : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnArrow");
		return ptr;
	}

};


// Class AT.AT_UIXcmnBg
// 0x0050 (0x03C0 - 0x0370)
class UAT_UIXcmnBg : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnBg");
		return ptr;
	}

};


// Class AT.AT_UIXcmnCheckBox
// 0x0028 (0x0398 - 0x0370)
class UAT_UIXcmnCheckBox : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnCheckBox");
		return ptr;
	}

};


// Class AT.AT_UIXcmnCredit
// 0x0130 (0x04E0 - 0x03B0)
class UAT_UIXcmnCredit : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x03B0(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnCredit");
		return ptr;
	}

};


// Class AT.AT_UIXCmnDistance
// 0x0010 (0x0380 - 0x0370)
class UAT_UIXCmnDistance : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXCmnDistance");
		return ptr;
	}

};


// Class AT.AT_UIXCmnEmb
// 0x0058 (0x03C8 - 0x0370)
class UAT_UIXCmnEmb : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0370(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXCmnEmb");
		return ptr;
	}

};


// Class AT.AT_UIXCmnEmb01
// 0x0040 (0x03B0 - 0x0370)
class UAT_UIXCmnEmb01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXCmnEmb01");
		return ptr;
	}

};


// Class AT.AT_UIXCmnEmb_Cursor
// 0x0078 (0x03E8 - 0x0370)
class UAT_UIXCmnEmb_Cursor : public UCFUIUserWidget
{
public:
	class UImage*                                      Ins_Icon_Leader;                                          // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0378(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXCmnEmb_Cursor");
		return ptr;
	}

};


// Class AT.AT_UIXCmnEmb_Reality
// 0x0070 (0x03E0 - 0x0370)
class UAT_UIXCmnEmb_Reality : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0370(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXCmnEmb_Reality");
		return ptr;
	}

};


// Class AT.AT_UIXcmnEmbGet
// 0x0050 (0x0400 - 0x03B0)
class UAT_UIXcmnEmbGet : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnEmbGet");
		return ptr;
	}

};


// Class AT.AT_UIXcmnEmbGetParts
// 0x0028 (0x03D8 - 0x03B0)
class UAT_UIXcmnEmbGetParts : public UATUIUserWidget
{
public:
	class UAT_UIXCmnEmb*                               Xcmn_Emb00;                                               // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x03B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnEmbGetParts");
		return ptr;
	}

};


// Class AT.AT_UIXcmnFadeBlur
// 0x0028 (0x0398 - 0x0370)
class UAT_UIXcmnFadeBlur : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnFadeBlur");
		return ptr;
	}

};


// Class AT.AT_UIXCmnHeader
// 0x0178 (0x04E8 - 0x0370)
class UAT_UIXCmnHeader : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0370(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXCmnHeader");
		return ptr;
	}

};


// Class AT.AT_UIXcmnHeaderS
// 0x0030 (0x03E0 - 0x03B0)
class UAT_UIXcmnHeaderS : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03B0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnHeaderS");
		return ptr;
	}

};


// Class AT.AT_UIXcmnIconOperation
// 0x0010 (0x03C0 - 0x03B0)
class UAT_UIXcmnIconOperation : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnIconOperation");
		return ptr;
	}

};


// Class AT.AT_UIXcmnInstall
// 0x0048 (0x03B8 - 0x0370)
class UAT_UIXcmnInstall : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0370(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnInstall");
		return ptr;
	}

};


// Class AT.AT_UIXcmnMultiLineTextFitBox
// 0x0030 (0x03A0 - 0x0370)
class UAT_UIXcmnMultiLineTextFitBox : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnMultiLineTextFitBox");
		return ptr;
	}

};


// Class AT.AT_UIXCmnPause
// 0x0138 (0x04A8 - 0x0370)
class UAT_UIXCmnPause : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0370(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXCmnPause");
		return ptr;
	}

};


// Class AT.AT_UIXcmnPlatBtn
// 0x00E0 (0x0450 - 0x0370)
class UAT_UIXcmnPlatBtn : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0370(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnPlatBtn");
		return ptr;
	}

};


// Class AT.AT_UIXcmnSystemIcon
// 0x0098 (0x0408 - 0x0370)
class UAT_UIXcmnSystemIcon : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0370(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnSystemIcon");
		return ptr;
	}

};


// Class AT.AT_UIXcmnWin02
// 0x00F0 (0x0460 - 0x0370)
class UAT_UIXcmnWin02 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0370(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnWin02");
		return ptr;
	}

};


// Class AT.AT_UIXcmnWin02List00
// 0x0080 (0x03F0 - 0x0370)
class UAT_UIXcmnWin02List00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0370(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnWin02List00");
		return ptr;
	}

};


// Class AT.AT_UIXcmnWin02List01
// 0x0018 (0x0388 - 0x0370)
class UAT_UIXcmnWin02List01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnWin02List01");
		return ptr;
	}

};


// Class AT.AT_UIXcmnSystemDialog
// 0x0048 (0x03B8 - 0x0370)
class UAT_UIXcmnSystemDialog : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0370(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXcmnSystemDialog");
		return ptr;
	}

};


// Class AT.AT_UIXefShine
// 0x0008 (0x03B8 - 0x03B0)
class UAT_UIXefShine : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXefShine");
		return ptr;
	}

};


// Class AT.AT_UIXList_Detail00
// 0x0028 (0x0398 - 0x0370)
class UAT_UIXList_Detail00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXList_Detail00");
		return ptr;
	}

};


// Class AT.AT_UIXlist_List05
// 0x0030 (0x0460 - 0x0430)
class UAT_UIXlist_List05 : public UAT_UIList00Choice
{
public:
	class UImage*                                      Ins_Icon_Skill;                                           // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0438(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXlist_List05");
		return ptr;
	}

};


// Class AT.AT_UIXmenuCurs00
// 0x0020 (0x0390 - 0x0370)
class UAT_UIXmenuCurs00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXmenuCurs00");
		return ptr;
	}

};


// Class AT.AT_UIXListBar01
// 0x00E0 (0x0450 - 0x0370)
class UAT_UIXListBar01 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0370(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXListBar01");
		return ptr;
	}

};


// Class AT.AT_UIXlistBar04
// 0x00B0 (0x0420 - 0x0370)
class UAT_UIXlistBar04 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0370(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXlistBar04");
		return ptr;
	}

};


// Class AT.AT_UIXlistBar05
// 0x0068 (0x0418 - 0x03B0)
class UAT_UIXlistBar05 : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x03B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXlistBar05");
		return ptr;
	}

};


// Class AT.AT_UIXlistCond
// 0x0018 (0x03C8 - 0x03B0)
class UAT_UIXlistCond : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXlistCond");
		return ptr;
	}

};


// Class AT.AT_UIXlistCustom00Item
// 0x0078 (0x03E8 - 0x0370)
class UAT_UIXlistCustom00Item : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0370(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXlistCustom00Item");
		return ptr;
	}

};


// Class AT.AT_UIXlistCustom00
// 0x0050 (0x03C0 - 0x0370)
class UAT_UIXlistCustom00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXlistCustom00");
		return ptr;
	}

};


// Class AT.AT_UICustom00MenuList10
// 0x0000 (0x03C0 - 0x03C0)
class UAT_UICustom00MenuList10 : public UAT_UIXlistCustom00
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UICustom00MenuList10");
		return ptr;
	}

};


// Class AT.AT_UIXlistList05Lay7
// 0x0010 (0x0488 - 0x0478)
class UAT_UIXlistList05Lay7 : public UAT_UIMenuListBase00
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0478(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXlistList05Lay7");
		return ptr;
	}

};


// Class AT.AT_UIXmenuCommu
// 0x0068 (0x03D8 - 0x0370)
class UAT_UIXmenuCommu : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0370(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXmenuCommu");
		return ptr;
	}

};


// Class AT.AT_UIIconStar
// 0x0040 (0x03B0 - 0x0370)
class UAT_UIIconStar : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIIconStar");
		return ptr;
	}

};


// Class AT.AT_UIXtexPartsDb00
// 0x0018 (0x0388 - 0x0370)
class UAT_UIXtexPartsDb00 : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIXtexPartsDb00");
		return ptr;
	}

};


// Class AT.AT_UIZCWCompletion
// 0x0050 (0x0400 - 0x03B0)
class UAT_UIZCWCompletion : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIZCWCompletion");
		return ptr;
	}

};


// Class AT.AT_UIZCWNaviMore
// 0x0008 (0x0378 - 0x0370)
class UAT_UIZCWNaviMore : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIZCWNaviMore");
		return ptr;
	}

};


// Class AT.AT_UIZCWNavigation
// 0x0170 (0x04E0 - 0x0370)
class UAT_UIZCWNavigation : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x170];                                     // 0x0370(0x0170) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIZCWNavigation");
		return ptr;
	}

};


// Class AT.AT_UIZCWNaviItem
// 0x0050 (0x03C0 - 0x0370)
class UAT_UIZCWNaviItem : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0370(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_UIZCWNaviItem");
		return ptr;
	}

};


// Class AT.AT_WaterNotifyState
// 0x0058 (0x0088 - 0x0030)
class UAT_WaterNotifyState : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_WaterNotifyState");
		return ptr;
	}

};


// Class AT.ATActBase
// 0x0088 (0x00B0 - 0x0028)
class UATActBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActBase");
		return ptr;
	}

};


// Class AT.ATActMontageId
// 0x0018 (0x00C8 - 0x00B0)
class UATActMontageId : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActMontageId");
		return ptr;
	}

};


// Class AT.ATActAccessPointGet
// 0x0000 (0x00C8 - 0x00C8)
class UATActAccessPointGet : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActAccessPointGet");
		return ptr;
	}

};


// Class AT.ATActAccessPointLook
// 0x0008 (0x00D0 - 0x00C8)
class UATActAccessPointLook : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActAccessPointLook");
		return ptr;
	}

};


// Class AT.ATActAccessPointMineralSearch
// 0x0008 (0x00B8 - 0x00B0)
class UATActAccessPointMineralSearch : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActAccessPointMineralSearch");
		return ptr;
	}

};


// Class AT.ATActAnimalCapture
// 0x0088 (0x0150 - 0x00C8)
class UATActAnimalCapture : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00C8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActAnimalCapture");
		return ptr;
	}

};


// Class AT.ATActAuraWait_LP
// 0x0000 (0x00C8 - 0x00C8)
class UATActAuraWait_LP : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActAuraWait_LP");
		return ptr;
	}

};


// Class AT.ATActAuraWait_ST
// 0x0000 (0x00C8 - 0x00C8)
class UATActAuraWait_ST : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActAuraWait_ST");
		return ptr;
	}

};


// Class AT.ATActAvoid
// 0x0098 (0x0148 - 0x00B0)
class UATActAvoid : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00B0(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActAvoid");
		return ptr;
	}

};


// Class AT.ATActBaseballBatter
// 0x00C0 (0x0170 - 0x00B0)
class UATActBaseballBatter : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00B0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActBaseballBatter");
		return ptr;
	}

};


// Class AT.ATActBehindED
// 0x0000 (0x00C8 - 0x00C8)
class UATActBehindED : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActBehindED");
		return ptr;
	}

};


// Class AT.ATActBehindLP
// 0x0000 (0x00C8 - 0x00C8)
class UATActBehindLP : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActBehindLP");
		return ptr;
	}

};


// Class AT.ATActBehindST
// 0x0000 (0x00C8 - 0x00C8)
class UATActBehindST : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActBehindST");
		return ptr;
	}

};


// Class AT.ATActBlendSpaceTest
// 0x0088 (0x0138 - 0x00B0)
class UATActBlendSpaceTest : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00B0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActBlendSpaceTest");
		return ptr;
	}

};


// Class AT.ATActBurst
// 0x0060 (0x0110 - 0x00B0)
class UATActBurst : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActBurst");
		return ptr;
	}

};


// Class AT.ATActCharge
// 0x0090 (0x0140 - 0x00B0)
class UATActCharge : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00B0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCharge");
		return ptr;
	}

};


// Class AT.ATActSkillBase
// 0x0048 (0x00F8 - 0x00B0)
class UATActSkillBase : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillBase");
		return ptr;
	}

};


// Class AT.ATActHugeSkillBeam
// 0x00A0 (0x0198 - 0x00F8)
class UATActHugeSkillBeam : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00F8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActHugeSkillBeam");
		return ptr;
	}

};


// Class AT.ATActCpl002SkillMakoudan
// 0x0048 (0x01E0 - 0x0198)
class UATActCpl002SkillMakoudan : public UATActHugeSkillBeam
{
public:
	class UBlendSpaceBase*                             BlendSpace;                                               // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                                      // 0x01A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl002SkillMakoudan");
		return ptr;
	}

};


// Class AT.ATActCpl002ZSkillStep
// 0x0070 (0x0168 - 0x00F8)
class UATActCpl002ZSkillStep : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl002ZSkillStep");
		return ptr;
	}

};


// Class AT.ATActCpl003BSkillSpecial
// 0x00A0 (0x0198 - 0x00F8)
class UATActCpl003BSkillSpecial : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00F8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl003BSkillSpecial");
		return ptr;
	}

};


// Class AT.ATActCpl003BSkillSpecialBoss
// 0x00D8 (0x01D0 - 0x00F8)
class UATActCpl003BSkillSpecialBoss : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00F8(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl003BSkillSpecialBoss");
		return ptr;
	}

};


// Class AT.ATActCpl003Makoho
// 0x00B0 (0x01A8 - 0x00F8)
class UATActCpl003Makoho : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00F8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl003Makoho");
		return ptr;
	}

};


// Class AT.ATActSkillBasic
// 0x00D8 (0x01D0 - 0x00F8)
class UATActSkillBasic : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00F8(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillBasic");
		return ptr;
	}

};


// Class AT.ATActCpl005SkillDeathBullet
// 0x0008 (0x01D8 - 0x01D0)
class UATActCpl005SkillDeathBullet : public UATActSkillBasic
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl005SkillDeathBullet");
		return ptr;
	}

};


// Class AT.ATActCpl005SkillDeathSlicer
// 0x0230 (0x0328 - 0x00F8)
class UATActCpl005SkillDeathSlicer : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x00F8(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl005SkillDeathSlicer");
		return ptr;
	}

};


// Class AT.ATActCpl005SkillDeathSlicerNormal
// 0x00B0 (0x01A8 - 0x00F8)
class UATActCpl005SkillDeathSlicerNormal : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00F8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl005SkillDeathSlicerNormal");
		return ptr;
	}

};


// Class AT.ATActCpl005SkillHighSpeed
// 0x0088 (0x0180 - 0x00F8)
class UATActCpl005SkillHighSpeed : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00F8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl005SkillHighSpeed");
		return ptr;
	}

};


// Class AT.ATActCpl005SkillLongRangeA
// 0x00A0 (0x0198 - 0x00F8)
class UATActCpl005SkillLongRangeA : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00F8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl005SkillLongRangeA");
		return ptr;
	}

};


// Class AT.ATActCpl005SkillLongRangeB
// 0x0098 (0x0190 - 0x00F8)
class UATActCpl005SkillLongRangeB : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00F8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl005SkillLongRangeB");
		return ptr;
	}

};


// Class AT.ATActCpl005SkillShortRange
// 0x0080 (0x0178 - 0x00F8)
class UATActCpl005SkillShortRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl005SkillShortRange");
		return ptr;
	}

};


// Class AT.ATActCpl012SkillDaysBreak
// 0x0060 (0x0158 - 0x00F8)
class UATActCpl012SkillDaysBreak : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00F8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl012SkillDaysBreak");
		return ptr;
	}

};


// Class AT.ATActCpl012SkillDoubleSunday
// 0x00F8 (0x01F0 - 0x00F8)
class UATActCpl012SkillDoubleSunday : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x00F8(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl012SkillDoubleSunday");
		return ptr;
	}

};


// Class AT.ATActCpl012SkillSaturdayCrash
// 0x0078 (0x0170 - 0x00F8)
class UATActCpl012SkillSaturdayCrash : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl012SkillSaturdayCrash");
		return ptr;
	}

};


// Class AT.ATActCpl013ShockWave
// 0x00B8 (0x01B0 - 0x00F8)
class UATActCpl013ShockWave : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x00F8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl013ShockWave");
		return ptr;
	}

};


// Class AT.ATActCpl013SkillBlazingStorm
// 0x00F0 (0x01E8 - 0x00F8)
class UATActCpl013SkillBlazingStorm : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x00F8(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl013SkillBlazingStorm");
		return ptr;
	}

};


// Class AT.ATActCpl013SkillDeluxeBomber
// 0x0098 (0x0190 - 0x00F8)
class UATActCpl013SkillDeluxeBomber : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00F8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl013SkillDeluxeBomber");
		return ptr;
	}

};


// Class AT.ATActCpl013SkillOverheadKick
// 0x0078 (0x0170 - 0x00F8)
class UATActCpl013SkillOverheadKick : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl013SkillOverheadKick");
		return ptr;
	}

};


// Class AT.ATActCpl013SkillSuperPunch
// 0x0088 (0x0180 - 0x00F8)
class UATActCpl013SkillSuperPunch : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00F8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl013SkillSuperPunch");
		return ptr;
	}

};


// Class AT.ATActCpl014SkillClawAttack
// 0x00A8 (0x01A0 - 0x00F8)
class UATActCpl014SkillClawAttack : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00F8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl014SkillClawAttack");
		return ptr;
	}

};


// Class AT.ATActCpl014SkillZibaku
// 0x00D8 (0x01D0 - 0x00F8)
class UATActCpl014SkillZibaku : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00F8(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl014SkillZibaku");
		return ptr;
	}

};


// Class AT.ATActCpl018SkillHighSpeed
// 0x0128 (0x0220 - 0x00F8)
class UATActCpl018SkillHighSpeed : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x00F8(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl018SkillHighSpeed");
		return ptr;
	}

};


// Class AT.ATActCpl018SkillLongRange
// 0x0080 (0x0178 - 0x00F8)
class UATActCpl018SkillLongRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl018SkillLongRange");
		return ptr;
	}

};


// Class AT.ATActCpl018SkillShortRange
// 0x0078 (0x0170 - 0x00F8)
class UATActCpl018SkillShortRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl018SkillShortRange");
		return ptr;
	}

};


// Class AT.ATActCpl018SkillSpecial
// 0x0108 (0x0200 - 0x00F8)
class UATActCpl018SkillSpecial : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x00F8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl018SkillSpecial");
		return ptr;
	}

};


// Class AT.ATActCpl019BSkillHighSpeed
// 0x00B0 (0x01A8 - 0x00F8)
class UATActCpl019BSkillHighSpeed : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00F8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl019BSkillHighSpeed");
		return ptr;
	}

};


// Class AT.ATActCpl019BSkillLongRange
// 0x0070 (0x0168 - 0x00F8)
class UATActCpl019BSkillLongRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl019BSkillLongRange");
		return ptr;
	}

};


// Class AT.ATActCpl019BSkillShortRange
// 0x0088 (0x0180 - 0x00F8)
class UATActCpl019BSkillShortRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00F8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl019BSkillShortRange");
		return ptr;
	}

};


// Class AT.ATActCpl019BSkillSpecial
// 0x00E0 (0x01D8 - 0x00F8)
class UATActCpl019BSkillSpecial : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00F8(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl019BSkillSpecial");
		return ptr;
	}

};


// Class AT.ATActCpl021SkillLongRange
// 0x00A0 (0x0198 - 0x00F8)
class UATActCpl021SkillLongRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00F8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl021SkillLongRange");
		return ptr;
	}

};


// Class AT.ATActCpl021SkillShortRange
// 0x0090 (0x0188 - 0x00F8)
class UATActCpl021SkillShortRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00F8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl021SkillShortRange");
		return ptr;
	}

};


// Class AT.ATActCpl021SkillSpecial
// 0x00E0 (0x01D8 - 0x00F8)
class UATActCpl021SkillSpecial : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00F8(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl021SkillSpecial");
		return ptr;
	}

};


// Class AT.ATActCpl021SkillWalking
// 0x0098 (0x0190 - 0x00F8)
class UATActCpl021SkillWalking : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00F8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl021SkillWalking");
		return ptr;
	}

};


// Class AT.ATActCpl024SkillOneShot
// 0x0080 (0x0178 - 0x00F8)
class UATActCpl024SkillOneShot : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl024SkillOneShot");
		return ptr;
	}

};


// Class AT.ATActCpl024SkillShortRange
// 0x0068 (0x0160 - 0x00F8)
class UATActCpl024SkillShortRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00F8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl024SkillShortRange");
		return ptr;
	}

};


// Class AT.ATActCpl029SkillEnergyAbsorb
// 0x0078 (0x0170 - 0x00F8)
class UATActCpl029SkillEnergyAbsorb : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl029SkillEnergyAbsorb");
		return ptr;
	}

};


// Class AT.ATActCpl030SkillAbsorbModeStart
// 0x0080 (0x0178 - 0x00F8)
class UATActCpl030SkillAbsorbModeStart : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl030SkillAbsorbModeStart");
		return ptr;
	}

};


// Class AT.ATActCpl030SkillEnergyAbsorb
// 0x0070 (0x0168 - 0x00F8)
class UATActCpl030SkillEnergyAbsorb : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl030SkillEnergyAbsorb");
		return ptr;
	}

};


// Class AT.ATActCpl030SkillEnergyDrain
// 0x0210 (0x0308 - 0x00F8)
class UATActCpl030SkillEnergyDrain : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x210];                                     // 0x00F8(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl030SkillEnergyDrain");
		return ptr;
	}

};


// Class AT.ATActCpl030SkillPhotonWave
// 0x0110 (0x0208 - 0x00F8)
class UATActCpl030SkillPhotonWave : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00F8(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl030SkillPhotonWave");
		return ptr;
	}

};


// Class AT.ATActCpl024SkillSpecial
// 0x00D0 (0x01C8 - 0x00F8)
class UATActCpl024SkillSpecial : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00F8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl024SkillSpecial");
		return ptr;
	}

};


// Class AT.ATActCpl034SkillBarrier
// 0x00A0 (0x0198 - 0x00F8)
class UATActCpl034SkillBarrier : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00F8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl034SkillBarrier");
		return ptr;
	}

};


// Class AT.ATActCpl034SkillDeathBeam
// 0x0098 (0x0190 - 0x00F8)
class UATActCpl034SkillDeathBeam : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x00F8(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl034SkillDeathBeam");
		return ptr;
	}

};


// Class AT.ATActCpl034SkillImpactSmash
// 0x0078 (0x0170 - 0x00F8)
class UATActCpl034SkillImpactSmash : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl034SkillImpactSmash");
		return ptr;
	}

};


// Class AT.ATActCpl034SkillPunishmentStorm
// 0x0198 (0x0290 - 0x00F8)
class UATActCpl034SkillPunishmentStorm : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x198];                                     // 0x00F8(0x0198) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl034SkillPunishmentStorm");
		return ptr;
	}

};


// Class AT.ATActCpl034SkillSonicBlow
// 0x00B8 (0x01B0 - 0x00F8)
class UATActCpl034SkillSonicBlow : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x00F8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl034SkillSonicBlow");
		return ptr;
	}

};


// Class AT.ATActCpl040SkillCrossClaw
// 0x00D0 (0x01C8 - 0x00F8)
class UATActCpl040SkillCrossClaw : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00F8(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl040SkillCrossClaw");
		return ptr;
	}

};


// Class AT.ATActCpl040SkillEnergyAbsorb
// 0x0070 (0x0168 - 0x00F8)
class UATActCpl040SkillEnergyAbsorb : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl040SkillEnergyAbsorb");
		return ptr;
	}

};


// Class AT.ATActCpl041EDestroyBluster
// 0x00A8 (0x01A0 - 0x00F8)
class UATActCpl041EDestroyBluster : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00F8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl041EDestroyBluster");
		return ptr;
	}

};


// Class AT.ATActCpl041EHomingKamehameha
// 0x0080 (0x0178 - 0x00F8)
class UATActCpl041EHomingKamehameha : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl041EHomingKamehameha");
		return ptr;
	}

};


// Class AT.ATActCpl041ERushShot
// 0x00C8 (0x01C0 - 0x00F8)
class UATActCpl041ERushShot : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00F8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl041ERushShot");
		return ptr;
	}

};


// Class AT.ATActCpl041ESkillHighSpeed
// 0x00C8 (0x01C0 - 0x00F8)
class UATActCpl041ESkillHighSpeed : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00F8(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl041ESkillHighSpeed");
		return ptr;
	}

};


// Class AT.ATActCpl041ESkillLongRange
// 0x0080 (0x0178 - 0x00F8)
class UATActCpl041ESkillLongRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00F8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl041ESkillLongRange");
		return ptr;
	}

};


// Class AT.ATActCpl041EVanishingBall
// 0x00D8 (0x01D0 - 0x00F8)
class UATActCpl041EVanishingBall : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00F8(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl041EVanishingBall");
		return ptr;
	}

};


// Class AT.ATActCpl058FloatMine
// 0x0070 (0x0168 - 0x00F8)
class UATActCpl058FloatMine : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl058FloatMine");
		return ptr;
	}

};


// Class AT.ATActDmgBase
// 0x0028 (0x00D8 - 0x00B0)
class UATActDmgBase : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBase");
		return ptr;
	}

};


// Class AT.ATActDmgDeathBlowoff
// 0x0020 (0x00F8 - 0x00D8)
class UATActDmgDeathBlowoff : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDeathBlowoff");
		return ptr;
	}

};


// Class AT.ATActCpl059DmgDeathBlowoff
// 0x0000 (0x00F8 - 0x00F8)
class UATActCpl059DmgDeathBlowoff : public UATActDmgDeathBlowoff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl059DmgDeathBlowoff");
		return ptr;
	}

};


// Class AT.ATActCpl059DmgDeathLP
// 0x0040 (0x0118 - 0x00D8)
class UATActCpl059DmgDeathLP : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00D8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl059DmgDeathLP");
		return ptr;
	}

};


// Class AT.ATActDmgDeathST
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgDeathST : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDeathST");
		return ptr;
	}

};


// Class AT.ATActCpl059DmgDeathST
// 0x0000 (0x00D8 - 0x00D8)
class UATActCpl059DmgDeathST : public UATActDmgDeathST
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl059DmgDeathST");
		return ptr;
	}

};


// Class AT.ATActDmgOutrageBlowoff
// 0x0048 (0x0120 - 0x00D8)
class UATActDmgOutrageBlowoff : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgOutrageBlowoff");
		return ptr;
	}

};


// Class AT.ATActCpl059DmgOutrageBlowoff
// 0x0000 (0x0120 - 0x0120)
class UATActCpl059DmgOutrageBlowoff : public UATActDmgOutrageBlowoff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl059DmgOutrageBlowoff");
		return ptr;
	}

};


// Class AT.ATActCpl065SkillShortRange
// 0x0088 (0x0180 - 0x00F8)
class UATActCpl065SkillShortRange : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00F8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl065SkillShortRange");
		return ptr;
	}

};


// Class AT.ATActCpl069SkillS003
// 0x0000 (0x01D0 - 0x01D0)
class UATActCpl069SkillS003 : public UATActSkillBasic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl069SkillS003");
		return ptr;
	}

};


// Class AT.ATActCpl071SkillB001
// 0x0008 (0x01D8 - 0x01D0)
class UATActCpl071SkillB001 : public UATActSkillBasic
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl071SkillB001");
		return ptr;
	}

};


// Class AT.ATActCpl071SkillB002
// 0x0010 (0x01E0 - 0x01D0)
class UATActCpl071SkillB002 : public UATActSkillBasic
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl071SkillB002");
		return ptr;
	}

};


// Class AT.ATActDmgBlindED
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgBlindED : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlindED");
		return ptr;
	}

};


// Class AT.ATActDmgBlindLP
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgBlindLP : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlindLP");
		return ptr;
	}

};


// Class AT.ATActDmgBlindST
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgBlindST : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlindST");
		return ptr;
	}

};


// Class AT.ATActDmgBlowoff
// 0x0020 (0x00F8 - 0x00D8)
class UATActDmgBlowoff : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowoff");
		return ptr;
	}


	void OnHitPhoton();
};


// Class AT.ATActCpl034SkillAbsorption
// 0x00B8 (0x01B0 - 0x00F8)
class UATActCpl034SkillAbsorption : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x00F8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActCpl034SkillAbsorption");
		return ptr;
	}

};


// Class AT.ATActDmgBlowoffBrake
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgBlowoffBrake : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowoffBrake");
		return ptr;
	}

};


// Class AT.ATActDmgBlowoffEnd
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgBlowoffEnd : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowoffEnd");
		return ptr;
	}

};


// Class AT.ATActDmgBlowoffLP
// 0x0000 (0x00F8 - 0x00F8)
class UATActDmgBlowoffLP : public UATActDmgBlowoff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowoffLP");
		return ptr;
	}

};


// Class AT.ATActDmgBlowoffRecovery
// 0x0000 (0x00B0 - 0x00B0)
class UATActDmgBlowoffRecovery : public UATActBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowoffRecovery");
		return ptr;
	}

};


// Class AT.ATActDmgBlowoffRoll
// 0x00A0 (0x0178 - 0x00D8)
class UATActDmgBlowoffRoll : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00D8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowoffRoll");
		return ptr;
	}


	void OnHitPhoton();
};


// Class AT.ATActDmgBlowSpin
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgBlowSpin : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowSpin");
		return ptr;
	}

};


// Class AT.ATActDmgBlowSpin_C034A_S_SKL002
// 0x0000 (0x00E0 - 0x00E0)
class UATActDmgBlowSpin_C034A_S_SKL002 : public UATActDmgBlowSpin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowSpin_C034A_S_SKL002");
		return ptr;
	}

};


// Class AT.ATActDmgBlowSpin2
// 0x0000 (0x00E0 - 0x00E0)
class UATActDmgBlowSpin2 : public UATActDmgBlowSpin
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowSpin2");
		return ptr;
	}

};


// Class AT.ATActDmgBlowSpinEnd
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgBlowSpinEnd : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowSpinEnd");
		return ptr;
	}

};


// Class AT.ATActDmgBlowSpin2End
// 0x0000 (0x00E0 - 0x00E0)
class UATActDmgBlowSpin2End : public UATActDmgBlowSpinEnd
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowSpin2End");
		return ptr;
	}

};


// Class AT.ATActDmgBlowSpinRecovery
// 0x0000 (0x00B0 - 0x00B0)
class UATActDmgBlowSpinRecovery : public UATActBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBlowSpinRecovery");
		return ptr;
	}

};


// Class AT.ATActDmgBreakED
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgBreakED : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBreakED");
		return ptr;
	}

};


// Class AT.ATActDmgBreakLP
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgBreakLP : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBreakLP");
		return ptr;
	}

};


// Class AT.ATActDmgCrashLand
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgCrashLand : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgCrashLand");
		return ptr;
	}

};


// Class AT.ATActDmgBreakST
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgBreakST : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgBreakST");
		return ptr;
	}

};


// Class AT.ATActDmgCrashWall
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgCrashWall : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgCrashWall");
		return ptr;
	}

};


// Class AT.ATActDmgCrashWallED
// 0x0020 (0x00F8 - 0x00D8)
class UATActDmgCrashWallED : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgCrashWallED");
		return ptr;
	}

};


// Class AT.ATActDmgCrashWallLP
// 0x0018 (0x00F0 - 0x00D8)
class UATActDmgCrashWallLP : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgCrashWallLP");
		return ptr;
	}

};


// Class AT.ATActDmgDeathBreak
// 0x0058 (0x0130 - 0x00D8)
class UATActDmgDeathBreak : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDeathBreak");
		return ptr;
	}

};


// Class AT.ATActDmgDeathLP
// 0x00A0 (0x0178 - 0x00D8)
class UATActDmgDeathLP : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00D8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDeathLP");
		return ptr;
	}

};


// Class AT.ATActDmgDownED
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgDownED : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDownED");
		return ptr;
	}

};


// Class AT.ATActDmgDownLP
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgDownLP : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDownLP");
		return ptr;
	}

};


// Class AT.ATActDmgDyingED
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgDyingED : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDyingED");
		return ptr;
	}

};


// Class AT.ATActDmgDyingLP
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgDyingLP : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDyingLP");
		return ptr;
	}

};


// Class AT.ATActDmgDyingST
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgDyingST : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDyingST");
		return ptr;
	}

};


// Class AT.ATActDmgGuard
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgGuard : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgGuard");
		return ptr;
	}

};


// Class AT.ATActDmgGuardBreakED
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgGuardBreakED : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgGuardBreakED");
		return ptr;
	}

};


// Class AT.ATActDmgGuardBreakLP
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgGuardBreakLP : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgGuardBreakLP");
		return ptr;
	}

};


// Class AT.ATActDmgGuardBreakST
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgGuardBreakST : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgGuardBreakST");
		return ptr;
	}

};


// Class AT.ATActDmgHoldBase
// 0x0080 (0x0158 - 0x00D8)
class UATActDmgHoldBase : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00D8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHoldBase");
		return ptr;
	}

};


// Class AT.ATActDmgHold
// 0x0000 (0x0158 - 0x0158)
class UATActDmgHold : public UATActDmgHoldBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHold");
		return ptr;
	}

};


// Class AT.ATActDmgHoldCpl024
// 0x0108 (0x0260 - 0x0158)
class UATActDmgHoldCpl024 : public UATActDmgHoldBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x0158(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHoldCpl024");
		return ptr;
	}

};


// Class AT.ATActDmgHoldFaceTrigger
// 0x0000 (0x0158 - 0x0158)
class UATActDmgHoldFaceTrigger : public UATActDmgHoldBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHoldFaceTrigger");
		return ptr;
	}

};


// Class AT.ATActDmgHoldNumb
// 0x0000 (0x0260 - 0x0260)
class UATActDmgHoldNumb : public UATActDmgHoldCpl024
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHoldNumb");
		return ptr;
	}

};


// Class AT.ATActDmgHugeDown
// 0x0060 (0x0138 - 0x00D8)
class UATActDmgHugeDown : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00D8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHugeDown");
		return ptr;
	}

};


// Class AT.ATActDmgHugeNormalHeavy
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgHugeNormalHeavy : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHugeNormalHeavy");
		return ptr;
	}

};


// Class AT.ATActDmgHugeNormalLight
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgHugeNormalLight : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHugeNormalLight");
		return ptr;
	}

};


// Class AT.ATActDmgHugeNormalMidium
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgHugeNormalMidium : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgHugeNormalMidium");
		return ptr;
	}

};


// Class AT.ATActDmgJostleBeam
// 0x0010 (0x00C0 - 0x00B0)
class UATActDmgJostleBeam : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgJostleBeam");
		return ptr;
	}

};


// Class AT.ATActDmgLock
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgLock : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgLock");
		return ptr;
	}


	void OnEndLockAction();
};


// Class AT.ATActDmgLongBlowoff
// 0x0090 (0x0168 - 0x00D8)
class UATActDmgLongBlowoff : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00D8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgLongBlowoff");
		return ptr;
	}


	void OnHitPhoton();
};


// Class AT.ATActDmgLongBlowoffDirection
// 0x00E0 (0x01B8 - 0x00D8)
class UATActDmgLongBlowoffDirection : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00D8(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgLongBlowoffDirection");
		return ptr;
	}

};


// Class AT.ATActDmgLongBlowoffEnd
// 0x0008 (0x00E0 - 0x00D8)
class UATActDmgLongBlowoffEnd : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgLongBlowoffEnd");
		return ptr;
	}

};


// Class AT.ATActDmgLongBlowoffVertical
// 0x0010 (0x00E8 - 0x00D8)
class UATActDmgLongBlowoffVertical : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgLongBlowoffVertical");
		return ptr;
	}

};


// Class AT.ATActDmgNormalBase
// 0x0010 (0x00E8 - 0x00D8)
class UATActDmgNormalBase : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgNormalBase");
		return ptr;
	}

};


// Class AT.ATActDmgNormalHeavy
// 0x0000 (0x00E8 - 0x00E8)
class UATActDmgNormalHeavy : public UATActDmgNormalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgNormalHeavy");
		return ptr;
	}

};


// Class AT.ATActDmgNormalHigh
// 0x0000 (0x00E8 - 0x00E8)
class UATActDmgNormalHigh : public UATActDmgNormalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgNormalHigh");
		return ptr;
	}

};


// Class AT.ATActDmgNormalLow
// 0x0000 (0x00E8 - 0x00E8)
class UATActDmgNormalLow : public UATActDmgNormalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgNormalLow");
		return ptr;
	}

};


// Class AT.ATActDmgNormalMedium
// 0x0000 (0x00E8 - 0x00E8)
class UATActDmgNormalMedium : public UATActDmgNormalBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgNormalMedium");
		return ptr;
	}

};


// Class AT.ATActDmgPukeED
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgPukeED : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgPukeED");
		return ptr;
	}

};


// Class AT.ATActDmgPukeLP
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgPukeLP : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgPukeLP");
		return ptr;
	}

};


// Class AT.ATActDmgPukeST
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgPukeST : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgPukeST");
		return ptr;
	}

};


// Class AT.ATActDmgWinceED
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgWinceED : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgWinceED");
		return ptr;
	}

};


// Class AT.ATActDmgStunED
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgStunED : public UATActDmgWinceED
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgStunED");
		return ptr;
	}

};


// Class AT.ATActDmgWinceLP
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgWinceLP : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgWinceLP");
		return ptr;
	}

};


// Class AT.ATActDmgStunLP
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgStunLP : public UATActDmgWinceLP
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgStunLP");
		return ptr;
	}

};


// Class AT.ATActDmgWinceST
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgWinceST : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgWinceST");
		return ptr;
	}

};


// Class AT.ATActDmgStunST
// 0x0000 (0x00D8 - 0x00D8)
class UATActDmgStunST : public UATActDmgWinceST
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgStunST");
		return ptr;
	}

};


// Class AT.ATActDmgVanish
// 0x0058 (0x0108 - 0x00B0)
class UATActDmgVanish : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00B0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgVanish");
		return ptr;
	}

};


// Class AT.ATActEncountBackAtk
// 0x0000 (0x00C8 - 0x00C8)
class UATActEncountBackAtk : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActEncountBackAtk");
		return ptr;
	}

};


// Class AT.ATActEncountBackAtkDmg
// 0x0000 (0x00C8 - 0x00C8)
class UATActEncountBackAtkDmg : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActEncountBackAtkDmg");
		return ptr;
	}

};


// Class AT.ATActEncountBackAtkDush
// 0x0010 (0x00D8 - 0x00C8)
class UATActEncountBackAtkDush : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActEncountBackAtkDush");
		return ptr;
	}

};


// Class AT.ATActEncountBackAtkDushST
// 0x0000 (0x00C8 - 0x00C8)
class UATActEncountBackAtkDushST : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActEncountBackAtkDushST");
		return ptr;
	}

};


// Class AT.ATActEncountDushL
// 0x0008 (0x00D0 - 0x00C8)
class UATActEncountDushL : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActEncountDushL");
		return ptr;
	}

};


// Class AT.ATActEncountDushR
// 0x0008 (0x00D0 - 0x00C8)
class UATActEncountDushR : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActEncountDushR");
		return ptr;
	}

};


// Class AT.ATActEncountLook
// 0x0000 (0x00C8 - 0x00C8)
class UATActEncountLook : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActEncountLook");
		return ptr;
	}

};


// Class AT.ATActEncountSummon
// 0x0070 (0x0120 - 0x00B0)
class UATActEncountSummon : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActEncountSummon");
		return ptr;
	}

};


// Class AT.ATActFieldShot
// 0x0090 (0x0140 - 0x00B0)
class UATActFieldShot : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00B0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActFieldShot");
		return ptr;
	}

};


// Class AT.ATActFieldShotCharge
// 0x0000 (0x0140 - 0x0140)
class UATActFieldShotCharge : public UATActFieldShot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActFieldShotCharge");
		return ptr;
	}

};


// Class AT.ATActFishing
// 0x0088 (0x0150 - 0x00C8)
class UATActFishing : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00C8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActFishing");
		return ptr;
	}

};


// Class AT.ATActFishingBait
// 0x0010 (0x00D8 - 0x00C8)
class UATActFishingBait : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActFishingBait");
		return ptr;
	}

};


// Class AT.ATActFishingED
// 0x0008 (0x00B8 - 0x00B0)
class UATActFishingED : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActFishingED");
		return ptr;
	}

};


// Class AT.ATActFishingLP
// 0x0000 (0x00C8 - 0x00C8)
class UATActFishingLP : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActFishingLP");
		return ptr;
	}

};


// Class AT.ATActFishingST
// 0x0000 (0x00C8 - 0x00C8)
class UATActFishingST : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActFishingST");
		return ptr;
	}

};


// Class AT.ATActFishingWait
// 0x0000 (0x00C8 - 0x00C8)
class UATActFishingWait : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActFishingWait");
		return ptr;
	}

};


// Class AT.ATActGetFieldShot
// 0x0008 (0x00E0 - 0x00D8)
class UATActGetFieldShot : public UATActDmgBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActGetFieldShot");
		return ptr;
	}

};


// Class AT.ATActGuard
// 0x0060 (0x0110 - 0x00B0)
class UATActGuard : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActGuard");
		return ptr;
	}

};


// Class AT.ATActGuardAround
// 0x0080 (0x0130 - 0x00B0)
class UATActGuardAround : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActGuardAround");
		return ptr;
	}

};


// Class AT.ATActHeatupCut
// 0x0058 (0x0150 - 0x00F8)
class UATActHeatupCut : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x00F8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActHeatupCut");
		return ptr;
	}

};


// Class AT.ATActHighBoost
// 0x00D8 (0x0188 - 0x00B0)
class UATActHighBoost : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x00B0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActHighBoost");
		return ptr;
	}

};


// Class AT.ATActHugeSkillJumpAttack
// 0x00A8 (0x01A0 - 0x00F8)
class UATActHugeSkillJumpAttack : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00F8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActHugeSkillJumpAttack");
		return ptr;
	}

};


// Class AT.ATActHugeSkillWildQuake
// 0x00B8 (0x01B0 - 0x00F8)
class UATActHugeSkillWildQuake : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x00F8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActHugeSkillWildQuake");
		return ptr;
	}

};


// Class AT.ATActIngameDemo
// 0x0008 (0x00B8 - 0x00B0)
class UATActIngameDemo : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActIngameDemo");
		return ptr;
	}

};


// Class AT.ATInputComponent
// 0x0010 (0x01F8 - 0x01E8)
class UATInputComponent : public UCFDynamicAssignInputComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInputComponent");
		return ptr;
	}

};


// Class AT.ATActionInputComponent
// 0x0040 (0x0238 - 0x01F8)
class UATActionInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01F8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActionInputComponent");
		return ptr;
	}

};


// Class AT.ATActLongBlowoffChase
// 0x0090 (0x0140 - 0x00B0)
class UATActLongBlowoffChase : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00B0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActLongBlowoffChase");
		return ptr;
	}

};


// Class AT.ATActLongRangeCombo
// 0x00A0 (0x0150 - 0x00B0)
class UATActLongRangeCombo : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActLongRangeCombo");
		return ptr;
	}

};


// Class AT.ATActMontage
// 0x0018 (0x00C8 - 0x00B0)
class UATActMontage : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActMontage");
		return ptr;
	}

};


// Class AT.ATActNoOxygen_UnderWater
// 0x0078 (0x0128 - 0x00B0)
class UATActNoOxygen_UnderWater : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00B0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActNoOxygen_UnderWater");
		return ptr;
	}

};


// Class AT.ATActNoOxygen_UpperWater
// 0x0068 (0x0118 - 0x00B0)
class UATActNoOxygen_UpperWater : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActNoOxygen_UpperWater");
		return ptr;
	}

};


// Class AT.ATActOffsetBoost
// 0x0068 (0x0118 - 0x00B0)
class UATActOffsetBoost : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActOffsetBoost");
		return ptr;
	}

};


// Class AT.ATActRampage
// 0x0060 (0x0110 - 0x00B0)
class UATActRampage : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActRampage");
		return ptr;
	}

};


// Class AT.ATActReversal
// 0x0060 (0x0110 - 0x00B0)
class UATActReversal : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActReversal");
		return ptr;
	}

};


// Class AT.ATActRideIn
// 0x00B8 (0x0180 - 0x00C8)
class UATActRideIn : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x00C8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActRideIn");
		return ptr;
	}

};


// Class AT.ATActRideInFriend
// 0x0090 (0x0158 - 0x00C8)
class UATActRideInFriend : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00C8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActRideInFriend");
		return ptr;
	}

};


// Class AT.ATActRideInMachine
// 0x00E0 (0x01A8 - 0x00C8)
class UATActRideInMachine : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x00C8(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActRideInMachine");
		return ptr;
	}

};


// Class AT.ATActRideOut
// 0x00A8 (0x0170 - 0x00C8)
class UATActRideOut : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00C8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActRideOut");
		return ptr;
	}

};


// Class AT.ATActRideOutFriend
// 0x0078 (0x0140 - 0x00C8)
class UATActRideOutFriend : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00C8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActRideOutFriend");
		return ptr;
	}

};


// Class AT.ATActRideOutMachine
// 0x00B0 (0x0178 - 0x00C8)
class UATActRideOutMachine : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x00C8(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActRideOutMachine");
		return ptr;
	}

};


// Class AT.ATActRiding
// 0x0068 (0x0130 - 0x00C8)
class UATActRiding : public UATActMontageId
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActRiding");
		return ptr;
	}

};


// Class AT.ATActSearch
// 0x0080 (0x0130 - 0x00B0)
class UATActSearch : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSearch");
		return ptr;
	}

};


// Class AT.ATActSearchED
// 0x0000 (0x00C8 - 0x00C8)
class UATActSearchED : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSearchED");
		return ptr;
	}

};


// Class AT.ATActSearchLP
// 0x0000 (0x00C8 - 0x00C8)
class UATActSearchLP : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSearchLP");
		return ptr;
	}

};


// Class AT.ATActSearchST
// 0x0000 (0x00C8 - 0x00C8)
class UATActSearchST : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSearchST");
		return ptr;
	}

};


// Class AT.ATActShortRangeCombo
// 0x00F8 (0x01A8 - 0x00B0)
class UATActShortRangeCombo : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x00B0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActShortRangeCombo");
		return ptr;
	}

};


// Class AT.ATActSkillMove
// 0x0008 (0x0100 - 0x00F8)
class UATActSkillMove : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillMove");
		return ptr;
	}

};


// Class AT.ATActSkillMoveTeleport
// 0x0078 (0x0178 - 0x0100)
class UATActSkillMoveTeleport : public UATActSkillMove
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0100(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillMoveTeleport");
		return ptr;
	}

};


// Class AT.ATActSkillAssistTeleport
// 0x0000 (0x0178 - 0x0178)
class UATActSkillAssistTeleport : public UATActSkillMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillAssistTeleport");
		return ptr;
	}

};


// Class AT.ATActSkillBasicNormal
// 0x0000 (0x01D0 - 0x01D0)
class UATActSkillBasicNormal : public UATActSkillBasic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillBasicNormal");
		return ptr;
	}

};


// Class AT.ATActSkillBasicLand
// 0x0000 (0x01D0 - 0x01D0)
class UATActSkillBasicLand : public UATActSkillBasic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillBasicLand");
		return ptr;
	}

};


// Class AT.ATActSkillBeam
// 0x00C0 (0x01B8 - 0x00F8)
class UATActSkillBeam : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x00F8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillBeam");
		return ptr;
	}

};


// Class AT.ATActSkillCollectiveActionBase
// 0x0070 (0x0168 - 0x00F8)
class UATActSkillCollectiveActionBase : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillCollectiveActionBase");
		return ptr;
	}

};


// Class AT.ATActSkillCollectiveActionSpark
// 0x0058 (0x01C0 - 0x0168)
class UATActSkillCollectiveActionSpark : public UATActSkillCollectiveActionBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0168(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillCollectiveActionSpark");
		return ptr;
	}

};


// Class AT.ATActSkillCooperation
// 0x0228 (0x0320 - 0x00F8)
class UATActSkillCooperation : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x00F8(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillCooperation");
		return ptr;
	}

};


// Class AT.ATActSkillHighSpeed
// 0x0090 (0x0188 - 0x00F8)
class UATActSkillHighSpeed : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x00F8(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillHighSpeed");
		return ptr;
	}

};


// Class AT.ATActSkillMoveChase
// 0x00C8 (0x01C8 - 0x0100)
class UATActSkillMoveChase : public UATActSkillMove
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0100(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillMoveChase");
		return ptr;
	}

};


// Class AT.ATActSkillMoveDash
// 0x0078 (0x0178 - 0x0100)
class UATActSkillMoveDash : public UATActSkillMove
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0100(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillMoveDash");
		return ptr;
	}

};


// Class AT.ATActSkillReady
// 0x0000 (0x00C8 - 0x00C8)
class UATActSkillReady : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillReady");
		return ptr;
	}

};


// Class AT.ATActSkillReplicateBody
// 0x0110 (0x0208 - 0x00F8)
class UATActSkillReplicateBody : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x00F8(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillReplicateBody");
		return ptr;
	}

};


// Class AT.ATActSkillSlashWave
// 0x00A8 (0x01A0 - 0x00F8)
class UATActSkillSlashWave : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x00F8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillSlashWave");
		return ptr;
	}

};


// Class AT.ATActSkillSparking
// 0x0078 (0x0170 - 0x00F8)
class UATActSkillSparking : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00F8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillSparking");
		return ptr;
	}

};


// Class AT.ATActSkillSuicide
// 0x0000 (0x01D0 - 0x01D0)
class UATActSkillSuicide : public UATActSkillBasic
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillSuicide");
		return ptr;
	}

};


// Class AT.ATActSkillSummon
// 0x0070 (0x0168 - 0x00F8)
class UATActSkillSummon : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00F8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillSummon");
		return ptr;
	}

};


// Class AT.ATActSkillTemporaryMesh
// 0x0040 (0x0210 - 0x01D0)
class UATActSkillTemporaryMesh : public UATActSkillBasic
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x01D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillTemporaryMesh");
		return ptr;
	}

};


// Class AT.ATActSkillTPS
// 0x00A0 (0x0198 - 0x00F8)
class UATActSkillTPS : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00F8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillTPS");
		return ptr;
	}

};


// Class AT.ATActSkillTPS_A
// 0x00F8 (0x01F0 - 0x00F8)
class UATActSkillTPS_A : public UATActSkillBase
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x00F8(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillTPS_A");
		return ptr;
	}

};


// Class AT.ATActSpecialMoveTeleport
// 0x0070 (0x0120 - 0x00B0)
class UATActSpecialMoveTeleport : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSpecialMoveTeleport");
		return ptr;
	}

};


// Class AT.ATActSpecialMoveTeleportTarget
// 0x0000 (0x0120 - 0x0120)
class UATActSpecialMoveTeleportTarget : public UATActSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSpecialMoveTeleportTarget");
		return ptr;
	}

};


// Class AT.ATActSpecialMoveTeleportView
// 0x0068 (0x0118 - 0x00B0)
class UATActSpecialMoveTeleportView : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSpecialMoveTeleportView");
		return ptr;
	}

};


// Class AT.ATActSpecialMoveZigzag
// 0x0108 (0x01B8 - 0x00B0)
class UATActSpecialMoveZigzag : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x108];                                     // 0x00B0(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSpecialMoveZigzag");
		return ptr;
	}

};


// Class AT.ATActSpecialMoveZigzagTeleport
// 0x00C8 (0x0178 - 0x00B0)
class UATActSpecialMoveZigzagTeleport : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00B0(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSpecialMoveZigzagTeleport");
		return ptr;
	}

};


// Class AT.ATActStep
// 0x0060 (0x0110 - 0x00B0)
class UATActStep : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActStep");
		return ptr;
	}

};


// Class AT.ATActSupportActionReady
// 0x0068 (0x0118 - 0x00B0)
class UATActSupportActionReady : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00B0(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportActionReady");
		return ptr;
	}

};


// Class AT.ATActSupportBulletGuard
// 0x0008 (0x0118 - 0x0110)
class UATActSupportBulletGuard : public UATActGuard
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportBulletGuard");
		return ptr;
	}

};


// Class AT.ATActSupportBulletGuardReady
// 0x0028 (0x0140 - 0x0118)
class UATActSupportBulletGuardReady : public UATActSupportActionReady
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0118(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportBulletGuardReady");
		return ptr;
	}

};


// Class AT.ATActSupportComboAssistLong
// 0x0000 (0x0150 - 0x0150)
class UATActSupportComboAssistLong : public UATActLongRangeCombo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportComboAssistLong");
		return ptr;
	}

};


// Class AT.ATActSupportComboAssistLongReady
// 0x0008 (0x0120 - 0x0118)
class UATActSupportComboAssistLongReady : public UATActSupportActionReady
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportComboAssistLongReady");
		return ptr;
	}

};


// Class AT.ATActSupportComboAssistShort
// 0x0000 (0x01A8 - 0x01A8)
class UATActSupportComboAssistShort : public UATActShortRangeCombo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportComboAssistShort");
		return ptr;
	}

};


// Class AT.ATActSupportComboAssistShortReady
// 0x0008 (0x0120 - 0x0118)
class UATActSupportComboAssistShortReady : public UATActSupportActionReady
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportComboAssistShortReady");
		return ptr;
	}

};


// Class AT.ATActSupportComboCut
// 0x0078 (0x0128 - 0x00B0)
class UATActSupportComboCut : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x00B0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportComboCut");
		return ptr;
	}

};


// Class AT.ATActSupportComboCutReady
// 0x0010 (0x0128 - 0x0118)
class UATActSupportComboCutReady : public UATActSupportActionReady
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportComboCutReady");
		return ptr;
	}

};


// Class AT.ATActSupportProvocation
// 0x0060 (0x0110 - 0x00B0)
class UATActSupportProvocation : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x00B0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportProvocation");
		return ptr;
	}

};


// Class AT.ATActSupportPursue
// 0x0070 (0x0120 - 0x00B0)
class UATActSupportPursue : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportPursue");
		return ptr;
	}

};


// Class AT.ATActSupportPursueDamage
// 0x0000 (0x00D8 - 0x00D8)
class UATActSupportPursueDamage : public UATActDmgBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportPursueDamage");
		return ptr;
	}

};


// Class AT.ATActSupportRecoveryHp
// 0x0000 (0x00B0 - 0x00B0)
class UATActSupportRecoveryHp : public UATActBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportRecoveryHp");
		return ptr;
	}

};


// Class AT.ATActSupportRecoveryMp
// 0x0000 (0x00B0 - 0x00B0)
class UATActSupportRecoveryMp : public UATActBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportRecoveryMp");
		return ptr;
	}

};


// Class AT.ATActSupportSkillAssistReady
// 0x0010 (0x0128 - 0x0118)
class UATActSupportSkillAssistReady : public UATActSupportActionReady
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportSkillAssistReady");
		return ptr;
	}

};


// Class AT.ATActSupportSkillReady
// 0x0010 (0x0128 - 0x0118)
class UATActSupportSkillReady : public UATActSupportActionReady
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSupportSkillReady");
		return ptr;
	}

};


// Class AT.ATActUseRadar
// 0x0080 (0x0130 - 0x00B0)
class UATActUseRadar : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActUseRadar");
		return ptr;
	}

};


// Class AT.ATActWeakness
// 0x0070 (0x0120 - 0x00B0)
class UATActWeakness : public UATActBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x00B0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActWeakness");
		return ptr;
	}

};


// Class AT.ATActWorldMapDemo
// 0x0000 (0x00C8 - 0x00C8)
class UATActWorldMapDemo : public UATActMontageId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActWorldMapDemo");
		return ptr;
	}

};


// Class AT.ATAirCarInputComponent
// 0x0070 (0x0268 - 0x01F8)
class UATAirCarInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x01F8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAirCarInputComponent");
		return ptr;
	}

};


// Class AT.ATAIStatusLoader
// 0x00F8 (0x0120 - 0x0028)
class UATAIStatusLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAIStatusLoader");
		return ptr;
	}

};


// Class AT.ATAmbientSplineActor
// 0x0038 (0x0370 - 0x0338)
class AATAmbientSplineActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0338(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAmbientSplineActor");
		return ptr;
	}

};


// Class AT.ATAnimNotify_ActionMontageCount
// 0x0000 (0x0038 - 0x0038)
class UATAnimNotify_ActionMontageCount : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_ActionMontageCount");
		return ptr;
	}

};


// Class AT.ATAnimNotify_CharacterSetDraw
// 0x0018 (0x0050 - 0x0038)
class UATAnimNotify_CharacterSetDraw : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_CharacterSetDraw");
		return ptr;
	}

};


// Class AT.ATAnimNotify_CharacterSuperArmor
// 0x0008 (0x0038 - 0x0030)
class UATAnimNotify_CharacterSuperArmor : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_CharacterSuperArmor");
		return ptr;
	}

};


// Class AT.ATAnimNotify_CharacterTargetMove
// 0x0018 (0x0050 - 0x0038)
class UATAnimNotify_CharacterTargetMove : public UAnimNotify
{
public:
	float                                              Speed;                                                    // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x003C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_CharacterTargetMove");
		return ptr;
	}

};


// Class AT.ATAnimNotify_CharacterTargetRotate
// 0x0008 (0x0040 - 0x0038)
class UATAnimNotify_CharacterTargetRotate : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_CharacterTargetRotate");
		return ptr;
	}

};


// Class AT.ATAnimNotify_FlashColor
// 0x0018 (0x0050 - 0x0038)
class UATAnimNotify_FlashColor : public UAnimNotify
{
public:
	struct FLinearColor                                Color;                                                    // 0x0038(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_FlashColor");
		return ptr;
	}

};


// Class AT.ATAnimNotify_LongBlowoffChase
// 0x0000 (0x0038 - 0x0038)
class UATAnimNotify_LongBlowoffChase : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_LongBlowoffChase");
		return ptr;
	}

};


// Class AT.ATAnimNotify_NimbusParticleActivate
// 0x0008 (0x0040 - 0x0038)
class UATAnimNotify_NimbusParticleActivate : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_NimbusParticleActivate");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PadVibration
// 0x0008 (0x0040 - 0x0038)
class UATAnimNotify_PadVibration : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PadVibration");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PhotonDestroy
// 0x0008 (0x0040 - 0x0038)
class UATAnimNotify_PhotonDestroy : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PhotonDestroy");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PhotonSpawn
// 0x0030 (0x0068 - 0x0038)
class UATAnimNotify_PhotonSpawn : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PhotonSpawn");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PlayParticleEffectCamera
// 0x0000 (0x0090 - 0x0090)
class UATAnimNotify_PlayParticleEffectCamera : public UAnimNotify_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlayParticleEffectCamera");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PlayParticleEffectCustom
// 0x0000 (0x0090 - 0x0090)
class UATAnimNotify_PlayParticleEffectCustom : public UAnimNotify_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlayParticleEffectCustom");
		return ptr;
	}


	void OnSpawnedParticle();
};


// Class AT.ATAnimNotify_PlayParticleEffectExt
// 0x0010 (0x00A0 - 0x0090)
class UATAnimNotify_PlayParticleEffectExt : public UAnimNotify_PlayParticleEffect
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlayParticleEffectExt");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PlaySoundByVoiceID
// 0x0020 (0x0058 - 0x0038)
class UATAnimNotify_PlaySoundByVoiceID : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlaySoundByVoiceID");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PoseSnapshot
// 0x0010 (0x0048 - 0x0038)
class UATAnimNotify_PoseSnapshot : public UAnimNotify
{
public:
	float                                              Opacity;                                                  // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x003C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PoseSnapshot");
		return ptr;
	}

};


// Class AT.ATAnimNotify_QuestMainBegin
// 0x0010 (0x0048 - 0x0038)
class UATAnimNotify_QuestMainBegin : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_QuestMainBegin");
		return ptr;
	}

};


// Class AT.ATAnimNotify_SetCharacterMontage
// 0x0020 (0x0058 - 0x0038)
class UATAnimNotify_SetCharacterMontage : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_SetCharacterMontage");
		return ptr;
	}

};


// Class AT.ATAnimNotify_SetCharacterMoveCancelFlag
// 0x0000 (0x0038 - 0x0038)
class UATAnimNotify_SetCharacterMoveCancelFlag : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_SetCharacterMoveCancelFlag");
		return ptr;
	}

};


// Class AT.ATAnimNotify_SetCharacterMoveFlag
// 0x0008 (0x0040 - 0x0038)
class UATAnimNotify_SetCharacterMoveFlag : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_SetCharacterMoveFlag");
		return ptr;
	}

};


// Class AT.ATAnimNotify_SkillCamera
// 0x0088 (0x00C0 - 0x0038)
class UATAnimNotify_SkillCamera : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_SkillCamera");
		return ptr;
	}

};


// Class AT.ATAnimNotify_TemporarySkeletalMesh
// 0x0038 (0x0070 - 0x0038)
class UATAnimNotify_TemporarySkeletalMesh : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_TemporarySkeletalMesh");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_AcceptCommand
// 0x0000 (0x0030 - 0x0030)
class UATAnimNotifyState_AcceptCommand : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_AcceptCommand");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_ActionInterruptTiming
// 0x0000 (0x0030 - 0x0030)
class UATAnimNotifyState_ActionInterruptTiming : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_ActionInterruptTiming");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_AnimInterporationType
// 0x0010 (0x0040 - 0x0030)
class UATAnimNotifyState_AnimInterporationType : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_AnimInterporationType");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_CameraShake
// 0x0008 (0x0038 - 0x0030)
class UATAnimNotifyState_CameraShake : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_CameraShake");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_CancelFlag
// 0x0008 (0x0038 - 0x0030)
class UATAnimNotifyState_CancelFlag : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_CancelFlag");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_CharacterInputMove
// 0x0040 (0x0070 - 0x0030)
class UATAnimNotifyState_CharacterInputMove : public UAnimNotifyState
{
public:
	float                                              Speed;                                                    // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0034(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_CharacterInputMove");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_CharacterSetDraw
// 0x0020 (0x0050 - 0x0030)
class UATAnimNotifyState_CharacterSetDraw : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_CharacterSetDraw");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_CharacterTargetMove
// 0x0030 (0x0060 - 0x0030)
class UATAnimNotifyState_CharacterTargetMove : public UAnimNotifyState
{
public:
	float                                              Speed;                                                    // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0034(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_CharacterTargetMove");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_CharacterTargetRotate
// 0x0008 (0x0038 - 0x0030)
class UATAnimNotifyState_CharacterTargetRotate : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_CharacterTargetRotate");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_CharacterTargetRotatePivotBone
// 0x0020 (0x0058 - 0x0038)
class UATAnimNotifyState_CharacterTargetRotatePivotBone : public UATAnimNotifyState_CharacterTargetRotate
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_CharacterTargetRotatePivotBone");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_DisableCharacterFootIK
// 0x0008 (0x0038 - 0x0030)
class UATAnimNotifyState_DisableCharacterFootIK : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_DisableCharacterFootIK");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_DisableSparking
// 0x0048 (0x0078 - 0x0030)
class UATAnimNotifyState_DisableSparking : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_DisableSparking");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_EnergyDrain
// 0x0058 (0x0088 - 0x0030)
class UATAnimNotifyState_EnergyDrain : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_EnergyDrain");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_FaceTrigger
// 0x0028 (0x0058 - 0x0030)
class UATAnimNotifyState_FaceTrigger : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_FaceTrigger");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_Fade
// 0x0010 (0x0040 - 0x0030)
class UATAnimNotifyState_Fade : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_Fade");
		return ptr;
	}

};


// Class AT.AnimNotifyState_PlayParticleEffect
// 0x0098 (0x00C8 - 0x0030)
class UAnimNotifyState_PlayParticleEffect : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_PlayParticleEffect");
		return ptr;
	}

};


// Class AT.AnimNotifyState_FieldShotChargeEffect
// 0x0000 (0x00C8 - 0x00C8)
class UAnimNotifyState_FieldShotChargeEffect : public UAnimNotifyState_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_FieldShotChargeEffect");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_FresnelColor
// 0x0020 (0x0050 - 0x0030)
class UATAnimNotifyState_FresnelColor : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_FresnelColor");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_Invincible
// 0x0000 (0x0030 - 0x0030)
class UATAnimNotifyState_Invincible : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_Invincible");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_LookAtTarget
// 0x0000 (0x0030 - 0x0030)
class UATAnimNotifyState_LookAtTarget : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_LookAtTarget");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_NimbusRoll
// 0x0038 (0x0068 - 0x0030)
class UATAnimNotifyState_NimbusRoll : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_NimbusRoll");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_OutlineColor
// 0x0018 (0x0048 - 0x0030)
class UATAnimNotifyState_OutlineColor : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_OutlineColor");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_PadVibration
// 0x0008 (0x0038 - 0x0030)
class UATAnimNotifyState_PadVibration : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_PadVibration");
		return ptr;
	}

};


// Class AT.AnimNotifyState_PlayParticleEffectAdjustHeight
// 0x0008 (0x00D0 - 0x00C8)
class UAnimNotifyState_PlayParticleEffectAdjustHeight : public UAnimNotifyState_PlayParticleEffect
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_PlayParticleEffectAdjustHeight");
		return ptr;
	}

};


// Class AT.AnimNotifyState_PlayParticleEffectCamera
// 0x0038 (0x0068 - 0x0030)
class UAnimNotifyState_PlayParticleEffectCamera : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_PlayParticleEffectCamera");
		return ptr;
	}

};


// Class AT.AnimNotifyState_PlayParticleEffectCustom
// 0x0000 (0x00C8 - 0x00C8)
class UAnimNotifyState_PlayParticleEffectCustom : public UAnimNotifyState_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AnimNotifyState_PlayParticleEffectCustom");
		return ptr;
	}


	void OnSpawnedParticle();
};


// Class AT.ATAnimNotifyState_PlaySkeletalAnim
// 0x0020 (0x0050 - 0x0030)
class UATAnimNotifyState_PlaySkeletalAnim : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_PlaySkeletalAnim");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_PoseSnapshot
// 0x0018 (0x0048 - 0x0030)
class UATAnimNotifyState_PoseSnapshot : public UAnimNotifyState
{
public:
	float                                              Opacity;                                                  // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0034(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_PoseSnapshot");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_PostOutlineParam
// 0x0040 (0x0070 - 0x0030)
class UATAnimNotifyState_PostOutlineParam : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_PostOutlineParam");
		return ptr;
	}

};


// Class AT.ATActDmgDeathFall
// 0x0008 (0x0180 - 0x0178)
class UATActDmgDeathFall : public UATActDmgDeathLP
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActDmgDeathFall");
		return ptr;
	}


	void HitCharacter();
};


// Class AT.ATAnimNotifyState_RestrictMovement
// 0x0010 (0x0040 - 0x0030)
class UATAnimNotifyState_RestrictMovement : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_RestrictMovement");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_SkillCutin
// 0x0050 (0x0080 - 0x0030)
class UATAnimNotifyState_SkillCutin : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_SkillCutin");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_Sparking
// 0x0048 (0x0078 - 0x0030)
class UATAnimNotifyState_Sparking : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_Sparking");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_Subtitle
// 0x0008 (0x0038 - 0x0030)
class UATAnimNotifyState_Subtitle : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_Subtitle");
		return ptr;
	}

};


// Class AT.ATAnimNotifyState_WhiteEye
// 0x0018 (0x0048 - 0x0030)
class UATAnimNotifyState_WhiteEye : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotifyState_WhiteEye");
		return ptr;
	}

};


// Class AT.ATAnyButtonInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATAnyButtonInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnyButtonInputComponent");
		return ptr;
	}

};


// Class AT.ATAsyncLoader
// 0x0028 (0x0050 - 0x0028)
class UATAsyncLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAsyncLoader");
		return ptr;
	}

};


// Class AT.ATAtrociousManager
// 0x00A0 (0x01A0 - 0x0100)
class UATAtrociousManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0100(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousManager");
		return ptr;
	}

};


// Class AT.ATAtrociousPhaseFunctionBase
// 0x0000 (0x0028 - 0x0028)
class UATAtrociousPhaseFunctionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousPhaseFunctionBase");
		return ptr;
	}

};


// Class AT.ATAtrociousPhaseBase
// 0x00D0 (0x00F8 - 0x0028)
class UATAtrociousPhaseBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousPhaseBase");
		return ptr;
	}

};


// Class AT.ATAtrociousBattleBase
// 0x0000 (0x0028 - 0x0028)
class UATAtrociousBattleBase : public UATAtrociousPhaseFunctionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousBattleBase");
		return ptr;
	}


	void OnBeginPlayLevelTiming();
};


// Class AT.ATAtrociousEncountBattle
// 0x00F0 (0x0118 - 0x0028)
class UATAtrociousEncountBattle : public UATAtrociousBattleBase
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousEncountBattle");
		return ptr;
	}

};


// Class AT.ATAtrociousEventBattle
// 0x0078 (0x00A0 - 0x0028)
class UATAtrociousEventBattle : public UATAtrociousBattleBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousEventBattle");
		return ptr;
	}

};


// Class AT.ATAtrociousCondition
// 0x0018 (0x0040 - 0x0028)
class UATAtrociousCondition : public UATAtrociousPhaseFunctionBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousCondition");
		return ptr;
	}

};


// Class AT.ATAtrociousPreBattleBase
// 0x0000 (0x0028 - 0x0028)
class UATAtrociousPreBattleBase : public UATAtrociousPhaseFunctionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousPreBattleBase");
		return ptr;
	}


	void OnBeginPlayLevelTiming();
};


// Class AT.ATAtrociousSubQuest
// 0x0088 (0x00B0 - 0x0028)
class UATAtrociousSubQuest : public UATAtrociousPreBattleBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousSubQuest");
		return ptr;
	}

};


// Class AT.ATAttachParticleComponent
// 0x0070 (0x0170 - 0x0100)
class UATAttachParticleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAttachParticleComponent");
		return ptr;
	}

};


// Class AT.TriggerStaticActor
// 0x0048 (0x0388 - 0x0340)
class ATriggerStaticActor : public ATriggerSphere
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	class UQuestActorFindListComponent*                QuestActorFindListComponent;                              // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                                      // 0x0350(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerStaticActor");
		return ptr;
	}

};


// Class AT.AutoMoveTrigger
// 0x0018 (0x03A0 - 0x0388)
class AAutoMoveTrigger : public ATriggerStaticActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0388(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AutoMoveTrigger");
		return ptr;
	}

};


// Class AT.ATBaseballGameInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATBaseballGameInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBaseballGameInputComponent");
		return ptr;
	}

};


// Class AT.ATBattleAI
// 0x00B0 (0x00D8 - 0x0028)
class UATBattleAI : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAI");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorBase
// 0x0010 (0x0038 - 0x0028)
class UATBattleAIBehaviorBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorBase");
		return ptr;
	}

};


// Class AT.ATBattleAIBehavior_Template
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehavior_Template : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehavior_Template");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorAttack
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorAttack : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorAttack");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorBlowoffBrake
// 0x0058 (0x0090 - 0x0038)
class UATBattleAIBehaviorBlowoffBrake : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorBlowoffBrake");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorBurst
// 0x0058 (0x0090 - 0x0038)
class UATBattleAIBehaviorBurst : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorBurst");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorCharge
// 0x0008 (0x0040 - 0x0038)
class UATBattleAIBehaviorCharge : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorCharge");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorCounterSkill
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorCounterSkill : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorCounterSkill");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorFormation
// 0x0080 (0x00B8 - 0x0038)
class UATBattleAIBehaviorFormation : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0038(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorFormation");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorGuard
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorGuard : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorGuard");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorHighBoost
// 0x0058 (0x0090 - 0x0038)
class UATBattleAIBehaviorHighBoost : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorHighBoost");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorHugeStep
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorHugeStep : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorHugeStep");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorHugeStepF
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorHugeStepF : public UATBattleAIBehaviorHugeStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorHugeStepF");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorHugeStepB
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorHugeStepB : public UATBattleAIBehaviorHugeStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorHugeStepB");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorHugeTurnAngle
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorHugeTurnAngle : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorHugeTurnAngle");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorHugeTurnTarget
// 0x0058 (0x0090 - 0x0038)
class UATBattleAIBehaviorHugeTurnTarget : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorHugeTurnTarget");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorHugeWalkTarget
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorHugeWalkTarget : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorHugeWalkTarget");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorHugeWeakness
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorHugeWeakness : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorHugeWeakness");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMove
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMove : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMove");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveF
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveF : public UATBattleAIBehaviorMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveF");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveB
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveB : public UATBattleAIBehaviorMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveB");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveL
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveL : public UATBattleAIBehaviorMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveL");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveR
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveR : public UATBattleAIBehaviorMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveR");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveAdjustHeight
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveAdjustHeight : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveAdjustHeight");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveApproach
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveApproach : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveApproach");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveApproachBoost
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveApproachBoost : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveApproachBoost");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveApproachBoostL
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveApproachBoostL : public UATBattleAIBehaviorMoveApproachBoost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveApproachBoostL");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveApproachBoostR
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveApproachBoostR : public UATBattleAIBehaviorMoveApproachBoost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveApproachBoostR");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveBoost
// 0x0008 (0x0040 - 0x0038)
class UATBattleAIBehaviorMoveBoost : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveBoost");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveBoostU
// 0x0000 (0x0040 - 0x0040)
class UATBattleAIBehaviorMoveBoostU : public UATBattleAIBehaviorMoveBoost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveBoostU");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveBoostD
// 0x0000 (0x0040 - 0x0040)
class UATBattleAIBehaviorMoveBoostD : public UATBattleAIBehaviorMoveBoost
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveBoostD");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveLeave
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveLeave : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveLeave");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveLeaveBoost
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveLeaveBoost : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveLeaveBoost");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveStep
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveStep : public UATBattleAIBehaviorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveStep");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveStepF
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveStepF : public UATBattleAIBehaviorMoveStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveStepF");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveStepB
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveStepB : public UATBattleAIBehaviorMoveStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveStepB");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveStepL
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveStepL : public UATBattleAIBehaviorMoveStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveStepL");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorMoveStepR
// 0x0000 (0x0038 - 0x0038)
class UATBattleAIBehaviorMoveStepR : public UATBattleAIBehaviorMoveStep
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorMoveStepR");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorRage
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorRage : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorRage");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorRampage
// 0x0058 (0x0090 - 0x0038)
class UATBattleAIBehaviorRampage : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorRampage");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorRecoveryLongBlowoff
// 0x0068 (0x00A0 - 0x0038)
class UATBattleAIBehaviorRecoveryLongBlowoff : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorRecoveryLongBlowoff");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorReversal
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorReversal : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorReversal");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorShot
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorShot : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorShot");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorShotMove
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorShotMove : public UATBattleAIBehaviorShot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorShotMove");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorShotMoveL
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorShotMoveL : public UATBattleAIBehaviorShotMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorShotMoveL");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorShotMoveR
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorShotMoveR : public UATBattleAIBehaviorShotMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorShotMoveR");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorShotMoveB
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorShotMoveB : public UATBattleAIBehaviorShotMove
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorShotMoveB");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorSkill : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill_RR
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSkill_RR : public UATBattleAIBehaviorSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill_RR");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill_RU
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSkill_RU : public UATBattleAIBehaviorSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill_RU");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill_RL
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSkill_RL : public UATBattleAIBehaviorSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill_RL");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill_RD
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSkill_RD : public UATBattleAIBehaviorSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill_RD");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill_LR
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSkill_LR : public UATBattleAIBehaviorSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill_LR");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill_LU
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSkill_LU : public UATBattleAIBehaviorSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill_LU");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill_LL
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSkill_LL : public UATBattleAIBehaviorSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill_LL");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkill_LD
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSkill_LD : public UATBattleAIBehaviorSkill
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkill_LD");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkillReady
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorSkillReady : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkillReady");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSkillSlot
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorSkillSlot : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSkillSlot");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSparking
// 0x0058 (0x0090 - 0x0038)
class UATBattleAIBehaviorSparking : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSparking");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleport
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorSpecialMoveTeleport : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleport");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportF
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportF : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportF");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportB
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportB : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportB");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportL
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportL : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportL");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportR
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportR : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportR");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportU
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportU : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportU");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportD
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportD : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportD");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportTargetF
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportTargetF : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportTargetF");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportTargetB
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportTargetB : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportTargetB");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportTargetL
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportTargetL : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportTargetL");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportTargetR
// 0x0000 (0x0098 - 0x0098)
class UATBattleAIBehaviorSpecialMoveTeleportTargetR : public UATBattleAIBehaviorSpecialMoveTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportTargetR");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveTeleportView
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorSpecialMoveTeleportView : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveTeleportView");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveZigzag
// 0x0058 (0x0090 - 0x0038)
class UATBattleAIBehaviorSpecialMoveZigzag : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveZigzag");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveZigzagBack
// 0x0000 (0x0090 - 0x0090)
class UATBattleAIBehaviorSpecialMoveZigzagBack : public UATBattleAIBehaviorSpecialMoveZigzag
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveZigzagBack");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveZigzagTeleport
// 0x0058 (0x0090 - 0x0038)
class UATBattleAIBehaviorSpecialMoveZigzagTeleport : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveZigzagTeleport");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorSpecialMoveZigzagTeleportBack
// 0x0000 (0x0090 - 0x0090)
class UATBattleAIBehaviorSpecialMoveZigzagTeleportBack : public UATBattleAIBehaviorSpecialMoveZigzagTeleport
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorSpecialMoveZigzagTeleportBack");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorVanish
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorVanish : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorVanish");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorWait
// 0x0008 (0x0040 - 0x0038)
class UATBattleAIBehaviorWait : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorWait");
		return ptr;
	}

};


// Class AT.ATBattleAIBehaviorWeakness
// 0x0060 (0x0098 - 0x0038)
class UATBattleAIBehaviorWeakness : public UATBattleAIBehaviorBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIBehaviorWeakness");
		return ptr;
	}

};


// Class AT.ATBattleAIConditionJudgement
// 0x0018 (0x0040 - 0x0028)
class UATBattleAIConditionJudgement : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAIConditionJudgement");
		return ptr;
	}

};


// Class AT.ATBattleDeathActionManager
// 0x00B8 (0x00E0 - 0x0028)
class UATBattleDeathActionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleDeathActionManager");
		return ptr;
	}

};


// Class AT.ATBattleGroupAI
// 0x00E0 (0x0108 - 0x0028)
class UATBattleGroupAI : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleGroupAI");
		return ptr;
	}

};


// Class AT.BattleGroupAIInfo
// 0x0078 (0x00A0 - 0x0028)
class UBattleGroupAIInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleGroupAIInfo");
		return ptr;
	}

};


// Class AT.ATBattleHateManager
// 0x00A8 (0x00D0 - 0x0028)
class UATBattleHateManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleHateManager");
		return ptr;
	}

};


// Class AT.ATBillboardComponent
// 0x0000 (0x0100 - 0x0100)
class UATBillboardComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBillboardComponent");
		return ptr;
	}

};


// Class AT.ATBillboardStaticMeshActor
// 0x0008 (0x0350 - 0x0348)
class AATBillboardStaticMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBillboardStaticMeshActor");
		return ptr;
	}

};


// Class AT.ATBulletAnimationActor
// 0x0008 (0x03C8 - 0x03C0)
class AATBulletAnimationActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBulletAnimationActor");
		return ptr;
	}

};


// Class AT.ATC_CharacterActionManager
// 0x00F8 (0x01F8 - 0x0100)
class UATC_CharacterActionManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0100(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATC_CharacterActionManager");
		return ptr;
	}

};


// Class AT.CharacterActionClassTable
// 0x0140 (0x0168 - 0x0028)
class UCharacterActionClassTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0028(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharacterActionClassTable");
		return ptr;
	}

};


// Class AT.CapturedParticle
// 0x0010 (0x0348 - 0x0338)
class ACapturedParticle : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CapturedParticle");
		return ptr;
	}

};


// Class AT.CapturedSkelMesh
// 0x0010 (0x0348 - 0x0338)
class ACapturedSkelMesh : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CapturedSkelMesh");
		return ptr;
	}

};


// Class AT.CapturedStaticMesh
// 0x0010 (0x0348 - 0x0338)
class ACapturedStaticMesh : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CapturedStaticMesh");
		return ptr;
	}

};


// Class AT.AT_CapturedCharacter
// 0x00B0 (0x0800 - 0x0750)
class AAT_CapturedCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0750(0x0008) MISSED OFFSET
	                                                   Type;                                                     // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA7];                                      // 0x0759(0x00A7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_CapturedCharacter");
		return ptr;
	}

};


// Class AT.ATCapturedActorManager
// 0x0058 (0x0088 - 0x0030)
class UATCapturedActorManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCapturedActorManager");
		return ptr;
	}

};


// Class AT.ATCharacterAnimInstance
// 0x01A0 (0x0560 - 0x03C0)
class UATCharacterAnimInstance : public UAT_AnimInstance
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x03C0(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterAnimInstance");
		return ptr;
	}

};


// Class AT.ATCharacterAttributeComponentBase
// 0x0028 (0x0128 - 0x0100)
class UATCharacterAttributeComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterAttributeComponentBase");
		return ptr;
	}

};


// Class AT.ATPlayerAttributeComponent
// 0x0000 (0x0128 - 0x0128)
class UATPlayerAttributeComponent : public UATCharacterAttributeComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerAttributeComponent");
		return ptr;
	}

};


// Class AT.ATMainPlayerAttributeComponent
// 0x0058 (0x0180 - 0x0128)
class UATMainPlayerAttributeComponent : public UATPlayerAttributeComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0128(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMainPlayerAttributeComponent");
		return ptr;
	}

};


// Class AT.ATSupportPlayerAttributeComponent
// 0x0018 (0x0140 - 0x0128)
class UATSupportPlayerAttributeComponent : public UATPlayerAttributeComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0128(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSupportPlayerAttributeComponent");
		return ptr;
	}

};


// Class AT.ATEnemyAttributeComponent
// 0x0000 (0x0128 - 0x0128)
class UATEnemyAttributeComponent : public UATCharacterAttributeComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEnemyAttributeComponent");
		return ptr;
	}

};


// Class AT.ATAtrociousAttributeComponent
// 0x0010 (0x0138 - 0x0128)
class UATAtrociousAttributeComponent : public UATCharacterAttributeComponentBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAtrociousAttributeComponent");
		return ptr;
	}

};


// Class AT.ATCharacterCancelFlagComponent
// 0x0008 (0x0108 - 0x0100)
class UATCharacterCancelFlagComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterCancelFlagComponent");
		return ptr;
	}

};


// Class AT.ATCookResourceLoader
// 0x0070 (0x0098 - 0x0028)
class UATCookResourceLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCookResourceLoader");
		return ptr;
	}

};


// Class AT.ATCharacterDamageCollision
// 0x0010 (0x0260 - 0x0250)
class UATCharacterDamageCollision : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterDamageCollision");
		return ptr;
	}

};


// Class AT.ATUniqueCharacterTable
// 0x0048 (0x0070 - 0x0028)
class UATUniqueCharacterTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUniqueCharacterTable");
		return ptr;
	}

};


// Class AT.ATUniqueCharacterDataList
// 0x0050 (0x0078 - 0x0028)
class UATUniqueCharacterDataList : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUniqueCharacterDataList");
		return ptr;
	}

};


// Class AT.ATCharacterEffectControlComponent
// 0x0030 (0x0130 - 0x0100)
class UATCharacterEffectControlComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterEffectControlComponent");
		return ptr;
	}

};


// Class AT.ATCharacterFactory
// 0x0060 (0x0090 - 0x0030)
class UATCharacterFactory : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterFactory");
		return ptr;
	}

};


// Class AT.ATCharacterFlashEffectComponent
// 0x0048 (0x0148 - 0x0100)
class UATCharacterFlashEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0100(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterFlashEffectComponent");
		return ptr;
	}

};


// Class AT.ATCharacterFlashEffectManager
// 0x00D0 (0x01D0 - 0x0100)
class UATCharacterFlashEffectManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0100(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterFlashEffectManager");
		return ptr;
	}

};


// Class AT.ATCharacterFootIKManager
// 0x0090 (0x00B8 - 0x0028)
class UATCharacterFootIKManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterFootIKManager");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeBase
// 0x0080 (0x00A8 - 0x0028)
class UATCharacterGaugeBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeBase");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeBreak
// 0x0068 (0x0110 - 0x00A8)
class UATCharacterGaugeBreak : public UATCharacterGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x00A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeBreak");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeGuardBreak
// 0x0160 (0x0208 - 0x00A8)
class UATCharacterGaugeGuardBreak : public UATCharacterGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x00A8(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeGuardBreak");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeLife
// 0x0008 (0x00B0 - 0x00A8)
class UATCharacterGaugeLife : public UATCharacterGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeLife");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeMagic
// 0x0008 (0x00B0 - 0x00A8)
class UATCharacterGaugeMagic : public UATCharacterGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeMagic");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeOxygen
// 0x0008 (0x00B0 - 0x00A8)
class UATCharacterGaugeOxygen : public UATCharacterGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeOxygen");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeSparking
// 0x0048 (0x00F0 - 0x00A8)
class UATCharacterGaugeSparking : public UATCharacterGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00A8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeSparking");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeSupport
// 0x0008 (0x00B0 - 0x00A8)
class UATCharacterGaugeSupport : public UATCharacterGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeSupport");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeSupportRecast
// 0x0028 (0x00D0 - 0x00A8)
class UATCharacterGaugeSupportRecast : public UATCharacterGaugeBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeSupportRecast");
		return ptr;
	}

};


// Class AT.ATCharacterGaugeSupportSkill
// 0x0000 (0x00A8 - 0x00A8)
class UATCharacterGaugeSupportSkill : public UATCharacterGaugeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterGaugeSupportSkill");
		return ptr;
	}

};


// Class AT.ATCharacterLoader
// 0x0050 (0x0078 - 0x0028)
class UATCharacterLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterLoader");
		return ptr;
	}

};


// Class AT.CharacterLocationUpdator
// 0x0058 (0x0158 - 0x0100)
class UCharacterLocationUpdator : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0100(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharacterLocationUpdator");
		return ptr;
	}

};


// Class AT.ATCharacterMovementComponent
// 0x0090 (0x07C0 - 0x0730)
class UATCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0730(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterMovementComponent");
		return ptr;
	}

};


// Class AT.ATCharacterMoveParam
// 0x0408 (0x0430 - 0x0028)
class UATCharacterMoveParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x408];                                     // 0x0028(0x0408) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterMoveParam");
		return ptr;
	}

};


// Class AT.ATCharacterMoveState
// 0x05C8 (0x06C8 - 0x0100)
class UATCharacterMoveState : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x5C8];                                     // 0x0100(0x05C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterMoveState");
		return ptr;
	}

};


// Class AT.ATVariationParts
// 0x0040 (0x0378 - 0x0338)
class AATVariationParts : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATVariationParts");
		return ptr;
	}

};


// Class AT.ATFormParts
// 0x0040 (0x0378 - 0x0338)
class AATFormParts : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFormParts");
		return ptr;
	}

};


// Class AT.ATVariationPartsLoader
// 0x0070 (0x0098 - 0x0028)
class UATVariationPartsLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATVariationPartsLoader");
		return ptr;
	}

};


// Class AT.ATFormPartsLoader
// 0x0070 (0x0098 - 0x0028)
class UATFormPartsLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFormPartsLoader");
		return ptr;
	}

};


// Class AT.ATFacialPartsLoader
// 0x0070 (0x0098 - 0x0028)
class UATFacialPartsLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFacialPartsLoader");
		return ptr;
	}

};


// Class AT.ATCharacterPartsManager
// 0x00F0 (0x0118 - 0x0028)
class UATCharacterPartsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterPartsManager");
		return ptr;
	}

};


// Class AT.ATCharacterReactor
// 0x0010 (0x0038 - 0x0028)
class UATCharacterReactor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterReactor");
		return ptr;
	}

};


// Class AT.ATHugeCharacterReactor
// 0x0000 (0x0038 - 0x0038)
class UATHugeCharacterReactor : public UATCharacterReactor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATHugeCharacterReactor");
		return ptr;
	}

};


// Class AT.ATCharacterRestrictGate
// 0x0020 (0x0358 - 0x0338)
class AATCharacterRestrictGate : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0338(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterRestrictGate");
		return ptr;
	}

};


// Class AT.ATCharacterRestrictTrigger
// 0x0038 (0x0370 - 0x0338)
class AATCharacterRestrictTrigger : public AActor
{
public:
	class UBoxComponent*                               TriggerBox;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0340(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterRestrictTrigger");
		return ptr;
	}

};


// Class AT.ATCharacterSparkingComponent
// 0x0050 (0x0150 - 0x0100)
class UATCharacterSparkingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterSparkingComponent");
		return ptr;
	}


	void HitOffsetLose(const struct FHitResult& HitResult);
	void HitOffsetDraw(const struct FHitResult& HitResult);
	void DamageApplied(const struct FHitResult& HitResult);
};


// Class AT.ATFightingPowerParam
// 0x0038 (0x0060 - 0x0028)
class UATFightingPowerParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFightingPowerParam");
		return ptr;
	}

};


// Class AT.ATCharacterStatusParam
// 0x00C8 (0x00F0 - 0x0028)
class UATCharacterStatusParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterStatusParam");
		return ptr;
	}

};


// Class AT.ATCharacterStatusList
// 0x03E8 (0x0410 - 0x0028)
class UATCharacterStatusList : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x0028(0x03E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterStatusList");
		return ptr;
	}

};


// Class AT.ATCharacterStatusComponent
// 0x0040 (0x0140 - 0x0100)
class UATCharacterStatusComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0100(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterStatusComponent");
		return ptr;
	}

};


// Class AT.ATStatusInstanceBase
// 0x0300 (0x0328 - 0x0028)
class UATStatusInstanceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x300];                                     // 0x0028(0x0300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATStatusInstanceBase");
		return ptr;
	}

};


// Class AT.ATPlayerStatusInstance
// 0x0008 (0x0330 - 0x0328)
class UATPlayerStatusInstance : public UATStatusInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerStatusInstance");
		return ptr;
	}

};


// Class AT.ATEnemyStatus
// 0x0010 (0x0338 - 0x0328)
class UATEnemyStatus : public UATStatusInstanceBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEnemyStatus");
		return ptr;
	}

};


// Class AT.ATCharacterTeleport
// 0x0088 (0x00B0 - 0x0028)
class UATCharacterTeleport : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterTeleport");
		return ptr;
	}

};


// Class AT.ATCharacterUnderWaterComponent
// 0x0020 (0x0120 - 0x0100)
class UATCharacterUnderWaterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCharacterUnderWaterComponent");
		return ptr;
	}

};


// Class AT.ATCheatManager
// 0x0028 (0x00A0 - 0x0078)
class UATCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0078(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCheatManager");
		return ptr;
	}

};


// Class AT.ATCinemaDemoCharacter
// 0x0028 (0x03E8 - 0x03C0)
class AATCinemaDemoCharacter : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03C0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCinemaDemoCharacter");
		return ptr;
	}

};


// Class AT.ATDemoCtrlBase
// 0x0020 (0x0048 - 0x0028)
class UATDemoCtrlBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDemoCtrlBase");
		return ptr;
	}

};


// Class AT.ATSequencerDemoCtrl
// 0x0090 (0x00D8 - 0x0048)
class UATSequencerDemoCtrl : public UATDemoCtrlBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0048(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSequencerDemoCtrl");
		return ptr;
	}

};


// Class AT.ATCinemaDemoCtrl
// 0x0000 (0x00D8 - 0x00D8)
class UATCinemaDemoCtrl : public UATSequencerDemoCtrl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCinemaDemoCtrl");
		return ptr;
	}

};


// Class AT.ATClientSetting_PS4
// 0x0010 (0x0048 - 0x0038)
class UATClientSetting_PS4 : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATClientSetting_PS4");
		return ptr;
	}

};


// Class AT.ATCmnInputComponent
// 0x0020 (0x0218 - 0x01F8)
class UATCmnInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x01F8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCmnInputComponent");
		return ptr;
	}

};


// Class AT.ATCmnParticleResource
// 0x0000 (0x0338 - 0x0338)
class AATCmnParticleResource : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCmnParticleResource");
		return ptr;
	}

};


// Class AT.ATCombineMeshComponent
// 0x00A8 (0x01A8 - 0x0100)
class UATCombineMeshComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0100(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCombineMeshComponent");
		return ptr;
	}

};


// Class AT.ATComboManager
// 0x0028 (0x0050 - 0x0028)
class UATComboManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATComboManager");
		return ptr;
	}

};


// Class AT.CommandUpdater
// 0x0178 (0x0278 - 0x0100)
class UCommandUpdater : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0100(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CommandUpdater");
		return ptr;
	}

};


// Class AT.AT_ControllerConnection
// 0x0018 (0x0040 - 0x0028)
class UAT_ControllerConnection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_ControllerConnection");
		return ptr;
	}

};


// Class AT.ATCookingDemoInputComponent
// 0x0008 (0x0200 - 0x01F8)
class UATCookingDemoInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCookingDemoInputComponent");
		return ptr;
	}

};


// Class AT.ATCookingMenuInputComponent
// 0x0008 (0x0200 - 0x01F8)
class UATCookingMenuInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCookingMenuInputComponent");
		return ptr;
	}

};


// Class AT.CostumeLoader
// 0x00A8 (0x00D0 - 0x0028)
class UCostumeLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CostumeLoader");
		return ptr;
	}


	void OnLoadedVariation(class UATDataAssetVariationMeshAsyncLoad* Target);
	void OnLoadedForm(class UATDataAssetFormMeshAsyncLoad* Target);
	void OnLoadedFacial(class UATDataAssetFacialAsyncLoad* Target);
};


// Class AT.ATCpl034CTeleport
// 0x0008 (0x00B8 - 0x00B0)
class UATCpl034CTeleport : public UATCharacterTeleport
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATCpl034CTeleport");
		return ptr;
	}

};


// Class AT.ATDamageManager
// 0x0010 (0x0110 - 0x0100)
class UATDamageManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDamageManager");
		return ptr;
	}

};


// Class AT.ATDataAssetBase
// 0x0000 (0x0030 - 0x0030)
class UATDataAssetBase : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetBase");
		return ptr;
	}

};


// Class AT.ATDataAssetAI
// 0x0140 (0x0170 - 0x0030)
class UATDataAssetAI : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetAI.BehaviorTree
	unsigned char                                      UnknownData01[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetAI.BlackboardData
	unsigned char                                      UnknownData02[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetAI.MoveForwardData
	unsigned char                                      UnknownData03[0x28];                                      // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetAI.MoveDistanceData
	unsigned char                                      UnknownData04[0x28];                                      // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetAI.MoveAroundData
	unsigned char                                      UnknownData05[0x28];                                      // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetAI.EnemyParameterList
	unsigned char                                      UnknownData06[0x28];                                      // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetAI.EnemyAppearTable
	unsigned char                                      UnknownData07[0x28];                                      // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AT.ATDataAssetAI.EnemyParamDistRelation

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetAI");
		return ptr;
	}

};


// Class AT.ATDataAssetAsyncLoad
// 0x0008 (0x0030 - 0x0028)
class UATDataAssetAsyncLoad : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetAsyncLoad");
		return ptr;
	}


	void IsLoaded();
};


// Class AT.ATDataAssetAIAsyncLoad
// 0x0298 (0x02C8 - 0x0030)
class UATDataAssetAIAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x298];                                     // 0x0030(0x0298) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetAIAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetBaseballGame
// 0x0948 (0x0978 - 0x0030)
class UATDataAssetBaseballGame : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x948];                                     // 0x0030(0x0948) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetBaseballGame");
		return ptr;
	}

};


// Class AT.ATDataAssetBaseballGameAsyncLoad
// 0x0B68 (0x0B98 - 0x0030)
class UATDataAssetBaseballGameAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	struct FLoadingBaseballGameAsset                   LoadingAsset;                                             // 0x0050(0x0028)
	unsigned char                                      UnknownData01[0xB20];                                     // 0x0078(0x0B20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetBaseballGameAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetBattleAI
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetBattleAI : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetBattleAI");
		return ptr;
	}

};


// Class AT.ATDataAssetBattleGroupAI
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetBattleGroupAI : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetBattleGroupAI");
		return ptr;
	}

};


// Class AT.ATDataAssetBattleAIAsyncLoad
// 0x0070 (0x00A0 - 0x0030)
class UATDataAssetBattleAIAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingBattleAIAsset                       Loading;                                                  // 0x0040(0x0050)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetBattleAIAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetBattleGroupAIAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetBattleGroupAIAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingBattleGroupAIAsset                  Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetBattleGroupAIAsyncLoad");
		return ptr;
	}

};


// Class AT.ATBattleAILoader
// 0x0110 (0x0138 - 0x0028)
class UATBattleAILoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATBattleAILoader");
		return ptr;
	}

};


// Class AT.ATDataAssetCharacter
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetCharacter : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCharacter");
		return ptr;
	}

};


// Class AT.ATDataAssetCharacterAction
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetCharacterAction : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCharacterAction");
		return ptr;
	}

};


// Class AT.ATDataAssetCharacterActionAsyncLoad
// 0x0048 (0x0078 - 0x0030)
class UATDataAssetCharacterActionAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	struct FLoadingCharacterActionAsset                LoadingAsset;                                             // 0x0048(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCharacterActionAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetCharacterAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetCharacterAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingCharacterAsset                      Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCharacterAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetVariationMesh
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetVariationMesh : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetVariationMesh");
		return ptr;
	}

};


// Class AT.ATDataAssetFormMesh
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetFormMesh : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetFormMesh");
		return ptr;
	}

};


// Class AT.ATDataAssetVariationMeshAsyncLoad
// 0x0060 (0x0090 - 0x0030)
class UATDataAssetVariationMeshAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	struct FATLoadingVariationMeshAsset                Loading;                                                  // 0x0050(0x0030)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetVariationMeshAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetFormMeshAsyncLoad
// 0x0060 (0x0090 - 0x0030)
class UATDataAssetFormMeshAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	struct FATLoadingFormMeshAsset                     Loading;                                                  // 0x0050(0x0030)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetFormMeshAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetCookingDemo
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetCookingDemo : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCookingDemo");
		return ptr;
	}

};


// Class AT.ATDataAssetCookingDemoAsyncLoad
// 0x0020 (0x0050 - 0x0030)
class UATDataAssetCookingDemoAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCookingDemoAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetCookingDemoCharacterResource
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetCookingDemoCharacterResource : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCookingDemoCharacterResource");
		return ptr;
	}

};


// Class AT.ATDataAssetCookingDemoCharacterResourceAsyncLoad
// 0x0390 (0x03C0 - 0x0030)
class UATDataAssetCookingDemoCharacterResourceAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	struct FATLoadingCookingDemoCharacterResourceAsset Loading;                                                  // 0x0050(0x02D8)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0328(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCookingDemoCharacterResourceAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetCrossTalk
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetCrossTalk : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCrossTalk");
		return ptr;
	}

};


// Class AT.ATDataAssetCrossTalkAsyncLoad
// 0x0060 (0x0090 - 0x0030)
class UATDataAssetCrossTalkAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingCrossTalkAsset                      Loading;                                                  // 0x0040(0x0038)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0078(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetCrossTalkAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetDamageType
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetDamageType : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetDamageType");
		return ptr;
	}

};


// Class AT.ATDataAssetDamageTypeAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetDamageTypeAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingDamageTypeAsset                     Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetDamageTypeAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetEventBattle
// 0x0088 (0x00B8 - 0x0030)
class UATDataAssetEventBattle : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0030(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetEventBattle");
		return ptr;
	}

};


// Class AT.ATDataAssetEventBattleAsyncLoad
// 0x00E8 (0x0118 - 0x0030)
class UATDataAssetEventBattleAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	struct FLoadingEventBattleAsset                    Loading;                                                  // 0x0050(0x0028)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x0078(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetEventBattleAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetFacial
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetFacial : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetFacial");
		return ptr;
	}

};


// Class AT.ATDataAssetFacialAsyncLoad
// 0x0060 (0x0090 - 0x0030)
class UATDataAssetFacialAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	struct FATLoadingFacialAsset                       Loading;                                                  // 0x0050(0x0030)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetFacialAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetField
// 0x0100 (0x0130 - 0x0030)
class UATDataAssetField : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0030(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetField");
		return ptr;
	}

};


// Class AT.ATDataAssetFishGame
// 0x01E8 (0x0218 - 0x0030)
class UATDataAssetFishGame : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0030(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetFishGame");
		return ptr;
	}

};


// Class AT.ATDataAssetGlobal
// 0x3E88 (0x3EB8 - 0x0030)
class UATDataAssetGlobal : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x3E88];                                    // 0x0030(0x3E88) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetGlobal");
		return ptr;
	}

};


// Class AT.ATDataAssetItem
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetItem : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetItem");
		return ptr;
	}

};


// Class AT.ATDataAssetFishGameAsyncLoad
// 0x07A8 (0x07D8 - 0x0030)
class UATDataAssetFishGameAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET
	struct FLoadingFishGameMeshAsset                   LoadingAsset;                                             // 0x0080(0x0050)
	unsigned char                                      UnknownData01[0x708];                                     // 0x00D0(0x0708) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetFishGameAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetItemAsyncLoad
// 0x0018 (0x0048 - 0x0030)
class UATDataAssetItemAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingItemAsset                           Loading;                                                  // 0x0040(0x0001)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetItemAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetJostleBeam
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetJostleBeam : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetJostleBeam");
		return ptr;
	}

};


// Class AT.ATDataAssetJostleBeamAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetJostleBeamAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingJostleBeamAsset                     Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetJostleBeamAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetManager
// 0x01F0 (0x0528 - 0x0338)
class AATDataAssetManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0338(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetManager");
		return ptr;
	}

};


// Class AT.ATDataAssetMechaDev
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetMechaDev : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetMechaDev");
		return ptr;
	}

};


// Class AT.ATDataAssetMechaDevAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetMechaDevAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingMechaDevAsset                       Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetMechaDevAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetMiniGame
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetMiniGame : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetMiniGame");
		return ptr;
	}

};


// Class AT.ATDataAssetMiniGameAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetMiniGameAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingMiniGameAsset                       LoadingAsset;                                             // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetMiniGameAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetMiniGameMob
// 0x0038 (0x0068 - 0x0030)
class UATDataAssetMiniGameMob : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetMiniGameMob");
		return ptr;
	}

};


// Class AT.ATDataAssetMiniGameMobAsyncLoad
// 0x00E0 (0x0110 - 0x0030)
class UATDataAssetMiniGameMobAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetMiniGameMobAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetNpcMob
// 0x0038 (0x0068 - 0x0030)
class UATDataAssetNpcMob : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetNpcMob");
		return ptr;
	}

};


// Class AT.ATDataAssetNpcMobAsyncLoad
// 0x0120 (0x0150 - 0x0030)
class UATDataAssetNpcMobAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0030(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetNpcMobAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetParticle
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetParticle : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetParticle");
		return ptr;
	}

};


// Class AT.ATDataAssetParticleAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetParticleAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingParticleAsset                       Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetParticleAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetQuest
// 0x0190 (0x01C0 - 0x0030)
class UATDataAssetQuest : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0030(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetQuest");
		return ptr;
	}

};


// Class AT.ATDataAssetQuestAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetQuestAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingQuestAsset                          Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetQuestAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetRaceGame
// 0x0060 (0x0090 - 0x0030)
class UATDataAssetRaceGame : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetRaceGame");
		return ptr;
	}

};


// Class AT.ATDataAssetRaceGameAsyncLoad
// 0x00C8 (0x00F8 - 0x0030)
class UATDataAssetRaceGameAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
	struct FLoadingRaceGameAsset                       LoadingAsset;                                             // 0x0060(0x0028)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0088(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetRaceGameAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetSound
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetSound : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetSound");
		return ptr;
	}

};


// Class AT.ATDataAssetSoundAsyncLoad
// 0x0048 (0x0078 - 0x0030)
class UATDataAssetSoundAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingSoundAsset                          Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetSoundAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetStarScaleFinish
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetStarScaleFinish : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetStarScaleFinish");
		return ptr;
	}

};


// Class AT.ATDataAssetStarScaleFinishAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetStarScaleFinishAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingStarScaleFinishAsset                Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetStarScaleFinishAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetSupportCharacterTalk
// 0x0060 (0x0090 - 0x0030)
class UATDataAssetSupportCharacterTalk : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetSupportCharacterTalk");
		return ptr;
	}

};


// Class AT.ATDataAssetSupportCharacterTalkAsyncLoad
// 0x0048 (0x0078 - 0x0030)
class UATDataAssetSupportCharacterTalkAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingSupportCharacterTalkAsset           Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetSupportCharacterTalkAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetTPSSkillViewCancel
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetTPSSkillViewCancel : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetTPSSkillViewCancel");
		return ptr;
	}

};


// Class AT.ATDataAssetTPSSkillViewCancelAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetTPSSkillViewCancelAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingTPSSkillViewCancelAsset             Loading;                                                  // 0x0040(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetTPSSkillViewCancelAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetUi
// 0x0070 (0x00A0 - 0x0030)
class UATDataAssetUi : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0030(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetUi");
		return ptr;
	}

};


// Class AT.ATDataAssetUiAsyncLoad
// 0x0080 (0x00B0 - 0x0030)
class UATDataAssetUiAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	struct FLoadingAsset                               LoadingAsset;                                             // 0x0030(0x0050)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0080(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetUiAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDataAssetUiCapture
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetUiCapture : public UATDataAssetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetUiCapture");
		return ptr;
	}

};


// Class AT.ATDataAssetUiCaptureAsyncLoad
// 0x0158 (0x0188 - 0x0030)
class UATDataAssetUiCaptureAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET
	struct FLoadingUiCaptureAsset                      LoadingAsset;                                             // 0x0048(0x0100)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0148(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDataAssetUiCaptureAsyncLoad");
		return ptr;
	}

};


// Class AT.ATDebugDataAssetParticesAsyncLoadFromPath
// 0x0100 (0x0130 - 0x0030)
class UATDebugDataAssetParticesAsyncLoadFromPath : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0030(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDebugDataAssetParticesAsyncLoadFromPath");
		return ptr;
	}

};


// Class AT.ATDebugInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATDebugInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDebugInputComponent");
		return ptr;
	}

};


// Class AT.ATDebugMenuInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATDebugMenuInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDebugMenuInputComponent");
		return ptr;
	}

};


// Class AT.ATDecalActor
// 0x0008 (0x0340 - 0x0338)
class AATDecalActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDecalActor");
		return ptr;
	}

};


// Class AT.ATDemoDirectionCharacter
// 0x0000 (0x03C0 - 0x03C0)
class AATDemoDirectionCharacter : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDemoDirectionCharacter");
		return ptr;
	}

};


// Class AT.ATSceneCapture2D
// 0x0000 (0x0348 - 0x0348)
class AATSceneCapture2D : public ASceneCapture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSceneCapture2D");
		return ptr;
	}


	void Activate();
};


// Class AT.ATDemoDirectionSceneCapture2D
// 0x0000 (0x0348 - 0x0348)
class AATDemoDirectionSceneCapture2D : public AATSceneCapture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDemoDirectionSceneCapture2D");
		return ptr;
	}

};


// Class AT.ATDemoInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATDemoInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDemoInputComponent");
		return ptr;
	}


	void OnDemoTiming();
};


// Class AT.ATDemoManageComponent
// 0x00D0 (0x01D0 - 0x0100)
class UATDemoManageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0100(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDemoManageComponent");
		return ptr;
	}

};


// Class AT.ATDemoRenderingHelper
// 0x0028 (0x0360 - 0x0338)
class AATDemoRenderingHelper : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0338(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDemoRenderingHelper");
		return ptr;
	}

};


// Class AT.ATDemoResource
// 0x0008 (0x0340 - 0x0338)
class AATDemoResource : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDemoResource");
		return ptr;
	}

};


// Class AT.ATDevelopManager
// 0x00E0 (0x0108 - 0x0028)
class UATDevelopManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDevelopManager");
		return ptr;
	}

};


// Class AT.ATDiffLevelCriticalAddParam
// 0x0018 (0x0040 - 0x0028)
class UATDiffLevelCriticalAddParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDiffLevelCriticalAddParam");
		return ptr;
	}

};


// Class AT.ATDinosaurMoveAreaVolume
// 0x0000 (0x0370 - 0x0370)
class AATDinosaurMoveAreaVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDinosaurMoveAreaVolume");
		return ptr;
	}


	void OnEndOverlap();
	void OnBeginOverlap();
};


// Class AT.ATDebugUICharaIconManager
// 0x0060 (0x0088 - 0x0028)
class UATDebugUICharaIconManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDebugUICharaIconManager");
		return ptr;
	}


	void STATIC_Instance();
};


// Class AT.ATDirectionalLight
// 0x0048 (0x0398 - 0x0350)
class AATDirectionalLight : public ADirectionalLight
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0350(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDirectionalLight");
		return ptr;
	}

};


// Class AT.ATDirectionalLightNotifyState
// 0x0010 (0x0060 - 0x0050)
class UATDirectionalLightNotifyState : public UATAnimNotifyState_PlaySkeletalAnim
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDirectionalLightNotifyState");
		return ptr;
	}

};


// Class AT.ATDirectionBase
// 0x00E8 (0x0110 - 0x0028)
class UATDirectionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0028(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDirectionBase");
		return ptr;
	}

};


// Class AT.ATDummyActor
// 0x0000 (0x03C0 - 0x03C0)
class AATDummyActor : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDummyActor");
		return ptr;
	}

};


// Class AT.ATDirectionDummyActor
// 0x0018 (0x03D8 - 0x03C0)
class AATDirectionDummyActor : public AATDummyActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDirectionDummyActor");
		return ptr;
	}

};


// Class AT.ATDirectionLock
// 0x0058 (0x0168 - 0x0110)
class UATDirectionLock : public UATDirectionBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0110(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDirectionLock");
		return ptr;
	}

};


// Class AT.ATDirectionLongBlowoff
// 0x0058 (0x0168 - 0x0110)
class UATDirectionLongBlowoff : public UATDirectionBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0110(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDirectionLongBlowoff");
		return ptr;
	}

};


// Class AT.ATDirectionStarScaleFinish
// 0x0078 (0x0188 - 0x0110)
class UATDirectionStarScaleFinish : public UATDirectionBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0110(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDirectionStarScaleFinish");
		return ptr;
	}

};


// Class AT.ATDirectionSupportPursue
// 0x0078 (0x0188 - 0x0110)
class UATDirectionSupportPursue : public UATDirectionBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0110(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDirectionSupportPursue");
		return ptr;
	}

};


// Class AT.ATDLCManager
// 0x0248 (0x0278 - 0x0030)
class UATDLCManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x0030(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDLCManager");
		return ptr;
	}

};


// Class AT.DragonballSpawner
// 0x0038 (0x0370 - 0x0338)
class ADragonballSpawner : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0338(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DragonballSpawner");
		return ptr;
	}

};


// Class AT.EasingMovement
// 0x0050 (0x0150 - 0x0100)
class UEasingMovement : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	class AActor*                                      TargetPoint;                                              // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0110(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.EasingMovement");
		return ptr;
	}

};


// Class AT.Enable
// 0x0000 (0x0028 - 0x0028)
class UEnable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Enable");
		return ptr;
	}


	void SetEnable(bool bEnabled);
	void IsEnable();
};


// Class AT.ATEnemiesBaseBehaviour
// 0x0148 (0x0248 - 0x0100)
class UATEnemiesBaseBehaviour : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0100(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEnemiesBaseBehaviour");
		return ptr;
	}

};


// Class AT.ATEnemiesBaseSpawner
// 0x0000 (0x0338 - 0x0338)
class AATEnemiesBaseSpawner : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEnemiesBaseSpawner");
		return ptr;
	}

};


// Class AT.ATDoorVolume
// 0x01A0 (0x04E0 - 0x0340)
class AATDoorVolume : public ATriggerBox
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0340(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATDoorVolume");
		return ptr;
	}

};


// Class AT.ATEnvironmentEffectManager
// 0x00E8 (0x01E8 - 0x0100)
class UATEnvironmentEffectManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0100(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEnvironmentEffectManager");
		return ptr;
	}

};


// Class AT.ATEventBattleFinishInputComponent
// 0x0008 (0x0200 - 0x01F8)
class UATEventBattleFinishInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEventBattleFinishInputComponent");
		return ptr;
	}

};


// Class AT.ATFacialAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UATFacialAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFacialAnimationInterface");
		return ptr;
	}

};


// Class AT.ATFacialComponent
// 0x00A0 (0x01A0 - 0x0100)
class UATFacialComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0100(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFacialComponent");
		return ptr;
	}

};


// Class AT.ATFacialParts
// 0x00A0 (0x03D8 - 0x0338)
class AATFacialParts : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0338(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFacialParts");
		return ptr;
	}

};


// Class AT.ATFeverParamManager
// 0x0088 (0x00B0 - 0x0028)
class UATFeverParamManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFeverParamManager");
		return ptr;
	}

};


// Class AT.ATFeverManager
// 0x0050 (0x0150 - 0x0100)
class UATFeverManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFeverManager");
		return ptr;
	}


	void OnQuestChangeTiming();
};


// Class AT.ATFieldLightManager
// 0x0008 (0x0108 - 0x0100)
class UATFieldLightManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFieldLightManager");
		return ptr;
	}

};


// Class AT.ATFieldManager
// 0x00E8 (0x01E8 - 0x0100)
class UATFieldManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0100(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFieldManager");
		return ptr;
	}

};


// Class AT.FieldActionPointActor
// 0x0030 (0x0368 - 0x0338)
class AFieldActionPointActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0338(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldActionPointActor");
		return ptr;
	}

};


// Class AT.ATFieldMemoriesActor
// 0x0128 (0x0490 - 0x0368)
class AATFieldMemoriesActor : public AFieldActionPointActor
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0368(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFieldMemoriesActor");
		return ptr;
	}

};


// Class AT.FieldMemoriesFetchingBehaviour
// 0x0040 (0x0140 - 0x0100)
class UFieldMemoriesFetchingBehaviour : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0100(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldMemoriesFetchingBehaviour");
		return ptr;
	}

};


// Class AT.ATFieldRideSelectInput
// 0x0018 (0x0210 - 0x01F8)
class UATFieldRideSelectInput : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFieldRideSelectInput");
		return ptr;
	}

};


// Class AT.ATFishingInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATFishingInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFishingInputComponent");
		return ptr;
	}

};


// Class AT.ATFishingQteInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATFishingQteInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFishingQteInputComponent");
		return ptr;
	}

};


// Class AT.ATFloatRollLargeEffSkeletalMeshActor
// 0x0018 (0x03D8 - 0x03C0)
class AATFloatRollLargeEffSkeletalMeshActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFloatRollLargeEffSkeletalMeshActor");
		return ptr;
	}

};


// Class AT.ATFlyingNimbus
// 0x0260 (0x0360 - 0x0100)
class UATFlyingNimbus : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x260];                                     // 0x0100(0x0260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFlyingNimbus");
		return ptr;
	}

};


// Class AT.ATFlyingNimbusSpline
// 0x0018 (0x0350 - 0x0338)
class AATFlyingNimbusSpline : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFlyingNimbusSpline");
		return ptr;
	}

};


// Class AT.ATFollowUpPoints
// 0x0028 (0x0128 - 0x0100)
class UATFollowUpPoints : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFollowUpPoints");
		return ptr;
	}

};


// Class AT.ATGameFlowManager
// 0x0020 (0x0050 - 0x0030)
class UATGameFlowManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATGameFlowManager");
		return ptr;
	}

};


// Class AT.ATGameMode
// 0x01D8 (0x05F8 - 0x0420)
class AATGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0420(0x01D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATGameMode");
		return ptr;
	}

};


// Class AT.ATGameState
// 0x0010 (0x03D8 - 0x03C8)
class AATGameState : public ACFGameState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATGameState");
		return ptr;
	}

};


// Class AT.ATGeneralDemoAnimInstance
// 0x0010 (0x03A0 - 0x0390)
class UATGeneralDemoAnimInstance : public UAnimSequencerInstance_AnimBP
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0390(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATGeneralDemoAnimInstance");
		return ptr;
	}

};


// Class AT.ATGeneralDemoCharacter
// 0x0020 (0x08E0 - 0x08C0)
class AATGeneralDemoCharacter : public AAT_CharacterBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x08C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATGeneralDemoCharacter");
		return ptr;
	}

};


// Class AT.ATGeneralDemoCtrl
// 0x0000 (0x00D8 - 0x00D8)
class UATGeneralDemoCtrl : public UATSequencerDemoCtrl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATGeneralDemoCtrl");
		return ptr;
	}

};


// Class AT.GeneralTalkAnimationProperty
// 0x0000 (0x0028 - 0x0028)
class UGeneralTalkAnimationProperty : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GeneralTalkAnimationProperty");
		return ptr;
	}


	void ToDefaultProperty();
	void SetDefaltProperty();
};


// Class AT.IdlingSequentialAnimation
// 0x0000 (0x0028 - 0x0028)
class UIdlingSequentialAnimation : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.IdlingSequentialAnimation");
		return ptr;
	}


	void SetNearPlayer();
	void SetIdlingSequencePattern();
	void SetEnableIdlingSequence(bool bEnabled);
	void IsNearPlayer();
	void IsEnableIdlingSequence();
	void GetIdlingSequencePattern();
};


// Class AT.ATIngameDemoCtrl
// 0x0068 (0x00B0 - 0x0048)
class UATIngameDemoCtrl : public UATDemoCtrlBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0048(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATIngameDemoCtrl");
		return ptr;
	}

};


// Class AT.ATIngameDemoResource
// 0x0008 (0x0348 - 0x0340)
class AATIngameDemoResource : public AATDemoResource
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATIngameDemoResource");
		return ptr;
	}

};


// Class AT.ATIngameDemoResource_Tandem
// 0x0008 (0x0350 - 0x0348)
class AATIngameDemoResource_Tandem : public AATIngameDemoResource
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATIngameDemoResource_Tandem");
		return ptr;
	}

};


// Class AT.ATInteractComponent
// 0x00A0 (0x0630 - 0x0590)
class UATInteractComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0590(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractComponent");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterface
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterface");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceAnimal
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceAnimal : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceAnimal");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceBonfire
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceBonfire : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceBonfire");
		return ptr;
	}

};


// Class AT.ATFieldInputComponent
// 0x0030 (0x0228 - 0x01F8)
class UATFieldInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x01F8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATFieldInputComponent");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceGashapon
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceGashapon : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceGashapon");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceItemPoint
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceItemPoint : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceItemPoint");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceItemActor
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceItemActor : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceItemActor");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceMemories
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceMemories : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceMemories");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceNPC
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceNPC : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceNPC");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceTraining
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceTraining : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceTraining");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceWorldMap
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceWorldMap : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceWorldMap");
		return ptr;
	}

};


// Class AT.ATInterface_SpawnProjectile
// 0x0000 (0x0028 - 0x0028)
class UATInterface_SpawnProjectile : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInterface_SpawnProjectile");
		return ptr;
	}

};


// Class AT.ItemTrader
// 0x0010 (0x0110 - 0x0100)
class UItemTrader : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ItemTrader");
		return ptr;
	}

};


// Class AT.ATInteractTargetInterfaceFishing
// 0x0000 (0x0028 - 0x0028)
class UATInteractTargetInterfaceFishing : public UATInteractTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTargetInterfaceFishing");
		return ptr;
	}

};


// Class AT.ATJostleBeam
// 0x0130 (0x0240 - 0x0110)
class UATJostleBeam : public UATDirectionBase
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0110(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATJostleBeam");
		return ptr;
	}

};


// Class AT.ATJostleBeamManager
// 0x0328 (0x0350 - 0x0028)
class UATJostleBeamManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0028(0x02D0) MISSED OFFSET
	class UATJostleBeamParam*                          ATJostleBeamParam;                                        // 0x02F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0300(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATJostleBeamManager");
		return ptr;
	}

};


// Class AT.ATJostleBeamParam
// 0x0120 (0x0148 - 0x0028)
class UATJostleBeamParam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0028(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATJostleBeamParam");
		return ptr;
	}

};


// Class AT.KPIRequester
// 0x0098 (0x00C0 - 0x0028)
class UKPIRequester : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.KPIRequester");
		return ptr;
	}


	void ResAPI();
};


// Class AT.ATLevelBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UATLevelBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATLevelBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_RequestFlagInWorldMap();
	void STATIC_RequestEvent(const struct FATLevelEventParam& Param);
	void STATIC_RemoveLevelCondition();
	void STATIC_Level_UnloadSubLevel();
	void STATIC_Level_LoadSubLevel();
	void STATIC_Level_DeactivateSubLevel();
	void STATIC_Level_ActivateSubLevel();
	void STATIC_IsInDoor();
	void STATIC_GetLevelManager();
	void STATIC_ExitDoor();
};


// Class AT.ATLevelManager
// 0x0140 (0x0518 - 0x03D8)
class AATLevelManager : public ACFLevelManager
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x03D8(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATLevelManager");
		return ptr;
	}

};


// Class AT.KPISettings
// 0x0050 (0x0088 - 0x0038)
class UKPISettings : public UDeveloperSettings
{
public:
	struct FString                                     URL;                                                      // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.KPISettings");
		return ptr;
	}

};


// Class AT.ATLevelScriptActor
// 0x0000 (0x0340 - 0x0340)
class AATLevelScriptActor : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATLevelScriptActor");
		return ptr;
	}


	void ReceiveDemoEvent();
	void OnLevelLoaded();
};


// Class AT.ATLineComponent
// 0x0020 (0x0590 - 0x0570)
class UATLineComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0570(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATLineComponent");
		return ptr;
	}

};


// Class AT.ATLongBlowoffManager
// 0x0028 (0x0050 - 0x0028)
class UATLongBlowoffManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATLongBlowoffManager");
		return ptr;
	}

};


// Class AT.ATLookAtAnimationBlendInterface
// 0x0000 (0x0028 - 0x0028)
class UATLookAtAnimationBlendInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATLookAtAnimationBlendInterface");
		return ptr;
	}

};


// Class AT.ATLookAtAnimationInterface
// 0x0000 (0x0028 - 0x0028)
class UATLookAtAnimationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATLookAtAnimationInterface");
		return ptr;
	}

};


// Class AT.LookAtCalculator
// 0x0040 (0x0140 - 0x0100)
class ULookAtCalculator : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0100(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LookAtCalculator");
		return ptr;
	}

};


// Class AT.ATMapIconComponent
// 0x0030 (0x0130 - 0x0100)
class UATMapIconComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMapIconComponent");
		return ptr;
	}

};


// Class AT.ATMechaDevAlwaysResourceManager
// 0x0000 (0x0028 - 0x0028)
class UATMechaDevAlwaysResourceManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevAlwaysResourceManager");
		return ptr;
	}

};


// Class AT.ATMechaDevMachineActor
// 0x0000 (0x03C0 - 0x03C0)
class AATMechaDevMachineActor : public ASkeletalMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevMachineActor");
		return ptr;
	}

};


// Class AT.ATMechaDevMachineViewer
// 0x0018 (0x0350 - 0x0338)
class AATMechaDevMachineViewer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevMachineViewer");
		return ptr;
	}

};


// Class AT.ATLongBlowoffObjectManager
// 0x00C0 (0x03F8 - 0x0338)
class AATLongBlowoffObjectManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0338(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATLongBlowoffObjectManager");
		return ptr;
	}

};


// Class AT.ATMechaDevSceneCapture2D
// 0x0000 (0x0348 - 0x0348)
class AATMechaDevSceneCapture2D : public ASceneCapture2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevSceneCapture2D");
		return ptr;
	}

};


// Class AT.ATMechaDevManager
// 0x0070 (0x03A8 - 0x0338)
class AATMechaDevManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0338(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevManager");
		return ptr;
	}

};


// Class AT.ATStateBase
// 0x0008 (0x0030 - 0x0028)
class UATStateBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATStateBase");
		return ptr;
	}

};


// Class AT.ATMechaDevState_Base
// 0x0020 (0x0050 - 0x0030)
class UATMechaDevState_Base : public UATStateBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevState_Base");
		return ptr;
	}

};


// Class AT.ATMechaDevState_None
// 0x0000 (0x0050 - 0x0050)
class UATMechaDevState_None : public UATMechaDevState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevState_None");
		return ptr;
	}

};


// Class AT.ATMechaDevResourceManager
// 0x0030 (0x0368 - 0x0338)
class AATMechaDevResourceManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0338(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevResourceManager");
		return ptr;
	}

};


// Class AT.ATMechaDevState_Direction
// 0x0000 (0x0050 - 0x0050)
class UATMechaDevState_Direction : public UATMechaDevState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevState_Direction");
		return ptr;
	}

};


// Class AT.ATStateMachineBase
// 0x0028 (0x0050 - 0x0028)
class UATStateMachineBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATStateMachineBase");
		return ptr;
	}

};


// Class AT.ATMechaDevStateMachine
// 0x0008 (0x0058 - 0x0050)
class UATMechaDevStateMachine : public UATStateMachineBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevStateMachine");
		return ptr;
	}

};


// Class AT.ATMenuInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATMenuInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMenuInputComponent");
		return ptr;
	}

};


// Class AT.ATMenuWorldMapInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATMenuWorldMapInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMenuWorldMapInputComponent");
		return ptr;
	}

};


// Class AT.MiniQuest
// 0x0018 (0x0350 - 0x0338)
class AMiniQuest : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MiniQuest");
		return ptr;
	}


	void OnIngameBegan();
	void OnBrokeObject();
	void OnAddedItem();
};


// Class AT.MissionStore
// 0x00E0 (0x0108 - 0x0028)
class UMissionStore : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MissionStore");
		return ptr;
	}


	void OnFinishedEventBattle();
	void OnFinishedBattle();
};


// Class AT.ATModelFaderComponent
// 0x0038 (0x0138 - 0x0100)
class UATModelFaderComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0100(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATModelFaderComponent");
		return ptr;
	}

};


// Class AT.ATMovableEnvObj
// 0x00C0 (0x0310 - 0x0250)
class UATMovableEnvObj : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0250(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMovableEnvObj");
		return ptr;
	}

};


// Class AT.ATMovableEnvObj_Rotate
// 0x0020 (0x0330 - 0x0310)
class UATMovableEnvObj_Rotate : public UATMovableEnvObj
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0310(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMovableEnvObj_Rotate");
		return ptr;
	}

};


// Class AT.ATMovableEnvObj_Waver
// 0x0020 (0x0330 - 0x0310)
class UATMovableEnvObj_Waver : public UATMovableEnvObj
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0310(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMovableEnvObj_Waver");
		return ptr;
	}

};


// Class AT.MoveAnimation
// 0x0000 (0x0028 - 0x0028)
class UMoveAnimation : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MoveAnimation");
		return ptr;
	}


	void SetEnableMove(bool bEnabled);
	void IsEnableMove();
};


// Class AT.ATMechaDevState_DevMenu
// 0x0008 (0x0058 - 0x0050)
class UATMechaDevState_DevMenu : public UATMechaDevState_Base
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATMechaDevState_DevMenu");
		return ptr;
	}

};


// Class AT.ATNavigationInvokerComponent
// 0x0000 (0x0108 - 0x0108)
class UATNavigationInvokerComponent : public UNavigationInvokerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATNavigationInvokerComponent");
		return ptr;
	}

};


// Class AT.ATNimbusTandemCharacterAnimInstance
// 0x0020 (0x03E0 - 0x03C0)
class UATNimbusTandemCharacterAnimInstance : public UAT_AnimInstance
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03C0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATNimbusTandemCharacterAnimInstance");
		return ptr;
	}

};


// Class AT.ATPlaceObjectPreviewActor
// 0x0050 (0x0388 - 0x0338)
class AATPlaceObjectPreviewActor : public AActor
{
public:
	struct FPlaceObjectPatternTableRow                 Param;                                                    // 0x0338(0x0040) (Edit)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0378(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlaceObjectPreviewActor");
		return ptr;
	}

};


// Class AT.ATObjectPlacementComponent
// 0x0090 (0x0190 - 0x0100)
class UATObjectPlacementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0100(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATObjectPlacementComponent");
		return ptr;
	}

};


// Class AT.ATObjectPool
// 0x0038 (0x0060 - 0x0028)
class UATObjectPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATObjectPool");
		return ptr;
	}

};


// Class AT.ParticleHolder
// 0x0018 (0x0118 - 0x0100)
class UParticleHolder : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ParticleHolder");
		return ptr;
	}

};


// Class AT.ATParticleManager
// 0x00A0 (0x01A0 - 0x0100)
class UATParticleManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0100(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATParticleManager");
		return ptr;
	}

};


// Class AT.ATParty
// 0x0270 (0x0298 - 0x0028)
class UATParty : public UObject
{
public:
	unsigned char                                      UnknownData00[0x270];                                     // 0x0028(0x0270) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATParty");
		return ptr;
	}

};


// Class AT.ATPartyManager
// 0x0088 (0x0188 - 0x0100)
class UATPartyManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0100(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPartyManager");
		return ptr;
	}

};


// Class AT.ATPlatformFeatures
// 0x0000 (0x0028 - 0x0028)
class UATPlatformFeatures : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlatformFeatures");
		return ptr;
	}


	void EnableStreaming();
	void EnableSharing();
	void EnableScreenshots();
	void EnableRecording();
};


// Class AT.ATPlayerAutoControlComponent
// 0x0048 (0x0148 - 0x0100)
class UATPlayerAutoControlComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0100(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerAutoControlComponent");
		return ptr;
	}

};


// Class AT.ATPlayerAutoControlTrigger
// 0x00D0 (0x0408 - 0x0338)
class AATPlayerAutoControlTrigger : public AActor
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0338(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerAutoControlTrigger");
		return ptr;
	}

};


// Class AT.ATPlayerCameraInput
// 0x0018 (0x0210 - 0x01F8)
class UATPlayerCameraInput : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerCameraInput");
		return ptr;
	}

};


// Class AT.ATPlayerCameraManager
// 0x1D00 (0x4960 - 0x2C60)
class AATPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x1D00];                                    // 0x2C60(0x1D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerCameraManager");
		return ptr;
	}

};


// Class AT.ATPlayerController
// 0x0218 (0x08D0 - 0x06B8)
class AATPlayerController : public AATPlayerControllerBase
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x06B8(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerController");
		return ptr;
	}

};


// Class AT.ATPlayerMoveInput
// 0x02C8 (0x04C0 - 0x01F8)
class UATPlayerMoveInput : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x2C8];                                     // 0x01F8(0x02C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerMoveInput");
		return ptr;
	}

};


// Class AT.ATPlayerStart
// 0x0008 (0x0370 - 0x0368)
class AATPlayerStart : public APlayerStart
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPlayerStart");
		return ptr;
	}

};


// Class AT.ATPoseSnapshotComponent
// 0x0090 (0x02E0 - 0x0250)
class UATPoseSnapshotComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0250(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPoseSnapshotComponent");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectBase
// 0x0080 (0x00A8 - 0x0028)
class UATPostProcessEffectBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectBase");
		return ptr;
	}

};


// Class AT.ATPostEffectCmnSkillAquisition
// 0x0008 (0x00B0 - 0x00A8)
class UATPostEffectCmnSkillAquisition : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostEffectCmnSkillAquisition");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectBlur
// 0x0028 (0x00D0 - 0x00A8)
class UATPostProcessEffectBlur : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectBlur");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectCmnAfterimage
// 0x0008 (0x00B0 - 0x00A8)
class UATPostProcessEffectCmnAfterimage : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectCmnAfterimage");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectCmnHologram
// 0x0010 (0x00B8 - 0x00A8)
class UATPostProcessEffectCmnHologram : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectCmnHologram");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectColorGrading
// 0x0010 (0x00B8 - 0x00A8)
class UATPostProcessEffectColorGrading : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectColorGrading");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectCommandPalette
// 0x0020 (0x00C8 - 0x00A8)
class UATPostProcessEffectCommandPalette : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectCommandPalette");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectDeathWarning
// 0x0030 (0x00D8 - 0x00A8)
class UATPostProcessEffectDeathWarning : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectDeathWarning");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectEnemySearch
// 0x0020 (0x00C8 - 0x00A8)
class UATPostProcessEffectEnemySearch : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectEnemySearch");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectFishShadows
// 0x0010 (0x00B8 - 0x00A8)
class UATPostProcessEffectFishShadows : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectFishShadows");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectFlash
// 0x0010 (0x00B8 - 0x00A8)
class UATPostProcessEffectFlash : public UATPostProcessEffectBase
{
public:
	class UMaterial*                                   Material;                                                 // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectFlash");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectFringe
// 0x0008 (0x00B0 - 0x00A8)
class UATPostProcessEffectFringe : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectFringe");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectSilhouette
// 0x0010 (0x00B8 - 0x00A8)
class UATPostProcessEffectSilhouette : public UATPostProcessEffectBase
{
public:
	class UMaterial*                                   Material;                                                 // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectSilhouette");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectTimeStop
// 0x0018 (0x00C0 - 0x00A8)
class UATPostProcessEffectTimeStop : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectTimeStop");
		return ptr;
	}

};


// Class AT.ATPreRenderDemoCtrl
// 0x0058 (0x00A0 - 0x0048)
class UATPreRenderDemoCtrl : public UATDemoCtrlBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPreRenderDemoCtrl");
		return ptr;
	}

};


// Class AT.Projectile
// 0x0078 (0x03B0 - 0x0338)
class AProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0338(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile");
		return ptr;
	}

};


// Class AT.ATProjectileBeam
// 0x0280 (0x0630 - 0x03B0)
class AATProjectileBeam : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x03B0(0x0280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileBeam");
		return ptr;
	}

};


// Class AT.ATProjectileBomb
// 0x00E8 (0x0498 - 0x03B0)
class AATProjectileBomb : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0xE8];                                      // 0x03B0(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileBomb");
		return ptr;
	}

};


// Class AT.ATProjectileBullet
// 0x0178 (0x0528 - 0x03B0)
class AATProjectileBullet : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x03B0(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileBullet");
		return ptr;
	}

};


// Class AT.ATProjectileBullet_Box
// 0x0010 (0x0538 - 0x0528)
class AATProjectileBullet_Box : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0528(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileBullet_Box");
		return ptr;
	}

};


// Class AT.ATProjectileComponent
// 0x0008 (0x0108 - 0x0100)
class UATProjectileComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileComponent");
		return ptr;
	}

};


// Class AT.ATProjectileComponentHoming
// 0x0020 (0x0128 - 0x0108)
class UATProjectileComponentHoming : public UATProjectileComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0108(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileComponentHoming");
		return ptr;
	}

};


// Class AT.ATProjectileComponentParabola
// 0x0008 (0x0110 - 0x0108)
class UATProjectileComponentParabola : public UATProjectileComponent
{
public:
	float                                              Gravity;                                                  // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileComponentParabola");
		return ptr;
	}

};


// Class AT.ATProjectileDiffusionMissile
// 0x0058 (0x0580 - 0x0528)
class AATProjectileDiffusionMissile : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0528(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileDiffusionMissile");
		return ptr;
	}

};


// Class AT.ATProjectileField
// 0x00F0 (0x04A0 - 0x03B0)
class AATProjectileField : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x03B0(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileField");
		return ptr;
	}

};


// Class AT.ATProjectileIndicationBomb
// 0x0050 (0x04E8 - 0x0498)
class AATProjectileIndicationBomb : public AATProjectileBomb
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0498(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileIndicationBomb");
		return ptr;
	}

};


// Class AT.ATProjectileManager
// 0x0048 (0x0148 - 0x0100)
class UATProjectileManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0100(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileManager");
		return ptr;
	}

};


// Class AT.ATProjectileMeanderingMissile
// 0x0058 (0x0580 - 0x0528)
class AATProjectileMeanderingMissile : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0528(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileMeanderingMissile");
		return ptr;
	}

};


// Class AT.ATProjectileMine
// 0x0168 (0x0518 - 0x03B0)
class AATProjectileMine : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x03B0(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileMine");
		return ptr;
	}

};


// Class AT.ATProjectileMultiHitComponent
// 0x00E0 (0x01E0 - 0x0100)
class UATProjectileMultiHitComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0100(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileMultiHitComponent");
		return ptr;
	}

};


// Class AT.ATProjectileReplicateBody
// 0x0158 (0x0508 - 0x03B0)
class AATProjectileReplicateBody : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x03B0(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectileReplicateBody");
		return ptr;
	}

};


// Class AT.QuestAttachment
// 0x0048 (0x0148 - 0x0100)
class UQuestAttachment : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0100(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestAttachment");
		return ptr;
	}

};


// Class AT.QuestBalloonTalk
// 0x0070 (0x0170 - 0x0100)
class UQuestBalloonTalk : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestBalloonTalk");
		return ptr;
	}

};


// Class AT.QuestCharacter
// 0x0330 (0x0BF0 - 0x08C0)
class AQuestCharacter : public AAT_CharacterBase
{
public:
	unsigned char                                      UnknownData00[0x330];                                     // 0x08C0(0x0330) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestCharacter");
		return ptr;
	}

};


// Class AT.QuestCharacterAnimationSwitcher
// 0x0018 (0x0118 - 0x0100)
class UQuestCharacterAnimationSwitcher : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestCharacterAnimationSwitcher");
		return ptr;
	}

};


// Class AT.QuestCharacterAnimatorCpl002
// 0x0090 (0x0190 - 0x0100)
class UQuestCharacterAnimatorCpl002 : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0100(0x0040) MISSED OFFSET
	                                                   State;                                                    // 0x0140(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4F];                                      // 0x0141(0x004F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestCharacterAnimatorCpl002");
		return ptr;
	}

};


// Class AT.QuestCostumeChanger
// 0x0080 (0x0180 - 0x0100)
class UQuestCostumeChanger : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0100(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestCostumeChanger");
		return ptr;
	}

};


// Class AT.QuestDirector
// 0x0048 (0x0380 - 0x0338)
class AQuestDirector : public AActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0338(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestDirector");
		return ptr;
	}

};


// Class AT.QuestDistanceObserver
// 0x0018 (0x0118 - 0x0100)
class UQuestDistanceObserver : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestDistanceObserver");
		return ptr;
	}

};


// Class AT.QuestEventObservable
// 0x0000 (0x0028 - 0x0028)
class UQuestEventObservable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestEventObservable");
		return ptr;
	}


	void OnQuestGeneralTalkEvent();
};


// Class AT.QuestHiddenSwitcher
// 0x0030 (0x0130 - 0x0100)
class UQuestHiddenSwitcher : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestHiddenSwitcher");
		return ptr;
	}

};


// Class AT.QuestPhaseBase
// 0x0030 (0x0060 - 0x0030)
class UQuestPhaseBase : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhaseBase");
		return ptr;
	}

};


// Class AT.QuestPhase_Blur
// 0x0010 (0x0070 - 0x0060)
class UQuestPhase_Blur : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Blur");
		return ptr;
	}

};


// Class AT.QuestPhase_Camping
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_Camping : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Camping");
		return ptr;
	}

};


// Class AT.QuestPhase_ChangeCharacter
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_ChangeCharacter : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_ChangeCharacter");
		return ptr;
	}


	void OnChangedPlayer(class AAT_Character* Target);
};


// Class AT.QuestPhase_Community
// 0x0020 (0x0080 - 0x0060)
class UQuestPhase_Community : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Community");
		return ptr;
	}

};


// Class AT.QuestPhase_DestroyEnemiesBase
// 0x0010 (0x0070 - 0x0060)
class UQuestPhase_DestroyEnemiesBase : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_DestroyEnemiesBase");
		return ptr;
	}

};


// Class AT.QuestPhase_Door
// 0x0008 (0x0068 - 0x0060)
class UQuestPhase_Door : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Door");
		return ptr;
	}

};


// Class AT.QuestPhase_Empty
// 0x0008 (0x0068 - 0x0060)
class UQuestPhase_Empty : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Empty");
		return ptr;
	}

};


// Class AT.QuestPhase_Loading
// 0x0010 (0x0070 - 0x0060)
class UQuestPhase_Loading : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Loading");
		return ptr;
	}

};


// Class AT.QuestPhase_Minigame
// 0x0020 (0x0080 - 0x0060)
class UQuestPhase_Minigame : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Minigame");
		return ptr;
	}

};


// Class AT.QuestPhase_Reward
// 0x0008 (0x0068 - 0x0060)
class UQuestPhase_Reward : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Reward");
		return ptr;
	}

};


// Class AT.QuestPhase_Selection
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_Selection : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Selection");
		return ptr;
	}

};


// Class AT.QuestPhase_Tutorial
// 0x0010 (0x0070 - 0x0060)
class UQuestPhase_Tutorial : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Tutorial");
		return ptr;
	}

};


// Class AT.QuestPhase_WindowClosed
// 0x0038 (0x0098 - 0x0060)
class UQuestPhase_WindowClosed : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_WindowClosed");
		return ptr;
	}

};


// Class AT.QuestPhase_WishDragonBall
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_WishDragonBall : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_WishDragonBall");
		return ptr;
	}


	void TryClear();
};


// Class AT.ATQuestRetryActor
// 0x0028 (0x0360 - 0x0338)
class AATQuestRetryActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0338(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATQuestRetryActor");
		return ptr;
	}

};


// Class AT.ATQuestRetryManager
// 0x0098 (0x00C0 - 0x0028)
class UATQuestRetryManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATQuestRetryManager");
		return ptr;
	}

};


// Class AT.ATQuestRetryState_Base
// 0x0010 (0x0040 - 0x0030)
class UATQuestRetryState_Base : public UATStateBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATQuestRetryState_Base");
		return ptr;
	}

};


// Class AT.ATQuestRetryState_None
// 0x0000 (0x0040 - 0x0040)
class UATQuestRetryState_None : public UATQuestRetryState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATQuestRetryState_None");
		return ptr;
	}

};


// Class AT.ATPostProcessEffectDark
// 0x0018 (0x00C0 - 0x00A8)
class UATPostProcessEffectDark : public UATPostProcessEffectBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPostProcessEffectDark");
		return ptr;
	}

};


// Class AT.ATQuestRetryState_Menu
// 0x0000 (0x0040 - 0x0040)
class UATQuestRetryState_Menu : public UATQuestRetryState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATQuestRetryState_Menu");
		return ptr;
	}

};


// Class AT.ATQuestRetryState_Direction
// 0x0000 (0x0040 - 0x0040)
class UATQuestRetryState_Direction : public UATQuestRetryState_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATQuestRetryState_Direction");
		return ptr;
	}

};


// Class AT.ATQuestRetryStateMachine
// 0x0008 (0x0058 - 0x0050)
class UATQuestRetryStateMachine : public UATStateMachineBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATQuestRetryStateMachine");
		return ptr;
	}

};


// Class AT.QuestSpawner
// 0x0008 (0x0108 - 0x0100)
class UQuestSpawner : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestSpawner");
		return ptr;
	}

};


// Class AT.ATQuestWorldMapParamAnalyzer
// 0x0010 (0x0038 - 0x0028)
class UATQuestWorldMapParamAnalyzer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATQuestWorldMapParamAnalyzer");
		return ptr;
	}

};


// Class AT.ATRestrictMoveControl
// 0x0018 (0x0118 - 0x0100)
class UATRestrictMoveControl : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATRestrictMoveControl");
		return ptr;
	}


	void SetTargetLanding();
	void SetStandSecond();
	void SetStandFirst();
	void SetStandBoost();
	void SetSearch();
	void SetRideAll();
	void SetNimbusMove();
	void SetJump();
	void SetFloatMove();
	void SetFloatBoost();
	void SetFieldShot();
	void SetByPreset();
	void SetAll();
	void ResetAll();
};


// Class AT.ATRideMenuInputComponent
// 0x0000 (0x01E8 - 0x01E8)
class UATRideMenuInputComponent : public UCFDynamicAssignInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATRideMenuInputComponent");
		return ptr;
	}

};


// Class AT.ATRoomCompanionPoint
// 0x0070 (0x03A8 - 0x0338)
class AATRoomCompanionPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0338(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATRoomCompanionPoint");
		return ptr;
	}

};


// Class AT.ATRoomCharaManager
// 0x00B8 (0x0428 - 0x0370)
class AATRoomCharaManager : public AVolume
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0370(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATRoomCharaManager");
		return ptr;
	}

};


// Class AT.ATSaveManager
// 0x00F8 (0x0120 - 0x0028)
class UATSaveManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
	class UATSaveGame*                                 SaveGame;                                                 // 0x0100(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0108(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSaveManager");
		return ptr;
	}

};


// Class AT.ATRoomNPCPoint
// 0x0040 (0x0378 - 0x0338)
class AATRoomNPCPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATRoomNPCPoint");
		return ptr;
	}

};


// Class AT.ATSequencerPlayNotifyState
// 0x0020 (0x0050 - 0x0030)
class UATSequencerPlayNotifyState : public UAnimNotifyState
{
public:
	class ULevelSequence*                              LevelSequence;                                            // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSequencerPlayNotifyState");
		return ptr;
	}

};


// Class AT.ATSceneCaptureComponent2D
// 0x0000 (0x09A0 - 0x09A0)
class UATSceneCaptureComponent2D : public USceneCaptureComponent2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSceneCaptureComponent2D");
		return ptr;
	}


	void SetCaptureEveryFrame();
};


// Class AT.AT_SignOutXone
// 0x0008 (0x0030 - 0x0028)
class UAT_SignOutXone : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_SignOutXone");
		return ptr;
	}

};


// Class AT.ATSkeletalMeshComponent
// 0x0000 (0x0B80 - 0x0B80)
class UATSkeletalMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSkeletalMeshComponent");
		return ptr;
	}

};


// Class AT.ATSndManager
// 0x1A78 (0x1AA8 - 0x0030)
class UATSndManager : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x1A78];                                    // 0x0030(0x1A78) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSndManager");
		return ptr;
	}

};


// Class AT.ATSoundCtr
// 0x0000 (0x0100 - 0x0100)
class UATSoundCtr : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSoundCtr");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PlaySoundFootStep
// 0x0000 (0x0038 - 0x0038)
class UATAnimNotify_PlaySoundFootStep : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlaySoundFootStep");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PlaySoundBattleSe
// 0x0008 (0x0040 - 0x0038)
class UATAnimNotify_PlaySoundBattleSe : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlaySoundBattleSe");
		return ptr;
	}

};


// Class AT.ATSaveGame
// 0x29F588 (0x29F5B0 - 0x0028)
class UATSaveGame : public USaveGame
{
public:
	unsigned char                                      UnknownData00[0x29F588];                                  // 0x0028(0x29F588) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSaveGame");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PlaySoundMinigame
// 0x0008 (0x0040 - 0x0038)
class UATAnimNotify_PlaySoundMinigame : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlaySoundMinigame");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PlaySoundSkill
// 0x0018 (0x0050 - 0x0038)
class UATAnimNotify_PlaySoundSkill : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlaySoundSkill");
		return ptr;
	}

};


// Class AT.ATSound3dComponent
// 0x0040 (0x0140 - 0x0100)
class UATSound3dComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0100(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSound3dComponent");
		return ptr;
	}

};


// Class AT.ATSoundLoader
// 0x00A0 (0x00C8 - 0x0028)
class UATSoundLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSoundLoader");
		return ptr;
	}

};


// Class AT.ATAnimNotify_PlaySoundFieldSe
// 0x0008 (0x0040 - 0x0038)
class UATAnimNotify_PlaySoundFieldSe : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATAnimNotify_PlaySoundFieldSe");
		return ptr;
	}

};


// Class AT.Spawnable
// 0x0000 (0x0028 - 0x0028)
class USpawnable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Spawnable");
		return ptr;
	}


	void SetSpawned();
	void IsSpawned();
};


// Class AT.ATSpawnerFieldMemories
// 0x0020 (0x0358 - 0x0338)
class AATSpawnerFieldMemories : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0338(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSpawnerFieldMemories");
		return ptr;
	}

};


// Class AT.Speakable
// 0x0000 (0x0028 - 0x0028)
class USpeakable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Speakable");
		return ptr;
	}


	void SetEnableLipSync(bool bEnabled);
	void IsEnableLipSync();
	void GetSpeakerId();
};


// Class AT.ATSplineMovement
// 0x0020 (0x0120 - 0x0100)
class UATSplineMovement : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSplineMovement");
		return ptr;
	}

};


// Class AT.ATStarScaleFinishManager
// 0x0070 (0x0098 - 0x0028)
class UATStarScaleFinishManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATStarScaleFinishManager");
		return ptr;
	}

};


// Class AT.ATStoryResultSaveManager
// 0x0000 (0x0030 - 0x0030)
class UATStoryResultSaveManager : public UBaseObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATStoryResultSaveManager");
		return ptr;
	}

};


// Class AT.ATSubQuestInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATSubQuestInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSubQuestInputComponent");
		return ptr;
	}

};


// Class AT.ATSupportSystem
// 0x0070 (0x0098 - 0x0028)
class UATSupportSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSupportSystem");
		return ptr;
	}

};


// Class AT.ATSupportTeamBonusManager
// 0x0028 (0x0128 - 0x0100)
class UATSupportTeamBonusManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSupportTeamBonusManager");
		return ptr;
	}

};


// Class AT.ATSystemWindowInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATSystemWindowInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSystemWindowInputComponent");
		return ptr;
	}

};


// Class AT.AttackRangeEffectEntity
// 0x0080 (0x00A8 - 0x0028)
class UAttackRangeEffectEntity : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AttackRangeEffectEntity");
		return ptr;
	}

};


// Class AT.AttackRangeEffectController
// 0x0000 (0x0060 - 0x0060)
class UAttackRangeEffectController : public UATObjectPool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AttackRangeEffectController");
		return ptr;
	}

};


// Class AT.AttackRangeEffectManager
// 0x0008 (0x0108 - 0x0100)
class UAttackRangeEffectManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AttackRangeEffectManager");
		return ptr;
	}

};


// Class AT.ATTalkEventInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATTalkEventInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTalkEventInputComponent");
		return ptr;
	}

};


// Class AT.TalkEventListener
// 0x0000 (0x0028 - 0x0028)
class UTalkEventListener : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TalkEventListener");
		return ptr;
	}

};


// Class AT.ATTalkInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATTalkInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTalkInputComponent");
		return ptr;
	}

};


// Class AT.ATTargetPointComponent
// 0x0000 (0x0250 - 0x0250)
class UATTargetPointComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTargetPointComponent");
		return ptr;
	}

};


// Class AT.ATTemporarySkeletalMeshComponent
// 0x00A0 (0x0C20 - 0x0B80)
class UATTemporarySkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0B80(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTemporarySkeletalMeshComponent");
		return ptr;
	}

};


// Class AT.ATTickControllManager
// 0x0028 (0x0128 - 0x0100)
class UATTickControllManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTickControllManager");
		return ptr;
	}

};


// Class AT.ATTimerTickExecuter
// 0x0058 (0x0158 - 0x0100)
class UATTimerTickExecuter : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0100(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTimerTickExecuter");
		return ptr;
	}

};


// Class AT.ATTimerTickExecuterManager
// 0x0020 (0x0120 - 0x0100)
class UATTimerTickExecuterManager : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTimerTickExecuterManager");
		return ptr;
	}

};


// Class AT.ATTitleController
// 0x0000 (0x08D0 - 0x08D0)
class AATTitleController : public AATPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTitleController");
		return ptr;
	}

};


// Class AT.ATTitleGameMode
// 0x0000 (0x05F8 - 0x05F8)
class AATTitleGameMode : public AATGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTitleGameMode");
		return ptr;
	}

};


// Class AT.ATTitleLevelScriptActor
// 0x00A0 (0x03E0 - 0x0340)
class AATTitleLevelScriptActor : public AATLevelScriptActor
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0340(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTitleLevelScriptActor");
		return ptr;
	}

};


// Class AT.ATTownCharaCombineMeshComponent
// 0x0000 (0x01A8 - 0x01A8)
class UATTownCharaCombineMeshComponent : public UATCombineMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTownCharaCombineMeshComponent");
		return ptr;
	}

};


// Class AT.ATTownCharacterCostumeChanger
// 0x0000 (0x0180 - 0x0180)
class UATTownCharacterCostumeChanger : public UQuestCostumeChanger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTownCharacterCostumeChanger");
		return ptr;
	}

};


// Class AT.ATTPSSkillViewCancelManager
// 0x0058 (0x0080 - 0x0028)
class UATTPSSkillViewCancelManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTPSSkillViewCancelManager");
		return ptr;
	}

};


// Class AT.ATTutorialInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class UATTutorialInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTutorialInputComponent");
		return ptr;
	}

};


// Class AT.ATUIBannedSkill
// 0x0030 (0x0060 - 0x0030)
class UATUIBannedSkill : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUIBannedSkill");
		return ptr;
	}

};


// Class AT.ATUiCaptureLoader
// 0x00C0 (0x00E8 - 0x0028)
class UATUiCaptureLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUiCaptureLoader");
		return ptr;
	}

};


// Class AT.ATUiCaptureManager
// 0x0060 (0x0090 - 0x0030)
class UATUiCaptureManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUiCaptureManager");
		return ptr;
	}

};


// Class AT.UiCaptureSet
// 0x0038 (0x0068 - 0x0030)
class UUiCaptureSet : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0030(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.UiCaptureSet");
		return ptr;
	}

};


// Class AT.ATUICommonInputComponent
// 0x0008 (0x0200 - 0x01F8)
class UATUICommonInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUICommonInputComponent");
		return ptr;
	}

};


// Class AT.ATUISystemInputComponent
// 0x0008 (0x0200 - 0x01F8)
class UATUISystemInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUISystemInputComponent");
		return ptr;
	}

};


// Class AT.ATUIFullscreenMovie
// 0x0010 (0x0380 - 0x0370)
class UATUIFullscreenMovie : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUIFullscreenMovie");
		return ptr;
	}

};


// Class AT.ATUISubtitles
// 0x0150 (0x0500 - 0x03B0)
class UATUISubtitles : public UATUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x03B0(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUISubtitles");
		return ptr;
	}

};


// Class AT.UpperFacialAnimation
// 0x0000 (0x0028 - 0x0028)
class UUpperFacialAnimation : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.UpperFacialAnimation");
		return ptr;
	}


	void SetEnableUpperFaceAnimation();
	void IsEnableUpperFaceAnimation();
};


// Class AT.ATUseItemContent
// 0x0000 (0x0028 - 0x0028)
class UATUseItemContent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUseItemContent");
		return ptr;
	}

};


// Class AT.ATUseItemBuff
// 0x0000 (0x0028 - 0x0028)
class UATUseItemBuff : public UATUseItemContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUseItemBuff");
		return ptr;
	}

};


// Class AT.ATUseItemBento
// 0x0000 (0x0028 - 0x0028)
class UATUseItemBento : public UATUseItemBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUseItemBento");
		return ptr;
	}

};


// Class AT.ATUseItemMaterial
// 0x0000 (0x0028 - 0x0028)
class UATUseItemMaterial : public UATUseItemBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUseItemMaterial");
		return ptr;
	}

};


// Class AT.ATUseItemHealLife
// 0x0000 (0x0028 - 0x0028)
class UATUseItemHealLife : public UATUseItemContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUseItemHealLife");
		return ptr;
	}

};


// Class AT.ATUseItemRegenLife
// 0x0000 (0x0028 - 0x0028)
class UATUseItemRegenLife : public UATUseItemContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATUseItemRegenLife");
		return ptr;
	}

};


// Class AT.ATVirtualController
// 0x0028 (0x0128 - 0x0100)
class UATVirtualController : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATVirtualController");
		return ptr;
	}

};


// Class AT.ATWaterVolume
// 0x0000 (0x0370 - 0x0370)
class AATWaterVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWaterVolume");
		return ptr;
	}


	void OnOverlapEnd();
	void OnOverlapBegin();
};


// Class AT.ATWearEffectComponent
// 0x01C8 (0x02C8 - 0x0100)
class UATWearEffectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1C8];                                     // 0x0100(0x01C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWearEffectComponent");
		return ptr;
	}

};


// Class AT.ATWindRoad
// 0x0188 (0x04C0 - 0x0338)
class AATWindRoad : public AActor
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x0338(0x0188) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWindRoad");
		return ptr;
	}

};


// Class AT.ATWindRoadManager
// 0x00A8 (0x01A8 - 0x0100)
class UATWindRoadManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0100(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWindRoadManager");
		return ptr;
	}

};


// Class AT.ATWindRoadParamManager
// 0x0050 (0x0078 - 0x0028)
class UATWindRoadParamManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWindRoadParamManager");
		return ptr;
	}

};


// Class AT.ATWorldBlockingVolumeManager
// 0x0038 (0x0138 - 0x0100)
class UATWorldBlockingVolumeManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0100(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWorldBlockingVolumeManager");
		return ptr;
	}

};


// Class AT.ATWorldBlockingVolume
// 0x0088 (0x03F8 - 0x0370)
class AATWorldBlockingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET
	                                                   Type;                                                     // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0370(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData02[0x64];                                      // 0x0394(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWorldBlockingVolume");
		return ptr;
	}

};


// Class AT.ATWorldBorder
// 0x0010 (0x0348 - 0x0338)
class AATWorldBorder : public AActor
{
public:
	class UParticleSystemComponent*                    Border;                                                   // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWorldBorder");
		return ptr;
	}

};


// Class AT.ATWorldMapBoostCamera
// 0x0040 (0x09E0 - 0x09A0)
class AATWorldMapBoostCamera : public ACameraActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x09A0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWorldMapBoostCamera");
		return ptr;
	}

};


// Class AT.ATSoundTest
// 0x0140 (0x0478 - 0x0338)
class AATSoundTest : public AActor
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0338(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATSoundTest");
		return ptr;
	}

};


// Class AT.ATWorldMapToFieldComponent
// 0x0018 (0x0118 - 0x0100)
class UATWorldMapToFieldComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWorldMapToFieldComponent");
		return ptr;
	}

};


// Class AT.ATWorldSettings
// 0x0020 (0x0580 - 0x0560)
class AATWorldSettings : public AWorldSettings
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0560(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWorldSettings");
		return ptr;
	}

};


// Class AT.AuraFruitTreeStaticActor
// 0x0008 (0x0340 - 0x0338)
class AAuraFruitTreeStaticActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AuraFruitTreeStaticActor");
		return ptr;
	}

};


// Class AT.ATWorldMapMovementComponent
// 0x0098 (0x0198 - 0x0100)
class UATWorldMapMovementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0100(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATWorldMapMovementComponent");
		return ptr;
	}

};


// Class AT.ProceduralLeafEffFISMComponent
// 0x0020 (0x07C0 - 0x07A0)
class UProceduralLeafEffFISMComponent : public UFoliageInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x07A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ProceduralLeafEffFISMComponent");
		return ptr;
	}

};


// Class AT.ProceduralDestructFISMComponent
// 0x0060 (0x0820 - 0x07C0)
class UProceduralDestructFISMComponent : public UProceduralLeafEffFISMComponent
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x07C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x07C8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ProceduralDestructFISMComponent");
		return ptr;
	}

};


// Class AT.AuraFruitTreeStaticMeshComponent
// 0x0010 (0x0830 - 0x0820)
class UAuraFruitTreeStaticMeshComponent : public UProceduralDestructFISMComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0820(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AuraFruitTreeStaticMeshComponent");
		return ptr;
	}

};


// Class AT.AuraSearchEventActor
// 0x0098 (0x03D0 - 0x0338)
class AAuraSearchEventActor : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0338(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AuraSearchEventActor");
		return ptr;
	}

};


// Class AT.AuraSearchManager
// 0x0068 (0x0168 - 0x0100)
class UAuraSearchManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0100(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AuraSearchManager");
		return ptr;
	}

};


// Class AT.BaseballGameBallActor
// 0x00D8 (0x0498 - 0x03C0)
class ABaseballGameBallActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x03C0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BaseballGameBallActor");
		return ptr;
	}

};


// Class AT.BaseballGameLoader
// 0x0050 (0x0078 - 0x0028)
class UBaseballGameLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BaseballGameLoader");
		return ptr;
	}

};


// Class AT.MiniGameManager
// 0x0058 (0x0158 - 0x0100)
class UMiniGameManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0100(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MiniGameManager");
		return ptr;
	}

};


// Class AT.BaseballGameManager
// 0x01E8 (0x0340 - 0x0158)
class UBaseballGameManager : public UMiniGameManager
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0158(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BaseballGameManager");
		return ptr;
	}

};


// Class AT.BaseballGamePitcherCharacter
// 0x0020 (0x0770 - 0x0750)
class ABaseballGamePitcherCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0750(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BaseballGamePitcherCharacter");
		return ptr;
	}


	void OnMontageStarted();
	void OnMontageEnded();
	void OnMontageBlendingOut();
};


// Class AT.BaseballGameState
// 0x0008 (0x0038 - 0x0030)
class UBaseballGameState : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BaseballGameState");
		return ptr;
	}

};


// Class AT.BaseballGameTargetPoint
// 0x0010 (0x0348 - 0x0338)
class ABaseballGameTargetPoint : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BaseballGameTargetPoint");
		return ptr;
	}

};


// Class AT.BaseMenu
// 0x00F0 (0x0120 - 0x0030)
class UBaseMenu : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0030(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BaseMenu");
		return ptr;
	}

};


// Class AT.BattleAI_ActionManager
// 0x00B8 (0x00E8 - 0x0030)
class UBattleAI_ActionManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0030(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleAI_ActionManager");
		return ptr;
	}

};


// Class AT.BattleAI_DataTblManager
// 0x0068 (0x0098 - 0x0030)
class UBattleAI_DataTblManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleAI_DataTblManager");
		return ptr;
	}

};


// Class AT.BattleAI_LotManager
// 0x0000 (0x0030 - 0x0030)
class UBattleAI_LotManager : public UBaseObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleAI_LotManager");
		return ptr;
	}

};


// Class AT.BattleAI_MoveManager
// 0x01E0 (0x0210 - 0x0030)
class UBattleAI_MoveManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x1E0];                                     // 0x0030(0x01E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleAI_MoveManager");
		return ptr;
	}

};


// Class AT.BattleAI_StatusCheckManager
// 0x0018 (0x0048 - 0x0030)
class UBattleAI_StatusCheckManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleAI_StatusCheckManager");
		return ptr;
	}

};


// Class AT.BattleBarrier
// 0x0348 (0x0680 - 0x0338)
class ABattleBarrier : public AActor
{
public:
	class UBoxComponent*                               BoxComponent[0x64];                                       // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0658(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleBarrier");
		return ptr;
	}

};


// Class AT.BattleBarrierBox
// 0x0040 (0x0378 - 0x0338)
class ABattleBarrierBox : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleBarrierBox");
		return ptr;
	}

};


// Class AT.BattleManager
// 0x0290 (0x0390 - 0x0100)
class UBattleManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x290];                                     // 0x0100(0x0290) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BattleManager");
		return ptr;
	}

};


// Class AT.BDActorSearch
// 0x0020 (0x0120 - 0x0100)
class UBDActorSearch : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BDActorSearch");
		return ptr;
	}

};


// Class AT.BGMPlayer
// 0x0068 (0x0090 - 0x0028)
class UBGMPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BGMPlayer");
		return ptr;
	}

};


// Class AT.BonfireAnimationPlayer
// 0x00B0 (0x03E8 - 0x0338)
class ABonfireAnimationPlayer : public AActor
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0338(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BonfireAnimationPlayer");
		return ptr;
	}

};


// Class AT.BonfireCharacterAnimationPlayer
// 0x0118 (0x0450 - 0x0338)
class ABonfireCharacterAnimationPlayer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET
	class AAT_Character*                               Character;                                                // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x108];                                     // 0x0348(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BonfireCharacterAnimationPlayer");
		return ptr;
	}

};


// Class AT.BonfireDataTableAccessor
// 0x0028 (0x0360 - 0x0338)
class ABonfireDataTableAccessor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0338(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BonfireDataTableAccessor");
		return ptr;
	}

};


// Class AT.BonfireItem
// 0x0048 (0x0380 - 0x0338)
class ABonfireItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0338(0x0020) MISSED OFFSET
	class USkeletalMesh*                               Item;                                                     // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0368(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BonfireItem");
		return ptr;
	}

};


// Class AT.BonfireSmokeEffectComponent
// 0x0010 (0x07D0 - 0x07C0)
class UBonfireSmokeEffectComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BonfireSmokeEffectComponent");
		return ptr;
	}

};


// Class AT.BookAnimInstance
// 0x0010 (0x0370 - 0x0360)
class UBookAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0360(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BookAnimInstance");
		return ptr;
	}

};


// Class AT.BoostPointActor
// 0x0008 (0x0340 - 0x0338)
class ABoostPointActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BoostPointActor");
		return ptr;
	}

};


// Class AT.BoostPointComponent
// 0x0010 (0x05A0 - 0x0590)
class UBoostPointComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BoostPointComponent");
		return ptr;
	}

};


// Class AT.BreakableDestructibleActor
// 0x0018 (0x0370 - 0x0358)
class ABreakableDestructibleActor : public ADestructibleActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0358(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BreakableDestructibleActor");
		return ptr;
	}

};


// Class AT.BreakableDestructibleComponent
// 0x00A0 (0x0850 - 0x07B0)
class UBreakableDestructibleComponent : public UDestructibleComponent
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x07B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BreakableDestructibleComponent");
		return ptr;
	}

};


// Class AT.BreakableManager
// 0x0068 (0x0168 - 0x0100)
class UBreakableManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0100(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BreakableManager");
		return ptr;
	}

};


// Class AT.BreakableObjRegistSaveIndexActor
// 0x0000 (0x0338 - 0x0338)
class ABreakableObjRegistSaveIndexActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BreakableObjRegistSaveIndexActor");
		return ptr;
	}

};


// Class AT.BreakableStaticMeshActor
// 0x0040 (0x0388 - 0x0348)
class ABreakableStaticMeshActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0348(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BreakableStaticMeshActor");
		return ptr;
	}

};


// Class AT.BreakingDetectorComponent
// 0x0010 (0x0110 - 0x0100)
class UBreakingDetectorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BreakingDetectorComponent");
		return ptr;
	}

};


// Class AT.BreakingTriggerManager
// 0x0068 (0x0168 - 0x0100)
class UBreakingTriggerManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0100(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.BreakingTriggerManager");
		return ptr;
	}

};


// Class AT.CameraEffectVolume
// 0x0028 (0x0398 - 0x0370)
class ACameraEffectVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CameraEffectVolume");
		return ptr;
	}

};


// Class AT.CapturedActorInterface
// 0x0000 (0x0028 - 0x0028)
class UCapturedActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CapturedActorInterface");
		return ptr;
	}

};


// Class AT.CarSplineManager
// 0x0408 (0x0508 - 0x0100)
class UCarSplineManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x408];                                     // 0x0100(0x0408) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CarSplineManager");
		return ptr;
	}

};


// Class AT.CharacterAuraComponent
// 0x0060 (0x0160 - 0x0100)
class UCharacterAuraComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharacterAuraComponent");
		return ptr;
	}

};


// Class AT.CharacterDamageComponent
// 0x01A8 (0x02A8 - 0x0100)
class UCharacterDamageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0100(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharacterDamageComponent");
		return ptr;
	}

};


// Class AT.CharacterDamageComponentHuge
// 0x0020 (0x02C8 - 0x02A8)
class UCharacterDamageComponentHuge : public UCharacterDamageComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharacterDamageComponentHuge");
		return ptr;
	}

};


// Class AT.CharacterHealthComponent
// 0x0048 (0x0148 - 0x0100)
class UCharacterHealthComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0100(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharacterHealthComponent");
		return ptr;
	}

};


// Class AT.CharacterMenu
// 0x0220 (0x0340 - 0x0120)
class UCharacterMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0120(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharacterMenu");
		return ptr;
	}

};


// Class AT.CharacterSkillComponent
// 0x0158 (0x0258 - 0x0100)
class UCharacterSkillComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0100(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharacterSkillComponent");
		return ptr;
	}

};


// Class AT.CharaIconDataTable
// 0x00E0 (0x0108 - 0x0028)
class UCharaIconDataTable : public UObject
{
public:
	class UDataTable*                                  DataTable;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0030(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CharaIconDataTable");
		return ptr;
	}

};


// Class AT.CheckPointEffectComponent
// 0x0018 (0x02B0 - 0x0298)
class UCheckPointEffectComponent : public UAT_LightTowerEffectComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0298(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CheckPointEffectComponent");
		return ptr;
	}

};


// Class AT.CheckPointManageActor
// 0x0068 (0x03A0 - 0x0338)
class ACheckPointManageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0338(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CheckPointManageActor");
		return ptr;
	}

};


// Class AT.Chicken_Component
// 0x0000 (0x06E0 - 0x06E0)
class UChicken_Component : public UAnimalComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Chicken_Component");
		return ptr;
	}

};


// Class AT.CollectionManager
// 0x0788 (0x0888 - 0x0100)
class UCollectionManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x788];                                     // 0x0100(0x0788) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CollectionManager");
		return ptr;
	}

};


// Class AT.CollectivelyCollectVolume
// 0x0000 (0x0370 - 0x0370)
class ACollectivelyCollectVolume : public AVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CollectivelyCollectVolume");
		return ptr;
	}


	void OnOverlapBegin();
};


// Class AT.CommunityBoardMenu
// 0x0008 (0x0128 - 0x0120)
class UCommunityBoardMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CommunityBoardMenu");
		return ptr;
	}

};


// Class AT.CompanionAI
// 0x03D8 (0x0408 - 0x0030)
class UCompanionAI : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x3D8];                                     // 0x0030(0x03D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CompanionAI");
		return ptr;
	}

};


// Class AT.CompZMenu
// 0x0068 (0x0188 - 0x0120)
class UCompZMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0120(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CompZMenu");
		return ptr;
	}

};


// Class AT.CookDataManager
// 0x0038 (0x0370 - 0x0338)
class ACookDataManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0338(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CookDataManager");
		return ptr;
	}

};


// Class AT.CookingDemoDataManager
// 0x0098 (0x03D0 - 0x0338)
class ACookingDemoDataManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0338(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CookingDemoDataManager");
		return ptr;
	}

};


// Class AT.CookingDemoSequencerManager
// 0x0050 (0x0078 - 0x0028)
class UCookingDemoSequencerManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CookingDemoSequencerManager");
		return ptr;
	}

};


// Class AT.CookingDemoTablewareSet
// 0x00C0 (0x03F8 - 0x0338)
class ACookingDemoTablewareSet : public AActor
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0338(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CookingDemoTablewareSet");
		return ptr;
	}

};


// Class AT.FieldActorBase
// 0x0008 (0x0340 - 0x0338)
class AFieldActorBase : public AActor
{
public:
	class USkeletalMeshComponent*                      MeshComponent;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldActorBase");
		return ptr;
	}

};


// Class AT.CookingMachine
// 0x0020 (0x0360 - 0x0340)
class ACookingMachine : public AFieldActorBase
{
public:
	struct FName                                       ID;                                                       // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UQuestActorFindListComponent*                QuestActorFindListComponent;                              // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0350(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CookingMachine");
		return ptr;
	}

};


// Class AT.CheckPointActor
// 0x0018 (0x0350 - 0x0338)
class ACheckPointActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CheckPointActor");
		return ptr;
	}

};


// Class AT.CommunityMenu
// 0x0010 (0x0130 - 0x0120)
class UCommunityMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CommunityMenu");
		return ptr;
	}

};


// Class AT.Credits
// 0x0010 (0x0348 - 0x0338)
class ACredits : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Credits");
		return ptr;
	}

};


// Class AT.CrossTalkConditionBase
// 0x0078 (0x00A8 - 0x0030)
class UCrossTalkConditionBase : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0030(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionBase");
		return ptr;
	}

};


// Class AT.CrossTalkConditionBattleOnce
// 0x0028 (0x00D0 - 0x00A8)
class UCrossTalkConditionBattleOnce : public UCrossTalkConditionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionBattleOnce");
		return ptr;
	}

};


// Class AT.CrossTalkConditionCritical
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionCritical : public UCrossTalkConditionBattleOnce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionCritical");
		return ptr;
	}

};


// Class AT.CrossTalkConditionReduceHP
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionReduceHP : public UCrossTalkConditionBattleOnce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionReduceHP");
		return ptr;
	}

};


// Class AT.CrossTalkConditionDead
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionDead : public UCrossTalkConditionReduceHP
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionDead");
		return ptr;
	}

};


// Class AT.CrossTalkConditionDestroyedEnemiesBase
// 0x0008 (0x00B0 - 0x00A8)
class UCrossTalkConditionDestroyedEnemiesBase : public UCrossTalkConditionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionDestroyedEnemiesBase");
		return ptr;
	}

};


// Class AT.CrossTalkConditionDiscoverEnemyBase
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionDiscoverEnemyBase : public UCrossTalkConditionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionDiscoverEnemyBase");
		return ptr;
	}

};


// Class AT.CrossTalkConditionDiscoverEnemy
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionDiscoverEnemy : public UCrossTalkConditionDiscoverEnemyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionDiscoverEnemy");
		return ptr;
	}

};


// Class AT.CrossTalkConditionDiscoverStrongEnemy
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionDiscoverStrongEnemy : public UCrossTalkConditionDiscoverEnemyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionDiscoverStrongEnemy");
		return ptr;
	}

};


// Class AT.CrossTalkConditionElapseFree
// 0x0010 (0x00B8 - 0x00A8)
class UCrossTalkConditionElapseFree : public UCrossTalkConditionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionElapseFree");
		return ptr;
	}

};


// Class AT.CookingState
// 0x0010 (0x0040 - 0x0030)
class UCookingState : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CookingState");
		return ptr;
	}


	void OnMontageBlendingOutStart();
	void OnMontageBlendingOut();
	void OnDemoTiming();
};


// Class AT.CrossTalkConditionElapseMove
// 0x0008 (0x00B0 - 0x00A8)
class UCrossTalkConditionElapseMove : public UCrossTalkConditionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionElapseMove");
		return ptr;
	}

};


// Class AT.CrossTalkConditionElapseStay
// 0x0020 (0x00C8 - 0x00A8)
class UCrossTalkConditionElapseStay : public UCrossTalkConditionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionElapseStay");
		return ptr;
	}

};


// Class AT.CrossTalkConditionEndBattle
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionEndBattle : public UCrossTalkConditionBattleOnce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionEndBattle");
		return ptr;
	}

};


// Class AT.CrossTalkConditionGetItem
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionGetItem : public UCrossTalkConditionBattleOnce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionGetItem");
		return ptr;
	}

};


// Class AT.CrossTalkConditionHaraheriContinuation
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionHaraheriContinuation : public UCrossTalkConditionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionHaraheriContinuation");
		return ptr;
	}

};


// Class AT.CrossTalkConditionHaraheriStart
// 0x0028 (0x00D0 - 0x00A8)
class UCrossTalkConditionHaraheriStart : public UCrossTalkConditionBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00A8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionHaraheriStart");
		return ptr;
	}

};


// Class AT.CrossTalkConditionHitSkill
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionHitSkill : public UCrossTalkConditionBattleOnce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionHitSkill");
		return ptr;
	}

};


// Class AT.CrossTalkConditionInvokeSkill
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionInvokeSkill : public UCrossTalkConditionBattleOnce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionInvokeSkill");
		return ptr;
	}

};


// Class AT.CrossTalkConditionLongBlowOff
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionLongBlowOff : public UCrossTalkConditionBattleOnce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionLongBlowOff");
		return ptr;
	}

};


// Class AT.CrossTalkConditionReceiveRequest
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionReceiveRequest : public UCrossTalkConditionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionReceiveRequest");
		return ptr;
	}

};


// Class AT.CrossTalkConditionStartBattle
// 0x0020 (0x00C8 - 0x00A8)
class UCrossTalkConditionStartBattle : public UCrossTalkConditionBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionStartBattle");
		return ptr;
	}

};


// Class AT.CrossTalkConditionFishing
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionFishing : public UCrossTalkConditionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionFishing");
		return ptr;
	}

};


// Class AT.CrossTalkConditionTouchAutoControl
// 0x0008 (0x00B0 - 0x00A8)
class UCrossTalkConditionTouchAutoControl : public UCrossTalkConditionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionTouchAutoControl");
		return ptr;
	}

};


// Class AT.CrossTalkConditionTouchLandmark
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionTouchLandmark : public UCrossTalkConditionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionTouchLandmark");
		return ptr;
	}

};


// Class AT.CrossTalkConditionTouchNoEntryVolume
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionTouchNoEntryVolume : public UCrossTalkConditionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionTouchNoEntryVolume");
		return ptr;
	}


	void OnBeginOverlap();
};


// Class AT.CrossTalkConditionTouchVolume
// 0x0000 (0x00A8 - 0x00A8)
class UCrossTalkConditionTouchVolume : public UCrossTalkConditionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionTouchVolume");
		return ptr;
	}

};


// Class AT.CrossTalkManager
// 0x0140 (0x0240 - 0x0100)
class UCrossTalkManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0100(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkManager");
		return ptr;
	}

};


// Class AT.CrossTalkVolume
// 0x0008 (0x0378 - 0x0370)
class ACrossTalkVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkVolume");
		return ptr;
	}

};


// Class AT.DataParameter
// 0x0000 (0x0028 - 0x0028)
class UDataParameter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DataParameter");
		return ptr;
	}

};


// Class AT.DebugManager
// 0x00C8 (0x00F8 - 0x0030)
class UDebugManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0030(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DebugManager");
		return ptr;
	}

};


// Class AT.AT_DebugMapInfo
// 0x0030 (0x03A0 - 0x0370)
class UAT_DebugMapInfo : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.AT_DebugMapInfo");
		return ptr;
	}

};


// Class AT.DebugMenu
// 0x01C0 (0x01E8 - 0x0028)
class UDebugMenu : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0028(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DebugMenu");
		return ptr;
	}

};


// Class AT.Deer_Component
// 0x0040 (0x0720 - 0x06E0)
class UDeer_Component : public UAnimalComponentBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x06E0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Deer_Component");
		return ptr;
	}

};


// Class AT.DestructibleBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UDestructibleBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DestructibleBlueprintLibrary");
		return ptr;
	}


	void STATIC_DrawDebugComponentChunks();
	void STATIC_DrawDebugActorChunks(class ADestructibleActor* Actor);
};


// Class AT.DestructibleProxyComponent
// 0x0000 (0x0600 - 0x0600)
class UDestructibleProxyComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DestructibleProxyComponent");
		return ptr;
	}

};


// Class AT.Dinosaur_Component
// 0x0120 (0x0800 - 0x06E0)
class UDinosaur_Component : public UAnimalComponentBase
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x06E0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Dinosaur_Component");
		return ptr;
	}

};


// Class AT.Dinosaur_MoveArea
// 0x0010 (0x05A0 - 0x0590)
class UDinosaur_MoveArea : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Dinosaur_MoveArea");
		return ptr;
	}

};


// Class AT.DirectionalLightManager
// 0x0010 (0x0110 - 0x0100)
class UDirectionalLightManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DirectionalLightManager");
		return ptr;
	}

};


// Class AT.DirectionCursorComponent
// 0x0070 (0x0170 - 0x0100)
class UDirectionCursorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DirectionCursorComponent");
		return ptr;
	}

};


// Class AT.DirectionManager
// 0x01E8 (0x02E8 - 0x0100)
class UDirectionManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1E8];                                     // 0x0100(0x01E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DirectionManager");
		return ptr;
	}


	void RequestEndDirection(unsigned char Type);
	void RequestBeginDirection(unsigned char Type);
	void IsRequestType(unsigned char Type);
	void IsDirectionType(unsigned char Type);
	void IsDirection();
	void GetCurrentDirectionTypeName();
};


// Class AT.Dog_Component
// 0x0010 (0x06F0 - 0x06E0)
class UDog_Component : public UAnimalComponentBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Dog_Component");
		return ptr;
	}

};


// Class AT.DragonBallManager
// 0x0320 (0x0420 - 0x0100)
class UDragonBallManager : public UActorComponent
{
public:
	class UDataTable*                                  WishCountParam;                                           // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  WishAddParam;                                             // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  WishLotteryCountParam;                                    // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  WishLotteryGroupParam;                                    // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  WishLotteryParam;                                         // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2F8];                                     // 0x0128(0x02F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DragonBallManager");
		return ptr;
	}

};


// Class AT.DragonBallMenu
// 0x0030 (0x0150 - 0x0120)
class UDragonBallMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0120(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DragonBallMenu");
		return ptr;
	}

};


// Class AT.DragonBallSpawnerCSVOutput
// 0x0020 (0x0358 - 0x0338)
class ADragonBallSpawnerCSVOutput : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0338(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DragonBallSpawnerCSVOutput");
		return ptr;
	}

};


// Class AT.ItemStaticActor
// 0x0050 (0x0398 - 0x0348)
class AItemStaticActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0348(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ItemStaticActor");
		return ptr;
	}

};


// Class AT.DragonBallStaticActor
// 0x0010 (0x03A8 - 0x0398)
class ADragonBallStaticActor : public AItemStaticActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DragonBallStaticActor");
		return ptr;
	}

};


// Class AT.DynamicLandscapeComponent
// 0x0018 (0x0118 - 0x0100)
class UDynamicLandscapeComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DynamicLandscapeComponent");
		return ptr;
	}

};


// Class AT.DynamicLandscapeDamageComponent
// 0x0020 (0x0120 - 0x0100)
class UDynamicLandscapeDamageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DynamicLandscapeDamageComponent");
		return ptr;
	}

};


// Class AT.DynamicLandscapeDirtComponent
// 0x0030 (0x0130 - 0x0100)
class UDynamicLandscapeDirtComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DynamicLandscapeDirtComponent");
		return ptr;
	}

};


// Class AT.EaseTansformMovement
// 0x0060 (0x0160 - 0x0100)
class UEaseTansformMovement : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.EaseTansformMovement");
		return ptr;
	}

};


// Class AT.EncountCheckComponent
// 0x0030 (0x05C0 - 0x0590)
class UEncountCheckComponent : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0590(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.EncountCheckComponent");
		return ptr;
	}

};


// Class AT.EncountDemoManager
// 0x0080 (0x00B0 - 0x0030)
class UEncountDemoManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0030(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.EncountDemoManager");
		return ptr;
	}

};


// Class AT.SpawnDataValue
// 0x0010 (0x0038 - 0x0028)
class USpawnDataValue : public UObject
{
public:
	class UDataTable*                                  SpawnDataTable;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SpawnDataValue");
		return ptr;
	}

};


// Class AT.EncountManager
// 0x00B0 (0x00E0 - 0x0030)
class UEncountManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.EncountManager");
		return ptr;
	}

};


// Class AT.EnemyAI
// 0x0068 (0x0098 - 0x0030)
class UEnemyAI : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.EnemyAI");
		return ptr;
	}

};


// Class AT.CookingManager
// 0x0990 (0x0A90 - 0x0100)
class UCookingManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x990];                                     // 0x0100(0x0990) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CookingManager");
		return ptr;
	}

};


// Class AT.ATEnemyPool
// 0x0000 (0x0060 - 0x0060)
class UATEnemyPool : public UATObjectPool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEnemyPool");
		return ptr;
	}

};


// Class AT.ATEnemyPoolController
// 0x0050 (0x0150 - 0x0100)
class UATEnemyPoolController : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEnemyPoolController");
		return ptr;
	}

};


// Class AT.EventBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UEventBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.EventBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_UnlockSaiyanSagaTrophy();
	void STATIC_UnlockFriezaSagaTrophy();
	void STATIC_UnlockDefeatedPiccoloTrophy();
	void STATIC_UnlockCellSagaTrophy();
	void STATIC_UnlockAtrociousBossTrophy();
	void STATIC_StartQuestGeneralTalkEvent();
	void STATIC_SpawnDragonball();
	void STATIC_SpawnActorWithName(class UClass* ClassName, const struct FTransform& Transform);
	void STATIC_ShowTurtleSchoolTutorial();
	void STATIC_ShowTelop(const struct FTelopInfo& TelopInfo);
	void STATIC_ShowQuestMainLogo();
	void STATIC_ShowQuestImage();
	void STATIC_ShowNextPreviewTitle();
	void STATIC_ShowNextPreviewDetail();
	void STATIC_SetViewTarget();
	void STATIC_SetViewByControlCharacterWithBlemdTime();
	void STATIC_SetViewByControlCharacter();
	void STATIC_SetTargetAim();
	void STATIC_SetSubtitlesQuestDelayTime();
	void STATIC_SetSubtitlesQuest();
	void STATIC_SetSubtitles();
	void STATIC_SetSelectRideIcon();
	void STATIC_SetQuestTalkEventHUDType();
	void STATIC_SetPlayerLocation(const struct FVector& Loc);
	void STATIC_SetMessageIDDelayTime();
	void STATIC_SetHaveDBCharacter(class AAT_Character* Character);
	void STATIC_SetEnableScreenFade();
	void STATIC_SetEnableRidingOnQuest(bool bEnabled);
	void STATIC_SetEnablePlayerCameraView();
	void STATIC_SetEnablePlayerCameraUpdate();
	void STATIC_SetEnablePlatformFeatures();
	void STATIC_SetDrawActor(class AActor* Actor);
	void STATIC_SetDisabledAutoSaveUI();
	void STATIC_SetDisabledAutoSave();
	void STATIC_SetDisableCompletedSave();
	void STATIC_SetCharacterSpeakerId();
	void STATIC_SetCameraAngle();
	void STATIC_SetAvailableTrunks();
	void STATIC_ResetTriggerQuestStart();
	void STATIC_ResetSubtitle();
	void STATIC_ResetMobTalkID();
	void STATIC_ResetHaveDBCharacter(class AAT_Character* Character);
	void STATIC_RequestSimpleWindow();
	void STATIC_RequestQuestNotification();
	void STATIC_RequestQuestCommand();
	void STATIC_RequestOpenLevelWhenResultClosed();
	void STATIC_RequestLoadParts();
	void STATIC_RequestForceCloseGameWindow();
	void STATIC_RequestFadeAfterDemo();
	void STATIC_RequestCrossTalk();
	void STATIC_RequestClearQuestProgressInformation();
	void STATIC_RequestChangeTalkId();
	void STATIC_RequestChangePlayerCharaFromCType();
	void STATIC_RequestAddQuestActorName();
	void STATIC_RemoveSubQuestIcon();
	void STATIC_RemoveMobEnemy();
	void STATIC_RemoveMainQuestIcon();
	void STATIC_RemoveHaveDBCharacter(class AAT_Character* Character);
	void STATIC_RemoveDestination(class AActor* Actor);
	void STATIC_ReleaseZCollection();
	void STATIC_ReleaseQuestTalkEventHUDType();
	void STATIC_Recovery();
	void STATIC_PlayTalkEvent();
	void STATIC_OpenSystemWindowReplacedStrings();
	void STATIC_OpenSystemWindowAppendMessage();
	void STATIC_OpenSystemWindow();
	void STATIC_OpenCommunityFavorRateUpMenu();
	void STATIC_OpenChangePlayerWindow();
	void STATIC_OpenChangePlayerAnim2D();
	void STATIC_OnCryingAnimationFinished();
	void STATIC_NotPlayNextFadeOut();
	void STATIC_LoadQuestImage();
	void STATIC_IsRiding();
	void STATIC_IsLoadedParts();
	void STATIC_IsGeneralTalkingEvent();
	void STATIC_IsEventBattleLoaded();
	void STATIC_IsEqualTalkingCondition(const struct FString& Key);
	void STATIC_IsEnableQuestTalkEventHUDType();
	void STATIC_IsBreakingTriggerOnFromBreakableObj();
	void STATIC_IsBreakingTriggerOn();
	void STATIC_IsActivePlayerCharaType( Type);
	void STATIC_IsActivatedWindow();
	void STATIC_HideTelop();
	void STATIC_HideQuestMainLogo();
	void STATIC_HideNextPreviewTitle();
	void STATIC_HideNextPreviewDetail();
	void STATIC_GrantWish();
	void STATIC_GettingDownVehiclePlayer();
	void STATIC_GetSpeakerFromID();
	void STATIC_GetQuestMainLogoHideTotalFrames();
	void STATIC_GetPlayer();
	void STATIC_GetPartySupportRight();
	void STATIC_GetPartySupportLeft();
	void STATIC_GetPartyLeader();
	void STATIC_GetMessageFromID();
	void STATIC_GetItemNum();
	void STATIC_GetCharacterMoveState();
	void STATIC_GetBrokenReasonFromBreakableObj();
	void STATIC_GetBrokenReason();
	void STATIC_EventBattleStart();
	void STATIC_EventBattleRetry();
	void STATIC_EventBattleRetire();
	void STATIC_EventBattleLoad();
	void STATIC_EventBattleEnd();
	void STATIC_EndQuestMainLogo();
	void STATIC_EndQuestGeneralTalkEvent();
	void STATIC_DisableNpcHeadIcon();
	void STATIC_DeleteFriend();
	void STATIC_DeleteAllFriend();
	void STATIC_DebugStartGame();
	void STATIC_DebugSaveQuest();
	void STATIC_DebugLoadQuest();
	void STATIC_DebugChangeBalloonTalkId();
	void STATIC_DebugAddMoney();
	void STATIC_CreateFriendDetails();
	void STATIC_CountBreakingTriggerOnWithReasonFromBreakableObj();
	void STATIC_CountBreakingTriggerOnWithReason();
	void STATIC_CountBreakingTriggerOnFromBreakableObj();
	void STATIC_CountBreakingTriggerOn();
	void STATIC_ClearSpeakerActor();
	void STATIC_ClearHaveDBCharacter();
	void STATIC_CheckBreakingTriggerWithReasonFromBreakableObj();
	void STATIC_CheckBreakingTriggerWithReason();
	void STATIC_CheckBreakingTriggerFromBreakableObj();
	void STATIC_CheckBreakingTrigger();
	void STATIC_ChangeSubtitle();
	void STATIC_ChangeQuestCharacterParts();
	void STATIC_ChangeQuestActorEnable();
	void STATIC_ChangePlayerParts();
	void STATIC_ChangeNpcTalkID();
	void STATIC_ChangeNpcTalkIcon();
	void STATIC_ChangeMobTalkID();
	void STATIC_ChangeMobCharacterEnable();
	void STATIC_ChangeFriendAIStop();
	void STATIC_ChangeDragonBallState();
	void STATIC_ChangeCharacterParts(class AAT_Character* Character);
	void STATIC_BreakQuest();
	void STATIC_BackTalkTimes(class AActor* Actor);
	void STATIC_AutoMoveToActor(class AActor* Target);
	void STATIC_AddSpeakerMapPlayer();
	void STATIC_AddSpeakerMapActor();
	void STATIC_AddSpeakerMap();
	void STATIC_AddItemsToInventory();
	void STATIC_AddItem();
	void STATIC_AddDestination(class AActor* Actor, unsigned char Type);
};


// Class AT.EventManager
// 0x0018 (0x0118 - 0x0100)
class UEventManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.EventManager");
		return ptr;
	}


	void RequestEventParam(const struct FEventParam& Param);
	void RequestEventI(unsigned char Type);
	void RequestEventF(unsigned char Type);
	void RequestEvent(unsigned char Type);
	void IsRequestType(unsigned char Type);
};


// Class AT.FieldActionBonfireActor
// 0x0228 (0x0590 - 0x0368)
class AFieldActionBonfireActor : public AFieldActionPointActor
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x0368(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldActionBonfireActor");
		return ptr;
	}

};


// Class AT.FieldActionGashaponActor
// 0x0048 (0x03B0 - 0x0368)
class AFieldActionGashaponActor : public AFieldActionPointActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0368(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldActionGashaponActor");
		return ptr;
	}


	void Entry();
};


// Class AT.FieldBgmManager
// 0x0008 (0x0108 - 0x0100)
class UFieldBgmManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldBgmManager");
		return ptr;
	}

};


// Class AT.FieldItemMapIconRegistActor
// 0x0000 (0x0338 - 0x0338)
class AFieldItemMapIconRegistActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldItemMapIconRegistActor");
		return ptr;
	}

};


// Class AT.FieldItemTableComponent
// 0x0120 (0x0220 - 0x0100)
class UFieldItemTableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x0100(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldItemTableComponent");
		return ptr;
	}

};


// Class AT.FieldPointComponent
// 0x0020 (0x0270 - 0x0250)
class UFieldPointComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0250(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldPointComponent");
		return ptr;
	}

};


// Class AT.FieldSphereTriggerComponent
// 0x0000 (0x0590 - 0x0590)
class UFieldSphereTriggerComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FieldSphereTriggerComponent");
		return ptr;
	}

};


// Class AT.FishingArea
// 0x0100 (0x0438 - 0x0338)
class AFishingArea : public AActor
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0338(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishingArea");
		return ptr;
	}

};


// Class AT.FishingAreaGroup
// 0x0028 (0x0050 - 0x0028)
class UFishingAreaGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishingAreaGroup");
		return ptr;
	}

};


// Class AT.FishingDataLoader
// 0x0190 (0x01B8 - 0x0028)
class UFishingDataLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0028(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishingDataLoader");
		return ptr;
	}

};


// Class AT.FishingManager
// 0x0230 (0x0330 - 0x0100)
class UFishingManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x0100(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishingManager");
		return ptr;
	}

};


// Class AT.FishingPointUIComponent
// 0x0000 (0x0270 - 0x0270)
class UFishingPointUIComponent : public UFieldPointComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishingPointUIComponent");
		return ptr;
	}

};


// Class AT.FishingPointUIManager
// 0x0000 (0x0338 - 0x0338)
class AFishingPointUIManager : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishingPointUIManager");
		return ptr;
	}

};


// Class AT.FishingResource
// 0x0190 (0x04C8 - 0x0338)
class AFishingResource : public AActor
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0338(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishingResource");
		return ptr;
	}

};


// Class AT.FishingStartPoint
// 0x0098 (0x03D0 - 0x0338)
class AFishingStartPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0338(0x0028) MISSED OFFSET
	class UFishingPointUIComponent*                    FishingPointUIComponent;                                  // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0368(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishingStartPoint");
		return ptr;
	}

};


// Class AT.FishPawnCPP
// 0x0100 (0x0498 - 0x0398)
class AFishPawnCPP : public APawn
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0398(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FishPawnCPP");
		return ptr;
	}

};


// Class AT.FlightObjectComponent
// 0x0048 (0x0148 - 0x0100)
class UFlightObjectComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0100(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FlightObjectComponent");
		return ptr;
	}

};


// Class AT.FlyingDragon_Component
// 0x0080 (0x0760 - 0x06E0)
class UFlyingDragon_Component : public UAnimalComponentBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x06E0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.FlyingDragon_Component");
		return ptr;
	}

};


// Class AT.GetEnv
// 0x0018 (0x0040 - 0x0028)
class UGetEnv : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GetEnv");
		return ptr;
	}

};


// Class AT.GrassGenerationComponent
// 0x0010 (0x0260 - 0x0250)
class UGrassGenerationComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0250(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassGenerationComponent");
		return ptr;
	}

};


// Class AT.GrassGenerationDestructActor
// 0x0018 (0x0388 - 0x0370)
class AGrassGenerationDestructActor : public ABreakableDestructibleActor
{
public:
	class UGrassGenerationComponent*                   GrassGenerationComponent;                                 // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGrassTypeData*                              GrassTypeData;                                            // 0x0378(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0380(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassGenerationDestructActor");
		return ptr;
	}

};


// Class AT.GrassGenerationDestructComponent
// 0x0000 (0x0850 - 0x0850)
class UGrassGenerationDestructComponent : public UBreakableDestructibleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassGenerationDestructComponent");
		return ptr;
	}

};


// Class AT.GrassGenerationStaticMeshActor
// 0x0018 (0x0360 - 0x0348)
class AGrassGenerationStaticMeshActor : public AStaticMeshActor
{
public:
	class UGrassGenerationComponent*                   GrassGenerationComponent;                                 // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGrassTypeData*                              GrassTypeData;                                            // 0x0350(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassGenerationStaticMeshActor");
		return ptr;
	}

};


// Class AT.GrassTypeData
// 0x0018 (0x0048 - 0x0030)
class UGrassTypeData : public UDataAsset
{
public:
	TArray<struct FGrassData>                          GrassData;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassTypeData");
		return ptr;
	}

};


// Class AT.GravitySphereVolume
// 0x0018 (0x0388 - 0x0370)
class AGravitySphereVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0370(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GravitySphereVolume");
		return ptr;
	}

};


// Class AT.GroupingMapIconActor
// 0x0028 (0x0360 - 0x0338)
class AGroupingMapIconActor : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0338(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GroupingMapIconActor");
		return ptr;
	}

};


// Class AT.HUD_DebugMenu
// 0x00E0 (0x0418 - 0x0338)
class AHUD_DebugMenu : public AActor
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0338(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.HUD_DebugMenu");
		return ptr;
	}

};


// Class AT.HudManager
// 0x0028 (0x0128 - 0x0100)
class UHudManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.HudManager");
		return ptr;
	}


	void VisibleHud( Type);
	void SetHudVisible();
	void ResetVisibleMask();
	void OnlyVisibleHud( Type);
	void IsVisible( Type);
	void InvisibleHud( Type);
};


// Class AT.Inventory
// 0x0050 (0x0150 - 0x0100)
class UInventory : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Inventory");
		return ptr;
	}

};


// Class AT.ItemGetParticleData
// 0x0010 (0x0038 - 0x0028)
class UItemGetParticleData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ItemGetParticleData");
		return ptr;
	}

};


// Class AT.ItemGetParticleManageComponent
// 0x0060 (0x0160 - 0x0100)
class UItemGetParticleManageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ItemGetParticleManageComponent");
		return ptr;
	}

};


// Class AT.ItemInventoryMenu
// 0x00E0 (0x0200 - 0x0120)
class UItemInventoryMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0120(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ItemInventoryMenu");
		return ptr;
	}

};


// Class AT.ItemManager
// 0x0788 (0x0888 - 0x0100)
class UItemManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x780];                                     // 0x0100(0x0780) MISSED OFFSET
	class UATSaveGame*                                 SaveGame;                                                 // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ItemManager");
		return ptr;
	}

};


// Class AT.ItemRestrictionDataTableAccessor
// 0x0028 (0x0128 - 0x0100)
class UItemRestrictionDataTableAccessor : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ItemRestrictionDataTableAccessor");
		return ptr;
	}

};


// Class AT.LoopSetting
// 0x0028 (0x0058 - 0x0030)
class ULoopSetting : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LoopSetting");
		return ptr;
	}

};


// Class AT.KiFeelSetting
// 0x0068 (0x00C0 - 0x0058)
class UKiFeelSetting : public ULoopSetting
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0058(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.KiFeelSetting");
		return ptr;
	}

};


// Class AT.KiSearchComponent
// 0x0070 (0x0170 - 0x0100)
class UKiSearchComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.KiSearchComponent");
		return ptr;
	}

};


// Class AT.KPI
// 0x0018 (0x0040 - 0x0028)
class UKPI : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.KPI");
		return ptr;
	}

};


// Class AT.LandmarkVolume
// 0x0030 (0x03A0 - 0x0370)
class ALandmarkVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0370(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LandmarkVolume");
		return ptr;
	}

};


// Class AT.GrassWeightBackup
// 0x0010 (0x0038 - 0x0028)
class UGrassWeightBackup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightBackup");
		return ptr;
	}

};


// Class AT.GrassWeightIndexArray
// 0x0020 (0x0048 - 0x0028)
class UGrassWeightIndexArray : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightIndexArray");
		return ptr;
	}

};


// Class AT.GrassWeightIndexArrayWrite
// 0x0000 (0x0048 - 0x0048)
class UGrassWeightIndexArrayWrite : public UGrassWeightIndexArray
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightIndexArrayWrite");
		return ptr;
	}

};


// Class AT.GrassWeightBackupArray
// 0x0028 (0x0050 - 0x0028)
class UGrassWeightBackupArray : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightBackupArray");
		return ptr;
	}

};


// Class AT.GrassWeightBackupArrayWrite
// 0x0000 (0x0050 - 0x0050)
class UGrassWeightBackupArrayWrite : public UGrassWeightBackupArray
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightBackupArrayWrite");
		return ptr;
	}

};


// Class AT.GrassWeightBackupControl
// 0x0010 (0x0038 - 0x0028)
class UGrassWeightBackupControl : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightBackupControl");
		return ptr;
	}

};


// Class AT.GrassWeightBackupControlWrite
// 0x0000 (0x0038 - 0x0038)
class UGrassWeightBackupControlWrite : public UGrassWeightBackupControl
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightBackupControlWrite");
		return ptr;
	}

};


// Class AT.GrassWeightBackupControlWriteWork
// 0x0010 (0x0038 - 0x0028)
class UGrassWeightBackupControlWriteWork : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightBackupControlWriteWork");
		return ptr;
	}

};


// Class AT.GrassWeightBackupControlWork
// 0x0010 (0x0038 - 0x0028)
class UGrassWeightBackupControlWork : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GrassWeightBackupControlWork");
		return ptr;
	}

};


// Class AT.LandscapeBreak
// 0x0000 (0x0028 - 0x0028)
class ULandscapeBreak : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LandscapeBreak");
		return ptr;
	}

};


// Class AT.LandscapeBreakCapsule
// 0x0000 (0x0028 - 0x0028)
class ULandscapeBreakCapsule : public ULandscapeBreak
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LandscapeBreakCapsule");
		return ptr;
	}

};


// Class AT.LandscapeBreakSphere
// 0x0000 (0x0028 - 0x0028)
class ULandscapeBreakSphere : public ULandscapeBreak
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LandscapeBreakSphere");
		return ptr;
	}

};


// Class AT.LandscapeDecalManagerComponent
// 0x0010 (0x0110 - 0x0100)
class ULandscapeDecalManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LandscapeDecalManagerComponent");
		return ptr;
	}

};


// Class AT.LeafVolumeManager
// 0x0080 (0x0180 - 0x0100)
class ULeafVolumeManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0100(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LeafVolumeManager");
		return ptr;
	}

};


// Class AT.MineralMiningPointNormal
// 0x01A0 (0x05A0 - 0x0400)
class AMineralMiningPointNormal : public AAccessPointItemBase
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0400(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MineralMiningPointNormal");
		return ptr;
	}

};


// Class AT.WideUseBreakablePoint
// 0x0000 (0x05A0 - 0x05A0)
class AWideUseBreakablePoint : public AMineralMiningPointNormal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.WideUseBreakablePoint");
		return ptr;
	}

};


// Class AT.SaveBreakablePoint
// 0x0010 (0x05B0 - 0x05A0)
class ASaveBreakablePoint : public AWideUseBreakablePoint
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SaveBreakablePoint");
		return ptr;
	}

};


// Class AT.LevelLimitSaveBreakablePoint
// 0x0050 (0x0600 - 0x05B0)
class ALevelLimitSaveBreakablePoint : public ASaveBreakablePoint
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x05B0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LevelLimitSaveBreakablePoint");
		return ptr;
	}

};


// Class AT.LipSyncUtils
// 0x0000 (0x0028 - 0x0028)
class ULipSyncUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LipSyncUtils");
		return ptr;
	}


	void STATIC_GetAreaRowByName(class UDataTable* DataTable);
};


// Class AT.LipSyncComponent
// 0x0030 (0x0130 - 0x0100)
class ULipSyncComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LipSyncComponent");
		return ptr;
	}

};


// Class AT.LiveTalkManager
// 0x0010 (0x0110 - 0x0100)
class ULiveTalkManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LiveTalkManager");
		return ptr;
	}

};


// Class AT.LiveTalkTriggerComponent
// 0x0020 (0x0120 - 0x0100)
class ULiveTalkTriggerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LiveTalkTriggerComponent");
		return ptr;
	}

};


// Class AT.LoadMenu
// 0x0098 (0x01B8 - 0x0120)
class ULoadMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0120(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LoadMenu");
		return ptr;
	}

};


// Class AT.LoadMenuComponent
// 0x0018 (0x0118 - 0x0100)
class ULoadMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LoadMenuComponent");
		return ptr;
	}

};


// Class AT.LockonComponent
// 0x0010 (0x0110 - 0x0100)
class ULockonComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LockonComponent");
		return ptr;
	}

};


// Class AT.LookAtComponent
// 0x0010 (0x0110 - 0x0100)
class ULookAtComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LookAtComponent");
		return ptr;
	}

};


// Class AT.ManualSafetyPoint
// 0x0000 (0x0338 - 0x0338)
class AManualSafetyPoint : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ManualSafetyPoint");
		return ptr;
	}

};


// Class AT.ManualSafetyPointForBattle
// 0x0040 (0x0378 - 0x0338)
class AManualSafetyPointForBattle : public AManualSafetyPoint
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ManualSafetyPointForBattle");
		return ptr;
	}

};


// Class AT.ManualSafetyPointForField
// 0x0000 (0x0338 - 0x0338)
class AManualSafetyPointForField : public AManualSafetyPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ManualSafetyPointForField");
		return ptr;
	}

};


// Class AT.ManualSafetyPointFinally
// 0x0000 (0x0338 - 0x0338)
class AManualSafetyPointFinally : public AManualSafetyPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ManualSafetyPointFinally");
		return ptr;
	}

};


// Class AT.MenuManager
// 0x00F0 (0x01F0 - 0x0100)
class UMenuManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0100(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MenuManager");
		return ptr;
	}

};


// Class AT.MenuObjectBase
// 0x0088 (0x00B0 - 0x0028)
class UMenuObjectBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MenuObjectBase");
		return ptr;
	}

};


// Class AT.MeshPartsUnionComponent
// 0x0020 (0x0120 - 0x0100)
class UMeshPartsUnionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MeshPartsUnionComponent");
		return ptr;
	}

};


// Class AT.MessageTest
// 0x0018 (0x0350 - 0x0338)
class AMessageTest : public AActor
{
public:
	class UMessageTestTextList*                        MessageTestTextList;                                      // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MessageTest");
		return ptr;
	}

};


// Class AT.MessageTestText
// 0x0028 (0x0398 - 0x0370)
class UMessageTestText : public UCFUIUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MessageTestText");
		return ptr;
	}

};


// Class AT.MessageTestTextList
// 0x0080 (0x03F0 - 0x0370)
class UMessageTestTextList : public UCFUIUserWidget
{
public:
	TArray<class UMessageTestText*>                    MessageTestTextList;                                      // 0x0370(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x70];                                      // 0x0380(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MessageTestTextList");
		return ptr;
	}

};


// Class AT.MineralMiningPointRare
// 0x0000 (0x05A0 - 0x05A0)
class AMineralMiningPointRare : public AMineralMiningPointNormal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MineralMiningPointRare");
		return ptr;
	}

};


// Class AT.MiniGameComponent
// 0x0038 (0x0138 - 0x0100)
class UMiniGameComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0100(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MiniGameComponent");
		return ptr;
	}

};


// Class AT.MinigameDataTableAccessor
// 0x0040 (0x0140 - 0x0100)
class UMinigameDataTableAccessor : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0100(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MinigameDataTableAccessor");
		return ptr;
	}

};


// Class AT.MiniGameLevelLoadManager
// 0x0008 (0x0030 - 0x0028)
class UMiniGameLevelLoadManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MiniGameLevelLoadManager");
		return ptr;
	}

};


// Class AT.MiniGameMobActor
// 0x0008 (0x03C8 - 0x03C0)
class AMiniGameMobActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MiniGameMobActor");
		return ptr;
	}

};


// Class AT.MiniGameMobLoader
// 0x00B8 (0x00E0 - 0x0028)
class UMiniGameMobLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MiniGameMobLoader");
		return ptr;
	}

};


// Class AT.MiniGameUILoader
// 0x0050 (0x0078 - 0x0028)
class UMiniGameUILoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MiniGameUILoader");
		return ptr;
	}

};


// Class AT.MobAutoSpeechSetComponent
// 0x0008 (0x0108 - 0x0100)
class UMobAutoSpeechSetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MobAutoSpeechSetComponent");
		return ptr;
	}

};


// Class AT.MobIconComponent
// 0x0038 (0x0138 - 0x0100)
class UMobIconComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0100(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MobIconComponent");
		return ptr;
	}

};


// Class AT.MobSectionManager
// 0x0050 (0x0080 - 0x0030)
class UMobSectionManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MobSectionManager");
		return ptr;
	}

};


// Class AT.MobSectionVolume
// 0x0058 (0x03C8 - 0x0370)
class AMobSectionVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0370(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MobSectionVolume");
		return ptr;
	}

};


// Class AT.MobTrafficLight
// 0x0168 (0x04A0 - 0x0338)
class AMobTrafficLight : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0338(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.MobTrafficLight");
		return ptr;
	}

};


// Class AT.NavigationPoint
// 0x0000 (0x0338 - 0x0338)
class ANavigationPoint : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NavigationPoint");
		return ptr;
	}

};


// Class AT.NoneGeneralCrossTalkVolume
// 0x0008 (0x0378 - 0x0370)
class ANoneGeneralCrossTalkVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NoneGeneralCrossTalkVolume");
		return ptr;
	}


	void OnOverlapEnd();
	void OnOverlapBegin();
};


// Class AT.NpcAction
// 0x0090 (0x00B8 - 0x0028)
class UNpcAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0028(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction");
		return ptr;
	}

};


// Class AT.NpcAction_BranchPathFlight
// 0x0000 (0x00B8 - 0x00B8)
class UNpcAction_BranchPathFlight : public UNpcAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_BranchPathFlight");
		return ptr;
	}

};


// Class AT.NpcAction_Cry
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_Cry : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Cry");
		return ptr;
	}

};


// Class AT.ATEnenmyManager
// 0x00D0 (0x01D0 - 0x0100)
class UATEnenmyManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0100(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATEnenmyManager");
		return ptr;
	}

};


// Class AT.NpcAction_DinosaurDamage
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_DinosaurDamage : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DinosaurDamage");
		return ptr;
	}

};


// Class AT.NpcAction_DinosaurDown
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_DinosaurDown : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DinosaurDown");
		return ptr;
	}

};


// Class AT.NpcAction_DinosaurRoar
// 0x0020 (0x00D8 - 0x00B8)
class UNpcAction_DinosaurRoar : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DinosaurRoar");
		return ptr;
	}

};


// Class AT.NpcAction_DinosaurRun
// 0x0050 (0x0108 - 0x00B8)
class UNpcAction_DinosaurRun : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DinosaurRun");
		return ptr;
	}

};


// Class AT.NpcAction_DinosaurRunEnd
// 0x0018 (0x00D0 - 0x00B8)
class UNpcAction_DinosaurRunEnd : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DinosaurRunEnd");
		return ptr;
	}

};


// Class AT.NpcAction_DinosaurWalk
// 0x0030 (0x00E8 - 0x00B8)
class UNpcAction_DinosaurWalk : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DinosaurWalk");
		return ptr;
	}

};


// Class AT.NpcAction_Dive
// 0x0028 (0x00E0 - 0x00B8)
class UNpcAction_Dive : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Dive");
		return ptr;
	}

};


// Class AT.NpcAction_DogBark
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_DogBark : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DogBark");
		return ptr;
	}

};


// Class AT.NpcAction_DogGreet
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_DogGreet : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DogGreet");
		return ptr;
	}

};


// Class AT.NpcAction_DogSmell
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_DogSmell : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DogSmell");
		return ptr;
	}

};


// Class AT.NpcAction_DogWatch
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_DogWatch : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_DogWatch");
		return ptr;
	}

};


// Class AT.NpcAction_Down
// 0x0030 (0x00E8 - 0x00B8)
class UNpcAction_Down : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Down");
		return ptr;
	}

};


// Class AT.NpcAction_Eat
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_Eat : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Eat");
		return ptr;
	}

};


// Class AT.NpcAction_Escape
// 0x0030 (0x00E8 - 0x00B8)
class UNpcAction_Escape : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Escape");
		return ptr;
	}

};


// Class AT.NpcAction_Flight
// 0x0028 (0x00E0 - 0x00B8)
class UNpcAction_Flight : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Flight");
		return ptr;
	}

};


// Class AT.NpcAction_PathFlight
// 0x0000 (0x00B8 - 0x00B8)
class UNpcAction_PathFlight : public UNpcAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_PathFlight");
		return ptr;
	}

};


// Class AT.NpcAction_FlightFadeOut
// 0x0020 (0x00D8 - 0x00B8)
class UNpcAction_FlightFadeOut : public UNpcAction_PathFlight
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_FlightFadeOut");
		return ptr;
	}

};


// Class AT.NpcAction_Glide
// 0x0000 (0x00B8 - 0x00B8)
class UNpcAction_Glide : public UNpcAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Glide");
		return ptr;
	}

};


// Class AT.NpcAction_Hovering
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_Hovering : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Hovering");
		return ptr;
	}

};


// Class AT.NpcAction_Howl
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_Howl : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Howl");
		return ptr;
	}

};


// Class AT.NpcAction_PathWalk
// 0x00A0 (0x0158 - 0x00B8)
class UNpcAction_PathWalk : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x00B8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_PathWalk");
		return ptr;
	}


	void OnNpcVisibleChanged(bool State);
	void OnNpcGeneralDelegateMap_MoveStop();
	void OnNpcGeneralDelegateMap_LoopEnd();
	void OnMontageBlendingOut_Call();
};


// Class AT.NpcAction_PointFlight
// 0x0048 (0x0100 - 0x00B8)
class UNpcAction_PointFlight : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_PointFlight");
		return ptr;
	}

};


// Class AT.NpcAction_Sit
// 0x0038 (0x00F0 - 0x00B8)
class UNpcAction_Sit : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Sit");
		return ptr;
	}

};


// Class AT.NpcAction_SpawnEgg
// 0x0008 (0x00C0 - 0x00B8)
class UNpcAction_SpawnEgg : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_SpawnEgg");
		return ptr;
	}

};


// Class AT.NpcAction_SplineMove
// 0x0028 (0x00E0 - 0x00B8)
class UNpcAction_SplineMove : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_SplineMove");
		return ptr;
	}

};


// Class AT.NpcAction_Destroy
// 0x0000 (0x00B8 - 0x00B8)
class UNpcAction_Destroy : public UNpcAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Destroy");
		return ptr;
	}

};


// Class AT.NpcAction_Invisible
// 0x0000 (0x00B8 - 0x00B8)
class UNpcAction_Invisible : public UNpcAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Invisible");
		return ptr;
	}

};


// Class AT.NpcAction_Surprise
// 0x0028 (0x00E0 - 0x00B8)
class UNpcAction_Surprise : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Surprise");
		return ptr;
	}

};


// Class AT.NpcAction_Talk
// 0x0000 (0x00B8 - 0x00B8)
class UNpcAction_Talk : public UNpcAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Talk");
		return ptr;
	}

};


// Class AT.NpcAction_Wait
// 0x0010 (0x00C8 - 0x00B8)
class UNpcAction_Wait : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Wait");
		return ptr;
	}


	void OnNpcGeneralDelegateMap_End();
};


// Class AT.NpcAction_Stagger
// 0x0038 (0x00F0 - 0x00B8)
class UNpcAction_Stagger : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Stagger");
		return ptr;
	}

};


// Class AT.NpcAction_Wander
// 0x0028 (0x00E0 - 0x00B8)
class UNpcAction_Wander : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Wander");
		return ptr;
	}

};


// Class AT.NpcAction_Watch
// 0x0020 (0x00D8 - 0x00B8)
class UNpcAction_Watch : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Watch");
		return ptr;
	}

};


// Class AT.NpcActionComponent
// 0x00E0 (0x01E0 - 0x0100)
class UNpcActionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0100(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcActionComponent");
		return ptr;
	}

};


// Class AT.NpcActionManager
// 0x00C0 (0x00F0 - 0x0030)
class UNpcActionManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0030(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcActionManager");
		return ptr;
	}

};


// Class AT.NpcAction_Walk
// 0x0020 (0x00D8 - 0x00B8)
class UNpcAction_Walk : public UNpcAction
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAction_Walk");
		return ptr;
	}

};


// Class AT.NpcAnimInstance
// 0x00A0 (0x0400 - 0x0360)
class UNpcAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0360(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAnimInstance");
		return ptr;
	}

};


// Class AT.NpcAutoMoveComponent
// 0x00C0 (0x01C0 - 0x0100)
class UNpcAutoMoveComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0100(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcAutoMoveComponent");
		return ptr;
	}

};


// Class AT.NpcCheckPoint
// 0x0040 (0x0378 - 0x0338)
class ANpcCheckPoint : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcCheckPoint");
		return ptr;
	}

};


// Class AT.NpcCheckPointInfo
// 0x0028 (0x0050 - 0x0028)
class UNpcCheckPointInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcCheckPointInfo");
		return ptr;
	}

};


// Class AT.NpcCheckPointInfo_Human1
// 0x0078 (0x00C8 - 0x0050)
class UNpcCheckPointInfo_Human1 : public UNpcCheckPointInfo
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0050(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcCheckPointInfo_Human1");
		return ptr;
	}

};


// Class AT.NpcEventVolumeBase
// 0x0040 (0x03B0 - 0x0370)
class ANpcEventVolumeBase : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0370(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcEventVolumeBase");
		return ptr;
	}

};


// Class AT.NpcEventVolumeAction
// 0x0078 (0x0428 - 0x03B0)
class ANpcEventVolumeAction : public ANpcEventVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x03B0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcEventVolumeAction");
		return ptr;
	}

};


// Class AT.NpcEventVolumeComponent
// 0x00B0 (0x0640 - 0x0590)
class UNpcEventVolumeComponent : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0590(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcEventVolumeComponent");
		return ptr;
	}

};


// Class AT.NpcEventVolumeFromPlayer
// 0x0010 (0x03C0 - 0x03B0)
class ANpcEventVolumeFromPlayer : public ANpcEventVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcEventVolumeFromPlayer");
		return ptr;
	}

};


// Class AT.NpcLoaderActor
// 0x0018 (0x0350 - 0x0338)
class ANpcLoaderActor : public AActor
{
public:
	class UDataTable*                                  NpcAreaSetTypeTbl;                                        // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  NpcPresetTbl;                                             // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0348(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcLoaderActor");
		return ptr;
	}

};


// Class AT.NpcMovementComponent
// 0x0220 (0x03A0 - 0x0180)
class UNpcMovementComponent : public UNavMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x0180(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcMovementComponent");
		return ptr;
	}

};


// Class AT.NpcSoundComponent
// 0x0000 (0x0100 - 0x0100)
class UNpcSoundComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcSoundComponent");
		return ptr;
	}

};


// Class AT.NpcSplineActor
// 0x0268 (0x05A0 - 0x0338)
class ANpcSplineActor : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x0338(0x00C4) MISSED OFFSET
	                                                   SetCategory;                                              // 0x03FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1A3];                                     // 0x03FD(0x01A3) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcSplineActor");
		return ptr;
	}

};


// Class AT.NpcTalkComponent
// 0x04A0 (0x05A0 - 0x0100)
class UNpcTalkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4A0];                                     // 0x0100(0x04A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcTalkComponent");
		return ptr;
	}

};


// Class AT.NpcTalkManager
// 0x0168 (0x0268 - 0x0100)
class UNpcTalkManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x168];                                     // 0x0100(0x0168) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcTalkManager");
		return ptr;
	}

};


// Class AT.LipSyncInfoObj
// 0x0020 (0x0048 - 0x0028)
class ULipSyncInfoObj : public UObject
{
public:
	class AActor*                                      Character;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x0030(0x0008)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.LipSyncInfoObj");
		return ptr;
	}


	void OnFinishedVoice();
};


// Class AT.NpcManager
// 0x0460 (0x0560 - 0x0100)
class UNpcManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x460];                                     // 0x0100(0x0460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcManager");
		return ptr;
	}

};


// Class AT.ATInteractTalkObject
// 0x0050 (0x0078 - 0x0028)
class UATInteractTalkObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATInteractTalkObject");
		return ptr;
	}


	void OnPressedFieldAction();
};


// Class AT.NpcVisibleMeshManager
// 0x0020 (0x0120 - 0x0100)
class UNpcVisibleMeshManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.NpcVisibleMeshManager");
		return ptr;
	}

};


// Class AT.OfflineKPI
// 0x0018 (0x0040 - 0x0028)
class UOfflineKPI : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.OfflineKPI");
		return ptr;
	}

};


// Class AT.OptionMenuComponent
// 0x0028 (0x0128 - 0x0100)
class UOptionMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.OptionMenuComponent");
		return ptr;
	}

};


// Class AT.PageLayoutManager
// 0x0128 (0x0150 - 0x0028)
class UPageLayoutManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x128];                                     // 0x0028(0x0128) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PageLayoutManager");
		return ptr;
	}

};


// Class AT.OptionMenu
// 0x0088 (0x01A8 - 0x0120)
class UOptionMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0120(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.OptionMenu");
		return ptr;
	}

};


// Class AT.CrossTalkConditionSubStoryCancel
// 0x0000 (0x00D0 - 0x00D0)
class UCrossTalkConditionSubStoryCancel : public UCrossTalkConditionBattleOnce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.CrossTalkConditionSubStoryCancel");
		return ptr;
	}

};


// Class AT.ParticleContainer
// 0x0030 (0x0058 - 0x0028)
class UParticleContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ParticleContainer");
		return ptr;
	}

};


// Class AT.TrailContainer
// 0x0010 (0x0038 - 0x0028)
class UTrailContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TrailContainer");
		return ptr;
	}

};


// Class AT.ParticleManageComponent
// 0x0148 (0x0248 - 0x0100)
class UParticleManageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0100(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ParticleManageComponent");
		return ptr;
	}

};


// Class AT.PartyMenu
// 0x0080 (0x01A0 - 0x0120)
class UPartyMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0120(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PartyMenu");
		return ptr;
	}

};


// Class AT.ATPassiveSkillManager
// 0x0000 (0x0100 - 0x0100)
class UATPassiveSkillManager : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATPassiveSkillManager");
		return ptr;
	}

};


// Class AT.ParticleComponentData
// 0x0020 (0x0050 - 0x0030)
class UParticleComponentData : public UBaseObject
{
public:
	class UParticleSystem*                             ParticleSystem;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ParticleComponentData");
		return ptr;
	}

};


// Class AT.PathFinder
// 0x0050 (0x0080 - 0x0030)
class UPathFinder : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PathFinder");
		return ptr;
	}

};


// Class AT.PlacementObjectInfo
// 0x0140 (0x0540 - 0x0400)
class APlacementObjectInfo : public AAccessPointItemBase
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0400(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PlacementObjectInfo");
		return ptr;
	}

};


// Class AT.PlacementObjectInfoManager
// 0x0078 (0x0178 - 0x0100)
class UPlacementObjectInfoManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0100(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PlacementObjectInfoManager");
		return ptr;
	}

};


// Class AT.PlayerManager
// 0x0098 (0x0198 - 0x0100)
class UPlayerManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0100(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PlayerManager");
		return ptr;
	}

};


// Class AT.PoolingObject
// 0x0000 (0x0028 - 0x0028)
class UPoolingObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PoolingObject");
		return ptr;
	}


	void OnReturn();
	void OnRent();
};


// Class AT.PostEffectController
// 0x00F0 (0x01F0 - 0x0100)
class UPostEffectController : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0100(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PostEffectController");
		return ptr;
	}

};


// Class AT.PPVolumeMaterialParamChangeActor
// 0x0010 (0x0348 - 0x0338)
class APPVolumeMaterialParamChangeActor : public AActor
{
public:
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PPVolumeMaterialParamChangeActor");
		return ptr;
	}

};


// Class AT.PreRenderDemoActor
// 0x0038 (0x0370 - 0x0338)
class APreRenderDemoActor : public AActor
{
public:
	class UManaTexture*                                ManaTexture;                                              // 0x0338(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0340(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.PreRenderDemoActor");
		return ptr;
	}

};


// Class AT.ProceduralManager
// 0x00C8 (0x01C8 - 0x0100)
class UProceduralManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0100(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ProceduralManager");
		return ptr;
	}

};


// Class AT.ProceduralRegisterableStaticMeshActor
// 0x0018 (0x0360 - 0x0348)
class AProceduralRegisterableStaticMeshActor : public AStaticMeshActor
{
public:
	class UProceduralStaticMeshComponent*              ProceduralStaticMeshComponent;                            // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ASpawnerMetalVolume*                         SpawnerMetalVolume;                                       // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0358(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ProceduralRegisterableStaticMeshActor");
		return ptr;
	}

};


// Class AT.ProceduralStaticMeshActor
// 0x0000 (0x0348 - 0x0348)
class AProceduralStaticMeshActor : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ProceduralStaticMeshActor");
		return ptr;
	}

};


// Class AT.ProceduralStaticMeshComponent
// 0x0050 (0x07D0 - 0x0780)
class UProceduralStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0780(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ProceduralStaticMeshComponent");
		return ptr;
	}

};


// Class AT.ProgressManager
// 0x0178 (0x0278 - 0x0100)
class UProgressManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0100(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ProgressManager");
		return ptr;
	}

};


// Class AT.Projectile_ConEnergyBullets
// 0x0020 (0x0548 - 0x0528)
class AProjectile_ConEnergyBullets : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0528(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_ConEnergyBullets");
		return ptr;
	}

};


// Class AT.Projectile_Convergence
// 0x00C0 (0x0470 - 0x03B0)
class AProjectile_Convergence : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x03B0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Convergence");
		return ptr;
	}

};


// Class AT.Projectile_Cpl003SkillMakoho
// 0x0110 (0x04C0 - 0x03B0)
class AProjectile_Cpl003SkillMakoho : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x03B0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl003SkillMakoho");
		return ptr;
	}

};


// Class AT.Projectile_Cpl005D_DeathSlicer
// 0x0038 (0x0570 - 0x0538)
class AProjectile_Cpl005D_DeathSlicer : public AATProjectileBullet_Box
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0538(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl005D_DeathSlicer");
		return ptr;
	}

};


// Class AT.Projectile_Cpl005SkillShot
// 0x0020 (0x0548 - 0x0528)
class AProjectile_Cpl005SkillShot : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0528(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl005SkillShot");
		return ptr;
	}

};


// Class AT.Projectile_Cpl018SkillSpecial
// 0x0138 (0x04E8 - 0x03B0)
class AProjectile_Cpl018SkillSpecial : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x03B0(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl018SkillSpecial");
		return ptr;
	}

};


// Class AT.Projectile_Cpl024SkillBarrierMine
// 0x0060 (0x0588 - 0x0528)
class AProjectile_Cpl024SkillBarrierMine : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0528(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl024SkillBarrierMine");
		return ptr;
	}

};


// Class AT.Projectile_Cpl024SkillBarrierMineBarrier
// 0x00A8 (0x05D0 - 0x0528)
class AProjectile_Cpl024SkillBarrierMineBarrier : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0528(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl024SkillBarrierMineBarrier");
		return ptr;
	}

};


// Class AT.Projectile_Cpl024SkillSpecial
// 0x0008 (0x0530 - 0x0528)
class AProjectile_Cpl024SkillSpecial : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl024SkillSpecial");
		return ptr;
	}

};


// Class AT.Projectile_Cpl024SkillSpecialParent
// 0x00C0 (0x0470 - 0x03B0)
class AProjectile_Cpl024SkillSpecialParent : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x03B0(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl024SkillSpecialParent");
		return ptr;
	}

};


// Class AT.Projectile_Cpl034SkillBarrier
// 0x0070 (0x0598 - 0x0528)
class AProjectile_Cpl034SkillBarrier : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0528(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl034SkillBarrier");
		return ptr;
	}

};


// Class AT.Projectile_Cpl034SkillPunishmentStormBullet
// 0x0000 (0x0528 - 0x0528)
class AProjectile_Cpl034SkillPunishmentStormBullet : public AATProjectileBullet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl034SkillPunishmentStormBullet");
		return ptr;
	}

};


// Class AT.Projectile_Cpl040CrossClaw
// 0x0020 (0x0548 - 0x0528)
class AProjectile_Cpl040CrossClaw : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0528(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl040CrossClaw");
		return ptr;
	}

};


// Class AT.Projectile_Cpl040CrossClaw01
// 0x0008 (0x0530 - 0x0528)
class AProjectile_Cpl040CrossClaw01 : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl040CrossClaw01");
		return ptr;
	}

};


// Class AT.Projectile_Cpl040CrossClaw02
// 0x0010 (0x0538 - 0x0528)
class AProjectile_Cpl040CrossClaw02 : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0528(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl040CrossClaw02");
		return ptr;
	}

};


// Class AT.Projectile_Cpl041ESkillVanishingBall
// 0x0248 (0x05F8 - 0x03B0)
class AProjectile_Cpl041ESkillVanishingBall : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x248];                                     // 0x03B0(0x0248) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl041ESkillVanishingBall");
		return ptr;
	}

};


// Class AT.Projectile_Cpl058SkillBarrierMine
// 0x0040 (0x0568 - 0x0528)
class AProjectile_Cpl058SkillBarrierMine : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0528(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl058SkillBarrierMine");
		return ptr;
	}

};


// Class AT.Projectile_Cpl058SkillBarrierMineBarrier
// 0x0070 (0x0608 - 0x0598)
class AProjectile_Cpl058SkillBarrierMineBarrier : public AProjectile_Cpl034SkillBarrier
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0598(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl058SkillBarrierMineBarrier");
		return ptr;
	}

};


// Class AT.Projectile_Cpl058SkillFloatMine
// 0x0010 (0x0538 - 0x0528)
class AProjectile_Cpl058SkillFloatMine : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0528(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl058SkillFloatMine");
		return ptr;
	}

};


// Class AT.Projectile_Cpl064SkillSpiralShoot
// 0x0048 (0x0570 - 0x0528)
class AProjectile_Cpl064SkillSpiralShoot : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0528(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl064SkillSpiralShoot");
		return ptr;
	}

};


// Class AT.Projectile_Cpl071SkillB002
// 0x0040 (0x0568 - 0x0528)
class AProjectile_Cpl071SkillB002 : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0528(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl071SkillB002");
		return ptr;
	}

};


// Class AT.Projectile_EnemyRushShot
// 0x00E0 (0x0608 - 0x0528)
class AProjectile_EnemyRushShot : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0528(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_EnemyRushShot");
		return ptr;
	}

};


// Class AT.Projectile_FallingBullet
// 0x0000 (0x0528 - 0x0528)
class AProjectile_FallingBullet : public AATProjectileBullet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_FallingBullet");
		return ptr;
	}

};


// Class AT.Projectile_FallingBulletParent
// 0x0110 (0x04C0 - 0x03B0)
class AProjectile_FallingBulletParent : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x03B0(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_FallingBulletParent");
		return ptr;
	}

};


// Class AT.Projectile_Ghost
// 0x00A8 (0x05D0 - 0x0528)
class AProjectile_Ghost : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0528(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Ghost");
		return ptr;
	}

};


// Class AT.Projectile_Huge_WildQuake_ED
// 0x0008 (0x0530 - 0x0528)
class AProjectile_Huge_WildQuake_ED : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0528(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Huge_WildQuake_ED");
		return ptr;
	}

};


// Class AT.Projectile_Huge_WildQuake_LP
// 0x0000 (0x0528 - 0x0528)
class AProjectile_Huge_WildQuake_LP : public AATProjectileBullet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Huge_WildQuake_LP");
		return ptr;
	}

};


// Class AT.Projectile_Huge_WildQuake_ST
// 0x0050 (0x0578 - 0x0528)
class AProjectile_Huge_WildQuake_ST : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0528(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Huge_WildQuake_ST");
		return ptr;
	}

};


// Class AT.ATProjectile_NPA_BlazingStorm
// 0x00E0 (0x0490 - 0x03B0)
class AATProjectile_NPA_BlazingStorm : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x03B0(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectile_NPA_BlazingStorm");
		return ptr;
	}

};


// Class AT.ATProjectile_NPA_DeluxeBomber
// 0x00A0 (0x0450 - 0x03B0)
class AATProjectile_NPA_DeluxeBomber : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x03B0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATProjectile_NPA_DeluxeBomber");
		return ptr;
	}

};


// Class AT.Projectile_NPA_ShockWave
// 0x0228 (0x05D8 - 0x03B0)
class AProjectile_NPA_ShockWave : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x228];                                     // 0x03B0(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_NPA_ShockWave");
		return ptr;
	}

};


// Class AT.Projectile_RandomBullet
// 0x0048 (0x0570 - 0x0528)
class AProjectile_RandomBullet : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0528(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_RandomBullet");
		return ptr;
	}

};


// Class AT.Projectile_RushShot
// 0x00F8 (0x0620 - 0x0528)
class AProjectile_RushShot : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0528(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_RushShot");
		return ptr;
	}

};


// Class AT.Projectile_SlashWave
// 0x0010 (0x0538 - 0x0528)
class AProjectile_SlashWave : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0528(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_SlashWave");
		return ptr;
	}

};


// Class AT.ProjectileMakankoSappo
// 0x0038 (0x0668 - 0x0630)
class AProjectileMakankoSappo : public AATProjectileBeam
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0630(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ProjectileMakankoSappo");
		return ptr;
	}

};


// Class AT.QuestBase
// 0x0040 (0x0378 - 0x0338)
class AQuestBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0338(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestBase");
		return ptr;
	}

};


// Class AT.Quest_General
// 0x0138 (0x04B0 - 0x0378)
class AQuest_General : public AQuestBase
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0378(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Quest_General");
		return ptr;
	}

};


// Class AT.QuestActorFindListComponent
// 0x0008 (0x0108 - 0x0100)
class UQuestActorFindListComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestActorFindListComponent");
		return ptr;
	}

};


// Class AT.Projectile_Cpl064SkillBurstShoot
// 0x0060 (0x0588 - 0x0528)
class AProjectile_Cpl064SkillBurstShoot : public AATProjectileBullet
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0528(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl064SkillBurstShoot");
		return ptr;
	}

};


// Class AT.QuestMenu
// 0x0068 (0x0188 - 0x0120)
class UQuestMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0120(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestMenu");
		return ptr;
	}

};


// Class AT.QuestPhase_Arrival
// 0x0020 (0x0080 - 0x0060)
class UQuestPhase_Arrival : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Arrival");
		return ptr;
	}

};


// Class AT.QuestPhase_Battle
// 0x0028 (0x0088 - 0x0060)
class UQuestPhase_Battle : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Battle");
		return ptr;
	}

};


// Class AT.QuestPhase_BattleEnd
// 0x0010 (0x0070 - 0x0060)
class UQuestPhase_BattleEnd : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_BattleEnd");
		return ptr;
	}


	void OnBattleEnd(const struct FName& ID);
};


// Class AT.QuestPhase_BreakEnemy
// 0x0030 (0x0090 - 0x0060)
class UQuestPhase_BreakEnemy : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0060(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_BreakEnemy");
		return ptr;
	}

};


// Class AT.QuestPhase_Clear
// 0x01C0 (0x0220 - 0x0060)
class UQuestPhase_Clear : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x1C0];                                     // 0x0060(0x01C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Clear");
		return ptr;
	}

};


// Class AT.QuestPhase_Cooking
// 0x0038 (0x0098 - 0x0060)
class UQuestPhase_Cooking : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Cooking");
		return ptr;
	}


	void OnCookingTiming();
};


// Class AT.QuestPhase_Demo
// 0x0020 (0x0080 - 0x0060)
class UQuestPhase_Demo : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Demo");
		return ptr;
	}


	void OnDemoTiming();
};


// Class AT.QuestPhase_Development
// 0x0010 (0x0070 - 0x0060)
class UQuestPhase_Development : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Development");
		return ptr;
	}

};


// Class AT.QuestPhase_EventSectionBegin
// 0x0008 (0x0068 - 0x0060)
class UQuestPhase_EventSectionBegin : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_EventSectionBegin");
		return ptr;
	}

};


// Class AT.QuestManager
// 0x0AA0 (0x0BA0 - 0x0100)
class UQuestManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xAA0];                                     // 0x0100(0x0AA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestManager");
		return ptr;
	}

};


// Class AT.QuestPhase_GetFish
// 0x00B8 (0x0118 - 0x0060)
class UQuestPhase_GetFish : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0060(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_GetFish");
		return ptr;
	}

};


// Class AT.QuestPhase_GetItem
// 0x0020 (0x0080 - 0x0060)
class UQuestPhase_GetItem : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_GetItem");
		return ptr;
	}

};


// Class AT.QuestPhase_GetItemTalkNpc
// 0x00D0 (0x0130 - 0x0060)
class UQuestPhase_GetItemTalkNpc : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0060(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_GetItemTalkNpc");
		return ptr;
	}

};


// Class AT.QuestPhase_Hunting
// 0x0038 (0x0098 - 0x0060)
class UQuestPhase_Hunting : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0060(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Hunting");
		return ptr;
	}

};


// Class AT.QuestPhase_Idling
// 0x0010 (0x0070 - 0x0060)
class UQuestPhase_Idling : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Idling");
		return ptr;
	}

};


// Class AT.QuestPhase_Multiple
// 0x0030 (0x0090 - 0x0060)
class UQuestPhase_Multiple : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0060(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Multiple");
		return ptr;
	}

};


// Class AT.QuestPhase_OutOfRange
// 0x0020 (0x0080 - 0x0060)
class UQuestPhase_OutOfRange : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_OutOfRange");
		return ptr;
	}

};


// Class AT.QuestPhase_PermitNextAtrocious
// 0x0070 (0x00D0 - 0x0060)
class UQuestPhase_PermitNextAtrocious : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0060(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_PermitNextAtrocious");
		return ptr;
	}

};


// Class AT.QuestPhase_QuestClear
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_QuestClear : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_QuestClear");
		return ptr;
	}


	void OnQuestClearTiming();
};


// Class AT.QuestPhase_SearchItem
// 0x0020 (0x0080 - 0x0060)
class UQuestPhase_SearchItem : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_SearchItem");
		return ptr;
	}

};


// Class AT.QuestPhase_SimpleTalk
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_SimpleTalk : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_SimpleTalk");
		return ptr;
	}

};


// Class AT.QuestPhase_Start
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_Start : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_Start");
		return ptr;
	}

};


// Class AT.QuestPhase_StartDemoFadein
// 0x0020 (0x0080 - 0x0060)
class UQuestPhase_StartDemoFadein : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0060(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_StartDemoFadein");
		return ptr;
	}

};


// Class AT.QuestPhase_StartDemoFadeout
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_StartDemoFadeout : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_StartDemoFadeout");
		return ptr;
	}

};


// Class AT.QuestPhase_SystemMessage
// 0x0018 (0x0078 - 0x0060)
class UQuestPhase_SystemMessage : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0060(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_SystemMessage");
		return ptr;
	}

};


// Class AT.QuestPhase_TalkNpc
// 0x00D0 (0x0130 - 0x0060)
class UQuestPhase_TalkNpc : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0060(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_TalkNpc");
		return ptr;
	}

};


// Class AT.QuestSelectionItem
// 0x0068 (0x0168 - 0x0100)
class UQuestSelectionItem : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0100(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestSelectionItem");
		return ptr;
	}

};


// Class AT.RaceCheckPoint
// 0x0000 (0x0590 - 0x0590)
class URaceCheckPoint : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RaceCheckPoint");
		return ptr;
	}


	void EndOverlap();
	void BeginOverlap();
};


// Class AT.RaceCheckPointManager
// 0x0000 (0x0100 - 0x0100)
class URaceCheckPointManager : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RaceCheckPointManager");
		return ptr;
	}

};


// Class AT.RaceGameLoader
// 0x0050 (0x0078 - 0x0028)
class URaceGameLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RaceGameLoader");
		return ptr;
	}

};


// Class AT.RaceGameManager
// 0x0158 (0x02B0 - 0x0158)
class URaceGameManager : public UMiniGameManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0158(0x0008) MISSED OFFSET
	class URaceGameState*                              State;                                                    // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x148];                                     // 0x0168(0x0148) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RaceGameManager");
		return ptr;
	}

};


// Class AT.RaceGameState
// 0x0008 (0x0038 - 0x0030)
class URaceGameState : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RaceGameState");
		return ptr;
	}

};


// Class AT.RestrictProjectileSphereComponent
// 0x0000 (0x0590 - 0x0590)
class URestrictProjectileSphereComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RestrictProjectileSphereComponent");
		return ptr;
	}

};


// Class AT.RideAnimInstance
// 0x0020 (0x0580 - 0x0560)
class URideAnimInstance : public UATCharacterAnimInstance
{
public:
	class ARideCharacterBase*                          RideCharacter;                                            // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0568(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RideAnimInstance");
		return ptr;
	}

};


// Class AT.RideDebugMenuInputComponent
// 0x0000 (0x0188 - 0x0188)
class URideDebugMenuInputComponent : public UInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RideDebugMenuInputComponent");
		return ptr;
	}

};


// Class AT.RIdeDebugtInputComponent
// 0x0000 (0x01F8 - 0x01F8)
class URIdeDebugtInputComponent : public UATInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RIdeDebugtInputComponent");
		return ptr;
	}

};


// Class AT.RideManager
// 0x00B0 (0x01B0 - 0x0100)
class URideManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0100(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RideManager");
		return ptr;
	}

};


// Class AT.RidingState
// 0x0068 (0x0168 - 0x0100)
class URidingState : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0100(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RidingState");
		return ptr;
	}

};


// Class AT.RootMenu
// 0x0028 (0x0148 - 0x0120)
class URootMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0120(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.RootMenu");
		return ptr;
	}

};


// Class AT.SaveDataIndexRegisterActor
// 0x0000 (0x0338 - 0x0338)
class ASaveDataIndexRegisterActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SaveDataIndexRegisterActor");
		return ptr;
	}

};


// Class AT.SaveMenu
// 0x0078 (0x0198 - 0x0120)
class USaveMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0120(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SaveMenu");
		return ptr;
	}

};


// Class AT.ScatterMeshActor
// 0x0000 (0x0348 - 0x0348)
class AScatterMeshActor : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ScatterMeshActor");
		return ptr;
	}

};


// Class AT.ScatterMeshBehavior
// 0x0010 (0x0038 - 0x0028)
class UScatterMeshBehavior : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ScatterMeshBehavior");
		return ptr;
	}

};


// Class AT.SceneSummonsShenlong
// 0x0008 (0x0038 - 0x0030)
class USceneSummonsShenlong : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SceneSummonsShenlong");
		return ptr;
	}

};


// Class AT.ShopComponent
// 0x02C0 (0x03C0 - 0x0100)
class UShopComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET
	class UShopDataTableAccessor*                      ShopDataTableAccessor;                                    // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UItemRestrictionDataTableAccessor*           ItemRestrictionDataTableAccessor;                         // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2A8];                                     // 0x0118(0x02A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ShopComponent");
		return ptr;
	}

};


// Class AT.ShopDataTableAccessor
// 0x0040 (0x0140 - 0x0100)
class UShopDataTableAccessor : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0100(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ShopDataTableAccessor");
		return ptr;
	}

};


// Class AT.ShopInfoComponent
// 0x0038 (0x0138 - 0x0100)
class UShopInfoComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET
	class UNpcTalkComponent*                           NpcTalkComponent;                                         // 0x0128(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ShopInfoComponent");
		return ptr;
	}

};


// Class AT.SimpleTalkWindow
// 0x0308 (0x0408 - 0x0100)
class USimpleTalkWindow : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x308];                                     // 0x0100(0x0308) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SimpleTalkWindow");
		return ptr;
	}

};


// Class AT.Skill
// 0x0050 (0x0078 - 0x0028)
class USkill : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Skill");
		return ptr;
	}

};


// Class AT.SkillActivateSafetyInfo
// 0x0058 (0x0390 - 0x0338)
class ASkillActivateSafetyInfo : public AActor
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0338(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SkillActivateSafetyInfo");
		return ptr;
	}

};


// Class AT.SkillActivateSafetyInfoManager
// 0x0070 (0x0170 - 0x0100)
class USkillActivateSafetyInfoManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SkillActivateSafetyInfoManager");
		return ptr;
	}

};


// Class AT.SkillManager
// 0x0038 (0x0138 - 0x0100)
class USkillManager : public UActorComponent
{
public:
	class UDataTable*                                  SkillDataTable;                                           // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  SkillTreeDataTable;                                       // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  SkillPaletteDataTable;                                    // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SkillManager");
		return ptr;
	}

};


// Class AT.SkillSave
// 0x8BD8 (0x8C00 - 0x0028)
class USkillSave : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8BD8];                                    // 0x0028(0x8BD8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SkillSave");
		return ptr;
	}

};


// Class AT.SkillTree
// 0x0010 (0x0038 - 0x0028)
class USkillTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SkillTree");
		return ptr;
	}

};


// Class AT.SkyConditionManager
// 0x0028 (0x0128 - 0x0100)
class USkyConditionManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0100(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SkyConditionManager");
		return ptr;
	}

};


// Class AT.SlowManager
// 0x0070 (0x0170 - 0x0100)
class USlowManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SlowManager");
		return ptr;
	}

};


// Class AT.SmallFishBase
// 0x0118 (0x0450 - 0x0338)
class ASmallFishBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0338(0x00A8) MISSED OFFSET
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                           // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x58];                                      // 0x03F8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SmallFishBase");
		return ptr;
	}

};


// Class AT.SmallFishBird
// 0x0010 (0x0460 - 0x0450)
class ASmallFishBird : public ASmallFishBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SmallFishBird");
		return ptr;
	}

};


// Class AT.SmallFishPawn
// 0x0020 (0x0470 - 0x0450)
class ASmallFishPawn : public ASmallFishBase
{
public:
	class UKiSearchComponent*                          KiSearchComponent;                                        // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0458(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SmallFishPawn");
		return ptr;
	}

};


// Class AT.SmallFishSpawnTargetPoint
// 0x0048 (0x03B8 - 0x0370)
class ASmallFishSpawnTargetPoint : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0370(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SmallFishSpawnTargetPoint");
		return ptr;
	}

};


// Class AT.SpawnerItemVolumeBase
// 0x0038 (0x03A8 - 0x0370)
class ASpawnerItemVolumeBase : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0370(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SpawnerItemVolumeBase");
		return ptr;
	}

};


// Class AT.SmallFishSpawnVolume
// 0x00B8 (0x0460 - 0x03A8)
class ASmallFishSpawnVolume : public ASpawnerItemVolumeBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x03A8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SmallFishSpawnVolume");
		return ptr;
	}

};


// Class AT.SoulEmblemMenu
// 0x0008 (0x0128 - 0x0120)
class USoulEmblemMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SoulEmblemMenu");
		return ptr;
	}

};


// Class AT.SoundDebugHUD
// 0x0020 (0x0448 - 0x0428)
class ASoundDebugHUD : public AHUD
{
public:
	class AAT_BaseHUD*                                 HUD;                                                      // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0430(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SoundDebugHUD");
		return ptr;
	}

};


// Class AT.SpawnerDestructibleLandMineral
// 0x0050 (0x03F8 - 0x03A8)
class ASpawnerDestructibleLandMineral : public ASpawnerItemVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SpawnerDestructibleLandMineral");
		return ptr;
	}

};


// Class AT.SpawnerFruitVolume
// 0x01F8 (0x05A0 - 0x03A8)
class ASpawnerFruitVolume : public ASpawnerItemVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x03A8(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SpawnerFruitVolume");
		return ptr;
	}

};


// Class AT.SpawnerMetalVolume
// 0x0118 (0x04C0 - 0x03A8)
class ASpawnerMetalVolume : public ASpawnerItemVolumeBase
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x03A8(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SpawnerMetalVolume");
		return ptr;
	}

};


// Class AT.StartSkillCustomize
// 0x0110 (0x0230 - 0x0120)
class UStartSkillCustomize : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0120(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.StartSkillCustomize");
		return ptr;
	}

};


// Class AT.StartSkillTreeMenu
// 0x0110 (0x0230 - 0x0120)
class UStartSkillTreeMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0120(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.StartSkillTreeMenu");
		return ptr;
	}

};


// Class AT.StatusDataTable
// 0x0000 (0x0028 - 0x0028)
class UStatusDataTable : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.StatusDataTable");
		return ptr;
	}

};


// Class AT.StatusMenu
// 0x0100 (0x0220 - 0x0120)
class UStatusMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0120(0x0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.StatusMenu");
		return ptr;
	}

};


// Class AT.SubQuest_MissionCompleteState
// 0x0020 (0x0050 - 0x0030)
class USubQuest_MissionCompleteState : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SubQuest_MissionCompleteState");
		return ptr;
	}

};


// Class AT.SubQuest_MissionStartState
// 0x0010 (0x0040 - 0x0030)
class USubQuest_MissionStartState : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SubQuest_MissionStartState");
		return ptr;
	}

};


// Class AT.QuestPhase_EventSectionEnd
// 0x0008 (0x0068 - 0x0060)
class UQuestPhase_EventSectionEnd : public UQuestPhaseBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.QuestPhase_EventSectionEnd");
		return ptr;
	}

};


// Class AT.TalkAnimInstance
// 0x0190 (0x0550 - 0x03C0)
class UTalkAnimInstance : public UAT_AnimInstance
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x03C0(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TalkAnimInstance");
		return ptr;
	}

};


// Class AT.TargetPoint_Item
// 0x0018 (0x0350 - 0x0338)
class ATargetPoint_Item : public ATargetPoint
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TargetPoint_Item");
		return ptr;
	}

};


// Class AT.ATargetPointIngameDemo
// 0x0010 (0x0348 - 0x0338)
class AATargetPointIngameDemo : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATargetPointIngameDemo");
		return ptr;
	}

};


// Class AT.TargetPointIngameDemoOrigin
// 0x0010 (0x0358 - 0x0348)
class ATargetPointIngameDemoOrigin : public AATargetPointIngameDemo
{
public:
	class UCameraAnim*                                 CameraAnim;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0350(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TargetPointIngameDemoOrigin");
		return ptr;
	}

};


// Class AT.TargetPointIngameDemoCharacter
// 0x0018 (0x0360 - 0x0348)
class ATargetPointIngameDemoCharacter : public AATargetPointIngameDemo
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0348(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TargetPointIngameDemoCharacter");
		return ptr;
	}

};


// Class AT.TerrainDecorateEntityBase
// 0x0040 (0x0068 - 0x0028)
class UTerrainDecorateEntityBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateEntityBase");
		return ptr;
	}

};


// Class AT.TerrainDecorateControllerBase
// 0x0000 (0x0060 - 0x0060)
class UTerrainDecorateControllerBase : public UATObjectPool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateControllerBase");
		return ptr;
	}

};


// Class AT.DebrisActor
// 0x0000 (0x0348 - 0x0348)
class ADebrisActor : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.DebrisActor");
		return ptr;
	}

};


// Class AT.TerrainDecorateDebrisEntity
// 0x0010 (0x0078 - 0x0068)
class UTerrainDecorateDebrisEntity : public UTerrainDecorateEntityBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0068(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateDebrisEntity");
		return ptr;
	}

};


// Class AT.TerrainDecorateDebrisController
// 0x0010 (0x0070 - 0x0060)
class UTerrainDecorateDebrisController : public UTerrainDecorateControllerBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateDebrisController");
		return ptr;
	}

};


// Class AT.TerrainDecorateDecalEntity
// 0x0020 (0x0088 - 0x0068)
class UTerrainDecorateDecalEntity : public UTerrainDecorateEntityBase
{
public:
	class AATDecalActor*                               DecalActor;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateDecalEntity");
		return ptr;
	}

};


// Class AT.TerrainDecorateDecalController
// 0x0010 (0x0070 - 0x0060)
class UTerrainDecorateDecalController : public UTerrainDecorateControllerBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateDecalController");
		return ptr;
	}

};


// Class AT.TerrainDecorateEffectEntity
// 0x0018 (0x0080 - 0x0068)
class UTerrainDecorateEffectEntity : public UTerrainDecorateEntityBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateEffectEntity");
		return ptr;
	}

};


// Class AT.TerrainDecorateEffectController
// 0x0000 (0x0060 - 0x0060)
class UTerrainDecorateEffectController : public UTerrainDecorateControllerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateEffectController");
		return ptr;
	}

};


// Class AT.TerrainDecorateEdgeEntity
// 0x0008 (0x0070 - 0x0068)
class UTerrainDecorateEdgeEntity : public UTerrainDecorateEntityBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateEdgeEntity");
		return ptr;
	}

};


// Class AT.TerrainDecorateEdgeController
// 0x0000 (0x0060 - 0x0060)
class UTerrainDecorateEdgeController : public UTerrainDecorateControllerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateEdgeController");
		return ptr;
	}

};


// Class AT.TerrainDecorateHitPhotonBase
// 0x0178 (0x04B0 - 0x0338)
class ATerrainDecorateHitPhotonBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0338(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateHitPhotonBase");
		return ptr;
	}

};


// Class AT.TerrainDecorateHitPhotonSphere
// 0x0020 (0x04D0 - 0x04B0)
class ATerrainDecorateHitPhotonSphere : public ATerrainDecorateHitPhotonBase
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateHitPhotonSphere");
		return ptr;
	}

};


// Class AT.TerrainDecorateHitPhotonSphereKillInOneFrame
// 0x0000 (0x04D0 - 0x04D0)
class ATerrainDecorateHitPhotonSphereKillInOneFrame : public ATerrainDecorateHitPhotonSphere
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateHitPhotonSphereKillInOneFrame");
		return ptr;
	}

};


// Class AT.TerrainDecorateHitPhotonSphereForCharacter
// 0x0018 (0x04E8 - 0x04D0)
class ATerrainDecorateHitPhotonSphereForCharacter : public ATerrainDecorateHitPhotonSphere
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateHitPhotonSphereForCharacter");
		return ptr;
	}

};


// Class AT.TerrainDecoratePhotonEntity
// 0x0028 (0x0050 - 0x0028)
class UTerrainDecoratePhotonEntity : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecoratePhotonEntity");
		return ptr;
	}


	void OnReturn();
	void OnRent();
	void OnLevelRemoved();
};


// Class AT.TerrainDecoratePhotonController
// 0x0060 (0x0160 - 0x0100)
class UTerrainDecoratePhotonController : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecoratePhotonController");
		return ptr;
	}

};


// Class AT.TerrainDecorateManager
// 0x01F0 (0x02F0 - 0x0100)
class UTerrainDecorateManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1F0];                                     // 0x0100(0x01F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateManager");
		return ptr;
	}

};


// Class AT.TerrainDecorateEffectColorMultiByAreaData
// 0x0058 (0x0088 - 0x0030)
class UTerrainDecorateEffectColorMultiByAreaData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateEffectColorMultiByAreaData");
		return ptr;
	}

};


// Class AT.GeneralTerrainDecorateResourcesMap
// 0x0060 (0x0090 - 0x0030)
class UGeneralTerrainDecorateResourcesMap : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.GeneralTerrainDecorateResourcesMap");
		return ptr;
	}

};


// Class AT.TerrainDecorateResourcesReferenceCounter
// 0x0018 (0x0040 - 0x0028)
class UTerrainDecorateResourcesReferenceCounter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TerrainDecorateResourcesReferenceCounter");
		return ptr;
	}

};


// Class AT.UniqueTerrainDecorateResourcesMap
// 0x0050 (0x0080 - 0x0030)
class UUniqueTerrainDecorateResourcesMap : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0030(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.UniqueTerrainDecorateResourcesMap");
		return ptr;
	}

};


// Class AT.TestFieldBGMTriggerBox
// 0x0008 (0x0348 - 0x0340)
class ATestFieldBGMTriggerBox : public ATriggerBox
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TestFieldBGMTriggerBox");
		return ptr;
	}

};


// Class AT.TestStartBGMActor
// 0x0008 (0x0340 - 0x0338)
class ATestStartBGMActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TestStartBGMActor");
		return ptr;
	}

};


// Class AT.ZOrbSplineActor
// 0x0178 (0x04B0 - 0x0338)
class AZOrbSplineActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x178];                                     // 0x0338(0x0178) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ZOrbSplineActor");
		return ptr;
	}

};


// Class AT.SubQuestDirectionManager
// 0x0010 (0x0110 - 0x0100)
class USubQuestDirectionManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.SubQuestDirectionManager");
		return ptr;
	}

};


// Class AT.TimeOrbManager
// 0x0030 (0x0130 - 0x0100)
class UTimeOrbManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TimeOrbManager");
		return ptr;
	}

};


// Class AT.TipsMenu
// 0x0070 (0x0190 - 0x0120)
class UTipsMenu : public UBaseMenu
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0120(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TipsMenu");
		return ptr;
	}

};


// Class AT.Title
// 0x0010 (0x0348 - 0x0338)
class ATitle : public AActor
{
public:
	class UTextRenderComponent*                        Text;                                                     // 0x0338(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Title");
		return ptr;
	}

};


// Class AT.TitleHud
// 0x0038 (0x0540 - 0x0508)
class ATitleHud : public AAT_BaseHUD
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0508(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TitleHud");
		return ptr;
	}

};


// Class AT.TopMenuPostProcess
// 0x0018 (0x0350 - 0x0338)
class ATopMenuPostProcess : public AActor
{
public:
	class UPostProcessComponent*                       PostProcessComponent;                                     // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TopMenuPostProcess");
		return ptr;
	}

};


// Class AT.TimeOrbActor
// 0x0160 (0x0610 - 0x04B0)
class ATimeOrbActor : public AZOrbSplineActor
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x04B0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TimeOrbActor");
		return ptr;
	}

};


// Class AT.TownBoundsVolume
// 0x0048 (0x03E8 - 0x03A0)
class ATownBoundsVolume : public ALandmarkVolume
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03A0(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TownBoundsVolume");
		return ptr;
	}

};


// Class AT.TownMobComponent
// 0x0150 (0x05B0 - 0x0460)
class UTownMobComponent : public UNpcComponentBase
{
public:
	unsigned char                                      UnknownData00[0x150];                                     // 0x0460(0x0150) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TownMobComponent");
		return ptr;
	}

};


// Class AT.TrafficLightActor
// 0x0010 (0x0358 - 0x0348)
class ATrafficLightActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0348(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TrafficLightActor");
		return ptr;
	}

};


// Class AT.TrainingDataTableAccessor
// 0x0020 (0x0120 - 0x0100)
class UTrainingDataTableAccessor : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0100(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TrainingDataTableAccessor");
		return ptr;
	}

};


// Class AT.TrainingHelper
// 0x0000 (0x0028 - 0x0028)
class UTrainingHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TrainingHelper");
		return ptr;
	}

};


// Class AT.TrainingPointActor
// 0x0118 (0x0480 - 0x0368)
class ATrainingPointActor : public AFieldActionPointActor
{
public:
	unsigned char                                      UnknownData00[0x118];                                     // 0x0368(0x0118) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TrainingPointActor");
		return ptr;
	}

};


// Class AT.TrainingRoomDataTableAccessor
// 0x0030 (0x0368 - 0x0338)
class ATrainingRoomDataTableAccessor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0338(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TrainingRoomDataTableAccessor");
		return ptr;
	}

};


// Class AT.TreasureAccessPoint
// 0x0180 (0x0580 - 0x0400)
class ATreasureAccessPoint : public AAccessPointItemBase
{
public:
	unsigned char                                      UnknownData00[0x180];                                     // 0x0400(0x0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TreasureAccessPoint");
		return ptr;
	}

};


// Class AT.TreasureAccessPointSaveData
// 0x0010 (0x0038 - 0x0028)
class UTreasureAccessPointSaveData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TreasureAccessPointSaveData");
		return ptr;
	}

};


// Class AT.TreasureAccessPointTable
// 0x0018 (0x0048 - 0x0030)
class UTreasureAccessPointTable : public UBaseObject
{
public:
	TArray<class UTreasureAccessPointSaveData*>        TreasureAccessPointSaveData;                              // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TreasureAccessPointTable");
		return ptr;
	}


	void STATIC_GetTreasureAccessPointTable();
};


// Class AT.TreasureRegistSaveDataIndexActor
// 0x0000 (0x0338 - 0x0338)
class ATreasureRegistSaveDataIndexActor : public ASaveDataIndexRegisterActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TreasureRegistSaveDataIndexActor");
		return ptr;
	}

};


// Class AT.TreasureCsvExportActor
// 0x0000 (0x0338 - 0x0338)
class ATreasureCsvExportActor : public ATreasureRegistSaveDataIndexActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TreasureCsvExportActor");
		return ptr;
	}

};


// Class AT.TreasureManager
// 0x0068 (0x0168 - 0x0100)
class UTreasureManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0100(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TreasureManager");
		return ptr;
	}

};


// Class AT.TriggerBoxMovementSpeed
// 0x0000 (0x0340 - 0x0340)
class ATriggerBoxMovementSpeed : public ATriggerBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerBoxMovementSpeed");
		return ptr;
	}

};


// Class AT.TriggerBoxPerceptionAI
// 0x0010 (0x0350 - 0x0340)
class ATriggerBoxPerceptionAI : public ATriggerBox
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0340(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerBoxPerceptionAI");
		return ptr;
	}


	void AreaOut();
	void AreaIn();
};


// Class AT.ATTriggerBoxSymbolEnemySpawn
// 0x0020 (0x0360 - 0x0340)
class AATTriggerBoxSymbolEnemySpawn : public ATriggerBox
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0340(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATTriggerBoxSymbolEnemySpawn");
		return ptr;
	}

};


// Class AT.TriggerQuestStart
// 0x0020 (0x0360 - 0x0340)
class ATriggerQuestStart : public ATriggerSphere
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0340(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerQuestStart");
		return ptr;
	}

};


// Class AT.TriggerSphereDemoTransformTest
// 0x0040 (0x0380 - 0x0340)
class ATriggerSphereDemoTransformTest : public ATriggerSphere
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0340(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerSphereDemoTransformTest");
		return ptr;
	}

};


// Class AT.TriggerSphereFieldBase
// 0x0008 (0x0348 - 0x0340)
class ATriggerSphereFieldBase : public ATriggerSphere
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerSphereFieldBase");
		return ptr;
	}


	void OnPressedFieldAction();
};


// Class AT.TriggerSphereFieldCooking
// 0x0000 (0x0348 - 0x0348)
class ATriggerSphereFieldCooking : public ATriggerSphereFieldBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerSphereFieldCooking");
		return ptr;
	}


	void OnUntouchSphereCollision(class AActor* Actor);
	void OnTouchSphereCollision(class AActor* Actor);
};


// Class AT.TriggerSphereGeneralDemoTest
// 0x0008 (0x0348 - 0x0340)
class ATriggerSphereGeneralDemoTest : public ATriggerSphere
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerSphereGeneralDemoTest");
		return ptr;
	}

};


// Class AT.TriggerSphereMovementSpeedBase
// 0x0000 (0x0340 - 0x0340)
class ATriggerSphereMovementSpeedBase : public ATriggerSphere
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerSphereMovementSpeedBase");
		return ptr;
	}

};


// Class AT.TriggerSphereMovementSpeed_Level1
// 0x0000 (0x0340 - 0x0340)
class ATriggerSphereMovementSpeed_Level1 : public ATriggerSphereMovementSpeedBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerSphereMovementSpeed_Level1");
		return ptr;
	}

};


// Class AT.TriggerSphereMovementSpeed_Level2
// 0x0000 (0x0340 - 0x0340)
class ATriggerSphereMovementSpeed_Level2 : public ATriggerSphereMovementSpeedBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerSphereMovementSpeed_Level2");
		return ptr;
	}

};


// Class AT.TriggerSphereMovementSpeed_Level3
// 0x0000 (0x0340 - 0x0340)
class ATriggerSphereMovementSpeed_Level3 : public ATriggerSphereMovementSpeedBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerSphereMovementSpeed_Level3");
		return ptr;
	}

};


// Class AT.TriggerStaticActorBox
// 0x0030 (0x0370 - 0x0340)
class ATriggerStaticActorBox : public ATriggerBox
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	class UQuestActorFindListComponent*                QuestActorFindListComponent;                              // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0350(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TriggerStaticActorBox");
		return ptr;
	}


	void OnUntouchBoxCollision(class AActor* Actor);
	void OnTouchBoxCollision(class AActor* Actor);
	void OnBattleStart();
	void OnBattleEnd();
};


// Class AT.TwinFoot
// 0x00C0 (0x0900 - 0x0840)
class ATwinFoot : public ARideCharacterBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0840(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TwinFoot");
		return ptr;
	}

};


// Class AT.TwinFootController
// 0x0040 (0x0848 - 0x0808)
class ATwinFootController : public ARidePlayerControllerBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0808(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TwinFootController");
		return ptr;
	}

};


// Class AT.TwinFootInputComponent
// 0x00A8 (0x02A0 - 0x01F8)
class UTwinFootInputComponent : public UATInputComponent
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x01F8(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TwinFootInputComponent");
		return ptr;
	}

};


// Class AT.TwinFootMoveState
// 0x01A8 (0x02A8 - 0x0100)
class UTwinFootMoveState : public URideMoveStateBase
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0100(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TwinFootMoveState");
		return ptr;
	}

};


// Class AT.TwinFootVirtualController
// 0x0010 (0x0110 - 0x0100)
class UTwinFootVirtualController : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.TwinFootVirtualController");
		return ptr;
	}

};


// Class AT.ATRideUICommonInputComponent
// 0x0000 (0x01E8 - 0x01E8)
class UATRideUICommonInputComponent : public UCFDynamicAssignInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATRideUICommonInputComponent");
		return ptr;
	}

};


// Class AT.ATRideUICommonAxisInputComponent
// 0x0000 (0x0188 - 0x0188)
class UATRideUICommonAxisInputComponent : public UInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATRideUICommonAxisInputComponent");
		return ptr;
	}

};


// Class AT.UMGRenderingManager
// 0x00A0 (0x00C8 - 0x0028)
class UUMGRenderingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.UMGRenderingManager");
		return ptr;
	}

};


// Class AT.UnderWaterRestartVolume
// 0x0008 (0x0378 - 0x0370)
class AUnderWaterRestartVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0370(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.UnderWaterRestartVolume");
		return ptr;
	}

};


// Class AT.UserCreate
// 0x0018 (0x0040 - 0x0028)
class UUserCreate : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.UserCreate");
		return ptr;
	}

};


// Class AT.UserLogin
// 0x0018 (0x0040 - 0x0028)
class UUserLogin : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.UserLogin");
		return ptr;
	}

};


// Class AT.VoicePlayer
// 0x0040 (0x0068 - 0x0028)
class UVoicePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.VoicePlayer");
		return ptr;
	}

};


// Class AT.WindRoadPointIconComponent
// 0x0000 (0x0270 - 0x0270)
class UWindRoadPointIconComponent : public UFieldPointComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.WindRoadPointIconComponent");
		return ptr;
	}

};


// Class AT.Wolf_Component
// 0x0060 (0x0740 - 0x06E0)
class UWolf_Component : public UAnimalComponentBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x06E0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Wolf_Component");
		return ptr;
	}

};


// Class AT.WorldMapHelper
// 0x0000 (0x0028 - 0x0028)
class UWorldMapHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.WorldMapHelper");
		return ptr;
	}

};


// Class AT.ZCW_BookActor
// 0x0220 (0x05E0 - 0x03C0)
class AZCW_BookActor : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x220];                                     // 0x03C0(0x0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ZCW_BookActor");
		return ptr;
	}

};


// Class AT.ZCW_PreRenderDemoActor
// 0x0010 (0x0380 - 0x0370)
class AZCW_PreRenderDemoActor : public APreRenderDemoActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ZCW_PreRenderDemoActor");
		return ptr;
	}


	void OnDemoTiming();
};


// Class AT.ZOrbInstancedStaticMeshComponent
// 0x0000 (0x0780 - 0x0780)
class UZOrbInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ZOrbInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class AT.ZOrbManager
// 0x0160 (0x0260 - 0x0100)
class UZOrbManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0100(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ZOrbManager");
		return ptr;
	}

};


// Class AT.ZOrbRegistSaveDataIndexActor
// 0x0000 (0x0338 - 0x0338)
class AZOrbRegistSaveDataIndexActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ZOrbRegistSaveDataIndexActor");
		return ptr;
	}

};


// Class AT.Projectile_Cpl034SkillPunishmentStorm
// 0x0120 (0x04D0 - 0x03B0)
class AProjectile_Cpl034SkillPunishmentStorm : public AProjectile
{
public:
	unsigned char                                      UnknownData00[0x120];                                     // 0x03B0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.Projectile_Cpl034SkillPunishmentStorm");
		return ptr;
	}

};


// Class AT.ATActSkillCollectiveActionBeam
// 0x0058 (0x01C0 - 0x0168)
class UATActSkillCollectiveActionBeam : public UATActSkillCollectiveActionBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0168(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AT.ATActSkillCollectiveActionBeam");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
