#pragma once

#include "pch.h"

// Name: DDS, Version: 1.1.0.25

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function newTaskWidget.newTaskWidget_C.getStatusNam
struct UnewTaskWidget_C_getStatusNam_Params
{
	TEnumAsByte<EtaskStatuses>                         Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       StatusNam;                                                // (Parm, OutParm)
};

// Function newTaskWidget.newTaskWidget_C.Construct
struct UnewTaskWidget_C_Construct_Params
{
};

// Function newTaskWidget.newTaskWidget_C.Setup
struct UnewTaskWidget_C_Setup_Params
{
	struct FText                                       heading;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Desc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EtaskStatuses>                         TaskStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function newTaskWidget.newTaskWidget_C.ExecuteUbergraph_newTaskWidget
struct UnewTaskWidget_C_ExecuteUbergraph_newTaskWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
