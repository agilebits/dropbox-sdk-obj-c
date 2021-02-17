///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESMinimalFileLinkMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MinimalFileLinkMetadata` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESMinimalFileLinkMetadata : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// URL of the shared link.
@property (nonatomic, readonly, copy) NSString *url;

/// Unique identifier for the linked file.
@property (nonatomic, readonly, copy, nullable) NSString *id_;

/// Full path in the user's Dropbox. This always starts with a slash. This field
/// will only be present only if the linked file is in the authenticated user's
/// Dropbox.
@property (nonatomic, readonly, copy, nullable) NSString *path;

/// A unique identifier for the current revision of a file. This field is the
/// same rev as elsewhere in the API and can be used to detect changes and avoid
/// conflicts.
@property (nonatomic, readonly, copy) NSString *rev;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param url URL of the shared link.
/// @param rev A unique identifier for the current revision of a file. This
/// field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
/// @param id_ Unique identifier for the linked file.
/// @param path Full path in the user's Dropbox. This always starts with a
/// slash. This field will only be present only if the linked file is in the
/// authenticated user's Dropbox.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url
                        rev:(NSString *)rev
                        id_:(nullable NSString *)id_
                       path:(nullable NSString *)path;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param url URL of the shared link.
/// @param rev A unique identifier for the current revision of a file. This
/// field is the same rev as elsewhere in the API and can be used to detect
/// changes and avoid conflicts.
///
/// @return An initialized instance.
///
- (instancetype)initWithUrl:(NSString *)url rev:(NSString *)rev;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MinimalFileLinkMetadata` struct.
///
@interface DBFILESMinimalFileLinkMetadataSerializer : NSObject

///
/// Serializes `DBFILESMinimalFileLinkMetadata` instances.
///
/// @param instance An instance of the `DBFILESMinimalFileLinkMetadata` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESMinimalFileLinkMetadata` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESMinimalFileLinkMetadata *)instance;

///
/// Deserializes `DBFILESMinimalFileLinkMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESMinimalFileLinkMetadata` API object.
///
/// @return An instantiation of the `DBFILESMinimalFileLinkMetadata` object.
///
+ (DBFILESMinimalFileLinkMetadata *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
