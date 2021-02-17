///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILEPROPERTIESAddPropertiesArg;
@class DBFILEPROPERTIESPropertyGroup;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AddPropertiesArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESAddPropertiesArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// A unique identifier for the file or folder.
@property (nonatomic, readonly, copy) NSString *path;

/// The property groups which are to be added to a Dropbox file. No two groups
/// in the input should  refer to the same template.
@property (nonatomic, readonly) NSArray<DBFILEPROPERTIESPropertyGroup *> *propertyGroups;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path A unique identifier for the file or folder.
/// @param propertyGroups The property groups which are to be added to a Dropbox
/// file. No two groups in the input should  refer to the same template.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(NSString *)path propertyGroups:(NSArray<DBFILEPROPERTIESPropertyGroup *> *)propertyGroups;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `AddPropertiesArg` struct.
///
@interface DBFILEPROPERTIESAddPropertiesArgSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESAddPropertiesArg` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESAddPropertiesArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESAddPropertiesArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESAddPropertiesArg *)instance;

///
/// Deserializes `DBFILEPROPERTIESAddPropertiesArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESAddPropertiesArg` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESAddPropertiesArg` object.
///
+ (DBFILEPROPERTIESAddPropertiesArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
