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

// Function gameTipPopup.gameTipPopup_C.Construct
struct UgameTipPopup_C_Construct_Params
{
};

// Function gameTipPopup.gameTipPopup_C.Setup
struct UgameTipPopup_C_Setup_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function gameTipPopup.gameTipPopup_C.killWidget
struct UgameTipPopup_C_killWidget_Params
{
};

// Function gameTipPopup.gameTipPopup_C.ExecuteUbergraph_gameTipPopup
struct UgameTipPopup_C_ExecuteUbergraph_gameTipPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
