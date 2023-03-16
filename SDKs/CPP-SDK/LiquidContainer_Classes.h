// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LiquidContainerInterface: public Interface
{
public:
};


// Size 0x60 (Full Size[0x128] - InheritedSize[0xc8]
class LiquidContainerComponent: public ActorComponent
{
public:
	struct FName                                                 LiquidMaterialName;                                // 0xc8(0x8)
	struct FName                                                 LiquidMaterialParameterName;                       // 0xd0(0x8)
	TArray<struct LiquidTypeParams>                              LiquidTypeParams;                                  // 0xd8(0x10)
	float                                                        StartingLiquidLevelNormalised;                     // 0xe8(0x4)
	char                                                         pad0x4_PALWK[0x4];                                 // 0xec(0x4)
	Class CurveFloat*                                            TransitionCurve;                                   // 0xf0(0x8)
	float                                                        TransitionSpeedDecrease;                           // 0xf8(0x4)
	float                                                        TransitionSpeedIncrease;                           // 0xfc(0x4)
	TArray<class MaterialInstanceDynamic*>                       LiquidMaterials;                                   // 0x100(0x10)
	char                                                         pad0x38_1RN3O[0x38];                               // 0x10e(0x38)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class LiquidContainerServiceInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class LiquidContainerService: public InteractableService
{
public:
};


}