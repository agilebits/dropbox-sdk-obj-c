///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileTransfersTransferDownloadDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileTransfersTransferDownloadDetails` struct.
///
/// Transfer downloaded.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileTransfersTransferDownloadDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Transfer id.
@property (nonatomic, readonly, copy) NSString *fileTransferId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param fileTransferId Transfer id.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileTransferId:(NSString *)fileTransferId;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileTransfersTransferDownloadDetails`
/// struct.
///
@interface DBTEAMLOGFileTransfersTransferDownloadDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileTransfersTransferDownloadDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGFileTransfersTransferDownloadDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileTransfersTransferDownloadDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileTransfersTransferDownloadDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileTransfersTransferDownloadDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileTransfersTransferDownloadDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGFileTransfersTransferDownloadDetails` object.
///
+ (DBTEAMLOGFileTransfersTransferDownloadDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END