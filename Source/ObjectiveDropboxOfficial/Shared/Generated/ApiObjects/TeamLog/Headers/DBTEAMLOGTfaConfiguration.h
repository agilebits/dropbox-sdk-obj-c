///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGTfaConfiguration;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TfaConfiguration` union.
///
/// Two factor authentication configuration. Note: the enabled option is
/// deprecated.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTfaConfiguration : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGTfaConfigurationTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGTfaConfiguration` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGTfaConfigurationTag){
    /// (no description).
    DBTEAMLOGTfaConfigurationDisabled,

    /// (no description).
    DBTEAMLOGTfaConfigurationEnabled,

    /// (no description).
    DBTEAMLOGTfaConfigurationSms,

    /// (no description).
    DBTEAMLOGTfaConfigurationAuthenticator,

    /// (no description).
    DBTEAMLOGTfaConfigurationOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGTfaConfigurationTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled".
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabled;

///
/// Initializes union class with tag state of "enabled".
///
/// @return An initialized instance.
///
- (instancetype)initWithEnabled;

///
/// Initializes union class with tag state of "sms".
///
/// @return An initialized instance.
///
- (instancetype)initWithSms;

///
/// Initializes union class with tag state of "authenticator".
///
/// @return An initialized instance.
///
- (instancetype)initWithAuthenticator;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "disabled".
///
/// @return Whether the union's current tag state has value "disabled".
///
- (BOOL)isDisabled;

///
/// Retrieves whether the union's current tag state has value "enabled".
///
/// @return Whether the union's current tag state has value "enabled".
///
- (BOOL)isEnabled;

///
/// Retrieves whether the union's current tag state has value "sms".
///
/// @return Whether the union's current tag state has value "sms".
///
- (BOOL)isSms;

///
/// Retrieves whether the union's current tag state has value "authenticator".
///
/// @return Whether the union's current tag state has value "authenticator".
///
- (BOOL)isAuthenticator;

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
/// The serialization class for the `DBTEAMLOGTfaConfiguration` union.
///
@interface DBTEAMLOGTfaConfigurationSerializer : NSObject

///
/// Serializes `DBTEAMLOGTfaConfiguration` instances.
///
/// @param instance An instance of the `DBTEAMLOGTfaConfiguration` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTfaConfiguration` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTfaConfiguration *)instance;

///
/// Deserializes `DBTEAMLOGTfaConfiguration` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTfaConfiguration` API object.
///
/// @return An instantiation of the `DBTEAMLOGTfaConfiguration` object.
///
+ (DBTEAMLOGTfaConfiguration *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
