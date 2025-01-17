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

// Function compassMarkerWidget.compassMarkerWidget_C.Setup
struct UcompassMarkerWidget_C_Setup_Params
{
	TEnumAsByte<EmapMarkerCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function compassMarkerWidget.compassMarkerWidget_C.UpdateDistance
struct UcompassMarkerWidget_C_UpdateDistance_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function compassMarkerWidget.compassMarkerWidget_C.ExecuteUbergraph_compassMarkerWidget
struct UcompassMarkerWidget_C_ExecuteUbergraph_compassMarkerWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
