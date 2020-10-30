///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGContextLogInfo;
@class DBTEAMLOGNonTeamMemberLogInfo;
@class DBTEAMLOGTeamLogInfo;
@class DBTEAMLOGTeamMemberLogInfo;
@class DBTEAMLOGTrustedNonTeamMemberLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ContextLogInfo` union.
///
/// The primary entity on which the action was done.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGContextLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGContextLogInfoTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGContextLogInfo` union can exist.
typedef NS_CLOSED_ENUM(NSInteger, DBTEAMLOGContextLogInfoTag){
    /// Action was done on behalf of a team member.
    DBTEAMLOGContextLogInfoTeamMember,

    /// Action was done on behalf of a non team member.
    DBTEAMLOGContextLogInfoNonTeamMember,

    /// Anonymous context.
    DBTEAMLOGContextLogInfoAnonymous,

    /// Action was done on behalf of the team.
    DBTEAMLOGContextLogInfoTeam,

    /// Action was done on behalf of a team that's part of an organization.
    DBTEAMLOGContextLogInfoOrganizationTeam,

    /// Action was done on behalf of a trusted non team member.
    DBTEAMLOGContextLogInfoTrustedNonTeamMember,

    /// (no description).
    DBTEAMLOGContextLogInfoOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGContextLogInfoTag tag;

/// Action was done on behalf of a team member. @note Ensure the `isTeamMember`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBTEAMLOGTeamMemberLogInfo *teamMember;

/// Action was done on behalf of a non team member. @note Ensure the
/// `isNonTeamMember` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGNonTeamMemberLogInfo *nonTeamMember;

/// Action was done on behalf of a team that's part of an organization. @note
/// Ensure the `isOrganizationTeam` method returns true before accessing,
/// otherwise a runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGTeamLogInfo *organizationTeam;

/// Action was done on behalf of a trusted non team member. @note Ensure the
/// `isTrustedNonTeamMember` method returns true before accessing, otherwise a
/// runtime exception will be raised.
@property (nonatomic, readonly) DBTEAMLOGTrustedNonTeamMemberLogInfo *trustedNonTeamMember;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "team_member".
///
/// Description of the "team_member" tag state: Action was done on behalf of a
/// team member.
///
/// @param teamMember Action was done on behalf of a team member.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamMember:(DBTEAMLOGTeamMemberLogInfo *)teamMember;

///
/// Initializes union class with tag state of "non_team_member".
///
/// Description of the "non_team_member" tag state: Action was done on behalf of
/// a non team member.
///
/// @param nonTeamMember Action was done on behalf of a non team member.
///
/// @return An initialized instance.
///
- (instancetype)initWithNonTeamMember:(DBTEAMLOGNonTeamMemberLogInfo *)nonTeamMember;

///
/// Initializes union class with tag state of "anonymous".
///
/// Description of the "anonymous" tag state: Anonymous context.
///
/// @return An initialized instance.
///
- (instancetype)initWithAnonymous;

///
/// Initializes union class with tag state of "team".
///
/// Description of the "team" tag state: Action was done on behalf of the team.
///
/// @return An initialized instance.
///
- (instancetype)initWithTeam;

///
/// Initializes union class with tag state of "organization_team".
///
/// Description of the "organization_team" tag state: Action was done on behalf
/// of a team that's part of an organization.
///
/// @param organizationTeam Action was done on behalf of a team that's part of
/// an organization.
///
/// @return An initialized instance.
///
- (instancetype)initWithOrganizationTeam:(DBTEAMLOGTeamLogInfo *)organizationTeam;

///
/// Initializes union class with tag state of "trusted_non_team_member".
///
/// Description of the "trusted_non_team_member" tag state: Action was done on
/// behalf of a trusted non team member.
///
/// @param trustedNonTeamMember Action was done on behalf of a trusted non team
/// member.
///
/// @return An initialized instance.
///
- (instancetype)initWithTrustedNonTeamMember:(DBTEAMLOGTrustedNonTeamMemberLogInfo *)trustedNonTeamMember;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "team_member".
///
/// @note Call this method and ensure it returns true before accessing the
/// `teamMember` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "team_member".
///
- (BOOL)isTeamMember;

///
/// Retrieves whether the union's current tag state has value "non_team_member".
///
/// @note Call this method and ensure it returns true before accessing the
/// `nonTeamMember` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "non_team_member".
///
- (BOOL)isNonTeamMember;

///
/// Retrieves whether the union's current tag state has value "anonymous".
///
/// @return Whether the union's current tag state has value "anonymous".
///
- (BOOL)isAnonymous;

///
/// Retrieves whether the union's current tag state has value "team".
///
/// @return Whether the union's current tag state has value "team".
///
- (BOOL)isTeam;

///
/// Retrieves whether the union's current tag state has value
/// "organization_team".
///
/// @note Call this method and ensure it returns true before accessing the
/// `organizationTeam` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "organization_team".
///
- (BOOL)isOrganizationTeam;

///
/// Retrieves whether the union's current tag state has value
/// "trusted_non_team_member".
///
/// @note Call this method and ensure it returns true before accessing the
/// `trustedNonTeamMember` property, otherwise a runtime exception will be
/// thrown.
///
/// @return Whether the union's current tag state has value
/// "trusted_non_team_member".
///
- (BOOL)isTrustedNonTeamMember;

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
/// The serialization class for the `DBTEAMLOGContextLogInfo` union.
///
@interface DBTEAMLOGContextLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGContextLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGContextLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGContextLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGContextLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGContextLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGContextLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGContextLogInfo` object.
///
+ (DBTEAMLOGContextLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
