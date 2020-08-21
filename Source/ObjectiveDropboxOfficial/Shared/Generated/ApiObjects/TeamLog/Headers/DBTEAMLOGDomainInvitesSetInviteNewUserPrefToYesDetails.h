///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DomainInvitesSetInviteNewUserPrefToYesDetails` struct.
///
/// Enabled "Automatically invite new users".
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `DomainInvitesSetInviteNewUserPrefToYesDetails` struct.
///
@interface DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails *)instance;

///
/// Deserializes `DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails` object.
///
+ (DBTEAMLOGDomainInvitesSetInviteNewUserPrefToYesDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
