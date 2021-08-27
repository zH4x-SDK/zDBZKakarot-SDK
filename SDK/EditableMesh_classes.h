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

// Class EditableMesh.EditableMesh
// 0x05F8 (0x0620 - 0x0028)
class UEditableMesh : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5F8];                                     // 0x0028(0x05F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMesh");
		return ptr;
	}

};


// Class EditableMesh.EditableMeshAdapter
// 0x0000 (0x0028 - 0x0028)
class UEditableMeshAdapter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshAdapter");
		return ptr;
	}

};


// Class EditableMesh.EditableMeshFactory
// 0x0000 (0x0028 - 0x0028)
class UEditableMeshFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableMeshFactory");
		return ptr;
	}


	void STATIC_MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent);
};


// Class EditableMesh.EditableStaticMeshAdapter
// 0x00B8 (0x00E0 - 0x0028)
class UEditableStaticMeshAdapter : public UEditableMeshAdapter
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0030(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EditableMesh.EditableStaticMeshAdapter");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
