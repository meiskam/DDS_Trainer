
#include "pch.h"

// Name: DDS, Version: 1.1.0.25

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function workStationListWidget.workStationListWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    InventoryData                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   EqID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DrugID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   InventoryGuid                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FappartmentEquipment    EqData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMixProportionsStruct   MixProportions                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UworkStationListWidget_C::Setup(const struct FinventoryItemStruct& InventoryData, const struct FName& EqID, const struct FName& DrugID, const struct FGuid& InventoryGuid, int Quantity, int Amount, bool Equipment, const struct FappartmentEquipment& EqData, bool Selected, const struct FMixProportionsStruct& MixProportions)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationListWidget.workStationListWidget_C.Setup");

	UworkStationListWidget_C_Setup_Params params;
	params.InventoryData = InventoryData;
	params.EqID = EqID;
	params.DrugID = DrugID;
	params.InventoryGuid = InventoryGuid;
	params.Quantity = Quantity;
	params.Amount = Amount;
	params.Equipment = Equipment;
	params.EqData = EqData;
	params.Selected = Selected;
	params.MixProportions = MixProportions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UworkStationListWidget_C::ExecuteUbergraph_workStationListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationListWidget.workStationListWidget_C.ExecuteUbergraph_workStationListWidget");

	UworkStationListWidget_C_ExecuteUbergraph_workStationListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
