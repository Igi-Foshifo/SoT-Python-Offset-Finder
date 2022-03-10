namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class PerComanyItemQualityEntry: public None
{
public:
	class                                              Company                                            // 0x0(0x8)
	byte                                               Quality                                            // 0x8(0x1)
};


// Size 0x18
class PerComanyComplexItemQualityEntry: public None
{
public:
	class                                              Company                                            // 0x0(0x8)
	TArray<Struct ComplexItemQualityEntry>             QualityData                                        // 0x8(0x10)
};


// Size 0x10
class ComplexItemQualityEntry: public None
{
public:
	byte                                               OnTime                                             // 0x0(0x1)
	byte                                               HealthLevel                                        // 0x1(0x1)
	byte                                               IsComissioned                                      // 0x2(0x1)
	byte                                               IsStolen                                           // 0x3(0x1)
	byte                                               QueryReason                                        // 0x4(0x1)
	byte                                               QualityLevel                                       // 0x5(0x1)
	struct FName                                       Rarity                                             // 0x8(0x8)
};


}