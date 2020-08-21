///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SfAllowNonMembersToViewSharedLinksDetails` struct.
///
/// Allowed non-collaborators to view links to files in shared folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Target asset position in the Assets list.
@property (nonatomic, readonly) NSNumber *targetAssetIndex;

/// Original shared folder name.
@property (nonatomic, readonly, copy) NSString *originalFolderName;

/// Shared folder type. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *sharedFolderType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param targetAssetIndex Target asset position in the Assets list.
/// @param originalFolderName Original shared folder name.
/// @param sharedFolderType Shared folder type. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetAssetIndex:(NSNumber *)targetAssetIndex
                      originalFolderName:(NSString *)originalFolderName
                        sharedFolderType:(nullable NSString *)sharedFolderType;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param targetAssetIndex Target asset position in the Assets list.
/// @param originalFolderName Original shared folder name.
///
/// @return An initialized instance.
///
- (instancetype)initWithTargetAssetIndex:(NSNumber *)targetAssetIndex originalFolderName:(NSString *)originalFolderName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SfAllowNonMembersToViewSharedLinksDetails`
/// struct.
///
@interface DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails *)instance;

///
/// Deserializes `DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails` object.
///
+ (DBTEAMLOGSfAllowNonMembersToViewSharedLinksDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
