namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x68
class TaleQuestStep: public Object
{
public:
	Class TaleQuestStepDesc*                           TaleStepDesc                                       // 0x80(0x8)
};


// Size 0x38
class TaleQuestService: public Object
{
public:
};


// Size 0x0
class TaleQuestServiceDesc: public Object
{
public:
};


// Size 0x58
class TaleQuestStepDesc: public Object
{
public:
	bool                                               Fork                                               // 0x28(0x1)
};


// Size 0x0
class TaleMigrationAction: public Object
{
public:
};


// Size 0x40
class TaleQuestFramedStep: public TaleQuestStep
{
public:
	TArray<class Services*>                            Services                                           // 0x98(0x10)
	Class TaleQuestFramedStepDesc*                     FrameDesc                                          // 0xa8(0x8)
	Class ScriptStruct*                                StructForCollector                                 // 0xc0(0x8)
	Class ScriptStruct*                                LocalStructForCollector                            // 0xc8(0x8)
};


// Size 0x20
class TaleQuestFramedStepDesc: public TaleQuestStepDesc
{
public:
	TArray<class Services*>                            Services                                           // 0x80(0x10)
	Class ScriptStruct*                                Variables                                          // 0x90(0x8)
	Struct InlineUserDefinedStructDetails              GeneratedVariables                                 // 0x98(0x8)
};


// Size 0x0
class ContendedResourceServiceInterface: public Interface
{
public:
};


// Size 0x0
class WorldResourceRegistryInterface: public Interface
{
public:
};


// Size 0x38
class ContendedResourceComponent: public ActorComponent
{
public:
};


// Size 0x0
class EnvQueryContext_TaleContextBase: public EnvQueryContext
{
public:
};


// Size 0x10
class IslandTypeWeightsDataAsset: public DataAsset
{
public:
	TArray<Struct StructForCollector>                  IslandTypeWeightsForDifficultyRanks                // 0x28(0x10)
};


// Size 0x20
class SplineFootprintPathComponent: public SplineComponent
{
public:
	float                                              DistanceBetweenDecals                              // 0x628(0x4)
	Class MaterialInterface*                           DecalMaterial                                      // 0x630(0x8)
	Struct SplineFootprintPathTool                     PathTool                                           // 0x638(0x1)
	float                                              DecalYaw                                           // 0x63c(0x4)
	Struct Vector                                      DecalUniformScale                                  // 0x640(0xc)
};


// Size 0x0
class StartTallTaleConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0
class TaleQuestArrayEntrySelectionStrategy: public Object
{
public:
};


// Size 0x8
class FixedArrayEntrySelectionStrategy: public TaleQuestArrayEntrySelectionStrategy
{
public:
	int                                                IndexToSelect                                      // 0x28(0x4)
};


// Size 0x0
class RandomArrayEntrySelectionStrategy: public TaleQuestArrayEntrySelectionStrategy
{
public:
};


// Size 0x8
class SequentialArrayEntrySelectionStrategy: public TaleQuestArrayEntrySelectionStrategy
{
public:
};


// Size 0x88
class TaleQuestCargoRunContract: public Object
{
public:
	TArray<Struct OnCollected>                         ItemsToCollect                                     // 0x68(0x10)
	Class Actor*                                       DeliverToNPC                                       // 0x88(0x8)
	Class Actor*                                       CollectFromNPC                                     // 0x90(0x8)
};


// Size 0x48
class TaleQuestCargoRunContractsService: public TaleQuestService
{
public:
	TArray<class Contracts*>                           Contracts                                          // 0x60(0x10)
};


// Size 0x60
class TaleQuestMerchantContract: public Object
{
public:
};


// Size 0x10
class TaleQuestMerchantContractsService: public TaleQuestService
{
public:
	TArray<class Contracts*>                           Contracts                                          // 0x60(0x10)
};


// Size 0x88
class TaleQuestImportFrame: public TaleQuestRootFrame
{
public:
};


// Size 0x0
class TaleQuestSelectorServiceBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x30
class CutsceneResponsesTaleService: public TaleQuestService
{
public:
	TArray<class TrackedResponseCoordinators*>         TrackedResponseCoordinators                        // 0x60(0x10)
	TArray<class TrackedResponseComponents*>           TrackedResponseComponents                          // 0x70(0x10)
	TArray<class ResponseRelevantActors*>              ResponseRelevantActors                             // 0x80(0x10)
};


// Size 0x28
class GameEventExclusionZoneTaleService: public TaleQuestService
{
public:
};


// Size 0x30
class RewardGenTaleQuestService: public TaleQuestService
{
public:
	Class TaleQuestWeightedItemDescSpawnDataAsset*     GlobalSpawnData                                    // 0x60(0x8)
	TArray<Int >                                       ValidSpawnData                                     // 0x68(0x10)
	TArray<class ItemsToSpawn*>                        ItemsToSpawn                                       // 0x78(0x10)
};


// Size 0x310
class TaleQuestActorService: public TaleQuestService
{
public:
	TArray<Struct Desc>                                TrackedActors                                      // 0x60(0x10)
	TArray<Struct TrackedActors>                       CriticalActors                                     // 0x70(0x10)
	TArray<Struct CriticalActors>                      SnapshottedActors                                  // 0x80(0x10)
	Class TaleQuestActorServiceDesc*                   Desc                                               // 0x90(0x8)
	Class PhasedClusterRoot*                           PhasedClusterRoot                                  // 0x98(0x8)
	TArray<Struct PhasedClusterRoot>                   PhasedActors                                       // 0xa0(0x10)
	TArray<Struct PhasedActors>                        PhasedItems                                        // 0xb0(0x10)
	Struct FText                                       CriticalActorHandedInByAnotherCrewFailureMessage   // 0xc0(0x38)
};


// Size 0x38
class TaleQuestCheckpointService: public TaleQuestService
{
public:
	Class TaleQuestCheckpointServiceDesc*              Desc                                               // 0x60(0x8)
};


// Size 0xc8
class TaleQuestEQSService: public TaleQuestService
{
public:
};


// Size 0x28
class TaleQuestSelectorService: public TaleQuestService
{
public:
	Class TaleQuestSelectorServiceDesc*                Desc                                               // 0x60(0x8)
};


// Size 0x58
class TaleQuestToggleInteractionDescriptionService: public TaleQuestService
{
public:
	Class TaleQuestToggleInteractionDescriptionServiceDesc* Desc                                               // 0xb0(0x8)
};


// Size 0x48
class TaleResourceBrokerService: public TaleQuestService
{
public:
	TArray<Struct ResourceRegistry>                    MigrationActions                                   // 0x80(0x10)
};


// Size 0x0
class CutsceneResponsesTaleServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0
class GameEventExclusionZoneTaleServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x8
class RewardGenTaleQuestServiceDesc: public TaleQuestServiceDesc
{
public:
	Class TaleQuestWeightedItemDescSpawnDataAsset*     SpawnData                                          // 0x28(0x8)
};


// Size 0x8
class TaleQuestActorServiceDesc: public TaleQuestServiceDesc
{
public:
	class                                              ItemLostFailureRunnable                            // 0x28(0x8)
};


// Size 0x0
class TaleQuestCargoRunContractsServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0
class TaleQuestEQSServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0
class TaleQuestMerchantContractsServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0
class TaleQuestSelectorServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x8
class TaleQuestToggleInteractionDescriptionServiceDesc: public TaleQuestServiceDesc
{
public:
	bool                                               ResetDisabledInteractsOnEnd                        // 0x28(0x1)
	bool                                               ResetEnabledInteractsOnEnd                         // 0x29(0x1)
};


// Size 0x8
class AddGameEventExclusionZoneStep: public TaleQuestStep
{
public:
	Class AddGameEventExclusionZoneStepDesc*           Desc                                               // 0x90(0x8)
};


// Size 0x0
class CallObjectFunctionStep: public TaleQuestStep
{
public:
};


// Size 0x38
class DebugTaleAddInstancedLevelStep: public TaleQuestStep
{
public:
	Class DebugTaleAddInstancedLevelStepDesc*          StepDesc                                           // 0x98(0x8)
	Struct FString                                     InstancedLevelPath                                 // 0xa0(0x10)
};


// Size 0x40
class DebugTaleAddInstancedLevelStepDesc: public TaleQuestStepDesc
{
public:
	Struct FText                                       InstancedLevelKeyword                              // 0x80(0x38)
};


// Size 0x0
class DestroySpawnedActorStep: public TaleQuestStep
{
public:
};


// Size 0x10
class DoEQSQueryStep: public TaleQuestStep
{
public:
	Class DoEQSQueryStepDesc*                          Desc                                               // 0x90(0x8)
	Class TaleQuestEQSService*                         CachedTaleEQSService                               // 0x98(0x8)
};


// Size 0x0
class FindNamedPointStep: public TaleQuestStep
{
public:
};


// Size 0x0
class FindNamedPointAsVectorStep: public TaleQuestStep
{
public:
};


// Size 0x0
class FindNamedPointAsTransformStep: public TaleQuestStep
{
public:
};


// Size 0x80
class GenerateDigLocationInRadiusStep: public TaleQuestStep
{
public:
};


// Size 0x28
class GetVoyageDifficultyFromRankStep: public TaleQuestStep
{
public:
};


// Size 0x0
class InvokeDamageStep: public TaleQuestStep
{
public:
};


// Size 0x8
class LinkEQSContextWithVariableStep: public TaleQuestStep
{
public:
	Class LinkEQSContextWithVariableStepDesc*          Desc                                               // 0x90(0x8)
};


// Size 0x18
class LoadSequencerAnimationStep: public TaleQuestStep
{
public:
	Class LoadSequencerAnimationStepDesc*              StepDesc                                           // 0x90(0x8)
	Class SequencerCutSceneActor*                      SequencerCutSceneActor                             // 0x98(0x8)
	Class Actor*                                       TargetToSpawnActor                                 // 0xa0(0x8)
};


// Size 0x20
class ParticipantRadiusTrackerStep: public TaleQuestStep
{
public:
	Class ParticipantRadiusTrackerStepDesc*            Desc                                               // 0x90(0x8)
};


// Size 0x30
class PlaySequencerAnimationOnCutsceneActorStep: public TaleQuestStep
{
public:
	Class PlaySequencerAnimationOnCutsceneActorStepDesc* StepDesc                                           // 0x90(0x8)
	Class SequencerCutSceneActor*                      SequencerCutSceneActor                             // 0x98(0x8)
	TArray<Struct SequencerCutSceneActor>              PossessableSequences                               // 0xa0(0x10)
};


// Size 0x38
class PlaySequencerAnimationStep: public TaleQuestStep
{
public:
	Class PlaySequencerAnimationStepDesc*              StepDesc                                           // 0x90(0x8)
	Class SequencerCutSceneActor*                      SequencerCutSceneActor                             // 0x98(0x8)
};


// Size 0x0
class ProvokeHitReactionStep: public TaleQuestStep
{
public:
};


// Size 0x8
class RemoveGameEventExclusionZoneStep: public TaleQuestStep
{
public:
	Class RemoveGameEventExclusionZoneStepDesc*        Desc                                               // 0x90(0x8)
};


// Size 0x8
class SetEQSNamedContextStep: public TaleQuestStep
{
public:
	Class SetEQSNamedContextStepDesc*                  Desc                                               // 0x90(0x8)
};


// Size 0x50
class SpawnPhasedActorWithTransformStep: public TaleQuestStep
{
public:
};


// Size 0x0
class SpawnPhasedItemStep: public TaleQuestStep
{
public:
};


// Size 0x0
class StartSuppressingCutsceneResponsesStep: public TaleQuestStep
{
public:
};


// Size 0x0
class StopSuppressingCutsceneResponsesStep: public TaleQuestStep
{
public:
};


// Size 0x48
class TaleQuestAwaitEventStep: public TaleQuestStep
{
public:
};


// Size 0x68
class TaleQuestChooseIslandFromWeightsStep: public TaleQuestStep
{
public:
	Class IslandTypeWeightsDataAsset*                  IslandTypeWeights                                  // 0xf0(0x8)
};


// Size 0x0
class TaleQuestClearTaleProposalsStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestDisableInteractionStep: public TaleQuestStep
{
public:
};


// Size 0x8
class TaleQuestEmissaryCompanyActionRewardBoostStep: public TaleQuestStep
{
public:
	Class TaleQuestEmissaryCompanyActionRewardBoostStepDesc* Desc                                               // 0x90(0x8)
};


// Size 0x0
class TaleQuestEnableInteractionStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestFireEventStep: public TaleQuestStep
{
public:
};


// Size 0x58
class TaleQuestForEachSequential: public TaleQuestStep
{
public:
	Class TaleQuestForEachStepDescBase*                StepDesc                                           // 0x98(0x8)
	Class TaleQuestStep*                               Body                                               // 0xa0(0x8)
	int                                                CurrentIndex                                       // 0xa8(0x4)
};


// Size 0x0
class TaleQuestGetCollectionItemCountStep: public TaleQuestStep
{
public:
};


// Size 0x30
class TaleQuestGrantRewardStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestPermanentPromptStep: public TaleQuestStep
{
public:
};


// Size 0x40
class TaleQuestSelectEntryFromArrayStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestStructStepBase: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestBreakStructStep: public TaleQuestStructStepBase
{
public:
};


// Size 0x0
class TaleQuestMakeStructStep: public TaleQuestStructStepBase
{
public:
};


// Size 0x0
class TaleQuestUpdateCheckpointStep: public TaleQuestStep
{
public:
};


// Size 0x10
class TaleQuestWaitForHandInStep: public TaleQuestStep
{
public:
	Class TaleQuestWaitForHandInStepDesc*              Desc                                               // 0x90(0x8)
};


// Size 0x8
class TrackResponseCoordinatorStep: public TaleQuestStep
{
public:
	Class TrackResponseCoordinatorStepDesc*            StepDesc                                           // 0x90(0x8)
};


// Size 0xb0
class WaitForItemPickupStep: public TaleQuestStep
{
public:
};


// Size 0x28
class AddGameEventExclusionZoneStepDesc: public TaleQuestStepDesc
{
public:
	float                                              Radius                                             // 0x80(0x4)
	Struct QuestVariableVector                         Location                                           // 0x88(0x20)
};


// Size 0x68
class CallObjectFunctionStepDesc: public TaleQuestStepDesc
{
public:
	Class Object*                                      Target                                             // 0x80(0x8)
	Struct ClassFunctionSelectionType                  Function                                           // 0x88(0x10)
};


// Size 0x20
class DestroySpawnedActorStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          ActorVar                                           // 0x80(0x20)
};


// Size 0x28
class DoEQSQueryStepDesc: public TaleQuestStepDesc
{
public:
	Class EnvQuery*                                    EQSQuery                                           // 0x80(0x8)
	Struct QuestVariableArray                          OutPoints                                          // 0x88(0x20)
};


// Size 0x70
class FindNamedPointStepDescBase: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          ActorToSearch                                      // 0xa0(0x20)
	Struct QuestVariableName                           GroupNamePin                                       // 0xc0(0x20)
	struct FName                                       PointGroupName                                     // 0xe0(0x8)
	byte                                               SearchMethod                                       // 0xe8(0x1)
	byte                                               ReturnInSpace                                      // 0xe9(0x1)
};


// Size 0x20
class FindNamedPointStepDesc: public FindNamedPointStepDescBase
{
public:
	Struct QuestVariableOrientedPoint                  OutputOrientedPoint                                // 0xf0(0x20)
};


// Size 0x20
class FindNamedPointAsVectorStepDesc: public FindNamedPointStepDescBase
{
public:
	Struct QuestVariableVector                         OutputVectorLocation                               // 0xf0(0x20)
};


// Size 0x28
class FindNamedPointAsTransformStepDesc: public FindNamedPointStepDescBase
{
public:
	Struct QuestVariableTransform                      OutputTransform                                    // 0xf0(0x28)
};


// Size 0x68
class GenerateDigLocationInRadiusStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableName                           IslandName                                         // 0x80(0x20)
	Struct QuestVariableVector                         Center                                             // 0xa0(0x20)
	float                                              RadiusInCm                                         // 0xc0(0x4)
	Struct QuestVariableVector                         DigLocation                                        // 0xc8(0x20)
};


// Size 0x30
class InvokeDamageDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          ActorToDamage                                      // 0x80(0x20)
	class                                              DamageType                                         // 0xa0(0x8)
	float                                              DamageAmount                                       // 0xa8(0x4)
	byte                                               DamageReason                                       // 0xac(0x1)
};


// Size 0x28
class LinkEQSContextWithVariableStepDesc: public TaleQuestStepDesc
{
public:
	class                                              Context                                            // 0x80(0x8)
	Struct QuestVariableSetEQSTaleContextValue         Variable                                           // 0x88(0x20)
};


// Size 0x80
class LoadSequencerAnimationStepDesc: public TaleQuestStepDesc
{
public:
	TArray<class LevelSequencesToLoad*>                LevelSequencesToLoad                               // 0x80(0x10)
	Struct QuestVariableActor                          TargetActorToSpawn                                 // 0x90(0x20)
	Struct QuestVariableActor                          LevelSequenceActorSpawnLocation                    // 0xb0(0x20)
	Struct QuestVariableActor                          SequencerCutSceneActor                             // 0xd0(0x20)
	bool                                               AttachToTargetActor                                // 0xf0(0x1)
	struct FName                                       AttachSocketName                                   // 0xf4(0x8)
	bool                                               PlayGlobally                                       // 0xfc(0x1)
};


// Size 0x48
class ParticipantRadiusTrackerStepDesc: public TaleQuestStepDesc
{
public:
	float                                              DurationBetweenChecks                              // 0x80(0x4)
	Struct QuestVariableVector                         Location                                           // 0x88(0x20)
	Struct QuestVariableFloat                          Radius                                             // 0xa8(0x20)
};


// Size 0x0
class WaitUntilAllParticipantsEnterRadiusStep: public ParticipantRadiusTrackerStepDesc
{
public:
};


// Size 0x0
class WaitUntilAllParticipantsLeaveRadiusStep: public ParticipantRadiusTrackerStepDesc
{
public:
};


// Size 0x0
class WaitUntilAnyParticipantEntersRadiusStep: public ParticipantRadiusTrackerStepDesc
{
public:
};


// Size 0xe8
class PlaySequencerAnimationOnCutsceneActorStepDesc: public TaleQuestStepDesc
{
public:
	Class LevelSequence*                               LevelSequence                                      // 0x80(0x8)
	float                                              Delay                                              // 0x88(0x4)
	Struct QuestVariableActor                          DockableBaseActor                                  // 0x90(0x20)
	Struct QuestVariableActor                          SequencerCutSceneActor                             // 0xb0(0x20)
	Struct QuestVariableActor                          ActorToPossess                                     // 0xd0(0x20)
	Struct QuestVariableArray                          AdditionalPossessables                             // 0xf0(0x20)
	Struct QuestVariableActor                          InteractingActor                                   // 0x110(0x20)
	Struct FString                                     PossessableName                                    // 0x130(0x10)
	Class SceneDialogueData*                           DialogueData                                       // 0x140(0x8)
	TArray<Struct FText>                               LocalisableNames                                   // 0x148(0x10)
	bool                                               IsLevelSequenceActorAlwaysRelevant                 // 0x158(0x1)
	bool                                               IsLooping                                          // 0x159(0x1)
	float                                              SubtitleSphereRadiusInCm                           // 0x15c(0x4)
	Class LevelSequence*                               FemaleLevelSequence                                // 0x160(0x8)
};


// Size 0xb8
class PlaySequencerAnimationStepDesc: public TaleQuestStepDesc
{
public:
	Class LevelSequence*                               LevelSequenceToPlay                                // 0x80(0x8)
	Struct QuestVariableActor                          TargetActorToSpawn                                 // 0x88(0x20)
	Struct QuestVariableActor                          LevelSequenceActorSpawnLocation                    // 0xa8(0x20)
	Struct QuestVariableActor                          DockableBaseActor                                  // 0xc8(0x20)
	Struct QuestVariableActor                          InteractingActor                                   // 0xe8(0x20)
	bool                                               PlayGlobally                                       // 0x108(0x1)
	bool                                               IsLevelSequenceActorAlawaysRelevant                // 0x109(0x1)
	Class SceneDialogueData*                           DialogueData                                       // 0x110(0x8)
	TArray<Struct FText>                               LocalisableNames                                   // 0x118(0x10)
	bool                                               IsLooping                                          // 0x128(0x1)
	float                                              SubtitleSphereRadiusInCm                           // 0x12c(0x4)
	Class LevelSequence*                               FemaleLevelSequenceToPlay                          // 0x130(0x8)
};


// Size 0x30
class ProvokeHitReactionDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          ActorToProvoke                                     // 0x80(0x20)
	class                                              DamageType                                         // 0xa0(0x8)
	float                                              DamageAmount                                       // 0xa8(0x4)
	byte                                               DamageReason                                       // 0xac(0x1)
};


// Size 0x28
class RemoveGameEventExclusionZoneStepDesc: public TaleQuestStepDesc
{
public:
	float                                              Radius                                             // 0x80(0x4)
	Struct QuestVariableVector                         Location                                           // 0x88(0x20)
};


// Size 0x28
class SetEQSNamedContextStepDesc: public TaleQuestStepDesc
{
public:
	struct FName                                       Name                                               // 0x80(0x8)
	Struct QuestVariableLinkEQSContext                 Value                                              // 0x88(0x20)
};


// Size 0x80
class SpawnPhasedActorWithTransformStepBaseDesc: public TaleQuestStepDesc
{
public:
	bool                                               MarkAsCritical                                     // 0xa0(0x1)
	Struct FText                                       CriticalActorLostMessage                           // 0xa8(0x38)
	Struct QuestVariableActor                          ActorVar                                           // 0xe0(0x20)
};


// Size 0x28
class SpawnPhasedActorAtLocationStepDesc: public SpawnPhasedActorWithTransformStepBaseDesc
{
public:
	Struct QuestVariableTransform                      Location                                           // 0x100(0x28)
};


// Size 0xa8
class SpawnPhasedItemStepDesc: public TaleQuestStepDesc
{
public:
	bool                                               TrackItem                                          // 0x80(0x1)
	bool                                               MarkItemAsCritical                                 // 0x81(0x1)
	Struct FText                                       CriticalActorLostMessage                           // 0x88(0x38)
	struct FName                                       SocketName                                         // 0xc0(0x8)
	Struct QuestVariableItemDescType                   Item                                               // 0xc8(0x20)
	Struct QuestVariableActor                          LocatorVar                                         // 0xe8(0x20)
	Struct QuestVariableItemInfo                       SpawnedItemVar                                     // 0x108(0x20)
};


// Size 0x0
class StartSuppressingCutsceneResponsesStepDesc: public TaleQuestStepDesc
{
public:
};


// Size 0x0
class StopSuppressingCutsceneResponsesStepDesc: public TaleQuestStepDesc
{
public:
};


// Size 0x68
class TaleQuestChooseIslandFromWeightsStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableNameArray                      IslandsToChooseFrom                                // 0x80(0x20)
	Struct QuestVariableInt                            DifficultyRank                                     // 0xa0(0x20)
	Struct QuestVariableName                           ChosenIsland                                       // 0xc0(0x20)
	Class IslandTypeWeightsDataAsset*                  IslandTypeWeights                                  // 0xe0(0x8)
};


// Size 0x8
class TaleQuestClearTaleProposalsStepDesc: public TaleQuestStepDesc
{
public:
	struct FName                                       CampaignId                                         // 0x80(0x8)
};


// Size 0x20
class TaleQuestDisableInteractionStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          TargetActor                                        // 0x80(0x20)
};


// Size 0x8
class TaleQuestEmissaryCompanyActionRewardBoostStepDesc: public TaleQuestStepDesc
{
public:
	byte                                               CompanyActionType                                  // 0x80(0x1)
};


// Size 0x20
class TaleQuestEnableInteractionStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          TargetActor                                        // 0x80(0x20)
};


// Size 0x60
class TaleQuestEventStepDescBase: public TaleQuestStepDesc
{
public:
	Class Object*                                      Dispatcher                                         // 0x80(0x8)
	Struct NativeAndUserDefinedStructSelector          EventType                                          // 0x88(0x8)
};


// Size 0x0
class TaleQuestAwaitEventStepDesc: public TaleQuestEventStepDescBase
{
public:
};


// Size 0x0
class TaleQuestFireEventStepDesc: public TaleQuestEventStepDescBase
{
public:
};


// Size 0x20
class TaleQuestForEachStepDescBase: public TaleQuestStepDesc
{
public:
	struct FName                                       Collection                                         // 0x80(0x8)
	Class TaleQuestStepDesc*                           Body                                               // 0x88(0x8)
	struct FName                                       KeyPinName                                         // 0x90(0x8)
	struct FName                                       ItemPinName                                        // 0x98(0x8)
};


// Size 0x0
class TaleQuestForEachSequentialDesc: public TaleQuestForEachStepDescBase
{
public:
};


// Size 0x40
class TaleQuestGetCollectionItemCountStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableCollection                     Collection                                         // 0x80(0x20)
	Struct QuestVariableInt                            Num                                                // 0xa0(0x20)
};


// Size 0x30
class TaleQuestGrantRewardStepDesc: public TaleQuestStepDesc
{
public:
	Struct RewardId                                    RewardId                                           // 0x80(0x8)
	class                                              Company                                            // 0x88(0x8)
	Struct Guid                                        Id                                                 // 0x90(0x10)
	bool                                               ShouldGrantToAlliedCrews                           // 0xa0(0x1)
	struct FName                                       Feature                                            // 0xa4(0x8)
};


// Size 0x28
class TaleQuestPermanentPromptStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariablePrioritisedPrompt              Prompt                                             // 0x80(0x20)
	byte                                               StartOrStop                                        // 0xa0(0x1)
};


// Size 0x48
class TaleQuestSelectEntryFromArrayStepDesc: public TaleQuestStepDesc
{
public:
	Class TaleQuestArrayEntrySelectionStrategy*        SelectionStrategy                                  // 0x80(0x8)
	Struct QuestVariableArray                          InputArray                                         // 0x88(0x20)
	Struct QuestVariableAny                            OutputEntry                                        // 0xa8(0x20)
};


// Size 0x58
class TaleQuestStructStepDescBase: public TaleQuestStepDesc
{
public:
	Class ScriptStruct*                                Struct                                             // 0x80(0x8)
};


// Size 0x0
class TaleQuestBreakStructStepDesc: public TaleQuestStructStepDescBase
{
public:
};


// Size 0x0
class TaleQuestMakeStructStepDesc: public TaleQuestStructStepDescBase
{
public:
};


// Size 0x18
class TaleQuestUpdateCheckpointStepDesc: public TaleQuestStepDesc
{
public:
	Struct RewardId                                    RewardIdToAward                                    // 0x80(0x8)
	struct FName                                       CampaignIdToRemove                                 // 0x88(0x8)
	struct FName                                       Feature                                            // 0x90(0x8)
};


// Size 0x48
class TaleQuestWaitForHandInStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          HandInActor                                        // 0x80(0x20)
	class                                              SpecificItem                                       // 0xa0(0x8)
	Struct QuestVariableItemDescType                   HandInItem                                         // 0xa8(0x20)
};


// Size 0x20
class TrackResponseCoordinatorStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableUObject                        CutsceneResponseCoordinator                        // 0x80(0x20)
};


// Size 0x40
class WaitForItemPickupStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                          Item                                               // 0x80(0x20)
	Struct QuestVariableActor                          PickerUpper                                        // 0xa0(0x20)
};


// Size 0x178
class TaleQuestSelectShipwreckLocationFromValidCandidatesStep: public TaleQuestStep
{
public:
	Class TaleQuestSelectorService*                    CachedSelectorService                              // 0xe8(0x8)
};


// Size 0x68
class TaleQuestSelectShipwreckLocationFromValidCandidatesStepDesc: public TaleQuestStepDesc
{
public:
	Class TaleQuestArrayEntrySelectionStrategy*        SelectionStrategy                                  // 0x80(0x8)
	Struct QuestVariableVectorArray                    InputArray                                         // 0x88(0x20)
	Struct QuestVariableVector                         OutputEntry                                        // 0xa8(0x20)
	Struct QuestVariableBool                           ShuffleLists                                       // 0xc8(0x20)
};


// Size 0x10
class RemoveFlameOfFateTypeStepDesc: public TaleQuestStepDesc
{
public:
	byte                                               FlameOfFateTypeToRemove                            // 0x80(0x1)
	class                                              LanternItemCategory                                // 0x88(0x8)
};


// Size 0x60
class TaleQuestFlameOfFateService: public TaleQuestService
{
public:
	Class TaleQuestFlameOfFateServiceDesc*             ServiceDesc                                        // 0x60(0x8)
};


// Size 0x10
class TaleQuestFlameOfFateServiceDesc: public TaleQuestServiceDesc
{
public:
	class                                              LanternItemCategory                                // 0x28(0x8)
	byte                                               FlameOfFateTypeToSet                               // 0x30(0x1)
	bool                                               SetFlameOnStart                                    // 0x31(0x1)
};


// Size 0x0
class TaleQuestAddBountyMapStep: public TaleQuestStep
{
public:
};


// Size 0xb8
class TaleQuestAddBountyMapStepDesc: public TaleQuestStepDesc
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableName                           IslandName                                         // 0x88(0x20)
	Struct QuestVariableText                           Location                                           // 0xa8(0x20)
	Struct QuestVariableTextArray                      Description                                        // 0xc8(0x20)
	Struct QuestVariableBountyTargetArray              CaptainTargets                                     // 0xe8(0x20)
	Struct QuestVariableBountyTargetArray              CrewTargets                                        // 0x108(0x20)
	Class BountyMapLayout*                             CustomLayout                                       // 0x128(0x8)
	class                                              OverrideTreasureMapItemDesc                        // 0x130(0x8)
};


// Size 0x0
class TaleQuestAddCargoRunMapStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestAddChecklistMapStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestAddCircleMapStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestAddMerchantMapStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestAddRiddleMapStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestAddXMarksMapStep: public TaleQuestStep
{
public:
};


// Size 0x0
class TaleQuestAdvanceRiddleMapStep: public TaleQuestStep
{
public:
};


// Size 0xa0
class TaleQuestMapService: public TaleQuestService
{
public:
};


// Size 0x0
class TaleQuestMapServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x70
class TaleQuestAddCargoRunMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableName                           IslandName                                         // 0x88(0x20)
	Struct QuestVariableInt                            NumItems                                           // 0xa8(0x20)
	Struct QuestVariableGuid                           NPCId                                              // 0xc8(0x20)
	Class CargoRunMapLayout*                           Layout                                             // 0xe8(0x8)
};


// Size 0xb0
class TaleQuestAddChecklistMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableText                           Title                                              // 0x88(0x20)
	Struct QuestVariableText                           Description                                        // 0xa8(0x20)
	Struct QuestVariableDataAsset                      ChecklistItemsData                                 // 0xc8(0x20)
	Struct QuestVariableText                           Afternote                                          // 0xe8(0x20)
	Struct QuestVariableDataAsset                      Layout                                             // 0x108(0x20)
	byte                                               RadialMiniIcon                                     // 0x128(0x1)
};


// Size 0x50
class TaleQuestAddCircleMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableName                           IslandName                                         // 0x88(0x20)
	Struct QuestVariableVector                         Location                                           // 0xa8(0x20)
	float                                              CircleScale                                        // 0xc8(0x4)
	byte                                               RadialMiniIcon                                     // 0xcc(0x1)
};


// Size 0x90
class TaleQuestAddMerchantMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableName                           IslandName                                         // 0x88(0x20)
	Struct QuestVariableText                           DeliveryLocation                                   // 0xa8(0x20)
	Struct QuestVariableText                           DeliverByTime                                      // 0xc8(0x20)
	Struct QuestVariableMerchantItemArray              Items                                              // 0xe8(0x20)
	Class MerchantMapLayout*                           Layout                                             // 0x108(0x8)
};


// Size 0x28
class TaleQuestAddRiddleMapBaseStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableName                           IslandName                                         // 0x88(0x20)
};


// Size 0x10
class TaleQuestAddRiddleMapStepDesc: public TaleQuestAddRiddleMapBaseStepDesc
{
public:
	TArray<Text None>                                  Text                                               // 0xa8(0x10)
};


// Size 0x20
class TaleQuestAddRiddleMapUsingVariableStepDesc: public TaleQuestAddRiddleMapBaseStepDesc
{
public:
	Struct QuestVariableTextArray                      TextVariable                                       // 0xa8(0x20)
};


// Size 0x48
class TaleQuestAddXMarksMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableName                           IslandName                                         // 0x88(0x20)
	Struct QuestVariableVector                         Location                                           // 0xa8(0x20)
};


// Size 0x8
class TaleQuestAdvanceRiddleMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
};


// Size 0x8
class TaleQuestRemoveMapStep: public TaleQuestStep
{
public:
	Class TaleQuestRemoveMapStepDesc*                  StepDesc                                           // 0x90(0x8)
};


// Size 0x28
class TaleQuestRemoveMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableVector                         Location                                           // 0x88(0x20)
};


// Size 0x8
class TaleQuestUpdateMerchantMapStep: public TaleQuestStep
{
public:
	Class TaleQuestUpdateMerchantMapStepDesc*          Desc                                               // 0x90(0x8)
};


// Size 0x48
class TaleQuestUpdateMerchantMapStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
	Struct QuestVariableMerchantItem                   Item                                               // 0x88(0x20)
	Struct QuestVariableInt                            Index                                              // 0xa8(0x20)
};


// Size 0x8
class TaleQuestWaitForChecklistMapCompletionStepDesc: public TaleQuestMapStepDescBase
{
public:
	struct FName                                       MapId                                              // 0x80(0x8)
};


}