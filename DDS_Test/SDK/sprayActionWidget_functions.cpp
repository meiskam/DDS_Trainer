
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

// Function sprayActionWidget.sprayActionWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   AreaNam                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UsprayActionWidget_C::Setup(const struct FText& AreaNam)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayActionWidget.sprayActionWidget_C.Setup");

	UsprayActionWidget_C_Setup_Params params;
	params.AreaNam = AreaNam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sprayActionWidget.sprayActionWidget_C.ExecuteUbergraph_sprayActionWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsprayActionWidget_C::ExecuteUbergraph_sprayActionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sprayActionWidget.sprayActionWidget_C.ExecuteUbergraph_sprayActionWidget");

	UsprayActionWidget_C_ExecuteUbergraph_sprayActionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
