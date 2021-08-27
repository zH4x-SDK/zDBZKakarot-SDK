#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	EControllerHand__Left          = 0,
	EControllerHand__Right         = 1,
	EControllerHand__AnyHand       = 2,
	EControllerHand__Pad           = 3,
	EControllerHand__ExternalCamera = 4,
	EControllerHand__Gun           = 5,
	EControllerHand__Special       = 6,
	EControllerHand__Special01     = 7,
	EControllerHand__Special02     = 8,
	EControllerHand__Special03     = 9,
	EControllerHand__Special04     = 10,
	EControllerHand__Special05     = 11,
	EControllerHand__Special06     = 12,
	EControllerHand__Special07     = 13,
	EControllerHand__Special08     = 14,
	EControllerHand__Special09     = 15,
	EControllerHand__Special10     = 16
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InputCore.Key
// 0x0018
struct FKey
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
