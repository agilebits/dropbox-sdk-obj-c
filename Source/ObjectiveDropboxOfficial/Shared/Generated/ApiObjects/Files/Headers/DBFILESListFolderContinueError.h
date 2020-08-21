///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESListFolderContinueError;
@class DBFILESLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFolderContinueError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESListFolderContinueError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESListFolderContinueErrorTag` enum type represents the possible
/// tag states with which the `DBFILESListFolderContinueError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESListFolderContinueErrorTag) {
  /// (no description).
  DBFILESListFolderContinueErrorPath,

  /// Indicates that the cursor has been invalidated. Call `listFolder` to
  /// obtain a new cursor.
  DBFILESListFolderContinueErrorReset,

  /// (no description).
  DBFILESListFolderContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESListFolderContinueErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *path;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESLookupError *)path;

///
/// Initializes union class with tag state of "reset".
///
/// Description of the "reset" tag state: Indicates that the cursor has been
/// invalidated. Call `listFolder` to obtain a new cursor.
///
/// @return An initialized instance.
///
- (instancetype)initWithReset;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value "reset".
///
/// @return Whether the union's current tag state has value "reset".
///
- (BOOL)isReset;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESListFolderContinueError` union.
///
@interface DBFILESListFolderContinueErrorSerializer : NSObject

///
/// Serializes `DBFILESListFolderContinueError` instances.
///
/// @param instance An instance of the `DBFILESListFolderContinueError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESListFolderContinueError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESListFolderContinueError *)instance;

///
/// Deserializes `DBFILESListFolderContinueError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESListFolderContinueError` API object.
///
/// @return An instantiation of the `DBFILESListFolderContinueError` object.
///
+ (DBFILESListFolderContinueError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
