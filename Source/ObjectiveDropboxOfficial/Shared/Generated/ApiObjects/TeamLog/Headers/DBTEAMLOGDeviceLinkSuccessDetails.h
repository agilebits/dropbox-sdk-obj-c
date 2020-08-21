///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGDeviceLinkSuccessDetails;
@class DBTEAMLOGDeviceSessionLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeviceLinkSuccessDetails` struct.
///
/// Linked device.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDeviceLinkSuccessDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Device's session logged information.
@property (nonatomic, readonly, nullable) DBTEAMLOGDeviceSessionLogInfo *deviceSessionInfo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param deviceSessionInfo Device's session logged information.
///
/// @return An initialized instance.
///
- (instancetype)initWithDeviceSessionInfo:(nullable DBTEAMLOGDeviceSessionLogInfo *)deviceSessionInfo;

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
/// The serialization class for the `DeviceLinkSuccessDetails` struct.
///
@interface DBTEAMLOGDeviceLinkSuccessDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDeviceLinkSuccessDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGDeviceLinkSuccessDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceLinkSuccessDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDeviceLinkSuccessDetails *)instance;

///
/// Deserializes `DBTEAMLOGDeviceLinkSuccessDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDeviceLinkSuccessDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGDeviceLinkSuccessDetails` object.
///
+ (DBTEAMLOGDeviceLinkSuccessDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
