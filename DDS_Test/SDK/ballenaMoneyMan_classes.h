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

// BlueprintGeneratedClass ballenaMoneyMan.ballenaMoneyMan_C
// 0x0015 (0x0AE9 - 0x0AD4)
class AballenaMoneyMan_C : public AbaseNPC_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AD4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AsuitcaseBP_C*                               moneySpawn;                                               // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               waitingForPlayer;                                         // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ballenaMoneyMan.ballenaMoneyMan_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void tryGoingHome();
	void ExecuteUbergraph_ballenaMoneyMan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
