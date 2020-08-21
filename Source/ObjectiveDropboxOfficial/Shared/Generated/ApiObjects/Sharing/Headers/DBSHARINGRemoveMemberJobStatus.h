///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGMemberAccessLevelResult;
@class DBSHARINGRemoveFolderMemberError;
@class DBSHARINGRemoveMemberJobStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RemoveMemberJobStatus` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGRemoveMemberJobStatus : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGRemoveMemberJobStatusTag` enum type represents the possible
/// tag states with which the `DBSHARINGRemoveMemberJobStatus` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGRemoveMemberJobStatusTag) {
  /// The asynchronous job is still in progress.
  DBSHARINGRemoveMemberJobStatusInProgress,

  /// Removing the folder member has finished. The value is information about
  /// whether the member has another form of access.
  DBSHARINGRemoveMemberJobStatusComplete,

  /// (no description).
  DBSHARINGRemoveMemberJobStatusFailed,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGRemoveMemberJobStatusTag tag;

/// Removing the folder member has finished. The value is information about
/// whether the member has another form of access. @note Ensure the `isComplete`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBSHARINGMemberAccessLevelResult *complete;

/// (no description). @note Ensure the `isFailed` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBSHARINGRemoveFolderMemberError *failed;

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
/// Description of the "complete" tag state: Removing the folder member has
/// finished. The value is information about whether the member has another form
/// of access.
///
/// @param complete Removing the folder member has finished. The value is
/// information about whether the member has another form of access.
///
/// @return An initialized instance.
///
- (instancetype)initWithComplete:(DBSHARINGMemberAccessLevelResult *)complete;

///
/// Initializes union class with tag state of "failed".
///
/// @param failed (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithFailed:(DBSHARINGRemoveFolderMemberError *)failed;

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
/// Retrieves whether the union's current tag state has value "failed".
///
/// @note Call this method and ensure it returns true before accessing the
/// `failed` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "failed".
///
- (BOOL)isFailed;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGRemoveMemberJobStatus` union.
///
@interface DBSHARINGRemoveMemberJobStatusSerializer : NSObject

///
/// Serializes `DBSHARINGRemoveMemberJobStatus` instances.
///
/// @param instance An instance of the `DBSHARINGRemoveMemberJobStatus` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGRemoveMemberJobStatus` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGRemoveMemberJobStatus *)instance;

///
/// Deserializes `DBSHARINGRemoveMemberJobStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGRemoveMemberJobStatus` API object.
///
/// @return An instantiation of the `DBSHARINGRemoveMemberJobStatus` object.
///
+ (DBSHARINGRemoveMemberJobStatus *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
