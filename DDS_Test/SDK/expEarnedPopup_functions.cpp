
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

// Function expEarnedPopup.expEarnedPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UexpEarnedPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function expEarnedPopup.expEarnedPopup_C.Construct");

	UexpEarnedPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function expEarnedPopup.expEarnedPopup_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ExpAmount                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UexpEarnedPopup_C::Setup(float ExpAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function expEarnedPopup.expEarnedPopup_C.Setup");

	UexpEarnedPopup_C_Setup_Params params;
	params.ExpAmount = ExpAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function expEarnedPopup.expEarnedPopup_C.ExecuteUbergraph_expEarnedPopup
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UexpEarnedPopup_C::ExecuteUbergraph_expEarnedPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function expEarnedPopup.expEarnedPopup_C.ExecuteUbergraph_expEarnedPopup");

	UexpEarnedPopup_C_ExecuteUbergraph_expEarnedPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
