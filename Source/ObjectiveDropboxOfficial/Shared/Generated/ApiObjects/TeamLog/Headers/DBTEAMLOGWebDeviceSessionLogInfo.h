///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGDeviceSessionLogInfo.h>

@class DBTEAMLOGWebDeviceSessionLogInfo;
@class DBTEAMLOGWebSessionLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `WebDeviceSessionLogInfo` struct.
///
/// Information on active web sessions
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGWebDeviceSessionLogInfo : DBTEAMLOGDeviceSessionLogInfo <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Web session unique id. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGWebSessionLogInfo *sessionInfo;

/// Information on the hosting device.
@property (nonatomic, readonly, copy) NSString *userAgent;

/// Information on the hosting operating system.
@property (nonatomic, readonly, copy) NSString *os;

/// Information on the browser used for this web session.
@property (nonatomic, readonly, copy) NSString *browser;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param userAgent Information on the hosting device.
/// @param os Information on the hosting operating system.
/// @param browser Information on the browser used for this web session.
/// @param ipAddress The IP address of the last activity from this session.
/// Might be missing due to historical data gap.
/// @param created The time this session was created. Might be missing due to
/// historical data gap.
/// @param updated The time of the last activity from this session. Might be
/// missing due to historical data gap.
/// @param sessionInfo Web session unique id. Might be missing due to historical
/// data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserAgent:(NSString *)userAgent
                               os:(NSString *)os
                          browser:(NSString *)browser
                        ipAddress:(nullable NSString *)ipAddress
                          created:(nullable NSDate *)created
                          updated:(nullable NSDate *)updated
                      sessionInfo:(nullable DBTEAMLOGWebSessionLogInfo *)sessionInfo;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param userAgent Information on the hosting device.
/// @param os Information on the hosting operating system.
/// @param browser Information on the browser used for this web session.
///
/// @return An initialized instance.
///
- (instancetype)initWithUserAgent:(NSString *)userAgent os:(NSString *)os browser:(NSString *)browser;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `WebDeviceSessionLogInfo` struct.
///
@interface DBTEAMLOGWebDeviceSessionLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGWebDeviceSessionLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGWebDeviceSessionLogInfo` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGWebDeviceSessionLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGWebDeviceSessionLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGWebDeviceSessionLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGWebDeviceSessionLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGWebDeviceSessionLogInfo` object.
///
+ (DBTEAMLOGWebDeviceSessionLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
