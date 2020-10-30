///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLegalHoldsListPoliciesArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsListPoliciesArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLegalHoldsListPoliciesArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Whether to return holds that were released.
@property (nonatomic, readonly) NSNumber *includeReleased;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param includeReleased Whether to return holds that were released.
///
/// @return An initialized instance.
///
- (instancetype)initWithIncludeReleased:(nullable NSNumber *)includeReleased;

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
/// The serialization class for the `LegalHoldsListPoliciesArg` struct.
///
@interface DBTEAMLegalHoldsListPoliciesArgSerializer : NSObject

///
/// Serializes `DBTEAMLegalHoldsListPoliciesArg` instances.
///
/// @param instance An instance of the `DBTEAMLegalHoldsListPoliciesArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsListPoliciesArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLegalHoldsListPoliciesArg *)instance;

///
/// Deserializes `DBTEAMLegalHoldsListPoliciesArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsListPoliciesArg` API object.
///
/// @return An instantiation of the `DBTEAMLegalHoldsListPoliciesArg` object.
///
+ (DBTEAMLegalHoldsListPoliciesArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
