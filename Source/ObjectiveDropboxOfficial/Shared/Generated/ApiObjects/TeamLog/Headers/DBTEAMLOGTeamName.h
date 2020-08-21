///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGTeamName;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TeamName` struct.
///
/// Team name details
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGTeamName : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Team's display name.
@property (nonatomic, readonly, copy) NSString *teamDisplayName;

/// Team's legal name.
@property (nonatomic, readonly, copy) NSString *teamLegalName;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamDisplayName Team's display name.
/// @param teamLegalName Team's legal name.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamDisplayName:(NSString *)teamDisplayName teamLegalName:(NSString *)teamLegalName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TeamName` struct.
///
@interface DBTEAMLOGTeamNameSerializer : NSObject

///
/// Serializes `DBTEAMLOGTeamName` instances.
///
/// @param instance An instance of the `DBTEAMLOGTeamName` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamName` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGTeamName *)instance;

///
/// Deserializes `DBTEAMLOGTeamName` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGTeamName` API object.
///
/// @return An instantiation of the `DBTEAMLOGTeamName` object.
///
+ (DBTEAMLOGTeamName *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
