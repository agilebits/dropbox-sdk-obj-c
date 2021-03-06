///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGSharedFolderMembersInheritancePolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderMembersInheritancePolicy` union.
///
/// Specifies if a shared folder inherits its members from the parent folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedFolderMembersInheritancePolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGSharedFolderMembersInheritancePolicyTag` enum type represents
/// the possible tag states with which the
/// `DBTEAMLOGSharedFolderMembersInheritancePolicy` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGSharedFolderMembersInheritancePolicyTag){
    /// (no description).
    DBTEAMLOGSharedFolderMembersInheritancePolicyInheritMembers,

    /// (no description).
    DBTEAMLOGSharedFolderMembersInheritancePolicyDontInheritMembers,

    /// (no description).
    DBTEAMLOGSharedFolderMembersInheritancePolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGSharedFolderMembersInheritancePolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "inherit_members".
///
/// @return An initialized instance.
///
- (instancetype)initWithInheritMembers;

///
/// Initializes union class with tag state of "dont_inherit_members".
///
/// @return An initialized instance.
///
- (instancetype)initWithDontInheritMembers;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "inherit_members".
///
/// @return Whether the union's current tag state has value "inherit_members".
///
- (BOOL)isInheritMembers;

///
/// Retrieves whether the union's current tag state has value
/// "dont_inherit_members".
///
/// @return Whether the union's current tag state has value
/// "dont_inherit_members".
///
- (BOOL)isDontInheritMembers;

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
/// The serialization class for the
/// `DBTEAMLOGSharedFolderMembersInheritancePolicy` union.
///
@interface DBTEAMLOGSharedFolderMembersInheritancePolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedFolderMembersInheritancePolicy` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedFolderMembersInheritancePolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderMembersInheritancePolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharedFolderMembersInheritancePolicy *)instance;

///
/// Deserializes `DBTEAMLOGSharedFolderMembersInheritancePolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderMembersInheritancePolicy` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedFolderMembersInheritancePolicy` object.
///
+ (DBTEAMLOGSharedFolderMembersInheritancePolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
