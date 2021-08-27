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

// Function C01_010_S070_gdm.C01_010_S070_gdm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AC01_010_S070_gdm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_010_S070_gdm.C01_010_S070_gdm_C.ReceiveBeginPlay");

	AC01_010_S070_gdm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_010_S070_gdm.C01_010_S070_gdm_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_010_S070_gdm_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_010_S070_gdm.C01_010_S070_gdm_C.ReceiveEndPlay");

	AC01_010_S070_gdm_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function C01_010_S070_gdm.C01_010_S070_gdm_C.ExecuteUbergraph_C01_010_S070_gdm
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AC01_010_S070_gdm_C::ExecuteUbergraph_C01_010_S070_gdm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_010_S070_gdm.C01_010_S070_gdm_C.ExecuteUbergraph_C01_010_S070_gdm");

	AC01_010_S070_gdm_C_ExecuteUbergraph_C01_010_S070_gdm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
