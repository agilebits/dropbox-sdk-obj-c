///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMStorageBucket;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `StorageBucket` struct.
///
/// Describes the number of users in a specific storage bucket.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMStorageBucket : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The name of the storage bucket. For example, '1G' is a bucket of users with
/// storage size up to 1 Giga.
@property (nonatomic, readonly, copy) NSString *bucket;

/// The number of people whose storage is in the range of this storage bucket.
@property (nonatomic, readonly) NSNumber *users;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param bucket The name of the storage bucket. For example, '1G' is a bucket
/// of users with storage size up to 1 Giga.
/// @param users The number of people whose storage is in the range of this
/// storage bucket.
///
/// @return An initialized instance.
///
- (instancetype)initWithBucket:(NSString *)bucket users:(NSNumber *)users;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `StorageBucket` struct.
///
@interface DBTEAMStorageBucketSerializer : NSObject

///
/// Serializes `DBTEAMStorageBucket` instances.
///
/// @param instance An instance of the `DBTEAMStorageBucket` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMStorageBucket` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMStorageBucket *)instance;

///
/// Deserializes `DBTEAMStorageBucket` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMStorageBucket` API object.
///
/// @return An instantiation of the `DBTEAMStorageBucket` object.
///
+ (DBTEAMStorageBucket *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
