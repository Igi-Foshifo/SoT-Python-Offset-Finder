namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class ModeSpecificReviveSettings: public None
{
public:
	byte                                               AssociatedPlaymode                                 // 0x0(0x1)
	float                                              DeathCameraBlackFadeDelay                          // 0x4(0x4)
	float                                              DeathCameraBlackFadeDuration                       // 0x8(0x4)
	float                                              DeathCameraBlackFadeEventClientTimeout             // 0xc(0x4)
	float                                              DeathCameraBlackFadeEventServerTimeout             // 0x10(0x4)
	float                                              DelayBeforeEvaporate                               // 0x14(0x4)
	float                                              EvaporateDuration                                  // 0x18(0x4)
	float                                              DeathCameraStartDelay                              // 0x1c(0x4)
	float                                              ReviveWindowDuration                               // 0x20(0x4)
	float                                              GhostFadeDuration                                  // 0x24(0x4)
	Class ReviveSettings*                              CachedReviveSettings                               // 0x28(0x8)
};


// Size 0x20
class ReviveEffectsValues: public None
{
public:
	Class MaterialInstanceDynamic*                     AstralCordPostProcessMID                           // 0x0(0x8)
};


// Size 0x1
class PlayerInReviveableStateTelemetryEvent: public None
{
public:
};


// Size 0x1
class PlayerRevivalTelemetryEvent: public None
{
public:
	bool                                               Success                                            // 0x0(0x1)
};


// Size 0x30
class PostReviveLocomotionActionStateConstructionInfo: public None
{
public:
};


// Size 0x1
class EventRevivableRepresentationSpawnCompleted: public None
{
public:
	bool                                               FromSwimming                                       // 0x0(0x1)
};


// Size 0x1
class EventRevivableRepresentationSpawnStarted: public None
{
public:
};


// Size 0x68
class ReviveableActionStateConstructionInfo: public None
{
public:
	class                                              ActionStateId                                      // 0x30(0x8)
	Struct DamageInstance                              DamageInstance                                     // 0x38(0x28)
	byte                                               CharacterDeathType                                 // 0x60(0x1)
	byte                                               CharacterType                                      // 0x61(0x1)
};


// Size 0x30
class RevivedActionStateConstructionInfo: public None
{
public:
};


// Size 0x10
class RevivedActionStateParams: public None
{
public:
	float                                              HealthRegained                                     // 0x0(0x4)
	float                                              ReviveDuration                                     // 0x4(0x4)
	Class WwiseEvent*                                  ReviveGaspAudio                                    // 0x8(0x8)
};


// Size 0x1
class ReviveableActionStateStarted: public None
{
public:
};


// Size 0x8
class EventCharacterDiedDuringReviving: public None
{
public:
	Class Character*                                   OwningCharacter                                    // 0x0(0x8)
};


// Size 0x1
class EventRevivePlayerActionStateLeft: public None
{
public:
};


// Size 0x1
class EventRevivePlayerActionStateEntered: public None
{
public:
};


// Size 0x1
class EventCharacterFullyRevived: public None
{
public:
};


// Size 0x1
class ReviveEndedEarlyEvent: public None
{
public:
};


// Size 0x1
class EventRevivableRepresentationReturnedToBody: public None
{
public:
};


// Size 0x1
class SuccessfulReviveEvent: public None
{
public:
};


// Size 0x1
class BeingRevivedStoppedEvent: public None
{
public:
};


// Size 0x1
class BeingRevivedStartedEvent: public None
{
public:
};


// Size 0x1
class RevivableCharacterGhostlyBodyEvaporateStarted: public None
{
public:
};


// Size 0x1
class RevivingWindowEnd: public None
{
public:
};


// Size 0x38
class RevivingWindowStart: public None
{
public:
	Struct DamageInstance                              DamageInstance                                     // 0x0(0x28)
	byte                                               CharacterDeathType                                 // 0x28(0x1)
	Class Character*                                   RevivableCharacter                                 // 0x30(0x8)
};


// Size 0x60
class RevivePlayerActionStateConstructionInfo: public None
{
public:
	Struct NetActorPtr                                 CharacterReviving                                  // 0x30(0x14)
	Struct NetSubObjectPtr                             CharacterBeingRevived                              // 0x44(0x14)
	class                                              InputID                                            // 0x58(0x8)
};


}