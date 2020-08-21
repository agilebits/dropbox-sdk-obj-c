///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMListTeamDevicesArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListTeamDevicesArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMListTeamDevicesArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// At the first call to the `devicesListTeamDevices` the cursor shouldn't be
/// passed. Then, if the result of the call includes a cursor, the following
/// requests should include the received cursors in order to receive the next
/// sub list of team devices.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

/// Whether to list web sessions of the team members.
@property (nonatomic, readonly) NSNumber *includeWebSessions;

/// Whether to list desktop clients of the team members.
@property (nonatomic, readonly) NSNumber *includeDesktopClients;

/// Whether to list mobile clients of the team members.
@property (nonatomic, readonly) NSNumber *includeMobileClients;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor At the first call to the `devicesListTeamDevices` the cursor
/// shouldn't be passed. Then, if the result of the call includes a cursor, the
/// following requests should include the received cursors in order to receive
/// the next sub list of team devices.
/// @param includeWebSessions Whether to list web sessions of the team members.
/// @param includeDesktopClients Whether to list desktop clients of the team
/// members.
/// @param includeMobileClients Whether to list mobile clients of the team
/// members.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(nullable NSString *)cursor
            includeWebSessions:(nullable NSNumber *)includeWebSessions
         includeDesktopClients:(nullable NSNumber *)includeDesktopClients
          includeMobileClients:(nullable NSNumber *)includeMobileClients;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListTeamDevicesArg` struct.
///
@interface DBTEAMListTeamDevicesArgSerializer : NSObject

///
/// Serializes `DBTEAMListTeamDevicesArg` instances.
///
/// @param instance An instance of the `DBTEAMListTeamDevicesArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMListTeamDevicesArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMListTeamDevicesArg *)instance;

///
/// Deserializes `DBTEAMListTeamDevicesArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMListTeamDevicesArg` API object.
///
/// @return An instantiation of the `DBTEAMListTeamDevicesArg` object.
///
+ (DBTEAMListTeamDevicesArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
