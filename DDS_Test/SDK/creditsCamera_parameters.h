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

// Function creditsCamera.creditsCamera_C.UserConstructionScript
struct AcreditsCamera_C_UserConstructionScript_Params
{
};

// Function creditsCamera.creditsCamera_C.ReceiveTick
struct AcreditsCamera_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function creditsCamera.creditsCamera_C.ExecuteUbergraph_creditsCamera
struct AcreditsCamera_C_ExecuteUbergraph_creditsCamera_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
