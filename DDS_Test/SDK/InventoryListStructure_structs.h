#pragma once

// Name: DDS, Version: 1.1.0.25

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct InventoryListStructure.InventoryListStructure
// 0x0091
struct FInventoryListStructure
{
	struct FName                                       ItemID_2_324B83ED437E8B40FE9C0C8E6B77F1EF;                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemQuantity_5_5FC98A504C1F1F7038442980024ECBD0;          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount_26_F0481C6644AA39BC24534C94A29D7450;           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       CustomTagName_8_56E12D1945183CB6DA2697B0F6423537;         // 0x0010(0x0018) (Edit, BlueprintVisible)
	int                                                PocketIndex_19_726B79DC427258996E799999DC88C63A;          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       LocalGuid_11_15F567AD47611473602F15A7A7DE1F5C;            // 0x002C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       HeldInGuid_14_F932307F422CBA047D25A9AD6A7F0AB2;           // 0x003C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FMixProportionsStruct                       MixProportions_16_D1FE595547104A1D9071A9807CFE11BE;       // 0x0050(0x0040) (Edit, BlueprintVisible)
	bool                                               FromVendor_23_056CA5AB4E56D7F67C10F2825EAB58AC;           // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
