namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class EventBreakableActorWasDestroyed: public None
{
public:
	Class Actor*                                       Instigator                                         // 0x0(0x8)
	Class Actor*                                       DirectInstigator                                   // 0x8(0x8)
};


// Size 0x58
class EventBreakableActorWasDamaged: public None
{
public:
	Struct ImpactDamageEvent                           ImpactDamageEvent                                  // 0x0(0x58)
};


}