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

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x0040
struct FProcMeshSection
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x0010
struct FProcMeshTangent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x004C
struct FProcMeshVertex
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FProcMeshTangent                            Tangent;                                                  // 0x0018(0x0010) (Edit, BlueprintVisible)
	struct FColor                                      Color;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x002C(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
