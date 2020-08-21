///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMPOLICIESPaperDeploymentPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDeploymentPolicy` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMPOLICIESPaperDeploymentPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMPOLICIESPaperDeploymentPolicyTag` enum type represents the
/// possible tag states with which the `DBTEAMPOLICIESPaperDeploymentPolicy`
/// union can exist.
typedef NS_ENUM(NSInteger, DBTEAMPOLICIESPaperDeploymentPolicyTag) {
  /// All team members have access to Paper.
  DBTEAMPOLICIESPaperDeploymentPolicyFull,

  /// Only whitelisted team members can access Paper. To see which user is
  /// whitelisted, check 'is_paper_whitelisted' on 'account/info'.
  DBTEAMPOLICIESPaperDeploymentPolicyPartial,

  /// (no description).
  DBTEAMPOLICIESPaperDeploymentPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMPOLICIESPaperDeploymentPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "full".
///
/// Description of the "full" tag state: All team members have access to Paper.
///
/// @return An initialized instance.
///
- (instancetype)initWithFull;

///
/// Initializes union class with tag state of "partial".
///
/// Description of the "partial" tag state: Only whitelisted team members can
/// access Paper. To see which user is whitelisted, check 'is_paper_whitelisted'
/// on 'account/info'.
///
/// @return An initialized instance.
///
- (instancetype)initWithPartial;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "full".
///
/// @return Whether the union's current tag state has value "full".
///
- (BOOL)isFull;

///
/// Retrieves whether the union's current tag state has value "partial".
///
/// @return Whether the union's current tag state has value "partial".
///
- (BOOL)isPartial;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMPOLICIESPaperDeploymentPolicy` union.
///
@interface DBTEAMPOLICIESPaperDeploymentPolicySerializer : NSObject

///
/// Serializes `DBTEAMPOLICIESPaperDeploymentPolicy` instances.
///
/// @param instance An instance of the `DBTEAMPOLICIESPaperDeploymentPolicy` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESPaperDeploymentPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMPOLICIESPaperDeploymentPolicy *)instance;

///
/// Deserializes `DBTEAMPOLICIESPaperDeploymentPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESPaperDeploymentPolicy` API object.
///
/// @return An instantiation of the `DBTEAMPOLICIESPaperDeploymentPolicy`
/// object.
///
+ (DBTEAMPOLICIESPaperDeploymentPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
