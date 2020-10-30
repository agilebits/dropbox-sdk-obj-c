///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGShowcaseDownloadPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShowcaseDownloadPolicy` union.
///
/// Policy for controlling if files can be downloaded from Showcases by team
/// members
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGShowcaseDownloadPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGShowcaseDownloadPolicyTag` enum type represents the possible
/// tag states with which the `DBTEAMLOGShowcaseDownloadPolicy` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGShowcaseDownloadPolicyTag){
    /// (no description).
    DBTEAMLOGShowcaseDownloadPolicyDisabled,

    /// (no description).
    DBTEAMLOGShowcaseDownloadPolicyEnabled,

    /// (no description).
    DBTEAMLOGShowcaseDownloadPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGShowcaseDownloadPolicyTag tag;

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
/// The serialization class for the `DBTEAMLOGShowcaseDownloadPolicy` union.
///
@interface DBTEAMLOGShowcaseDownloadPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGShowcaseDownloadPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGShowcaseDownloadPolicy` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGShowcaseDownloadPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGShowcaseDownloadPolicy *)instance;

///
/// Deserializes `DBTEAMLOGShowcaseDownloadPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGShowcaseDownloadPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGShowcaseDownloadPolicy` object.
///
+ (DBTEAMLOGShowcaseDownloadPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
