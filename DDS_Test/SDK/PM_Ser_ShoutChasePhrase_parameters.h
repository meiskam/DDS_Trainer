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

// Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ReceiveTick
struct UPM_Ser_ShoutChasePhrase_C_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ExecuteUbergraph_PM_Ser_ShoutChasePhrase
struct UPM_Ser_ShoutChasePhrase_C_ExecuteUbergraph_PM_Ser_ShoutChasePhrase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
