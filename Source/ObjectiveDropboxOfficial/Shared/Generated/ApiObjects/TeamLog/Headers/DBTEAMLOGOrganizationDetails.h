///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGOrganizationDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `OrganizationDetails` struct.
///
/// More details about the organization.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGOrganizationDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The name of the organization.
@property (nonatomic, readonly, copy) NSString *organization;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param organization The name of the organization.
///
/// @return An initialized instance.
///
- (instancetype)initWithOrganization:(NSString *)organization;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `OrganizationDetails` struct.
///
@interface DBTEAMLOGOrganizationDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGOrganizationDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGOrganizationDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGOrganizationDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGOrganizationDetails *)instance;

///
/// Deserializes `DBTEAMLOGOrganizationDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGOrganizationDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGOrganizationDetails` object.
///
+ (DBTEAMLOGOrganizationDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
