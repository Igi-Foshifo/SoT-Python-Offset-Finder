﻿// Name: SoT, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_FishingFish_Battlegill_05_Colour_05_Bittersweet.BP_FishingFish_Battlegill_05_Colour_05_Bittersweet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FishingFish_Battlegill_05_Colour_05_Bittersweet_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FishingFish_Battlegill_05_Colour_05_Bittersweet.BP_FishingFish_Battlegill_05_Colour_05_Bittersweet_C.UserConstructionScript");

	ABP_FishingFish_Battlegill_05_Colour_05_Bittersweet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FishingFish_Battlegill_05_Colour_05_Bittersweet_C::AfterRead()
{
	ABP_FishingFish_Battlegill_05_C::AfterRead();

}

void ABP_FishingFish_Battlegill_05_Colour_05_Bittersweet_C::BeforeDelete()
{
	ABP_FishingFish_Battlegill_05_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
