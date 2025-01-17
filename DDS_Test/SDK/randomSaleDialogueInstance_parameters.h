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

// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.chooseKnowResponses
struct ArandomSaleDialogueInstance_C_chooseKnowResponses_Params
{
	TArray<struct FText>                               outResponses;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.UserConstructionScript
struct ArandomSaleDialogueInstance_C_UserConstructionScript_Params
{
};

// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ReceiveBeginPlay
struct ArandomSaleDialogueInstance_C_ReceiveBeginPlay_Params
{
};

// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ConfigDialogue
struct ArandomSaleDialogueInstance_C_ConfigDialogue_Params
{
	bool                                               male;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.gangUnlock
struct ArandomSaleDialogueInstance_C_gangUnlock_Params
{
};

// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.askedAround
struct ArandomSaleDialogueInstance_C_askedAround_Params
{
};

// Function randomSaleDialogueInstance.randomSaleDialogueInstance_C.ExecuteUbergraph_randomSaleDialogueInstance
struct ArandomSaleDialogueInstance_C_ExecuteUbergraph_randomSaleDialogueInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
