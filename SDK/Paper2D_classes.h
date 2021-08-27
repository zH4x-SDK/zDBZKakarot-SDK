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

// Class Paper2D.MaterialExpressionSpriteTextureSampler
// 0x0020 (0x0138 - 0x0118)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0118(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.MaterialExpressionSpriteTextureSampler");
		return ptr;
	}

};


// Class Paper2D.PaperCharacter
// 0x0000 (0x0750 - 0x0750)
class APaperCharacter : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperCharacter");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbook
// 0x0028 (0x0050 - 0x0028)
class UPaperFlipbook : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbook");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbookActor
// 0x0008 (0x0340 - 0x0338)
class APaperFlipbookActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookActor");
		return ptr;
	}

};


// Class Paper2D.PaperFlipbookComponent
// 0x0050 (0x05E0 - 0x0590)
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0590(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperFlipbookComponent");
		return ptr;
	}

};


// Class Paper2D.PaperGroupedSpriteActor
// 0x0008 (0x0340 - 0x0338)
class APaperGroupedSpriteActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperGroupedSpriteComponent
// 0x0030 (0x05C0 - 0x0590)
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0590(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperGroupedSpriteComponent");
		return ptr;
	}

};


// Class Paper2D.PaperRuntimeSettings
// 0x0008 (0x0030 - 0x0028)
class UPaperRuntimeSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperRuntimeSettings");
		return ptr;
	}

};


// Class Paper2D.PaperSprite
// 0x0098 (0x00C0 - 0x0028)
class UPaperSprite : public UObject
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSprite");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteActor
// 0x0008 (0x0340 - 0x0338)
class APaperSpriteActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteActor");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteAtlas
// 0x0000 (0x0028 - 0x0028)
class UPaperSpriteAtlas : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteAtlas");
		return ptr;
	}

};


// Class Paper2D.PaperSpriteBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteBlueprintLibrary");
		return ptr;
	}


	void STATIC_MakeBrushFromSprite();
};


// Class Paper2D.PaperSpriteComponent
// 0x0020 (0x05B0 - 0x0590)
class UPaperSpriteComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0590(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperSpriteComponent");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainActor
// 0x0018 (0x0350 - 0x0338)
class APaperTerrainActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainActor");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainComponent
// 0x0050 (0x05C0 - 0x0570)
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0570(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainComponent");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainMaterial
// 0x0018 (0x0048 - 0x0030)
class UPaperTerrainMaterial : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainMaterial");
		return ptr;
	}

};


// Class Paper2D.PaperTerrainSplineComponent
// 0x0010 (0x0660 - 0x0650)
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0650(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTerrainSplineComponent");
		return ptr;
	}

};


// Class Paper2D.PaperTileLayer
// 0x0070 (0x0098 - 0x0028)
class UPaperTileLayer : public UObject
{
public:
	struct FText                                       LayerName;                                                // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileLayer");
		return ptr;
	}

};


// Class Paper2D.PaperTileMap
// 0x0080 (0x00A8 - 0x0028)
class UPaperTileMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMap");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapActor
// 0x0008 (0x0340 - 0x0338)
class APaperTileMapActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0338(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapActor");
		return ptr;
	}

};


// Class Paper2D.PaperTileMapComponent
// 0x0050 (0x05E0 - 0x0590)
class UPaperTileMapComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0590(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileMapComponent");
		return ptr;
	}

};


// Class Paper2D.PaperTileSet
// 0x0080 (0x00A8 - 0x0028)
class UPaperTileSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.PaperTileSet");
		return ptr;
	}

};


// Class Paper2D.TileMapBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Paper2D.TileMapBlueprintLibrary");
		return ptr;
	}


	void STATIC_MakeTile();
	void STATIC_GetTileUserData();
	void STATIC_GetTileTransform();
	void STATIC_BreakTile();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
