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

// Function Start_Commu_Detail.Start_Commu_Detail_C.Header_Bg_In
// (BlueprintCallable, BlueprintEvent)
void UStart_Commu_Detail_C::Header_Bg_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function Start_Commu_Detail.Start_Commu_Detail_C.Header_Bg_In");

	UStart_Commu_Detail_C_Header_Bg_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Start_Commu_Detail.Start_Commu_Detail_C.Header_Loop
// (BlueprintCallable, BlueprintEvent)
void UStart_Commu_Detail_C::Header_Loop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Start_Commu_Detail.Start_Commu_Detail_C.Header_Loop");

	UStart_Commu_Detail_C_Header_Loop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Start_Commu_Detail.Start_Commu_Detail_C.Header_Out
// (BlueprintCallable, BlueprintEvent)
void UStart_Commu_Detail_C::Header_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function Start_Commu_Detail.Start_Commu_Detail_C.Header_Out");

	UStart_Commu_Detail_C_Header_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Start_Commu_Detail.Start_Commu_Detail_C.Anm_Out
// (BlueprintCallable, BlueprintEvent)
void UStart_Commu_Detail_C::Anm_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function Start_Commu_Detail.Start_Commu_Detail_C.Anm_Out");

	UStart_Commu_Detail_C_Anm_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Start_Commu_Detail.Start_Commu_Detail_C.ExecuteUbergraph_Start_Commu_Detail
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UStart_Commu_Detail_C::ExecuteUbergraph_Start_Commu_Detail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Start_Commu_Detail.Start_Commu_Detail_C.ExecuteUbergraph_Start_Commu_Detail");

	UStart_Commu_Detail_C_ExecuteUbergraph_Start_Commu_Detail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
