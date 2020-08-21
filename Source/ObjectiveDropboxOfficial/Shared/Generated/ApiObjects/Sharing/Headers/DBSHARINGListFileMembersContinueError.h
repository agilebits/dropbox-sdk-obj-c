///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGListFileMembersContinueError;
@class DBSHARINGSharingFileAccessError;
@class DBSHARINGSharingUserError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFileMembersContinueError` union.
///
/// Error for `listFileMembersContinue`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListFileMembersContinueError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGListFileMembersContinueErrorTag` enum type represents the
/// possible tag states with which the `DBSHARINGListFileMembersContinueError`
/// union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGListFileMembersContinueErrorTag) {
  /// (no description).
  DBSHARINGListFileMembersContinueErrorUserError,

  /// (no description).
  DBSHARINGListFileMembersContinueErrorAccessError,

  /// `cursor` in `DBSHARINGListFileMembersContinueArg` is invalid.
  DBSHARINGListFileMembersContinueErrorInvalidCursor,

  /// (no description).
  DBSHARINGListFileMembersContinueErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGListFileMembersContinueErrorTag tag;

/// (no description). @note Ensure the `isUserError` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharingUserError *userError;

/// (no description). @note Ensure the `isAccessError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharingFileAccessError *accessError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_error".
///
/// @param userError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithUserError:(DBSHARINGSharingUserError *)userError;

///
/// Initializes union class with tag state of "access_error".
///
/// @param accessError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessError:(DBSHARINGSharingFileAccessError *)accessError;

///
/// Initializes union class with tag state of "invalid_cursor".
///
/// Description of the "invalid_cursor" tag state: `cursor` in
/// `DBSHARINGListFileMembersContinueArg` is invalid.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidCursor;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `userError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "user_error".
///
- (BOOL)isUserError;

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `accessError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "invalid_cursor".
///
/// @return Whether the union's current tag state has value "invalid_cursor".
///
- (BOOL)isInvalidCursor;

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
/// The serialization class for the `DBSHARINGListFileMembersContinueError`
/// union.
///
@interface DBSHARINGListFileMembersContinueErrorSerializer : NSObject

///
/// Serializes `DBSHARINGListFileMembersContinueError` instances.
///
/// @param instance An instance of the `DBSHARINGListFileMembersContinueError`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersContinueError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGListFileMembersContinueError *)instance;

///
/// Deserializes `DBSHARINGListFileMembersContinueError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersContinueError` API object.
///
/// @return An instantiation of the `DBSHARINGListFileMembersContinueError`
/// object.
///
+ (DBSHARINGListFileMembersContinueError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
