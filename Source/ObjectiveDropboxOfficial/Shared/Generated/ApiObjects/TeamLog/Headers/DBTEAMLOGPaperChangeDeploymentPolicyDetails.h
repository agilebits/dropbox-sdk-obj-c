///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGPaperChangeDeploymentPolicyDetails;
@class DBTEAMPOLICIESPaperDeploymentPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperChangeDeploymentPolicyDetails` struct.
///
/// Changed whether Dropbox Paper, when enabled, is deployed to all members or
/// to specific members.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperChangeDeploymentPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New Dropbox Paper deployment policy.
@property (nonatomic, readonly) DBTEAMPOLICIESPaperDeploymentPolicy *dNewValue;

/// Previous Dropbox Paper deployment policy. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) DBTEAMPOLICIESPaperDeploymentPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New Dropbox Paper deployment policy.
/// @param previousValue Previous Dropbox Paper deployment policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMPOLICIESPaperDeploymentPolicy *)dNewValue
                    previousValue:(nullable DBTEAMPOLICIESPaperDeploymentPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New Dropbox Paper deployment policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMPOLICIESPaperDeploymentPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperChangeDeploymentPolicyDetails` struct.
///
@interface DBTEAMLOGPaperChangeDeploymentPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperChangeDeploymentPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPaperChangeDeploymentPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperChangeDeploymentPolicyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPaperChangeDeploymentPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperChangeDeploymentPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperChangeDeploymentPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGPaperChangeDeploymentPolicyDetails` object.
///
+ (DBTEAMLOGPaperChangeDeploymentPolicyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
