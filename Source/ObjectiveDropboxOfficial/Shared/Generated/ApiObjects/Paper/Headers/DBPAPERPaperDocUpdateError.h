///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERPaperDocUpdateError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocUpdateError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERPaperDocUpdateError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERPaperDocUpdateErrorTag` enum type represents the possible tag
/// states with which the `DBPAPERPaperDocUpdateError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBPAPERPaperDocUpdateErrorTag){
    /// Your account does not have permissions to perform this action. This may
    /// be due to it only having access to Paper as files in the Dropbox
    /// filesystem. For more information, refer to the Paper Migration Guide
    /// https://www.dropbox.com/lp/developers/reference/paper-migration-guide.
    DBPAPERPaperDocUpdateErrorInsufficientPermissions,

    /// (no description).
    DBPAPERPaperDocUpdateErrorOther,

    /// The required doc was not found.
    DBPAPERPaperDocUpdateErrorDocNotFound,

    /// The provided content was malformed and cannot be imported to Paper.
    DBPAPERPaperDocUpdateErrorContentMalformed,

    /// The provided revision does not match the document head.
    DBPAPERPaperDocUpdateErrorRevisionMismatch,

    /// The newly created Paper doc would be too large, split the content into
    /// multiple docs.
    DBPAPERPaperDocUpdateErrorDocLengthExceeded,

    /// The imported document contains an image that is too large. The current
    /// limit is 1MB. This only applies to HTML with data URI.
    DBPAPERPaperDocUpdateErrorImageSizeExceeded,

    /// This operation is not allowed on archived Paper docs.
    DBPAPERPaperDocUpdateErrorDocArchived,

    /// This operation is not allowed on deleted Paper docs.
    DBPAPERPaperDocUpdateErrorDocDeleted,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERPaperDocUpdateErrorTag tag;

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

///
/// Initializes union class with tag state of "content_malformed".
///
/// Description of the "content_malformed" tag state: The provided content was
/// malformed and cannot be imported to Paper.
///
/// @return An initialized instance.
///
- (instancetype)initWithContentMalformed;

///
/// Initializes union class with tag state of "revision_mismatch".
///
/// Description of the "revision_mismatch" tag state: The provided revision does
/// not match the document head.
///
/// @return An initialized instance.
///
- (instancetype)initWithRevisionMismatch;

///
/// Initializes union class with tag state of "doc_length_exceeded".
///
/// Description of the "doc_length_exceeded" tag state: The newly created Paper
/// doc would be too large, split the content into multiple docs.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocLengthExceeded;

///
/// Initializes union class with tag state of "image_size_exceeded".
///
/// Description of the "image_size_exceeded" tag state: The imported document
/// contains an image that is too large. The current limit is 1MB. This only
/// applies to HTML with data URI.
///
/// @return An initialized instance.
///
- (instancetype)initWithImageSizeExceeded;

///
/// Initializes union class with tag state of "doc_archived".
///
/// Description of the "doc_archived" tag state: This operation is not allowed
/// on archived Paper docs.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocArchived;

///
/// Initializes union class with tag state of "doc_deleted".
///
/// Description of the "doc_deleted" tag state: This operation is not allowed on
/// deleted Paper docs.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocDeleted;

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
/// Retrieves whether the union's current tag state has value
/// "content_malformed".
///
/// @return Whether the union's current tag state has value "content_malformed".
///
- (BOOL)isContentMalformed;

///
/// Retrieves whether the union's current tag state has value
/// "revision_mismatch".
///
/// @return Whether the union's current tag state has value "revision_mismatch".
///
- (BOOL)isRevisionMismatch;

///
/// Retrieves whether the union's current tag state has value
/// "doc_length_exceeded".
///
/// @return Whether the union's current tag state has value
/// "doc_length_exceeded".
///
- (BOOL)isDocLengthExceeded;

///
/// Retrieves whether the union's current tag state has value
/// "image_size_exceeded".
///
/// @return Whether the union's current tag state has value
/// "image_size_exceeded".
///
- (BOOL)isImageSizeExceeded;

///
/// Retrieves whether the union's current tag state has value "doc_archived".
///
/// @return Whether the union's current tag state has value "doc_archived".
///
- (BOOL)isDocArchived;

///
/// Retrieves whether the union's current tag state has value "doc_deleted".
///
/// @return Whether the union's current tag state has value "doc_deleted".
///
- (BOOL)isDocDeleted;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBPAPERPaperDocUpdateError` union.
///
@interface DBPAPERPaperDocUpdateErrorSerializer : NSObject

///
/// Serializes `DBPAPERPaperDocUpdateError` instances.
///
/// @param instance An instance of the `DBPAPERPaperDocUpdateError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERPaperDocUpdateError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERPaperDocUpdateError *)instance;

///
/// Deserializes `DBPAPERPaperDocUpdateError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERPaperDocUpdateError` API object.
///
/// @return An instantiation of the `DBPAPERPaperDocUpdateError` object.
///
+ (DBPAPERPaperDocUpdateError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
