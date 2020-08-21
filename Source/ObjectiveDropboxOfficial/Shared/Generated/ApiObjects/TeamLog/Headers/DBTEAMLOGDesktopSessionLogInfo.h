///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>
#import <ObjectiveDropboxOfficial/DBTEAMLOGSessionLogInfo.h>

@class DBTEAMLOGDesktopSessionLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DesktopSessionLogInfo` struct.
///
/// Desktop session.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDesktopSessionLogInfo : DBTEAMLOGSessionLogInfo <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sessionId Session ID. Might be missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithSessionId:(nullable NSString *)sessionId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DesktopSessionLogInfo` struct.
///
@interface DBTEAMLOGDesktopSessionLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGDesktopSessionLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGDesktopSessionLogInfo` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDesktopSessionLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDesktopSessionLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGDesktopSessionLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDesktopSessionLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGDesktopSessionLogInfo` object.
///
+ (DBTEAMLOGDesktopSessionLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
