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

// Function tooltipWidget.tooltipWidget_C.Construct
struct UtooltipWidget_C_Construct_Params
{
};

// Function tooltipWidget.tooltipWidget_C.SetText
struct UtooltipWidget_C_SetText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function tooltipWidget.tooltipWidget_C.ExecuteUbergraph_tooltipWidget
struct UtooltipWidget_C_ExecuteUbergraph_tooltipWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
