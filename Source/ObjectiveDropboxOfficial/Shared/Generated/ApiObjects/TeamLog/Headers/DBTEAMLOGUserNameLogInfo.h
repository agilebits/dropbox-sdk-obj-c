///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGUserNameLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UserNameLogInfo` struct.
///
/// User's name logged information
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGUserNameLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Given name.
@property (nonatomic, readonly, copy) NSString *givenName;

/// Surname.
@property (nonatomic, readonly, copy) NSString *surname;

/// Locale. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *locale;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param givenName Given name.
/// @param surname Surname.
/// @param locale Locale. Might be missing due to historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithGivenName:(NSString *)givenName surname:(NSString *)surname locale:(nullable NSString *)locale;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param givenName Given name.
/// @param surname Surname.
///
/// @return An initialized instance.
///
- (instancetype)initWithGivenName:(NSString *)givenName surname:(NSString *)surname;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UserNameLogInfo` struct.
///
@interface DBTEAMLOGUserNameLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGUserNameLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGUserNameLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGUserNameLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGUserNameLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGUserNameLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGUserNameLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGUserNameLogInfo` object.
///
+ (DBTEAMLOGUserNameLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
