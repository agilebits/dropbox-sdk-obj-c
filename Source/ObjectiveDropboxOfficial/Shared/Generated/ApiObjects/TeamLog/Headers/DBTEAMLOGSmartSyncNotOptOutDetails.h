///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGSmartSyncNotOptOutDetails;
@class DBTEAMLOGSmartSyncOptOutPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SmartSyncNotOptOutDetails` struct.
///
/// Opted team into Smart Sync.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSmartSyncNotOptOutDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous Smart Sync opt out policy.
@property (nonatomic, readonly) DBTEAMLOGSmartSyncOptOutPolicy *previousValue;

/// New Smart Sync opt out policy.
@property (nonatomic, readonly) DBTEAMLOGSmartSyncOptOutPolicy *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue Previous Smart Sync opt out policy.
/// @param dNewValue New Smart Sync opt out policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(DBTEAMLOGSmartSyncOptOutPolicy *)previousValue
                            dNewValue:(DBTEAMLOGSmartSyncOptOutPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SmartSyncNotOptOutDetails` struct.
///
@interface DBTEAMLOGSmartSyncNotOptOutDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSmartSyncNotOptOutDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGSmartSyncNotOptOutDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSmartSyncNotOptOutDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSmartSyncNotOptOutDetails *)instance;

///
/// Deserializes `DBTEAMLOGSmartSyncNotOptOutDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSmartSyncNotOptOutDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGSmartSyncNotOptOutDetails` object.
///
+ (DBTEAMLOGSmartSyncNotOptOutDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
