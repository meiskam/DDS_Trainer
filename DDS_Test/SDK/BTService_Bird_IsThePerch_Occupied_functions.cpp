
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

// Function BTService_Bird_IsThePerch_Occupied.BTService_Bird_IsThePerch_Occupied_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_Bird_IsThePerch_Occupied_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_Bird_IsThePerch_Occupied.BTService_Bird_IsThePerch_Occupied_C.ReceiveTickAI");

	UBTService_Bird_IsThePerch_Occupied_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_Bird_IsThePerch_Occupied.BTService_Bird_IsThePerch_Occupied_C.ExecuteUbergraph_BTService_Bird_IsThePerch_Occupied
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_Bird_IsThePerch_Occupied_C::ExecuteUbergraph_BTService_Bird_IsThePerch_Occupied(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_Bird_IsThePerch_Occupied.BTService_Bird_IsThePerch_Occupied_C.ExecuteUbergraph_BTService_Bird_IsThePerch_Occupied");

	UBTService_Bird_IsThePerch_Occupied_C_ExecuteUbergraph_BTService_Bird_IsThePerch_Occupied_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
