namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x98
class BP_Lantern_C: public Lantern
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x940(0x8)
	Class StaticMeshComponent*                         LanternTriggerGlow                                 // 0x948(0x8)
	Class StaticMeshComponent*                         LanternGlow                                        // 0x950(0x8)
	Class AmbientLightSourceComponent*                 AmbientLightSource                                 // 0x958(0x8)
	Class SpotLightComponent*                          SpotLight                                          // 0x960(0x8)
	Class UsableWieldableComponent*                    UsableWieldable                                    // 0x968(0x8)
	Class MaterialInstanceDynamic*                     LanternGlowDynamicMaterial                         // 0x970(0x8)
	float                                              EmissiveInt_threshold                              // 0x978(0x4)
	Class MaterialInstanceDynamic*                     LanternTriggerGlowDynamicMaterial                  // 0x980(0x8)
	float                                              TriggerGlowDuration                                // 0x988(0x4)
	float                                              TriggerGlowRampInDuration                          // 0x98c(0x4)
	float                                              TriggerGlowRampOutDuration                         // 0x990(0x4)
	Struct LinearColor                                 DefaultSpotlightColour                             // 0x994(0x10)
	Struct LinearColor                                 DefaultAmbientLightColour                          // 0x9a4(0x10)
	Struct LinearColor                                 DefaultGlowColour                                  // 0x9b4(0x10)
	TArray<class DynamicMaterials*>                    DynamicMaterials                                   // 0x9c8(0x10)
};


}