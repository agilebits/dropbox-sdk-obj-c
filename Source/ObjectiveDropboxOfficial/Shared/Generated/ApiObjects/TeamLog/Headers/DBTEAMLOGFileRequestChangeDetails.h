///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileRequestChangeDetails;
@class DBTEAMLOGFileRequestDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileRequestChangeDetails` struct.
///
/// Changed file request.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileRequestChangeDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// File request id. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *fileRequestId;

/// Previous file request details. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGFileRequestDetails *previousDetails;

/// New file request details.
@property (nonatomic, readonly) DBTEAMLOGFileRequestDetails *dNewDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewDetails New file request details.
/// @param fileRequestId File request id. Might be missing due to historical
/// data gap.
/// @param previousDetails Previous file request details. Might be missing due
/// to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewDetails:(DBTEAMLOGFileRequestDetails *)dNewDetails
                      fileRequestId:(nullable NSString *)fileRequestId
                    previousDetails:(nullable DBTEAMLOGFileRequestDetails *)previousDetails;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewDetails New file request details.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewDetails:(DBTEAMLOGFileRequestDetails *)dNewDetails;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileRequestChangeDetails` struct.
///
@interface DBTEAMLOGFileRequestChangeDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileRequestChangeDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileRequestChangeDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestChangeDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileRequestChangeDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileRequestChangeDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestChangeDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileRequestChangeDetails` object.
///
+ (DBTEAMLOGFileRequestChangeDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
