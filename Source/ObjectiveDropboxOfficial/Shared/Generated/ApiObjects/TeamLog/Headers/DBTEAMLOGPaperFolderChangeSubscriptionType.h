///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGPaperFolderChangeSubscriptionType;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperFolderChangeSubscriptionType` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperFolderChangeSubscriptionType : NSObject <DBSerializable, NSCopying>

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
/// The serialization class for the `PaperFolderChangeSubscriptionType` struct.
///
@interface DBTEAMLOGPaperFolderChangeSubscriptionTypeSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperFolderChangeSubscriptionType` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPaperFolderChangeSubscriptionType` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperFolderChangeSubscriptionType` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPaperFolderChangeSubscriptionType *)instance;

///
/// Deserializes `DBTEAMLOGPaperFolderChangeSubscriptionType` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperFolderChangeSubscriptionType` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperFolderChangeSubscriptionType`
/// object.
///
+ (DBTEAMLOGPaperFolderChangeSubscriptionType *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
