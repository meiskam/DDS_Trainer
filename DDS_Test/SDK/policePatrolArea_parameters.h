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

// Function policePatrolArea.policePatrolArea_C.GetPatrolSpawnChances
struct ApolicePatrolArea_C_GetPatrolSpawnChances_Params
{
	float                                              Timeout;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ChanceLow;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ChanceHigh;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolArea.policePatrolArea_C.SpawnPatrol
struct ApolicePatrolArea_C_SpawnPatrol_Params
{
	class ApolicePatrolPoint_C*                        SpawnPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolArea.policePatrolArea_C.ChooseSpawnPoint
struct ApolicePatrolArea_C_ChooseSpawnPoint_Params
{
	class ApolicePatrolPoint_C*                        OutPoint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Succeded;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FailID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolArea.policePatrolArea_C.getUnreachedPoint
struct ApolicePatrolArea_C_getUnreachedPoint_Params
{
	class ApolicePatrolPoint_C*                        Patrol_Point;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolArea.policePatrolArea_C.UserConstructionScript
struct ApolicePatrolArea_C_UserConstructionScript_Params
{
};

// Function policePatrolArea.policePatrolArea_C.ShortRadiusChanged
struct ApolicePatrolArea_C_ShortRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolArea.policePatrolArea_C.ReceiveBeginPlay
struct ApolicePatrolArea_C_ReceiveBeginPlay_Params
{
};

// Function policePatrolArea.policePatrolArea_C.resetPatrolArea
struct ApolicePatrolArea_C_resetPatrolArea_Params
{
};

// Function policePatrolArea.policePatrolArea_C.restartArea
struct ApolicePatrolArea_C_restartArea_Params
{
};

// Function policePatrolArea.policePatrolArea_C.LongRadiusChanged
struct ApolicePatrolArea_C_LongRadiusChanged_Params
{
	bool                                               InRadius;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function policePatrolArea.policePatrolArea_C.ResetSpawnGate
struct ApolicePatrolArea_C_ResetSpawnGate_Params
{
};

// Function policePatrolArea.policePatrolArea_C.ExecuteUbergraph_policePatrolArea
struct ApolicePatrolArea_C_ExecuteUbergraph_policePatrolArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
