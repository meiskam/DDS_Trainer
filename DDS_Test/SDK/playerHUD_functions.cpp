
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

// Function playerHUD.playerHUD_C.UpdateHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HpLevel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplayerHUD_C::UpdateHP(float HpLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.UpdateHP");

	UplayerHUD_C_UpdateHP_Params params;
	params.HpLevel = HpLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.Get_txtActionBtn_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UplayerHUD_C::Get_txtActionBtn_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.Get_txtActionBtn_ColorAndOpacity_1");

	UplayerHUD_C_Get_txtActionBtn_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function playerHUD.playerHUD_C.updateDebugPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::updateDebugPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateDebugPanel");

	UplayerHUD_C_updateDebugPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.renderAwaitingOrders
// (Public, BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::renderAwaitingOrders()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.renderAwaitingOrders");

	UplayerHUD_C_renderAwaitingOrders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.refreshCompass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::refreshCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.refreshCompass");

	UplayerHUD_C_refreshCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.updateCompass
// (Public, BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::updateCompass()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateCompass");

	UplayerHUD_C_updateCompass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UplayerHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.Construct");

	UplayerHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplayerHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.Tick");

	UplayerHUD_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.showAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   KeyName                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ObjectName                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UplayerHUD_C::showAction(const struct FText& KeyName, const struct FText& ActionName, const struct FText& ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.showAction");

	UplayerHUD_C_showAction_Params params;
	params.KeyName = KeyName;
	params.ActionName = ActionName;
	params.ObjectName = ObjectName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.hideAction
// (BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::hideAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.hideAction");

	UplayerHUD_C_hideAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.toggleSterowanie
// (BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::toggleSterowanie()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.toggleSterowanie");

	UplayerHUD_C_toggleSterowanie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.displayQuickMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UplayerHUD_C::displayQuickMessage(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.displayQuickMessage");

	UplayerHUD_C_displayQuickMessage_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.unlockQuickMessage
// (BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::unlockQuickMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.unlockQuickMessage");

	UplayerHUD_C_unlockQuickMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.updateTest
// (BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::updateTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateTest");

	UplayerHUD_C_updateTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.updateMiniTaskList
// (BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::updateMiniTaskList()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateMiniTaskList");

	UplayerHUD_C_updateMiniTaskList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.checkShowTaskList
// (BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::checkShowTaskList()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.checkShowTaskList");

	UplayerHUD_C_checkShowTaskList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.breakListRender
// (BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::breakListRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.breakListRender");

	UplayerHUD_C_breakListRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.updateWeedPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ArentAppartmentArea_C*   HideoutRef                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InAppartment                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplayerHUD_C::updateWeedPanel(class ArentAppartmentArea_C* HideoutRef, bool InAppartment)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.updateWeedPanel");

	UplayerHUD_C_updateWeedPanel_Params params;
	params.HideoutRef = HideoutRef;
	params.InAppartment = InAppartment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.refreshActiveColor
// (BlueprintCallable, BlueprintEvent)

void UplayerHUD_C::refreshActiveColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.refreshActiveColor");

	UplayerHUD_C_refreshActiveColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function playerHUD.playerHUD_C.ExecuteUbergraph_playerHUD
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UplayerHUD_C::ExecuteUbergraph_playerHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function playerHUD.playerHUD_C.ExecuteUbergraph_playerHUD");

	UplayerHUD_C_ExecuteUbergraph_playerHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
