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

// BlueprintGeneratedClass BP_WaterVolume_WSP_Ext1.BP_WaterVolume_WSP_Ext1_C
// 0x0000 (FullSize[0x0484] - InheritedSize[0x0484])
class ABP_WaterVolume_WSP_Ext1_C : public ABP_WaterVolume_Optimized_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaterVolume_WSP_Ext1.BP_WaterVolume_WSP_Ext1_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif