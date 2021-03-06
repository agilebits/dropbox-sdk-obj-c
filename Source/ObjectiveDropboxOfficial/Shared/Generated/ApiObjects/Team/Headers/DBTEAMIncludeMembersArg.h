///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMIncludeMembersArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `IncludeMembersArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMIncludeMembersArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Whether to return the list of members in the group.  Note that the default
/// value will cause all the group members  to be returned in the response. This
/// may take a long time for large groups.
@property (nonatomic, readonly) NSNumber *returnMembers;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param returnMembers Whether to return the list of members in the group.
/// Note that the default value will cause all the group members  to be returned
/// in the response. This may take a long time for large groups.
///
/// @return An initialized instance.
///
- (instancetype)initWithReturnMembers:(nullable NSNumber *)returnMembers;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `IncludeMembersArg` struct.
///
@interface DBTEAMIncludeMembersArgSerializer : NSObject

///
/// Serializes `DBTEAMIncludeMembersArg` instances.
///
/// @param instance An instance of the `DBTEAMIncludeMembersArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMIncludeMembersArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMIncludeMembersArg *)instance;

///
/// Deserializes `DBTEAMIncludeMembersArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMIncludeMembersArg` API object.
///
/// @return An instantiation of the `DBTEAMIncludeMembersArg` object.
///
+ (DBTEAMIncludeMembersArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
