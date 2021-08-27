
#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UPaperSpriteBlueprintLibrary::STATIC_MakeBrushFromSprite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite");

	UPaperSpriteBlueprintLibrary_MakeBrushFromSprite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.TileMapBlueprintLibrary.MakeTile
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UTileMapBlueprintLibrary::STATIC_MakeTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.MakeTile");

	UTileMapBlueprintLibrary_MakeTile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UTileMapBlueprintLibrary::STATIC_GetTileUserData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileUserData");

	UTileMapBlueprintLibrary_GetTileUserData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)

void UTileMapBlueprintLibrary::STATIC_GetTileTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.GetTileTransform");

	UTileMapBlueprintLibrary_GetTileTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paper2D.TileMapBlueprintLibrary.BreakTile
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UTileMapBlueprintLibrary::STATIC_BreakTile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.TileMapBlueprintLibrary.BreakTile");

	UTileMapBlueprintLibrary_BreakTile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
