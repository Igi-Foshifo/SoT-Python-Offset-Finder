namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48
class MigrationControlChannel: public Channel
{
public:
};


// Size 0x0
class MigrationRelevancyClusterActor: public Actor
{
public:
};


// Size 0x0
class NetworkTestingBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class ServerMigrationBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsActorRef: public Object
{
public:
	Class Actor*                                       ActorReferenceWithMigrationMarkup                  // 0x28(0x8)
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPl: public Actor
{
public:
	Class PrimitiveComponent*                          PrimitiveComponent                                 // 0x3d0(0x8)
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsActorWithChild: public Actor
{
public:
	Class ChildActorComponent*                         ChildActorComponent                                // 0x3d0(0x8)
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsActorWithReplicatedChil: public Actor
{
public:
	Class ChildActorComponent*                         ChildActorComponent                                // 0x3d0(0x8)
};


// Size 0x18
class ServerMigrationSerialisationDetailsTestsActorWithDynamicCompone: public Actor
{
public:
	Class ServerMigrationSerialisationDetailsTestsMigratableComponent* SubObject                                          // 0x3d0(0x8)
	Class ServerMigrationSerialisationDetailsTestsMigratableComponent* ActorComponent                                     // 0x3d8(0x8)
	Class ServerMigrationSerialisationDetailsTestsMigratableComponent* Subobject2                                         // 0x3e0(0x8)
};


// Size 0x18
class ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr: public Actor
{
public:
	Struct NetActorPtr                                 ActorPtr                                           // 0x3d0(0x14)
};


// Size 0x18
class ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId: public Actor
{
public:
	Struct UniqueNetIdRepl                             UniqueId                                           // 0x3d0(0x18)
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsMigratableComponent: public ActorComponent
{
public:
	float                                              FloatWithMigrationMarkup                           // 0xc8(0x4)
	int                                                IntWithNoMarkup                                    // 0xcc(0x4)
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsMigratableComponentActo: public Actor
{
public:
	Class ServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup                       // 0x3d0(0x8)
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsMigratableDefaultCompon: public Actor
{
public:
	Class ServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup                       // 0x3d0(0x8)
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrde: public Actor
{
public:
};


// Size 0x0
class ServerMigrationSerialisationDetailsTestsMigrationActorWithRootC: public Actor
{
public:
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsMigrationChildActorLink: public Actor
{
public:
	Class ChildActorComponent*                         Component                                          // 0x3d0(0x8)
};


// Size 0x0
class ServerMigrationSerialisationDetailsTestsMigrationCustomSerialis: public ServerMigrationSerialisationDetailsTestsMigrationCustomSerialis
{
public:
};


// Size 0x8
class ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor: public Actor
{
public:
	Class Actor*                                       DependentActor                                     // 0x3d0(0x8)
};


// Size 0x10
class ServerMigrationSerialisationDetailsTestsMigrationReferenceActor: public Actor
{
public:
	Class Actor*                                       ActorReferenceWithMigrationMarkup                  // 0x3d0(0x8)
};


// Size 0x20
class ServerMigrationSerialisationDetailsTestsPropertyMarkup: public Object
{
public:
	int                                                Int32NoMarkup                                      // 0x28(0x4)
	bool                                               BoolWithMigrationMarkup                            // 0x2c(0x1)
	Struct FString                                     StringWithSaveGameMarkup                           // 0x30(0x10)
	float                                              FloatWithMigrationAndReplicationMarkup             // 0x40(0x4)
};


// Size 0x10
class ServerMigrationSerialisationDetailsTestsTArrayProperty: public Object
{
public:
	TArray<Int None>                                   IntegerArrayWithMigrationMarkup                    // 0x28(0x10)
};


// Size 0x10
class ServerMigrationSerialisationDetailsTestsUStructProperty: public Object
{
public:
	Struct ServerMigrationSerialisationDetailsTestsUStruct SubStructWithMigrationMarkup                       // 0x28(0xc)
};


// Size 0x48
class ServerMigrationSettings: public Object
{
public:
	int                                                MaxSimultaneousMigrations                          // 0x28(0x4)
	Struct FString                                     TransportImplementation                            // 0x30(0x10)
	int                                                ServerDefaultListenPort                            // 0x40(0x4)
	int                                                ServerListenPortRangeSize                          // 0x44(0x4)
	int                                                AutomationServerDefaultListenPort                  // 0x48(0x4)
	Struct FString                                     InstanceImplementation                             // 0x50(0x10)
	float                                              MigrationConnectionTimeoutSeconds                  // 0x60(0x4)
	float                                              WaitForClientActorRemappingTimeoutLength           // 0x64(0x4)
	float                                              WaitForTransferOwnershipAcknowledgementTimeoutLength // 0x68(0x4)
	float                                              DeserialisationTimeSliceLength                     // 0x6c(0x4)
};


// Size 0x8
class TestActorWithUObjectProperty: public Actor
{
public:
	Class Object*                                      ObjectProperty                                     // 0x3d0(0x8)
};


// Size 0x8
class TestUObjectWithObjectProperty: public Object
{
public:
	Class Object*                                      ObjectProperty                                     // 0x28(0x8)
};


}