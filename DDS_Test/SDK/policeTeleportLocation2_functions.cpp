
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

// Function policeTeleportLocation2.policeTeleportLocation2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ApoliceTeleportLocation2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function policeTeleportLocation2.policeTeleportLocation2_C.UserConstructionScript");

	ApoliceTeleportLocation2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
