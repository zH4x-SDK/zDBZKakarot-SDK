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

// ScriptStruct LevelSequence.BoundActorProxy
// 0x0001
struct FBoundActorProxy
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// 0x00A0
struct FLevelSequenceBindingReferences
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// 0x0010
struct FLevelSequenceBindingReferenceArray
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// 0x0038
struct FLevelSequenceBindingReference
{
	struct FString                                     PackageName;                                              // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// 0x0050
struct FLevelSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// 0x0020
struct FLevelSequenceLegacyObjectReference
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceObject
// 0x0038
struct FLevelSequenceObject
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// 0x0088
struct FLevelSequencePlayerSnapshot
{
	unsigned char                                      UnknownData00[0x88];                                      // 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct LevelSequence.LevelSequenceSnapshotSettings
// 0x000C
struct FLevelSequenceSnapshotSettings
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
