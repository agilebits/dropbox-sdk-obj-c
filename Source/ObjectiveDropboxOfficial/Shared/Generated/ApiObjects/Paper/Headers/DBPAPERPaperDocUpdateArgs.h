///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBPAPERRefPaperDoc.h>
#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERImportFormat;
@class DBPAPERPaperDocUpdateArgs;
@class DBPAPERPaperDocUpdatePolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocUpdateArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERPaperDocUpdateArgs : DBPAPERRefPaperDoc <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The policy used for the current update call.
@property (nonatomic, readonly) DBPAPERPaperDocUpdatePolicy *docUpdatePolicy;

/// The latest doc revision. This value must match the head revision or an error
/// code will be returned. This is to prevent colliding writes.
@property (nonatomic, readonly) NSNumber *revision;

/// The format of provided data.
@property (nonatomic, readonly) DBPAPERImportFormat *importFormat;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param docId The Paper doc ID.
/// @param docUpdatePolicy The policy used for the current update call.
/// @param revision The latest doc revision. This value must match the head
/// revision or an error code will be returned. This is to prevent colliding
/// writes.
/// @param importFormat The format of provided data.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocId:(NSString *)docId
              docUpdatePolicy:(DBPAPERPaperDocUpdatePolicy *)docUpdatePolicy
                     revision:(NSNumber *)revision
                 importFormat:(DBPAPERImportFormat *)importFormat;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperDocUpdateArgs` struct.
///
@interface DBPAPERPaperDocUpdateArgsSerializer : NSObject

///
/// Serializes `DBPAPERPaperDocUpdateArgs` instances.
///
/// @param instance An instance of the `DBPAPERPaperDocUpdateArgs` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERPaperDocUpdateArgs` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERPaperDocUpdateArgs *)instance;

///
/// Deserializes `DBPAPERPaperDocUpdateArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERPaperDocUpdateArgs` API object.
///
/// @return An instantiation of the `DBPAPERPaperDocUpdateArgs` object.
///
+ (DBPAPERPaperDocUpdateArgs *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
