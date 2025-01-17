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

// Function pickupItemBase.pickupItemBase_C.RamaExtend
struct ApickupItemBase_C_RamaExtend_Params
{
};

// Function pickupItemBase.pickupItemBase_C.UserConstructionScript
struct ApickupItemBase_C_UserConstructionScript_Params
{
};

// Function pickupItemBase.pickupItemBase_C.setupItem
struct ApickupItemBase_C_setupItem_Params
{
	struct FinventoryItemStruct                        Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Object_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Action_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Droped;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SimulatePhysics;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isGizmo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickupItemBase.pickupItemBase_C.resetDroped
struct ApickupItemBase_C_resetDroped_Params
{
};

// Function pickupItemBase.pickupItemBase_C.ReceiveActorBeginOverlap
struct ApickupItemBase_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickupItemBase.pickupItemBase_C.pickupEventScript
struct ApickupItemBase_C_pickupEventScript_Params
{
};

// Function pickupItemBase.pickupItemBase_C.objectPickup
struct ApickupItemBase_C_objectPickup_Params
{
};

// Function pickupItemBase.pickupItemBase_C.ReceiveBeginPlay
struct ApickupItemBase_C_ReceiveBeginPlay_Params
{
};

// Function pickupItemBase.pickupItemBase_C.ShortRadiusChanged
struct ApickupItemBase_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickupItemBase.pickupItemBase_C.LongRadiusChanged
struct ApickupItemBase_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickupItemBase.pickupItemBase_C.SubclassRamaLoaded
struct ApickupItemBase_C_SubclassRamaLoaded_Params
{
};

// Function pickupItemBase.pickupItemBase_C.BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature
struct ApickupItemBase_C_BndEvt__RamaSave_0_K2Node_ComponentBoundEvent_1_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function pickupItemBase.pickupItemBase_C.ExecuteUbergraph_pickupItemBase
struct ApickupItemBase_C_ExecuteUbergraph_pickupItemBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
