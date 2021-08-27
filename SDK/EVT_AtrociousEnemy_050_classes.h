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

// BlueprintGeneratedClass EVT_AtrociousEnemy_050.EVT_AtrociousEnemy_050_C
// 0x0020 (FullSize[0x04E0] - InheritedSize[0x04C0])
class AEVT_AtrociousEnemy_050_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       event_battle_id;                                           // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               chara;                                                     // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EVT_AtrociousEnemy_050.EVT_AtrociousEnemy_050_C");
		return ptr;
	}



	void UserConstructionScript();
	void PhaseEvent();
	void ExecuteUbergraph_EVT_AtrociousEnemy_050(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
