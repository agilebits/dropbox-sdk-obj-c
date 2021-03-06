///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGPaperDocOwnershipChangedDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocOwnershipChangedDetails` struct.
///
/// Transferred ownership of Paper doc.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPaperDocOwnershipChangedDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Event unique identifier.
@property (nonatomic, readonly, copy) NSString *eventUuid;

/// Previous owner.
@property (nonatomic, readonly, copy, nullable) NSString *oldOwnerUserId;

/// New owner.
@property (nonatomic, readonly, copy) NSString *dNewOwnerUserId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param eventUuid Event unique identifier.
/// @param dNewOwnerUserId New owner.
/// @param oldOwnerUserId Previous owner.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid
                  dNewOwnerUserId:(NSString *)dNewOwnerUserId
                   oldOwnerUserId:(nullable NSString *)oldOwnerUserId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param eventUuid Event unique identifier.
/// @param dNewOwnerUserId New owner.
///
/// @return An initialized instance.
///
- (instancetype)initWithEventUuid:(NSString *)eventUuid dNewOwnerUserId:(NSString *)dNewOwnerUserId;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperDocOwnershipChangedDetails` struct.
///
@interface DBTEAMLOGPaperDocOwnershipChangedDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPaperDocOwnershipChangedDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPaperDocOwnershipChangedDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperDocOwnershipChangedDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPaperDocOwnershipChangedDetails *)instance;

///
/// Deserializes `DBTEAMLOGPaperDocOwnershipChangedDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPaperDocOwnershipChangedDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPaperDocOwnershipChangedDetails`
/// object.
///
+ (DBTEAMLOGPaperDocOwnershipChangedDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
