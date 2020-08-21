///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGMemberPermission;
@class DBSHARINGParentFolderAccessInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ParentFolderAccessInfo` struct.
///
/// Contains information about a parent folder that a member has access to.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGParentFolderAccessInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Display name for the folder.
@property (nonatomic, readonly, copy) NSString *folderName;

/// The identifier of the parent shared folder.
@property (nonatomic, readonly, copy) NSString *sharedFolderId;

/// The user's permissions for the parent shared folder.
@property (nonatomic, readonly) NSArray<DBSHARINGMemberPermission *> *permissions;

/// The full path to the parent shared folder relative to the acting user's
/// root.
@property (nonatomic, readonly, copy) NSString *path;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param folderName Display name for the folder.
/// @param sharedFolderId The identifier of the parent shared folder.
/// @param permissions The user's permissions for the parent shared folder.
/// @param path The full path to the parent shared folder relative to the acting
/// user's root.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolderName:(NSString *)folderName
                    sharedFolderId:(NSString *)sharedFolderId
                       permissions:(NSArray<DBSHARINGMemberPermission *> *)permissions
                              path:(NSString *)path;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ParentFolderAccessInfo` struct.
///
@interface DBSHARINGParentFolderAccessInfoSerializer : NSObject

///
/// Serializes `DBSHARINGParentFolderAccessInfo` instances.
///
/// @param instance An instance of the `DBSHARINGParentFolderAccessInfo` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGParentFolderAccessInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGParentFolderAccessInfo *)instance;

///
/// Deserializes `DBSHARINGParentFolderAccessInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGParentFolderAccessInfo` API object.
///
/// @return An instantiation of the `DBSHARINGParentFolderAccessInfo` object.
///
+ (DBSHARINGParentFolderAccessInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
