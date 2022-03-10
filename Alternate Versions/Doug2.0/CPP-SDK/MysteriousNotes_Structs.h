namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class MysteriousNotesCompletionEventsModel: public None
{
public:
	struct FName                                       CompletionIdent                                    // 0x0(0x8)
};


// Size 0x8
class MysteriousNotesCompletionEventsModelEntry: public None
{
public:
	struct FName                                       CompletionIdent                                    // 0x0(0x8)
};


// Size 0x1
class EventListenForCinematicEndEvent: public None
{
public:
};


// Size 0x10
class EventTriggerMysteriousNotesPopup: public None
{
public:
	Class PlayerController*                            PlayerController                                   // 0x0(0x8)
	bool                                               CinematicSkipped                                   // 0x8(0x1)
};


// Size 0x18
class EventMarkNoteDeleted: public None
{
public:
	Class PlayerController*                            PlayerController                                   // 0x0(0x8)
	Struct Guid                                        NoteId                                             // 0x8(0x10)
};


// Size 0x10
class EventNoteClientCompletionStep: public None
{
public:
	Class PlayerController*                            PlayerController                                   // 0x0(0x8)
	struct FName                                       CompletionStepID                                   // 0x8(0x8)
};


// Size 0x10
class EventNoteCompletionStep: public None
{
public:
	Class PlayerController*                            PlayerController                                   // 0x0(0x8)
	struct FName                                       CompletionStepID                                   // 0x8(0x8)
};


// Size 0x1
class EventNotesUpdated: public None
{
public:
};


// Size 0x18
class EventMarkNoteRead: public None
{
public:
	Class PlayerController*                            PlayerController                                   // 0x0(0x8)
	Struct Guid                                        NoteId                                             // 0x8(0x10)
};


// Size 0x8
class EventOnlineAthenaPlayerControllerUnpossessed: public None
{
public:
	Class PlayerController*                            PlayerController                                   // 0x0(0x8)
};


// Size 0x8
class EventPlayerControllerPossessed: public None
{
public:
	Class PlayerController*                            PlayerController                                   // 0x0(0x8)
};


// Size 0x10
class EventMysteriousNoteContentUpdated: public None
{
public:
};


// Size 0x1
class EventMysteriousNoteSettingsLoaded: public None
{
public:
};


// Size 0x1
class EventMysteriousNoteCustomContentUpdate: public None
{
public:
};


// Size 0x10
class EventMysteriousNoteRemoved: public None
{
public:
};


// Size 0x14
class MysteriousNoteInfo: public None
{
public:
	Struct Guid                                        NoteId                                             // 0x0(0x10)
	bool                                               NoteRead                                           // 0x10(0x1)
	bool                                               ShowNoteAnimation                                  // 0x11(0x1)
};


// Size 0x10
class MysteriousNoteTheme: public None
{
public:
	Struct FString                                     NoteType                                           // 0x0(0x10)
};


// Size 0xd0
class WieldableMysteriousNoteLayoutItem: public None
{
public:
	Struct FString                                     Theme                                              // 0x0(0x10)
	Class Font*                                        Font                                               // 0x10(0x8)
	Struct TreasureMapWidgetStreamedTexture            Image                                              // 0x18(0x30)
	Struct StringAssetReference                        RadialIcon                                         // 0x48(0x10)
	Struct TreasureMapWidgetText                       NoteTitleWidgetText                                // 0x58(0x38)
	Struct TreasureMapWidgetText                       NoteBodyWidgetText                                 // 0x90(0x38)
	float                                              NoteWidth                                          // 0xc8(0x4)
};


// Size 0x30
class ActiveNoteData: public None
{
public:
	TArray<Struct MysteriousNoteRequest>               NotesRemoteServiceNoteModels                       // 0x0(0x10)
	TArray<Struct NoteCompletionEntry>                 PendingCompletionEntries                           // 0x10(0x10)
	TArray<Struct PendingCompletionEntries>            PendingDetailRequestIDs                            // 0x20(0x10)
};


// Size 0x20
class NoteCompletionEntry: public None
{
public:
	Struct Guid                                        NoteId                                             // 0x0(0x10)
	TArray<Str >                                       CompletionEventIds                                 // 0x10(0x10)
};


// Size 0x80
class MysteriousNoteRequest: public None
{
public:
	Class PlayerController*                            PlayerController                                   // 0x0(0x8)
	Struct PirateIdentity                              PirateIdentity                                     // 0x8(0x78)
};


// Size 0x48
class PlayerMysteriousNoteItem: public None
{
public:
	Struct Guid                                        OriginalNoteID                                     // 0x0(0x10)
	Struct FString                                     LocalisedTitle                                     // 0x10(0x10)
	Struct FString                                     LocalisedBody                                      // 0x20(0x10)
	Struct FString                                     NoteType                                           // 0x30(0x10)
};


// Size 0x18
class ClientNoteData: public None
{
public:
	bool                                               NotifyArrival                                      // 0x0(0x1)
	TArray<Struct NotifyArrival>                       PendingNotes                                       // 0x8(0x10)
};


// Size 0x4
class PlayerSentNotesTelemetryEvent: public None
{
public:
	int                                                NoteCount                                          // 0x0(0x4)
};


// Size 0x20
class PlayerNoteStateChangeTelemetryEvent: public None
{
public:
	Struct Guid                                        NoteId                                             // 0x0(0x10)
	Struct FString                                     NoteState                                          // 0x10(0x10)
};


}