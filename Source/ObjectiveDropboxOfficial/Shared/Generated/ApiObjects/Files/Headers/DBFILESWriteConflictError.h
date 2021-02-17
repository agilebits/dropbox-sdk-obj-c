///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESWriteConflictError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `WriteConflictError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESWriteConflictError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESWriteConflictErrorTag` enum type represents the possible tag
/// states with which the `DBFILESWriteConflictError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESWriteConflictErrorTag){
    /// There's a file in the way.
    DBFILESWriteConflictErrorFile,

    /// There's a folder in the way.
    DBFILESWriteConflictErrorFolder,

    /// There's a file at an ancestor path, so we couldn't create the required
    /// parent folders.
    DBFILESWriteConflictErrorFileAncestor,

    /// (no description).
    DBFILESWriteConflictErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESWriteConflictErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "file".
///
/// Description of the "file" tag state: There's a file in the way.
///
/// @return An initialized instance.
///
- (instancetype)initWithFile;

///
/// Initializes union class with tag state of "folder".
///
/// Description of the "folder" tag state: There's a folder in the way.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolder;

///
/// Initializes union class with tag state of "file_ancestor".
///
/// Description of the "file_ancestor" tag state: There's a file at an ancestor
/// path, so we couldn't create the required parent folders.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileAncestor;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "file".
///
/// @return Whether the union's current tag state has value "file".
///
- (BOOL)isFile;

///
/// Retrieves whether the union's current tag state has value "folder".
///
/// @return Whether the union's current tag state has value "folder".
///
- (BOOL)isFolder;

///
/// Retrieves whether the union's current tag state has value "file_ancestor".
///
/// @return Whether the union's current tag state has value "file_ancestor".
///
- (BOOL)isFileAncestor;

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
/// The serialization class for the `DBFILESWriteConflictError` union.
///
@interface DBFILESWriteConflictErrorSerializer : NSObject

///
/// Serializes `DBFILESWriteConflictError` instances.
///
/// @param instance An instance of the `DBFILESWriteConflictError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESWriteConflictError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESWriteConflictError *)instance;

///
/// Deserializes `DBFILESWriteConflictError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESWriteConflictError` API object.
///
/// @return An instantiation of the `DBFILESWriteConflictError` object.
///
+ (DBFILESWriteConflictError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
