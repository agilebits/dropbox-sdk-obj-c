///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESExportMetadata;
@class DBFILESExportResult;
@class DBFILESFileMetadata;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ExportResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESExportResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Metadata for the exported version of the file.
@property (nonatomic, readonly) DBFILESExportMetadata *exportMetadata;

/// Metadata for the original file.
@property (nonatomic, readonly) DBFILESFileMetadata *fileMetadata;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param exportMetadata Metadata for the exported version of the file.
/// @param fileMetadata Metadata for the original file.
///
/// @return An initialized instance.
///
- (instancetype)initWithExportMetadata:(DBFILESExportMetadata *)exportMetadata
                          fileMetadata:(DBFILESFileMetadata *)fileMetadata;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ExportResult` struct.
///
@interface DBFILESExportResultSerializer : NSObject

///
/// Serializes `DBFILESExportResult` instances.
///
/// @param instance An instance of the `DBFILESExportResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESExportResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESExportResult *)instance;

///
/// Deserializes `DBFILESExportResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESExportResult` API object.
///
/// @return An instantiation of the `DBFILESExportResult` object.
///
+ (DBFILESExportResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END