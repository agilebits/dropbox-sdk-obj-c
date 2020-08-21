///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERImportFormat;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ImportFormat` union.
///
/// The import format of the incoming data.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERImportFormat : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBPAPERImportFormatTag` enum type represents the possible tag states
/// with which the `DBPAPERImportFormat` union can exist.
typedef NS_ENUM(NSInteger, DBPAPERImportFormatTag) {
  /// The provided data is interpreted as standard HTML.
  DBPAPERImportFormatHtml,

  /// The provided data is interpreted as markdown. Note: The first line of
  /// the provided document will be used as the doc title.
  DBPAPERImportFormatMarkdown,

  /// The provided data is interpreted as plain text. Note: The first line of
  /// the provided document will be used as the doc title.
  DBPAPERImportFormatPlainText,

  /// (no description).
  DBPAPERImportFormatOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBPAPERImportFormatTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "html".
///
/// Description of the "html" tag state: The provided data is interpreted as
/// standard HTML.
///
/// @return An initialized instance.
///
- (instancetype)initWithHtml;

///
/// Initializes union class with tag state of "markdown".
///
/// Description of the "markdown" tag state: The provided data is interpreted as
/// markdown. Note: The first line of the provided document will be used as the
/// doc title.
///
/// @return An initialized instance.
///
- (instancetype)initWithMarkdown;

///
/// Initializes union class with tag state of "plain_text".
///
/// Description of the "plain_text" tag state: The provided data is interpreted
/// as plain text. Note: The first line of the provided document will be used as
/// the doc title.
///
/// @return An initialized instance.
///
- (instancetype)initWithPlainText;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "html".
///
/// @return Whether the union's current tag state has value "html".
///
- (BOOL)isHtml;

///
/// Retrieves whether the union's current tag state has value "markdown".
///
/// @return Whether the union's current tag state has value "markdown".
///
- (BOOL)isMarkdown;

///
/// Retrieves whether the union's current tag state has value "plain_text".
///
/// @return Whether the union's current tag state has value "plain_text".
///
- (BOOL)isPlainText;

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
/// The serialization class for the `DBPAPERImportFormat` union.
///
@interface DBPAPERImportFormatSerializer : NSObject

///
/// Serializes `DBPAPERImportFormat` instances.
///
/// @param instance An instance of the `DBPAPERImportFormat` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERImportFormat` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERImportFormat *)instance;

///
/// Deserializes `DBPAPERImportFormat` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERImportFormat` API object.
///
/// @return An instantiation of the `DBPAPERImportFormat` object.
///
+ (DBPAPERImportFormat *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
