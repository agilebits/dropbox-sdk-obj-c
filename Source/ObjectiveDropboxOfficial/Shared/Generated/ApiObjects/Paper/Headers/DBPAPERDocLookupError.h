///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERDocLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DocLookupError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERDocLookupError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERDocLookupErrorTag` enum type represents the possible tag states
/// with which the `DBPAPERDocLookupError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBPAPERDocLookupErrorTag){
    /// Your account does not have permissions to perform this action. This may
    /// be due to it only having access to Paper as files in the Dropbox
    /// filesystem. For more information, refer to the Paper Migration Guide
    /// https://www.dropbox.com/lp/developers/reference/paper-migration-guide.
    DBPAPERDocLookupErrorInsufficientPermissions,

    /// (no description).
    DBPAPERDocLookupErrorOther,

    /// The required doc was not found.
    DBPAPERDocLookupErrorDocNotFound,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERDocLookupErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "insufficient_permissions".
///
/// Description of the "insufficient_permissions" tag state: Your account does
/// not have permissions to perform this action. This may be due to it only
/// having access to Paper as files in the Dropbox filesystem. For more
/// information, refer to the Paper Migration Guide
/// https://www.dropbox.com/lp/developers/reference/paper-migration-guide.
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

///
/// Initializes union class with tag state of "doc_not_found".
///
/// Description of the "doc_not_found" tag state: The required doc was not
/// found.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocNotFound;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

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
/// Retrieves whether the union's current tag state has value "doc_not_found".
///
/// @return Whether the union's current tag state has value "doc_not_found".
///
- (BOOL)isDocNotFound;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBPAPERDocLookupError` union.
///
@interface DBPAPERDocLookupErrorSerializer : NSObject

///
/// Serializes `DBPAPERDocLookupError` instances.
///
/// @param instance An instance of the `DBPAPERDocLookupError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERDocLookupError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERDocLookupError *)instance;

///
/// Deserializes `DBPAPERDocLookupError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERDocLookupError` API object.
///
/// @return An instantiation of the `DBPAPERDocLookupError` object.
///
+ (DBPAPERDocLookupError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
