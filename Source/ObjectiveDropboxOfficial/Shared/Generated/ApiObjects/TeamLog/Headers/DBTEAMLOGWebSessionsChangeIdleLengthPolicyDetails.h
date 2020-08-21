///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails;
@class DBTEAMLOGWebSessionsIdleLengthPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `WebSessionsChangeIdleLengthPolicyDetails` struct.
///
/// Changed how long team members can be idle while signed in to Dropbox.com.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New idle length policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGWebSessionsIdleLengthPolicy *dNewValue;

/// Previous idle length policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGWebSessionsIdleLengthPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New idle length policy. Might be missing due to historical
/// data gap.
/// @param previousValue Previous idle length policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(nullable DBTEAMLOGWebSessionsIdleLengthPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGWebSessionsIdleLengthPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `WebSessionsChangeIdleLengthPolicyDetails`
/// struct.
///
@interface DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails` object.
///
+ (DBTEAMLOGWebSessionsChangeIdleLengthPolicyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
