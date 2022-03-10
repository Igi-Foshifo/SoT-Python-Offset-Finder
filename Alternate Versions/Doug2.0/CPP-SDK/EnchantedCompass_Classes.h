namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x128
class EnchantedCompassProximityAnnouncementComponent: public ActorComponent
{
public:
	Class WwiseEvent*                                  StartAnnouncingEvent                               // 0xc8(0x8)
	Class WwiseEvent*                                  StopAnnouncingEvent                                // 0xd0(0x8)
	float                                              MaxFrequencyDistanceSquared                        // 0xd8(0x4)
	bool                                               IsSettingEnabled                                   // 0x120(0x1)
};


// Size 0x30
class MultiTargetEnchantedCompass: public Compass
{
public:
	TArray<Struct BP_GetTargetLocations>               Locations                                          // 0x870(0x10)
	TArray<Struct Locations>                           LocationIds                                        // 0x880(0x10)
	Class InventoryItemComponent*                      InventoryItem                                      // 0x890(0x8)
	Class EnchantedCompassProximityAnnouncementComponent* ProximityAnnouncementComponent                     // 0x898(0x8)
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
	Class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc                                               // 0x90(0x8)
};


// Size 0x40
class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                         Location                                           // 0x80(0x20)
	Struct QuestVariableGuid                           TargetID                                           // 0xa0(0x20)
};


// Size 0x10
class TaleQuestMultiTargetCompassRemoveTrackedLocationStep: public TaleQuestStep
{
public:
};


// Size 0x20
class TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                           TargetID                                           // 0x80(0x20)
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
	class                                              CompassDesc                                        // 0x30(0x8)
};


// Size 0x40
class TaleQuestSetCompassTargetToTargetStep: public TaleQuestStep
{
public:
};


// Size 0x8
class TaleQuestSetCompassTargetBaseStepDesc: public TaleQuestStepDesc
{
public:
	byte                                               TargetUpdateReason                                 // 0x80(0x1)
};


// Size 0x20
class TaleQuestSetCompassTargetToActorStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	Struct QuestVariableActor                          TargetActor                                        // 0x88(0x20)
};


// Size 0x20
class TaleQuestSetCompassTargetToPointStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	Struct QuestVariableOrientedPoint                  TargetPoint                                        // 0x88(0x20)
};


}