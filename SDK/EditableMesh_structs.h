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

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// 0x0008
struct FPolygonGroupForPolygon
{
	struct FPolygonID                                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	struct FPolygonGroupID                             PolygonGroupID;                                           // 0x0004(0x0004) (BlueprintVisible)
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// 0x0018
struct FPolygonGroupToCreate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeList
// 0x0010
struct FMeshElementAttributeList
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeData
// 0x0060
struct FMeshElementAttributeData
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// 0x0050
struct FMeshElementAttributeValue
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexToMove
// 0x0010
struct FVertexToMove
{
	struct FVertexID                                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct EditableMesh.VerticesForEdge
// 0x000C
struct FVerticesForEdge
{
	struct FEdgeID                                     EdgeID;                                                   // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// 0x0028
struct FChangeVertexInstancesForPolygon
{
	struct FPolygonID                                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// 0x0010
struct FVertexInstancesForPolygonHole
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// 0x0028
struct FVertexAttributesForPolygon
{
	struct FPolygonID                                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// 0x0010
struct FVertexAttributesForPolygonHole
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EditableMesh.AttributesForEdge
// 0x0018
struct FAttributesForEdge
{
	struct FEdgeID                                     EdgeID;                                                   // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// 0x0018
struct FAttributesForVertexInstance
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct EditableMesh.AttributesForVertex
// 0x0018
struct FAttributesForVertex
{
	struct FVertexID                                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonToSplit
// 0x0018
struct FPolygonToSplit
{
	struct FPolygonID                                  PolygonID;                                                // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexPair
// 0x0008
struct FVertexPair
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonToCreate
// 0x0030
struct FPolygonToCreate
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0004(0x002C) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonHoleVertices
// 0x0010
struct FPolygonHoleVertices
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAndAttributes
// 0x0018
struct FVertexAndAttributes
{
	struct FVertexInstanceID                           VertexInstanceID;                                         // 0x0000(0x0004) (BlueprintVisible)
	struct FVertexID                                   VertexID;                                                 // 0x0004(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct EditableMesh.EdgeToCreate
// 0x0030
struct FEdgeToCreate
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// 0x0020
struct FVertexInstanceToCreate
{
	struct FVertexID                                   VertexID;                                                 // 0x0000(0x0004) (BlueprintVisible)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0004(0x001C) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexToCreate
// 0x0018
struct FVertexToCreate
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdivisionLimitData
// 0x0030
struct FSubdivisionLimitData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdividedWireEdge
// 0x000C
struct FSubdividedWireEdge
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// 0x0010
struct FSubdivisionLimitSection
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdividedQuad
// 0x00D0
struct FSubdividedQuad
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// 0x0034
struct FSubdividedQuadVertex
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// 0x0048
struct FRenderingPolygonGroup
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct EditableMesh.RenderingPolygon
// 0x0018
struct FRenderingPolygon
{
	struct FPolygonGroupID                             PolygonGroupID;                                           // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct EditableMesh.TriangleID
// 0x0000 (0x0004 - 0x0004)
struct FTriangleID : public FElementID
{

};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// 0x0008
struct FVertexIndexAndInstanceID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
