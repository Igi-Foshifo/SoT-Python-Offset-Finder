namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class BP_ShovelHole_C: public ShovelHole
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x440(0x8)
	Class DecalComponent*                              DirtDecal                                          // 0x448(0x8)
	Class StaticMeshComponent*                         DirtPile                                           // 0x450(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x458(0x8)
	Class MaterialInstanceDynamic*                     MeshDynamicMaterial                                // 0x460(0x8)
	Class MaterialInstanceDynamic*                     DecalDynamicMaterial                               // 0x468(0x8)
};


}