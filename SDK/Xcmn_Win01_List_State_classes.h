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

// WidgetBlueprintGeneratedClass Xcmn_Win01_List_State.Xcmn_Win01_List_State_C
// 0x0008 (FullSize[0x03A8] - InheritedSize[0x03A0])
class UXcmn_Win01_List_State_C : public UAT_UIGameWindowListState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Xcmn_Win01_List_State.Xcmn_Win01_List_State_C");
		return ptr;
	}



	void SetSelectState(bool IsSelected);
	void Construct();
	void ExecuteUbergraph_Xcmn_Win01_List_State(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
