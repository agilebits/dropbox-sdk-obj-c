///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGSharedLinkPolicy;
@class DBTEAMLOGSharedFolderChangeLinkPolicyDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderChangeLinkPolicyDetails` struct.
///
/// Changed who can access shared folder via link.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedFolderChangeLinkPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New shared folder link policy.
@property (nonatomic, readonly) DBSHARINGSharedLinkPolicy *dNewValue;

/// Previous shared folder link policy. Might be missing due to historical data
/// gap.
@property (nonatomic, readonly, nullable) DBSHARINGSharedLinkPolicy *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New shared folder link policy.
/// @param previousValue Previous shared folder link policy. Might be missing
/// due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBSHARINGSharedLinkPolicy *)dNewValue
                    previousValue:(nullable DBSHARINGSharedLinkPolicy *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New shared folder link policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBSHARINGSharedLinkPolicy *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderChangeLinkPolicyDetails`
/// struct.
///
@interface DBTEAMLOGSharedFolderChangeLinkPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedFolderChangeLinkPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedFolderChangeLinkPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderChangeLinkPolicyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharedFolderChangeLinkPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedFolderChangeLinkPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderChangeLinkPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedFolderChangeLinkPolicyDetails` object.
///
+ (DBTEAMLOGSharedFolderChangeLinkPolicyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
