///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>
#import <ObjectiveDropboxOfficial/DBTEAMBaseDfbReport.h>

@class DBTEAMGetStorageReport;
@class DBTEAMStorageBucket;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetStorageReport` struct.
///
/// Storage Report Result. Each of the items in the storage report is an array
/// of values, one value per day. If there is no data for a day, then the value
/// will be None.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGetStorageReport : DBTEAMBaseDfbReport <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Sum of the shared, unshared, and datastore usages, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> *totalUsage;

/// Array of the combined size (bytes) of team members' shared folders, for each
/// day.
@property (nonatomic, readonly) NSArray<NSNumber *> *sharedUsage;

/// Array of the combined size (bytes) of team members' root namespaces, for
/// each day.
@property (nonatomic, readonly) NSArray<NSNumber *> *unsharedUsage;

/// Array of the number of shared folders owned by team members, for each day.
@property (nonatomic, readonly) NSArray<NSNumber *> *sharedFolders;

/// Array of storage summaries of team members' account sizes. Each storage
/// summary is an array of key, value pairs, where each pair describes a storage
/// bucket. The key indicates the upper bound of the bucket and the value is the
/// number of users in that bucket. There is one such summary per day. If there
/// is no data for a day, the storage summary will be empty.
@property (nonatomic, readonly) NSArray<NSArray<DBTEAMStorageBucket *> *> *memberStorageMap;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param startDate First date present in the results as 'YYYY-MM-DD' or None.
/// @param totalUsage Sum of the shared, unshared, and datastore usages, for
/// each day.
/// @param sharedUsage Array of the combined size (bytes) of team members'
/// shared folders, for each day.
/// @param unsharedUsage Array of the combined size (bytes) of team members'
/// root namespaces, for each day.
/// @param sharedFolders Array of the number of shared folders owned by team
/// members, for each day.
/// @param memberStorageMap Array of storage summaries of team members' account
/// sizes. Each storage summary is an array of key, value pairs, where each pair
/// describes a storage bucket. The key indicates the upper bound of the bucket
/// and the value is the number of users in that bucket. There is one such
/// summary per day. If there is no data for a day, the storage summary will be
/// empty.
///
/// @return An initialized instance.
///
- (instancetype)initWithStartDate:(NSString *)startDate
                       totalUsage:(NSArray<NSNumber *> *)totalUsage
                      sharedUsage:(NSArray<NSNumber *> *)sharedUsage
                    unsharedUsage:(NSArray<NSNumber *> *)unsharedUsage
                    sharedFolders:(NSArray<NSNumber *> *)sharedFolders
                 memberStorageMap:(NSArray<NSArray<DBTEAMStorageBucket *> *> *)memberStorageMap;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetStorageReport` struct.
///
@interface DBTEAMGetStorageReportSerializer : NSObject

///
/// Serializes `DBTEAMGetStorageReport` instances.
///
/// @param instance An instance of the `DBTEAMGetStorageReport` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGetStorageReport` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMGetStorageReport *)instance;

///
/// Deserializes `DBTEAMGetStorageReport` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGetStorageReport` API object.
///
/// @return An instantiation of the `DBTEAMGetStorageReport` object.
///
+ (DBTEAMGetStorageReport *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
