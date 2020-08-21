///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBUSERSCOMMONAccountType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AccountType` union.
///
/// What type of account this user has.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSCOMMONAccountType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBUSERSCOMMONAccountTypeTag` enum type represents the possible tag
/// states with which the `DBUSERSCOMMONAccountType` union can exist.
typedef NS_ENUM(NSInteger, DBUSERSCOMMONAccountTypeTag) {
  /// The basic account type.
  DBUSERSCOMMONAccountTypeBasic,

  /// The Dropbox Pro account type.
  DBUSERSCOMMONAccountTypePro,

  /// The Dropbox Business account type.
  DBUSERSCOMMONAccountTypeBusiness,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBUSERSCOMMONAccountTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "basic".
///
/// Description of the "basic" tag state: The basic account type.
///
/// @return An initialized instance.
///
- (instancetype)initWithBasic;

///
/// Initializes union class with tag state of "pro".
///
/// Description of the "pro" tag state: The Dropbox Pro account type.
///
/// @return An initialized instance.
///
- (instancetype)initWithPro;

///
/// Initializes union class with tag state of "business".
///
/// Description of the "business" tag state: The Dropbox Business account type.
///
/// @return An initialized instance.
///
- (instancetype)initWithBusiness;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "basic".
///
/// @return Whether the union's current tag state has value "basic".
///
- (BOOL)isBasic;

///
/// Retrieves whether the union's current tag state has value "pro".
///
/// @return Whether the union's current tag state has value "pro".
///
- (BOOL)isPro;

///
/// Retrieves whether the union's current tag state has value "business".
///
/// @return Whether the union's current tag state has value "business".
///
- (BOOL)isBusiness;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBUSERSCOMMONAccountType` union.
///
@interface DBUSERSCOMMONAccountTypeSerializer : NSObject

///
/// Serializes `DBUSERSCOMMONAccountType` instances.
///
/// @param instance An instance of the `DBUSERSCOMMONAccountType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBUSERSCOMMONAccountType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBUSERSCOMMONAccountType *)instance;

///
/// Deserializes `DBUSERSCOMMONAccountType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBUSERSCOMMONAccountType` API object.
///
/// @return An instantiation of the `DBUSERSCOMMONAccountType` object.
///
+ (DBUSERSCOMMONAccountType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
