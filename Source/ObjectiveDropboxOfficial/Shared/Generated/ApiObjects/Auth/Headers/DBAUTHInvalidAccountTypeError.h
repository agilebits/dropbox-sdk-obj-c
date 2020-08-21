///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBAUTHInvalidAccountTypeError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `InvalidAccountTypeError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBAUTHInvalidAccountTypeError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBAUTHInvalidAccountTypeErrorTag` enum type represents the possible tag
/// states with which the `DBAUTHInvalidAccountTypeError` union can exist.
typedef NS_ENUM(NSInteger, DBAUTHInvalidAccountTypeErrorTag) {
  /// Current account type doesn't have permission to access this route
  /// endpoint.
  DBAUTHInvalidAccountTypeErrorEndpoint,

  /// Current account type doesn't have permission to access this feature.
  DBAUTHInvalidAccountTypeErrorFeature,

  /// (no description).
  DBAUTHInvalidAccountTypeErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBAUTHInvalidAccountTypeErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "endpoint".
///
/// Description of the "endpoint" tag state: Current account type doesn't have
/// permission to access this route endpoint.
///
/// @return An initialized instance.
///
- (instancetype)initWithEndpoint;

///
/// Initializes union class with tag state of "feature".
///
/// Description of the "feature" tag state: Current account type doesn't have
/// permission to access this feature.
///
/// @return An initialized instance.
///
- (instancetype)initWithFeature;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "endpoint".
///
/// @return Whether the union's current tag state has value "endpoint".
///
- (BOOL)isEndpoint;

///
/// Retrieves whether the union's current tag state has value "feature".
///
/// @return Whether the union's current tag state has value "feature".
///
- (BOOL)isFeature;

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
/// The serialization class for the `DBAUTHInvalidAccountTypeError` union.
///
@interface DBAUTHInvalidAccountTypeErrorSerializer : NSObject

///
/// Serializes `DBAUTHInvalidAccountTypeError` instances.
///
/// @param instance An instance of the `DBAUTHInvalidAccountTypeError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBAUTHInvalidAccountTypeError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBAUTHInvalidAccountTypeError *)instance;

///
/// Deserializes `DBAUTHInvalidAccountTypeError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBAUTHInvalidAccountTypeError` API object.
///
/// @return An instantiation of the `DBAUTHInvalidAccountTypeError` object.
///
+ (DBAUTHInvalidAccountTypeError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
