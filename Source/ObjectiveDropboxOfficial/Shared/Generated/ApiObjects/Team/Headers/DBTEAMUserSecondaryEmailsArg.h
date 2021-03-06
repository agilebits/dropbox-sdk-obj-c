///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMUserSecondaryEmailsArg;
@class DBTEAMUserSelectorArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UserSecondaryEmailsArg` struct.
///
/// User and a list of secondary emails.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMUserSecondaryEmailsArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) DBTEAMUserSelectorArg *user;

/// (no description).
@property (nonatomic, readonly) NSArray<NSString *> *secondaryEmails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param user (no description).
/// @param secondaryEmails (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithUser:(DBTEAMUserSelectorArg *)user secondaryEmails:(NSArray<NSString *> *)secondaryEmails;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UserSecondaryEmailsArg` struct.
///
@interface DBTEAMUserSecondaryEmailsArgSerializer : NSObject

///
/// Serializes `DBTEAMUserSecondaryEmailsArg` instances.
///
/// @param instance An instance of the `DBTEAMUserSecondaryEmailsArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMUserSecondaryEmailsArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMUserSecondaryEmailsArg *)instance;

///
/// Deserializes `DBTEAMUserSecondaryEmailsArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMUserSecondaryEmailsArg` API object.
///
/// @return An instantiation of the `DBTEAMUserSecondaryEmailsArg` object.
///
+ (DBTEAMUserSecondaryEmailsArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
