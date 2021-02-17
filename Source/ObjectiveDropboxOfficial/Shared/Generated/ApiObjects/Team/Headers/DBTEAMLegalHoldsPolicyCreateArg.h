///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLegalHoldsPolicyCreateArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsPolicyCreateArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLegalHoldsPolicyCreateArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Policy name.
@property (nonatomic, readonly, copy) NSString *name;

/// A description of the legal hold policy.
@property (nonatomic, readonly, copy, nullable) NSString *description_;

/// List of team member IDs added to the hold.
@property (nonatomic, readonly) NSArray<NSString *> *members;

/// start date of the legal hold policy.
@property (nonatomic, readonly, nullable) NSDate *startDate;

/// end date of the legal hold policy.
@property (nonatomic, readonly, nullable) NSDate *endDate;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param name Policy name.
/// @param members List of team member IDs added to the hold.
/// @param description_ A description of the legal hold policy.
/// @param startDate start date of the legal hold policy.
/// @param endDate end date of the legal hold policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name
                     members:(NSArray<NSString *> *)members
                description_:(nullable NSString *)description_
                   startDate:(nullable NSDate *)startDate
                     endDate:(nullable NSDate *)endDate;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param name Policy name.
/// @param members List of team member IDs added to the hold.
///
/// @return An initialized instance.
///
- (instancetype)initWithName:(NSString *)name members:(NSArray<NSString *> *)members;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LegalHoldsPolicyCreateArg` struct.
///
@interface DBTEAMLegalHoldsPolicyCreateArgSerializer : NSObject

///
/// Serializes `DBTEAMLegalHoldsPolicyCreateArg` instances.
///
/// @param instance An instance of the `DBTEAMLegalHoldsPolicyCreateArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsPolicyCreateArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLegalHoldsPolicyCreateArg *)instance;

///
/// Deserializes `DBTEAMLegalHoldsPolicyCreateArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsPolicyCreateArg` API object.
///
/// @return An instantiation of the `DBTEAMLegalHoldsPolicyCreateArg` object.
///
+ (DBTEAMLegalHoldsPolicyCreateArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
