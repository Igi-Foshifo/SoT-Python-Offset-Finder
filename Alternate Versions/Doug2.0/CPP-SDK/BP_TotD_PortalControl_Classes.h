namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x68
class BP_TotD_PortalController_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x3d0(0x8)
	Class AnimNotifyWwiseEmitterComponent*             AnimNotifyWwiseEmitter                             // 0x3d8(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x3e0(0x8)
	float                                              Timeline_0_CloudVisibility_E720F06846CDD3DCC686A1B40E94C68C // 0x3e8(0x4)
	float                                              Timeline_0_PortalSwirlVisibility_E720F06846CDD3DCC686A1B40E94C6 // 0x3ec(0x4)
	float                                              Timeline_0_CrackVisibility_E720F06846CDD3DCC686A1B40E94C68C // 0x3f0(0x4)
	float                                              Timeline_0_LightScale_E720F06846CDD3DCC686A1B40E94C68C // 0x3f4(0x4)
	float                                              Timeline_0_PortalOpen_E720F06846CDD3DCC686A1B40E94C68C // 0x3f8(0x4)
	byte                                               Timeline_0__Direction_E720F06846CDD3DCC686A1B40E94C68C // 0x3fc(0x1)
	Class TimelineComponent*                           Timeline                                           // 0x400(0x8)
	TArray<class DynamicMaterials*>                    DynamicMaterials                                   // 0x408(0x10)
	TArray<class Lights*>                              Lights                                             // 0x418(0x10)
	float                                              LightMaxScale                                      // 0x428(0x4)
	float                                              GlowMaxScale                                       // 0x42c(0x4)
	Class Texture2D*                                   PortalMask                                         // 0x430(0x8)
};


}