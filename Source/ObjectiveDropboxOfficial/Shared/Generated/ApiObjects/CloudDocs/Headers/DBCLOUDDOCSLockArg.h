///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBCLOUDDOCSLockArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LockArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCLOUDDOCSLockArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The API ID ("id:...") associated with the Cloud Doc
@property (nonatomic, readonly, copy) NSString *fileId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param fileId The API ID ("id:...") associated with the Cloud Doc
///
/// @return An initialized instance.
///
- (instancetype)initWithFileId:(nullable NSString *)fileId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LockArg` struct.
///
@interface DBCLOUDDOCSLockArgSerializer : NSObject

///
/// Serializes `DBCLOUDDOCSLockArg` instances.
///
/// @param instance An instance of the `DBCLOUDDOCSLockArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCLOUDDOCSLockArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBCLOUDDOCSLockArg *)instance;

///
/// Deserializes `DBCLOUDDOCSLockArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCLOUDDOCSLockArg` API object.
///
/// @return An instantiation of the `DBCLOUDDOCSLockArg` object.
///
+ (DBCLOUDDOCSLockArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
