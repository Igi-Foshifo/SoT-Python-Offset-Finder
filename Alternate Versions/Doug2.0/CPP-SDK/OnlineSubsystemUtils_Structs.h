namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xe0
class BlueprintSessionResult: public None
{
public:
};


// Size 0x30
class PartyReservation: public None
{
public:
	int                                                TeamNum                                            // 0x0(0x4)
	Struct UniqueNetIdRepl                             PartyLeader                                        // 0x8(0x18)
	TArray<Struct PlayerReservation>                   PartyMembers                                       // 0x20(0x10)
};


// Size 0x30
class PlayerReservation: public None
{
public:
	Struct UniqueNetIdRepl                             UniqueId                                           // 0x0(0x18)
	Struct FString                                     ValidationStr                                      // 0x18(0x10)
	float                                              ElapsedTime                                        // 0x28(0x4)
};


}