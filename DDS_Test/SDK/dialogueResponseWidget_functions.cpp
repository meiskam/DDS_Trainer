
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

// Function dialogueResponseWidget.dialogueResponseWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   DialogueText                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            responseID                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UdialogueWidget_C*       ParentRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FdialogueResponseData   responseData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UdialogueResponseWidget_C::Setup(const struct FText& DialogueText, int responseID, class UdialogueWidget_C* ParentRef, const struct FdialogueResponseData& responseData)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueResponseWidget.dialogueResponseWidget_C.Setup");

	UdialogueResponseWidget_C_Setup_Params params;
	params.DialogueText = DialogueText;
	params.responseID = responseID;
	params.ParentRef = ParentRef;
	params.responseData = responseData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueResponseWidget.dialogueResponseWidget_C.BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UdialogueResponseWidget_C::BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueResponseWidget.dialogueResponseWidget_C.BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UdialogueResponseWidget_C_BndEvt__btnResponse_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dialogueResponseWidget.dialogueResponseWidget_C.ExecuteUbergraph_dialogueResponseWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UdialogueResponseWidget_C::ExecuteUbergraph_dialogueResponseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dialogueResponseWidget.dialogueResponseWidget_C.ExecuteUbergraph_dialogueResponseWidget");

	UdialogueResponseWidget_C_ExecuteUbergraph_dialogueResponseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
