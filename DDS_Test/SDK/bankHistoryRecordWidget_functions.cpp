
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

// Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Source                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UbankHistoryRecordWidget_C::Setup(const struct FText& Source, const struct FText& Title, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.Setup");

	UbankHistoryRecordWidget_C_Setup_Params params;
	params.Source = Source;
	params.Title = Title;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.ExecuteUbergraph_bankHistoryRecordWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UbankHistoryRecordWidget_C::ExecuteUbergraph_bankHistoryRecordWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bankHistoryRecordWidget.bankHistoryRecordWidget_C.ExecuteUbergraph_bankHistoryRecordWidget");

	UbankHistoryRecordWidget_C_ExecuteUbergraph_bankHistoryRecordWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
