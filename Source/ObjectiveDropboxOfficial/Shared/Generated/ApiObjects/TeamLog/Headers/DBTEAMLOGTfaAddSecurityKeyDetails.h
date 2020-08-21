///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGTfaAddSecurityKeyDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TfaAddSecurityKeyDetails` struct.
///
/// Added security key for two-step verification.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTfaAddSecurityKeyDetails : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `TfaAddSecurityKeyDetails` struct.
///
@interface DBTEAMLOGTfaAddSecurityKeyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTfaAddSecurityKeyDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGTfaAddSecurityKeyDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTfaAddSecurityKeyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTfaAddSecurityKeyDetails *)instance;

///
/// Deserializes `DBTEAMLOGTfaAddSecurityKeyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTfaAddSecurityKeyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTfaAddSecurityKeyDetails` object.
///
+ (DBTEAMLOGTfaAddSecurityKeyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
