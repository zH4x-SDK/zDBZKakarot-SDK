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

// ScriptStruct Paper2D.IntMargin
// 0x0010
struct FIntMargin
{
	int                                                Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// 0x0010
struct FPaperFlipbookKeyFrame
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteInstanceData
// 0x0050
struct FSpriteInstanceData
{
	struct FMatrix                                     Transform;                                                // 0x0000(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperSpriteSocket
// 0x0040
struct FPaperSpriteSocket
{
	struct FTransform                                  LocalTransform;                                           // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// 0x0040
struct FPaperSpriteAtlasSlot
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// 0x0038
struct FPaperTerrainMaterialRule
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileInfo
// 0x0010
struct FPaperTileInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileSetTerrain
// 0x0018
struct FPaperTileSetTerrain
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Paper2D.PaperTileMetadata
// 0x0040
struct FPaperTileMetadata
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteGeometryShape
// 0x0030
struct FSpriteGeometryShape
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// 0x0030
struct FSpriteGeometryCollection
{
	TArray<struct FSpriteGeometryShape>                Shapes;                                                   // 0x0000(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0010(0x0020) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
// 0x00D0
struct FSpriteDrawCallRecord
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct Paper2D.SpriteAssetInitParameters
// 0x0040
struct FSpriteAssetInitParameters
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
