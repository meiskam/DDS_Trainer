
#include "pch.h"

// Name: DDS, Version: 1.1.0.25

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                SourceImage                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAppleVisionDetectFacesAsyncTaskBlueprintProxy* UAppleVisionDetectFacesAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForDetectFaces(class UTexture* SourceImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy.CreateProxyObjectForDetectFaces");

	UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Params params;
	params.SourceImage = SourceImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
