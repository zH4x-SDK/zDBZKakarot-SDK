#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntime.ClothConfig
// 0x00D4
struct FClothConfig
{
	unsigned char                                      UnknownData00[0xD4];                                      // 0x0000(0x00D4) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntime.ClothConstraintSetup
// 0x0010
struct FClothConstraintSetup
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntime.ClothLODData
// 0x00F8
struct FClothLODData
{
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntime.ClothPhysicalMeshData
// 0x00A8
struct FClothPhysicalMeshData
{
	TArray<struct FVector>                             Vertices;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0010(0x0098) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntime.ClothVertBoneData
// 0x0034
struct FClothVertBoneData
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntime.ClothParameterMask_PhysMesh
// 0x0030
struct FClothParameterMask_PhysMesh
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
