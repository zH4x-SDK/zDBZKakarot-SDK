#pragma once

// Name: DBZ-Kakarot, Version: 4.21.2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum VariantManagerContent.EPropertyValueCategory
enum class VariantManagerContent_EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Generic = 0,
	EPropertyValueCategory__RelativeLocation = 1,
	EPropertyValueCategory__RelativeRotation = 2,
	EPropertyValueCategory__RelativeScale3D = 3,
	EPropertyValueCategory__bVisible = 4,
	EPropertyValueCategory__Material = 5,
	EPropertyValueCategory__EPropertyValueCategory_MAX = 6,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
