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

// Function worldMapUI_Marker.worldMapUI_Marker_C.checkAreaUnlocked
struct UworldMapUI_Marker_C_checkAreaUnlocked_Params
{
	bool                                               Unlocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function worldMapUI_Marker.worldMapUI_Marker_C.OnMouseButtonDoubleClick
struct UworldMapUI_Marker_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function worldMapUI_Marker.worldMapUI_Marker_C.Get_mainCanvas_ToolTipWidget_1
struct UworldMapUI_Marker_C_Get_mainCanvas_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function worldMapUI_Marker.worldMapUI_Marker_C.Get_mainCanvas_bIsEnabled_1
struct UworldMapUI_Marker_C_Get_mainCanvas_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function worldMapUI_Marker.worldMapUI_Marker_C.OnMouseEnter
struct UworldMapUI_Marker_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function worldMapUI_Marker.worldMapUI_Marker_C.OnMouseLeave
struct UworldMapUI_Marker_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function worldMapUI_Marker.worldMapUI_Marker_C.Setup
struct UworldMapUI_Marker_C_Setup_Params
{
	struct FText                                       MarkerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EmapMarkerCategories>                  MarkerType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   basePos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ToolTip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Dealer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AreaString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function worldMapUI_Marker.worldMapUI_Marker_C.ExecuteUbergraph_worldMapUI_Marker
struct UworldMapUI_Marker_C_ExecuteUbergraph_worldMapUI_Marker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
