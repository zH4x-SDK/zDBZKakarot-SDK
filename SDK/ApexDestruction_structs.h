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

// ScriptStruct ApexDestruction.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ApexDestruction.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0000(0x0024) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleParameters
// 0x0088
struct FDestructibleParameters
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
