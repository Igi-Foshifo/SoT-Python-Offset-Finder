namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
class ChecklistItem: public None
{
public:
	Struct FText                                       Description                                        // 0x0(0x38)
	int                                                NumRequiredActionCompletions                       // 0x38(0x4)
	TArray<class ActionData*>                          ActionData                                         // 0x40(0x10)
};


// Size 0x50
class ChecklistMapItemData: public None
{
public:
	Struct TreasureMapTextDesc                         Description                                        // 0x0(0x48)
	bool                                               IsComplete                                         // 0x48(0x1)
};


// Size 0xe8
class ChecklistMapContents: public None
{
public:
	Struct TreasureMapTextDesc                         Title                                              // 0x0(0x48)
	Struct TreasureMapTextDesc                         Description                                        // 0x48(0x48)
	TArray<Struct Description>                         ChecklistItems                                     // 0x90(0x10)
	Struct TreasureMapTextDesc                         Afternote                                          // 0xa0(0x48)
};


// Size 0x1
class CompleteEntireChecklistEvent: public None
{
public:
};


// Size 0x10
class ChecklistBootyDeliveredEvent: public None
{
public:
	Class Actor*                                       Seller                                             // 0x0(0x8)
	Class Actor*                                       BuyingNPC                                          // 0x8(0x8)
};


// Size 0x8
class ChecklistCompletionEvent: public None
{
public:
	Class ChecklistActionData*                         ActionData                                         // 0x0(0x8)
};


// Size 0x28
class ChecklistItemCompletedTelemetryEvent: public None
{
public:
	Struct Guid                                        ChecklistMapId                                     // 0x0(0x10)
	byte                                               ReceivedActionType                                 // 0x10(0x1)
	Struct FString                                     ActionDescryption                                  // 0x18(0x10)
};


}