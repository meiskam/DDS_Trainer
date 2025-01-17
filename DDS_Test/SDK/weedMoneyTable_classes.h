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

// BlueprintGeneratedClass weedMoneyTable.weedMoneyTable_C
// 0x0028 (0x0450 - 0x0428)
class AweedMoneyTable_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AweedMoneySafe_C*                            safeRef;                                                  // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ApsychedelicGangManager_C*                   gangManager;                                              // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               tableOccupied;                                            // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class AplayerCharacterBP_C*                        PlayerRef;                                                // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weedMoneyTable.weedMoneyTable_C");
		return ptr;
	}


	void depositeSafeMoney(int Quantity);
	void parseInventory(TArray<struct FinventoryItemStruct>* backpack, TArray<int>* backpackQuan, TArray<struct FinventoryItemStruct>* Pockets, TArray<int>* pocketQuan, int* quantityFound);
	void UserConstructionScript();
	void tableActivated(class AplayerCharacterBP_C* Player);
	void ExecuteUbergraph_weedMoneyTable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
