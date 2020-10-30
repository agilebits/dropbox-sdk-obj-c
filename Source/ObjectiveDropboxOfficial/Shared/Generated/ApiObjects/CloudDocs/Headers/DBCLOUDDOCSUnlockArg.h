///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBCLOUDDOCSUnlockArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UnlockArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCLOUDDOCSUnlockArg : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `UnlockArg` struct.
///
@interface DBCLOUDDOCSUnlockArgSerializer : NSObject

///
/// Serializes `DBCLOUDDOCSUnlockArg` instances.
///
/// @param instance An instance of the `DBCLOUDDOCSUnlockArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCLOUDDOCSUnlockArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBCLOUDDOCSUnlockArg *)instance;

///
/// Deserializes `DBCLOUDDOCSUnlockArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCLOUDDOCSUnlockArg` API object.
///
/// @return An instantiation of the `DBCLOUDDOCSUnlockArg` object.
///
+ (DBCLOUDDOCSUnlockArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
