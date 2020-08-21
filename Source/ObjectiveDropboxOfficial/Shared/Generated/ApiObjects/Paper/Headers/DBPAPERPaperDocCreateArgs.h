///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERImportFormat;
@class DBPAPERPaperDocCreateArgs;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `PaperDocCreateArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERPaperDocCreateArgs : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The Paper folder ID where the Paper document should be created. The API user
/// has to have write access to this folder or error is thrown.
@property (nonatomic, readonly, copy, nullable) NSString *parentFolderId;

/// The format of provided data.
@property (nonatomic, readonly) DBPAPERImportFormat *importFormat;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param importFormat The format of provided data.
/// @param parentFolderId The Paper folder ID where the Paper document should be
/// created. The API user has to have write access to this folder or error is
/// thrown.
///
/// @return An initialized instance.
///
- (instancetype)initWithImportFormat:(DBPAPERImportFormat *)importFormat
                      parentFolderId:(nullable NSString *)parentFolderId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param importFormat The format of provided data.
///
/// @return An initialized instance.
///
- (instancetype)initWithImportFormat:(DBPAPERImportFormat *)importFormat;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PaperDocCreateArgs` struct.
///
@interface DBPAPERPaperDocCreateArgsSerializer : NSObject

///
/// Serializes `DBPAPERPaperDocCreateArgs` instances.
///
/// @param instance An instance of the `DBPAPERPaperDocCreateArgs` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERPaperDocCreateArgs` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERPaperDocCreateArgs *)instance;

///
/// Deserializes `DBPAPERPaperDocCreateArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERPaperDocCreateArgs` API object.
///
/// @return An instantiation of the `DBPAPERPaperDocCreateArgs` object.
///
+ (DBPAPERPaperDocCreateArgs *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
