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

// Function introCreditsWidget.introCreditsWidget_C.Construct
struct UintroCreditsWidget_C_Construct_Params
{
};

// Function introCreditsWidget.introCreditsWidget_C.Setup
struct UintroCreditsWidget_C_Setup_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Person;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Company;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function introCreditsWidget.introCreditsWidget_C.ExecuteUbergraph_introCreditsWidget
struct UintroCreditsWidget_C_ExecuteUbergraph_introCreditsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
