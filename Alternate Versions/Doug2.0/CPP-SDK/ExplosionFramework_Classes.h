namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x60
class CreateActorInstanceOnExplodeComponent: public ActorComponent
{
public:
	class                                              ActorToInstance                                    // 0xc8(0x8)
};


// Size 0x0
class ExplosionInterface: public Interface
{
public:
};


// Size 0x0
class ExplosionReceiverInterface: public Interface
{
public:
};


// Size 0x0
class ExplosiveComponentInterface: public Interface
{
public:
};


// Size 0x0
class FuseInterface: public Interface
{
public:
};


// Size 0x18
class StatusResponseExplodeAfterTime: public StatusResponse
{
public:
	float                                              MinTimeUntilExplosion                              // 0x30(0x4)
	float                                              MaxTimeUntilExplosion                              // 0x34(0x4)
	Class World*                                       CachedWorld                                        // 0x40(0x8)
};


}