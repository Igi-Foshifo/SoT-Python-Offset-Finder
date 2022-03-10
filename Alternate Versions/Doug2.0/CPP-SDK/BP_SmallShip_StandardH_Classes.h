namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class BP_SmallShip_StandardHull_InternalShipWater_C: public ShipInternalWater
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x620(0x8)
	Class DynamicFlowComponent*                        DynamicFlow                                        // 0x628(0x8)
	Class CurveFloat*                                  Foaminess                                          // 0x630(0x8)
};


// Size 0xa8
class BP_SmallShip_StandardHull_Damage_C: public BP_HullDamage_C
{
public:
	Class StaticMeshComponent*                         projectile_collision                               // 0x608(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower_04                               // 0x610(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower_06                               // 0x618(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower_01                               // 0x620(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower_08                               // 0x628(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower_07                               // 0x630(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower_09                               // 0x638(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower_05                               // 0x640(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower_03                               // 0x648(0x8)
	Class ChildActorComponent*                         Damage_Zone_Lower                                  // 0x650(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle                                 // 0x658(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_09                              // 0x660(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_08                              // 0x668(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_07                              // 0x670(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_06                              // 0x678(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_05                              // 0x680(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_04                              // 0x688(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_03                              // 0x690(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_02                              // 0x698(0x8)
	Class ChildActorComponent*                         Damage_Zone_Middle_01                              // 0x6a0(0x8)
	Class StaticMeshComponent*                         shp_small_hull_damage_01_a                         // 0x6a8(0x8)
};


}