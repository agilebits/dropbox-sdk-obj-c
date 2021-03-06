///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILEREQUESTSDeleteFileRequestsResult;
@class DBFILEREQUESTSFileRequest;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `DeleteFileRequestsResult` struct.
///
/// Result for `delete_`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEREQUESTSDeleteFileRequestsResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The file requests deleted by the request.
@property (nonatomic, readonly) NSArray<DBFILEREQUESTSFileRequest *> *fileRequests;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param fileRequests The file requests deleted by the request.
///
/// @return An initialized instance.
///
- (instancetype)initWithFileRequests:(NSArray<DBFILEREQUESTSFileRequest *> *)fileRequests;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeleteFileRequestsResult` struct.
///
@interface DBFILEREQUESTSDeleteFileRequestsResultSerializer : NSObject

///
/// Serializes `DBFILEREQUESTSDeleteFileRequestsResult` instances.
///
/// @param instance An instance of the `DBFILEREQUESTSDeleteFileRequestsResult`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEREQUESTSDeleteFileRequestsResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEREQUESTSDeleteFileRequestsResult *)instance;

///
/// Deserializes `DBFILEREQUESTSDeleteFileRequestsResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEREQUESTSDeleteFileRequestsResult` API object.
///
/// @return An instantiation of the `DBFILEREQUESTSDeleteFileRequestsResult`
/// object.
///
+ (DBFILEREQUESTSDeleteFileRequestsResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
