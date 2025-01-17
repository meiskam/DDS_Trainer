
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

// Function caughtOnSearchWidget.caughtOnSearchWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcaughtOnSearchWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function caughtOnSearchWidget.caughtOnSearchWidget_C.PreConstruct");

	UcaughtOnSearchWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function caughtOnSearchWidget.caughtOnSearchWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           foundDrugs                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcaughtOnSearchWidget_C::Setup(bool foundDrugs)
{
	static auto fn = UObject::FindObject<UFunction>("Function caughtOnSearchWidget.caughtOnSearchWidget_C.Setup");

	UcaughtOnSearchWidget_C_Setup_Params params;
	params.foundDrugs = foundDrugs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function caughtOnSearchWidget.caughtOnSearchWidget_C.ExecuteUbergraph_caughtOnSearchWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcaughtOnSearchWidget_C::ExecuteUbergraph_caughtOnSearchWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function caughtOnSearchWidget.caughtOnSearchWidget_C.ExecuteUbergraph_caughtOnSearchWidget");

	UcaughtOnSearchWidget_C_ExecuteUbergraph_caughtOnSearchWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
