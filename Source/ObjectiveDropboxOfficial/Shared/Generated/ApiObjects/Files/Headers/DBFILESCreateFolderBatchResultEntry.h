///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESCreateFolderBatchResultEntry;
@class DBFILESCreateFolderEntryError;
@class DBFILESCreateFolderEntryResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `CreateFolderBatchResultEntry` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESCreateFolderBatchResultEntry : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESCreateFolderBatchResultEntryTag` enum type represents the
/// possible tag states with which the `DBFILESCreateFolderBatchResultEntry`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESCreateFolderBatchResultEntryTag){
    /// (no description).
    DBFILESCreateFolderBatchResultEntrySuccess,

    /// (no description).
    DBFILESCreateFolderBatchResultEntryFailure,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESCreateFolderBatchResultEntryTag tag;

/// (no description). @note Ensure the `isSuccess` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESCreateFolderEntryResult *success;

/// (no description). @note Ensure the `isFailure` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESCreateFolderEntryError *failure;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "success".
///
/// @param success (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithSuccess:(DBFILESCreateFolderEntryResult *)success;

///
/// Initializes union class with tag state of "failure".
///
/// @param failure (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithFailure:(DBFILESCreateFolderEntryError *)failure;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "success".
///
/// @note Call this method and ensure it returns true before accessing the
/// `success` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "success".
///
- (BOOL)isSuccess;

///
/// Retrieves whether the union's current tag state has value "failure".
///
/// @note Call this method and ensure it returns true before accessing the
/// `failure` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "failure".
///
- (BOOL)isFailure;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESCreateFolderBatchResultEntry` union.
///
@interface DBFILESCreateFolderBatchResultEntrySerializer : NSObject

///
/// Serializes `DBFILESCreateFolderBatchResultEntry` instances.
///
/// @param instance An instance of the `DBFILESCreateFolderBatchResultEntry` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESCreateFolderBatchResultEntry` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESCreateFolderBatchResultEntry *)instance;

///
/// Deserializes `DBFILESCreateFolderBatchResultEntry` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESCreateFolderBatchResultEntry` API object.
///
/// @return An instantiation of the `DBFILESCreateFolderBatchResultEntry`
/// object.
///
+ (DBFILESCreateFolderBatchResultEntry *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
