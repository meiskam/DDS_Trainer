
#include "pch.h"

// Name: DDS, Version: 1.1.0.25

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function streamMapBoxLoader.streamMapBoxLoader_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AstreamMapBoxLoader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function streamMapBoxLoader.streamMapBoxLoader_C.UserConstructionScript");

	AstreamMapBoxLoader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streamMapBoxLoader.streamMapBoxLoader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AstreamMapBoxLoader_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function streamMapBoxLoader.streamMapBoxLoader_C.ReceiveBeginPlay");

	AstreamMapBoxLoader_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streamMapBoxLoader.streamMapBoxLoader_C.loadOverride
// (BlueprintCallable, BlueprintEvent)

void AstreamMapBoxLoader_C::loadOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function streamMapBoxLoader.streamMapBoxLoader_C.loadOverride");

	AstreamMapBoxLoader_C_loadOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streamMapBoxLoader.streamMapBoxLoader_C.unloadOverride
// (BlueprintCallable, BlueprintEvent)

void AstreamMapBoxLoader_C::unloadOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function streamMapBoxLoader.streamMapBoxLoader_C.unloadOverride");

	AstreamMapBoxLoader_C_unloadOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streamMapBoxLoader.streamMapBoxLoader_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AstreamMapBoxLoader_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function streamMapBoxLoader.streamMapBoxLoader_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AstreamMapBoxLoader_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streamMapBoxLoader.streamMapBoxLoader_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstreamMapBoxLoader_C::BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function streamMapBoxLoader.streamMapBoxLoader_C.BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	AstreamMapBoxLoader_C_BndEvt__Box_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streamMapBoxLoader.streamMapBoxLoader_C.checkPlayerOverlaping
// (BlueprintCallable, BlueprintEvent)

void AstreamMapBoxLoader_C::checkPlayerOverlaping()
{
	static auto fn = UObject::FindObject<UFunction>("Function streamMapBoxLoader.streamMapBoxLoader_C.checkPlayerOverlaping");

	AstreamMapBoxLoader_C_checkPlayerOverlaping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function streamMapBoxLoader.streamMapBoxLoader_C.ExecuteUbergraph_streamMapBoxLoader
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AstreamMapBoxLoader_C::ExecuteUbergraph_streamMapBoxLoader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function streamMapBoxLoader.streamMapBoxLoader_C.ExecuteUbergraph_streamMapBoxLoader");

	AstreamMapBoxLoader_C_ExecuteUbergraph_streamMapBoxLoader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
