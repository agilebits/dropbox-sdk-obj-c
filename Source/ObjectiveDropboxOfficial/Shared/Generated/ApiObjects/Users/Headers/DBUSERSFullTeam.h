///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>
#import <ObjectiveDropboxOfficial/DBUSERSTeam.h>

@class DBTEAMPOLICIESOfficeAddInPolicy;
@class DBTEAMPOLICIESTeamSharingPolicies;
@class DBUSERSFullTeam;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FullTeam` struct.
///
/// Detailed information about a team.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSFullTeam : DBUSERSTeam <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Team policies governing sharing.
@property (nonatomic, readonly) DBTEAMPOLICIESTeamSharingPolicies *sharingPolicies;

/// Team policy governing the use of the Office Add-In.
@property (nonatomic, readonly) DBTEAMPOLICIESOfficeAddInPolicy *officeAddinPolicy;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param id_ The team's unique ID.
/// @param name The name of the team.
/// @param sharingPolicies Team policies governing sharing.
/// @param officeAddinPolicy Team policy governing the use of the Office Add-In.
///
/// @return An initialized instance.
///
- (instancetype)initWithId_:(NSString *)id_
                       name:(NSString *)name
            sharingPolicies:(DBTEAMPOLICIESTeamSharingPolicies *)sharingPolicies
          officeAddinPolicy:(DBTEAMPOLICIESOfficeAddInPolicy *)officeAddinPolicy;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FullTeam` struct.
///
@interface DBUSERSFullTeamSerializer : NSObject

///
/// Serializes `DBUSERSFullTeam` instances.
///
/// @param instance An instance of the `DBUSERSFullTeam` API object.
///
/// @return A json-compatible dictionary representation of the `DBUSERSFullTeam`
/// API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBUSERSFullTeam *)instance;

///
/// Deserializes `DBUSERSFullTeam` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBUSERSFullTeam` API object.
///
/// @return An instantiation of the `DBUSERSFullTeam` object.
///
+ (DBUSERSFullTeam *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
