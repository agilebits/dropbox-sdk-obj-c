///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMMembersRecoverError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembersRecoverError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersRecoverError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMMembersRecoverErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMMembersRecoverError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMMembersRecoverErrorTag){
    /// No matching user found. The provided team_member_id, email, or
    /// external_id does not exist on this team.
    DBTEAMMembersRecoverErrorUserNotFound,

    /// The user is not recoverable.
    DBTEAMMembersRecoverErrorUserUnrecoverable,

    /// The user is not a member of the team.
    DBTEAMMembersRecoverErrorUserNotInTeam,

    /// Team is full. The organization has no available licenses.
    DBTEAMMembersRecoverErrorTeamLicenseLimit,

    /// (no description).
    DBTEAMMembersRecoverErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMMembersRecoverErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_not_found".
///
/// Description of the "user_not_found" tag state: No matching user found. The
/// provided team_member_id, email, or external_id does not exist on this team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotFound;

///
/// Initializes union class with tag state of "user_unrecoverable".
///
/// Description of the "user_unrecoverable" tag state: The user is not
/// recoverable.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserUnrecoverable;

///
/// Initializes union class with tag state of "user_not_in_team".
///
/// Description of the "user_not_in_team" tag state: The user is not a member of
/// the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserNotInTeam;

///
/// Initializes union class with tag state of "team_license_limit".
///
/// Description of the "team_license_limit" tag state: Team is full. The
/// organization has no available licenses.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamLicenseLimit;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_not_found".
///
/// @return Whether the union's current tag state has value "user_not_found".
///
- (BOOL)isUserNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "user_unrecoverable".
///
/// @return Whether the union's current tag state has value
/// "user_unrecoverable".
///
- (BOOL)isUserUnrecoverable;

///
/// Retrieves whether the union's current tag state has value
/// "user_not_in_team".
///
/// @return Whether the union's current tag state has value "user_not_in_team".
///
- (BOOL)isUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value
/// "team_license_limit".
///
/// @return Whether the union's current tag state has value
/// "team_license_limit".
///
- (BOOL)isTeamLicenseLimit;

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
/// The serialization class for the `DBTEAMMembersRecoverError` union.
///
@interface DBTEAMMembersRecoverErrorSerializer : NSObject

///
/// Serializes `DBTEAMMembersRecoverError` instances.
///
/// @param instance An instance of the `DBTEAMMembersRecoverError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersRecoverError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMMembersRecoverError *)instance;

///
/// Deserializes `DBTEAMMembersRecoverError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersRecoverError` API object.
///
/// @return An instantiation of the `DBTEAMMembersRecoverError` object.
///
+ (DBTEAMMembersRecoverError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
