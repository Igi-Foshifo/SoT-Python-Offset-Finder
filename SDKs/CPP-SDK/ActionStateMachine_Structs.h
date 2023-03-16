// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
struct ActorActionStateConstructionInfo
{
public:
};


// Size 0x28
struct ActionStateConstructionInfo
{
public:
	class                                                        Id;                                                // 0x0(0x8)
	Class ScriptStruct*                                          Type;                                              // 0x8(0x8)
};


// Size 0x30
struct ActionStateSerialisableData
{
public:
	class                                                        Id;                                                // 0x8(0x8)
	Class ScriptStruct*                                          Type;                                              // 0x10(0x8)
};


// Size 0x10
struct ActionStateMessage
{
public:
	Class ScriptStruct*                                          Type;                                              // 0x8(0x8)
};


// Size 0x1
struct ActionStateChangeRequestId
{
public:
	byte                                                         Raw;                                               // 0x0(0x1)
};


// Size 0x40
struct SerialisedActionStateInfo
{
public:
};


// Size 0x18
struct SerialisedActionStateMessage
{
public:
};


// Size 0x140
struct SerialisedConstructionInfoStore
{
public:
	Struct SerialisedActionStateInfo                             SerialisedConstructionInfo;                        // 0x0(0x40)
};


// Size 0x150
struct ResetStateMachineRpc
{
public:
	Struct ActionStateChangeRequestId                            LatestEpochIds;                                    // 0x0(0x1)
	char                                                         pad0x4_ZTOAF[0x4];                                 // 0x1(0x4)
	Struct ActionStateChangeRequestId                            LatestRequestIds;                                  // 0x5(0x1)
	char                                                         pad0xa_0UYGF[0xa];                                 // 0x6(0xa)
	Struct SerialisedConstructionInfoStore                       PerTrackConstructionInfoStore;                     // 0x10(0x140)
};


// Size 0x38
struct TestActionStateSerialisableData
{
public:
	int                                                          IntProp;                                           // 0x30(0x4)
};


// Size 0x18
struct ActionStatePriorityList
{
public:
	class                                                        State;                                             // 0x0(0x8)
	TArray<struct Entries>                                       Entries;                                           // 0x8(0x10)
};


// Size 0x10
struct ActionStatePriorityRelationship
{
public:
	class                                                        State;                                             // 0x0(0x8)
	byte                                                         Priority;                                          // 0x8(0x1)
};


// Size 0xa0
struct ActionStatePriorityTable
{
public:
};


// Size 0x48
struct TestActionStateConstructionInfoWithObjPointers
{
public:
	Class Object*                                                ObjPointer;                                        // 0x28(0x8)
	Struct InnerWithObjTestStruct                                Inner;                                             // 0x30(0x8)
	TArray<class Object*>                                        Array;                                             // 0x38(0x10)
};


// Size 0x8
struct InnerWithObjTestStruct
{
public:
	Class Object*                                                ObjPointer;                                        // 0x0(0x8)
};


// Size 0x48
struct TestActionStateConstructionInfoWithInner
{
public:
	float                                                        FloatProp;                                         // 0x28(0x4)
	char                                                         pad0x4_F51UE[0x4];                                 // 0x2c(0x4)
	Struct InnerTestStruct                                       InnerStruct;                                       // 0x30(0x18)
};


// Size 0x18
struct InnerTestStruct
{
public:
	bool                                                         BoolProp;                                          // 0x0(0x1)
	char                                                         pad0x7_4NHE0[0x7];                                 // 0x1(0x7)
	Struct FString                                               StringProp;                                        // 0x8(0x10)
};


// Size 0x30
struct TestActionStateConstructionInfo
{
public:
	int                                                          IntProp;                                           // 0x28(0x4)
};


// Size 0x1
struct EventWaitingToSpawnActionStateEndedClient
{
public:
};


// Size 0x1
struct EventWaitingToSpawnActionStateStartedClient
{
public:
};


// Size 0x1
struct EventFirstPersonAnimaticActionStateEndedClient
{
public:
};


// Size 0x30
struct NullActionStateConstructionInfo
{
public:
};


// Size 0x10
struct TestActionStateMessage2
{
public:
};


// Size 0x18
struct TestActionStateMessage
{
public:
	int                                                          TestProperty;                                      // 0x10(0x4)
};


// Size 0x38
struct TestActorActionStateConstructionInfo
{
public:
	int                                                          IntProp;                                           // 0x30(0x4)
};


}