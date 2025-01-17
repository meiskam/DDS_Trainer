
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

// Function drugTakenWidget.drugTakenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UdrugTakenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function drugTakenWidget.drugTakenWidget_C.Construct");

	UdrugTakenWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugTakenWidget.drugTakenWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DrugName                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UdrugTakenWidget_C::Setup(const struct FText& DrugName)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugTakenWidget.drugTakenWidget_C.Setup");

	UdrugTakenWidget_C_Setup_Params params;
	params.DrugName = DrugName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function drugTakenWidget.drugTakenWidget_C.ExecuteUbergraph_drugTakenWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdrugTakenWidget_C::ExecuteUbergraph_drugTakenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function drugTakenWidget.drugTakenWidget_C.ExecuteUbergraph_drugTakenWidget");

	UdrugTakenWidget_C_ExecuteUbergraph_drugTakenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
