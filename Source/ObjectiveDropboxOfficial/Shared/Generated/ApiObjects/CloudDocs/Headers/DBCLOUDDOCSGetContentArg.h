///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBCLOUDDOCSGetContentArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetContentArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBCLOUDDOCSGetContentArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly, copy) NSString *fileId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param fileId (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithFileId:(NSString *)fileId;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetContentArg` struct.
///
@interface DBCLOUDDOCSGetContentArgSerializer : NSObject

///
/// Serializes `DBCLOUDDOCSGetContentArg` instances.
///
/// @param instance An instance of the `DBCLOUDDOCSGetContentArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBCLOUDDOCSGetContentArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBCLOUDDOCSGetContentArg *)instance;

///
/// Deserializes `DBCLOUDDOCSGetContentArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBCLOUDDOCSGetContentArg` API object.
///
/// @return An instantiation of the `DBCLOUDDOCSGetContentArg` object.
///
+ (DBCLOUDDOCSGetContentArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
