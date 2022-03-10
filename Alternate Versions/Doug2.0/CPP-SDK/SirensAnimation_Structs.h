namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60
class SirenAnimationDataStructure: public None
{
public:
	Struct SirenAnimationLocomotion                    LocomotionAnims                                    // 0x0(0x48)
	Class CustomAnimationMontageDefinitionListingDataAsset* FullBodyMontageListings                            // 0x48(0x8)
	Class AthenaAnimationWeaponDataAsset*              AttackAnimationAsset                               // 0x50(0x8)
	Struct HitReactionAnimationData                    HitReactAnimationData                              // 0x58(0x8)
};


// Size 0x48
class SirenAnimationLocomotion: public None
{
public:
	Class AnimSequence*                                TreadwaterSequence                                 // 0x0(0x8)
	Class AnimSequence*                                AggressiveTreadwaterSequence                       // 0x8(0x8)
	Class BlendSpace1D*                                LongwaysLocomotionBlendSpace                       // 0x10(0x8)
	Class BlendSpace1D*                                AggressiveLongwaysLocomotionBlendSpace             // 0x18(0x8)
	Class BlendSpace1D*                                AlternativeAggressiveLongwaysLocomotionBlendSpace  // 0x20(0x8)
	Class BlendSpace1D*                                LocomotionTurningAdditiveBlendSpace                // 0x28(0x8)
	Class BlendSpace1D*                                LocomotionSpinningAdditiveBlendSpace               // 0x30(0x8)
	Class AnimSequence*                                DivingFromSurfaceSequence                          // 0x38(0x8)
	Class AnimSequence*                                EmergingToSurfaceSequence                          // 0x40(0x8)
};


}