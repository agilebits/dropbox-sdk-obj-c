///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileCopyDetails;
@class DBTEAMLOGRelocateAssetReferencesLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileCopyDetails` struct.
///
/// Copied files and/or folders.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileCopyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Relocate action details.
@property (nonatomic, readonly) NSArray<DBTEAMLOGRelocateAssetReferencesLogInfo *> *relocateActionDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param relocateActionDetails Relocate action details.
///
/// @return An initialized instance.
///
- (instancetype)initWithRelocateActionDetails:
    (NSArray<DBTEAMLOGRelocateAssetReferencesLogInfo *> *)relocateActionDetails;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileCopyDetails` struct.
///
@interface DBTEAMLOGFileCopyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileCopyDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileCopyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileCopyDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileCopyDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileCopyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileCopyDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileCopyDetails` object.
///
+ (DBTEAMLOGFileCopyDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
