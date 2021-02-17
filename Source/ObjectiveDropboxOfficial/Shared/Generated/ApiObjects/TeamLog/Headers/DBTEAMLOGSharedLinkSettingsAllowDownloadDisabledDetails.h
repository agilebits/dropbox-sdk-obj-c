///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGAccessLevel;
@class DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedLinkSettingsAllowDownloadDisabledDetails` struct.
///
/// Disabled downloads.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Shared content access level.
@property (nonatomic, readonly) DBSHARINGAccessLevel *sharedContentAccessLevel;

/// Shared content link.
@property (nonatomic, readonly, copy, nullable) NSString *sharedContentLink;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedContentAccessLevel Shared content access level.
/// @param sharedContentLink Shared content link.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedContentAccessLevel:(DBSHARINGAccessLevel *)sharedContentAccessLevel
                               sharedContentLink:(nullable NSString *)sharedContentLink;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param sharedContentAccessLevel Shared content access level.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedContentAccessLevel:(DBSHARINGAccessLevel *)sharedContentAccessLevel;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `SharedLinkSettingsAllowDownloadDisabledDetails` struct.
///
@interface DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:
    (DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails` object.
///
+ (DBTEAMLOGSharedLinkSettingsAllowDownloadDisabledDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
