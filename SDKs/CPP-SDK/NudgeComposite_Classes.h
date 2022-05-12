// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class NudgeFromExplosionsPolicy: public NudgePolicy
{
public:
	TArray<Struct NudgeChancePerDamagerType>                     AcceptedDamagerTypes;                              // 0xc0(0x10)
};


// Size 0x8
class NudgeFromShipCollisionPolicy: public NudgePolicy
{
public:
	int                                                          DamageAmountRequiredToNudge;                       // 0xc0(0x4)
	float                                                        ChanceOfNudge;                                     // 0xc4(0x4)
};


// Size 0x98
class NudgeFromStormPolicy: public NudgePolicy
{
public:
	float                                                        ChanceOfNudge;                                     // 0xc0(0x4)
	Struct WeightedProbabilityRangeOfRanges                      WeightedTimers;                                    // 0xc8(0x30)
};


// Size 0x10
class NudgeFromWaterLevelPolicy: public NudgePolicy
{
public:
	float                                                        WaterLevelDifferenceBetweenUpdates;                // 0xc0(0x4)
	float                                                        ZOffsetFromWaterToMountpoint;                      // 0xc4(0x4)
};


}