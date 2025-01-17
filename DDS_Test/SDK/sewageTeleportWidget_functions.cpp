
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

// Function sewageTeleportWidget.sewageTeleportWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UsewageTeleportWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageTeleportWidget.sewageTeleportWidget_C.Construct");

	UsewageTeleportWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewageTeleportWidget.sewageTeleportWidget_C.ConfirmTeleport
// (BlueprintCallable, BlueprintEvent)

void UsewageTeleportWidget_C::ConfirmTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageTeleportWidget.sewageTeleportWidget_C.ConfirmTeleport");

	UsewageTeleportWidget_C_ConfirmTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function sewageTeleportWidget.sewageTeleportWidget_C.ExecuteUbergraph_sewageTeleportWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UsewageTeleportWidget_C::ExecuteUbergraph_sewageTeleportWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function sewageTeleportWidget.sewageTeleportWidget_C.ExecuteUbergraph_sewageTeleportWidget");

	UsewageTeleportWidget_C_ExecuteUbergraph_sewageTeleportWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
