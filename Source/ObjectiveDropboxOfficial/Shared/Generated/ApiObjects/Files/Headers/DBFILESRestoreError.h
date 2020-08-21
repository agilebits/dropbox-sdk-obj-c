///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESLookupError;
@class DBFILESRestoreError;
@class DBFILESWriteError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RestoreError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRestoreError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESRestoreErrorTag` enum type represents the possible tag states
/// with which the `DBFILESRestoreError` union can exist.
typedef NS_ENUM(NSInteger, DBFILESRestoreErrorTag) {
  /// An error occurs when downloading metadata for the file.
  DBFILESRestoreErrorPathLookup,

  /// An error occurs when trying to restore the file to that path.
  DBFILESRestoreErrorPathWrite,

  /// The revision is invalid. It may not exist.
  DBFILESRestoreErrorInvalidRevision,

  /// (no description).
  DBFILESRestoreErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESRestoreErrorTag tag;

/// An error occurs when downloading metadata for the file. @note Ensure the
/// `isPathLookup` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *pathLookup;

/// An error occurs when trying to restore the file to that path. @note Ensure
/// the `isPathWrite` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly) DBFILESWriteError *pathWrite;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path_lookup".
///
/// Description of the "path_lookup" tag state: An error occurs when downloading
/// metadata for the file.
///
/// @param pathLookup An error occurs when downloading metadata for the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithPathLookup:(DBFILESLookupError *)pathLookup;

///
/// Initializes union class with tag state of "path_write".
///
/// Description of the "path_write" tag state: An error occurs when trying to
/// restore the file to that path.
///
/// @param pathWrite An error occurs when trying to restore the file to that
/// path.
///
/// @return An initialized instance.
///
- (instancetype)initWithPathWrite:(DBFILESWriteError *)pathWrite;

///
/// Initializes union class with tag state of "invalid_revision".
///
/// Description of the "invalid_revision" tag state: The revision is invalid. It
/// may not exist.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidRevision;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path_lookup".
///
/// @note Call this method and ensure it returns true before accessing the
/// `pathLookup` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path_lookup".
///
- (BOOL)isPathLookup;

///
/// Retrieves whether the union's current tag state has value "path_write".
///
/// @note Call this method and ensure it returns true before accessing the
/// `pathWrite` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path_write".
///
- (BOOL)isPathWrite;

///
/// Retrieves whether the union's current tag state has value
/// "invalid_revision".
///
/// @return Whether the union's current tag state has value "invalid_revision".
///
- (BOOL)isInvalidRevision;

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
/// The serialization class for the `DBFILESRestoreError` union.
///
@interface DBFILESRestoreErrorSerializer : NSObject

///
/// Serializes `DBFILESRestoreError` instances.
///
/// @param instance An instance of the `DBFILESRestoreError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRestoreError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESRestoreError *)instance;

///
/// Deserializes `DBFILESRestoreError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRestoreError` API object.
///
/// @return An instantiation of the `DBFILESRestoreError` object.
///
+ (DBFILESRestoreError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
