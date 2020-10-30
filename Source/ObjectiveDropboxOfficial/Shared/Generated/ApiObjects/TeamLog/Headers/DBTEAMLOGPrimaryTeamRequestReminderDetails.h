///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGPrimaryTeamRequestReminderDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PrimaryTeamRequestReminderDetails` struct.
///
/// Team merge request reminder details shown to the primary team
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGPrimaryTeamRequestReminderDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The secondary team name.
@property (nonatomic, readonly, copy) NSString *secondaryTeam;

/// The name of the primary team admin the request was sent to.
@property (nonatomic, readonly, copy) NSString *sentTo;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param secondaryTeam The secondary team name.
/// @param sentTo The name of the primary team admin the request was sent to.
///
/// @return An initialized instance.
///
- (instancetype)initWithSecondaryTeam:(NSString *)secondaryTeam sentTo:(NSString *)sentTo;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PrimaryTeamRequestReminderDetails` struct.
///
@interface DBTEAMLOGPrimaryTeamRequestReminderDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGPrimaryTeamRequestReminderDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGPrimaryTeamRequestReminderDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGPrimaryTeamRequestReminderDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGPrimaryTeamRequestReminderDetails *)instance;

///
/// Deserializes `DBTEAMLOGPrimaryTeamRequestReminderDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGPrimaryTeamRequestReminderDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGPrimaryTeamRequestReminderDetails`
/// object.
///
+ (DBTEAMLOGPrimaryTeamRequestReminderDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
