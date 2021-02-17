///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGTeamMergeRequestCanceledDetails;
@class DBTEAMLOGTeamMergeRequestCanceledExtraDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeRequestCanceledDetails` struct.
///
/// Canceled a team merge request.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeRequestCanceledDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Team merge request cancellation details.
@property (nonatomic, readonly) DBTEAMLOGTeamMergeRequestCanceledExtraDetails *requestCanceledDetails;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param requestCanceledDetails Team merge request cancellation details.
///
/// @return An initialized instance.
///
- (instancetype)initWithRequestCanceledDetails:(DBTEAMLOGTeamMergeRequestCanceledExtraDetails *)requestCanceledDetails;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamMergeRequestCanceledDetails` struct.
///
@interface DBTEAMLOGTeamMergeRequestCanceledDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeRequestCanceledDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamMergeRequestCanceledDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestCanceledDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTeamMergeRequestCanceledDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeRequestCanceledDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestCanceledDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGTeamMergeRequestCanceledDetails`
/// object.
///
+ (DBTEAMLOGTeamMergeRequestCanceledDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END