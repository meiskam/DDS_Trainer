
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

// Function lockpickWidget.lockpickWidget_C.compareAngles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           aligned                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UlockpickWidget_C::compareAngles(bool* aligned)
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.compareAngles");

	UlockpickWidget_C_compareAngles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (aligned != nullptr)
		*aligned = params.aligned;
}


// Function lockpickWidget.lockpickWidget_C.MouseY
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlockpickWidget_C::MouseY(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.MouseY");

	UlockpickWidget_C_MouseY_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.MouseX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlockpickWidget_C::MouseX(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.MouseX");

	UlockpickWidget_C_MouseX_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlockpickWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.Tick");

	UlockpickWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.resetCircle
// (BlueprintCallable, BlueprintEvent)

void UlockpickWidget_C::resetCircle()
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.resetCircle");

	UlockpickWidget_C_resetCircle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.unlockUp
// (BlueprintCallable, BlueprintEvent)

void UlockpickWidget_C::unlockUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.unlockUp");

	UlockpickWidget_C_unlockUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UlockpickWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.Construct");

	UlockpickWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.changeRotTempo
// (BlueprintCallable, BlueprintEvent)

void UlockpickWidget_C::changeRotTempo()
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.changeRotTempo");

	UlockpickWidget_C_changeRotTempo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.updateAlignment
// (BlueprintCallable, BlueprintEvent)

void UlockpickWidget_C::updateAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.updateAlignment");

	UlockpickWidget_C_updateAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.unlockDown
// (BlueprintCallable, BlueprintEvent)

void UlockpickWidget_C::unlockDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.unlockDown");

	UlockpickWidget_C_unlockDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.setBobbyPinCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PinsLeft                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlockpickWidget_C::setBobbyPinCount(int PinsLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.setBobbyPinCount");

	UlockpickWidget_C_setBobbyPinCount_Params params;
	params.PinsLeft = PinsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UlockpickWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.Destruct");

	UlockpickWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.randomWobble
// (BlueprintCallable, BlueprintEvent)

void UlockpickWidget_C::randomWobble()
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.randomWobble");

	UlockpickWidget_C_randomWobble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lockpickWidget.lockpickWidget_C.ExecuteUbergraph_lockpickWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UlockpickWidget_C::ExecuteUbergraph_lockpickWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lockpickWidget.lockpickWidget_C.ExecuteUbergraph_lockpickWidget");

	UlockpickWidget_C_ExecuteUbergraph_lockpickWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
