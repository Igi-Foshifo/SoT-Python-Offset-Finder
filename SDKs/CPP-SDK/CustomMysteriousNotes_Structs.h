// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x14
struct DestroyMysteriousNoteData
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	Struct Guid                                                  NoteGUID;                                          // 0x4(0x10)
};


// Size 0x14
struct CreateMysteriousNoteResponseData
{
public:
	bool                                                         Success;                                           // 0x0(0x1)
	Struct Guid                                                  NoteId;                                            // 0x4(0x10)
};


// Size 0x38
struct CreateMysteriousNoteData
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	Struct FString                                               NoteType;                                          // 0x8(0x10)
	Struct FString                                               NoteTitle;                                         // 0x18(0x10)
	Struct FString                                               NoteBody;                                          // 0x28(0x10)
};


// Size 0x10
struct CustomPlayerNoteList
{
public:
	TArray<Struct NotesRemoteServiceNoteDetailModel>             Notes;                                             // 0x0(0x10)
};


}