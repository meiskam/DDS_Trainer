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

// BlueprintGeneratedClass BP_AS_THCSativa.BP_AS_THCSativa_C
// 0x0008 (0x03F0 - 0x03E8)
class ABP_AS_THCSativa_C : public AAS_THCSativa
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AS_THCSativa.BP_AS_THCSativa_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
