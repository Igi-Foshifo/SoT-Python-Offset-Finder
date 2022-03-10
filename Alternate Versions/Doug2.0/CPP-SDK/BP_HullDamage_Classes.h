namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x88
class BP_HullDamage_C: public HullDamage
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x580(0x8)
	Class HitReactionComponent*                        HitReaction                                        // 0x588(0x8)
	Class BakedDecalComponent*                         ImpactDecalComponent                               // 0x590(0x8)
	TArray<class Persistent Damage Decals*>            Persistent Damage Decals                           // 0x598(0x10)
	Class ParticleSystem*                              Damage VFX                                         // 0x5a8(0x8)
	TArray<class Deferred Damage Decals*>              Deferred Damage Decals                             // 0x5b0(0x10)
	float                                              Deferred Min Size                                  // 0x5c0(0x4)
	float                                              Deferred Max Size                                  // 0x5c4(0x4)
	float                                              Persistent Min Size                                // 0x5c8(0x4)
	float                                              Persistent Max Size                                // 0x5cc(0x4)
	Struct RandomStream                                RandomDecalStream                                  // 0x5d0(0x8)
	float                                              TEST_HitStrength                                   // 0x5d8(0x4)
	float                                              TEST_PenetrationThreshold                          // 0x5dc(0x4)
	Class Ship*                                        ParentShip                                         // 0x5e0(0x8)
	Struct WwiseEmitter                                CannonballHitEmitter                               // 0x5e8(0x20)
};


}