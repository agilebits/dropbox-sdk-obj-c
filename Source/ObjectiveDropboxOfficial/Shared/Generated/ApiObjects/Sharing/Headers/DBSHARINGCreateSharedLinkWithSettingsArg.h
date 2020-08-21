///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGCreateSharedLinkWithSettingsArg;
@class DBSHARINGSharedLinkSettings;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CreateSharedLinkWithSettingsArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGCreateSharedLinkWithSettingsArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path to be shared by the shared link.
@property (nonatomic, readonly, copy) NSString *path;

/// The requested settings for the newly created shared link.
@property (nonatomic, readonly, nullable) DBSHARINGSharedLinkSettings *settings;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path to be shared by the shared link.
/// @param settings The requested settings for the newly created shared link.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path settings:(nullable DBSHARINGSharedLinkSettings *)settings;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param path The path to be shared by the shared link.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `CreateSharedLinkWithSettingsArg` struct.
///
@interface DBSHARINGCreateSharedLinkWithSettingsArgSerializer : NSObject

///
/// Serializes `DBSHARINGCreateSharedLinkWithSettingsArg` instances.
///
/// @param instance An instance of the
/// `DBSHARINGCreateSharedLinkWithSettingsArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGCreateSharedLinkWithSettingsArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGCreateSharedLinkWithSettingsArg *)instance;

///
/// Deserializes `DBSHARINGCreateSharedLinkWithSettingsArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGCreateSharedLinkWithSettingsArg` API object.
///
/// @return An instantiation of the `DBSHARINGCreateSharedLinkWithSettingsArg`
/// object.
///
+ (DBSHARINGCreateSharedLinkWithSettingsArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
