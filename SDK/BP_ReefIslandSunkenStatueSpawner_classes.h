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

// BlueprintGeneratedClass BP_ReefIslandSunkenStatueSpawner.BP_ReefIslandSunkenStatueSpawner_C
// 0x0000 (FullSize[0x0590] - InheritedSize[0x0590])
class UBP_ReefIslandSunkenStatueSpawner_C : public USalvageItemSpawnComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReefIslandSunkenStatueSpawner.BP_ReefIslandSunkenStatueSpawner_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
