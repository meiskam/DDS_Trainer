#pragma once

// Name: DDS, Version: 1.0.8

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass weedDialogueFirstDone.weedDialogueFirstDone_C
// 0x0018 (0x0340 - 0x0328)
class AweedDialogueFirstDone_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weedDialogueFirstDone.weedDialogueFirstDone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void retryDialSet();
	void ExecuteUbergraph_weedDialogueFirstDone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
