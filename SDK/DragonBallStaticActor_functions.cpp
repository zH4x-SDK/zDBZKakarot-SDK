﻿// Name: DBZ-Kakarot, Version: 4.21.2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DragonBallStaticActor.DragonBallStaticActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ADragonBallStaticActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonBallStaticActor.DragonBallStaticActor_C.UserConstructionScript");

	ADragonBallStaticActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DragonBallStaticActor.DragonBallStaticActor_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ADragonBallStaticActor_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonBallStaticActor.DragonBallStaticActor_C.ReceiveHit");

	ADragonBallStaticActor_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DragonBallStaticActor.DragonBallStaticActor_C.ExecuteUbergraph_DragonBallStaticActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADragonBallStaticActor_C::ExecuteUbergraph_DragonBallStaticActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonBallStaticActor.DragonBallStaticActor_C.ExecuteUbergraph_DragonBallStaticActor");

	ADragonBallStaticActor_C_ExecuteUbergraph_DragonBallStaticActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DragonBallStaticActor.DragonBallStaticActor_C.UntouchDB_Send__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ADragonBallStaticActor_C::UntouchDB_Send__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonBallStaticActor.DragonBallStaticActor_C.UntouchDB_Send__DelegateSignature");

	ADragonBallStaticActor_C_UntouchDB_Send__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DragonBallStaticActor.DragonBallStaticActor_C.HitDB_Send__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MyDBIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  BallActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADragonBallStaticActor_C::HitDB_Send__DelegateSignature(int MyDBIdx, class AActor* BallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DragonBallStaticActor.DragonBallStaticActor_C.HitDB_Send__DelegateSignature");

	ADragonBallStaticActor_C_HitDB_Send__DelegateSignature_Params params;
	params.MyDBIdx = MyDBIdx;
	params.BallActor = BallActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
