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

// Function clientODPopup.clientODPopup_C.Construct
struct UclientODPopup_C_Construct_Params
{
};

// Function clientODPopup.clientODPopup_C.Setup
struct UclientODPopup_C_Setup_Params
{
	struct FText                                       ClientName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ClientOverdoseDrug;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function clientODPopup.clientODPopup_C.killMe
struct UclientODPopup_C_killMe_Params
{
};

// Function clientODPopup.clientODPopup_C.ExecuteUbergraph_clientODPopup
struct UclientODPopup_C_ExecuteUbergraph_clientODPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
