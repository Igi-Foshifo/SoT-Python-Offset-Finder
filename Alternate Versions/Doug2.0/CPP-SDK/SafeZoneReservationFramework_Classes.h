namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x140
class SafeZoneComponent: public CapsuleComponent
{
public:
	float                                              ExclusionRadius                                    // 0x5e0(0x4)
	float                                              ExclusionHeight                                    // 0x5e8(0x4)
	struct FName                                       SafeZoneEmptyCollisionProfile                      // 0x5ec(0x8)
	bool                                               AutoActivateSafeZone                               // 0x5f4(0x1)
	bool                                               DeactivateSafeZoneAfterExclusionRadiusIsEmpty      // 0x5f5(0x1)
	bool                                               UsePlayerTeleport                                  // 0x5f6(0x1)
	float                                              PlayerTeleportRadius                               // 0x5f8(0x4)
	bool                                               UseRepelForce                                      // 0x600(0x1)
	float                                              RepelForceRadius                                   // 0x604(0x4)
	float                                              RepelForceExtents                                  // 0x60c(0x4)
	float                                              RepelForceMin                                      // 0x610(0x4)
	float                                              RepelForceMax                                      // 0x614(0x4)
	bool                                               ApplyRepelForceAtCentreOfMass                      // 0x618(0x1)
	Struct RuntimeFloatCurve                           RepelForceGradientCurve                            // 0x620(0x80)
	bool                                               UseAngularImpulse                                  // 0x6a0(0x1)
	float                                              AngularImpulseRadius                               // 0x6a4(0x4)
	float                                              AngularImpulseForce                                // 0x6ac(0x4)
	float                                              TargetDeflectionAngle                              // 0x6b0(0x4)
	bool                                               IsSafeZoneEmpty                                    // 0x6b4(0x1)
	bool                                               StopAISpawning                                     // 0x6b5(0x1)
	struct FName                                       CurrentCollisionProfile                            // 0x6b8(0x8)
	byte                                               SafeZoneState                                      // 0x6c0(0x1)
};


}