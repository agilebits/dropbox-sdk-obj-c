///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamMergeRequestCanceledShownToSecondaryTeamDetails` struct.
///
/// Canceled a team merge request.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The email of the primary team admin that the request was sent to.
@property (nonatomic, readonly, copy) NSString *sentTo;

/// The name of the secondary team admin who sent the request originally.
@property (nonatomic, readonly, copy) NSString *sentBy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sentTo The email of the primary team admin that the request was sent
/// to.
/// @param sentBy The name of the secondary team admin who sent the request
/// originally.
///
/// @return An initialized instance.
///
- (instancetype)initWithSentTo:(NSString *)sentTo sentBy:(NSString *)sentBy;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the
/// `TeamMergeRequestCanceledShownToSecondaryTeamDetails` struct.
///
@interface DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails`
/// instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:
    (DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails *)instance;

///
/// Deserializes `DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails`
/// instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails` object.
///
+ (DBTEAMLOGTeamMergeRequestCanceledShownToSecondaryTeamDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
