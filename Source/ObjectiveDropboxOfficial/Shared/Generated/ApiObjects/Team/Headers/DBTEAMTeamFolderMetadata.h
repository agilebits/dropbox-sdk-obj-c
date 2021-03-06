///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESContentSyncSetting;
@class DBFILESSyncSetting;
@class DBTEAMTeamFolderMetadata;
@class DBTEAMTeamFolderStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderMetadata` struct.
///
/// Properties of a team folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderMetadata : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The ID of the team folder.
@property (nonatomic, readonly, copy) NSString *teamFolderId;

/// The name of the team folder.
@property (nonatomic, readonly, copy) NSString *name;

/// The status of the team folder.
@property (nonatomic, readonly) DBTEAMTeamFolderStatus *status;

/// True if this team folder is a shared team root.
@property (nonatomic, readonly) NSNumber *isTeamSharedDropbox;

/// The sync setting applied to this team folder.
@property (nonatomic, readonly) DBFILESSyncSetting *syncSetting;

/// Sync settings applied to contents of this team folder.
@property (nonatomic, readonly) NSArray<DBFILESContentSyncSetting *> *contentSyncSettings;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamFolderId The ID of the team folder.
/// @param name The name of the team folder.
/// @param status The status of the team folder.
/// @param isTeamSharedDropbox True if this team folder is a shared team root.
/// @param syncSetting The sync setting applied to this team folder.
/// @param contentSyncSettings Sync settings applied to contents of this team
/// folder.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamFolderId:(NSString *)teamFolderId
                                name:(NSString *)name
                              status:(DBTEAMTeamFolderStatus *)status
                 isTeamSharedDropbox:(NSNumber *)isTeamSharedDropbox
                         syncSetting:(DBFILESSyncSetting *)syncSetting
                 contentSyncSettings:(NSArray<DBFILESContentSyncSetting *> *)contentSyncSettings;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamFolderMetadata` struct.
///
@interface DBTEAMTeamFolderMetadataSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderMetadata` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderMetadata` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderMetadata` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMTeamFolderMetadata *)instance;

///
/// Deserializes `DBTEAMTeamFolderMetadata` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderMetadata` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderMetadata` object.
///
+ (DBTEAMTeamFolderMetadata *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
