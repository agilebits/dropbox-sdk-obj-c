///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILEPROPERTIESTemplateError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TemplateError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEPROPERTIESTemplateError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEPROPERTIESTemplateErrorTag` enum type represents the possible tag
/// states with which the `DBFILEPROPERTIESTemplateError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEPROPERTIESTemplateErrorTag){
    /// Template does not exist for the given identifier.
    DBFILEPROPERTIESTemplateErrorTemplateNotFound,

    /// You do not have permission to modify this template.
    DBFILEPROPERTIESTemplateErrorRestrictedContent,

    /// (no description).
    DBFILEPROPERTIESTemplateErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEPROPERTIESTemplateErrorTag tag;

/// Template does not exist for the given identifier. @note Ensure the
/// `isTemplateNotFound` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *templateNotFound;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "template_not_found".
///
/// Description of the "template_not_found" tag state: Template does not exist
/// for the given identifier.
///
/// @param templateNotFound Template does not exist for the given identifier.
///
/// @return An initialized instance.
///
- (instancetype)initWithTemplateNotFound:(NSString *)templateNotFound;

///
/// Initializes union class with tag state of "restricted_content".
///
/// Description of the "restricted_content" tag state: You do not have
/// permission to modify this template.
///
/// @return An initialized instance.
///
- (instancetype)initWithRestrictedContent;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "template_not_found".
///
/// @note Call this method and ensure it returns true before accessing the
/// `templateNotFound` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value
/// "template_not_found".
///
- (BOOL)isTemplateNotFound;

///
/// Retrieves whether the union's current tag state has value
/// "restricted_content".
///
/// @return Whether the union's current tag state has value
/// "restricted_content".
///
- (BOOL)isRestrictedContent;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBFILEPROPERTIESTemplateError` union.
///
@interface DBFILEPROPERTIESTemplateErrorSerializer : NSObject

///
/// Serializes `DBFILEPROPERTIESTemplateError` instances.
///
/// @param instance An instance of the `DBFILEPROPERTIESTemplateError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESTemplateError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEPROPERTIESTemplateError *)instance;

///
/// Deserializes `DBFILEPROPERTIESTemplateError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEPROPERTIESTemplateError` API object.
///
/// @return An instantiation of the `DBFILEPROPERTIESTemplateError` object.
///
+ (DBFILEPROPERTIESTemplateError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
