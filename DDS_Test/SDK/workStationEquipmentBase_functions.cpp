
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

// Function workStationEquipmentBase.workStationEquipmentBase_C.RamaExpand
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::RamaExpand()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.RamaExpand");

	AworkStationEquipmentBase_C_RamaExpand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.GetHeldSubstanceID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           finalProduct                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   OutSubstanceID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::GetHeldSubstanceID(bool finalProduct, struct FName* OutSubstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.GetHeldSubstanceID");

	AworkStationEquipmentBase_C_GetHeldSubstanceID_Params params;
	params.finalProduct = finalProduct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSubstanceID != nullptr)
		*OutSubstanceID = params.OutSubstanceID;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.HandleRama
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::HandleRama()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.HandleRama");

	AworkStationEquipmentBase_C_HandleRama_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.packagePopup
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::packagePopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.packagePopup");

	AworkStationEquipmentBase_C_packagePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.packageProduct
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::packageProduct()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.packageProduct");

	AworkStationEquipmentBase_C_packageProduct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.rightClickOptions
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::rightClickOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.rightClickOptions");

	AworkStationEquipmentBase_C_rightClickOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.tryAddSubstance
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::tryAddSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.tryAddSubstance");

	AworkStationEquipmentBase_C_tryAddSubstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.verifySubstanceSource
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Proceed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NameDiffers                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FdrugData               SourceData                     (Parm, OutParm)
// struct FMixProportionsStruct   SourceMixProportions           (Parm, OutParm)

void AworkStationEquipmentBase_C::verifySubstanceSource(bool* Proceed, bool* NameDiffers, struct FdrugData* SourceData, struct FMixProportionsStruct* SourceMixProportions)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.verifySubstanceSource");

	AworkStationEquipmentBase_C_verifySubstanceSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Proceed != nullptr)
		*Proceed = params.Proceed;
	if (NameDiffers != nullptr)
		*NameDiffers = params.NameDiffers;
	if (SourceData != nullptr)
		*SourceData = params.SourceData;
	if (SourceMixProportions != nullptr)
		*SourceMixProportions = params.SourceMixProportions;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.compareContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FdrugData               NewData                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FMixProportionsStruct   MixProportions                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           TheSame                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           NameMissmatch                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::compareContent(const struct FdrugData& NewData, const struct FMixProportionsStruct& MixProportions, bool* TheSame, bool* NameMissmatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.compareContent");

	AworkStationEquipmentBase_C_compareContent_Params params;
	params.NewData = NewData;
	params.MixProportions = MixProportions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheSame != nullptr)
		*TheSame = params.TheSame;
	if (NameMissmatch != nullptr)
		*NameMissmatch = params.NameMissmatch;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.clearEquipment
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::clearEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.clearEquipment");

	AworkStationEquipmentBase_C_clearEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.quantityChanged
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::quantityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.quantityChanged");

	AworkStationEquipmentBase_C_quantityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.addSubstancePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AinteractiveBaseObject_C* SubstanceRef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::addSubstancePopup(class AinteractiveBaseObject_C* SubstanceRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.addSubstancePopup");

	AworkStationEquipmentBase_C_addSubstancePopup_Params params;
	params.SubstanceRef = SubstanceRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.workFinished
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::workFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.workFinished");

	AworkStationEquipmentBase_C_workFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.workCountdown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::workCountdown(float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.workCountdown");

	AworkStationEquipmentBase_C_workCountdown_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.startWorking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::startWorking()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.startWorking");

	AworkStationEquipmentBase_C_startWorking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.defaultHoldAction
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::defaultHoldAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.defaultHoldAction");

	AworkStationEquipmentBase_C_defaultHoldAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.storeEquipment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SkipRender                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::storeEquipment(bool SkipRender)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.storeEquipment");

	AworkStationEquipmentBase_C_storeEquipment_Params params;
	params.SkipRender = SkipRender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.rearangeEquipment
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::rearangeEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.rearangeEquipment");

	AworkStationEquipmentBase_C_rearangeEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivateReleaseButton
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::equipmentActivateReleaseButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivateReleaseButton");

	AworkStationEquipmentBase_C_equipmentActivateReleaseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.subclassActivate
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::subclassActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.subclassActivate");

	AworkStationEquipmentBase_C_subclassActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::equipmentActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.equipmentActivation");

	AworkStationEquipmentBase_C_equipmentActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.calcLineTracePoints
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::calcLineTracePoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.calcLineTracePoints");

	AworkStationEquipmentBase_C_calcLineTracePoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.checkCanFit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           canFit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::checkCanFit(bool* canFit)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.checkCanFit");

	AworkStationEquipmentBase_C_checkCanFit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canFit != nullptr)
		*canFit = params.canFit;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.UserConstructionScript");

	AworkStationEquipmentBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AworkStationEquipmentBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveBeginPlay");

	AworkStationEquipmentBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.ReceiveTick");

	AworkStationEquipmentBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.initialSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FappartmentEquipment    Data                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Gizmo                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           fromHovered                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::initialSetup(const struct FappartmentEquipment& Data, bool Gizmo, bool fromHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.initialSetup");

	AworkStationEquipmentBase_C_initialSetup_Params params;
	params.Data = Data;
	params.Gizmo = Gizmo;
	params.fromHovered = fromHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.verifyCorrectNaming
// (Public, BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::verifyCorrectNaming()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.verifyCorrectNaming");

	AworkStationEquipmentBase_C_verifyCorrectNaming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.selectMe
// (BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::selectMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.selectMe");

	AworkStationEquipmentBase_C_selectMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.dumpContent
// (BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::dumpContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.dumpContent");

	AworkStationEquipmentBase_C_dumpContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URamaSaveComponent*      RamaSaveComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 LevelPackageName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AworkStationEquipmentBase_C::BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature");

	AworkStationEquipmentBase_C_BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature_Params params;
	params.RamaSaveComponent = RamaSaveComponent;
	params.LevelPackageName = LevelPackageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.SubclassRamaLoad
// (BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::SubclassRamaLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.SubclassRamaLoad");

	AworkStationEquipmentBase_C_SubclassRamaLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.GizmoSet
// (BlueprintCallable, BlueprintEvent)

void AworkStationEquipmentBase_C::GizmoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.GizmoSet");

	AworkStationEquipmentBase_C_GizmoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function workStationEquipmentBase.workStationEquipmentBase_C.ExecuteUbergraph_workStationEquipmentBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AworkStationEquipmentBase_C::ExecuteUbergraph_workStationEquipmentBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function workStationEquipmentBase.workStationEquipmentBase_C.ExecuteUbergraph_workStationEquipmentBase");

	AworkStationEquipmentBase_C_ExecuteUbergraph_workStationEquipmentBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
