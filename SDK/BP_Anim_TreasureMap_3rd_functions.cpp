﻿// Name: SoT, Version: 2.4.0

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

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.OnUseStarted
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FWieldableItemActionVisuals                 ActionVisuals                                              (ConstParm, Parm, OutParm, ReferenceParm)
void UBP_Anim_TreasureMap_3rd_C::OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.OnUseStarted");

	UBP_Anim_TreasureMap_3rd_C_OnUseStarted_Params params {};
	params.InputID = InputID;
	params.ActionVisuals = ActionVisuals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.OnUseStopped
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_TreasureMap_3rd_C::OnUseStopped(class UClass* InputID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.OnUseStopped");

	UBP_Anim_TreasureMap_3rd_C_OnUseStopped_Params params {};
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.ExecuteUbergraph_BP_Anim_TreasureMap_3rd
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_TreasureMap_3rd_C::ExecuteUbergraph_BP_Anim_TreasureMap_3rd(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Anim_TreasureMap_3rd.BP_Anim_TreasureMap_3rd_C.ExecuteUbergraph_BP_Anim_TreasureMap_3rd");

	UBP_Anim_TreasureMap_3rd_C_ExecuteUbergraph_BP_Anim_TreasureMap_3rd_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_TreasureMap_3rd_C::AfterRead()
{
	UWieldableItemAnimationInstance::AfterRead();

}

void UBP_Anim_TreasureMap_3rd_C::BeforeDelete()
{
	UWieldableItemAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif