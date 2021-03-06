///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLegalHoldsError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLegalHoldsError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLegalHoldsErrorTag` enum type represents the possible tag states
/// with which the `DBTEAMLegalHoldsError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLegalHoldsErrorTag){
    /// There has been an unknown legal hold error.
    DBTEAMLegalHoldsErrorUnknownLegalHoldError,

    /// You don't have permissions to perform this action.
    DBTEAMLegalHoldsErrorInsufficientPermissions,

    /// (no description).
    DBTEAMLegalHoldsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLegalHoldsErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "unknown_legal_hold_error".
///
/// Description of the "unknown_legal_hold_error" tag state: There has been an
/// unknown legal hold error.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnknownLegalHoldError;

///
/// Initializes union class with tag state of "insufficient_permissions".
///
/// Description of the "insufficient_permissions" tag state: You don't have
/// permissions to perform this action.
///
/// @return An initialized instance.
///
- (instancetype)initWithInsufficientPermissions;

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
/// "unknown_legal_hold_error".
///
/// @return Whether the union's current tag state has value
/// "unknown_legal_hold_error".
///
- (BOOL)isUnknownLegalHoldError;

///
/// Retrieves whether the union's current tag state has value
/// "insufficient_permissions".
///
/// @return Whether the union's current tag state has value
/// "insufficient_permissions".
///
- (BOOL)isInsufficientPermissions;

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
/// The serialization class for the `DBTEAMLegalHoldsError` union.
///
@interface DBTEAMLegalHoldsErrorSerializer : NSObject

///
/// Serializes `DBTEAMLegalHoldsError` instances.
///
/// @param instance An instance of the `DBTEAMLegalHoldsError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLegalHoldsError *)instance;

///
/// Deserializes `DBTEAMLegalHoldsError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsError` API object.
///
/// @return An instantiation of the `DBTEAMLegalHoldsError` object.
///
+ (DBTEAMLegalHoldsError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
