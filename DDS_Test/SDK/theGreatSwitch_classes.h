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

// BlueprintGeneratedClass theGreatSwitch.theGreatSwitch_C
// 0x0021 (0x0449 - 0x0428)
class AtheGreatSwitch_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              anim_Y_B153AA31418F579C698A22B935CCEC4E;                  // 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    anim__Direction_B153AA31418F579C698A22B935CCEC4E;         // 0x043C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Anim;                                                     // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               On;                                                       // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass theGreatSwitch.theGreatSwitch_C");
		return ptr;
	}


	void UserConstructionScript();
	void anim__FinishedFunc();
	void anim__UpdateFunc();
	void SwitchButton();
	void ExecuteUbergraph_theGreatSwitch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
