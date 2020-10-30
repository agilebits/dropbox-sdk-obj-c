///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESUnlockFileArg;
@class DBFILESUnlockFileBatchArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UnlockFileBatchArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESUnlockFileBatchArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// List of 'entries'. Each 'entry' contains a path of the file which will be
/// unlocked. Duplicate path arguments in the batch are considered only once.
@property (nonatomic, readonly) NSArray<DBFILESUnlockFileArg *> *entries;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param entries List of 'entries'. Each 'entry' contains a path of the file
/// which will be unlocked. Duplicate path arguments in the batch are considered
/// only once.
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBFILESUnlockFileArg *> *)entries;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UnlockFileBatchArg` struct.
///
@interface DBFILESUnlockFileBatchArgSerializer : NSObject

///
/// Serializes `DBFILESUnlockFileBatchArg` instances.
///
/// @param instance An instance of the `DBFILESUnlockFileBatchArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESUnlockFileBatchArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESUnlockFileBatchArg *)instance;

///
/// Deserializes `DBFILESUnlockFileBatchArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESUnlockFileBatchArg` API object.
///
/// @return An instantiation of the `DBFILESUnlockFileBatchArg` object.
///
+ (DBFILESUnlockFileBatchArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
