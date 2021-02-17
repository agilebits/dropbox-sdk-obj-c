///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGMemberSetProfilePhotoDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberSetProfilePhotoDetails` struct.
///
/// Set team member profile photo.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGMemberSetProfilePhotoDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberSetProfilePhotoDetails` struct.
///
@interface DBTEAMLOGMemberSetProfilePhotoDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGMemberSetProfilePhotoDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGMemberSetProfilePhotoDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberSetProfilePhotoDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGMemberSetProfilePhotoDetails *)instance;

///
/// Deserializes `DBTEAMLOGMemberSetProfilePhotoDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberSetProfilePhotoDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGMemberSetProfilePhotoDetails`
/// object.
///
+ (DBTEAMLOGMemberSetProfilePhotoDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END