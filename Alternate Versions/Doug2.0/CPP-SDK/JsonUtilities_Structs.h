namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x18
class JsonObjectWrapper: public None
{
public:
};


// Size 0x70
class TestTextObject: public None
{
public:
	Struct FText                                       TestText                                           // 0x0(0x38)
	Struct FText                                       TestTextExport                                     // 0x38(0x38)
};


// Size 0x8
class TestFloatObject: public None
{
public:
	float                                              TestFloat1                                         // 0x0(0x4)
	float                                              TestFloat2                                         // 0x4(0x4)
};


// Size 0x1
class TestEnumObject: public None
{
public:
	byte                                               TestEnum                                           // 0x0(0x1)
};


// Size 0x8
class TestMessageTimespan: public None
{
public:
	Struct Timespan                                    Timespan                                           // 0x0(0x8)
};


// Size 0x8
class TestMessageDateTime: public None
{
public:
	Struct DateTime                                    DateTime                                           // 0x0(0x8)
};


// Size 0x28
class TestSerializationNestedObject: public None
{
public:
	Struct TestSerializationObject                     NestedObject                                       // 0x0(0x28)
};


// Size 0x28
class TestSerializationObject: public None
{
public:
	bool                                               TestBool                                           // 0x0(0x1)
	int                                                TestInt                                            // 0x4(0x4)
	Struct FString                                     TestString                                         // 0x8(0x10)
	Struct Guid                                        TestGuid                                           // 0x18(0x10)
};


// Size 0x8
class TestMessageUInt64: public None
{
public:
};


// Size 0x8
class TestMessageInt64: public None
{
public:
};


// Size 0x50
class TestUStructMapSerializationObject: public None
{
public:
};


// Size 0x50
class TestInt32MapSerializationObject: public None
{
public:
};


// Size 0x50
class TestInvalidStringMapSerializationObject: public None
{
public:
};


// Size 0x50
class TestStringMapSerializationObject: public None
{
public:
};


}