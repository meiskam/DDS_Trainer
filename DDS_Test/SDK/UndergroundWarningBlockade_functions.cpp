
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

// Function UndergroundWarningBlockade.UndergroundWarningBlockade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AUndergroundWarningBlockade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function UndergroundWarningBlockade.UndergroundWarningBlockade_C.UserConstructionScript");

	AUndergroundWarningBlockade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UndergroundWarningBlockade.UndergroundWarningBlockade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUndergroundWarningBlockade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UndergroundWarningBlockade.UndergroundWarningBlockade_C.ReceiveBeginPlay");

	AUndergroundWarningBlockade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UndergroundWarningBlockade.UndergroundWarningBlockade_C.checkUnlock
// (BlueprintCallable, BlueprintEvent)

void AUndergroundWarningBlockade_C::checkUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function UndergroundWarningBlockade.UndergroundWarningBlockade_C.checkUnlock");

	AUndergroundWarningBlockade_C_checkUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UndergroundWarningBlockade.UndergroundWarningBlockade_C.ExecuteUbergraph_UndergroundWarningBlockade
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AUndergroundWarningBlockade_C::ExecuteUbergraph_UndergroundWarningBlockade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UndergroundWarningBlockade.UndergroundWarningBlockade_C.ExecuteUbergraph_UndergroundWarningBlockade");

	AUndergroundWarningBlockade_C_ExecuteUbergraph_UndergroundWarningBlockade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
