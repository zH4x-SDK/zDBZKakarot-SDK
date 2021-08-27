
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

// Function EditableMesh.EditableMeshFactory.MakeEditableMesh
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UEditableMeshFactory::STATIC_MakeEditableMesh(class UPrimitiveComponent* PrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditableMesh.EditableMeshFactory.MakeEditableMesh");

	UEditableMeshFactory_MakeEditableMesh_Params params;
	params.PrimitiveComponent = PrimitiveComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
