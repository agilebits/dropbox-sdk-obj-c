///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGPasswordResetDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PasswordResetDetails` struct.
///
/// Reset password.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPasswordResetDetails : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `PasswordResetDetails` struct.
///
@interface DBTEAMLOGPasswordResetDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPasswordResetDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGPasswordResetDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPasswordResetDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPasswordResetDetails *)instance;

///
/// Deserializes `DBTEAMLOGPasswordResetDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPasswordResetDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPasswordResetDetails` object.
///
+ (DBTEAMLOGPasswordResetDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
