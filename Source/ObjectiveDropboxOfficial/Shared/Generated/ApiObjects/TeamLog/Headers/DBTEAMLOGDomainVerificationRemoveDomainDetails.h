///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGDomainVerificationRemoveDomainDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DomainVerificationRemoveDomainDetails` struct.
///
/// Removed domain from list of verified team domains.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGDomainVerificationRemoveDomainDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Domain names.
@property (nonatomic, readonly) NSArray<NSString *> *domainNames;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param domainNames Domain names.
///
/// @return An initialized instance.
///
- (instancetype)initWithDomainNames:(NSArray<NSString *> *)domainNames;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DomainVerificationRemoveDomainDetails`
/// struct.
///
@interface DBTEAMLOGDomainVerificationRemoveDomainDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGDomainVerificationRemoveDomainDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGDomainVerificationRemoveDomainDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGDomainVerificationRemoveDomainDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGDomainVerificationRemoveDomainDetails *)instance;

///
/// Deserializes `DBTEAMLOGDomainVerificationRemoveDomainDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGDomainVerificationRemoveDomainDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGDomainVerificationRemoveDomainDetails` object.
///
+ (DBTEAMLOGDomainVerificationRemoveDomainDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
