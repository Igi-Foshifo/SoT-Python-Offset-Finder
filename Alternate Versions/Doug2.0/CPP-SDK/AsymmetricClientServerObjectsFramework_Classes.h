namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
class AsymmetricClientObject: public Actor
{
public:
	Class BoxComponent*                                BaseComponent                                      // 0x3e8(0x8)
	Class StaticMeshMemoryConstraintComponent*         ThirdPersonMesh                                    // 0x3f0(0x8)
	Class WaterInteractionComponent*                   WaterInteractionComponent                          // 0x3f8(0x8)
	Class BuoyancyComponent*                           BuoyancyComponent                                  // 0x400(0x8)
	Class SpawnDependentTrackedOwnerComponent*         SpawnDependentTrackedOwnerComponent                // 0x408(0x8)
	Struct Rotator                                     RotationWhenPlacingWorldProxy                      // 0x410(0xc)
	float                                              ZOffsetWhenPlacingWorldProxy                       // 0x41c(0x4)
};


// Size 0x58
class AsymmetricObjectServerManager: public Actor
{
public:
	Class AsymmetricClientObject*                      SpawnedObject                                      // 0x3e8(0x8)
	Class SceneComponent*                              SceneComponent                                     // 0x3f0(0x8)
	Struct StringAssetReference                        AsymmetricObjectAsset                              // 0x3f8(0x10)
};


}