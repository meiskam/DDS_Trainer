
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

// Function equipmentListWidget.equipmentListWidget_C.getSurfaceData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SurfaceID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVillaListCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVillaSurfaceFinish     SurfaceData                    (Parm, OutParm)

void UequipmentListWidget_C::getSurfaceData(const struct FName& SurfaceID, TEnumAsByte<EVillaListCategories> Category, struct FVillaSurfaceFinish* SurfaceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.getSurfaceData");

	UequipmentListWidget_C_getSurfaceData_Params params;
	params.SurfaceID = SurfaceID;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SurfaceData != nullptr)
		*SurfaceData = params.SurfaceData;
}


// Function equipmentListWidget.equipmentListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UequipmentListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.Construct");

	UequipmentListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentListWidget.equipmentListWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FappartmentEquipment    EqData                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   EqID                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EVillaListCategories> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentListWidget_C::Setup(const struct FappartmentEquipment& EqData, const struct FName& EqID, TEnumAsByte<EVillaListCategories> Category, int Quantity, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.Setup");

	UequipmentListWidget_C_Setup_Params params;
	params.EqData = EqData;
	params.EqID = EqID;
	params.Category = Category;
	params.Quantity = Quantity;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UequipmentListWidget_C::ExecuteUbergraph_equipmentListWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget");

	UequipmentListWidget_C_ExecuteUbergraph_equipmentListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
