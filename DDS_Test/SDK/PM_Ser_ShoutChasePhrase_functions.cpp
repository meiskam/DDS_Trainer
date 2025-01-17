
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

// Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_Ser_ShoutChasePhrase_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ReceiveTick");

	UPM_Ser_ShoutChasePhrase_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ExecuteUbergraph_PM_Ser_ShoutChasePhrase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_Ser_ShoutChasePhrase_C::ExecuteUbergraph_PM_Ser_ShoutChasePhrase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_Ser_ShoutChasePhrase.PM_Ser_ShoutChasePhrase_C.ExecuteUbergraph_PM_Ser_ShoutChasePhrase");

	UPM_Ser_ShoutChasePhrase_C_ExecuteUbergraph_PM_Ser_ShoutChasePhrase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
