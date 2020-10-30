///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBTEAMLegalHoldHeldRevisionMetadata;
@class DBTEAMLegalHoldsListHeldRevisionResult;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `LegalHoldsListHeldRevisionResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLegalHoldsListHeldRevisionResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// List of file entries that under the hold.
@property (nonatomic, readonly) NSArray<DBTEAMLegalHoldHeldRevisionMetadata *> *entries;

/// The cursor idicates where to continue reading file metadata entries for the
/// next API call. When there are no more entries, the cursor will return none.
/// Pass the cursor into /2/team/legal_holds/list_held_revisions/continue.
@property (nonatomic, readonly, copy, nullable) NSString *cursor;

/// True if there are more file entries that haven't been returned. You can
/// retrieve them with a call to /legal_holds/list_held_revisions_continue.
@property (nonatomic, readonly) NSNumber *hasMore;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param entries List of file entries that under the hold.
/// @param hasMore True if there are more file entries that haven't been
/// returned. You can retrieve them with a call to
/// /legal_holds/list_held_revisions_continue.
/// @param cursor The cursor idicates where to continue reading file metadata
/// entries for the next API call. When there are no more entries, the cursor
/// will return none. Pass the cursor into
/// /2/team/legal_holds/list_held_revisions/continue.
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBTEAMLegalHoldHeldRevisionMetadata *> *)entries
                        hasMore:(NSNumber *)hasMore
                         cursor:(nullable NSString *)cursor;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param entries List of file entries that under the hold.
/// @param hasMore True if there are more file entries that haven't been
/// returned. You can retrieve them with a call to
/// /legal_holds/list_held_revisions_continue.
///
/// @return An initialized instance.
///
- (instancetype)initWithEntries:(NSArray<DBTEAMLegalHoldHeldRevisionMetadata *> *)entries hasMore:(NSNumber *)hasMore;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `LegalHoldsListHeldRevisionResult` struct.
///
@interface DBTEAMLegalHoldsListHeldRevisionResultSerializer : NSObject

///
/// Serializes `DBTEAMLegalHoldsListHeldRevisionResult` instances.
///
/// @param instance An instance of the `DBTEAMLegalHoldsListHeldRevisionResult`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsListHeldRevisionResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLegalHoldsListHeldRevisionResult *)instance;

///
/// Deserializes `DBTEAMLegalHoldsListHeldRevisionResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLegalHoldsListHeldRevisionResult` API object.
///
/// @return An instantiation of the `DBTEAMLegalHoldsListHeldRevisionResult`
/// object.
///
+ (DBTEAMLegalHoldsListHeldRevisionResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
