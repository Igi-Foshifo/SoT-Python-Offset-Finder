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

// BlueprintGeneratedClass gmp_wrld_res_wood3_fruit1_01_a.gmp_wrld_res_wood3_fruit1_01_a_C
// 0x0020 (FullSize[0x0418] - InheritedSize[0x03F8])
class Agmp_wrld_res_wood3_fruit1_01_a_C : public ACluster
{
public:
	class UClusterStaticMeshComponent*                 ClusterStaticMeshWood1;                                    // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshWood3;                                    // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshWood2;                                    // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UClusterStaticMeshComponent*                 ClusterStaticMeshBanana;                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass gmp_wrld_res_wood3_fruit1_01_a.gmp_wrld_res_wood3_fruit1_01_a_C");
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
