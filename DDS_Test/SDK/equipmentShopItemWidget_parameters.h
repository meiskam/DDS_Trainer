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

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.Get_mainHolder_ToolTipWidget_1
struct UequipmentShopItemWidget_C_Get_mainHolder_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.Setup
struct UequipmentShopItemWidget_C_Setup_Params
{
	struct FName                                       EqID;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UEquipmentShopInterfaceWidget_C*             ParentRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               checkedOut;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaitBoost;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UequipmentShopItemWidget_C_BndEvt__btnItemBuy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function equipmentShopItemWidget.equipmentShopItemWidget_C.ExecuteUbergraph_equipmentShopItemWidget
struct UequipmentShopItemWidget_C_ExecuteUbergraph_equipmentShopItemWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
