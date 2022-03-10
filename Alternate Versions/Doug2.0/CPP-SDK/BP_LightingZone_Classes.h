namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x3d
class BP_LightingZone_C: public Actor
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x3d0(0x8)
	Class SphereComponent*                             InnerSphere                                        // 0x3d8(0x8)
	Class SphereComponent*                             OuterSphere                                        // 0x3e0(0x8)
	Class LightingZoneComponent*                       LightingZone                                       // 0x3e8(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x3f0(0x8)
	float                                              Outer Radius                                       // 0x3f8(0x4)
	float                                              Inner Radius                                       // 0x3fc(0x4)
	float                                              Weight                                             // 0x400(0x4)
	int                                                Priority Layer                                     // 0x404(0x4)
	int                                                Lighting Set                                       // 0x408(0x4)
	bool                                               IsUnderwaterZone                                   // 0x40c(0x1)
};


}