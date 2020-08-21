///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGPasswordChangeDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PasswordChangeDetails` struct.
///
/// Changed password.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPasswordChangeDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PasswordChangeDetails` struct.
///
@interface DBTEAMLOGPasswordChangeDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPasswordChangeDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGPasswordChangeDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPasswordChangeDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPasswordChangeDetails *)instance;

///
/// Deserializes `DBTEAMLOGPasswordChangeDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPasswordChangeDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPasswordChangeDetails` object.
///
+ (DBTEAMLOGPasswordChangeDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
