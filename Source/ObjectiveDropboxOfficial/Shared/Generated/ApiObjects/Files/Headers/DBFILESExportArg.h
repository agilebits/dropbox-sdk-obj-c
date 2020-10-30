///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESExportArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ExportArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESExportArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path of the file to be exported.
@property (nonatomic, readonly, copy) NSString *path;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path of the file to be exported.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ExportArg` struct.
///
@interface DBFILESExportArgSerializer : NSObject

///
/// Serializes `DBFILESExportArg` instances.
///
/// @param instance An instance of the `DBFILESExportArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESExportArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESExportArg *)instance;

///
/// Deserializes `DBFILESExportArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESExportArg` API object.
///
/// @return An instantiation of the `DBFILESExportArg` object.
///
+ (DBFILESExportArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
