///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGUnshareFileArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UnshareFileArg` struct.
///
/// Arguments for `unshareFile`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGUnshareFileArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The file to unshare.
@property (nonatomic, readonly, copy) NSString *file;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param file The file to unshare.
///
/// @return An initialized instance.
///
- (instancetype)initWithFile:(NSString *)file;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UnshareFileArg` struct.
///
@interface DBSHARINGUnshareFileArgSerializer : NSObject

///
/// Serializes `DBSHARINGUnshareFileArg` instances.
///
/// @param instance An instance of the `DBSHARINGUnshareFileArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGUnshareFileArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGUnshareFileArg *)instance;

///
/// Deserializes `DBSHARINGUnshareFileArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGUnshareFileArg` API object.
///
/// @return An instantiation of the `DBSHARINGUnshareFileArg` object.
///
+ (DBSHARINGUnshareFileArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
