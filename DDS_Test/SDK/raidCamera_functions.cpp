
#include "pch.h"

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function raidCamera.raidCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AraidCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function raidCamera.raidCamera_C.UserConstructionScript");

	AraidCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
