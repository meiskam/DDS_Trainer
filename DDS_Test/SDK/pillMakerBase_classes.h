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

// BlueprintGeneratedClass pillMakerBase.pillMakerBase_C
// 0x0008 (0x07D8 - 0x07D0)
class ApillMakerBase_C : public AworkStationEquipmentBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass pillMakerBase.pillMakerBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void addSubstance();
	void tryAddSubstance();
	void makePills();
	void workFinished();
	void ExecuteUbergraph_pillMakerBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
