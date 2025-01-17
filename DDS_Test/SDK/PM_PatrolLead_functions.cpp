
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

// Function PM_PatrolLead.PM_PatrolLead_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.UserConstructionScript");

	APM_PatrolLead_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.ShortRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APM_PatrolLead_C::ShortRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ShortRadiusChanged");

	APM_PatrolLead_C_ShortRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APM_PatrolLead_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ReceiveBeginPlay");

	APM_PatrolLead_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APM_PatrolLead_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ReceiveTick");

	APM_PatrolLead_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.EngageSuspect
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::EngageSuspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.EngageSuspect");

	APM_PatrolLead_C_EngageSuspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APM_PatrolLead_C::BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	APM_PatrolLead_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function PM_PatrolLead.PM_PatrolLead_C.ControlEnded
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::ControlEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ControlEnded");

	APM_PatrolLead_C_ControlEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.breakControl
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::breakControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.breakControl");

	APM_PatrolLead_C_breakControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.overrideStartSearch
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::overrideStartSearch()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.overrideStartSearch");

	APM_PatrolLead_C_overrideStartSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.checkForPartner
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::checkForPartner()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.checkForPartner");

	APM_PatrolLead_C_checkForPartner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.unlockRespawnPartner
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::unlockRespawnPartner()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.unlockRespawnPartner");

	APM_PatrolLead_C_unlockRespawnPartner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.LongRadiusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRadius                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APM_PatrolLead_C::LongRadiusChanged(bool InRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.LongRadiusChanged");

	APM_PatrolLead_C_LongRadiusChanged_Params params;
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void APM_PatrolLead_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature");

	APM_PatrolLead_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.WipePatrol
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::WipePatrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.WipePatrol");

	APM_PatrolLead_C_WipePatrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.RetryWipe
// (BlueprintCallable, BlueprintEvent)

void APM_PatrolLead_C::RetryWipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.RetryWipe");

	APM_PatrolLead_C_RetryWipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_PatrolLead.PM_PatrolLead_C.ExecuteUbergraph_PM_PatrolLead
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APM_PatrolLead_C::ExecuteUbergraph_PM_PatrolLead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_PatrolLead.PM_PatrolLead_C.ExecuteUbergraph_PM_PatrolLead");

	APM_PatrolLead_C_ExecuteUbergraph_PM_PatrolLead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
