///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>
#import <ObjectiveDropboxOfficial/DBUSERSAccount.h>

@class DBUSERSBasicAccount;
@class DBUSERSName;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `BasicAccount` struct.
///
/// Basic information about any account.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSBasicAccount : DBUSERSAccount <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Whether this user is a teammate of the current user. If this account is the
/// current user's account, then this will be true.
@property (nonatomic, readonly) NSNumber *isTeammate;

/// The user's unique team member id. This field will only be present if the
/// user is part of a team and isTeammate is true.
@property (nonatomic, readonly, copy, nullable) NSString *teamMemberId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accountId The user's unique Dropbox ID.
/// @param name Details of a user's name.
/// @param email The user's e-mail address. Do not rely on this without checking
/// the emailVerified field. Even then, it's possible that the user has since
/// lost access to their e-mail.
/// @param emailVerified Whether the user has verified their e-mail address.
/// @param disabled Whether the user has been disabled.
/// @param isTeammate Whether this user is a teammate of the current user. If
/// this account is the current user's account, then this will be true.
/// @param profilePhotoUrl URL for the photo representing the user, if one is
/// set.
/// @param teamMemberId The user's unique team member id. This field will only
/// be present if the user is part of a team and isTeammate is true.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountId:(NSString *)accountId
                             name:(DBUSERSName *)name
                            email:(NSString *)email
                    emailVerified:(NSNumber *)emailVerified
                         disabled:(NSNumber *)disabled
                       isTeammate:(NSNumber *)isTeammate
                  profilePhotoUrl:(nullable NSString *)profilePhotoUrl
                     teamMemberId:(nullable NSString *)teamMemberId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param accountId The user's unique Dropbox ID.
/// @param name Details of a user's name.
/// @param email The user's e-mail address. Do not rely on this without checking
/// the emailVerified field. Even then, it's possible that the user has since
/// lost access to their e-mail.
/// @param emailVerified Whether the user has verified their e-mail address.
/// @param disabled Whether the user has been disabled.
/// @param isTeammate Whether this user is a teammate of the current user. If
/// this account is the current user's account, then this will be true.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccountId:(NSString *)accountId
                             name:(DBUSERSName *)name
                            email:(NSString *)email
                    emailVerified:(NSNumber *)emailVerified
                         disabled:(NSNumber *)disabled
                       isTeammate:(NSNumber *)isTeammate;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `BasicAccount` struct.
///
@interface DBUSERSBasicAccountSerializer : NSObject

///
/// Serializes `DBUSERSBasicAccount` instances.
///
/// @param instance An instance of the `DBUSERSBasicAccount` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBUSERSBasicAccount` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBUSERSBasicAccount *)instance;

///
/// Deserializes `DBUSERSBasicAccount` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBUSERSBasicAccount` API object.
///
/// @return An instantiation of the `DBUSERSBasicAccount` object.
///
+ (DBUSERSBasicAccount *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
