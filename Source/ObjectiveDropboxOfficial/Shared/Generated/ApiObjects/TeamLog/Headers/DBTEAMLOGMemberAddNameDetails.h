///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGMemberAddNameDetails;
@class DBTEAMLOGUserNameLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `MemberAddNameDetails` struct.
///
/// Added team member name.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGMemberAddNameDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New user's name.
@property (nonatomic, readonly) DBTEAMLOGUserNameLogInfo *dNewValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New user's name.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGUserNameLogInfo *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberAddNameDetails` struct.
///
@interface DBTEAMLOGMemberAddNameDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGMemberAddNameDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGMemberAddNameDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberAddNameDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGMemberAddNameDetails *)instance;

///
/// Deserializes `DBTEAMLOGMemberAddNameDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGMemberAddNameDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGMemberAddNameDetails` object.
///
+ (DBTEAMLOGMemberAddNameDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
