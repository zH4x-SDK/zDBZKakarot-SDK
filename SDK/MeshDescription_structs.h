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

// ScriptStruct MeshDescription.ElementID
// 0x0004
struct FElementID
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct MeshDescription.PolygonGroupID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonGroupID : public FElementID
{

};

// ScriptStruct MeshDescription.PolygonID
// 0x0000 (0x0004 - 0x0004)
struct FPolygonID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexID
// 0x0000 (0x0004 - 0x0004)
struct FVertexID : public FElementID
{

};

// ScriptStruct MeshDescription.EdgeID
// 0x0000 (0x0004 - 0x0004)
struct FEdgeID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexInstanceID
// 0x0000 (0x0004 - 0x0004)
struct FVertexInstanceID : public FElementID
{

};

// ScriptStruct MeshDescription.MeshTriangle
// 0x000C
struct FMeshTriangle
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
