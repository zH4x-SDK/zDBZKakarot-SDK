﻿// Name: DBZ-Kakarot, Version: 4.21.2

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

// Function EventItemTreasure_BP.EventItemTreasure_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AEventItemTreasure_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventItemTreasure_BP.EventItemTreasure_BP_C.UserConstructionScript");

	AEventItemTreasure_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif