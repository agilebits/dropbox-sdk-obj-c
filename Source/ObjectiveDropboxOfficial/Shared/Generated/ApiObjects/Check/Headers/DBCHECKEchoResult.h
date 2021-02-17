///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBCHECKEchoResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `EchoResult` struct.
///
/// EchoResult contains the result returned from the Dropbox servers.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCHECKEchoResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// If everything worked correctly, this would be the same as query.
@property (nonatomic, readonly, copy) NSString *result;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param result If everything worked correctly, this would be the same as
/// query.
///
/// @return An initialized instance.
///
- (instancetype)initWithResult:(nullable NSString *)result;

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
/// The serialization class for the `EchoResult` struct.
///
@interface DBCHECKEchoResultSerializer : NSObject

///
/// Serializes `DBCHECKEchoResult` instances.
///
/// @param instance An instance of the `DBCHECKEchoResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCHECKEchoResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBCHECKEchoResult *)instance;

///
/// Deserializes `DBCHECKEchoResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCHECKEchoResult` API object.
///
/// @return An instantiation of the `DBCHECKEchoResult` object.
///
+ (DBCHECKEchoResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
