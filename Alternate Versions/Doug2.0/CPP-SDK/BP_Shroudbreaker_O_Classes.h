namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x2c8
class BP_Shroudbreaker_OnShip_C: public ShroudBreakerOnShip
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x460(0x8)
	Class ParticleSystemComponent*                     vfx_ShroudBreaker_OnShip_stage4                    // 0x468(0x8)
	Class StaticMeshComponent*                         ShieldPulseMesh                                    // 0x470(0x8)
	Class ParticleSystemComponent*                     vfx_ShroudBreaker_OnShip_stage3                    // 0x478(0x8)
	Class ParticleSystemComponent*                     vfx_shroudbreaker_ember                            // 0x480(0x8)
	Class ParticleSystemComponent*                     vfx_shroudbreaker_shipTip                          // 0x488(0x8)
	Class StaticMeshComponent*                         ShieldMesh                                         // 0x490(0x8)
	Class WwiseEmitterComponent*                       WwiseEmitter                                       // 0x498(0x8)
	Class ParticleSystemComponent*                     vfx_ShroudBreaker_disappear_smoke_cloud            // 0x4a0(0x8)
	Class ParticleSystemComponent*                     vfx_ShroudBreaker_OnShip_stage1                    // 0x4a8(0x8)
	Class MusicZoneComponent*                          MusicZone                                          // 0x4b0(0x8)
	Class StaticMeshComponent*                         StaticMesh                                         // 0x4b8(0x8)
	Struct ObjectMessagingHandle                       ActivateShroudbreakerHandle                        // 0x4c0(0x48)
	Struct ObjectMessagingHandle                       DeactivateShroudbreakerHandle                      // 0x508(0x48)
	Struct ObjectMessagingHandle                       ActivateEffectsHandle                              // 0x550(0x48)
	Struct ObjectMessagingHandle                       DeactivateEffectsHandle                            // 0x598(0x48)
	Struct ObjectMessagingHandle                       ShipDestroyedHandle                                // 0x5e0(0x48)
	Class Actor*                                       ParentShipActor                                    // 0x628(0x8)
	bool                                               MusicZoneActive                                    // 0x630(0x1)
	float                                              GemEmissiveOn                                      // 0x634(0x4)
	Class MaterialInstanceDynamic*                     Shroudbreaker Material                             // 0x638(0x8)
	float                                              GemEmissiveOff                                     // 0x640(0x4)
	bool                                               ShroudBreakerEffectsActive                         // 0x644(0x1)
	bool                                               ShroudBreakerDeactivate                            // 0x645(0x1)
	Struct ObjectMessagingHandle                       PlayerEnteredIslandVincityEventHandle              // 0x648(0x48)
	Struct ObjectMessagingHandle                       PlayerLeftIslandVincityEventHandle                 // 0x690(0x48)
	TArray<Assetclass ShipProgressSpawnLocationsReference> ShipProgressSpawnLoactionsAssetID                  // 0x6d8(0x10)
	TArray<class ShipProgressSpawnLocationsReference*> ShipProgressSpawnLocationsReference                // 0x6e8(0x10)
	Class MaterialInstanceDynamic*                     ShieldMaterial                                     // 0x6f8(0x8)
	Class MaterialInstanceDynamic*                     ShieldPulseMaterial                                // 0x700(0x8)
	int                                                DEBUG_Stage                                        // 0x708(0x4)
	float                                              FinalStageActivationDelay                          // 0x70c(0x4)
	Class SoundBase*                                   NewVar                                             // 0x710(0x8)
	Class ShipHullAudio*                               ShipHullAudio                                      // 0x718(0x8)
	Class WwiseEvent*                                  ShroudBreakerAmbientLoopingWwiseEvent              // 0x720(0x8)
};


// Size 0x0
class BP_Shroudbreaker_OnShip_Small_C: public BP_Shroudbreaker_OnShip_C
{
public:
};


}