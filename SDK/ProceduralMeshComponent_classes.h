#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000 (0x0028 - 0x0028)
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		return ptr;
	}


	void STATIC_SliceProceduralMesh();
	void STATIC_GetSectionFromStaticMesh();
	void STATIC_GetSectionFromProceduralMesh();
	void STATIC_GenerateBoxMesh();
	void STATIC_CreateGridMeshTriangles();
	void STATIC_CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent);
	void STATIC_ConvertQuadToTriangles(TArray<int>* Triangles);
	void STATIC_CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles);
};


// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0x0070 (0x0600 - 0x0590)
class UProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0590(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
