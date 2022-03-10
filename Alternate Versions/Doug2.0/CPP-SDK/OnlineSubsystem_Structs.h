namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0xa0
class InAppPurchaseProductInfo: public None
{
public:
	Struct FString                                     Identifier                                         // 0x0(0x10)
	Struct FString                                     TransactionIdentifier                              // 0x10(0x10)
	Struct FString                                     DisplayName                                        // 0x20(0x10)
	Struct FString                                     DisplayDescription                                 // 0x30(0x10)
	Struct FString                                     DisplayPrice                                       // 0x40(0x10)
	Struct FString                                     CurrencyCode                                       // 0x50(0x10)
	Struct FString                                     CurrencySymbol                                     // 0x60(0x10)
	Struct FString                                     DecimalSeparator                                   // 0x70(0x10)
	Struct FString                                     GroupingSeparator                                  // 0x80(0x10)
	Struct FString                                     ReceiptData                                        // 0x90(0x10)
};


// Size 0x20
class InAppPurchaseRestoreInfo: public None
{
public:
	Struct FString                                     Identifier                                         // 0x0(0x10)
	Struct FString                                     ReceiptData                                        // 0x10(0x10)
};


// Size 0x38
class AchievementUpdatedEvent: public None
{
public:
	Struct FString                                     AchievementId                                      // 0x0(0x10)
	bool                                               Successful                                         // 0x14(0x1)
	Struct FString                                     Reason                                             // 0x18(0x10)
	Struct FString                                     Platform                                           // 0x28(0x10)
};


// Size 0x18
class NamedInterfaceDef: public None
{
public:
	struct FName                                       InterfaceName                                      // 0x0(0x8)
	Struct FString                                     InterfaceClassName                                 // 0x8(0x10)
};


// Size 0x10
class NamedInterface: public None
{
public:
	struct FName                                       InterfaceName                                      // 0x0(0x8)
	Class Object*                                      InterfaceObject                                    // 0x8(0x8)
};


// Size 0x90
class OnlineStoreCatalogItem: public None
{
public:
	Struct FString                                     ProductId                                          // 0x0(0x10)
	Struct FString                                     Title                                              // 0x10(0x10)
	Struct FString                                     Description                                        // 0x20(0x10)
	Struct FString                                     FormattedPrice                                     // 0x30(0x10)
	Struct FString                                     FormattedBasePrice                                 // 0x40(0x10)
	bool                                               IsOnSale                                           // 0x50(0x1)
	Struct DateTime                                    SaleEndDate                                        // 0x58(0x8)
	Struct FString                                     ImageUri                                           // 0x60(0x10)
	Struct FString                                     CurrencyCode                                       // 0x70(0x10)
	TArray<Str >                                       MetaTags                                           // 0x80(0x10)
};


// Size 0x18
class InAppPurchaseProductRequest: public None
{
public:
	Struct FString                                     ProductIdentifier                                  // 0x0(0x10)
	bool                                               bIsConsumable                                      // 0x10(0x1)
};


}