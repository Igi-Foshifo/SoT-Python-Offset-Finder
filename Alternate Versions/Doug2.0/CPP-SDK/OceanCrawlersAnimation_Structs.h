namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x90
class OceanCrawlerAnimationDataStructure: public None
{
public:
	Struct OceanCrawlerLocomotionAnimationDataStructure LocomotionData                                     // 0x0(0x30)
	Class CustomAnimationMontageDefinitionListingDataAsset* MontageData                                        // 0x30(0x8)
	Class AthenaAnimationWeaponDataAsset*              AttackAnimations                                   // 0x38(0x8)
	Struct HitReactionAnimationData                    HitReactionData                                    // 0x40(0x8)
	Struct OceanCrawlerSporeBreathAnimationData        SporeBreathData                                    // 0x48(0x18)
	TArray<Struct SporeBreathData>                     AttackInterruptMontages                            // 0x60(0x10)
	Struct CustomAnimationMontageId                    DeathMontageId                                     // 0x70(0x8)
	Struct CustomAnimationMontageId                    SpawnMontageId                                     // 0x78(0x8)
	Struct CustomAnimationMontageId                    SpawnOnShipMontageId                               // 0x80(0x8)
	Struct CustomAnimationMontageId                    SpawnBoardedMontageId                              // 0x88(0x8)
};


// Size 0x18
class OceanCrawlerSporeBreathAnimationData: public None
{
public:
	Class BlendSpace1D*                                Into                                               // 0x0(0x8)
	Class BlendSpace1D*                                Locomotion                                         // 0x8(0x8)
	Class BlendSpace1D*                                Outof                                              // 0x10(0x8)
};


// Size 0x30
class OceanCrawlerLocomotionAnimationDataStructure: public None
{
public:
	Class BlendSpace1D*                                LocomotionIntoAsBlendspace                         // 0x0(0x8)
	Class AnimSequence*                                Idle                                               // 0x8(0x8)
	Class AnimSequence*                                LocomotionOutOf                                    // 0x10(0x8)
	Class BlendSpace1D*                                LocomotionOutOfAsBlendspace                        // 0x18(0x8)
	Class BlendSpace*                                  Locomotion                                         // 0x20(0x8)
	float                                              IntoDeadZone                                       // 0x28(0x4)
	float                                              OutOfDeadZone                                      // 0x2c(0x4)
};


}