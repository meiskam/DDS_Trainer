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

// BlueprintGeneratedClass PM_CheckpointGuard.PM_CheckpointGuard_C
// 0x0057 (0x08C0 - 0x0869)
class APM_CheckpointGuard_C : public APolicemanBaseClass_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0869(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                checkPointID;                                             // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class AwallCheckpoint_C*                           checkpointRef;                                            // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               controlingPlayer;                                         // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0889(0x0003) MISSED OFFSET
	float                                              controlTimer;                                             // 0x088C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              controlTime;                                              // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              controlBreakDistance;                                     // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UpoliceSearchWidget_C*                       controlWidget;                                            // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               defLocationSet;                                           // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x08A1(0x0003) MISSED OFFSET
	struct FVector                                     defLocationVector;                                        // 0x08A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               suicide;                                                  // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class APoliceBlockadeArea_C*                       BlockadeRef;                                              // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PM_CheckpointGuard.PM_CheckpointGuard_C");
		return ptr;
	}


	void checkBackpackForIllegals(class AbackpackBase_C* backpack, bool* Found);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void checkTrespass();
	void BndEvt__overlapDetector_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ControlEnded();
	void breakControl();
	void EngageSuspect();
	void setSuicideTimer();
	void trySuicide();
	void overrideSearch();
	void ReceiveDestroyed();
	void ExecuteUbergraph_PM_CheckpointGuard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
