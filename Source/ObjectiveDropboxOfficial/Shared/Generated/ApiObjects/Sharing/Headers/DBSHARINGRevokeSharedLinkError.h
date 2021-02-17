///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGRevokeSharedLinkError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RevokeSharedLinkError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGRevokeSharedLinkError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGRevokeSharedLinkErrorTag` enum type represents the possible
/// tag states with which the `DBSHARINGRevokeSharedLinkError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBSHARINGRevokeSharedLinkErrorTag){
    /// The shared link wasn't found.
    DBSHARINGRevokeSharedLinkErrorSharedLinkNotFound,

    /// The caller is not allowed to access this shared link.
    DBSHARINGRevokeSharedLinkErrorSharedLinkAccessDenied,

    /// This type of link is not supported; use `files` instead.
    DBSHARINGRevokeSharedLinkErrorUnsupportedLinkType,

    /// (no description).
    DBSHARINGRevokeSharedLinkErrorOther,

    /// Shared link is malformed.
    DBSHARINGRevokeSharedLinkErrorSharedLinkMalformed,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGRevokeSharedLinkErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "shared_link_not_found".
///
/// Description of the "shared_link_not_found" tag state: The shared link wasn't
/// found.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedLinkNotFound;

///
/// Initializes union class with tag state of "shared_link_access_denied".
///
/// Description of the "shared_link_access_denied" tag state: The caller is not
/// allowed to access this shared link.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedLinkAccessDenied;

///
/// Initializes union class with tag state of "unsupported_link_type".
///
/// Description of the "unsupported_link_type" tag state: This type of link is
/// not supported; use `files` instead.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnsupportedLinkType;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

///
/// Initializes union class with tag state of "shared_link_malformed".
///
/// Description of the "shared_link_malformed" tag state: Shared link is
/// malformed.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedLinkMalformed;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "shared_link_not_found".
///
/// @return Whether the union's current tag state has value
/// "shared_link_not_found".
///
- (BOOL)isSharedLinkNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "shared_link_access_denied".
///
/// @return Whether the union's current tag state has value
/// "shared_link_access_denied".
///
- (BOOL)isSharedLinkAccessDenied;

///
/// Retrieves whether the union's current tag state has value
/// "unsupported_link_type".
///
/// @return Whether the union's current tag state has value
/// "unsupported_link_type".
///
- (BOOL)isUnsupportedLinkType;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value
/// "shared_link_malformed".
///
/// @return Whether the union's current tag state has value
/// "shared_link_malformed".
///
- (BOOL)isSharedLinkMalformed;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGRevokeSharedLinkError` union.
///
@interface DBSHARINGRevokeSharedLinkErrorSerializer : NSObject

///
/// Serializes `DBSHARINGRevokeSharedLinkError` instances.
///
/// @param instance An instance of the `DBSHARINGRevokeSharedLinkError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGRevokeSharedLinkError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGRevokeSharedLinkError *)instance;

///
/// Deserializes `DBSHARINGRevokeSharedLinkError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGRevokeSharedLinkError` API object.
///
/// @return An instantiation of the `DBSHARINGRevokeSharedLinkError` object.
///
+ (DBSHARINGRevokeSharedLinkError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
