///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERPaperDocExportResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocExportResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERPaperDocExportResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The Paper doc owner's email address.
@property (nonatomic, readonly, copy) NSString *owner;

/// The Paper doc title.
@property (nonatomic, readonly, copy) NSString *title;

/// The Paper doc revision. Simply an ever increasing number.
@property (nonatomic, readonly) NSNumber *revision;

/// MIME type of the export. This corresponds to ExportFormat specified in the
/// request.
@property (nonatomic, readonly, copy) NSString *mimeType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param owner The Paper doc owner's email address.
/// @param title The Paper doc title.
/// @param revision The Paper doc revision. Simply an ever increasing number.
/// @param mimeType MIME type of the export. This corresponds to ExportFormat
/// specified in the request.
///
/// @return An initialized instance.
///
- (instancetype)initWithOwner:(NSString *)owner
                        title:(NSString *)title
                     revision:(NSNumber *)revision
                     mimeType:(NSString *)mimeType;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperDocExportResult` struct.
///
@interface DBPAPERPaperDocExportResultSerializer : NSObject

///
/// Serializes `DBPAPERPaperDocExportResult` instances.
///
/// @param instance An instance of the `DBPAPERPaperDocExportResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERPaperDocExportResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERPaperDocExportResult *)instance;

///
/// Deserializes `DBPAPERPaperDocExportResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERPaperDocExportResult` API object.
///
/// @return An instantiation of the `DBPAPERPaperDocExportResult` object.
///
+ (DBPAPERPaperDocExportResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
