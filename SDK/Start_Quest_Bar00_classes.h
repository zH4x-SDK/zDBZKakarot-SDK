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

// WidgetBlueprintGeneratedClass Start_Quest_Bar00.Start_Quest_Bar00_C
// 0x0020 (FullSize[0x03C0] - InheritedSize[0x03A0])
class UStart_Quest_Bar00_C : public UAT_UIStartQuestBar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UXcmn_MultiLineText_C*                       Txt_Num;                                                   // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXcmn_MultiLineText_C*                       Txt_Progress;                                              // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXmenu_Check_C*                              Xmenu_Check;                                               // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Start_Quest_Bar00.Start_Quest_Bar00_C");
		return ptr;
	}



	void V_Eff();
	void ConstructFirstOnly();
	void ExecuteUbergraph_Start_Quest_Bar00(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
