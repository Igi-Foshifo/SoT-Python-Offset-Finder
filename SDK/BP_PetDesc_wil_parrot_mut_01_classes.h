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

// BlueprintGeneratedClass BP_PetDesc_wil_parrot_mut_01.BP_PetDesc_wil_parrot_mut_01_C
// 0x0000 (FullSize[0x0110] - InheritedSize[0x0110])
class UBP_PetDesc_wil_parrot_mut_01_C : public UPetCustomizationDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_PetDesc_wil_parrot_mut_01.BP_PetDesc_wil_parrot_mut_01_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif