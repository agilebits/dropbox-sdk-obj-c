///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMCOMMONGroupManagementType;
@class DBTEAMGroupCreateArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupCreateArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupCreateArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Group name.
@property (nonatomic, readonly, copy) NSString *groupName;

/// Automatically add the creator of the group.
@property (nonatomic, readonly) NSNumber *addCreatorAsOwner;

/// The creator of a team can associate an arbitrary external ID to the group.
@property (nonatomic, readonly, copy, nullable) NSString *groupExternalId;

/// Whether the team can be managed by selected users, or only by team admins.
@property (nonatomic, readonly, nullable) DBTEAMCOMMONGroupManagementType *groupManagementType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param groupName Group name.
/// @param addCreatorAsOwner Automatically add the creator of the group.
/// @param groupExternalId The creator of a team can associate an arbitrary
/// external ID to the group.
/// @param groupManagementType Whether the team can be managed by selected
/// users, or only by team admins.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupName:(NSString *)groupName
                addCreatorAsOwner:(nullable NSNumber *)addCreatorAsOwner
                  groupExternalId:(nullable NSString *)groupExternalId
              groupManagementType:(nullable DBTEAMCOMMONGroupManagementType *)groupManagementType;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param groupName Group name.
///
/// @return An initialized instance.
///
- (instancetype)initWithGroupName:(NSString *)groupName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupCreateArg` struct.
///
@interface DBTEAMGroupCreateArgSerializer : NSObject

///
/// Serializes `DBTEAMGroupCreateArg` instances.
///
/// @param instance An instance of the `DBTEAMGroupCreateArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupCreateArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMGroupCreateArg *)instance;

///
/// Deserializes `DBTEAMGroupCreateArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupCreateArg` API object.
///
/// @return An instantiation of the `DBTEAMGroupCreateArg` object.
///
+ (DBTEAMGroupCreateArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
