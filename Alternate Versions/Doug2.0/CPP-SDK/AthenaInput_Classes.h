namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10
class NotificationInputId: public Object
{
public:
};


// Size 0x10
class AnalogInputId: public Object
{
public:
};


// Size 0x0
class TestAnalogInputId: public AnalogInputId
{
public:
};


// Size 0x0
class TestAnalogInput2Id: public AnalogInputId
{
public:
};


// Size 0x0
class NamedNotificationInputInterface: public Interface
{
public:
};


// Size 0x18
class NamedNotificationInputComponent: public ActorComponent
{
public:
	TArray<Struct PushCharacterIntoDeadActionState>    NotificationInputDisplayNames                      // 0xd0(0x10)
};


// Size 0x0
class CrewNameplatesToggleInputId: public NotificationInputId
{
public:
};


// Size 0x0
class OpenQuickMenuNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class PressedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class ReleasedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class ScrambleGamertagsToggleInputId: public NotificationInputId
{
public:
};


// Size 0x0
class TestNotificationInput2Id: public NotificationInputId
{
public:
};


// Size 0x0
class TestNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0
class ReceivesInputInterface: public Interface
{
public:
};


}