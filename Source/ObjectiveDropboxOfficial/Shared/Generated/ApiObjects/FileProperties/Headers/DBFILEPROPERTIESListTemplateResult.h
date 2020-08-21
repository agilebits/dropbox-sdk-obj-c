///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILEPROPERTIESListTemplateResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListTemplateResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESListTemplateResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// List of identifiers for templates added by  See `templatesAddForUser` or
/// `templatesAddForTeam`.
@property (nonatomic, readonly) NSArray<NSString *> *templateIds;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param templateIds List of identifiers for templates added by  See
/// `templatesAddForUser` or `templatesAddForTeam`.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateIds:(NSArray<NSString *> *)templateIds;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListTemplateResult` struct.
///
@interface DBFILEPROPERTIESListTemplateResultSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESListTemplateResult` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESListTemplateResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESListTemplateResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESListTemplateResult *)instance;

///
/// Deserializes `DBFILEPROPERTIESListTemplateResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESListTemplateResult` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESListTemplateResult` object.
///
+ (DBFILEPROPERTIESListTemplateResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
