﻿#pragma once

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

// BlueprintGeneratedClass AtrociousEnemyBossEvent_Area02.AtrociousEnemyBossEvent_Area02_C
// 0x0008 (FullSize[0x04C8] - InheritedSize[0x04C0])
class AAtrociousEnemyBossEvent_Area02_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AtrociousEnemyBossEvent_Area02.AtrociousEnemyBossEvent_Area02_C");
		return ptr;
	}



	void UserConstructionScript();
	void PhaseEvent();
	void ExecuteUbergraph_AtrociousEnemyBossEvent_Area02(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
