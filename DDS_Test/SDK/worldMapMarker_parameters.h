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

// Function worldMapMarker.worldMapMarker_C.UserConstructionScript
struct AworldMapMarker_C_UserConstructionScript_Params
{
};

// Function worldMapMarker.worldMapMarker_C.ReceiveBeginPlay
struct AworldMapMarker_C_ReceiveBeginPlay_Params
{
};

// Function worldMapMarker.worldMapMarker_C.Setup
struct AworldMapMarker_C_Setup_Params
{
	TEnumAsByte<EmapMarkerCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ToolTip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Dealer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TaskID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function worldMapMarker.worldMapMarker_C.checkTaskEnded
struct AworldMapMarker_C_checkTaskEnded_Params
{
};

// Function worldMapMarker.worldMapMarker_C.reinitialise
struct AworldMapMarker_C_reinitialise_Params
{
};

// Function worldMapMarker.worldMapMarker_C.recalcWaitTime
struct AworldMapMarker_C_recalcWaitTime_Params
{
};

// Function worldMapMarker.worldMapMarker_C.ExecuteUbergraph_worldMapMarker
struct AworldMapMarker_C_ExecuteUbergraph_worldMapMarker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
