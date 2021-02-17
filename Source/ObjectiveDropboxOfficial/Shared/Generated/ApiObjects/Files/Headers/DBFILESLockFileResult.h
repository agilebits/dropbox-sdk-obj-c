///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESFileLock;
@class DBFILESLockFileResult;
@class DBFILESMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LockFileResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESLockFileResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Metadata of the file.
@property (nonatomic, readonly) DBFILESMetadata *metadata;

/// The file lock state after the operation.
@property (nonatomic, readonly) DBFILESFileLock *lock;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param metadata Metadata of the file.
/// @param lock The file lock state after the operation.
///
/// @return An initialized instance.
///
- (instancetype)initWithMetadata:(DBFILESMetadata *)metadata lock:(DBFILESFileLock *)lock;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LockFileResult` struct.
///
@interface DBFILESLockFileResultSerializer : NSObject

///
/// Serializes `DBFILESLockFileResult` instances.
///
/// @param instance An instance of the `DBFILESLockFileResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESLockFileResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESLockFileResult *)instance;

///
/// Deserializes `DBFILESLockFileResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESLockFileResult` API object.
///
/// @return An instantiation of the `DBFILESLockFileResult` object.
///
+ (DBFILESLockFileResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END