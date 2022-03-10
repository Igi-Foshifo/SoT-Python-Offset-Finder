namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class ShipDamageParams: public None
{
public:
	TArray<Struct ShipPartLevelsOfDamage>              DamageParams                                       // 0x0(0x10)
};


// Size 0x30
class ShipPartLevelsOfDamage: public None
{
public:
	TArray<Struct DistanceAndLevelOfDamage>            DamagePerDistance                                  // 0x20(0x10)
};


// Size 0x8
class DistanceAndLevelOfDamage: public None
{
public:
	float                                              DistanceLimit                                      // 0x0(0x4)
	int                                                LevelOfDamage                                      // 0x4(0x4)
};


// Size 0x10
class HullDamagePersistenceModel: public None
{
public:
	TArray<Struct HullDamageZoneInfo>                  DamageZones                                        // 0x0(0x10)
};


// Size 0x30
class HullDamageZoneInfo: public None
{
public:
	Struct FString                                     DamageZoneId                                       // 0x0(0x10)
	int                                                DamageLevel                                        // 0x10(0x4)
	int                                                RepairedDamageLevel                                // 0x14(0x4)
	byte                                               RepairableState                                    // 0x18(0x1)
	TArray<Struct HullDamageHit>                       ExternalHitList                                    // 0x20(0x10)
};


// Size 0x24
class HullDamageHit: public None
{
public:
	Struct Vector                                      HitPosition                                        // 0x0(0xc)
	Struct Vector                                      HitNormal                                          // 0xc(0xc)
	float                                              HitStrength                                        // 0x18(0x4)
	int                                                HitLevel                                           // 0x1c(0x4)
	bool                                               HasDecal                                           // 0x20(0x1)
};


// Size 0x70
class EventShipDamageApplied: public None
{
public:
	Class Actor*                                       Ship                                               // 0x0(0x8)
	struct FName                                       DamagedShipPartIdentifier                          // 0x8(0x8)
	int                                                NewDamageLevel                                     // 0x10(0x4)
	Struct ImpactDamageEvent                           ImpactDamageEvent                                  // 0x18(0x58)
};


// Size 0x60
class EventShipDamaged: public None
{
public:
	Class Actor*                                       Ship                                               // 0x0(0x8)
	Struct ImpactDamageEvent                           ImpactDamageEvent                                  // 0x8(0x58)
};


// Size 0x10
class DamageZoneDamageLevelChanged: public None
{
public:
	Class Actor*                                       DamageZone                                         // 0x0(0x8)
	int                                                DamageLevel                                        // 0x8(0x4)
};


// Size 0x10
class AppliedDamageToShipEvent: public None
{
public:
	class                                              ShipType                                           // 0x0(0x8)
	Class Actor*                                       Ship                                               // 0x8(0x8)
};


}