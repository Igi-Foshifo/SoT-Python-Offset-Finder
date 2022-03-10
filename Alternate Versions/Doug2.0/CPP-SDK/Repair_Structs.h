namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class EventRepairableObjectRepairEndedEvent: public None
{
public:
	Class Object*                                      Repairable                                         // 0x0(0x8)
	Struct Vector                                      Position                                           // 0x8(0xc)
	Class Actor*                                       RepairerActor                                      // 0x18(0x8)
	float                                              RepairPercentage                                   // 0x20(0x4)
};


// Size 0x1
class EventRepairableObjectDestroyed: public None
{
public:
};


// Size 0x8
class EventPlayerUndoRepairEnd: public None
{
public:
};


// Size 0x8
class EventPlayerUndoRepairCompleted: public None
{
public:
};


// Size 0x8
class EventPlayerUndoRepairStart: public None
{
public:
};


// Size 0x20
class ShipPartDamagePersistenceModel: public None
{
public:
	TArray<Byte EventPlayerNameOverridesLoaded>        ComponentRepairableStates                          // 0x0(0x10)
	Struct FString                                     Identifier                                         // 0x10(0x10)
};


}