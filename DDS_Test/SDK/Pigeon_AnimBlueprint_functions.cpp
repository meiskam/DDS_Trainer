
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

// Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPigeon_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.BlueprintUpdateAnimation");

	UPigeon_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.AnimNotify_IdleEnd
// (BlueprintCallable, BlueprintEvent)

void UPigeon_AnimBlueprint_C::AnimNotify_IdleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.AnimNotify_IdleEnd");

	UPigeon_AnimBlueprint_C_AnimNotify_IdleEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.ExecuteUbergraph_Pigeon_AnimBlueprint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPigeon_AnimBlueprint_C::ExecuteUbergraph_Pigeon_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pigeon_AnimBlueprint.Pigeon_AnimBlueprint_C.ExecuteUbergraph_Pigeon_AnimBlueprint");

	UPigeon_AnimBlueprint_C_ExecuteUbergraph_Pigeon_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
