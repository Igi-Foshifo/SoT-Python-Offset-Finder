// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50
struct ChecklistItem
{
public:
	Struct FText                                                 Description;                                       // 0x0(0x38)
	int                                                          NumRequiredActionCompletions;                      // 0x38(0x4)
	char                                                         pad0x4_H88W1[0x4];                                 // 0x3c(0x4)
	TArray<class ChecklistActionData*>                           ActionData;                                        // 0x40(0x10)
};


// Size 0x50
struct ChecklistMapItemData
{
public:
	Struct TreasureMapTextDesc                                   Description;                                       // 0x0(0x48)
	bool                                                         IsComplete;                                        // 0x48(0x1)
};


// Size 0xe8
struct ChecklistMapContents
{
public:
	Struct TreasureMapTextDesc                                   Title;                                             // 0x0(0x48)
	Struct TreasureMapTextDesc                                   Description;                                       // 0x48(0x48)
	TArray<struct ChecklistItems>                                ChecklistItems;                                    // 0x90(0x10)
	Struct TreasureMapTextDesc                                   Afternote;                                         // 0xa0(0x48)
};


// Size 0x1
struct CompleteEntireChecklistEvent
{
public:
};


// Size 0x10
struct ChecklistBootyDeliveredEvent
{
public:
	Class Actor*                                                 Seller;                                            // 0x0(0x8)
	Class Actor*                                                 BuyingNPC;                                         // 0x8(0x8)
};


// Size 0x8
struct ChecklistCompletionEvent
{
public:
	Class ChecklistActionData*                                   ActionData;                                        // 0x0(0x8)
};


// Size 0x28
struct ChecklistItemCompletedTelemetryEvent
{
public:
	Struct Guid                                                  ChecklistMapId;                                    // 0x0(0x10)
	byte                                                         ReceivedActionType;                                // 0x10(0x1)
	char                                                         pad0x7_DO0JT[0x7];                                 // 0x11(0x7)
	Struct FString                                               ActionDescryption;                                 // 0x18(0x10)
};


}