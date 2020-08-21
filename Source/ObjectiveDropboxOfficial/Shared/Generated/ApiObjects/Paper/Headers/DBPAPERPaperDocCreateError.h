///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERPaperDocCreateError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocCreateError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERPaperDocCreateError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERPaperDocCreateErrorTag` enum type represents the possible tag
/// states with which the `DBPAPERPaperDocCreateError` union can exist.
typedef NS_ENUM(NSInteger, DBPAPERPaperDocCreateErrorTag) {
  /// Your account does not have permissions to perform this action.
  DBPAPERPaperDocCreateErrorInsufficientPermissions,

  /// (no description).
  DBPAPERPaperDocCreateErrorOther,

  /// The provided content was malformed and cannot be imported to Paper.
  DBPAPERPaperDocCreateErrorContentMalformed,

  /// The specified Paper folder is cannot be found.
  DBPAPERPaperDocCreateErrorFolderNotFound,

  /// The newly created Paper doc would be too large. Please split the content
  /// into multiple docs.
  DBPAPERPaperDocCreateErrorDocLengthExceeded,

  /// The imported document contains an image that is too large. The current
  /// limit is 1MB. Note: This only applies to HTML with data uri.
  DBPAPERPaperDocCreateErrorImageSizeExceeded,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERPaperDocCreateErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "insufficient_permissions".
///
/// Description of the "insufficient_permissions" tag state: Your account does
/// not have permissions to perform this action.
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
/// Initializes union class with tag state of "content_malformed".
///
/// Description of the "content_malformed" tag state: The provided content was
/// malformed and cannot be imported to Paper.
///
/// @return An initialized instance.
///
- (instancetype)initWithContentMalformed;

///
/// Initializes union class with tag state of "folder_not_found".
///
/// Description of the "folder_not_found" tag state: The specified Paper folder
/// is cannot be found.
///
/// @return An initialized instance.
///
- (instancetype)initWithFolderNotFound;

///
/// Initializes union class with tag state of "doc_length_exceeded".
///
/// Description of the "doc_length_exceeded" tag state: The newly created Paper
/// doc would be too large. Please split the content into multiple docs.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocLengthExceeded;

///
/// Initializes union class with tag state of "image_size_exceeded".
///
/// Description of the "image_size_exceeded" tag state: The imported document
/// contains an image that is too large. The current limit is 1MB. Note: This
/// only applies to HTML with data uri.
///
/// @return An initialized instance.
///
- (instancetype)initWithImageSizeExceeded;

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
/// Retrieves whether the union's current tag state has value
/// "content_malformed".
///
/// @return Whether the union's current tag state has value "content_malformed".
///
- (BOOL)isContentMalformed;

///
/// Retrieves whether the union's current tag state has value
/// "folder_not_found".
///
/// @return Whether the union's current tag state has value "folder_not_found".
///
- (BOOL)isFolderNotFound;

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
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBPAPERPaperDocCreateError` union.
///
@interface DBPAPERPaperDocCreateErrorSerializer : NSObject

///
/// Serializes `DBPAPERPaperDocCreateError` instances.
///
/// @param instance An instance of the `DBPAPERPaperDocCreateError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERPaperDocCreateError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERPaperDocCreateError *)instance;

///
/// Deserializes `DBPAPERPaperDocCreateError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERPaperDocCreateError` API object.
///
/// @return An instantiation of the `DBPAPERPaperDocCreateError` object.
///
+ (DBPAPERPaperDocCreateError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
