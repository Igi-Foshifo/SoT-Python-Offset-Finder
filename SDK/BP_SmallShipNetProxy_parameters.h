﻿#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Colour on All Materials
struct ABP_SmallShipNetProxy_C_Set_Colour_on_All_Materials_Params
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Value;                                                     // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Set Value on All Materials
struct ABP_SmallShipNetProxy_C_Set_Value_on_All_Materials_Params
{
	struct FName                                       Variable_Name;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Apply Bits to Lanterns
struct ABP_SmallShipNetProxy_C_Apply_Bits_to_Lanterns_Params
{
	int                                                bits;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.Create Dynamic Materials
struct ABP_SmallShipNetProxy_C_Create_Dynamic_Materials_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.UserConstructionScript
struct ABP_SmallShipNetProxy_C_UserConstructionScript_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ReceiveBeginPlay
struct ABP_SmallShipNetProxy_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnLanternStateChanged
struct ABP_SmallShipNetProxy_C_OnLanternStateChanged_Params
{
	int                                                LanternStateBits;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.OnEmissaryActiveStateChanged
struct ABP_SmallShipNetProxy_C_OnEmissaryActiveStateChanged_Params
{
	bool                                               InNewEmissaryActiveState;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_SmallShipNetProxy.BP_SmallShipNetProxy_C.ExecuteUbergraph_BP_SmallShipNetProxy
struct ABP_SmallShipNetProxy_C_ExecuteUbergraph_BP_SmallShipNetProxy_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif