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

// BlueprintGeneratedClass labDryerBase.labDryerBase_C
// 0x000C (0x07DC - 0x07D0)
class AlabDryerBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              maxCapOverride;                                           // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass labDryerBase.labDryerBase_C");
		return ptr;
	}


	void calcProperties(float inParam, float* OutParam);
	void makeFinalDrugForm(TEnumAsByte<EdrugForm> In, TEnumAsByte<EdrugForm>* OutDried);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void addSubstance();
	void tryAddSubstance();
	void workFinished();
	void startDrying();
	void ExecuteUbergraph_labDryerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
