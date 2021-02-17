///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILEPROPERTIESLookUpPropertiesError;
@class DBFILESAlphaGetMetadataError;
@class DBFILESLookupError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `AlphaGetMetadataError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESAlphaGetMetadataError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILESAlphaGetMetadataErrorTag` enum type represents the possible tag
/// states with which the `DBFILESAlphaGetMetadataError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILESAlphaGetMetadataErrorTag){
    /// (no description).
    DBFILESAlphaGetMetadataErrorPath,

    /// (no description).
    DBFILESAlphaGetMetadataErrorPropertiesError,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESAlphaGetMetadataErrorTag tag;

/// (no description). @note Ensure the `isPath` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILESLookupError *path;

/// (no description). @note Ensure the `isPropertiesError` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBFILEPROPERTIESLookUpPropertiesError *propertiesError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "path".
///
/// @param path (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(DBFILESLookupError *)path;

///
/// Initializes union class with tag state of "properties_error".
///
/// @param propertiesError (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithPropertiesError:(DBFILEPROPERTIESLookUpPropertiesError *)propertiesError;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "path".
///
/// @note Call this method and ensure it returns true before accessing the
/// `path` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "path".
///
- (BOOL)isPath;

///
/// Retrieves whether the union's current tag state has value
/// "properties_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `propertiesError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "properties_error".
///
- (BOOL)isPropertiesError;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILESAlphaGetMetadataError` union.
///
@interface DBFILESAlphaGetMetadataErrorSerializer : NSObject

///
/// Serializes `DBFILESAlphaGetMetadataError` instances.
///
/// @param instance An instance of the `DBFILESAlphaGetMetadataError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESAlphaGetMetadataError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESAlphaGetMetadataError *)instance;

///
/// Deserializes `DBFILESAlphaGetMetadataError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESAlphaGetMetadataError` API object.
///
/// @return An instantiation of the `DBFILESAlphaGetMetadataError` object.
///
+ (DBFILESAlphaGetMetadataError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
