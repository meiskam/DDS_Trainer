
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

// Function clientAddictedPopup.clientAddictedPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UclientAddictedPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function clientAddictedPopup.clientAddictedPopup_C.Construct");

	UclientAddictedPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clientAddictedPopup.clientAddictedPopup_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ClientName                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ClientAddictionDrug            (BlueprintVisible, BlueprintReadOnly, Parm)

void UclientAddictedPopup_C::Setup(const struct FText& ClientName, const struct FText& ClientAddictionDrug)
{
	static auto fn = UObject::FindObject<UFunction>("Function clientAddictedPopup.clientAddictedPopup_C.Setup");

	UclientAddictedPopup_C_Setup_Params params;
	params.ClientName = ClientName;
	params.ClientAddictionDrug = ClientAddictionDrug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function clientAddictedPopup.clientAddictedPopup_C.ExecuteUbergraph_clientAddictedPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UclientAddictedPopup_C::ExecuteUbergraph_clientAddictedPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function clientAddictedPopup.clientAddictedPopup_C.ExecuteUbergraph_clientAddictedPopup");

	UclientAddictedPopup_C_ExecuteUbergraph_clientAddictedPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
