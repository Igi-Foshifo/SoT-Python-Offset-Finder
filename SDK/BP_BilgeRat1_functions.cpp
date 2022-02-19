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
//		Name   -> Function BP_BilgeRat1.BP_BilgeRat1_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_BilgeRat1_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BilgeRat1.BP_BilgeRat1_C.UserConstructionScript");

	ABP_BilgeRat1_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_BilgeRat1_C::AfterRead()
{
	AShopkeeper::AfterRead();

	READ_PTR_FULL(SolidHits, UCapsuleComponent);
	READ_PTR_FULL(tls_tankard_01_a, UStaticMeshComponent);
	READ_PTR_FULL(NPCDialog, UNPCDialogComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
}

void ABP_BilgeRat1_C::BeforeDelete()
{
	AShopkeeper::BeforeDelete();

	DELE_PTR_FULL(SolidHits);
	DELE_PTR_FULL(tls_tankard_01_a);
	DELE_PTR_FULL(NPCDialog);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif