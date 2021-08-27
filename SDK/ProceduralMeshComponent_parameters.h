#pragma once

#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
struct UKismetProceduralMeshLibrary_SliceProceduralMesh_Params
{
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
struct UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params
{
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
struct UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params
{
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
struct UKismetProceduralMeshLibrary_GenerateBoxMesh_Params
{
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
struct UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params
{
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
struct UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
struct UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params
{
	TArray<int>                                        Triangles;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
struct UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params
{
	TArray<struct FVector>                             Vertices;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
