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

// Function equipmentListWidget.equipmentListWidget_C.getSurfaceData
struct UequipmentListWidget_C_getSurfaceData_Params
{
	struct FName                                       SurfaceID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVillaListCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVillaSurfaceFinish                         SurfaceData;                                              // (Parm, OutParm)
};

// Function equipmentListWidget.equipmentListWidget_C.Construct
struct UequipmentListWidget_C_Construct_Params
{
};

// Function equipmentListWidget.equipmentListWidget_C.Setup
struct UequipmentListWidget_C_Setup_Params
{
	struct FappartmentEquipment                        EqData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       EqID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVillaListCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function equipmentListWidget.equipmentListWidget_C.ExecuteUbergraph_equipmentListWidget
struct UequipmentListWidget_C_ExecuteUbergraph_equipmentListWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
