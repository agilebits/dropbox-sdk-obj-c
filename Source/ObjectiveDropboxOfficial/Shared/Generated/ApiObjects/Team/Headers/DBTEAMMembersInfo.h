///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMMembersInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembersInfo` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Team member IDs of the users under this hold.
@property (nonatomic, readonly) NSArray<NSString *> *teamMemberIds;

/// The number of permanently deleted users that were under this hold.
@property (nonatomic, readonly) NSNumber *permanentlyDeletedUsers;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamMemberIds Team member IDs of the users under this hold.
/// @param permanentlyDeletedUsers The number of permanently deleted users that
/// were under this hold.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamMemberIds:(NSArray<NSString *> *)teamMemberIds
              permanentlyDeletedUsers:(NSNumber *)permanentlyDeletedUsers;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MembersInfo` struct.
///
@interface DBTEAMMembersInfoSerializer : NSObject

///
/// Serializes `DBTEAMMembersInfo` instances.
///
/// @param instance An instance of the `DBTEAMMembersInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMMembersInfo *)instance;

///
/// Deserializes `DBTEAMMembersInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersInfo` API object.
///
/// @return An instantiation of the `DBTEAMMembersInfo` object.
///
+ (DBTEAMMembersInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END