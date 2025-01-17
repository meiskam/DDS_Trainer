#pragma once

// Name: DDS, Version: 1.1.0.25

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass workStationEquipmentBase.workStationEquipmentBase_C
// 0x03A8 (0x07D0 - 0x0428)
class AworkStationEquipmentBase_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            progressWidget;                                           // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            selectionWidget;                                          // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               baseGizmo;                                                // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FappartmentEquipment                        EqData_1;                                                 // 0x0450(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               isGizmo_1;                                                // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	struct FVector2D                                   baseSizing;                                               // 0x04A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canFit;                                                   // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	TArray<struct FVector>                             lineTracePoints;                                          // 0x04B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               fromHovered;                                              // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isWorking;                                                // 0x04C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isOccupied;                                               // 0x04C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isSelected;                                               // 0x04C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               productionFinished;                                       // 0x04C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutomatic;                                              // 0x04C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isProcessingTool;                                         // 0x04C6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x04C7(0x0001) MISSED OFFSET
	TArray<struct FText>                               holdOptionsNames;                                         // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FString>                             holdOptionsStringActions;                                 // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              curCapacity;                                              // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxCapacity;                                              // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              countdownSeconds;                                         // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              coundownTimeCalculated;                                   // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              baseWorkingTimeSeconds;                                   // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	struct FText                                       childNameStorage;                                         // 0x0500(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FdrugData                                   initialSubstanceData;                                     // 0x0518(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMixProportionsStruct                       InitialSubstanceMixProp;                                  // 0x05C8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FdrugData                                   finalProduct;                                             // 0x0608(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FMixProportionsStruct                       FinalProductMixProp;                                      // 0x06B8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              finalProductAmount;                                       // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              potentialLossPercentMinimum;                              // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              potentialLossPercentMaximum;                              // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              precissionPercentage;                                     // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FdrugData                                   memProduct;                                               // 0x0708(0x00B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       NewVar_0_1;                                               // 0x07B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass workStationEquipmentBase.workStationEquipmentBase_C");
		return ptr;
	}


	void RamaExpand();
	void GetHeldSubstanceID(bool finalProduct, struct FName* OutSubstanceID);
	void HandleRama();
	void packagePopup();
	void packageProduct();
	void rightClickOptions();
	void tryAddSubstance();
	void verifySubstanceSource(bool* Proceed, bool* NameDiffers, struct FdrugData* SourceData, struct FMixProportionsStruct* SourceMixProportions);
	void compareContent(const struct FdrugData& NewData, const struct FMixProportionsStruct& MixProportions, bool* TheSame, bool* NameMissmatch);
	void clearEquipment();
	void quantityChanged();
	void addSubstancePopup(class AinteractiveBaseObject_C* SubstanceRef);
	void workFinished();
	void workCountdown(float Delta);
	void startWorking();
	void defaultHoldAction();
	void storeEquipment(bool SkipRender);
	void rearangeEquipment();
	void equipmentActivateReleaseButton();
	void subclassActivate();
	void equipmentActivation();
	void calcLineTracePoints();
	void checkCanFit(bool* canFit);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void initialSetup(const struct FappartmentEquipment& Data, bool Gizmo, bool fromHovered);
	void verifyCorrectNaming();
	void selectMe();
	void dumpContent();
	void BndEvt__RamaSave_K2Node_ComponentBoundEvent_0_RamaSaveFullyLoadedSignature__DelegateSignature(class URamaSaveComponent* RamaSaveComponent, const struct FString& LevelPackageName);
	void SubclassRamaLoad();
	void GizmoSet();
	void ExecuteUbergraph_workStationEquipmentBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
