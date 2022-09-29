// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class VeilOfTheAncients: public InteractableBase
{
public:
	float                                                        NumberOfGems;                                      // 0x400(0x4)
	Class LockComponent*                                         LockComponent;                                     // 0x408(0x8)
	Class StaticMeshComponent*                                   StaticMeshComponent;                               // 0x410(0x8)
};


// Size 0x100
class VeilService: public TaleQuestService
{
public:
	Class World*                                                 World;                                             // 0x80(0x8)
	Class GameState*                                             GameState;                                         // 0x88(0x8)
	Class VeilOfTheAncients*                                     TrackedVeil;                                       // 0x98(0x8)
	Class Ship*                                                  Ship;                                              // 0xa0(0x8)
};


// Size 0x0
class GetVeilOfTheAncientsStep: public TaleQuestStep
{
public:
};


// Size 0x0
class VeilOfTheAncientsServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x30
class GetVeilOfTheAncientsStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableActor                                    QuestVeil;                                         // 0x80(0x30)
};


}