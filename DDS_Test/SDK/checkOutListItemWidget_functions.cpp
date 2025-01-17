
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

// Function checkOutListItemWidget.checkOutListItemWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Price                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEquipmentShopInterfaceWidget_C* ParentRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UcheckOutListItemWidget_C::Setup(const struct FName& NewParam, float Price, int Quantity, int Index, class UEquipmentShopInterfaceWidget_C* ParentRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.Setup");

	UcheckOutListItemWidget_C_Setup_Params params;
	params.NewParam = NewParam;
	params.Price = Price;
	params.Quantity = Quantity;
	params.Index = Index;
	params.ParentRef = ParentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UcheckOutListItemWidget_C::BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UcheckOutListItemWidget_C_BndEvt__btnQuanSub_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UcheckOutListItemWidget_C::BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UcheckOutListItemWidget_C_BndEvt__btnQuanAdd_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UcheckOutListItemWidget_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UcheckOutListItemWidget_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function checkOutListItemWidget.checkOutListItemWidget_C.ExecuteUbergraph_checkOutListItemWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UcheckOutListItemWidget_C::ExecuteUbergraph_checkOutListItemWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function checkOutListItemWidget.checkOutListItemWidget_C.ExecuteUbergraph_checkOutListItemWidget");

	UcheckOutListItemWidget_C_ExecuteUbergraph_checkOutListItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
