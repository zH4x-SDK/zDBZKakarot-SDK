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
// Parameters
//---------------------------------------------------------------------------

// Function C01_010_S070_gdm.C01_010_S070_gdm_C.ReceiveBeginPlay
struct AC01_010_S070_gdm_C_ReceiveBeginPlay_Params
{
};

// Function C01_010_S070_gdm.C01_010_S070_gdm_C.ReceiveEndPlay
struct AC01_010_S070_gdm_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function C01_010_S070_gdm.C01_010_S070_gdm_C.ExecuteUbergraph_C01_010_S070_gdm
struct AC01_010_S070_gdm_C_ExecuteUbergraph_C01_010_S070_gdm_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
