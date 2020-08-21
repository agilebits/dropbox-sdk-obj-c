///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGAccessLevel;
@class DBSHARINGAddMember;
@class DBSHARINGMemberSelector;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AddMember` struct.
///
/// The member and type of access the member should have when added to a shared
/// folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGAddMember : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The member to add to the shared folder.
@property (nonatomic, readonly) DBSHARINGMemberSelector *member;

/// The access level to grant member to the shared folder.  `owner` in
/// `DBSHARINGAccessLevel` is disallowed.
@property (nonatomic, readonly) DBSHARINGAccessLevel *accessLevel;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param member The member to add to the shared folder.
/// @param accessLevel The access level to grant member to the shared folder.
/// `owner` in `DBSHARINGAccessLevel` is disallowed.
///
/// @return An initialized instance.
///
- (instancetype)initWithMember:(DBSHARINGMemberSelector *)member
                   accessLevel:(nullable DBSHARINGAccessLevel *)accessLevel;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param member The member to add to the shared folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithMember:(DBSHARINGMemberSelector *)member;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AddMember` struct.
///
@interface DBSHARINGAddMemberSerializer : NSObject

///
/// Serializes `DBSHARINGAddMember` instances.
///
/// @param instance An instance of the `DBSHARINGAddMember` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGAddMember` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGAddMember *)instance;

///
/// Deserializes `DBSHARINGAddMember` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGAddMember` API object.
///
/// @return An instantiation of the `DBSHARINGAddMember` object.
///
+ (DBSHARINGAddMember *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
