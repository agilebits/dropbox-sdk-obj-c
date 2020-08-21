///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMTeamFolderListContinueArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderListContinueArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderListContinueArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Indicates from what point to get the next set of team folders.
@property (nonatomic, readonly, copy) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor Indicates from what point to get the next set of team folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamFolderListContinueArg` struct.
///
@interface DBTEAMTeamFolderListContinueArgSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderListContinueArg` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderListContinueArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderListContinueArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMTeamFolderListContinueArg *)instance;

///
/// Deserializes `DBTEAMTeamFolderListContinueArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderListContinueArg` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderListContinueArg` object.
///
+ (DBTEAMTeamFolderListContinueArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
