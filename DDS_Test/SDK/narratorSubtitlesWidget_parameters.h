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

// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.RemoveMe
struct UnarratorSubtitlesWidget_C_RemoveMe_Params
{
};

// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Tick
struct UnarratorSubtitlesWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Setup
struct UnarratorSubtitlesWidget_C_Setup_Params
{
	struct FText                                       Monologue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Construct
struct UnarratorSubtitlesWidget_C_Construct_Params
{
};

// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.ExecuteUbergraph_narratorSubtitlesWidget
struct UnarratorSubtitlesWidget_C_ExecuteUbergraph_narratorSubtitlesWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
