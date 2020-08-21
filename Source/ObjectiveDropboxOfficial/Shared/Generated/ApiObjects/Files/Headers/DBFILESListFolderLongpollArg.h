///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESListFolderLongpollArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFolderLongpollArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESListFolderLongpollArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A cursor as returned by `listFolder` or `listFolderContinue`. Cursors
/// retrieved by setting `includeMediaInfo` in `DBFILESListFolderArg` to true
/// are not supported.
@property (nonatomic, readonly, copy) NSString *cursor;

/// A timeout in seconds. The request will block for at most this length of
/// time, plus up to 90 seconds of random jitter added to avoid the thundering
/// herd problem. Care should be taken when using this parameter, as some
/// network infrastructure does not support long timeouts.
@property (nonatomic, readonly) NSNumber *timeout;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor A cursor as returned by `listFolder` or `listFolderContinue`.
/// Cursors retrieved by setting `includeMediaInfo` in `DBFILESListFolderArg` to
/// true are not supported.
/// @param timeout A timeout in seconds. The request will block for at most this
/// length of time, plus up to 90 seconds of random jitter added to avoid the
/// thundering herd problem. Care should be taken when using this parameter, as
/// some network infrastructure does not support long timeouts.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(NSString *)cursor timeout:(nullable NSNumber *)timeout;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param cursor A cursor as returned by `listFolder` or `listFolderContinue`.
/// Cursors retrieved by setting `includeMediaInfo` in `DBFILESListFolderArg` to
/// true are not supported.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFolderLongpollArg` struct.
///
@interface DBFILESListFolderLongpollArgSerializer : NSObject

///
/// Serializes `DBFILESListFolderLongpollArg` instances.
///
/// @param instance An instance of the `DBFILESListFolderLongpollArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESListFolderLongpollArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESListFolderLongpollArg *)instance;

///
/// Deserializes `DBFILESListFolderLongpollArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESListFolderLongpollArg` API object.
///
/// @return An instantiation of the `DBFILESListFolderLongpollArg` object.
///
+ (DBFILESListFolderLongpollArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
