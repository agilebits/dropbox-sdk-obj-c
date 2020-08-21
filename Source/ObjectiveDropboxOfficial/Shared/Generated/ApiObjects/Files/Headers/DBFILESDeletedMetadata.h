///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBFILESMetadata.h>
#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESDeletedMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeletedMetadata` struct.
///
/// Indicates that there used to be a file or folder at this path, but it no
/// longer exists.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESDeletedMetadata : DBFILESMetadata <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param name The last component of the path (including extension). This never
/// contains a slash.
/// @param pathLower The lowercased full path in the user's Dropbox. This always
/// starts with a slash. This field will be null if the file or folder is not
/// mounted.
/// @param pathDisplay The cased path to be used for display purposes only. In
/// rare instances the casing will not correctly match the user's filesystem,
/// but this behavior will match the path provided in the Core API v1, and at
/// least the last path component will have the correct casing. Changes to only
/// the casing of paths won't be returned by `listFolderContinue`. This field
/// will be null if the file or folder is not mounted.
/// @param parentSharedFolderId Please use `parentSharedFolderId` in
/// `DBFILESFileSharingInfo` or `parentSharedFolderId` in
/// `DBFILESFolderSharingInfo` instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name
                   pathLower:(nullable NSString *)pathLower
                 pathDisplay:(nullable NSString *)pathDisplay
        parentSharedFolderId:(nullable NSString *)parentSharedFolderId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param name The last component of the path (including extension). This never
/// contains a slash.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeletedMetadata` struct.
///
@interface DBFILESDeletedMetadataSerializer : NSObject

///
/// Serializes `DBFILESDeletedMetadata` instances.
///
/// @param instance An instance of the `DBFILESDeletedMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESDeletedMetadata` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESDeletedMetadata *)instance;

///
/// Deserializes `DBFILESDeletedMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESDeletedMetadata` API object.
///
/// @return An instantiation of the `DBFILESDeletedMetadata` object.
///
+ (DBFILESDeletedMetadata *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
