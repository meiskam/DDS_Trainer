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

// BlueprintGeneratedClass workStationMixerBase.workStationMixerBase_C
// 0x006C (0x083C - 0x07D0)
class AworkStationMixerBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FdrugData>                           drugsAdded;                                               // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FMixProportionsStruct>               drugMixesAdded;                                           // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      drugsAddedAmount;                                         // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       endMixName;                                               // 0x0808(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       endMixDescription;                                        // 0x0820(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              maxCapOverride;                                           // 0x0838(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass workStationMixerBase.workStationMixerBase_C");
		return ptr;
	}


	void ExpandMixerRama();
	void calcByStrengthening(float Value, float differenceMultiplier, float Strengthening, float* Result);
	void calcPrecision(float paramIn, float* paramOut);
	void processMix(struct FdrugData* mixProduct, float* mixProductAmount, struct FMixProportionsStruct* OutMixProportions);
	void showAddPopup(class AinteractiveBaseObject_C* SubstanceRef);
	void UserConstructionScript();
	void applyMix();
	void workFinished();
	void addSubstance();
	void displayMixDetails();
	void ReceiveBeginPlay();
	void displayApllyMix();
	void tryAddSubstance();
	void SubclassRamaLoad();
	void ExecuteUbergraph_workStationMixerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
