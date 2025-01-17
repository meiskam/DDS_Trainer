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

// UserDefinedStruct NewItemStructure.NewItemStructure
// 0x0060
struct FNewItemStructure
{
	struct FText                                       Name_2_FF6B1B3640DC8500F30969AD1A856723;                  // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_4_35628C2940A2D525609C95B5117627A9;           // 0x0018(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon_7_9183F95946ADBF277F39248EA95CF966;                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Size_11_DA41073149E4068109A8AB8E696904F9;                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Weight_13_021ECC0A46EA3F14A02418AA4DB9743B;               // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass_16_F5DFA0B44AED17EA1ACCD6BAA11A44E6;           // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TEnumAsByte<EitemCategories>                       Category_20_4D582CF747C56D9FA5FEB3BB8E3352EF;             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanStack_23_F3E61B4F4566F31AF4248FAAF5A8CA86;             // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                StackMaxSize_26_8F7C50134A1C333C95AC528E9B2D8226;         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DefaultAmount_28_92DC36D146C4C881302ADB822BE4DA16;        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxAmount_30_A9F0786545866BB36EC0868C59DA7E92;            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InventoryWidth_37_5E59630A4044F97CFED95FA62B62189A;       // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InventoryHeight_38_5A2E3AD34332DF72F2131484DBF09FB0;      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
