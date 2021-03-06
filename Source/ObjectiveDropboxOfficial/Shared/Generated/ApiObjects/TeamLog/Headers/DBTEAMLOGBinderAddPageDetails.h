///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGBinderAddPageDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `BinderAddPageDetails` struct.
///
/// Added Binder page.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGBinderAddPageDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

/// Title of the Binder doc.
@property (nonatomic, readonly, copy) NSString *docTitle;

/// Name of the Binder page/section.
@property (nonatomic, readonly, copy) NSString *binderItemName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
/// @param docTitle Title of the Binder doc.
/// @param binderItemName Name of the Binder page/section.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid
                         docTitle:(NSString *)docTitle
                   binderItemName:(NSString *)binderItemName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `BinderAddPageDetails` struct.
///
@interface DBTEAMLOGBinderAddPageDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGBinderAddPageDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGBinderAddPageDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGBinderAddPageDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGBinderAddPageDetails *)instance;

///
/// Deserializes `DBTEAMLOGBinderAddPageDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGBinderAddPageDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGBinderAddPageDetails` object.
///
+ (DBTEAMLOGBinderAddPageDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
