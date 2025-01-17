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

// BlueprintGeneratedClass hodeoutTunnelEntrance.hodeoutTunnelEntrance_C
// 0x0014 (0x043C - 0x0428)
class AhodeoutTunnelEntrance_C : public AinteractiveBaseObject_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URamaSaveComponent*                          RamaSave;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                EntranceIndex;                                            // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass hodeoutTunnelEntrance.hodeoutTunnelEntrance_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EntranceInteracted();
	void ExecuteUbergraph_hodeoutTunnelEntrance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
