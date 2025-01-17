
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

// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.RemoveMe
// (BlueprintCallable, BlueprintEvent)

void UnarratorSubtitlesWidget_C::RemoveMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.RemoveMe");

	UnarratorSubtitlesWidget_C_RemoveMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UnarratorSubtitlesWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Tick");

	UnarratorSubtitlesWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Monologue                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UnarratorSubtitlesWidget_C::Setup(const struct FText& Monologue, float Duration, const struct FText& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Setup");

	UnarratorSubtitlesWidget_C_Setup_Params params;
	params.Monologue = Monologue;
	params.Duration = Duration;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UnarratorSubtitlesWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.Construct");

	UnarratorSubtitlesWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.ExecuteUbergraph_narratorSubtitlesWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UnarratorSubtitlesWidget_C::ExecuteUbergraph_narratorSubtitlesWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function narratorSubtitlesWidget.narratorSubtitlesWidget_C.ExecuteUbergraph_narratorSubtitlesWidget");

	UnarratorSubtitlesWidget_C_ExecuteUbergraph_narratorSubtitlesWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
