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

// Function playerHUD.playerHUD_C.UpdateHP
struct UplayerHUD_C_UpdateHP_Params
{
	float                                              HpLevel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerHUD.playerHUD_C.Get_txtActionBtn_ColorAndOpacity_1
struct UplayerHUD_C_Get_txtActionBtn_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function playerHUD.playerHUD_C.updateDebugPanel
struct UplayerHUD_C_updateDebugPanel_Params
{
};

// Function playerHUD.playerHUD_C.renderAwaitingOrders
struct UplayerHUD_C_renderAwaitingOrders_Params
{
};

// Function playerHUD.playerHUD_C.refreshCompass
struct UplayerHUD_C_refreshCompass_Params
{
};

// Function playerHUD.playerHUD_C.updateCompass
struct UplayerHUD_C_updateCompass_Params
{
};

// Function playerHUD.playerHUD_C.Construct
struct UplayerHUD_C_Construct_Params
{
};

// Function playerHUD.playerHUD_C.Tick
struct UplayerHUD_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerHUD.playerHUD_C.showAction
struct UplayerHUD_C_showAction_Params
{
	struct FText                                       KeyName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ObjectName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerHUD.playerHUD_C.hideAction
struct UplayerHUD_C_hideAction_Params
{
};

// Function playerHUD.playerHUD_C.toggleSterowanie
struct UplayerHUD_C_toggleSterowanie_Params
{
};

// Function playerHUD.playerHUD_C.displayQuickMessage
struct UplayerHUD_C_displayQuickMessage_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function playerHUD.playerHUD_C.unlockQuickMessage
struct UplayerHUD_C_unlockQuickMessage_Params
{
};

// Function playerHUD.playerHUD_C.updateTest
struct UplayerHUD_C_updateTest_Params
{
};

// Function playerHUD.playerHUD_C.updateMiniTaskList
struct UplayerHUD_C_updateMiniTaskList_Params
{
};

// Function playerHUD.playerHUD_C.checkShowTaskList
struct UplayerHUD_C_checkShowTaskList_Params
{
};

// Function playerHUD.playerHUD_C.breakListRender
struct UplayerHUD_C_breakListRender_Params
{
};

// Function playerHUD.playerHUD_C.updateWeedPanel
struct UplayerHUD_C_updateWeedPanel_Params
{
	class ArentAppartmentArea_C*                       HideoutRef;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InAppartment;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function playerHUD.playerHUD_C.refreshActiveColor
struct UplayerHUD_C_refreshActiveColor_Params
{
};

// Function playerHUD.playerHUD_C.ExecuteUbergraph_playerHUD
struct UplayerHUD_C_ExecuteUbergraph_playerHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
