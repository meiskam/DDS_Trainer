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

// Function appartmentModeWidget.appartmentModeWidget_C.Get_txt_Text_1
struct UappartmentModeWidget_C_Get_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Get_tabsVilla_Visibility_1
struct UappartmentModeWidget_C_Get_tabsVilla_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.ClearLocalList
struct UappartmentModeWidget_C_ClearLocalList_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.PrepListItems
struct UappartmentModeWidget_C_PrepListItems_Params
{
	TArray<struct FName>                               IDs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        Quantities;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EVillaListCategories>                  Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.SellItems
struct UappartmentModeWidget_C_SellItems_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ShowShipmentPanel
struct UappartmentModeWidget_C_ShowShipmentPanel_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ShipItems
struct UappartmentModeWidget_C_ShipItems_Params
{
	class ArentAppartmentArea_C*                       TargetAppartment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.PrepareManager
struct UappartmentModeWidget_C_PrepareManager_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.GetbIsEnabled_2
struct UappartmentModeWidget_C_GetbIsEnabled_2_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.GetbIsEnabled_1
struct UappartmentModeWidget_C_GetbIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.RenderManager
struct UappartmentModeWidget_C_RenderManager_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.reconstructSourceIndexes
struct UappartmentModeWidget_C_reconstructSourceIndexes_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.renderObjectList
struct UappartmentModeWidget_C_renderObjectList_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.PreConstruct
struct UappartmentModeWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.Construct
struct UappartmentModeWidget_C_Construct_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.SetupWidget
struct UappartmentModeWidget_C_SetupWidget_Params
{
	class ArentAppartmentArea_C*                       AppartmentRef;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ERROR_XXX*                                   VillaRef;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function appartmentModeWidget.appartmentModeWidget_C.setNewObjectGizmo
struct UappartmentModeWidget_C_setNewObjectGizmo_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.selectIndexUp
struct UappartmentModeWidget_C_selectIndexUp_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.selectIndexDown
struct UappartmentModeWidget_C_selectIndexDown_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.removeSelectedIndex
struct UappartmentModeWidget_C_removeSelectedIndex_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.TabSwitch
struct UappartmentModeWidget_C_TabSwitch_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.Destruct
struct UappartmentModeWidget_C_Destruct_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_K2Node_ComponentBoundEvent_0_ListContentChanged__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__AppManageList_K2Node_ComponentBoundEvent_0_ListContentChanged__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_0_K2Node_ComponentBoundEvent_1_ListContentChanged__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__AppManageList_0_K2Node_ComponentBoundEvent_1_ListContentChanged__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__AppManageList_1_K2Node_ComponentBoundEvent_2_ListContentChanged__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__AppManageList_1_K2Node_ComponentBoundEvent_2_ListContentChanged__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UappartmentModeWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function appartmentModeWidget.appartmentModeWidget_C.ExecuteUbergraph_appartmentModeWidget
struct UappartmentModeWidget_C_ExecuteUbergraph_appartmentModeWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
