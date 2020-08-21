///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGGroupJoinPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupJoinPolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupJoinPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGGroupJoinPolicyTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGGroupJoinPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGGroupJoinPolicyTag) {
  /// (no description).
  DBTEAMLOGGroupJoinPolicyOpen,

  /// (no description).
  DBTEAMLOGGroupJoinPolicyRequestToJoin,

  /// (no description).
  DBTEAMLOGGroupJoinPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGGroupJoinPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "open".
///
/// @return An initialized instance.
///
- (instancetype)initWithOpen;

///
/// Initializes union class with tag state of "request_to_join".
///
/// @return An initialized instance.
///
- (instancetype)initWithRequestToJoin;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "open".
///
/// @return Whether the union's current tag state has value "open".
///
- (BOOL)isOpen;

///
/// Retrieves whether the union's current tag state has value "request_to_join".
///
/// @return Whether the union's current tag state has value "request_to_join".
///
- (BOOL)isRequestToJoin;

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
/// The serialization class for the `DBTEAMLOGGroupJoinPolicy` union.
///
@interface DBTEAMLOGGroupJoinPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupJoinPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGGroupJoinPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupJoinPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGGroupJoinPolicy *)instance;

///
/// Deserializes `DBTEAMLOGGroupJoinPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupJoinPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGGroupJoinPolicy` object.
///
+ (DBTEAMLOGGroupJoinPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
