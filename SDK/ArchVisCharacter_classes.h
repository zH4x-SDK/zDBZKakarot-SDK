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

// Class ArchVisCharacter.ArchVisCharacter
// 0x0060 (0x07B0 - 0x0750)
class AArchVisCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0750(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharacter");
		return ptr;
	}

};


// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x0050 (0x0780 - 0x0730)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0730(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchVisCharacter.ArchVisCharMovementComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
