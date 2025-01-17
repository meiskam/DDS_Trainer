
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

// Function shadyMessageWidget.shadyMessageWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   UserName                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 MsgString                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              userAvatar                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayerMessage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyMessageWidget_C::Setup(const struct FText& UserName, const struct FString& MsgString, class UTexture2D* userAvatar, bool PlayerMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyMessageWidget.shadyMessageWidget_C.Setup");

	UshadyMessageWidget_C_Setup_Params params;
	params.UserName = UserName;
	params.MsgString = MsgString;
	params.userAvatar = userAvatar;
	params.PlayerMessage = PlayerMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shadyMessageWidget.shadyMessageWidget_C.ExecuteUbergraph_shadyMessageWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UshadyMessageWidget_C::ExecuteUbergraph_shadyMessageWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shadyMessageWidget.shadyMessageWidget_C.ExecuteUbergraph_shadyMessageWidget");

	UshadyMessageWidget_C_ExecuteUbergraph_shadyMessageWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
