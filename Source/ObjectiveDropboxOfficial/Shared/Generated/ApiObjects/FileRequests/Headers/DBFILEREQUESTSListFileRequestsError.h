///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILEREQUESTSListFileRequestsError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFileRequestsError` union.
///
/// There was an error retrieving the file requests.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILEREQUESTSListFileRequestsError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBFILEREQUESTSListFileRequestsErrorTag` enum type represents the
/// possible tag states with which the `DBFILEREQUESTSListFileRequestsError`
/// union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBFILEREQUESTSListFileRequestsErrorTag){
    /// This user's Dropbox Business team doesn't allow file requests.
    DBFILEREQUESTSListFileRequestsErrorDisabledForTeam,

    /// (no description).
    DBFILEREQUESTSListFileRequestsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILEREQUESTSListFileRequestsErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "disabled_for_team".
///
/// Description of the "disabled_for_team" tag state: This user's Dropbox
/// Business team doesn't allow file requests.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisabledForTeam;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value
/// "disabled_for_team".
///
/// @return Whether the union's current tag state has value "disabled_for_team".
///
- (BOOL)isDisabledForTeam;

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
/// The serialization class for the `DBFILEREQUESTSListFileRequestsError` union.
///
@interface DBFILEREQUESTSListFileRequestsErrorSerializer : NSObject

///
/// Serializes `DBFILEREQUESTSListFileRequestsError` instances.
///
/// @param instance An instance of the `DBFILEREQUESTSListFileRequestsError` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILEREQUESTSListFileRequestsError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILEREQUESTSListFileRequestsError *)instance;

///
/// Deserializes `DBFILEREQUESTSListFileRequestsError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILEREQUESTSListFileRequestsError` API object.
///
/// @return An instantiation of the `DBFILEREQUESTSListFileRequestsError`
/// object.
///
+ (DBFILEREQUESTSListFileRequestsError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
