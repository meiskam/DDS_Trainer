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

// Function workStationUI.workStationUI_C.Get_tabWorkStation_ColorAndOpacity_1
struct UworkStationUI_C_Get_tabWorkStation_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function workStationUI.workStationUI_C.GetSubstanceName
struct UworkStationUI_C_GetSubstanceName_Params
{
	class AworkStationEquipmentBase_C*                 Eq;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function workStationUI.workStationUI_C.calcPrecisionText
struct UworkStationUI_C_calcPrecisionText_Params
{
	class AworkStationEquipmentBase_C*                 EquipmentRef;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationUI.workStationUI_C.scrollEqUp
struct UworkStationUI_C_scrollEqUp_Params
{
};

// Function workStationUI.workStationUI_C.scrollEqDown
struct UworkStationUI_C_scrollEqDown_Params
{
};

// Function workStationUI.workStationUI_C.renderEquipment
struct UworkStationUI_C_renderEquipment_Params
{
};

// Function workStationUI.workStationUI_C.scrollDrugsUp
struct UworkStationUI_C_scrollDrugsUp_Params
{
};

// Function workStationUI.workStationUI_C.scrollDrugsDown
struct UworkStationUI_C_scrollDrugsDown_Params
{
};

// Function workStationUI.workStationUI_C.renderInventoryDrugs
struct UworkStationUI_C_renderInventoryDrugs_Params
{
};

// Function workStationUI.workStationUI_C.PreConstruct
struct UworkStationUI_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationUI.workStationUI_C.Construct
struct UworkStationUI_C_Construct_Params
{
};

// Function workStationUI.workStationUI_C.Tick
struct UworkStationUI_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function workStationUI.workStationUI_C.reinitialise
struct UworkStationUI_C_reinitialise_Params
{
};

// Function workStationUI.workStationUI_C.popRing
struct UworkStationUI_C_popRing_Params
{
};

// Function workStationUI.workStationUI_C.ManualToggle
struct UworkStationUI_C_ManualToggle_Params
{
};

// Function workStationUI.workStationUI_C.BndEvt__btnCloseManual_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UworkStationUI_C_BndEvt__btnCloseManual_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function workStationUI.workStationUI_C.BndEvt__btnManEquipment_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UworkStationUI_C_BndEvt__btnManEquipment_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function workStationUI.workStationUI_C.BndEvt__btnManModes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UworkStationUI_C_BndEvt__btnManModes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function workStationUI.workStationUI_C.BndEvt__btnManFunctions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UworkStationUI_C_BndEvt__btnManFunctions_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function workStationUI.workStationUI_C.BndEvt__btnManChemistry_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UworkStationUI_C_BndEvt__btnManChemistry_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function workStationUI.workStationUI_C.verifyWS_Instance
struct UworkStationUI_C_verifyWS_Instance_Params
{
};

// Function workStationUI.workStationUI_C.ExecuteUbergraph_workStationUI
struct UworkStationUI_C_ExecuteUbergraph_workStationUI_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
