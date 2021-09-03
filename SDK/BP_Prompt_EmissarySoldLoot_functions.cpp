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

// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.OnEmissarySoldLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySoldLootNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissarySoldLoot_C::OnEmissarySoldLoot(const struct FEmissarySoldLootNetworkEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.OnEmissarySoldLoot");

	UBP_Prompt_EmissarySoldLoot_C_OnEmissarySoldLoot_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.EmissarySoldLoot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEmissarySoldLootNetworkEvent NewParam                       (Parm)
void UBP_Prompt_EmissarySoldLoot_C::EmissarySoldLoot(const struct FEmissarySoldLootNetworkEvent& NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.EmissarySoldLoot");

	UBP_Prompt_EmissarySoldLoot_C_EmissarySoldLoot_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.Evaluate
// (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_EmissarySoldLoot_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.Evaluate");

	UBP_Prompt_EmissarySoldLoot_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.RegisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissarySoldLoot_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_EmissarySoldLoot_C_RegisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.UnregisterOtherEvents_Implementable
// (Event, Public, BlueprintEvent)
void UBP_Prompt_EmissarySoldLoot_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_EmissarySoldLoot_C_UnregisterOtherEvents_Implementable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.ExecuteUbergraph_BP_Prompt_EmissarySoldLoot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_EmissarySoldLoot_C::ExecuteUbergraph_BP_Prompt_EmissarySoldLoot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_EmissarySoldLoot.BP_Prompt_EmissarySoldLoot_C.ExecuteUbergraph_BP_Prompt_EmissarySoldLoot");

	UBP_Prompt_EmissarySoldLoot_C_ExecuteUbergraph_BP_Prompt_EmissarySoldLoot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_EmissarySoldLoot_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

	READ_PTR_FULL(PromptAccessKey, UClass);
}

void UBP_Prompt_EmissarySoldLoot_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

	DELE_PTR_FULL(PromptAccessKey);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
