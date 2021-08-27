
#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)

void UDropTimecodeToStringConversion::STATIC_Conv_DropTimecodeToString()
{
	static auto fn = UObject::FindObject<UFunction>("Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString");

	UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
