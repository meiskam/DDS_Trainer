
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

// Function IBO_DrugTake.IBO_DrugTake_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIBO_DrugTake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IBO_DrugTake.IBO_DrugTake_C.UserConstructionScript");

	AIBO_DrugTake_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
