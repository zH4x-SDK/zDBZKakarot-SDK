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
// Classes
//---------------------------------------------------------------------------

// Class ATExt.ATAnimationBlueprintChanger
// 0x0040 (FullSize[0x0140] - InheritedSize[0x0100])
class UATAnimationBlueprintChanger : public UActorComponent
{
public:
	TArray<struct FATABPChangerRequest>                RequestList;                                               // 0x0100(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_B916[0x30];                                    // 0x0110(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimationBlueprintChanger");
		return ptr;
	}



};

// Class ATExt.ATAnimNotify_CtrlBrightness
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UATAnimNotify_CtrlBrightness : public UAnimNotify
{
public:
	class UCurveFloat*                                 InAnimCurve;                                               // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 OutAnimCurve;                                              // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimNotify_CtrlBrightness");
		return ptr;
	}



};

// Class ATExt.ATAnimNotify_WearEffectSpawn
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UATAnimNotify_WearEffectSpawn : public UAnimNotify
{
public:
	class UParticleSystem*                             Effect;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FName                                       AttachName;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     offsetLocation;                                            // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                                    OffsetRotation;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TEnumAsByte<Engine_EAttachLocation>                AttachType;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_29FO[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimNotify_WearEffectSpawn");
		return ptr;
	}



};

// Class ATExt.ATAnimNotifyState_LoopWearEffectSpawn
// 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
class UATAnimNotifyState_LoopWearEffectSpawn : public UAnimNotifyState
{
public:
	class UParticleSystem*                             Effect;                                                    // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               RotationFix;                                               // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PUMW[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachName;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     offsetLocation;                                            // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRotator                                    OffsetRotation;                                            // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TEnumAsByte<Engine_EAttachLocation>                AttachType;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1OXA[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<uint32_t, struct FLoopWearEffectInfo>         ParticleMap;                                               // 0x0068(0x0050) (BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimNotifyState_LoopWearEffectSpawn");
		return ptr;
	}



};

// Class ATExt.ATAnimNotifyState_WearEffect
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UATAnimNotifyState_WearEffect : public UAnimNotifyState
{
public:
	bool                                               UseHeatUp;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               NotEndHeatUp;                                              // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UL7L[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimNotifyState_WearEffect");
		return ptr;
	}



};

// Class ATExt.ATEventBattlePhaseBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UATEventBattlePhaseBase : public UObject
{
public:
	unsigned char                                      UnknownData_1HWU[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattlePhaseBase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0101MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0101MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_G2I5[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0101MainPhase");
		return ptr;
	}



};

// Class ATExt.ATEventBattleRootManagerBase
// 0x0058 (FullSize[0x0390] - InheritedSize[0x0338])
class AATEventBattleRootManagerBase : public AActor
{
public:
	TArray<class UClass*>                              PhaseClass;                                                // 0x0338(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UATEventBattlePhaseBase*>             PhaseTbl;                                                  // 0x0348(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UATEventBattleSituationJudge*                StuationJudge;                                             // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATEventBattleCondition*                     BattleCondition;                                           // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATEventBattleAfterAction*                   AfterAction;                                               // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      RoofBarrierClass;                                          // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              RoofBarrierOffset;                                         // 0x0378(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_EJQO[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      RoofBarrierActor;                                          // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KFFL[0x8];                                     // 0x0388(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleRootManagerBase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0101RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0101RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KV03[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0101RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0102MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle0102MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_KTRY[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0102MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0102RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0102RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HeatupValue;                                               // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0102RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0201MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0201MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_OHCU[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0201MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0201RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle0201RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0201RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0301MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle0301MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_ZBUF[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0301MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0301RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0301RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HeatupValue;                                               // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0301RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0302MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0302MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_XIPU[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0302MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0302RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0302RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BS30[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0302RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0401MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle0401MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_TDR7[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0401MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0401RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0401RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_5BAL[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0401RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0402MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0402MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_Z616[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0402MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0402RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle0402RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0402RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0501MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle0501MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_G6Z3[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0501MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0501RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0501RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZVWI[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0501RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0502MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0502MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_AVGC[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0502MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0502RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle0502RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0502RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0601MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0601MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_D6XM[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0601MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0601RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle0601RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0601RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0602MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0602MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_MJT1[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0602MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0602RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle0602RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0602RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0701MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0701MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_9TYX[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0701MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0701RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0701RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BIP0[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0701RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0702MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0702MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_QSNF[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0702MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0702RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle0702RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0702RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0801MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle0801MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_39A1[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0801MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0801RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0801RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BQ98[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0801RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0802MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle0802MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_OX9Q[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0802MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0802RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0802RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NAOE[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0802RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0901MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle0901MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_5D3G[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0901MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0901RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle0901RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0901RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0902MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle0902MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_GQVV[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0902MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle0902RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle0902RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              HeatupValue;                                               // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0902RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1001MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle1001MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_I1ZC[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1001MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1001RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle1001RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_CBYU[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1001RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1101MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle1101MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_ZZJN[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1101MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1101RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle1101RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1101RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1102MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle1102MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_G45C[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1102MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1102RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle1102RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1102RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1201MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle1201MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_IH2Q[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1201MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1201RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle1201RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1201RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1202MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle1202MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_4HP6[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1202MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1202RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle1202RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_LMB3[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1202RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1301MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle1301MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_PJQG[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1301MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1301RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle1301RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1301RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1302MainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATBossBattle1302MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_Z4SG[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1302MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1302RootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATBossBattle1302RootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1302RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1401MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle1401MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_I4FN[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1401MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1401RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle1401RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_10F2[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1401RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1501MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATBossBattle1501MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_OYNO[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1501MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1501RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATBossBattle1501RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_YVNZ[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1501RootManager");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1502MainPhase
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UATBossBattle1502MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_0GXJ[0x68];                                    // 0x0030(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1502MainPhase");
		return ptr;
	}



};

// Class ATExt.ATBossBattle1502RootManager
// 0x0048 (FullSize[0x03D8] - InheritedSize[0x0390])
class AATBossBattle1502RootManager : public AATEventBattleRootManagerBase
{
public:
	class UParticleSystem*                             ParticleGenkiBall;                                         // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             ParticleGenkiParticle;                                     // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UClass*                                      GenkiBallCollisionClass;                                   // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     GenkiBallLocation;                                         // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                     GenkiParticleLocation;                                     // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleCompGenkiBall;                                     // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleCompGenkiParticle;                                 // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                      GenkiBallCollision;                                        // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1502RootManager");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl001
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl001 : public AAT_CharacterPlayableBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl001");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl001N
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl001N : public AATCharacterCpl001
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl001N");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl002Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl002Base : public AAT_CharacterPlayableBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl002A
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl002A : public AATCharacterCpl002Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002A");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl002B
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl002B : public AATCharacterCpl002Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002B");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl002C
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl002C : public AATCharacterCpl002Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002C");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl002D
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl002D : public AATCharacterCpl002Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002D");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl002Z
// 0x0000 (FullSize[0x0FB0] - InheritedSize[0x0FB0])
class AATCharacterCpl002Z : public AAT_CharacterHugeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002Z");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl003Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl003Base : public AAT_CharacterPlayableBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl003Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl003A
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl003A : public AATCharacterCpl003Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl003A");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl003B
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl003B : public AATCharacterCpl003Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl003B");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl003Z
// 0x0000 (FullSize[0x0FB0] - InheritedSize[0x0FB0])
class AATCharacterCpl003Z : public AAT_CharacterHugeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl003Z");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl004Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl004Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl004c01
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl004c01 : public AATCharacterCpl004Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004c01");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl004c02
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl004c02 : public AATCharacterCpl004Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004c02");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl004c03
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl004c03 : public AATCharacterCpl004Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004c03");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl004c04
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl004c04 : public AATCharacterCpl004Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004c04");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl005Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl005Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl005A
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl005A : public AATCharacterCpl005Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005A");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl005B
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl005B : public AATCharacterCpl005Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005B");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl005C
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl005C : public AATCharacterCpl005Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005C");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl005D
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl005D : public AATCharacterCpl005Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005D");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl005E
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl005E : public AATCharacterCpl005Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005E");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl006
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl006 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl006");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl007
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl007 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl007");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl008
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl008 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl008");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl009
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl009 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl009");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl010
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl010 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl010");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl011
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl011 : public AAT_CharacterPlayableBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl011");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl012
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl012 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl012");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl013
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl013 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl013");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl014Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl014Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl014c01
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl014c01 : public AATCharacterCpl014Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c01");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl014c02
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl014c02 : public AATCharacterCpl014Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c02");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl014c03
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl014c03 : public AATCharacterCpl014Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c03");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl014c04
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl014c04 : public AATCharacterCpl014Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c04");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl014c05
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl014c05 : public AATCharacterCpl014Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c05");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl017
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl017 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl017");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl018
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl018 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl018");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl019Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl019Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl019Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl019A
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl019A : public AATCharacterCpl019Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl019A");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl019B
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl019B : public AATCharacterCpl019Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl019B");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl020
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl020 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl020");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl021
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl021 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl021");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl022
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl022 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl022");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl023
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl023 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl023");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl024
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl024 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl024");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl025
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl025 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl025");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl028Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl028Base : public AAT_CharacterPlayableBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl028Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl028A
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl028A : public AATCharacterCpl028Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl028A");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl028B
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl028B : public AATCharacterCpl028Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl028B");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl029
// 0x0020 (FullSize[0x0FC0] - InheritedSize[0x0FA0])
class AATCharacterCpl029 : public AAT_Character
{
public:
	class UParticleSystem*                             AbsorbEffect;                                              // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AbsorbEffectLocation;                                      // 0x0FA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbsorbLifeRate;                                            // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_04I8[0x8];                                     // 0x0FB8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl029");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl030
// 0x0130 (FullSize[0x10D0] - InheritedSize[0x0FA0])
class AATCharacterCpl030 : public AAT_Character
{
public:
	class UParticleSystem*                             ParticleAbsorbST_1;                                        // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleAbsorbLP_1;                                        // 0x0FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleAbsorbST_2;                                        // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleAbsorbLP_2;                                        // 0x0FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                             ParticleAbsorbExec;                                        // 0x0FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*                    ParticleCompCameraAttachHitEffect;                         // 0x0FC8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BG_Color_IN;                                               // 0x0FD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BG_Color_OUT;                                              // 0x0FDC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Main_Color_IN;                                             // 0x0FE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Main_Color_OUT;                                            // 0x0FF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Ring_Color_IN;                                             // 0x1000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Ring_Color_OUT;                                            // 0x100C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Aura_Color_IN;                                             // 0x1018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Aura_Color_OUT;                                            // 0x1024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Aura_Alfa_IN;                                              // 0x1030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Aura_Alfa_OUT;                                             // 0x1034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbsorbModeTime;                                            // 0x1038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDeleteWaitTime;                                         // 0x103C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbsorbRateLongRange;                                       // 0x1040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbsorbLifeRate;                                            // 0x1044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QJ9W[0x60];                                    // 0x1048(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    ParticleCompSTNow;                                         // 0x10A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleCompSTOld;                                         // 0x10B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleCompLPNow;                                         // 0x10B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystemComponent*                    ParticleCompLPOld;                                         // 0x10C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ZGWG[0x8];                                     // 0x10C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl030");
		return ptr;
	}



	void OnChangeAction(class AAT_Character* InCharacter, int InActionIdPrev, int InActionIdNext);
};

// Class ATExt.ATCharacterCpl031
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl031 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl031");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl032
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl032 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl032");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl034Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl034Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl034Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl034A
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl034A : public AATCharacterCpl034Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl034A");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl034B
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl034B : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl034B");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl034C
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl034C : public AATCharacterCpl034Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl034C");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl035
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl035 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl035");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl036
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl036 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl036");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl038
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl038 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl038");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl039
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl039 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl039");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl040
// 0x0070 (FullSize[0x1010] - InheritedSize[0x0FA0])
class AATCharacterCpl040 : public AAT_Character
{
public:
	class UParticleSystem*                             AbsorbEffect;                                              // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AbsorbEffectLocation;                                      // 0x0FA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbsorbLifeRate;                                            // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6IOL[0x58];                                    // 0x0FB8(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl040");
		return ptr;
	}



	void OnChangeAction(class AAT_Character* InCharacter, int InActionIdPrev, int InActionIdNext);
};

// Class ATExt.ATCharacterCpl041Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl041Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl041A
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl041A : public AATCharacterCpl041Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041A");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl041B
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl041B : public AATCharacterCpl041Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041B");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl041C
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl041C : public AATCharacterCpl041Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041C");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl041E
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl041E : public AATCharacterCpl041Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041E");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl042
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl042 : public AAT_CharacterPlayableBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl042");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl043
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl043 : public AAT_CharacterPlayableBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl043");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl056Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl056Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl056Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl056c01
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl056c01 : public AATCharacterCpl056Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl056c01");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl056c02
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl056c02 : public AATCharacterCpl056Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl056c02");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl056c03
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl056c03 : public AATCharacterCpl056Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl056c03");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl057Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl057Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl057Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl057c01
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl057c01 : public AATCharacterCpl057Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl057c01");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl057c02
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl057c02 : public AATCharacterCpl057Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl057c02");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl057c03
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl057c03 : public AATCharacterCpl057Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl057c03");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl058Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl058Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl058Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl058c01
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl058c01 : public AATCharacterCpl058Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl058c01");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl058c02
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl058c02 : public AATCharacterCpl058Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl058c02");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl058c03
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl058c03 : public AATCharacterCpl058Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl058c03");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl059Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl059Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl059Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl059c01
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl059c01 : public AATCharacterCpl059Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl059c01");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl059c02
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl059c02 : public AATCharacterCpl059Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl059c02");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl059c03
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl059c03 : public AATCharacterCpl059Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl059c03");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl060
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl060 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl060");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl061
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl061 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl061");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl062
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl062 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl062");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl063
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl063 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl063");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl064Base
// 0x0010 (FullSize[0x0FB0] - InheritedSize[0x0FA0])
class AATCharacterCpl064Base : public AAT_Character
{
public:
	unsigned char                                      UnknownData_ZPUG[0x10];                                    // 0x0FA0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl064Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl064c01
// 0x0000 (FullSize[0x0FB0] - InheritedSize[0x0FB0])
class AATCharacterCpl064c01 : public AATCharacterCpl064Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl064c01");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl064c02
// 0x0000 (FullSize[0x0FB0] - InheritedSize[0x0FB0])
class AATCharacterCpl064c02 : public AATCharacterCpl064Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl064c02");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl064c03
// 0x0000 (FullSize[0x0FB0] - InheritedSize[0x0FB0])
class AATCharacterCpl064c03 : public AATCharacterCpl064Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl064c03");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl065Base
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl065Base : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl065Base");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl065c01
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl065c01 : public AATCharacterCpl065Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl065c01");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl065c02
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl065c02 : public AATCharacterCpl065Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl065c02");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl065c03
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl065c03 : public AATCharacterCpl065Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl065c03");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl067
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl067 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl067");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl069
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl069 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl069");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl070
// 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
class AATCharacterCpl070 : public AAT_Character
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl070");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl071
// 0x0040 (FullSize[0x0FE0] - InheritedSize[0x0FA0])
class AATCharacterCpl071 : public AAT_Character
{
public:
	TArray<AT_ECHARACTER_TYPE>                         SummonCharacters;                                          // 0x0FA0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PUSR[0x30];                                    // 0x0FB0(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl071");
		return ptr;
	}



};

// Class ATExt.ATCharacterCpl074
// 0x0060 (FullSize[0x1000] - InheritedSize[0x0FA0])
class AATCharacterCpl074 : public AAT_Character
{
public:
	bool                                               UseBarrierEff;                                             // 0x0FA0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_OUOU[0x7];                                     // 0x0FA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BarrierSocketName;                                         // 0x0FA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             BarrierEffST;                                              // 0x0FB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             BarrierEff100;                                             // 0x0FB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             BarrierEff50;                                              // 0x0FC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             BarrierEff25;                                              // 0x0FC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             BarrierEndEff100;                                          // 0x0FD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             BarrierEndEff50;                                           // 0x0FD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UParticleSystem*                             BarrierEndEff25;                                           // 0x0FE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MBNK[0x18];                                    // 0x0FE8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl074");
		return ptr;
	}



};

// Class ATExt.ATCommunityBoard
// 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
class UATCommunityBoard : public UObject
{
public:
	unsigned char                                      UnknownData_ZJNX[0x110];                                   // 0x0028(0x0110) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunityBoard");
		return ptr;
	}



};

// Class ATExt.ATCommunityManager
// 0x0158 (FullSize[0x0258] - InheritedSize[0x0100])
class UATCommunityManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9ZHE[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, struct FSoulEmTableInfo>        SoulEmInsMap;                                              // 0x0110(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<int, struct FName>                            SoulEmSaveNoToInsMap;                                      // 0x0160(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UATSoulEmblem*>                       SoulEmList;                                                // 0x01B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	class UATCommunityBoard*                           CommunityBoradIns[0x7];                                    // 0x01C0(0x0038) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATCommunitySkillZFighters*                  CommSkillZFighters;                                        // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATCommunitySkillCooking*                    CommSkillCooking;                                          // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATCommunitySkillTraining*                   CommSkillTraining;                                         // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATCommunitySkillDevelop*                    CommSkillDevelop;                                          // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATCommunitySkillGods*                       CommSkillGods;                                             // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATCommunitySkillAdult*                      CommSkillAdult;                                            // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATCommunitySkillAdventure*                  CommSkillAdventure;                                        // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATLinkBonus*                                LinkBonusIns;                                              // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_E8FL[0x20];                                    // 0x0238(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunityManager");
		return ptr;
	}



	void OnSaveData();
	void OnLoadData(bool bIsSuccess);
	void OnAutoSaveData();
	void CTExec(int InTestCase, const struct FName& testId);
};

// Class ATExt.ATCommunitySkillBase
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UATCommunitySkillBase : public UObject
{
public:
	unsigned char                                      UnknownData_G0Z0[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillBase");
		return ptr;
	}



};

// Class ATExt.ATCommunitySkillZFighters
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UATCommunitySkillZFighters : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData_YJ5C[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillZFighters");
		return ptr;
	}



};

// Class ATExt.ATCommunitySkillCooking
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UATCommunitySkillCooking : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData_G4ML[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillCooking");
		return ptr;
	}



};

// Class ATExt.ATCommunitySkillTraining
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UATCommunitySkillTraining : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData_R9CS[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillTraining");
		return ptr;
	}



};

// Class ATExt.ATCommunitySkillDevelop
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UATCommunitySkillDevelop : public UATCommunitySkillBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillDevelop");
		return ptr;
	}



};

// Class ATExt.ATCommunitySkillGods
// 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
class UATCommunitySkillGods : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData_10BY[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillGods");
		return ptr;
	}



};

// Class ATExt.ATCommunitySkillAdult
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UATCommunitySkillAdult : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData_GIT4[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillAdult");
		return ptr;
	}



};

// Class ATExt.ATCommunitySkillAdventure
// 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
class UATCommunitySkillAdventure : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData_D4DW[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillAdventure");
		return ptr;
	}



};

// Class ATExt.ATDataAssetCarParameterArea
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UATDataAssetCarParameterArea : public UATDataAssetBase
{
public:
	struct FATDataAssetCarParameterAreaInfo            CarParameterAreaInfo;                                      // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDataAssetCarParameterArea");
		return ptr;
	}



};

// Class ATExt.ATDataAssetTalkAnimAsyncLoad
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UATDataAssetTalkAnimAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData_ZVIO[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLoadingTalkAnimAsset                       LoadingAsset;                                              // 0x0040(0x0028) (NativeAccessSpecifierPrivate)
	struct FReferenceToTalkAnimAssetInstance           reference;                                                 // 0x0068(0x0008) (NoDestructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDataAssetTalkAnimAsyncLoad");
		return ptr;
	}



};

// Class ATExt.ATTalkAnimLoader
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UATTalkAnimLoader : public UObject
{
public:
	unsigned char                                      UnknownData_CVIF[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FName, class UATDataAssetTalkAnimAsyncLoad*> LoaderMap;                                                 // 0x0038(0x0050) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATTalkAnimLoader");
		return ptr;
	}



	void CompleteLoad(class UATDataAssetTalkAnimAsyncLoad* loader);
};

// Class ATExt.ATDataAssetTalkAnimation
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UATDataAssetTalkAnimation : public UATDataAssetBase
{
public:
	TArray<struct FATDataAssetTalkAnimationInfo>       AssetInfo;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDataAssetTalkAnimation");
		return ptr;
	}



};

// Class ATExt.ATDebugDrawTime
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UATDebugDrawTime : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData_LAA6[0x10];                                    // 0x0030(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugDrawTime");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuHandler
// 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
class UATDebugMenuHandler : public UCFDebugMenuHandler
{
public:
	class UATDebugMenuEventHandler*                    EventHandler;                                              // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuHandler");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandler
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UATDebugMenuEventHandler : public UObject
{
public:
	unsigned char                                      UnknownData_H36A[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UATDebugMenuEventHandlerLog*                 LogHandler;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATDebugMenuEventHandlerBatch*               BatchHandler;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATDebugMenuEventHandlerBattleSetting*       BattleSettingHandler;                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATDebugMenuEventHandlerDraw*                DrawHandler;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATDebugMenuEventHandlerBattlePlayer*        BattlePlayerHandler;                                       // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATDebugMenuEventHandlerRandomPadSetting*    RandomPadSettingHandler;                                   // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATDebugMenuEventHandlerBattleDebugDisp*     BattleDebugDisp;                                           // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATDebugMenuEventHandlerSkillSetting*        SkillSetting;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UATDebugMenuEventHandlerDebugHudSetting*     DebugHudSetting;                                           // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandler");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchBattle
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchBattle : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchBattle");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchProjectile
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchProjectile : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchProjectile");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchStage
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchStage : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchStage");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchEffect
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchEffect : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchEffect");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchAI
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchAI : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchAI");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchCamera
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchCamera : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchCamera");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchInput
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchInput : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchInput");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchCollision
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchCollision : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchCollision");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchUI
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchUI : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchUI");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchParameter
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchParameter : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchParameter");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchAdvLevel
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchAdvLevel : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchAdvLevel");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchAdvTalk
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchAdvTalk : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchAdvTalk");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchAdvMob
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchAdvMob : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchAdvMob");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchNetBattle
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchNetBattle : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchNetBattle");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchNetLobby
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchNetLobby : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchNetLobby");
		return ptr;
	}



};

// Class ATExt.CFDMLogSwitchGeneral
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UCFDMLogSwitchGeneral : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchGeneral");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerLog
// 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerLog : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                Handlers[0x10];                                            // 0x0030(0x0080) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerLog");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerBatch
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerBatch : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                Handlers[0x2];                                             // 0x0030(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerBatch");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Base
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Base : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Base");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Player_All
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Player_All : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Player_All");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Player_Single
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UDMBattleDraw_Player_Single : public UDMBattleDraw_Base
{
public:
	unsigned char                                      UnknownData_NPJX[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Player_Single");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Skill_All
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Skill_All : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Skill_All");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Skill_Single
// 0x0008 (FullSize[0x0060] - InheritedSize[0x0058])
class UDMBattleDraw_Skill_Single : public UDMBattleDraw_Base
{
public:
	unsigned char                                      UnknownData_I1AD[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Skill_Single");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Stage_All
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Stage_All : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Stage_All");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Stage_Tree
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Stage_Tree : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Stage_Tree");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Stage_Background
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Stage_Background : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Stage_Background");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Stage_Etc
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Stage_Etc : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Stage_Etc");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Effect_All
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Effect_All : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Effect_All");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_Decal_All
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_Decal_All : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Decal_All");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_EnvActor_All
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_EnvActor_All : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_EnvActor_All");
		return ptr;
	}



};

// Class ATExt.DMBattleDraw_ScreenEffect_All
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDraw_ScreenEffect_All : public UDMBattleDraw_Base
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_ScreenEffect_All");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerDraw
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerDraw : public UCFDebugMenuEventHandlerContentsFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerDraw");
		return ptr;
	}



};

// Class ATExt.DMBoolShowBattleScore
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBoolShowBattleScore : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBoolShowBattleScore");
		return ptr;
	}



};

// Class ATExt.DMBoolStopBattleTimer
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBoolStopBattleTimer : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBoolStopBattleTimer");
		return ptr;
	}



};

// Class ATExt.DMBoolInfinityItem
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBoolInfinityItem : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBoolInfinityItem");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerBattleSetting
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerBattleSetting : public UCFDebugMenuEventHandlerContentsFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerBattleSetting");
		return ptr;
	}



};

// Class ATExt.DMBattlePlayer_NotDeath
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattlePlayer_NotDeath : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlayer_NotDeath");
		return ptr;
	}



};

// Class ATExt.DMBattlePlayer_VisibleActionCancel
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattlePlayer_VisibleActionCancel : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlayer_VisibleActionCancel");
		return ptr;
	}



};

// Class ATExt.DMBattlePlayer_VisibleSuperArmor
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattlePlayer_VisibleSuperArmor : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlayer_VisibleSuperArmor");
		return ptr;
	}



};

// Class ATExt.DMChangePlayerControllerToAI
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UDMChangePlayerControllerToAI : public UCFDebugMenuEventHandlerTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMChangePlayerControllerToAI");
		return ptr;
	}



};

// Class ATExt.DMChangePlayerControllerToAIAll
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UDMChangePlayerControllerToAIAll : public UCFDebugMenuEventHandlerTrigger
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMChangePlayerControllerToAIAll");
		return ptr;
	}



};

// Class ATExt.DMBattlePlayer_DispInfoAI
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattlePlayer_DispInfoAI : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlayer_DispInfoAI");
		return ptr;
	}



};

// Class ATExt.DMBattlePlyaer_FriendlyFire_Damage
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattlePlyaer_FriendlyFire_Damage : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlyaer_FriendlyFire_Damage");
		return ptr;
	}



};

// Class ATExt.DMDebugDispPlayerEffect
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMDebugDispPlayerEffect : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMDebugDispPlayerEffect");
		return ptr;
	}



};

// Class ATExt.DMDebugDelayDamage
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMDebugDelayDamage : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMDebugDelayDamage");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerBattlePlayer
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerBattlePlayer : public UCFDebugMenuEventHandlerContentsFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerBattlePlayer");
		return ptr;
	}



};

// Class ATExt.DMBoolRandomPadEnable
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBoolRandomPadEnable : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBoolRandomPadEnable");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerRandomPadSetting
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerRandomPadSetting : public UCFDebugMenuEventHandlerContentsFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerRandomPadSetting");
		return ptr;
	}



};

// Class ATExt.DMBattleDebugDispMotionInfo
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMBattleDebugDispMotionInfo : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDebugDispMotionInfo");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerBattleDebugDisp
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerBattleDebugDisp : public UCFDebugMenuEventHandlerContentsFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerBattleDebugDisp");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerSkillSetting
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerSkillSetting : public UCFDebugMenuEventHandlerContentsFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerSkillSetting");
		return ptr;
	}



};

// Class ATExt.DMDebugHud_DebugInfo
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMDebugHud_DebugInfo : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMDebugHud_DebugInfo");
		return ptr;
	}



};

// Class ATExt.DMDebugHud_PrintLog
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UDMDebugHud_PrintLog : public UCFDebugMenuEventHandlerBool
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMDebugHud_PrintLog");
		return ptr;
	}



};

// Class ATExt.ATDebugMenuEventHandlerDebugHudSetting
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATDebugMenuEventHandlerDebugHudSetting : public UCFDebugMenuEventHandlerContentsFactory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerDebugHudSetting");
		return ptr;
	}



};

// Class ATExt.ATGeneralBattleMainPhase
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UATGeneralBattleMainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_L7YI[0x58];                                    // 0x0030(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleMainPhase");
		return ptr;
	}



};

// Class ATExt.ATEventBattle25MainPhase
// 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
class UATEventBattle25MainPhase : public UATGeneralBattleMainPhase
{
public:
	unsigned char                                      UnknownData_V1Y0[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattle25MainPhase");
		return ptr;
	}



};

// Class ATExt.ATEventBattle25RootManager
// 0x0010 (FullSize[0x03A0] - InheritedSize[0x0390])
class AATEventBattle25RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              DiseaseConditionTime;                                      // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DiseaseConditionLife;                                      // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                              DiseaseConditionLifeEnemy;                                 // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_MYDP[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattle25RootManager");
		return ptr;
	}



};

// Class ATExt.ATEventBattle41MainPhase
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UATEventBattle41MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_7RBV[0x60];                                    // 0x0030(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattle41MainPhase");
		return ptr;
	}



};

// Class ATExt.ATEventBattle41RootManager
// 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
class AATEventBattle41RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                               // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9QAO[0x4];                                     // 0x0394(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattle41RootManager");
		return ptr;
	}



};

// Class ATExt.ATEventBattleAccessor
// 0x7D48 (FullSize[0x7D70] - InheritedSize[0x0028])
class UATEventBattleAccessor : public UObject
{
public:
	unsigned char                                      UnknownData_9PL3[0xD0];                                    // 0x0028(0x00D0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       BattleName;                                                // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_8E2S[0x7C60];                                  // 0x0100(0x7C60) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UATDataAssetEventBattleAsyncLoad*            BattleLoader;                                              // 0x7D60(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_7MZ4[0x8];                                     // 0x7D68(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleAccessor");
		return ptr;
	}



};

// Class ATExt.ATEventBattleAfterAction
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UATEventBattleAfterAction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleAfterAction");
		return ptr;
	}



};

// Class ATExt.ATEventBattleCondition
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UATEventBattleCondition : public UObject
{
public:
	unsigned char                                      UnknownData_EOQP[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleCondition");
		return ptr;
	}



};

// Class ATExt.ATEventBattleLoader
// 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
class AATEventBattleLoader : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleLoader");
		return ptr;
	}



};

// Class ATExt.ATEventBattleSituationJudge
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UATEventBattleSituationJudge : public UObject
{
public:
	unsigned char                                      UnknownData_ZO1V[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleSituationJudge");
		return ptr;
	}



};

// Class ATExt.ATEventBattleStartPoint
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class AATEventBattleStartPoint : public AActor
{
public:
	struct FName                                       BattleName;                                                // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ATExt_EEventBattleTeamType                         TeamType;                                                  // 0x0340(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	ATExt_EEventBattleMemberIndex                      MemberIndex;                                               // 0x0341(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                               bSetRotation;                                              // 0x0342(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1SKT[0x5];                                     // 0x0343(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleStartPoint");
		return ptr;
	}



};

// Class ATExt.ATEventBattleStartPointManager
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UATEventBattleStartPointManager : public UObject
{
public:
	unsigned char                                      UnknownData_XVF4[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleStartPointManager");
		return ptr;
	}



};

// Class ATExt.ATGameModeBase
// 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
class AATGameModeBase : public ACFGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGameModeBase");
		return ptr;
	}



};

// Class ATExt.ATGameModeDevelopmentRoot
// 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
class AATGameModeDevelopmentRoot : public AATGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGameModeDevelopmentRoot");
		return ptr;
	}



};

// Class ATExt.ATGameModeRoot
// 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
class AATGameModeRoot : public AATGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGameModeRoot");
		return ptr;
	}



};

// Class ATExt.ATGeneralBattleDirectionPhase
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UATGeneralBattleDirectionPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_2U10[0x68];                                    // 0x0030(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleDirectionPhase");
		return ptr;
	}



	void OnDemoTiming(AT_EDEMO_TYPE DemoType, AT_EDEMO_TIMING_TYPE DemoTiming, const struct FName& DemoName, bool continueFlag);
};

// Class ATExt.ATGeneralBattleRootManager
// 0x0000 (FullSize[0x0390] - InheritedSize[0x0390])
class AATGeneralBattleRootManager : public AATEventBattleRootManagerBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleRootManager");
		return ptr;
	}



};

// Class ATExt.ATGeneralBattleSettlePhase
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class UATGeneralBattleSettlePhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData_VYY6[0x90];                                    // 0x0030(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleSettlePhase");
		return ptr;
	}



	void OnEndWarning();
	void OnEndResult();
	void OnEndBattleHUD();
};

// Class ATExt.ATGeneralBattleSetUpPhase
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UATGeneralBattleSetUpPhase : public UATEventBattlePhaseBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleSetUpPhase");
		return ptr;
	}



};

// Class ATExt.ATHUDDebugBootMenu
// 0x0030 (FullSize[0x0218] - InheritedSize[0x01E8])
class UATHUDDebugBootMenu : public UCFHUDDebugNodeSelectorComponent
{
public:
	class UTexture2D*                                  DrawTexture;                                               // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_9F3A[0x28];                                    // 0x01F0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATHUDDebugBootMenu");
		return ptr;
	}



};

// Class ATExt.ATLake
// 0x0010 (FullSize[0x0348] - InheritedSize[0x0338])
class AATLake : public AActor
{
public:
	unsigned char                                      UnknownData_AV6V[0x10];                                    // 0x0338(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATLake");
		return ptr;
	}



	void Update(class UPostProcessComponent* PostProcessComponent, class UStaticMeshComponent* LakeMesh, class UStaticMeshComponent* UnderLakeMesh);
	void Init(class UPostProcessComponent* PostProcessComponent, class UStaticMeshComponent* LakeMesh, class UStaticMeshComponent* UnderLakeMesh);
};

// Class ATExt.ATLinkBonus
// 0x0160 (FullSize[0x0188] - InheritedSize[0x0028])
class UATLinkBonus : public UObject
{
public:
	unsigned char                                      UnknownData_ZPWQ[0x160];                                   // 0x0028(0x0160) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATLinkBonus");
		return ptr;
	}



};

// Class ATExt.ATMonitoring
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UATMonitoring : public UObject
{
public:
	unsigned char                                      UnknownData_E1FN[0x4];                                     // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bIsBind_OnEndAutoSave;                                     // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_870N[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameInstance*                               ParentGameInstance;                                        // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_U8IP[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATMonitoring");
		return ptr;
	}



};

// Class ATExt.ATMonitoringSaveGame
// 0x0498 (FullSize[0x04C0] - InheritedSize[0x0028])
class UATMonitoringSaveGame : public USaveGame
{
public:
	struct FMonitoringSavePack                         Pack;                                                      // 0x0028(0x0498) (NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATMonitoringSaveGame");
		return ptr;
	}



};

// Class ATExt.ATPadVibrationManager
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UATPadVibrationManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData_2CQP[0x28];                                    // 0x0030(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATPadVibrationManager");
		return ptr;
	}



};

// Class ATExt.ATPushSolverShapeCapsule
// 0x0000 (FullSize[0x05B0] - InheritedSize[0x05B0])
class UATPushSolverShapeCapsule : public UCFPushSolverShapeCapsule
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATPushSolverShapeCapsule");
		return ptr;
	}



};

// Class ATExt.ATRiver
// 0x0018 (FullSize[0x0350] - InheritedSize[0x0338])
class AATRiver : public AActor
{
public:
	unsigned char                                      UnknownData_4A13[0x10];                                    // 0x0338(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APostProcessVolume*                          PostProcessVolume;                                         // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATRiver");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
