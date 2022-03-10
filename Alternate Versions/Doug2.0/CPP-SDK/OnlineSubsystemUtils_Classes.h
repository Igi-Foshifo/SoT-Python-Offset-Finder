namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class AchievementBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x60
class InAppPurchaseCallbackProxy: public Object
{
public:
};


// Size 0x70
class InAppPurchaseQueryCallbackProxy: public Object
{
public:
};


// Size 0x70
class InAppPurchaseRestoreCallbackProxy: public Object
{
public:
};


// Size 0x50
class IpConnection: public NetConnection
{
public:
};


// Size 0x50
class IpNetDriver: public NetDriver
{
public:
	bool                                               LogPortUnreach                                     // 0x478(0x1)
	bool                                               AllowPlayerPortUnreach                             // 0x478(0x1)
};


// Size 0x0
class LeaderboardBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x38
class LeaderboardFlushCallbackProxy: public Object
{
public:
};


// Size 0x68
class LeaderboardQueryCallbackProxy: public Object
{
public:
};


// Size 0x38
class LogoutCallbackProxy: public BlueprintAsyncActionBase
{
public:
};


// Size 0x28
class OnlineBeacon: public Actor
{
public:
	float                                              BeaconConnectionInitialTimeout                     // 0x3d8(0x4)
	float                                              BeaconConnectionTimeout                            // 0x3dc(0x4)
	Class NetDriver*                                   NetDriver                                          // 0x3e0(0x8)
};


// Size 0x28
class OnlineBeaconClient: public OnlineBeacon
{
public:
	Class OnlineBeaconHostObject*                      BeaconOwner                                        // 0x3f8(0x8)
	Class NetConnection*                               BeaconConnection                                   // 0x400(0x8)
	byte                                               ConnectionState                                    // 0x408(0x1)
};


// Size 0x40
class PartyBeaconState: public Object
{
public:
	struct FName                                       SessionName                                        // 0x28(0x8)
	int                                                NumConsumedReservations                            // 0x30(0x4)
	int                                                MaxReservations                                    // 0x34(0x4)
	int                                                NumTeams                                           // 0x38(0x4)
	int                                                NumPlayersPerTeam                                  // 0x3c(0x4)
	int                                                ReservedHostTeamNum                                // 0x40(0x4)
	int                                                ForceTeamNum                                       // 0x44(0x4)
	TArray<Struct ForceTeamNum>                        Reservations                                       // 0x48(0x10)
};


// Size 0x58
class PartyBeaconClient: public OnlineBeaconClient
{
public:
	Struct FString                                     DestSessionId                                      // 0x430(0x10)
	Struct PartyReservation                            PendingReservation                                 // 0x440(0x30)
	byte                                               RequestType                                        // 0x470(0x1)
	bool                                               bPendingReservationSent                            // 0x471(0x1)
	bool                                               bCancelReservation                                 // 0x472(0x1)
};


// Size 0x0
class TestBeaconClient: public OnlineBeaconClient
{
public:
};


// Size 0xb8
class OnlineBeaconHost: public OnlineBeacon
{
public:
	int                                                ListenPort                                         // 0x3f8(0x4)
	TArray<class ClientActors*>                        ClientActors                                       // 0x400(0x10)
};


// Size 0x28
class OnlineBeaconHostObject: public Actor
{
public:
	Struct FString                                     BeaconTypeName                                     // 0x3d0(0x10)
	class                                              ClientBeaconActorClass                             // 0x3e0(0x8)
	TArray<class ClientActors*>                        ClientActors                                       // 0x3e8(0x10)
};


// Size 0x38
class PartyBeaconHost: public OnlineBeaconHostObject
{
public:
	Class PartyBeaconState*                            State                                              // 0x3f8(0x8)
	float                                              SessionTimeoutSecs                                 // 0x428(0x4)
	float                                              TravelSessionTimeoutSecs                           // 0x42c(0x4)
};


// Size 0x0
class TestBeaconHost: public OnlineBeaconHostObject
{
public:
};


// Size 0x0
class OnlineBlueprintCallProxyBase: public Object
{
public:
};


// Size 0x38
class AchievementQueryCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x58
class AchievementWriteCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x40
class ConnectionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x58
class CreateSessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x40
class DestroySessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x50
class EndMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x48
class EndTurnCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x60
class FindSessionsCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x60
class FindTurnBasedMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x120
class JoinSessionCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x48
class QuitMatchCallbackProxy: public OnlineBlueprintCallProxyBase
{
public:
};


// Size 0x140
class OnlineSessionClient: public OnlineSession
{
public:
	bool                                               bIsFromInvite                                      // 0x160(0x1)
	bool                                               bHandlingDisconnect                                // 0x161(0x1)
};


// Size 0x30
class ShowLoginUICallbackProxy: public BlueprintAsyncActionBase
{
public:
};


// Size 0x0
class TurnBasedBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


}