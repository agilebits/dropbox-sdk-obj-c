///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBCLOUDDOCSLockingErrorTag;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LockingErrorTag` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCLOUDDOCSLockingErrorTag : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBCLOUDDOCSLockingErrorTagTag` enum type represents the possible tag
/// states with which the `DBCLOUDDOCSLockingErrorTag` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBCLOUDDOCSLockingErrorTagTag){
    /// A lock on the doc is held by another editor
    DBCLOUDDOCSLockingErrorTagConflict,

    /// (no description).
    DBCLOUDDOCSLockingErrorTagOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBCLOUDDOCSLockingErrorTagTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "conflict".
///
/// Description of the "conflict" tag state: A lock on the doc is held by
/// another editor
///
/// @return An initialized instance.
///
- (instancetype)initWithConflict;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "conflict".
///
/// @return Whether the union's current tag state has value "conflict".
///
- (BOOL)isConflict;

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
/// The serialization class for the `DBCLOUDDOCSLockingErrorTag` union.
///
@interface DBCLOUDDOCSLockingErrorTagSerializer : NSObject

///
/// Serializes `DBCLOUDDOCSLockingErrorTag` instances.
///
/// @param instance An instance of the `DBCLOUDDOCSLockingErrorTag` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCLOUDDOCSLockingErrorTag` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBCLOUDDOCSLockingErrorTag *)instance;

///
/// Deserializes `DBCLOUDDOCSLockingErrorTag` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCLOUDDOCSLockingErrorTag` API object.
///
/// @return An instantiation of the `DBCLOUDDOCSLockingErrorTag` object.
///
+ (DBCLOUDDOCSLockingErrorTag *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END