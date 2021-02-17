///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGIntegrationDisconnectedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `IntegrationDisconnectedDetails` struct.
///
/// Disconnected integration for member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGIntegrationDisconnectedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Name of the third-party integration.
@property (nonatomic, readonly, copy) NSString *integrationName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param integrationName Name of the third-party integration.
///
/// @return An initialized instance.
///
- (instancetype)initWithIntegrationName:(NSString *)integrationName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `IntegrationDisconnectedDetails` struct.
///
@interface DBTEAMLOGIntegrationDisconnectedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGIntegrationDisconnectedDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGIntegrationDisconnectedDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGIntegrationDisconnectedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGIntegrationDisconnectedDetails *)instance;

///
/// Deserializes `DBTEAMLOGIntegrationDisconnectedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGIntegrationDisconnectedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGIntegrationDisconnectedDetails`
/// object.
///
+ (DBTEAMLOGIntegrationDisconnectedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END