
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

// Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_decoDeskLamp3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.UserConstructionScript");

	ABP_decoDeskLamp3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_decoDeskLamp3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.ReceiveBeginPlay");

	ABP_decoDeskLamp3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.InputToggleOff
// (BlueprintCallable, BlueprintEvent)

void ABP_decoDeskLamp3_C::InputToggleOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.InputToggleOff");

	ABP_decoDeskLamp3_C_InputToggleOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.InputToggleOn
// (BlueprintCallable, BlueprintEvent)

void ABP_decoDeskLamp3_C::InputToggleOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.InputToggleOn");

	ABP_decoDeskLamp3_C_InputToggleOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.ExecuteUbergraph_BP_decoDeskLamp3
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_decoDeskLamp3_C::ExecuteUbergraph_BP_decoDeskLamp3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_decoDeskLamp3.BP_decoDeskLamp3_C.ExecuteUbergraph_BP_decoDeskLamp3");

	ABP_decoDeskLamp3_C_ExecuteUbergraph_BP_decoDeskLamp3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
