///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBFILESFileCategory;
@class DBFILESFileStatus;
@class DBFILESSearchOptions;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SearchOptions` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESSearchOptions : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Scopes the search to a path in the user's Dropbox. Searches the entire
/// Dropbox if not specified.
@property (nonatomic, readonly, copy, nullable) NSString *path;

/// The maximum number of search results to return.
@property (nonatomic, readonly) NSNumber *maxResults;

/// Restricts search to the given file status.
@property (nonatomic, readonly) DBFILESFileStatus *fileStatus;

/// Restricts search to only match on filenames.
@property (nonatomic, readonly) NSNumber *filenameOnly;

/// Restricts search to only the extensions specified. Only supported for active
/// file search.
@property (nonatomic, readonly, nullable) NSArray<NSString *> *fileExtensions;

/// Restricts search to only the file categories specified. Only supported for
/// active file search.
@property (nonatomic, readonly, nullable) NSArray<DBFILESFileCategory *> *fileCategories;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path Scopes the search to a path in the user's Dropbox. Searches the
/// entire Dropbox if not specified.
/// @param maxResults The maximum number of search results to return.
/// @param fileStatus Restricts search to the given file status.
/// @param filenameOnly Restricts search to only match on filenames.
/// @param fileExtensions Restricts search to only the extensions specified.
/// Only supported for active file search.
/// @param fileCategories Restricts search to only the file categories
/// specified. Only supported for active file search.
///
/// @return An initialized instance.
///
- (instancetype)initWithPath:(nullable NSString *)path
                  maxResults:(nullable NSNumber *)maxResults
                  fileStatus:(nullable DBFILESFileStatus *)fileStatus
                filenameOnly:(nullable NSNumber *)filenameOnly
              fileExtensions:(nullable NSArray<NSString *> *)fileExtensions
              fileCategories:(nullable NSArray<DBFILESFileCategory *> *)fileCategories;

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
/// The serialization class for the `SearchOptions` struct.
///
@interface DBFILESSearchOptionsSerializer : NSObject

///
/// Serializes `DBFILESSearchOptions` instances.
///
/// @param instance An instance of the `DBFILESSearchOptions` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESSearchOptions` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESSearchOptions *)instance;

///
/// Deserializes `DBFILESSearchOptions` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESSearchOptions` API object.
///
/// @return An instantiation of the `DBFILESSearchOptions` object.
///
+ (DBFILESSearchOptions *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
