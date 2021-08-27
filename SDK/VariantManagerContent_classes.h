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

// Class VariantManagerContent.LevelVariantSets
// 0x0060 (0x0088 - 0x0028)
class ULevelVariantSets : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}

};


// Class VariantManagerContent.LevelVariantSetsActor
// 0x0018 (0x0350 - 0x0338)
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                             LevelVariantSets;                                         // 0x0338(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}


	void SwitchOnVariantByName();
	void SwitchOnVariantByIndex();
	void SetLevelVariantSets();
	void GetLevelVariantSets();
};


// Class VariantManagerContent.PropertyValue
// 0x00C8 (0x00F0 - 0x0028)
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0028(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueMaterial
// 0x0000 (0x00F0 - 0x00F0)
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueTransform
// 0x0000 (0x00F0 - 0x00F0)
class UPropertyValueTransform : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueVisibility
// 0x0000 (0x00F0 - 0x00F0)
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}

};


// Class VariantManagerContent.Variant
// 0x0028 (0x0050 - 0x0028)
class UVariant : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}

};


// Class VariantManagerContent.VariantObjectBinding
// 0x0048 (0x0070 - 0x0028)
class UVariantObjectBinding : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}

};


// Class VariantManagerContent.VariantSet
// 0x0028 (0x0050 - 0x0028)
class UVariantSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
