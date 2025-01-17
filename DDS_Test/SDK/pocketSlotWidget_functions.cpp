
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

// Function pocketSlotWidget.pocketSlotWidget_C.Get_TextBlock_1_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UpocketSlotWidget_C::Get_TextBlock_1_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.Get_TextBlock_1_Visibility_1");

	UpocketSlotWidget_C_Get_TextBlock_1_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pocketSlotWidget.pocketSlotWidget_C.CanDropItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutSize                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UpocketSlotWidget_C::CanDropItem(class UObject* Object, float* OutSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.CanDropItem");

	UpocketSlotWidget_C_CanDropItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSize != nullptr)
		*OutSize = params.OutSize;

	return params.ReturnValue;
}


// Function pocketSlotWidget.pocketSlotWidget_C.checkDataSame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           CanDrop                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UpocketSlotWidget_C::checkDataSame(const struct FinventoryItemStruct& Data, bool* CanDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.checkDataSame");

	UpocketSlotWidget_C_checkDataSame_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDrop != nullptr)
		*CanDrop = params.CanDrop;
}


// Function pocketSlotWidget.pocketSlotWidget_C.showQuantityDialogue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quan                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UinventoryItemWidget_C*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UpocketSlotWidget_C::showQuantityDialogue(int Quan, class UinventoryItemWidget_C* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.showQuantityDialogue");

	UpocketSlotWidget_C_showQuantityDialogue_Params params;
	params.Quan = Quan;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pocketSlotWidget.pocketSlotWidget_C.processDropOperation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpocketSlotWidget_C::processDropOperation(int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.processDropOperation");

	UpocketSlotWidget_C_processDropOperation_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pocketSlotWidget.pocketSlotWidget_C.checkSource
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CanDrop                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UpocketSlotWidget_C::checkSource(class UObject* Object, const struct FString& Tag, bool* CanDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.checkSource");

	UpocketSlotWidget_C_checkSource_Params params;
	params.Object = Object;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanDrop != nullptr)
		*CanDrop = params.CanDrop;
}


// Function pocketSlotWidget.pocketSlotWidget_C.Get_itemIcon_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UpocketSlotWidget_C::Get_itemIcon_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.Get_itemIcon_ToolTipWidget_1");

	UpocketSlotWidget_C_Get_itemIcon_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pocketSlotWidget.pocketSlotWidget_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UpocketSlotWidget_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.OnDragDetected");

	UpocketSlotWidget_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function pocketSlotWidget.pocketSlotWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UpocketSlotWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.OnMouseButtonDown");

	UpocketSlotWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pocketSlotWidget.pocketSlotWidget_C.clearSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UpocketSlotWidget_C::clearSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.clearSlot");

	UpocketSlotWidget_C_clearSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pocketSlotWidget.pocketSlotWidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UpocketSlotWidget_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.OnDrop");

	UpocketSlotWidget_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function pocketSlotWidget.pocketSlotWidget_C.setSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FinventoryItemStruct    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromVendor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CustomTagName                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMixProportionsStruct   MixProportions                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UpocketSlotWidget_C::setSlot(const struct FinventoryItemStruct& Data, const struct FName& ItemID, int Index, int Quantity, int Amount, bool FromVendor, const struct FText& CustomTagName, const struct FMixProportionsStruct& MixProportions)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.setSlot");

	UpocketSlotWidget_C_setSlot_Params params;
	params.Data = Data;
	params.ItemID = ItemID;
	params.Index = Index;
	params.Quantity = Quantity;
	params.Amount = Amount;
	params.FromVendor = FromVendor;
	params.CustomTagName = CustomTagName;
	params.MixProportions = MixProportions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pocketSlotWidget.pocketSlotWidget_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpocketSlotWidget_C::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.OnDragLeave");

	UpocketSlotWidget_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pocketSlotWidget.pocketSlotWidget_C.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*      Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpocketSlotWidget_C::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.OnDragEnter");

	UpocketSlotWidget_C_OnDragEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pocketSlotWidget.pocketSlotWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UpocketSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.Construct");

	UpocketSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function pocketSlotWidget.pocketSlotWidget_C.ExecuteUbergraph_pocketSlotWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UpocketSlotWidget_C::ExecuteUbergraph_pocketSlotWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function pocketSlotWidget.pocketSlotWidget_C.ExecuteUbergraph_pocketSlotWidget");

	UpocketSlotWidget_C_ExecuteUbergraph_pocketSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
