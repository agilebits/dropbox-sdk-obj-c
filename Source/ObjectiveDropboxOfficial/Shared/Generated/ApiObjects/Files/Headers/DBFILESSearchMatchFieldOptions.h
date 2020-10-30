///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESSearchMatchFieldOptions;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SearchMatchFieldOptions` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSearchMatchFieldOptions : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Whether to include highlight span from file title.
@property (nonatomic, readonly) NSNumber *includeHighlights;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param includeHighlights Whether to include highlight span from file title.
///
/// @return An initialized instance.
///
- (instancetype)initWithIncludeHighlights:(nullable NSNumber *)includeHighlights;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SearchMatchFieldOptions` struct.
///
@interface DBFILESSearchMatchFieldOptionsSerializer : NSObject

///
/// Serializes `DBFILESSearchMatchFieldOptions` instances.
///
/// @param instance An instance of the `DBFILESSearchMatchFieldOptions` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSearchMatchFieldOptions` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESSearchMatchFieldOptions *)instance;

///
/// Deserializes `DBFILESSearchMatchFieldOptions` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSearchMatchFieldOptions` API object.
///
/// @return An instantiation of the `DBFILESSearchMatchFieldOptions` object.
///
+ (DBFILESSearchMatchFieldOptions *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
