///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERCursor;
@class DBPAPERInviteeInfoWithPermissionLevel;
@class DBPAPERListUsersOnPaperDocResponse;
@class DBPAPERUserInfoWithPermissionLevel;
@class DBSHARINGUserInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListUsersOnPaperDocResponse` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERListUsersOnPaperDocResponse : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// List of email addresses with their respective permission levels that are
/// invited on the Paper doc.
@property (nonatomic, readonly) NSArray<DBPAPERInviteeInfoWithPermissionLevel *> *invitees;

/// List of users with their respective permission levels that are invited on
/// the Paper folder.
@property (nonatomic, readonly) NSArray<DBPAPERUserInfoWithPermissionLevel *> *users;

/// The Paper doc owner. This field is populated on every single response.
@property (nonatomic, readonly) DBSHARINGUserInfo *docOwner;

/// Pass the cursor into `docsUsersListContinue` to paginate through all users.
/// The cursor preserves all properties as specified in the original call to
/// `docsUsersList`.
@property (nonatomic, readonly) DBPAPERCursor *cursor;

/// Will be set to True if a subsequent call with the provided cursor to
/// `docsUsersListContinue` returns immediately with some results. If set to
/// False please allow some delay before making another call to
/// `docsUsersListContinue`.
@property (nonatomic, readonly) NSNumber *hasMore;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param invitees List of email addresses with their respective permission
/// levels that are invited on the Paper doc.
/// @param users List of users with their respective permission levels that are
/// invited on the Paper folder.
/// @param docOwner The Paper doc owner. This field is populated on every single
/// response.
/// @param cursor Pass the cursor into `docsUsersListContinue` to paginate
/// through all users. The cursor preserves all properties as specified in the
/// original call to `docsUsersList`.
/// @param hasMore Will be set to True if a subsequent call with the provided
/// cursor to `docsUsersListContinue` returns immediately with some results. If
/// set to False please allow some delay before making another call to
/// `docsUsersListContinue`.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvitees:(NSArray<DBPAPERInviteeInfoWithPermissionLevel *> *)invitees
                           users:(NSArray<DBPAPERUserInfoWithPermissionLevel *> *)users
                        docOwner:(DBSHARINGUserInfo *)docOwner
                          cursor:(DBPAPERCursor *)cursor
                         hasMore:(NSNumber *)hasMore;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListUsersOnPaperDocResponse` struct.
///
@interface DBPAPERListUsersOnPaperDocResponseSerializer : NSObject

///
/// Serializes `DBPAPERListUsersOnPaperDocResponse` instances.
///
/// @param instance An instance of the `DBPAPERListUsersOnPaperDocResponse` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERListUsersOnPaperDocResponse` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERListUsersOnPaperDocResponse *)instance;

///
/// Deserializes `DBPAPERListUsersOnPaperDocResponse` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERListUsersOnPaperDocResponse` API object.
///
/// @return An instantiation of the `DBPAPERListUsersOnPaperDocResponse` object.
///
+ (DBPAPERListUsersOnPaperDocResponse *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
