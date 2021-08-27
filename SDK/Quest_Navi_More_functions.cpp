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

// Function Quest_Navi_More.Quest_Navi_More_C.ConstructFirstOnly
// (BlueprintCallable, BlueprintEvent)
void UQuest_Navi_More_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Navi_More.Quest_Navi_More_C.ConstructFirstOnly");

	UQuest_Navi_More_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Navi_More.Quest_Navi_More_C.ExecuteUbergraph_Quest_Navi_More
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UQuest_Navi_More_C::ExecuteUbergraph_Quest_Navi_More(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Navi_More.Quest_Navi_More_C.ExecuteUbergraph_Quest_Navi_More");

	UQuest_Navi_More_C_ExecuteUbergraph_Quest_Navi_More_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
