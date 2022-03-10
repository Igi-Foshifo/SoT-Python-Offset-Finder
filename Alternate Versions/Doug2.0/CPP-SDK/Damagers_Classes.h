namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x58
class RadialDamagerComponent: public ActorComponent
{
public:
	float                                              DamageIntervalSeconds                              // 0xc8(0x4)
	float                                              DamagePerSecondAtCentre                            // 0xcc(0x4)
	float                                              DamagePerSecondAtMaxRadius                         // 0xd0(0x4)
	float                                              DamageRadius                                       // 0xd4(0x4)
	class                                              DamagerType                                        // 0xe0(0x8)
	byte                                               HealthChangedReason                                // 0xe8(0x1)
	Struct Vector                                      LocalOffset                                        // 0xec(0xc)
};


// Size 0x0
class ShockwaveDamagerInterface: public Interface
{
public:
};


// Size 0x108
class ShockwaveDamagerComponent: public ActorComponent
{
public:
	float                                              ExpansionDuration                                  // 0xd0(0x4)
	float                                              EndRadiusInMetres                                  // 0xd4(0x4)
	bool                                               ApplyImpulseToShips                                // 0xd8(0x1)
	Struct WeightedProbabilityRangeOfRanges            ForceToApplyToShip                                 // 0xe0(0x30)
	bool                                               ApplyDamageToShips                                 // 0x110(0x1)
	TArray<Struct ApplyDamageToShips>                  ShipDamageLevels                                   // 0x118(0x10)
	class                                              DamagerType                                        // 0x128(0x8)
	bool                                               ApplyImpulseToGhostShips                           // 0x130(0x1)
	float                                              GhostShipImpulseDuration                           // 0x134(0x4)
	float                                              GhostShipImpulseMaxDeflectionAngle                 // 0x138(0x4)
	bool                                               DestroyHostileGhostShips                           // 0x13c(0x1)
	float                                              NearbyEncounterDistanceInMetres                    // 0x140(0x4)
	TArray<Weakclass OnShockwaveEnded>                 ProcessedShips                                     // 0x168(0x10)
	TArray<Weakclass ProcessedShips>                   ProcessedGhostShips                                // 0x178(0x10)
};


// Size 0x158
class ShipDamagerComponent: public ActorComponent
{
public:
	Class PrimitiveComponent*                          Shape                                              // 0xd0(0x8)
	TArray<Interface Shape>                            ShipHulls                                          // 0xd8(0x10)
	TArray<Interface ShipHulls>                        WatercraftHealthInterfaces                         // 0xe8(0x10)
	Struct StrainDamage                                ShipStrainDamage                                   // 0xf8(0x28)
	Struct WeightedProbabilityRangeOfRanges            TimeBetweenWatercraftDamage                        // 0x120(0x30)
	float                                              WatercraftDamage                                   // 0x150(0x4)
	bool                                               StartDamagingOnBeginPlay                           // 0x154(0x1)
};


}