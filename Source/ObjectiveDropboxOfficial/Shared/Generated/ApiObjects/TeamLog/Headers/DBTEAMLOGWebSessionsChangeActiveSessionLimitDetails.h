///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `WebSessionsChangeActiveSessionLimitDetails` struct.
///
/// Changed limit on active sessions per member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Previous max number of concurrent active sessions policy.
@property (nonatomic, readonly, copy) NSString *previousValue;

/// New max number of concurrent active sessions policy.
@property (nonatomic, readonly, copy) NSString *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param previousValue Previous max number of concurrent active sessions
/// policy.
/// @param dNewValue New max number of concurrent active sessions policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithPreviousValue:(NSString *)previousValue dNewValue:(NSString *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `WebSessionsChangeActiveSessionLimitDetails`
/// struct.
///
@interface DBTEAMLOGWebSessionsChangeActiveSessionLimitDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails *)instance;

///
/// Deserializes `DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails` object.
///
+ (DBTEAMLOGWebSessionsChangeActiveSessionLimitDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
