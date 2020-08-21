///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGSecondaryMailsPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SecondaryMailsPolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSecondaryMailsPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGSecondaryMailsPolicyTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGSecondaryMailsPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGSecondaryMailsPolicyTag) {
  /// (no description).
  DBTEAMLOGSecondaryMailsPolicyDisabled,

  /// (no description).
  DBTEAMLOGSecondaryMailsPolicyEnabled,

  /// (no description).
  DBTEAMLOGSecondaryMailsPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGSecondaryMailsPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled".
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "enabled".
///
/// @return An initialized instance.
///
- (instancetype)initWithEnabled;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

///
/// Retrieves whether the union's current tag state has value "enabled".
///
/// @return Whether the union's current tag state has value "enabled".
///
- (BOOL)isEnabled;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGSecondaryMailsPolicy` union.
///
@interface DBTEAMLOGSecondaryMailsPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGSecondaryMailsPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGSecondaryMailsPolicy` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSecondaryMailsPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSecondaryMailsPolicy *)instance;

///
/// Deserializes `DBTEAMLOGSecondaryMailsPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSecondaryMailsPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGSecondaryMailsPolicy` object.
///
+ (DBTEAMLOGSecondaryMailsPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
