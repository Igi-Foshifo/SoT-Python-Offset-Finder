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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_msc_banjo_smp_01_a_Wieldable.BP_msc_banjo_smp_01_a_Wieldable_C
// 0x0000 (FullSize[0x0870] - InheritedSize[0x0870])
class ABP_msc_banjo_smp_01_a_Wieldable_C : public ABP_Banjo_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_msc_banjo_smp_01_a_Wieldable.BP_msc_banjo_smp_01_a_Wieldable_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif