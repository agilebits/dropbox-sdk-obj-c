///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESRelocationBatchV2JobStatus;
@class DBFILESRelocationBatchV2Result;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelocationBatchV2JobStatus` union.
///
/// Result returned by `dCopyBatchCheck` or `moveBatchCheck` that may either be
/// in progress or completed with result for each entry.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRelocationBatchV2JobStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESRelocationBatchV2JobStatusTag` enum type represents the possible
/// tag states with which the `DBFILESRelocationBatchV2JobStatus` union can
/// exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESRelocationBatchV2JobStatusTag){
    /// The asynchronous job is still in progress.
    DBFILESRelocationBatchV2JobStatusInProgress,

    /// The copy or move batch job has finished.
    DBFILESRelocationBatchV2JobStatusComplete,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESRelocationBatchV2JobStatusTag tag;

/// The copy or move batch job has finished. @note Ensure the `isComplete`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBFILESRelocationBatchV2Result *complete;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "in_progress".
///
/// Description of the "in_progress" tag state: The asynchronous job is still in
/// progress.
///
/// @return An initialized instance.
///
- (instancetype)initWithInProgress;

///
/// Initializes union class with tag state of "complete".
///
/// Description of the "complete" tag state: The copy or move batch job has
/// finished.
///
/// @param complete The copy or move batch job has finished.
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete:(DBFILESRelocationBatchV2Result *)complete;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "in_progress".
///
/// @return Whether the union's current tag state has value "in_progress".
///
- (BOOL)isInProgress;

///
/// Retrieves whether the union's current tag state has value "complete".
///
/// @note Call this method and ensure it returns true before accessing the
/// `complete` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "complete".
///
- (BOOL)isComplete;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESRelocationBatchV2JobStatus` union.
///
@interface DBFILESRelocationBatchV2JobStatusSerializer : NSObject

///
/// Serializes `DBFILESRelocationBatchV2JobStatus` instances.
///
/// @param instance An instance of the `DBFILESRelocationBatchV2JobStatus` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchV2JobStatus` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESRelocationBatchV2JobStatus *)instance;

///
/// Deserializes `DBFILESRelocationBatchV2JobStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchV2JobStatus` API object.
///
/// @return An instantiation of the `DBFILESRelocationBatchV2JobStatus` object.
///
+ (DBFILESRelocationBatchV2JobStatus *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
