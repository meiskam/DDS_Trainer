
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

// Function appartmentListItem.appartmentListItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UappartmentListItem_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentListItem.appartmentListItem_C.OnMouseButtonDown");

	UappartmentListItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function appartmentListItem.appartmentListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UappartmentListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentListItem.appartmentListItem_C.Construct");

	UappartmentListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentListItem.appartmentListItem_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Address                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Meterage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UEquipmentShopInterfaceWidget_C* ParentRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentListItem_C::Setup(const struct FText& Name, const struct FText& Address, float Meterage, class UTexture2D* Image, int Index, class UEquipmentShopInterfaceWidget_C* ParentRef, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentListItem.appartmentListItem_C.Setup");

	UappartmentListItem_C_Setup_Params params;
	params.Name = Name;
	params.Address = Address;
	params.Meterage = Meterage;
	params.Image = Image;
	params.Index = Index;
	params.ParentRef = ParentRef;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function appartmentListItem.appartmentListItem_C.ExecuteUbergraph_appartmentListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UappartmentListItem_C::ExecuteUbergraph_appartmentListItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function appartmentListItem.appartmentListItem_C.ExecuteUbergraph_appartmentListItem");

	UappartmentListItem_C_ExecuteUbergraph_appartmentListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
