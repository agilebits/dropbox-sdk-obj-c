///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGTeamFolderPermanentlyDeleteDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamFolderPermanentlyDeleteDetails` struct.
///
/// Permanently deleted archived team folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamFolderPermanentlyDeleteDetails : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `TeamFolderPermanentlyDeleteDetails` struct.
///
@interface DBTEAMLOGTeamFolderPermanentlyDeleteDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamFolderPermanentlyDeleteDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamFolderPermanentlyDeleteDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamFolderPermanentlyDeleteDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTeamFolderPermanentlyDeleteDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamFolderPermanentlyDeleteDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamFolderPermanentlyDeleteDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGTeamFolderPermanentlyDeleteDetails` object.
///
+ (DBTEAMLOGTeamFolderPermanentlyDeleteDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
