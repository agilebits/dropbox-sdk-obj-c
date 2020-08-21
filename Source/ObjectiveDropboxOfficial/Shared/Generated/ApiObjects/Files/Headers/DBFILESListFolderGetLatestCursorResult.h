///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESListFolderGetLatestCursorResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFolderGetLatestCursorResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESListFolderGetLatestCursorResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Pass the cursor into `listFolderContinue` to see what's changed in the
/// folder since your previous query.
@property (nonatomic, readonly, copy) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor Pass the cursor into `listFolderContinue` to see what's
/// changed in the folder since your previous query.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFolderGetLatestCursorResult` struct.
///
@interface DBFILESListFolderGetLatestCursorResultSerializer : NSObject

///
/// Serializes `DBFILESListFolderGetLatestCursorResult` instances.
///
/// @param instance An instance of the `DBFILESListFolderGetLatestCursorResult`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESListFolderGetLatestCursorResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESListFolderGetLatestCursorResult *)instance;

///
/// Deserializes `DBFILESListFolderGetLatestCursorResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESListFolderGetLatestCursorResult` API object.
///
/// @return An instantiation of the `DBFILESListFolderGetLatestCursorResult`
/// object.
///
+ (DBFILESListFolderGetLatestCursorResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
