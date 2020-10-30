///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBACCOUNTSetProfilePhotoResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SetProfilePhotoResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBACCOUNTSetProfilePhotoResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// URL for the photo representing the user, if one is set.
@property (nonatomic, readonly, copy) NSString *profilePhotoUrl;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param profilePhotoUrl URL for the photo representing the user, if one is
/// set.
///
/// @return An initialized instance.
///
- (instancetype)initWithProfilePhotoUrl:(NSString *)profilePhotoUrl;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SetProfilePhotoResult` struct.
///
@interface DBACCOUNTSetProfilePhotoResultSerializer : NSObject

///
/// Serializes `DBACCOUNTSetProfilePhotoResult` instances.
///
/// @param instance An instance of the `DBACCOUNTSetProfilePhotoResult` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBACCOUNTSetProfilePhotoResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBACCOUNTSetProfilePhotoResult *)instance;

///
/// Deserializes `DBACCOUNTSetProfilePhotoResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBACCOUNTSetProfilePhotoResult` API object.
///
/// @return An instantiation of the `DBACCOUNTSetProfilePhotoResult` object.
///
+ (DBACCOUNTSetProfilePhotoResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
