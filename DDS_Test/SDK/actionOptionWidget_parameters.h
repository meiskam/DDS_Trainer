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

// Function actionOptionWidget.actionOptionWidget_C.Setup
struct UactionOptionWidget_C_Setup_Params
{
	bool                                               InitActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function actionOptionWidget.actionOptionWidget_C.SetActive
struct UactionOptionWidget_C_SetActive_Params
{
	bool                                               activated;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function actionOptionWidget.actionOptionWidget_C.Construct
struct UactionOptionWidget_C_Construct_Params
{
};

// Function actionOptionWidget.actionOptionWidget_C.ExecuteUbergraph_actionOptionWidget
struct UactionOptionWidget_C_ExecuteUbergraph_actionOptionWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
