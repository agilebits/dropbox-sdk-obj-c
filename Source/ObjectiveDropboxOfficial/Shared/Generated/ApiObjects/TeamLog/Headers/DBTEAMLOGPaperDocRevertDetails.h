///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGPaperDocRevertDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocRevertDetails` struct.
///
/// Restored Paper doc to previous version.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperDocRevertDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperDocRevertDetails` struct.
///
@interface DBTEAMLOGPaperDocRevertDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperDocRevertDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGPaperDocRevertDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperDocRevertDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPaperDocRevertDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperDocRevertDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperDocRevertDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperDocRevertDetails` object.
///
+ (DBTEAMLOGPaperDocRevertDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
