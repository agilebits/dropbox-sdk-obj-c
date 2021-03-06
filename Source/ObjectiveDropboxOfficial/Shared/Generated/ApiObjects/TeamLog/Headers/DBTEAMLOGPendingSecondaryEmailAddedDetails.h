///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGPendingSecondaryEmailAddedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PendingSecondaryEmailAddedDetails` struct.
///
/// Added pending secondary email.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPendingSecondaryEmailAddedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New pending secondary email.
@property (nonatomic, readonly, copy) NSString *secondaryEmail;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param secondaryEmail New pending secondary email.
///
/// @return An initialized instance.
///
- (instancetype)initWithSecondaryEmail:(NSString *)secondaryEmail;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PendingSecondaryEmailAddedDetails` struct.
///
@interface DBTEAMLOGPendingSecondaryEmailAddedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPendingSecondaryEmailAddedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPendingSecondaryEmailAddedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPendingSecondaryEmailAddedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPendingSecondaryEmailAddedDetails *)instance;

///
/// Deserializes `DBTEAMLOGPendingSecondaryEmailAddedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPendingSecondaryEmailAddedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPendingSecondaryEmailAddedDetails`
/// object.
///
+ (DBTEAMLOGPendingSecondaryEmailAddedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
