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

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
// 0x0030
struct FClothCollisionData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// 0x0018
struct FClothCollisionPrim_Convex
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
// 0x0008
struct FClothCollisionPrim_SphereConnection
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// 0x0014
struct FClothCollisionPrim_Sphere
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
