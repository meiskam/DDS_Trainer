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

// Function salesManager.salesManager_C.ReleaseAllClients
struct AsalesManager_C_ReleaseAllClients_Params
{
};

// Function salesManager.salesManager_C.CalcArrestBail
struct AsalesManager_C_CalcArrestBail_Params
{
	int                                                ArrestedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutBailAmount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.CheckArrestReleases
struct AsalesManager_C_CheckArrestReleases_Params
{
};

// Function salesManager.salesManager_C.TryDepositCashToSafe
struct AsalesManager_C_TryDepositCashToSafe_Params
{
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AreaID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.AddDealerExp
struct AsalesManager_C_AddDealerExp_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SaleQuantity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExpAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.GetClientMeta
struct AsalesManager_C_GetClientMeta_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClientFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FClientMeta                                 OutMeta;                                                  // (Parm, OutParm)
};

// Function salesManager.salesManager_C.ReleaseClient
struct AsalesManager_C_ReleaseClient_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.GetClientArrestChance
struct AsalesManager_C_GetClientArrestChance_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutChance;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.IsClientArrested
struct AsalesManager_C_IsClientArrested_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsArrested;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.ArrestClient
struct AsalesManager_C_ArrestClient_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.ReconstructClientList
struct AsalesManager_C_ReconstructClientList_Params
{
};

// Function salesManager.salesManager_C.ExpandRama
struct AsalesManager_C_ExpandRama_Params
{
};

// Function salesManager.salesManager_C.UpdateFlags
struct AsalesManager_C_UpdateFlags_Params
{
};

// Function salesManager.salesManager_C.AddDrugWishlist
struct AsalesManager_C_AddDrugWishlist_Params
{
	int                                                DrugIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.countAddictedClients
struct AsalesManager_C_countAddictedClients_Params
{
	int                                                ClientCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.countMaxDealers
struct AsalesManager_C_countMaxDealers_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanHaveMore;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.adaptDifficulty
struct AsalesManager_C_adaptDifficulty_Params
{
};

// Function salesManager.salesManager_C.generateClientMessage
struct AsalesManager_C_generateClientMessage_Params
{
	bool                                               Dealer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CashMeet;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DrugNam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               priceHigh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm, OutParm)
};

// Function salesManager.salesManager_C.recalcClientCount
struct AsalesManager_C_recalcClientCount_Params
{
};

// Function salesManager.salesManager_C.tryDisplayClientState
struct AsalesManager_C_tryDisplayClientState_Params
{
};

// Function salesManager.salesManager_C.displayClientAddictedPopup
struct AsalesManager_C_displayClientAddictedPopup_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.generateClientName
struct AsalesManager_C_generateClientName_Params
{
	bool                                               male;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ClientName;                                               // (Parm, OutParm)
};

// Function salesManager.salesManager_C.updateSkillMultipliers
struct AsalesManager_C_updateSkillMultipliers_Params
{
};

// Function salesManager.salesManager_C.spawnAreaSampleClient
struct AsalesManager_C_spawnAreaSampleClient_Params
{
	struct FString                                     ClientArea;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function salesManager.salesManager_C.updateAreaTimeMultiplier
struct AsalesManager_C_updateAreaTimeMultiplier_Params
{
};

// Function salesManager.salesManager_C.loopCheckPrices
struct AsalesManager_C_loopCheckPrices_Params
{
	bool                                               someAffordable;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.getOrderedDrugName
struct AsalesManager_C_getOrderedDrugName_Params
{
	int                                                DrugIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Output;                                                   // (Parm, OutParm)
};

// Function salesManager.salesManager_C.checkClientInterested
struct AsalesManager_C_checkClientInterested_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DrugDemandedID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interested;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               priceHigh;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Wish;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.badSaleResponse
struct AsalesManager_C_badSaleResponse_Params
{
	bool                                               ClientLost;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.sendDealerOffer
struct AsalesManager_C_sendDealerOffer_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.dealerOfferChance
struct AsalesManager_C_dealerOfferChance_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function salesManager.salesManager_C.odMessageResponse
struct AsalesManager_C_odMessageResponse_Params
{
	bool                                               Dealer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.showODPopup
struct AsalesManager_C_showODPopup_Params
{
	bool                                               Dealer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.addStatsOD
struct AsalesManager_C_addStatsOD_Params
{
};

// Function salesManager.salesManager_C.selectDrugID
struct AsalesManager_C_selectDrugID_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DrugID;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.timeShift
struct AsalesManager_C_timeShift_Params
{
	float                                              TimeShiftHours;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeShiftMinutes;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.affectBadReputation
struct AsalesManager_C_affectBadReputation_Params
{
	float                                              ReputationLoss;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.calcIntervalMultiplier
struct AsalesManager_C_calcIntervalMultiplier_Params
{
	float                                              baseInterval;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutInterval;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.selectClientArea
struct AsalesManager_C_selectClientArea_Params
{
	struct FString                                     SelectedAreaID;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function salesManager.salesManager_C.getOrderedDrugIndex
struct AsalesManager_C_getOrderedDrugIndex_Params
{
	int                                                RandomIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.refreshAvailableDrugs
struct AsalesManager_C_refreshAvailableDrugs_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DrugsAreAvailable;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.countClientStatistics
struct AsalesManager_C_countClientStatistics_Params
{
};

// Function salesManager.salesManager_C.calcOrderQuantity
struct AsalesManager_C_calcOrderQuantity_Params
{
	int                                                inClientID;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               nightTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               priceHigh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                DrugID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                outQuantity;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Critical;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.clientSendNewOrder
struct AsalesManager_C_clientSendNewOrder_Params
{
	int                                                ClientId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               nightTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.clientOrderCountdown
struct AsalesManager_C_clientOrderCountdown_Params
{
	float                                              Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.generateNewClient
struct AsalesManager_C_generateNewClient_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.UserConstructionScript
struct AsalesManager_C_UserConstructionScript_Params
{
};

// Function salesManager.salesManager_C.ReceiveBeginPlay
struct AsalesManager_C_ReceiveBeginPlay_Params
{
};

// Function salesManager.salesManager_C.ReceiveTick
struct AsalesManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.tryInitialise
struct AsalesManager_C_tryInitialise_Params
{
};

// Function salesManager.salesManager_C.checkClientState
struct AsalesManager_C_checkClientState_Params
{
};

// Function salesManager.salesManager_C.trySpawnSampleGuy
struct AsalesManager_C_trySpawnSampleGuy_Params
{
};

// Function salesManager.salesManager_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
struct AsalesManager_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params
{
	class URamaSaveComponent*                          RamaSaveComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     LevelPackageName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function salesManager.salesManager_C.ForceArrestAllClients
struct AsalesManager_C_ForceArrestAllClients_Params
{
};

// Function salesManager.salesManager_C.AddArrestClients
struct AsalesManager_C_AddArrestClients_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.AddArrestScreen
struct AsalesManager_C_AddArrestScreen_Params
{
};

// Function salesManager.salesManager_C.DealerLeveledUp
struct AsalesManager_C_DealerLeveledUp_Params
{
	int                                                NewLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.AllDealersAddExp
struct AsalesManager_C_AllDealersAddExp_Params
{
	float                                              ExpAmount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function salesManager.salesManager_C.DealerGotArrested
struct AsalesManager_C_DealerGotArrested_Params
{
};

// Function salesManager.salesManager_C.DisplayArrestPopup
struct AsalesManager_C_DisplayArrestPopup_Params
{
};

// Function salesManager.salesManager_C.ForceReleaseAllClients
struct AsalesManager_C_ForceReleaseAllClients_Params
{
};

// Function salesManager.salesManager_C.DisableBallenaBlock
struct AsalesManager_C_DisableBallenaBlock_Params
{
};

// Function salesManager.salesManager_C.KillSalesManager
struct AsalesManager_C_KillSalesManager_Params
{
};

// Function salesManager.salesManager_C.ExecuteUbergraph_salesManager
struct AsalesManager_C_ExecuteUbergraph_salesManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
