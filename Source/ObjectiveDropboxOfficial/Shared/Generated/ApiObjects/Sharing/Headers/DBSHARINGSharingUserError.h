///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGSharingUserError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharingUserError` union.
///
/// User account had a problem preventing this action.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGSharingUserError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGSharingUserErrorTag` enum type represents the possible tag
/// states with which the `DBSHARINGSharingUserError` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGSharingUserErrorTag) {
  /// The current user must verify the account e-mail address before
  /// performing this action.
  DBSHARINGSharingUserErrorEmailUnverified,

  /// (no description).
  DBSHARINGSharingUserErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGSharingUserErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "email_unverified".
///
/// Description of the "email_unverified" tag state: The current user must
/// verify the account e-mail address before performing this action.
///
/// @return An initialized instance.
///
- (instancetype)initWithEmailUnverified;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "email_unverified".
///
/// @return Whether the union's current tag state has value "email_unverified".
///
- (BOOL)isEmailUnverified;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGSharingUserError` union.
///
@interface DBSHARINGSharingUserErrorSerializer : NSObject

///
/// Serializes `DBSHARINGSharingUserError` instances.
///
/// @param instance An instance of the `DBSHARINGSharingUserError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGSharingUserError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGSharingUserError *)instance;

///
/// Deserializes `DBSHARINGSharingUserError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGSharingUserError` API object.
///
/// @return An instantiation of the `DBSHARINGSharingUserError` object.
///
+ (DBSHARINGSharingUserError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
