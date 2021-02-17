///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSECONDARYEMAILSSecondaryEmail;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SecondaryEmail` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSECONDARYEMAILSSecondaryEmail : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Secondary email address.
@property (nonatomic, readonly, copy) NSString *email;

/// Whether or not the secondary email address is verified to be owned by a
/// user.
@property (nonatomic, readonly) NSNumber *isVerified;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param email Secondary email address.
/// @param isVerified Whether or not the secondary email address is verified to
/// be owned by a user.
///
/// @return An initialized instance.
///
- (instancetype)initWithEmail:(NSString *)email isVerified:(NSNumber *)isVerified;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SecondaryEmail` struct.
///
@interface DBSECONDARYEMAILSSecondaryEmailSerializer : NSObject

///
/// Serializes `DBSECONDARYEMAILSSecondaryEmail` instances.
///
/// @param instance An instance of the `DBSECONDARYEMAILSSecondaryEmail` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSECONDARYEMAILSSecondaryEmail` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSECONDARYEMAILSSecondaryEmail *)instance;

///
/// Deserializes `DBSECONDARYEMAILSSecondaryEmail` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSECONDARYEMAILSSecondaryEmail` API object.
///
/// @return An instantiation of the `DBSECONDARYEMAILSSecondaryEmail` object.
///
+ (DBSECONDARYEMAILSSecondaryEmail *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
