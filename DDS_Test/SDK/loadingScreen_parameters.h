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

// Function loadingScreen.loadingScreen_C.setNewTip
struct UloadingScreen_C_setNewTip_Params
{
};

// Function loadingScreen.loadingScreen_C.killLoadingScreen
struct UloadingScreen_C_killLoadingScreen_Params
{
	float                                              delayTime;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function loadingScreen.loadingScreen_C.Construct
struct UloadingScreen_C_Construct_Params
{
};

// Function loadingScreen.loadingScreen_C.ExecuteUbergraph_loadingScreen
struct UloadingScreen_C_ExecuteUbergraph_loadingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
