///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileLockingLockStatusChangedDetails;
@class DBTEAMLOGLockStatus;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileLockingLockStatusChangedDetails` struct.
///
/// Locked/unlocked editing for a file.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileLockingLockStatusChangedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous lock status of the file.
@property (nonatomic, readonly) DBTEAMLOGLockStatus *previousValue;

/// New lock status of the file.
@property (nonatomic, readonly) DBTEAMLOGLockStatus *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue Previous lock status of the file.
/// @param dNewValue New lock status of the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(DBTEAMLOGLockStatus *)previousValue dNewValue:(DBTEAMLOGLockStatus *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileLockingLockStatusChangedDetails`
/// struct.
///
@interface DBTEAMLOGFileLockingLockStatusChangedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileLockingLockStatusChangedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGFileLockingLockStatusChangedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileLockingLockStatusChangedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileLockingLockStatusChangedDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileLockingLockStatusChangedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileLockingLockStatusChangedDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGFileLockingLockStatusChangedDetails` object.
///
+ (DBTEAMLOGFileLockingLockStatusChangedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END