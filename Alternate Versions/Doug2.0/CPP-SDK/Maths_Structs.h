namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class WeightedProbabilityRange: public None
{
public:
	TArray<Float >                                     Weights                                            // 0x10(0x10)
};


// Size 0x30
class WeightedProbabilityRangeOfRanges: public None
{
public:
	TArray<Struct WeightedProbabilityRangeOfRangesFloatPair> SubRanges                                          // 0x20(0x10)
};


// Size 0x8
class WeightedProbabilityRangeOfRangesFloatPair: public None
{
public:
	float                                              Min                                                // 0x0(0x4)
	float                                              Max                                                // 0x4(0x4)
};


// Size 0x18
class OrientedPoint: public None
{
public:
	Struct Vector                                      Location                                           // 0x0(0xc)
	Struct Rotator                                     Rotation                                           // 0xc(0xc)
};


// Size 0x18
class RotationUpdateResult: public None
{
public:
	Struct Rotator                                     UpdatedRotation                                    // 0x0(0xc)
	float                                              SpinAngle                                          // 0xc(0x4)
	float                                              TiltAngle                                          // 0x10(0x4)
	float                                              TiltDirection                                      // 0x14(0x4)
};


// Size 0x18
class TimedBuffer: public None
{
public:
};


// Size 0x18
class FixedStepInterpCurveVector2D: public None
{
public:
	TArray<Struct FixedStepInterpCurvePointVector2D>   Points                                             // 0x0(0x10)
	float                                              StepTime                                           // 0x10(0x4)
	bool                                               IsLooped                                           // 0x14(0x1)
};


// Size 0x10
class FixedStepInterpCurvePointVector2D: public None
{
public:
	Struct Vector2D                                    OutVal                                             // 0x0(0x8)
	Struct Vector2D                                    Tangent                                            // 0x8(0x8)
};


// Size 0x10
class InertialSmoothedFloat: public None
{
public:
	float                                              AccelerationMagnitude                              // 0x0(0x4)
	float                                              MaxSpeed                                           // 0x4(0x4)
	float                                              CurrentVelocity                                    // 0x8(0x4)
	float                                              CurrentValue                                       // 0xc(0x4)
};


// Size 0x8
class SpatialOffset: public None
{
public:
	float                                              OffsetValue                                        // 0x0(0x4)
	byte                                               OffsetMethod                                       // 0x4(0x1)
};


}