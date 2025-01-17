
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

// Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Tunnel_Lamp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.UserConstructionScript");

	ABP_Tunnel_Lamp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.blinkingAnim__FinishedFunc
// (BlueprintEvent)

void ABP_Tunnel_Lamp_C::blinkingAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.blinkingAnim__FinishedFunc");

	ABP_Tunnel_Lamp_C_blinkingAnim__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.blinkingAnim__UpdateFunc
// (BlueprintEvent)

void ABP_Tunnel_Lamp_C::blinkingAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.blinkingAnim__UpdateFunc");

	ABP_Tunnel_Lamp_C_blinkingAnim__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Tunnel_Lamp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.ReceiveBeginPlay");

	ABP_Tunnel_Lamp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.ExecuteUbergraph_BP_Tunnel_Lamp
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Tunnel_Lamp_C::ExecuteUbergraph_BP_Tunnel_Lamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Tunnel_Lamp.BP_Tunnel_Lamp_C.ExecuteUbergraph_BP_Tunnel_Lamp");

	ABP_Tunnel_Lamp_C_ExecuteUbergraph_BP_Tunnel_Lamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
