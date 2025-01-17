
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

// Function quickMessageWidget.quickMessageWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UquickMessageWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function quickMessageWidget.quickMessageWidget_C.Construct");

	UquickMessageWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quickMessageWidget.quickMessageWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SetText                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UquickMessageWidget_C::Setup(const struct FText& SetText)
{
	static auto fn = UObject::FindObject<UFunction>("Function quickMessageWidget.quickMessageWidget_C.Setup");

	UquickMessageWidget_C_Setup_Params params;
	params.SetText = SetText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quickMessageWidget.quickMessageWidget_C.ExecuteUbergraph_quickMessageWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UquickMessageWidget_C::ExecuteUbergraph_quickMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function quickMessageWidget.quickMessageWidget_C.ExecuteUbergraph_quickMessageWidget");

	UquickMessageWidget_C_ExecuteUbergraph_quickMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
