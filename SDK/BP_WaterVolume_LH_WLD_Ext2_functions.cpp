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
//		Name   -> Function BP_WaterVolume_LH_WLD_Ext2.BP_WaterVolume_LH_WLD_Ext2_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WaterVolume_LH_WLD_Ext2_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterVolume_LH_WLD_Ext2.BP_WaterVolume_LH_WLD_Ext2_C.UserConstructionScript");

	ABP_WaterVolume_LH_WLD_Ext2_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_WaterVolume_LH_WLD_Ext2_C::AfterRead()
{
	ABP_WaterVolume_C::AfterRead();

}

void ABP_WaterVolume_LH_WLD_Ext2_C::BeforeDelete()
{
	ABP_WaterVolume_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif