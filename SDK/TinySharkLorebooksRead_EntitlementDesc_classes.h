﻿#pragma once

// Name: SoT, Version: 2.2.1.1


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

// BlueprintGeneratedClass TinySharkLorebooksRead_EntitlementDesc.TinySharkLorebooksRead_EntitlementDesc_C
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UTinySharkLorebooksRead_EntitlementDesc_C : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TinySharkLorebooksRead_EntitlementDesc.TinySharkLorebooksRead_EntitlementDesc_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
