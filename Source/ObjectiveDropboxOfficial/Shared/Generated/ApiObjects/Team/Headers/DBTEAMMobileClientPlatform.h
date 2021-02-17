///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMMobileClientPlatform;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MobileClientPlatform` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMobileClientPlatform : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMMobileClientPlatformTag` enum type represents the possible tag
/// states with which the `DBTEAMMobileClientPlatform` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMMobileClientPlatformTag){
    /// Official Dropbox iPhone client.
    DBTEAMMobileClientPlatformIphone,

    /// Official Dropbox iPad client.
    DBTEAMMobileClientPlatformIpad,

    /// Official Dropbox Android client.
    DBTEAMMobileClientPlatformAndroid,

    /// Official Dropbox Windows phone client.
    DBTEAMMobileClientPlatformWindowsPhone,

    /// Official Dropbox Blackberry client.
    DBTEAMMobileClientPlatformBlackberry,

    /// (no description).
    DBTEAMMobileClientPlatformOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMMobileClientPlatformTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "iphone".
///
/// Description of the "iphone" tag state: Official Dropbox iPhone client.
///
/// @return An initialized instance.
///
- (instancetype)initWithIphone;

///
/// Initializes union class with tag state of "ipad".
///
/// Description of the "ipad" tag state: Official Dropbox iPad client.
///
/// @return An initialized instance.
///
- (instancetype)initWithIpad;

///
/// Initializes union class with tag state of "android".
///
/// Description of the "android" tag state: Official Dropbox Android client.
///
/// @return An initialized instance.
///
- (instancetype)initWithAndroid;

///
/// Initializes union class with tag state of "windows_phone".
///
/// Description of the "windows_phone" tag state: Official Dropbox Windows phone
/// client.
///
/// @return An initialized instance.
///
- (instancetype)initWithWindowsPhone;

///
/// Initializes union class with tag state of "blackberry".
///
/// Description of the "blackberry" tag state: Official Dropbox Blackberry
/// client.
///
/// @return An initialized instance.
///
- (instancetype)initWithBlackberry;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "iphone".
///
/// @return Whether the union's current tag state has value "iphone".
///
- (BOOL)isIphone;

///
/// Retrieves whether the union's current tag state has value "ipad".
///
/// @return Whether the union's current tag state has value "ipad".
///
- (BOOL)isIpad;

///
/// Retrieves whether the union's current tag state has value "android".
///
/// @return Whether the union's current tag state has value "android".
///
- (BOOL)isAndroid;

///
/// Retrieves whether the union's current tag state has value "windows_phone".
///
/// @return Whether the union's current tag state has value "windows_phone".
///
- (BOOL)isWindowsPhone;

///
/// Retrieves whether the union's current tag state has value "blackberry".
///
/// @return Whether the union's current tag state has value "blackberry".
///
- (BOOL)isBlackberry;

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
/// The serialization class for the `DBTEAMMobileClientPlatform` union.
///
@interface DBTEAMMobileClientPlatformSerializer : NSObject

///
/// Serializes `DBTEAMMobileClientPlatform` instances.
///
/// @param instance An instance of the `DBTEAMMobileClientPlatform` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMobileClientPlatform` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMMobileClientPlatform *)instance;

///
/// Deserializes `DBTEAMMobileClientPlatform` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMobileClientPlatform` API object.
///
/// @return An instantiation of the `DBTEAMMobileClientPlatform` object.
///
+ (DBTEAMMobileClientPlatform *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
