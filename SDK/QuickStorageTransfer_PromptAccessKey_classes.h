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

// BlueprintGeneratedClass QuickStorageTransfer_PromptAccessKey.QuickStorageTransfer_PromptAccessKey_C
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UQuickStorageTransfer_PromptAccessKey_C : public UPromptCounterAccessKey
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass QuickStorageTransfer_PromptAccessKey.QuickStorageTransfer_PromptAccessKey_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif