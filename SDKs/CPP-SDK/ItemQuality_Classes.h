// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ItemQualityInterface: public Interface
{
public:
};


// Size 0x40 (Full Size[0x108] - InheritedSize[0xc8]
class ItemQualityComponent: public ActorComponent
{
public:
	char                                                         pad0x8_2X9Z4[0x8];                                 // 0xc8(0x8)
	byte                                                         ItemQualityLevel;                                  // 0xd0(0x1)
	char                                                         pad0x7_YVEUA[0x7];                                 // 0xd1(0x7)
	TArray<struct CompanySpecificItemQualityLevels>              CompanySpecificItemQualityLevels;                  // 0xd8(0x10)
	TArray<struct CompanySpecificComplexItemQualityLevels>       CompanySpecificComplexItemQualityLevels;           // 0xe8(0x10)
	TArray<struct CompanySpecificComplexItemQualityLevelsHandin> CompanySpecificComplexItemQualityLevelsHandin;     // 0xf8(0x10)
};


}