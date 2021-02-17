///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeRequestCanceledShownToPrimaryTeamDetails` struct.
///
/// Canceled a team merge request.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The secondary team name.
@property (nonatomic, readonly, copy) NSString *secondaryTeam;

/// The name of the secondary team admin who sent the request originally.
@property (nonatomic, readonly, copy) NSString *sentBy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param secondaryTeam The secondary team name.
/// @param sentBy The name of the secondary team admin who sent the request
/// originally.
///
/// @return An initialized instance.
///
- (instancetype)initWithSecondaryTeam:(NSString *)secondaryTeam sentBy:(NSString *)sentBy;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `TeamMergeRequestCanceledShownToPrimaryTeamDetails` struct.
///
@interface DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:
    (DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails` object.
///
+ (DBTEAMLOGTeamMergeRequestCanceledShownToPrimaryTeamDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
