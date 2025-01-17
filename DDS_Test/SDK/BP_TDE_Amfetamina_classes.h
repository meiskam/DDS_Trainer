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

// BlueprintGeneratedClass BP_TDE_Amfetamina.BP_TDE_Amfetamina_C
// 0x0010 (0x04C0 - 0x04B0)
class ABP_TDE_Amfetamina_C : public ATDE_Amfetamina
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TDE_Amfetamina.BP_TDE_Amfetamina_C");
		return ptr;
	}


	void UserConstructionScript();
	void StartEffect();
	void EffectTick(float DeltaTime);
	void EndEffect();
	void ExecuteUbergraph_BP_TDE_Amfetamina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
