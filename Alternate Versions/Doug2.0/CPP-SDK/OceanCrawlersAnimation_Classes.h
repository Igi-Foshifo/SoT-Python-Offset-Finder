namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x90
class OceanCrawlerAnimationData: public AnimationData
{
public:
	Struct OceanCrawlerAnimationDataStructure          OceanCrawlerAnimationDataStructure                 // 0x28(0x90)
};


// Size 0x2e0
class OceanCrawlerAnimationInstance: public AnimInstance
{
public:
	Struct OceanCrawlerAnimationDataStructure          LoadedAnimations                                   // 0x458(0x90)
	Struct ActorVelocityData                           MovementData                                       // 0x4e8(0x18)
	float                                              CurrentDirection                                   // 0x500(0x4)
	Struct AthenaAnimationWeapon                       AttackAnims                                        // 0x508(0xb8)
	bool                                               UseDefaultAnimations                               // 0x5c0(0x1)
	bool                                               AnimationsLoaded                                   // 0x5c1(0x1)
	bool                                               SporeBreathActive                                  // 0x5c2(0x1)
	struct FName                                       PropAttachmentSocket                               // 0x5c4(0x8)
	Struct CustomAnimationMontageStateMachine          MontagePlayer                                      // 0x5d0(0xd8)
	Struct HitReactionAnimationState                   HitReacts                                          // 0x6a8(0x28)
};


// Size 0x20
class OceanCrawlerAnimationServerData: public AnimationServerData
{
public:
	class                                              AnimInstanceType                                   // 0x30(0x8)
	float                                              MaxSpawnAnimDuration                               // 0x38(0x4)
	float                                              MaxSpawnOnShipAnimDuration                         // 0x3c(0x4)
	float                                              MaxSpawnBoardingAnimDuration                       // 0x40(0x4)
};


}