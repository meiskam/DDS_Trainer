#pragma once

// Name: , Version: 1.1.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass sampleClientSetGoHome.sampleClientSetGoHome_C
// 0x0008 (0x00A8 - 0x00A0)
class UsampleClientSetGoHome_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass sampleClientSetGoHome.sampleClientSetGoHome_C");
		return ptr;
	}


	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_sampleClientSetGoHome(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
