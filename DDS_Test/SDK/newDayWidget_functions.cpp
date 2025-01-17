
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

// Function newDayWidget.newDayWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UnewDayWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function newDayWidget.newDayWidget_C.Construct");

	UnewDayWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function newDayWidget.newDayWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DayNam                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UnewDayWidget_C::Setup(const struct FText& DayNam)
{
	static auto fn = UObject::FindObject<UFunction>("Function newDayWidget.newDayWidget_C.Setup");

	UnewDayWidget_C_Setup_Params params;
	params.DayNam = DayNam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function newDayWidget.newDayWidget_C.ExecuteUbergraph_newDayWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UnewDayWidget_C::ExecuteUbergraph_newDayWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function newDayWidget.newDayWidget_C.ExecuteUbergraph_newDayWidget");

	UnewDayWidget_C_ExecuteUbergraph_newDayWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
