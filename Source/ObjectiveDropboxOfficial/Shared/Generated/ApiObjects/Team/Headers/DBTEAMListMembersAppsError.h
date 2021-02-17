///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMListMembersAppsError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListMembersAppsError` union.
///
/// Error returned by `linkedAppsListMembersLinkedApps`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListMembersAppsError : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMListMembersAppsErrorTag` enum type represents the possible tag
/// states with which the `DBTEAMListMembersAppsError` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMListMembersAppsErrorTag){
    /// Indicates that the cursor has been invalidated. Call
    /// `linkedAppsListMembersLinkedApps` again with an empty cursor to obtain a
    /// new cursor.
    DBTEAMListMembersAppsErrorReset,

    /// (no description).
    DBTEAMListMembersAppsErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMListMembersAppsErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "reset".
///
/// Description of the "reset" tag state: Indicates that the cursor has been
/// invalidated. Call `linkedAppsListMembersLinkedApps` again with an empty
/// cursor to obtain a new cursor.
///
/// @return An initialized instance.
///
- (instancetype)initWithReset;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "reset".
///
/// @return Whether the union's current tag state has value "reset".
///
- (BOOL)isReset;

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
/// The serialization class for the `DBTEAMListMembersAppsError` union.
///
@interface DBTEAMListMembersAppsErrorSerializer : NSObject

///
/// Serializes `DBTEAMListMembersAppsError` instances.
///
/// @param instance An instance of the `DBTEAMListMembersAppsError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListMembersAppsError` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMListMembersAppsError *)instance;

///
/// Deserializes `DBTEAMListMembersAppsError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListMembersAppsError` API object.
///
/// @return An instantiation of the `DBTEAMListMembersAppsError` object.
///
+ (DBTEAMListMembersAppsError *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
