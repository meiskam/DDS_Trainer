#pragma once

#include "pch.h"

// Name: DDS, Version: 1.1.0.25

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function PM_PatrolLead.PM_PatrolLead_C.UserConstructionScript
struct APM_PatrolLead_C_UserConstructionScript_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.ShortRadiusChanged
struct APM_PatrolLead_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_PatrolLead.PM_PatrolLead_C.ReceiveBeginPlay
struct APM_PatrolLead_C_ReceiveBeginPlay_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.ReceiveTick
struct APM_PatrolLead_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_PatrolLead.PM_PatrolLead_C.EngageSuspect
struct APM_PatrolLead_C_EngageSuspect_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct APM_PatrolLead_C_BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PM_PatrolLead.PM_PatrolLead_C.ControlEnded
struct APM_PatrolLead_C_ControlEnded_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.breakControl
struct APM_PatrolLead_C_breakControl_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.overrideStartSearch
struct APM_PatrolLead_C_overrideStartSearch_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.checkForPartner
struct APM_PatrolLead_C_checkForPartner_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.unlockRespawnPartner
struct APM_PatrolLead_C_unlockRespawnPartner_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.LongRadiusChanged
struct APM_PatrolLead_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_PatrolLead.PM_PatrolLead_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
struct APM_PatrolLead_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PM_PatrolLead.PM_PatrolLead_C.WipePatrol
struct APM_PatrolLead_C_WipePatrol_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.RetryWipe
struct APM_PatrolLead_C_RetryWipe_Params
{
};

// Function PM_PatrolLead.PM_PatrolLead_C.ExecuteUbergraph_PM_PatrolLead
struct APM_PatrolLead_C_ExecuteUbergraph_PM_PatrolLead_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
