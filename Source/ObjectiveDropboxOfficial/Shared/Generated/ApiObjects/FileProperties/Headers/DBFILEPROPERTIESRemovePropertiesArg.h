///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILEPROPERTIESRemovePropertiesArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RemovePropertiesArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESRemovePropertiesArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A unique identifier for the file or folder.
@property (nonatomic, readonly, copy) NSString *path;

/// A list of identifiers for a template created by `templatesAddForUser` or
/// `templatesAddForTeam`.
@property (nonatomic, readonly) NSArray<NSString *> *propertyTemplateIds;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path A unique identifier for the file or folder.
/// @param propertyTemplateIds A list of identifiers for a template created by
/// `templatesAddForUser` or `templatesAddForTeam`.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path propertyTemplateIds:(NSArray<NSString *> *)propertyTemplateIds;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RemovePropertiesArg` struct.
///
@interface DBFILEPROPERTIESRemovePropertiesArgSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESRemovePropertiesArg` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESRemovePropertiesArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESRemovePropertiesArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESRemovePropertiesArg *)instance;

///
/// Deserializes `DBFILEPROPERTIESRemovePropertiesArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESRemovePropertiesArg` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESRemovePropertiesArg`
/// object.
///
+ (DBFILEPROPERTIESRemovePropertiesArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
