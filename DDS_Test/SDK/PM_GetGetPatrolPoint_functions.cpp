
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

// Function PM_GetGetPatrolPoint.PM_GetGetPatrolPoint_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_GetGetPatrolPoint_C::ReceiveExecute(class AActor* OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_GetGetPatrolPoint.PM_GetGetPatrolPoint_C.ReceiveExecute");

	UPM_GetGetPatrolPoint_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PM_GetGetPatrolPoint.PM_GetGetPatrolPoint_C.ExecuteUbergraph_PM_GetGetPatrolPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPM_GetGetPatrolPoint_C::ExecuteUbergraph_PM_GetGetPatrolPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PM_GetGetPatrolPoint.PM_GetGetPatrolPoint_C.ExecuteUbergraph_PM_GetGetPatrolPoint");

	UPM_GetGetPatrolPoint_C_ExecuteUbergraph_PM_GetGetPatrolPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
