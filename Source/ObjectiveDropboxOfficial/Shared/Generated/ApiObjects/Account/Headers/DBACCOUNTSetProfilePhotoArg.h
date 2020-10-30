///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBACCOUNTPhotoSourceArg;
@class DBACCOUNTSetProfilePhotoArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SetProfilePhotoArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBACCOUNTSetProfilePhotoArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Image to set as the user's new profile photo.
@property (nonatomic, readonly) DBACCOUNTPhotoSourceArg *photo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param photo Image to set as the user's new profile photo.
///
/// @return An initialized instance.
///
- (instancetype)initWithPhoto:(DBACCOUNTPhotoSourceArg *)photo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SetProfilePhotoArg` struct.
///
@interface DBACCOUNTSetProfilePhotoArgSerializer : NSObject

///
/// Serializes `DBACCOUNTSetProfilePhotoArg` instances.
///
/// @param instance An instance of the `DBACCOUNTSetProfilePhotoArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBACCOUNTSetProfilePhotoArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBACCOUNTSetProfilePhotoArg *)instance;

///
/// Deserializes `DBACCOUNTSetProfilePhotoArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBACCOUNTSetProfilePhotoArg` API object.
///
/// @return An instantiation of the `DBACCOUNTSetProfilePhotoArg` object.
///
+ (DBACCOUNTSetProfilePhotoArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
