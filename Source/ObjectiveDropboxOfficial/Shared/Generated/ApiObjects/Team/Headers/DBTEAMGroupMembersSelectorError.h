///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMGroupMembersSelectorError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupMembersSelectorError` union.
///
/// Error that can be raised when GroupMembersSelector is used, and the users
/// are required to be members of the specified group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupMembersSelectorError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMGroupMembersSelectorErrorTag` enum type represents the possible
/// tag states with which the `DBTEAMGroupMembersSelectorError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMGroupMembersSelectorErrorTag){
    /// No matching group found. No groups match the specified group ID.
    DBTEAMGroupMembersSelectorErrorGroupNotFound,

    /// (no description).
    DBTEAMGroupMembersSelectorErrorOther,

    /// This operation is not supported on system-managed groups.
    DBTEAMGroupMembersSelectorErrorSystemManagedGroupDisallowed,

    /// At least one of the specified users is not a member of the group.
    DBTEAMGroupMembersSelectorErrorMemberNotInGroup,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMGroupMembersSelectorErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "group_not_found".
///
/// Description of the "group_not_found" tag state: No matching group found. No
/// groups match the specified group ID.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "system_managed_group_disallowed".
///
/// Description of the "system_managed_group_disallowed" tag state: This
/// operation is not supported on system-managed groups.
///
/// @return An initialized instance.
///
- (instancetype)initWithSystemManagedGroupDisallowed;

///
/// Initializes union class with tag state of "member_not_in_group".
///
/// Description of the "member_not_in_group" tag state: At least one of the
/// specified users is not a member of the group.
///
/// @return An initialized instance.
///
- (instancetype)initWithMemberNotInGroup;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "group_not_found".
///
/// @return Whether the union's current tag state has value "group_not_found".
///
- (BOOL)isGroupNotFound;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value
/// "system_managed_group_disallowed".
///
/// @return Whether the union's current tag state has value
/// "system_managed_group_disallowed".
///
- (BOOL)isSystemManagedGroupDisallowed;

///
/// Retrieves whether the union's current tag state has value
/// "member_not_in_group".
///
/// @return Whether the union's current tag state has value
/// "member_not_in_group".
///
- (BOOL)isMemberNotInGroup;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMGroupMembersSelectorError` union.
///
@interface DBTEAMGroupMembersSelectorErrorSerializer : NSObject

///
/// Serializes `DBTEAMGroupMembersSelectorError` instances.
///
/// @param instance An instance of the `DBTEAMGroupMembersSelectorError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersSelectorError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMGroupMembersSelectorError *)instance;

///
/// Deserializes `DBTEAMGroupMembersSelectorError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersSelectorError` API object.
///
/// @return An instantiation of the `DBTEAMGroupMembersSelectorError` object.
///
+ (DBTEAMGroupMembersSelectorError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
