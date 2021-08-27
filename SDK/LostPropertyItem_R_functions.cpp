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

// Function LostPropertyItem_R.LostPropertyItem_R_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ALostPropertyItem_R_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LostPropertyItem_R.LostPropertyItem_R_C.UserConstructionScript");

	ALostPropertyItem_R_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
