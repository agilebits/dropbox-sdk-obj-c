///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGDisabledDomainInvitesDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DisabledDomainInvitesDetails` struct.
///
/// Disabled domain invites.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDisabledDomainInvitesDetails : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `DisabledDomainInvitesDetails` struct.
///
@interface DBTEAMLOGDisabledDomainInvitesDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDisabledDomainInvitesDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGDisabledDomainInvitesDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDisabledDomainInvitesDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDisabledDomainInvitesDetails *)instance;

///
/// Deserializes `DBTEAMLOGDisabledDomainInvitesDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDisabledDomainInvitesDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGDisabledDomainInvitesDetails`
/// object.
///
+ (DBTEAMLOGDisabledDomainInvitesDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
