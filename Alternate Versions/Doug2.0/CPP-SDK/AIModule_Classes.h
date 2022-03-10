namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class BTNode: public Object
{
public:
	Struct FString                                     NodeName                                           // 0x30(0x10)
	Class BehaviorTree*                                TreeAsset                                          // 0x40(0x8)
	Class BTCompositeNode*                             ParentNode                                         // 0x48(0x8)
};


// Size 0x8
class BTAuxiliaryNode: public BTNode
{
public:
};


// Size 0x8
class BTDecorator: public BTAuxiliaryNode
{
public:
	bool                                               bInverseCondition                                  // 0x60(0x1)
	byte                                               FlowAbortMode                                      // 0x64(0x1)
};


// Size 0x28
class BTDecorator_BlackboardBase: public BTDecorator
{
public:
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0x68(0x28)
};


// Size 0x10
class BTService: public BTAuxiliaryNode
{
public:
	float                                              Interval                                           // 0x60(0x4)
	float                                              RandomDeviation                                    // 0x64(0x4)
	bool                                               bCallTickOnSearchStart                             // 0x68(0x1)
	bool                                               bRestartTimerOnEachActivation                      // 0x68(0x1)
};


// Size 0x8
class BTTaskNode: public BTNode
{
public:
};


// Size 0x28
class BTTask_BlackboardBase: public BTTaskNode
{
public:
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0x60(0x28)
};


// Size 0x20
class BTTask_RunEQSQuery: public BTTask_BlackboardBase
{
public:
	Class EnvQuery*                                    QueryTemplate                                      // 0x88(0x8)
	TArray<Struct QueryTemplate>                       QueryParams                                        // 0x90(0x10)
	byte                                               RunMode                                            // 0xa0(0x1)
};


// Size 0x8
class BTTask_RotateToFaceBBEntry: public BTTask_BlackboardBase
{
public:
	float                                              Precision                                          // 0x88(0x4)
};


// Size 0x0
class EnvQueryContext: public Object
{
public:
};


// Size 0x8
class EnvQueryNode: public Object
{
public:
	int                                                VerNum                                             // 0x28(0x4)
};


// Size 0x20
class EnvQueryGenerator: public EnvQueryNode
{
public:
	Struct FString                                     OptionName                                         // 0x30(0x10)
	bool                                               NonShippingOnly                                    // 0x40(0x1)
	class                                              ItemType                                           // 0x48(0x8)
};


// Size 0x140
class EnvQueryTest: public EnvQueryNode
{
public:
	int                                                TestOrder                                          // 0x30(0x4)
	byte                                               TestPurpose                                        // 0x34(0x1)
	byte                                               MultipleContextFilterOp                            // 0x35(0x1)
	byte                                               MultipleContextScoreOp                             // 0x36(0x1)
	byte                                               FilterType                                         // 0x37(0x1)
	Struct AIDataProviderBoolValue                     BoolValue                                          // 0x38(0x30)
	Struct AIDataProviderFloatValue                    FloatValueMin                                      // 0x68(0x30)
	Struct AIDataProviderFloatValue                    FloatValueMax                                      // 0x98(0x30)
	byte                                               ScoringEquation                                    // 0xc9(0x1)
	byte                                               ClampMinType                                       // 0xca(0x1)
	byte                                               ClampMaxType                                       // 0xcb(0x1)
	Struct AIDataProviderFloatValue                    ScoreClampMin                                      // 0xd0(0x30)
	Struct AIDataProviderFloatValue                    ScoreClampMax                                      // 0x100(0x30)
	Struct AIDataProviderFloatValue                    ScoringFactor                                      // 0x130(0x30)
	bool                                               bWorkOnFloatValues                                 // 0x168(0x1)
};


// Size 0x0
class AIResourceInterface: public Interface
{
public:
};


// Size 0x1f0
class PathFollowingComponent: public ActorComponent
{
public:
	Class NavMovementComponent*                        MovementComp                                       // 0x120(0x8)
	Class NavigationData*                              MyNavData                                          // 0x130(0x8)
	bool                                               bUseVisibilityTestsSimplification                  // 0x1f4(0x1)
};


// Size 0x38
class AIAsyncTaskBlueprintProxy: public Object
{
public:
};


// Size 0x0
class AIBlueprintHelperLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x38
class PawnActionsComponent: public ActorComponent
{
public:
	Class Pawn*                                        ControlledPawn                                     // 0xc8(0x8)
	TArray<Struct ControlledPawn>                      ActionStacks                                       // 0xd0(0x10)
	TArray<Struct ActionStacks>                        ActionEvents                                       // 0xe0(0x10)
	Class PawnAction*                                  CurrentAction                                      // 0xf0(0x8)
};


// Size 0x0
class AIPerceptionListenerInterface: public Interface
{
public:
};


// Size 0x8
class BlackboardKeyType: public Object
{
public:
};


// Size 0x0
class BehaviorTreeTypes: public Object
{
public:
};


// Size 0x0
class GenericTeamAgentInterface: public Interface
{
public:
};


// Size 0x90
class AIController: public Controller
{
public:
	bool                                               bLOSflag                                           // 0x458(0x1)
	bool                                               bSkipExtraLOSChecks                                // 0x458(0x1)
	bool                                               bAllowStrafe                                       // 0x458(0x1)
	bool                                               bWantsPlayerState                                  // 0x458(0x1)
	bool                                               bDisableControlRotation                            // 0x458(0x1)
	Class PathFollowingComponent*                      PathFollowingComponent                             // 0x460(0x8)
	Class BrainComponent*                              BrainComponent                                     // 0x468(0x8)
	Class AIPerceptionComponent*                       PerceptionComponent                                // 0x470(0x8)
	Class PawnActionsComponent*                        ActionsComp                                        // 0x478(0x8)
	Class BlackboardComponent*                         Blackboard                                         // 0x480(0x8)
	Class GameplayTasksComponent*                      CachedGameplayTasksComponent                       // 0x488(0x8)
};


// Size 0x0
class DetourCrowdAIController: public AIController
{
public:
};


// Size 0x0
class AIDataProvider: public Object
{
public:
};


// Size 0x0
class CustomDataProviderObject: public Object
{
public:
};


// Size 0x20
class AIDataProvider_QueryParamFromCustomObjectProperty: public AIDataProvider
{
public:
	Struct CustomDataProviderObjectPropertySelector    ObjectProperty                                     // 0x28(0x10)
	float                                              FloatValue                                         // 0x38(0x4)
	int                                                IntValue                                           // 0x3c(0x4)
	bool                                               BoolValue                                          // 0x40(0x1)
};


// Size 0x18
class AIDataProvider_QueryParams: public AIDataProvider
{
public:
	struct FName                                       ParamName                                          // 0x28(0x8)
	float                                              FloatValue                                         // 0x30(0x4)
	int                                                IntValue                                           // 0x34(0x4)
	bool                                               BoolValue                                          // 0x38(0x1)
};


// Size 0x0
class AIHotSpotManager: public Object
{
public:
};


// Size 0xb0
class AISystem: public AISystemBase
{
public:
	Struct StringClassReference                        PerceptionSystemClassName                          // 0x40(0x10)
	Struct StringClassReference                        HotSpotManagerClassName                            // 0x50(0x10)
	float                                              AcceptanceRadius                                   // 0x60(0x4)
	bool                                               bFinishMoveOnGoalOverlap                           // 0x64(0x1)
	bool                                               bAcceptPartialPaths                                // 0x65(0x1)
	bool                                               bAllowStrafing                                     // 0x66(0x1)
	bool                                               bEnableBTAITasks                                   // 0x67(0x1)
	Class BehaviorTreeManager*                         BehaviorTreeManager                                // 0x68(0x8)
	Class EnvQueryManager*                             EnvironmentQueryManager                            // 0x70(0x8)
	Class AIPerceptionSystem*                          PerceptionSystem                                   // 0x78(0x8)
	TArray<class AllProxyObjects*>                     AllProxyObjects                                    // 0x80(0x10)
	Class AIHotSpotManager*                            HotSpotManager                                     // 0x90(0x8)
};


// Size 0x60
class AISense: public Object
{
public:
	Struct Color                                       DebugDrawColor                                     // 0x28(0x4)
	Struct FString                                     DebugName                                          // 0x30(0x10)
	float                                              DefaultExpirationAge                               // 0x40(0x4)
	byte                                               NotifyType                                         // 0x44(0x1)
	bool                                               bWantsNewPawnNotification                          // 0x48(0x1)
	bool                                               bAutoRegisterAllPawnsAsSources                     // 0x48(0x1)
	Class AIPerceptionSystem*                          PerceptionSystemInstance                           // 0x50(0x8)
};


// Size 0x100
class AIPerceptionSystem: public Object
{
public:
	TArray<class Senses*>                              Senses                                             // 0x80(0x10)
	float                                              PerceptionAgingRate                                // 0x90(0x4)
};


// Size 0x100
class AIPerceptionComponent: public ActorComponent
{
public:
	float                                              HearingRange                                       // 0xc8(0x4)
	float                                              LoSHearingRange                                    // 0xcc(0x4)
	float                                              SightRadius                                        // 0xd0(0x4)
	float                                              LoseSightRadius                                    // 0xd4(0x4)
	float                                              PeripheralVisionAngle                              // 0xd8(0x4)
	TArray<class SensesConfig*>                        SensesConfig                                       // 0xe0(0x10)
	class                                              DominantSense                                      // 0xf0(0x8)
	Class AIController*                                AIOwner                                            // 0x108(0x8)
};


// Size 0x18
class AIPerceptionStimuliSourceComponent: public ActorComponent
{
public:
	bool                                               bAutoRegisterAsSource                              // 0xc8(0x1)
	TArray<Class bAutoRegisterAsSource>                RegisterAsSourceForSenses                          // 0xd0(0x10)
};


// Size 0x0
class AIResource_Movement: public GameplayTaskResource
{
public:
};


// Size 0x0
class AIResource_Logic: public GameplayTaskResource
{
public:
};


// Size 0x28
class AISense_Blueprint: public AISense
{
public:
	class                                              ListenerDataType                                   // 0x88(0x8)
	TArray<class ListenerContainer*>                   ListenerContainer                                  // 0x90(0x10)
	TArray<class UnprocessedEvents*>                   UnprocessedEvents                                  // 0xa0(0x10)
};


// Size 0x10
class AISense_Damage: public AISense
{
public:
	TArray<Struct ReportNoiseEvent>                    RegisteredEvents                                   // 0x88(0x10)
};


// Size 0x98
class AISense_Hearing: public AISense
{
public:
	int                                                MaxNoisesPerTick                                   // 0x88(0x4)
	int                                                MaxNoisesStored                                    // 0x8c(0x4)
	TArray<Struct MaxNoisesStored>                     NoiseEventsArrayA                                  // 0x98(0x10)
	TArray<Struct NoiseEventsArrayA>                   NoiseEventsArrayB                                  // 0xa8(0x10)
	float                                              SpeedOfSoundSq                                     // 0xc8(0x4)
};


// Size 0x10
class AISense_Prediction: public AISense
{
public:
	TArray<Struct SightLimitQueryImportance>           RegisteredEvents                                   // 0x88(0x10)
};


// Size 0xc8
class AISense_Sight: public AISense
{
public:
	int                                                MaxTracesPerTick                                   // 0x138(0x4)
	float                                              HighImportanceQueryDistanceThreshold               // 0x13c(0x4)
	float                                              MaxQueryImportance                                 // 0x144(0x4)
	float                                              SightLimitQueryImportance                          // 0x148(0x4)
};


// Size 0x10
class AISense_Team: public AISense
{
public:
	TArray<Struct RegisteredEvents>                    RegisteredEvents                                   // 0x88(0x10)
};


// Size 0x10
class AISense_Touch: public AISense
{
public:
	TArray<Struct Guid>                                RegisteredEvents                                   // 0x88(0x10)
};


// Size 0x0
class AISenseBlueprintListener: public UserDefinedStruct
{
public:
};


// Size 0x8
class AISenseConfig: public Object
{
public:
	float                                              MaxAge                                             // 0x28(0x4)
	bool                                               bStartsEnabled                                     // 0x2c(0x1)
};


// Size 0x8
class AISenseConfig_Blueprint: public AISenseConfig
{
public:
	class                                              Implementation                                     // 0x30(0x8)
};


// Size 0x8
class AISenseConfig_Damage: public AISenseConfig
{
public:
	class                                              Implementation                                     // 0x30(0x8)
};


// Size 0x18
class AISenseConfig_Hearing: public AISenseConfig
{
public:
	class                                              Implementation                                     // 0x30(0x8)
	float                                              HearingRange                                       // 0x38(0x4)
	float                                              LoSHearingRange                                    // 0x3c(0x4)
	bool                                               bUseLoSHearing                                     // 0x40(0x1)
	Struct AISenseAffiliationFilter                    DetectionByAffiliation                             // 0x44(0x4)
};


// Size 0x0
class AISenseConfig_Prediction: public AISenseConfig
{
public:
};


// Size 0x20
class AISenseConfig_Sight: public AISenseConfig
{
public:
	class                                              Implementation                                     // 0x30(0x8)
	float                                              SightRadius                                        // 0x38(0x4)
	float                                              LoseSightRadius                                    // 0x3c(0x4)
	float                                              PeripheralVisionAngleDegrees                       // 0x40(0x4)
	Struct AISenseAffiliationFilter                    DetectionByAffiliation                             // 0x44(0x4)
	float                                              AutoSuccessRangeFromLastSeenLocation               // 0x48(0x4)
};


// Size 0x0
class AISenseConfig_Team: public AISenseConfig
{
public:
};


// Size 0x0
class AISenseConfig_Touch: public AISenseConfig
{
public:
};


// Size 0x0
class AISenseEvent: public Object
{
public:
};


// Size 0x30
class AISenseEvent_Damage: public AISenseEvent
{
public:
	Struct AIDamageEvent                               Event                                              // 0x28(0x30)
};


// Size 0x30
class AISenseEvent_Hearing: public AISenseEvent
{
public:
	Struct AINoiseEvent                                Event                                              // 0x28(0x30)
};


// Size 0x0
class AISightTargetInterface: public Interface
{
public:
};


// Size 0x8
class AITask: public GameplayTask
{
public:
	Class AIController*                                OwnerController                                    // 0x58(0x8)
};


// Size 0x50
class AITask_MoveTo: public AITask
{
public:
	Struct Vector                                      MoveGoalLocation                                   // 0x80(0xc)
	Class Actor*                                       MoveGoalActor                                      // 0x98(0x8)
	float                                              MoveAcceptanceRadius                               // 0xa0(0x4)
	bool                                               bShouldStopOnOverlap                               // 0xa4(0x1)
	bool                                               bShouldAcceptPartialPath                           // 0xa5(0x1)
	bool                                               bShouldUsePathfinding                              // 0xa6(0x1)
};


// Size 0x60
class BrainComponent: public ActorComponent
{
public:
	Class BlackboardComponent*                         BlackboardComp                                     // 0xd0(0x8)
	Class AIController*                                AIOwner                                            // 0xd8(0x8)
};


// Size 0x160
class BehaviorTreeComponent: public BrainComponent
{
public:
	TArray<class NodeInstances*>                       NodeInstances                                      // 0x148(0x10)
};


// Size 0x30
class BTCompositeNode: public BTNode
{
public:
	TArray<Struct RootDecoratorOps>                    Children                                           // 0x58(0x10)
	TArray<class Services*>                            Services                                           // 0x68(0x10)
};


// Size 0x38
class BehaviorTree: public Object
{
public:
	Class BTCompositeNode*                             RootNode                                           // 0x28(0x8)
	Class BlackboardData*                              BlackboardAsset                                    // 0x30(0x8)
	TArray<class RootDecorators*>                      RootDecorators                                     // 0x38(0x10)
	TArray<Struct RootDecorators>                      RootDecoratorOps                                   // 0x48(0x10)
};


// Size 0x28
class BehaviorTreeManager: public Object
{
public:
	int                                                MaxDebuggerSteps                                   // 0x28(0x4)
	TArray<Struct MaxDebuggerSteps>                    LoadedTemplates                                    // 0x30(0x10)
	TArray<class ActiveComponents*>                    ActiveComponents                                   // 0x40(0x10)
};


// Size 0x20
class BlackboardKeyType_Enum: public BlackboardKeyType
{
public:
	Class Enum*                                        EnumType                                           // 0x30(0x8)
	Struct FString                                     EnumName                                           // 0x38(0x10)
	bool                                               bIsEnumNameValid                                   // 0x48(0x1)
};


// Size 0x18
class BlackboardKeyType_NativeEnum: public BlackboardKeyType
{
public:
	Struct FString                                     EnumName                                           // 0x30(0x10)
	Class Enum*                                        EnumType                                           // 0x40(0x8)
};


// Size 0x20
class BlackboardData: public DataAsset
{
public:
	Class BlackboardData*                              Parent                                             // 0x28(0x8)
	TArray<Struct Parent>                              Keys                                               // 0x30(0x10)
	bool                                               bHasSynchronizedKeys                               // 0x40(0x1)
};


// Size 0x148
class BlackboardComponent: public ActorComponent
{
public:
	Class BrainComponent*                              BrainComp                                          // 0xc8(0x8)
	Class BlackboardData*                              BlackboardAsset                                    // 0xd0(0x8)
	TArray<class KeyInstances*>                        KeyInstances                                       // 0xf8(0x10)
};


// Size 0x0
class BlackboardKeyType_Bool: public BlackboardKeyType
{
public:
};


// Size 0x8
class BlackboardKeyType_Class: public BlackboardKeyType
{
public:
	class                                              BaseClass                                          // 0x30(0x8)
};


// Size 0x0
class BlackboardKeyType_Float: public BlackboardKeyType
{
public:
};


// Size 0x0
class BlackboardKeyType_Int: public BlackboardKeyType
{
public:
};


// Size 0x0
class BlackboardKeyType_Name: public BlackboardKeyType
{
public:
};


// Size 0x8
class BlackboardKeyType_Object: public BlackboardKeyType
{
public:
	class                                              BaseClass                                          // 0x30(0x8)
};


// Size 0x0
class BlackboardKeyType_Rotator: public BlackboardKeyType
{
public:
};


// Size 0x10
class BlackboardKeyType_String: public BlackboardKeyType
{
public:
	Struct FString                                     StringValue                                        // 0x30(0x10)
};


// Size 0x0
class BlackboardKeyType_Vector: public BlackboardKeyType
{
public:
};


// Size 0x0
class BTFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x30
class BTDecorator_Blackboard: public BTDecorator_BlackboardBase
{
public:
	int                                                IntValue                                           // 0x90(0x4)
	float                                              FloatValue                                         // 0x94(0x4)
	Struct FString                                     StringValue                                        // 0x98(0x10)
	Struct FString                                     CachedDescription                                  // 0xa8(0x10)
	byte                                               OperationType                                      // 0xb8(0x1)
	byte                                               NotifyObserver                                     // 0xb9(0x1)
};


// Size 0x0
class BTDecorator_ConditionalLoop: public BTDecorator_Blackboard
{
public:
};


// Size 0x8
class BTDecorator_IsAtLocation: public BTDecorator_BlackboardBase
{
public:
	float                                              AcceptableRadius                                   // 0x90(0x4)
	bool                                               bUseNavAgentGoalLocation                           // 0x94(0x1)
};


// Size 0x8
class BTDecorator_IsBBEntryOfClass: public BTDecorator_BlackboardBase
{
public:
	class                                              TestClass                                          // 0x90(0x8)
};


// Size 0x38
class BTDecorator_BlueprintBase: public BTDecorator
{
public:
	Class AIController*                                AIOwner                                            // 0x68(0x8)
	Class Actor*                                       ActorOwner                                         // 0x70(0x8)
	TArray<Struct FName>                               ObservedKeyNames                                   // 0x78(0x10)
	bool                                               bShowPropertyDetails                               // 0x98(0x1)
	bool                                               bCheckConditionOnlyBlackBoardChanges               // 0x98(0x1)
	bool                                               bIsObservingBB                                     // 0x98(0x1)
};


// Size 0x68
class BTDecorator_CheckGameplayTagsOnActor: public BTDecorator
{
public:
	Struct BlackboardKeySelector                       ActorToCheck                                       // 0x68(0x28)
	byte                                               TagsToMatch                                        // 0x90(0x1)
	Struct GameplayTagContainer                        GameplayTags                                       // 0x98(0x28)
	Struct FString                                     CachedDescription                                  // 0xc0(0x10)
};


// Size 0x58
class BTDecorator_CompareBBEntries: public BTDecorator
{
public:
	byte                                               Operator                                           // 0x68(0x1)
	Struct BlackboardKeySelector                       BlackboardKeyA                                     // 0x70(0x28)
	Struct BlackboardKeySelector                       BlackboardKeyB                                     // 0x98(0x28)
};


// Size 0x88
class BTDecorator_ConeCheck: public BTDecorator
{
public:
	float                                              ConeHalfAngle                                      // 0x68(0x4)
	Struct BlackboardKeySelector                       ConeOrigin                                         // 0x70(0x28)
	Struct BlackboardKeySelector                       ConeDirection                                      // 0x98(0x28)
	Struct BlackboardKeySelector                       Observed                                           // 0xc0(0x28)
};


// Size 0x8
class BTDecorator_Cooldown: public BTDecorator
{
public:
	float                                              CoolDownTime                                       // 0x68(0x4)
};


// Size 0x60
class BTDecorator_DoesPathExist: public BTDecorator
{
public:
	Struct BlackboardKeySelector                       BlackboardKeyA                                     // 0x68(0x28)
	Struct BlackboardKeySelector                       BlackboardKeyB                                     // 0x90(0x28)
	bool                                               bUseSelf                                           // 0xb8(0x1)
	byte                                               PathQueryType                                      // 0xbc(0x1)
	class                                              FilterClass                                        // 0xc0(0x8)
};


// Size 0x0
class BTDecorator_ForceSuccess: public BTDecorator
{
public:
};


// Size 0x60
class BTDecorator_KeepInCone: public BTDecorator
{
public:
	float                                              ConeHalfAngle                                      // 0x68(0x4)
	Struct BlackboardKeySelector                       ConeOrigin                                         // 0x70(0x28)
	Struct BlackboardKeySelector                       Observed                                           // 0x98(0x28)
	bool                                               bUseSelfAsOrigin                                   // 0xc0(0x1)
	bool                                               bUseSelfAsObserved                                 // 0xc0(0x1)
};


// Size 0x8
class BTDecorator_Loop: public BTDecorator
{
public:
	int                                                NumLoops                                           // 0x68(0x4)
	bool                                               bInfiniteLoop                                      // 0x6c(0x1)
};


// Size 0x0
class BTDecorator_ReachedMoveGoal: public BTDecorator
{
public:
};


// Size 0x10
class BTDecorator_SetTagCooldown: public BTDecorator
{
public:
	Struct GameplayTag                                 CooldownTag                                        // 0x68(0x8)
	float                                              CoolDownDuration                                   // 0x70(0x4)
	bool                                               bAddToExistingDuration                             // 0x74(0x1)
};


// Size 0x10
class BTDecorator_TagCooldown: public BTDecorator
{
public:
	Struct GameplayTag                                 CooldownTag                                        // 0x68(0x8)
	float                                              CoolDownDuration                                   // 0x70(0x4)
	bool                                               bAddToExistingDuration                             // 0x74(0x1)
	bool                                               bActivatesCooldown                                 // 0x75(0x1)
};


// Size 0x8
class BTDecorator_TimeLimit: public BTDecorator
{
public:
	float                                              TimeLimit                                          // 0x68(0x4)
};


// Size 0x28
class BTService_BlackboardBase: public BTService
{
public:
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0x70(0x28)
};


// Size 0x8
class BTService_DefaultFocus: public BTService_BlackboardBase
{
public:
	byte                                               FocusPriority                                      // 0x98(0x1)
};


// Size 0x28
class BTService_BlueprintBase: public BTService
{
public:
	Class AIController*                                AIOwner                                            // 0x70(0x8)
	Class Actor*                                       ActorOwner                                         // 0x78(0x8)
	bool                                               bShowPropertyDetails                               // 0x90(0x1)
	bool                                               bShowEventDetails                                  // 0x90(0x1)
};


// Size 0x0
class BTComposite_Selector: public BTCompositeNode
{
public:
};


// Size 0x0
class BTComposite_Sequence: public BTCompositeNode
{
public:
};


// Size 0x8
class BTComposite_SimpleParallel: public BTCompositeNode
{
public:
	byte                                               FinishMode                                         // 0x88(0x1)
};


// Size 0x8
class BTTask_MoveDirectlyToward: public BTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius                                   // 0x88(0x4)
	bool                                               bDisablePathUpdateOnGoalLocationChange             // 0x8c(0x1)
	bool                                               bProjectVectorGoalToNavigation                     // 0x8c(0x1)
	bool                                               bAllowStrafe                                       // 0x8c(0x1)
	bool                                               bStopOnOverlap                                     // 0x8c(0x1)
};


// Size 0x18
class BTTask_MoveTo: public BTTask_BlackboardBase
{
public:
	float                                              AcceptableRadius                                   // 0x88(0x4)
	class                                              FilterClass                                        // 0x90(0x8)
	bool                                               bAllowStrafe                                       // 0x98(0x1)
	bool                                               bAllowPartialPath                                  // 0x98(0x1)
	bool                                               bStopOnOverlap                                     // 0x98(0x1)
};


// Size 0x8
class EnvQueryItemType: public Object
{
public:
};


// Size 0x0
class EnvQueryTypes: public Object
{
public:
};


// Size 0x30
class BTTask_BlueprintBase: public BTTaskNode
{
public:
	Class AIController*                                AIOwner                                            // 0x60(0x8)
	Class Actor*                                       ActorOwner                                         // 0x68(0x8)
	bool                                               bShowPropertyDetails                               // 0x88(0x1)
};


// Size 0x8
class BTTask_MakeNoise: public BTTaskNode
{
public:
	float                                              Loudnes                                            // 0x60(0x4)
};


// Size 0x68
class PawnAction: public Object
{
public:
	Class PawnAction*                                  ChildAction                                        // 0x28(0x8)
	Class PawnAction*                                  ParentAction                                       // 0x30(0x8)
	Class PawnActionsComponent*                        OwnerComponent                                     // 0x38(0x8)
	Class Object*                                      Instigator                                         // 0x40(0x8)
	Class BrainComponent*                              BrainComp                                          // 0x48(0x8)
	bool                                               bAllowNewSameClassInstance                         // 0x78(0x1)
	bool                                               bReplaceActiveSameClassInstance                    // 0x78(0x1)
	bool                                               bShouldPauseMovement                               // 0x78(0x1)
};


// Size 0x0
class BTTask_PawnActionBase: public BTTaskNode
{
public:
};


// Size 0x8
class BTTask_PushPawnAction: public BTTask_PawnActionBase
{
public:
	Class PawnAction*                                  Action                                             // 0x60(0x8)
};


// Size 0x38
class BTTask_PlayAnimation: public BTTaskNode
{
public:
	Class AnimationAsset*                              AnimationToPlay                                    // 0x60(0x8)
	bool                                               bLooping                                           // 0x68(0x1)
	bool                                               bNonBlocking                                       // 0x68(0x1)
	Class BehaviorTreeComponent*                       MyOwnerComp                                        // 0x70(0x8)
	Class SkeletalMeshComponent*                       CachedSkelMesh                                     // 0x78(0x8)
};


// Size 0x8
class BTTask_PlaySound: public BTTaskNode
{
public:
	Class SoundCue*                                    SoundToPlay                                        // 0x60(0x8)
};


// Size 0x8
class BTTask_RunBehavior: public BTTaskNode
{
public:
	Class BehaviorTree*                                BehaviorAsset                                      // 0x60(0x8)
};


// Size 0x18
class BTTask_RunBehaviorDynamic: public BTTaskNode
{
public:
	Struct GameplayTag                                 InjectionTag                                       // 0x60(0x8)
	Class BehaviorTree*                                DefaultBehaviorAsset                               // 0x68(0x8)
	Class BehaviorTree*                                BehaviorAsset                                      // 0x70(0x8)
};


// Size 0x10
class BTTask_SetTagCooldown: public BTTaskNode
{
public:
	Struct GameplayTag                                 CooldownTag                                        // 0x60(0x8)
	bool                                               bAddToExistingDuration                             // 0x68(0x1)
	float                                              CoolDownDuration                                   // 0x6c(0x4)
};


// Size 0x8
class BTTask_Wait: public BTTaskNode
{
public:
	float                                              WaitTime                                           // 0x60(0x4)
	float                                              RandomDeviation                                    // 0x64(0x4)
};


// Size 0x28
class BTTask_WaitBlackboardTime: public BTTask_Wait
{
public:
	Struct BlackboardKeySelector                       BlackboardKey                                      // 0x68(0x28)
};


// Size 0x0
class CrowdAgentInterface: public Interface
{
public:
};


// Size 0xb8
class CrowdManager: public Object
{
public:
	Class NavigationData*                              MyNavData                                          // 0x28(0x8)
	TArray<Struct MyNavData>                           AvoidanceConfig                                    // 0x30(0x10)
	TArray<Struct AvoidanceConfig>                     SamplingPatterns                                   // 0x40(0x10)
	int                                                MaxAgents                                          // 0x50(0x4)
	float                                              MaxAgentRadius                                     // 0x54(0x4)
	int                                                MaxAvoidedAgents                                   // 0x58(0x4)
	int                                                MaxAvoidedWalls                                    // 0x5c(0x4)
	float                                              NavmeshCheckInterval                               // 0x60(0x4)
	float                                              PathOptimizationInterval                           // 0x64(0x4)
	bool                                               bResolveCollisions                                 // 0x68(0x1)
};


// Size 0x10
class EnvQuery: public Object
{
public:
	TArray<class Options*>                             Options                                            // 0x28(0x10)
};


// Size 0x8
class EnvQueryContext_BlueprintBase: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_Item: public EnvQueryContext
{
public:
};


// Size 0x0
class EnvQueryContext_Querier: public EnvQueryContext
{
public:
};


// Size 0x0
class VisualLoggerExtension: public Object
{
public:
};


// Size 0x0
class EnvQueryDebugHelpers: public Object
{
public:
};


// Size 0x0
class EQSQueryResultSourceInterface: public Interface
{
public:
};


// Size 0x48
class EnvQueryInstanceBlueprintWrapper: public Object
{
public:
	int                                                QueryID                                            // 0x30(0x4)
	class                                              ItemType                                           // 0x50(0x8)
	int                                                OptionIndex                                        // 0x58(0x4)
};


// Size 0x0
class EnvQueryItemType_VectorBase: public EnvQueryItemType
{
public:
};


// Size 0x0
class EnvQueryItemType_ActorBase: public EnvQueryItemType_VectorBase
{
public:
};


// Size 0x0
class EnvQueryItemType_Actor: public EnvQueryItemType_ActorBase
{
public:
};


// Size 0x0
class EnvQueryItemType_Direction: public EnvQueryItemType_VectorBase
{
public:
};


// Size 0x0
class EnvQueryItemType_Point: public EnvQueryItemType_VectorBase
{
public:
};


// Size 0xe8
class EnvQueryManager: public Object
{
public:
	TArray<Struct SearchCenter>                        InstanceCache                                      // 0x98(0x10)
	TArray<class LocalContexts*>                       LocalContexts                                      // 0xa8(0x10)
};


// Size 0x40
class EnvQueryGenerator_ActorsOfClass: public EnvQueryGenerator
{
public:
	Struct AIDataProviderFloatValue                    SearchRadius                                       // 0x50(0x30)
	class                                              SearchedActorClass                                 // 0x80(0x8)
	class                                              SearchCenter                                       // 0x88(0x8)
};


// Size 0x50
class EnvQueryGenerator_BlueprintBase: public EnvQueryGenerator
{
public:
	Struct FText                                       GeneratorsActionDescription                        // 0x50(0x38)
	class                                              Context                                            // 0x88(0x8)
	class                                              GeneratedItemType                                  // 0x90(0x8)
};


// Size 0x18
class EnvQueryGenerator_Composite: public EnvQueryGenerator
{
public:
	TArray<class Generators*>                          Generators                                         // 0x50(0x10)
	bool                                               bHasMatchingItemType                               // 0x60(0x1)
};


// Size 0x40
class EnvQueryGenerator_ProjectedPoints: public EnvQueryGenerator
{
public:
	Struct EnvTraceData                                ProjectionData                                     // 0x50(0x40)
};


// Size 0x128
class EnvQueryGenerator_Donut: public EnvQueryGenerator_ProjectedPoints
{
public:
	Struct AIDataProviderFloatValue                    InnerRadius                                        // 0x90(0x30)
	Struct AIDataProviderFloatValue                    OuterRadius                                        // 0xc0(0x30)
	Struct AIDataProviderIntValue                      NumberOfRings                                      // 0xf0(0x30)
	Struct AIDataProviderIntValue                      PointsPerRing                                      // 0x120(0x30)
	Struct EnvDirection                                ArcDirection                                       // 0x150(0x20)
	Struct AIDataProviderFloatValue                    ArcAngle                                           // 0x170(0x30)
	bool                                               RandomiseRadius                                    // 0x1a0(0x1)
	class                                              Center                                             // 0x1a8(0x8)
	bool                                               bDefineArc                                         // 0x1b0(0x1)
};


// Size 0x108
class EnvQueryGenerator_OnCircle: public EnvQueryGenerator_ProjectedPoints
{
public:
	Struct AIDataProviderFloatValue                    CircleRadius                                       // 0x90(0x30)
	Struct AIDataProviderFloatValue                    SpaceBetween                                       // 0xc0(0x30)
	Struct EnvDirection                                ArcDirection                                       // 0xf0(0x20)
	Struct AIDataProviderFloatValue                    ArcAngle                                           // 0x110(0x30)
	float                                              AngleRadians                                       // 0x140(0x4)
	class                                              CircleCenter                                       // 0x148(0x8)
	Struct EnvTraceData                                TraceData                                          // 0x150(0x40)
	bool                                               bDefineArc                                         // 0x190(0x1)
};


// Size 0x68
class EnvQueryGenerator_SimpleGrid: public EnvQueryGenerator_ProjectedPoints
{
public:
	Struct AIDataProviderFloatValue                    GridSize                                           // 0x90(0x30)
	Struct AIDataProviderFloatValue                    SpaceBetween                                       // 0xc0(0x30)
	class                                              GenerateAround                                     // 0xf0(0x8)
};


// Size 0x68
class EnvQueryGenerator_PathingGrid: public EnvQueryGenerator_SimpleGrid
{
public:
	Struct AIDataProviderBoolValue                     PathToItem                                         // 0xf8(0x30)
	class                                              NavigationFilter                                   // 0x128(0x8)
	Struct AIDataProviderFloatValue                    ScanRangeMultiplier                                // 0x130(0x30)
};


// Size 0x10
class EnvQueryTest_Distance: public EnvQueryTest
{
public:
	byte                                               TestMode                                           // 0x170(0x1)
	class                                              DistanceTo                                         // 0x178(0x8)
};


// Size 0x48
class EnvQueryTest_Dot: public EnvQueryTest
{
public:
	Struct EnvDirection                                LineA                                              // 0x170(0x20)
	Struct EnvDirection                                LineB                                              // 0x190(0x20)
	byte                                               TestMode                                           // 0x1b0(0x1)
	bool                                               bAbsoluteValue                                     // 0x1b1(0x1)
};


// Size 0x30
class EnvQueryTest_GameplayTags: public EnvQueryTest
{
public:
	byte                                               TagsToMatch                                        // 0x170(0x1)
	Struct GameplayTagContainer                        GameplayTags                                       // 0x178(0x28)
};


// Size 0xd8
class EnvQueryTest_Pathfinding: public EnvQueryTest
{
public:
	byte                                               TestMode                                           // 0x170(0x1)
	class                                              Context                                            // 0x178(0x8)
	Struct AIDataProviderBoolValue                     PathFromContext                                    // 0x180(0x30)
	Struct AIDataProviderBoolValue                     SkipUnreachable                                    // 0x1b0(0x30)
	Struct AIDataProviderIntValue                      MaxNumPathSegments                                 // 0x1e0(0x30)
	Struct AIDataProviderBoolValue                     PassThroughUnreachable                             // 0x210(0x30)
	class                                              FilterClass                                        // 0x240(0x8)
};


// Size 0x30
class EnvQueryTest_PathfindingBatch: public EnvQueryTest_Pathfinding
{
public:
	Struct AIDataProviderFloatValue                    ScanRangeMultiplier                                // 0x248(0x30)
};


// Size 0x0
class EnvQueryTest_Random: public EnvQueryTest
{
public:
};


// Size 0xd8
class EnvQueryTest_Trace: public EnvQueryTest
{
public:
	Struct EnvTraceData                                TraceData                                          // 0x170(0x40)
	Struct AIDataProviderBoolValue                     TraceFromContext                                   // 0x1b0(0x30)
	Struct AIDataProviderFloatValue                    ItemHeightOffset                                   // 0x1e0(0x30)
	Struct AIDataProviderFloatValue                    ContextHeightOffset                                // 0x210(0x30)
	class                                              Context                                            // 0x240(0x8)
};


// Size 0x18
class EnvQueryOption: public Object
{
public:
	Class EnvQueryGenerator*                           Generator                                          // 0x28(0x8)
	TArray<class Tests*>                               Tests                                              // 0x30(0x10)
};


// Size 0x10
class EQSRenderingComponent: public PrimitiveComponent
{
public:
};


// Size 0x60
class EQSTestingPawn: public Character
{
public:
	Class EnvQuery*                                    QueryTemplate                                      // 0x5e0(0x8)
	TArray<Struct QueryTemplate>                       QueryParams                                        // 0x5e8(0x10)
	float                                              TimeLimitPerStep                                   // 0x5f8(0x4)
	int                                                StepToDebugDraw                                    // 0x5fc(0x4)
	byte                                               HighlightMode                                      // 0x600(0x1)
	bool                                               bDrawLabels                                        // 0x604(0x1)
	bool                                               bDrawFailedItems                                   // 0x604(0x1)
	bool                                               bReRunQueryOnlyOnFinishedMove                      // 0x604(0x1)
	bool                                               bShouldBeVisibleInGame                             // 0x604(0x1)
	byte                                               QueryingMode                                       // 0x608(0x1)
};


// Size 0x50
class CrowdFollowingComponent: public PathFollowingComponent
{
public:
	Struct Vector                                      CrowdAgentMoveDirection                            // 0x2c0(0xc)
	Class CharacterMovementComponent*                  CharacterMovement                                  // 0x2d0(0x8)
	Struct NavAvoidanceMask                            AvoidanceGroup                                     // 0x2d8(0x4)
	Struct NavAvoidanceMask                            GroupsToAvoid                                      // 0x2dc(0x4)
	Struct NavAvoidanceMask                            GroupsToIgnore                                     // 0x2e0(0x4)
};


// Size 0x0
class PawnAction_BlueprintBase: public PawnAction
{
public:
};


// Size 0x50
class PawnAction_Move: public PawnAction
{
public:
	Class Actor*                                       GoalActor                                          // 0x90(0x8)
	Struct Vector                                      GoalLocation                                       // 0x98(0xc)
	float                                              AcceptableRadius                                   // 0xa4(0x4)
	class                                              FilterClass                                        // 0xa8(0x8)
	bool                                               bAllowStrafe                                       // 0xb0(0x1)
	bool                                               bFinishOnOverlap                                   // 0xb0(0x1)
	bool                                               bUsePathfinding                                    // 0xb0(0x1)
	bool                                               bAllowPartialPath                                  // 0xb0(0x1)
	bool                                               bProjectGoalToNavigation                           // 0xb0(0x1)
	bool                                               bUpdatePathToGoal                                  // 0xb0(0x1)
	bool                                               bAbortChildActionOnPathChange                      // 0xb0(0x1)
};


// Size 0x20
class PawnAction_Repeat: public PawnAction
{
public:
	Class PawnAction*                                  ActionToRepeat                                     // 0x90(0x8)
	Class PawnAction*                                  RecentActionCopy                                   // 0x98(0x8)
	byte                                               ChildFailureHandlingMode                           // 0xa0(0x1)
};


// Size 0x28
class PawnAction_Sequence: public PawnAction
{
public:
	TArray<class ActionSequence*>                      ActionSequence                                     // 0x90(0x10)
	byte                                               ChildFailureHandlingMode                           // 0xa0(0x1)
	Class PawnAction*                                  RecentActionCopy                                   // 0xa8(0x8)
};


// Size 0x10
class PawnAction_Wait: public PawnAction
{
public:
	float                                              TimeToWait                                         // 0x90(0x4)
};


// Size 0x48
class PawnSensingComponent: public ActorComponent
{
public:
	float                                              HearingThreshold                                   // 0xc8(0x4)
	float                                              LOSHearingThreshold                                // 0xcc(0x4)
	float                                              SightRadius                                        // 0xd0(0x4)
	float                                              SensingInterval                                    // 0xd4(0x4)
	float                                              HearingMaxSoundAge                                 // 0xd8(0x4)
	bool                                               bEnableSensingUpdates                              // 0xdc(0x1)
	bool                                               bOnlySensePlayers                                  // 0xdc(0x1)
	bool                                               bSeePawns                                          // 0xdc(0x1)
	bool                                               bHearNoises                                        // 0xdc(0x1)
	float                                              PeripheralVisionAngle                              // 0x108(0x4)
	float                                              PeripheralVisionCosine                             // 0x10c(0x4)
};


}