///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileTransfersTransferDeleteType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileTransfersTransferDeleteType` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileTransfersTransferDeleteType : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly, copy) NSString *description_;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param description_ (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithDescription_:(NSString *)description_;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileTransfersTransferDeleteType` struct.
///
@interface DBTEAMLOGFileTransfersTransferDeleteTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileTransfersTransferDeleteType` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGFileTransfersTransferDeleteType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileTransfersTransferDeleteType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileTransfersTransferDeleteType *)instance;

///
/// Deserializes `DBTEAMLOGFileTransfersTransferDeleteType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileTransfersTransferDeleteType` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileTransfersTransferDeleteType`
/// object.
///
+ (DBTEAMLOGFileTransfersTransferDeleteType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
