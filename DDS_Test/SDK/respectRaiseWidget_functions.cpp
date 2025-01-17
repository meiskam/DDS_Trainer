
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

// Function respectRaiseWidget.respectRaiseWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UrespectRaiseWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function respectRaiseWidget.respectRaiseWidget_C.Construct");

	UrespectRaiseWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function respectRaiseWidget.respectRaiseWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UrespectRaiseWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function respectRaiseWidget.respectRaiseWidget_C.Tick");

	UrespectRaiseWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function respectRaiseWidget.respectRaiseWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          respAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   AreaNam                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          respectNow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          respectAfter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          respectMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UrespectRaiseWidget_C::Setup(float respAmount, const struct FText& AreaNam, float respectNow, float respectAfter, float respectMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function respectRaiseWidget.respectRaiseWidget_C.Setup");

	UrespectRaiseWidget_C_Setup_Params params;
	params.respAmount = respAmount;
	params.AreaNam = AreaNam;
	params.respectNow = respectNow;
	params.respectAfter = respectAfter;
	params.respectMax = respectMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function respectRaiseWidget.respectRaiseWidget_C.ExecuteUbergraph_respectRaiseWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UrespectRaiseWidget_C::ExecuteUbergraph_respectRaiseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function respectRaiseWidget.respectRaiseWidget_C.ExecuteUbergraph_respectRaiseWidget");

	UrespectRaiseWidget_C_ExecuteUbergraph_respectRaiseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
