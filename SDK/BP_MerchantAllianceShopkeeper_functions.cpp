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
//		Name   -> Function BP_MerchantAllianceShopkeeper.BP_MerchantAllianceShopkeeper_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MerchantAllianceShopkeeper_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MerchantAllianceShopkeeper.BP_MerchantAllianceShopkeeper_C.UserConstructionScript");

	ABP_MerchantAllianceShopkeeper_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MerchantAllianceShopkeeper_C::AfterRead()
{
	AShopkeeperInteractionProxy::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_MerchantAllianceShopkeeper_C::BeforeDelete()
{
	AShopkeeperInteractionProxy::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif