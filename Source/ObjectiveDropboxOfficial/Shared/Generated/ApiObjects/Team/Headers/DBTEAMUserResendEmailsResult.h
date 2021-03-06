///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMResendSecondaryEmailResult;
@class DBTEAMUserResendEmailsResult;
@class DBTEAMUserSelectorArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UserResendEmailsResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMUserResendEmailsResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) DBTEAMUserSelectorArg *user;

/// (no description).
@property (nonatomic, readonly) NSArray<DBTEAMResendSecondaryEmailResult *> *results;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param user (no description).
/// @param results (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithUser:(DBTEAMUserSelectorArg *)user
                     results:(NSArray<DBTEAMResendSecondaryEmailResult *> *)results;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UserResendEmailsResult` struct.
///
@interface DBTEAMUserResendEmailsResultSerializer : NSObject

///
/// Serializes `DBTEAMUserResendEmailsResult` instances.
///
/// @param instance An instance of the `DBTEAMUserResendEmailsResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMUserResendEmailsResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMUserResendEmailsResult *)instance;

///
/// Deserializes `DBTEAMUserResendEmailsResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMUserResendEmailsResult` API object.
///
/// @return An instantiation of the `DBTEAMUserResendEmailsResult` object.
///
+ (DBTEAMUserResendEmailsResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
