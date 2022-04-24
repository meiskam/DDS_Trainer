
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

// Function decoTrashCeilingLamp.decoTrashCeilingLamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AdecoTrashCeilingLamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoTrashCeilingLamp.decoTrashCeilingLamp_C.UserConstructionScript");

	AdecoTrashCeilingLamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoTrashCeilingLamp.decoTrashCeilingLamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AdecoTrashCeilingLamp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function decoTrashCeilingLamp.decoTrashCeilingLamp_C.ReceiveBeginPlay");

	AdecoTrashCeilingLamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function decoTrashCeilingLamp.decoTrashCeilingLamp_C.ExecuteUbergraph_decoTrashCeilingLamp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AdecoTrashCeilingLamp_C::ExecuteUbergraph_decoTrashCeilingLamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function decoTrashCeilingLamp.decoTrashCeilingLamp_C.ExecuteUbergraph_decoTrashCeilingLamp");

	AdecoTrashCeilingLamp_C_ExecuteUbergraph_decoTrashCeilingLamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
