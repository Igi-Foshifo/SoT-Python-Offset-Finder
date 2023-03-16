// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
struct WeightedProbabilityRange
{
public:
	TArray<Float Weights>                                        Weights;                                           // 0x10(0x10)
};


// Size 0x30
struct WeightedProbabilityRangeOfRanges
{
public:
	TArray<struct SubRanges>                                     SubRanges;                                         // 0x20(0x10)
};


// Size 0x8
struct WeightedProbabilityRangeOfRangesFloatPair
{
public:
	float                                                        Min;                                               // 0x0(0x4)
	float                                                        Max;                                               // 0x4(0x4)
};


// Size 0x18
struct OrientedPoint
{
public:
	Struct Vector                                                Location;                                          // 0x0(0xc)
	Struct Rotator                                               Rotation;                                          // 0xc(0xc)
};


// Size 0x18
struct RotationUpdateResult
{
public:
	Struct Rotator                                               UpdatedRotation;                                   // 0x0(0xc)
	float                                                        SpinAngle;                                         // 0xc(0x4)
	float                                                        TiltAngle;                                         // 0x10(0x4)
	float                                                        TiltDirection;                                     // 0x14(0x4)
};


// Size 0x18
struct TimedBuffer
{
public:
};


// Size 0x18
struct FixedStepInterpCurveVector2D
{
public:
	TArray<struct Points>                                        Points;                                            // 0x0(0x10)
	float                                                        StepTime;                                          // 0x10(0x4)
	bool                                                         IsLooped;                                          // 0x14(0x1)
};


// Size 0x10
struct FixedStepInterpCurvePointVector2D
{
public:
	Struct Vector2D                                              OutVal;                                            // 0x0(0x8)
	Struct Vector2D                                              Tangent;                                           // 0x8(0x8)
};


// Size 0x10
struct InertialSmoothedFloat
{
public:
	float                                                        AccelerationMagnitude;                             // 0x0(0x4)
	float                                                        MaxSpeed;                                          // 0x4(0x4)
	float                                                        CurrentVelocity;                                   // 0x8(0x4)
	float                                                        CurrentValue;                                      // 0xc(0x4)
};


// Size 0x8
struct SpatialOffset
{
public:
	float                                                        OffsetValue;                                       // 0x0(0x4)
	byte                                                         OffsetMethod;                                      // 0x4(0x1)
};


}