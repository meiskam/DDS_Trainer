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

// Function gangManager.gangManager_C.gangLevelLimitRaise
struct AgangManager_C_gangLevelLimitRaise_Params
{
};

// Function gangManager.gangManager_C.reconstructOrderFlow
struct AgangManager_C_reconstructOrderFlow_Params
{
};

// Function gangManager.gangManager_C.reconstructDropRef
struct AgangManager_C_reconstructDropRef_Params
{
};

// Function gangManager.gangManager_C.modifyGangSatisfaction
struct AgangManager_C_modifyGangSatisfaction_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gangManager.gangManager_C.restartOrderTimer
struct AgangManager_C_restartOrderTimer_Params
{
};

// Function gangManager.gangManager_C.getGangOrderMessageFormat
struct AgangManager_C_getGangOrderMessageFormat_Params
{
	struct FText                                       MessageFormat;                                            // (Parm, OutParm)
};

// Function gangManager.gangManager_C.getFinaliseTaskDescription
struct AgangManager_C_getFinaliseTaskDescription_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function gangManager.gangManager_C.testDropForQuantity
struct AgangManager_C_testDropForQuantity_Params
{
};

// Function gangManager.gangManager_C.checkOrderDrop
struct AgangManager_C_checkOrderDrop_Params
{
	bool                                               OrderOK;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function gangManager.gangManager_C.sendGangOrder
struct AgangManager_C_sendGangOrder_Params
{
	bool                                               SkipMessage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ExpectedDrugID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedDrugMinQuality;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                packageSizes;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                packageQuantity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gangManager.gangManager_C.UserConstructionScript
struct AgangManager_C_UserConstructionScript_Params
{
};

// Function gangManager.gangManager_C.ReceiveBeginPlay
struct AgangManager_C_ReceiveBeginPlay_Params
{
};

// Function gangManager.gangManager_C.ReceiveTick
struct AgangManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gangManager.gangManager_C.unlockKeijiGang
struct AgangManager_C_unlockKeijiGang_Params
{
};

// Function gangManager.gangManager_C.unlockBallenaGang
struct AgangManager_C_unlockBallenaGang_Params
{
};

// Function gangManager.gangManager_C.retryInitiate
struct AgangManager_C_retryInitiate_Params
{
};

// Function gangManager.gangManager_C.checkGangPlaceStatus
struct AgangManager_C_checkGangPlaceStatus_Params
{
};

// Function gangManager.gangManager_C.gangMessageResponse
struct AgangManager_C_gangMessageResponse_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function gangManager.gangManager_C.spawnGangMember
struct AgangManager_C_spawnGangMember_Params
{
};

// Function gangManager.gangManager_C.constructNewGangOrder
struct AgangManager_C_constructNewGangOrder_Params
{
};

// Function gangManager.gangManager_C.checkDeliveryTime
struct AgangManager_C_checkDeliveryTime_Params
{
};

// Function gangManager.gangManager_C.unlockDeliveryMessage
struct AgangManager_C_unlockDeliveryMessage_Params
{
};

// Function gangManager.gangManager_C.TestGangOrder
struct AgangManager_C_TestGangOrder_Params
{
};

// Function gangManager.gangManager_C.TestGangMultiplier
struct AgangManager_C_TestGangMultiplier_Params
{
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rep;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gangManager.gangManager_C.ExecuteUbergraph_gangManager
struct AgangManager_C_ExecuteUbergraph_gangManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
