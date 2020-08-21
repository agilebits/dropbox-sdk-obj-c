///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileRequestCloseDetails;
@class DBTEAMLOGFileRequestDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileRequestCloseDetails` struct.
///
/// Closed file request.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileRequestCloseDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// File request id. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *fileRequestId;

/// Previous file request details. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGFileRequestDetails *previousDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param fileRequestId File request id. Might be missing due to historical
/// data gap.
/// @param previousDetails Previous file request details. Might be missing due
/// to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileRequestId:(nullable NSString *)fileRequestId
                      previousDetails:(nullable DBTEAMLOGFileRequestDetails *)previousDetails;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileRequestCloseDetails` struct.
///
@interface DBTEAMLOGFileRequestCloseDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileRequestCloseDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileRequestCloseDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestCloseDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileRequestCloseDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileRequestCloseDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestCloseDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileRequestCloseDetails` object.
///
+ (DBTEAMLOGFileRequestCloseDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
