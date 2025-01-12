// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xc0
struct WeightedVolcanoProjectile
{
public:
	float                                                        Weight;                                            // 0x0(0x4)
	char                                                         pad0x4_6HQTB[0x4];                                 // 0x4(0x4)
	class                                                        ProjectileClass;                                   // 0x8(0x8)
	float                                                        ProjectileSpeedMinAtInnerRadius;                   // 0x10(0x4)
	float                                                        ProjectileSpeedMaxAtInnerRadius;                   // 0x14(0x4)
	float                                                        ProjectileSpeedMinAtOuterRadius;                   // 0x18(0x4)
	float                                                        ProjectileSpeedMaxAtOuterRadius;                   // 0x1c(0x4)
	float                                                        ProjectileGravityScale;                            // 0x20(0x4)
	char                                                         pad0x4_3QX8P[0x4];                                 // 0x24(0x4)
	Struct WeightedProbabilityRangeOfRanges                      RotationRatePitch;                                 // 0x28(0x30)
	Struct WeightedProbabilityRangeOfRanges                      RotationRateRoll;                                  // 0x58(0x30)
	Struct WeightedProbabilityRangeOfRanges                      RotationRateYaw;                                   // 0x88(0x30)
	Class WwiseEvent*                                            LaunchAudioPlayEvent;                              // 0xb8(0x8)
};


// Size 0x18
struct VolcanoTarget
{
public:
	byte                                                         Type;                                              // 0x0(0x1)
	byte                                                         HitType;                                           // 0x1(0x1)
	char                                                         pad0x6_V9YJ2[0x6];                                 // 0x2(0x6)
	Class Actor*                                                 Target;                                            // 0x8(0x8)
	int                                                          NumExtraShots;                                     // 0x10(0x4)
};


// Size 0x58
struct VolcanoTargetChances
{
public:
	float                                                        OnTarget;                                          // 0x0(0x4)
	float                                                        NearMiss;                                          // 0x4(0x4)
	float                                                        Random;                                            // 0x8(0x4)
	char                                                         pad0x4_ULOAU[0x4];                                 // 0xc(0x4)
	Struct WeightedProbabilityRange                              OnTargetNumExtraShots;                             // 0x10(0x20)
	Struct WeightedProbabilityRange                              NearMissNumExtraShots;                             // 0x30(0x20)
	float                                                        CoolDownDuration;                                  // 0x50(0x4)
};


// Size 0x10
struct VolcanoSetupDataEmbersEntry
{
public:
	float                                                        MaxDistanceInMetres;                               // 0x0(0x4)
	char                                                         pad0x4_I13M5[0x4];                                 // 0x4(0x4)
	Class Object*                                                Effect;                                            // 0x8(0x8)
};


// Size 0xd0
struct WeightedAshenLordVolcanoProjectile
{
public:
	float                                                        Weight;                                            // 0x0(0x4)
	float                                                        GravityMultiplier;                                 // 0x4(0x4)
	Struct WeightedProbabilityRangeOfRanges                      Speed;                                             // 0x8(0x30)
	Struct WeightedProbabilityRangeOfRanges                      RotationRatePitch;                                 // 0x38(0x30)
	Struct WeightedProbabilityRangeOfRanges                      RotationRateRoll;                                  // 0x68(0x30)
	Struct WeightedProbabilityRangeOfRanges                      RotationRateYaw;                                   // 0x98(0x30)
	class                                                        ProjectileClass;                                   // 0xc8(0x8)
};


// Size 0x8
struct AshenLordWorldEndCloudAnimation
{
public:
	float                                                        ServerStartTime;                                   // 0x0(0x4)
	float                                                        ServerLifeTime;                                    // 0x4(0x4)
};


// Size 0x10
struct GeyserStoryCustomisationData
{
public:
	Struct StoryFlag                                             StoryFlag;                                         // 0x0(0x8)
	Class GeyserSetupDataAsset*                                  GeyserSetupData;                                   // 0x8(0x8)
};


// Size 0x80
struct PlayerFeedback
{
public:
	Struct EarthquakeForceFeedback                               ForceFeedback;                                     // 0x0(0x40)
	TArray<class Class*>                                         CameraShakes;                                      // 0x40(0x10)
	Struct WeightedProbabilityRangeOfRanges                      StaggerStrength;                                   // 0x50(0x30)
};


// Size 0x40
struct EarthquakeForceFeedback
{
public:
	TArray<struct ForceFeedbackOptions>                          ForceFeedbackOptions;                              // 0x0(0x10)
	Struct WeightedProbabilityRangeOfRanges                      TimeBetweenRumbles;                                // 0x10(0x30)
};


// Size 0x10
struct EarthquakeForceFeedbackOption
{
public:
	TArray<struct ForceFeedback>                                 ForceFeedback;                                     // 0x0(0x10)
};


// Size 0x10
struct EarthquakeStoryCustomisationData
{
public:
	Struct StoryFlag                                             StoryFlag;                                         // 0x0(0x8)
	Class EarthquakeSetupDataAsset*                              EarthquakeSetupData;                               // 0x8(0x8)
};


// Size 0xc
struct GeyserSpawnAngleOption
{
public:
	float                                                        Weight;                                            // 0x0(0x4)
	float                                                        Direction;                                         // 0x4(0x4)
	float                                                        Range;                                             // 0x8(0x4)
};


// Size 0x10
struct GeyserManagerStoryCustomisationData
{
public:
	Struct StoryFlag                                             StoryFlag;                                         // 0x0(0x8)
	Class GeyserManagerSetupDataAsset*                           GeyserManagerSetupData;                            // 0x8(0x8)
};


// Size 0x10
struct VolcanoTargetCoolDown
{
public:
	Class Actor*                                                 Target;                                            // 0x0(0x8)
};


// Size 0x1c
struct VolcanoProjectileData
{
public:
	int                                                          WeightedVolcanoProjectileIndex;                    // 0x0(0x4)
	Struct Vector                                                LaunchVelocity;                                    // 0x4(0xc)
	Struct Vector                                                RotationRate;                                      // 0x10(0xc)
};


// Size 0xc
struct VolcanoStateData
{
public:
	byte                                                         State;                                             // 0x0(0x1)
	char                                                         pad0x3_LB7QU[0x3];                                 // 0x1(0x3)
	float                                                        StateDuration;                                     // 0x4(0x4)
	float                                                        PercentageOfMaxTargetingRange;                     // 0x8(0x4)
};


// Size 0x10
struct VolcanoStoryCustomisationData
{
public:
	Struct StoryFlag                                             StoryFlag;                                         // 0x0(0x8)
	Class VolcanoSetupDataAsset*                                 VolcanoSetupData;                                  // 0x8(0x8)
};


// Size 0x1
struct EventVolcanoStateChanged
{
public:
	byte                                                         State;                                             // 0x0(0x1)
};


}