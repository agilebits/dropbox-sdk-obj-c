///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBFILESFileOpsResult.h>
#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESRelocationBatchResultEntry;
@class DBFILESRelocationBatchV2Result;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelocationBatchV2Result` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRelocationBatchV2Result : DBFILESFileOpsResult <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Each entry in CopyBatchArg.entries or `entries` in `DBFILESMoveBatchArg`
/// will appear at the same position inside `entries` in
/// `DBFILESRelocationBatchV2Result`.
@property (nonatomic, readonly) NSArray<DBFILESRelocationBatchResultEntry *> *entries;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param entries Each entry in CopyBatchArg.entries or `entries` in
/// `DBFILESMoveBatchArg` will appear at the same position inside `entries` in
/// `DBFILESRelocationBatchV2Result`.
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBFILESRelocationBatchResultEntry *> *)entries;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RelocationBatchV2Result` struct.
///
@interface DBFILESRelocationBatchV2ResultSerializer : NSObject

///
/// Serializes `DBFILESRelocationBatchV2Result` instances.
///
/// @param instance An instance of the `DBFILESRelocationBatchV2Result` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchV2Result` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESRelocationBatchV2Result *)instance;

///
/// Deserializes `DBFILESRelocationBatchV2Result` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRelocationBatchV2Result` API object.
///
/// @return An instantiation of the `DBFILESRelocationBatchV2Result` object.
///
+ (DBFILESRelocationBatchV2Result *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
