namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60
class SirenAnimationData: public AnimationData
{
public:
	Struct SirenAnimationDataStructure                 SirenAnimationData                                 // 0x28(0x60)
};


// Size 0x2d0
class SirenAnimationInstance: public AnimInstance
{
public:
	struct FName                                       PropAttachmentSocket                               // 0x458(0x8)
	Struct SirenAnimationDataStructure                 SirenAnimationData                                 // 0x460(0x60)
	Struct AthenaAnimationWeapon                       AttackAnimations                                   // 0x4c0(0xb8)
	float                                              ForwardSpeed                                       // 0x578(0x4)
	float                                              TiltDirectionAngleDegrees                          // 0x588(0x4)
	float                                              TiltAngleAlpha                                     // 0x58c(0x4)
	float                                              SpinAngleDegrees                                   // 0x590(0x4)
	float                                              MaxTiltAngleRepresentedByAdditiveBendAnimations    // 0x594(0x4)
	bool                                               UpperBodyOverlayActive                             // 0x598(0x1)
	bool                                               SwimmingLongways                                   // 0x599(0x1)
	bool                                               UseAggressiveAnimations                            // 0x59a(0x1)
	bool                                               UseAlternativeAggressiveAnimation                  // 0x59b(0x1)
	TArray<Class UseAlternativeAggressiveAnimation>    StrategiesForAggressiveAnimations                  // 0x5a0(0x10)
	Struct FloatRange                                  TimeBeforeAlternativeAggressiveAnimationToggleFlips // 0x5b0(0x10)
	bool                                               AnimationsLoaded                                   // 0x5c8(0x1)
	float                                              AimUpAlpha                                         // 0x5cc(0x4)
	float                                              AimDownAlpha                                       // 0x5d0(0x4)
	Struct CustomAnimationMontageStateMachine          FullBodyStateMachine                               // 0x5d8(0xd8)
	Struct HitReactionAnimationState                   HitReacts                                          // 0x6b0(0x28)
};


}