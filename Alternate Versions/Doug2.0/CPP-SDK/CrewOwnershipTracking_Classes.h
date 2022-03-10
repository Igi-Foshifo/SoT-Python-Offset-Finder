namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class CrewOwnershipTrackingInterface: public Interface
{
public:
};


// Size 0x0
class CrewSpawnOwnershipTrackingInterface: public Interface
{
public:
};


// Size 0x0
class CustomCrewTrackingInterface: public Interface
{
public:
};


// Size 0xa8
class CrewOwnershipTrackingComponent: public ActorComponent
{
public:
	Struct Guid                                        SpawningCrewId                                     // 0xe0(0x10)
	Struct Guid                                        CurrentOwnedByCrewId                               // 0xf0(0x10)
	Struct OwnerListEntry                              PreviousOwnedByCrewIdList                          // 0x100(0x10)
};


// Size 0x0
class CrewOwnershipTrackingControlInterface: public Interface
{
public:
};


}