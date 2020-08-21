///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails;
@class DBTEAMLOGMicrosoftOfficeAddinPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MicrosoftOfficeAddinChangePolicyDetails` struct.
///
/// Enabled/disabled Microsoft Office add-in.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New Microsoft Office addin policy.
@property (nonatomic, readonly) DBTEAMLOGMicrosoftOfficeAddinPolicy *dNewValue;

/// Previous Microsoft Office addin policy. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGMicrosoftOfficeAddinPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New Microsoft Office addin policy.
/// @param previousValue Previous Microsoft Office addin policy. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGMicrosoftOfficeAddinPolicy *)dNewValue
                    previousValue:(nullable DBTEAMLOGMicrosoftOfficeAddinPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New Microsoft Office addin policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGMicrosoftOfficeAddinPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MicrosoftOfficeAddinChangePolicyDetails`
/// struct.
///
@interface DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails` object.
///
+ (DBTEAMLOGMicrosoftOfficeAddinChangePolicyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
