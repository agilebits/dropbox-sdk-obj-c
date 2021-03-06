///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMMembersListContinueArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MembersListContinueArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMMembersListContinueArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Indicates from what point to get the next set of members.
@property (nonatomic, readonly, copy) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor Indicates from what point to get the next set of members.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MembersListContinueArg` struct.
///
@interface DBTEAMMembersListContinueArgSerializer : NSObject

///
/// Serializes `DBTEAMMembersListContinueArg` instances.
///
/// @param instance An instance of the `DBTEAMMembersListContinueArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMMembersListContinueArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMMembersListContinueArg *)instance;

///
/// Deserializes `DBTEAMMembersListContinueArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMMembersListContinueArg` API object.
///
/// @return An instantiation of the `DBTEAMMembersListContinueArg` object.
///
+ (DBTEAMMembersListContinueArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
