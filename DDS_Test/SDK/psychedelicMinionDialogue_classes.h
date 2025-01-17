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

// BlueprintGeneratedClass psychedelicMinionDialogue.psychedelicMinionDialogue_C
// 0x022E (0x05C0 - 0x0392)
class ApsychedelicMinionDialogue_C : public AdialogueInstance_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0392(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0398(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FdialogueData>                       retrieveEnvelopeLines;                                    // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               allowBypass;                                              // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B1(0x0007) MISSED OFFSET
	struct FdialogueData                               bypassDialOption;                                         // 0x03B8(0x0100) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FdialogueData                               noBypassDialOption;                                       // 0x04B8(0x0100) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ApsychedelicGangManager_C*                   gangManRef;                                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass psychedelicMinionDialogue.psychedelicMinionDialogue_C");
		return ptr;
	}


	void checkPlayerForDocuments(bool* hasDocuments);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void firstChatEnded();
	void configureDialogue();
	void takeEnvelope();
	void startPoliceMission();
	void policeStationDone();
	void johnTask();
	void nextEnvelopeMission();
	void missionTestingBypass();
	void checkDestroy();
	void ExecuteUbergraph_psychedelicMinionDialogue(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
