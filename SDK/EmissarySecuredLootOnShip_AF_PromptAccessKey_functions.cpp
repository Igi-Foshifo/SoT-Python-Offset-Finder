﻿// Name: SoT, Version: 2.2.1.1

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

void UEmissarySecuredLootOnShip_AF_PromptAccessKey_C::AfterRead()
{
	UPromptCounterAccessKey::AfterRead();

}

void UEmissarySecuredLootOnShip_AF_PromptAccessKey_C::BeforeDelete()
{
	UPromptCounterAccessKey::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
