namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class TaleQuestVariableMapMarkType: public None
{
public:
};


// Size 0x50
class TaleQuestChecklistItem: public None
{
public:
	TArray<Struct ChecklistActionProgressTracker>      ChecklistActions                                   // 0x0(0x10)
};


// Size 0x10
class ChecklistActionProgressTracker: public None
{
public:
	Class ChecklistActionData*                         ActionData                                         // 0x0(0x8)
};


}