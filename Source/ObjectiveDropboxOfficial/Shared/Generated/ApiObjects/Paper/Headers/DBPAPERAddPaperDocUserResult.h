///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERAddPaperDocUserResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AddPaperDocUserResult` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERAddPaperDocUserResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERAddPaperDocUserResultTag` enum type represents the possible tag
/// states with which the `DBPAPERAddPaperDocUserResult` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBPAPERAddPaperDocUserResultTag){
    /// User was successfully added to the Paper doc.
    DBPAPERAddPaperDocUserResultSuccess,

    /// Something unexpected happened when trying to add the user to the Paper
    /// doc.
    DBPAPERAddPaperDocUserResultUnknownError,

    /// The Paper doc can be shared only with team members.
    DBPAPERAddPaperDocUserResultSharingOutsideTeamDisabled,

    /// The daily limit of how many users can be added to the Paper doc was
    /// reached.
    DBPAPERAddPaperDocUserResultDailyLimitReached,

    /// Owner's permissions cannot be changed.
    DBPAPERAddPaperDocUserResultUserIsOwner,

    /// User data could not be retrieved. Clients should retry.
    DBPAPERAddPaperDocUserResultFailedUserDataRetrieval,

    /// This user already has the correct permission to the Paper doc.
    DBPAPERAddPaperDocUserResultPermissionAlreadyGranted,

    /// (no description).
    DBPAPERAddPaperDocUserResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERAddPaperDocUserResultTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "success".
///
/// Description of the "success" tag state: User was successfully added to the
/// Paper doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithSuccess;

///
/// Initializes union class with tag state of "unknown_error".
///
/// Description of the "unknown_error" tag state: Something unexpected happened
/// when trying to add the user to the Paper doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnknownError;

///
/// Initializes union class with tag state of "sharing_outside_team_disabled".
///
/// Description of the "sharing_outside_team_disabled" tag state: The Paper doc
/// can be shared only with team members.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharingOutsideTeamDisabled;

///
/// Initializes union class with tag state of "daily_limit_reached".
///
/// Description of the "daily_limit_reached" tag state: The daily limit of how
/// many users can be added to the Paper doc was reached.
///
/// @return An initialized instance.
///
- (instancetype)initWithDailyLimitReached;

///
/// Initializes union class with tag state of "user_is_owner".
///
/// Description of the "user_is_owner" tag state: Owner's permissions cannot be
/// changed.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserIsOwner;

///
/// Initializes union class with tag state of "failed_user_data_retrieval".
///
/// Description of the "failed_user_data_retrieval" tag state: User data could
/// not be retrieved. Clients should retry.
///
/// @return An initialized instance.
///
- (instancetype)initWithFailedUserDataRetrieval;

///
/// Initializes union class with tag state of "permission_already_granted".
///
/// Description of the "permission_already_granted" tag state: This user already
/// has the correct permission to the Paper doc.
///
/// @return An initialized instance.
///
- (instancetype)initWithPermissionAlreadyGranted;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "success".
///
/// @return Whether the union's current tag state has value "success".
///
- (BOOL)isSuccess;

///
/// Retrieves whether the union's current tag state has value "unknown_error".
///
/// @return Whether the union's current tag state has value "unknown_error".
///
- (BOOL)isUnknownError;

///
/// Retrieves whether the union's current tag state has value
/// "sharing_outside_team_disabled".
///
/// @return Whether the union's current tag state has value
/// "sharing_outside_team_disabled".
///
- (BOOL)isSharingOutsideTeamDisabled;

///
/// Retrieves whether the union's current tag state has value
/// "daily_limit_reached".
///
/// @return Whether the union's current tag state has value
/// "daily_limit_reached".
///
- (BOOL)isDailyLimitReached;

///
/// Retrieves whether the union's current tag state has value "user_is_owner".
///
/// @return Whether the union's current tag state has value "user_is_owner".
///
- (BOOL)isUserIsOwner;

///
/// Retrieves whether the union's current tag state has value
/// "failed_user_data_retrieval".
///
/// @return Whether the union's current tag state has value
/// "failed_user_data_retrieval".
///
- (BOOL)isFailedUserDataRetrieval;

///
/// Retrieves whether the union's current tag state has value
/// "permission_already_granted".
///
/// @return Whether the union's current tag state has value
/// "permission_already_granted".
///
- (BOOL)isPermissionAlreadyGranted;

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
/// The serialization class for the `DBPAPERAddPaperDocUserResult` union.
///
@interface DBPAPERAddPaperDocUserResultSerializer : NSObject

///
/// Serializes `DBPAPERAddPaperDocUserResult` instances.
///
/// @param instance An instance of the `DBPAPERAddPaperDocUserResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERAddPaperDocUserResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERAddPaperDocUserResult *)instance;

///
/// Deserializes `DBPAPERAddPaperDocUserResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERAddPaperDocUserResult` API object.
///
/// @return An instantiation of the `DBPAPERAddPaperDocUserResult` object.
///
+ (DBPAPERAddPaperDocUserResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
