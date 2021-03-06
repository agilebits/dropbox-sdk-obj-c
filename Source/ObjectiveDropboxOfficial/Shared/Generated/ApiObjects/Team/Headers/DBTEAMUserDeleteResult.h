///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMUserDeleteEmailsResult;
@class DBTEAMUserDeleteResult;
@class DBTEAMUserSelectorArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UserDeleteResult` union.
///
/// Result of trying to delete a user's secondary emails. 'success' is the only
/// value indicating that a user was successfully retrieved for deleting
/// secondary emails. The other values explain the type of error that occurred,
/// and include the user for which the error occured.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMUserDeleteResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMUserDeleteResultTag` enum type represents the possible tag states
/// with which the `DBTEAMUserDeleteResult` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMUserDeleteResultTag){
    /// Describes a user and the results for each attempt to delete a secondary
    /// email.
    DBTEAMUserDeleteResultSuccess,

    /// Specified user is not a valid target for deleting secondary emails.
    DBTEAMUserDeleteResultInvalidUser,

    /// (no description).
    DBTEAMUserDeleteResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMUserDeleteResultTag tag;

/// Describes a user and the results for each attempt to delete a secondary
/// email. @note Ensure the `isSuccess` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMUserDeleteEmailsResult *success;

/// Specified user is not a valid target for deleting secondary emails. @note
/// Ensure the `isInvalidUser` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMUserSelectorArg *invalidUser;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "success".
///
/// Description of the "success" tag state: Describes a user and the results for
/// each attempt to delete a secondary email.
///
/// @param success Describes a user and the results for each attempt to delete a
/// secondary email.
///
/// @return An initialized instance.
///
- (instancetype)initWithSuccess:(DBTEAMUserDeleteEmailsResult *)success;

///
/// Initializes union class with tag state of "invalid_user".
///
/// Description of the "invalid_user" tag state: Specified user is not a valid
/// target for deleting secondary emails.
///
/// @param invalidUser Specified user is not a valid target for deleting
/// secondary emails.
///
/// @return An initialized instance.
///
- (instancetype)initWithInvalidUser:(DBTEAMUserSelectorArg *)invalidUser;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "success".
///
/// @note Call this method and ensure it returns true before accessing the
/// `success` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "success".
///
- (BOOL)isSuccess;

///
/// Retrieves whether the union's current tag state has value "invalid_user".
///
/// @note Call this method and ensure it returns true before accessing the
/// `invalidUser` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "invalid_user".
///
- (BOOL)isInvalidUser;

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
/// The serialization class for the `DBTEAMUserDeleteResult` union.
///
@interface DBTEAMUserDeleteResultSerializer : NSObject

///
/// Serializes `DBTEAMUserDeleteResult` instances.
///
/// @param instance An instance of the `DBTEAMUserDeleteResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMUserDeleteResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMUserDeleteResult *)instance;

///
/// Deserializes `DBTEAMUserDeleteResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMUserDeleteResult` API object.
///
/// @return An instantiation of the `DBTEAMUserDeleteResult` object.
///
+ (DBTEAMUserDeleteResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
