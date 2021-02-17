///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILEREQUESTSListFileRequestsArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFileRequestsArg` struct.
///
/// Arguments for `list`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEREQUESTSListFileRequestsArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The maximum number of file requests that should be returned per request.
@property (nonatomic, readonly) NSNumber *limit;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param limit The maximum number of file requests that should be returned per
/// request.
///
/// @return An initialized instance.
///
- (instancetype)initWithLimit:(nullable NSNumber *)limit;

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
/// The serialization class for the `ListFileRequestsArg` struct.
///
@interface DBFILEREQUESTSListFileRequestsArgSerializer : NSObject

///
/// Serializes `DBFILEREQUESTSListFileRequestsArg` instances.
///
/// @param instance An instance of the `DBFILEREQUESTSListFileRequestsArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEREQUESTSListFileRequestsArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEREQUESTSListFileRequestsArg *)instance;

///
/// Deserializes `DBFILEREQUESTSListFileRequestsArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEREQUESTSListFileRequestsArg` API object.
///
/// @return An instantiation of the `DBFILEREQUESTSListFileRequestsArg` object.
///
+ (DBFILEREQUESTSListFileRequestsArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END