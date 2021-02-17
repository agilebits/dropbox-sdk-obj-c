///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileLockingPolicyChangedDetails;
@class DBTEAMPOLICIESFileLockingPolicyState;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileLockingPolicyChangedDetails` struct.
///
/// Changed file locking policy for team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileLockingPolicyChangedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New file locking policy.
@property (nonatomic, readonly) DBTEAMPOLICIESFileLockingPolicyState *dNewValue;

/// Previous file locking policy.
@property (nonatomic, readonly) DBTEAMPOLICIESFileLockingPolicyState *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New file locking policy.
/// @param previousValue Previous file locking policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMPOLICIESFileLockingPolicyState *)dNewValue
                    previousValue:(DBTEAMPOLICIESFileLockingPolicyState *)previousValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileLockingPolicyChangedDetails` struct.
///
@interface DBTEAMLOGFileLockingPolicyChangedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileLockingPolicyChangedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGFileLockingPolicyChangedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileLockingPolicyChangedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileLockingPolicyChangedDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileLockingPolicyChangedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileLockingPolicyChangedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileLockingPolicyChangedDetails`
/// object.
///
+ (DBTEAMLOGFileLockingPolicyChangedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
