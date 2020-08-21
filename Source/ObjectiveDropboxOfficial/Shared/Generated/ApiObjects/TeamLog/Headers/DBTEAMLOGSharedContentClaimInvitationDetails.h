///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGSharedContentClaimInvitationDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentClaimInvitationDetails` struct.
///
/// Acquired membership of shared file/folder by accepting invite.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentClaimInvitationDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Shared content link.
@property (nonatomic, readonly, copy, nullable) NSString *sharedContentLink;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedContentLink Shared content link.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedContentLink:(nullable NSString *)sharedContentLink;

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
/// The serialization class for the `SharedContentClaimInvitationDetails`
/// struct.
///
@interface DBTEAMLOGSharedContentClaimInvitationDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentClaimInvitationDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentClaimInvitationDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentClaimInvitationDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharedContentClaimInvitationDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentClaimInvitationDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentClaimInvitationDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentClaimInvitationDetails` object.
///
+ (DBTEAMLOGSharedContentClaimInvitationDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
