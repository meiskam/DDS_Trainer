
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

// Function newTaskWidget.newTaskWidget_C.getStatusNam
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EtaskStatuses>     Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   StatusNam                      (Parm, OutParm)

void UnewTaskWidget_C::getStatusNam(TEnumAsByte<EtaskStatuses> Status, struct FText* StatusNam)
{
	static auto fn = UObject::FindObject<UFunction>("Function newTaskWidget.newTaskWidget_C.getStatusNam");

	UnewTaskWidget_C_getStatusNam_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusNam != nullptr)
		*StatusNam = params.StatusNam;
}


// Function newTaskWidget.newTaskWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UnewTaskWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function newTaskWidget.newTaskWidget_C.Construct");

	UnewTaskWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function newTaskWidget.newTaskWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   heading                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Desc                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EtaskStatuses>     TaskStatus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UnewTaskWidget_C::Setup(const struct FText& heading, const struct FText& Desc, TEnumAsByte<EtaskStatuses> TaskStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function newTaskWidget.newTaskWidget_C.Setup");

	UnewTaskWidget_C_Setup_Params params;
	params.heading = heading;
	params.Desc = Desc;
	params.TaskStatus = TaskStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function newTaskWidget.newTaskWidget_C.ExecuteUbergraph_newTaskWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UnewTaskWidget_C::ExecuteUbergraph_newTaskWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function newTaskWidget.newTaskWidget_C.ExecuteUbergraph_newTaskWidget");

	UnewTaskWidget_C_ExecuteUbergraph_newTaskWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
