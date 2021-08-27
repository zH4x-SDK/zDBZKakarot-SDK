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

// Function AT_Character_cpl058c01_BP.AT_Character_cpl058c01_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AAT_Character_cpl058c01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AT_Character_cpl058c01_BP.AT_Character_cpl058c01_BP_C.UserConstructionScript");

	AAT_Character_cpl058c01_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
