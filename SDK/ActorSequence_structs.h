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

// ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap
// 0x0020
struct FActorSequenceObjectReferenceMap
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ActorSequence.ActorSequenceObjectReferences
// 0x0010
struct FActorSequenceObjectReferences
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ActorSequence.ActorSequenceObjectReference
// 0x0028
struct FActorSequenceObjectReference
{
	                                                   Type;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x27];                                      // 0x0001(0x0027) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
