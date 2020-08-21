///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMTeamFolderAccessError;
@class DBTEAMTeamFolderListError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderListError` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMTeamFolderListError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) DBTEAMTeamFolderAccessError *accessError;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accessError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessError:(DBTEAMTeamFolderAccessError *)accessError;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamFolderListError` struct.
///
@interface DBTEAMTeamFolderListErrorSerializer : NSObject

///
/// Serializes `DBTEAMTeamFolderListError` instances.
///
/// @param instance An instance of the `DBTEAMTeamFolderListError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderListError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMTeamFolderListError *)instance;

///
/// Deserializes `DBTEAMTeamFolderListError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMTeamFolderListError` API object.
///
/// @return An instantiation of the `DBTEAMTeamFolderListError` object.
///
+ (DBTEAMTeamFolderListError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
