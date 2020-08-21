///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBSHARINGRelinquishFileMembershipArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelinquishFileMembershipArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGRelinquishFileMembershipArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The path or id for the file.
@property (nonatomic, readonly, copy) NSString *file;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param file The path or id for the file.
///
/// @return An initialized instance.
///
- (instancetype)initWithFile:(NSString *)file;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RelinquishFileMembershipArg` struct.
///
@interface DBSHARINGRelinquishFileMembershipArgSerializer : NSObject

///
/// Serializes `DBSHARINGRelinquishFileMembershipArg` instances.
///
/// @param instance An instance of the `DBSHARINGRelinquishFileMembershipArg`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGRelinquishFileMembershipArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGRelinquishFileMembershipArg *)instance;

///
/// Deserializes `DBSHARINGRelinquishFileMembershipArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGRelinquishFileMembershipArg` API object.
///
/// @return An instantiation of the `DBSHARINGRelinquishFileMembershipArg`
/// object.
///
+ (DBSHARINGRelinquishFileMembershipArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
