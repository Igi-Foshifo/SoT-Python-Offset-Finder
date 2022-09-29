// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x128
class EnchantedCompassProximityAnnouncementComponent: public ActorComponent
{
public:
	Class WwiseEvent*                                            StartAnnouncingEvent;                              // 0xc8(0x8)
	Class WwiseEvent*                                            StopAnnouncingEvent;                               // 0xd0(0x8)
	float                                                        MaxFrequencyDistanceSquared;                       // 0xd8(0x4)
	bool                                                         IsSettingEnabled;                                  // 0x120(0x1)
};


// Size 0x30
class MultiTargetEnchantedCompass: public Compass
{
public:
	TArray<Struct Vector>                                        Locations;                                         // 0x858(0x10)
	TArray<Struct Guid>                                          LocationIds;                                       // 0x868(0x10)
	Class InventoryItemComponent*                                InventoryItem;                                     // 0x878(0x8)
	Class EnchantedCompassProximityAnnouncementComponent*        ProximityAnnouncementComponent;                    // 0x880(0x8)
};


// Size 0x0
class PrototypeMultiTargetEnchantedCompass: public MultiTargetEnchantedCompass
{
public:
};


// Size 0x8
class TaleQuestMultiTargetCompassAddTrackedLocationStep: public TaleQuestStep
{
public:
	Class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                              // 0x98(0x8)
};


// Size 0x60
class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                                   Location;                                          // 0x80(0x30)
	Struct QuestVariableGuid                                     TargetID;                                          // 0xb0(0x30)
};


// Size 0x10
class TaleQuestMultiTargetCompassRemoveTrackedLocationStep: public TaleQuestStep
{
public:
};


// Size 0x30
class TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                                     TargetID;                                          // 0x80(0x30)
};


// Size 0x20
class TaleQuestMultiTargetCompassService: public TaleQuestToolService
{
public:
};


// Size 0x8
class TaleQuestMultiTargetCompassServiceDesc: public TaleQuestToolServiceDesc
{
public:
	class                                                        CompassDesc;                                       // 0x30(0x8)
};


// Size 0x60
class TaleQuestSetCompassTargetToTargetStep: public TaleQuestStep
{
public:
};


// Size 0x8
class TaleQuestSetCompassTargetBaseStepDesc: public TaleQuestStepDesc
{
public:
	byte                                                         TargetUpdateReason;                                // 0x80(0x1)
};


// Size 0x30
class TaleQuestSetCompassTargetToActorStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	Struct QuestVariableActor                                    TargetActor;                                       // 0x88(0x30)
};


// Size 0x30
class TaleQuestSetCompassTargetToPointStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	Struct QuestVariableOrientedPoint                            TargetPoint;                                       // 0x88(0x30)
};


}