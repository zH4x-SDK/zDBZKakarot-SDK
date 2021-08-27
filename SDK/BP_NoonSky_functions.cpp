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

// Function BP_NoonSky.BP_NoonSky_C.GetDynamicMaterialInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoonSky_C::GetDynamicMaterialInstance(class UMaterialInstanceDynamic** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoonSky.BP_NoonSky_C.GetDynamicMaterialInstance");

	ABP_NoonSky_C_GetDynamicMaterialInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function BP_NoonSky.BP_NoonSky_C.SetMaterialParameter
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_NoonSky_C::SetMaterialParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoonSky.BP_NoonSky_C.SetMaterialParameter");

	ABP_NoonSky_C_SetMaterialParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NoonSky.BP_NoonSky_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_NoonSky_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoonSky.BP_NoonSky_C.UserConstructionScript");

	ABP_NoonSky_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NoonSky.BP_NoonSky_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_NoonSky_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoonSky.BP_NoonSky_C.ReceiveBeginPlay");

	ABP_NoonSky_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_NoonSky.BP_NoonSky_C.ExecuteUbergraph_BP_NoonSky
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_NoonSky_C::ExecuteUbergraph_BP_NoonSky(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_NoonSky.BP_NoonSky_C.ExecuteUbergraph_BP_NoonSky");

	ABP_NoonSky_C_ExecuteUbergraph_BP_NoonSky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
