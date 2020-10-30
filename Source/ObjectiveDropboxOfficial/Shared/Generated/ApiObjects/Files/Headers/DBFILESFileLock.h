///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESFileLock;
@class DBFILESFileLockContent;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileLock` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESFileLock : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The lock description.
@property (nonatomic, readonly) DBFILESFileLockContent *content;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param content The lock description.
///
/// @return An initialized instance.
///
- (instancetype)initWithContent:(DBFILESFileLockContent *)content;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileLock` struct.
///
@interface DBFILESFileLockSerializer : NSObject

///
/// Serializes `DBFILESFileLock` instances.
///
/// @param instance An instance of the `DBFILESFileLock` API object.
///
/// @return A json-compatible dictionary representation of the `DBFILESFileLock`
/// API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESFileLock *)instance;

///
/// Deserializes `DBFILESFileLock` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESFileLock` API object.
///
/// @return An instantiation of the `DBFILESFileLock` object.
///
+ (DBFILESFileLock *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
