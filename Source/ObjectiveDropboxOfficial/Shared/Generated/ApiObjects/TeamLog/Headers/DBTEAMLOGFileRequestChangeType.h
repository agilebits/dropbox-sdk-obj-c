///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGFileRequestChangeType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileRequestChangeType` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileRequestChangeType : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `FileRequestChangeType` struct.
///
@interface DBTEAMLOGFileRequestChangeTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileRequestChangeType` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileRequestChangeType` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestChangeType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGFileRequestChangeType *)instance;

///
/// Deserializes `DBTEAMLOGFileRequestChangeType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileRequestChangeType` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileRequestChangeType` object.
///
+ (DBTEAMLOGFileRequestChangeType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
