///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMRemovedStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RemovedStatus` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMRemovedStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// True if the removed team member is recoverable.
@property (nonatomic, readonly) NSNumber *isRecoverable;

/// True if the team member's account was converted to individual account.
@property (nonatomic, readonly) NSNumber *isDisconnected;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param isRecoverable True if the removed team member is recoverable.
/// @param isDisconnected True if the team member's account was converted to
/// individual account.
///
/// @return An initialized instance.
///
- (instancetype)initWithIsRecoverable:(NSNumber *)isRecoverable isDisconnected:(NSNumber *)isDisconnected;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RemovedStatus` struct.
///
@interface DBTEAMRemovedStatusSerializer : NSObject

///
/// Serializes `DBTEAMRemovedStatus` instances.
///
/// @param instance An instance of the `DBTEAMRemovedStatus` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMRemovedStatus` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMRemovedStatus *)instance;

///
/// Deserializes `DBTEAMRemovedStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRemovedStatus` API object.
///
/// @return An instantiation of the `DBTEAMRemovedStatus` object.
///
+ (DBTEAMRemovedStatus *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
