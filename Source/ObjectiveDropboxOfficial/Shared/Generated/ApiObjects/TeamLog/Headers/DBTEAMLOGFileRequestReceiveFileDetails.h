///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileRequestDetails;
@class DBTEAMLOGFileRequestReceiveFileDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileRequestReceiveFileDetails` struct.
///
/// Received files for file request.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileRequestReceiveFileDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// File request id. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *fileRequestId;

/// File request details. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGFileRequestDetails *fileRequestDetails;

/// Submitted file names.
@property (nonatomic, readonly) NSArray<NSString *> *submittedFileNames;

/// The name as provided by the submitter. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, copy, nullable) NSString *submitterName;

/// The email as provided by the submitter. Might be missing due to historical
/// data gap.
@property (nonatomic, readonly, copy, nullable) NSString *submitterEmail;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param submittedFileNames Submitted file names.
/// @param fileRequestId File request id. Might be missing due to historical
/// data gap.
/// @param fileRequestDetails File request details. Might be missing due to
/// historical data gap.
/// @param submitterName The name as provided by the submitter. Might be missing
/// due to historical data gap.
/// @param submitterEmail The email as provided by the submitter. Might be
/// missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithSubmittedFileNames:(NSArray<NSString *> *)submittedFileNames
                             fileRequestId:(nullable NSString *)fileRequestId
                        fileRequestDetails:(nullable DBTEAMLOGFileRequestDetails *)fileRequestDetails
                             submitterName:(nullable NSString *)submitterName
                            submitterEmail:(nullable NSString *)submitterEmail;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param submittedFileNames Submitted file names.
///
/// @return An initialized instance.
///
- (instancetype)initWithSubmittedFileNames:(NSArray<NSString *> *)submittedFileNames;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileRequestReceiveFileDetails` struct.
///
@interface DBTEAMLOGFileRequestReceiveFileDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileRequestReceiveFileDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileRequestReceiveFileDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestReceiveFileDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileRequestReceiveFileDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileRequestReceiveFileDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestReceiveFileDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileRequestReceiveFileDetails`
/// object.
///
+ (DBTEAMLOGFileRequestReceiveFileDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
