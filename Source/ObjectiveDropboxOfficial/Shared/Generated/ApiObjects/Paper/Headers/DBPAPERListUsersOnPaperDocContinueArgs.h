///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import <ObjectiveDropboxOfficial/DBPAPERRefPaperDoc.h>
#import <ObjectiveDropboxOfficial/DBSerializableProtocol.h>

@class DBPAPERListUsersOnPaperDocContinueArgs;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListUsersOnPaperDocContinueArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPAPERListUsersOnPaperDocContinueArgs : DBPAPERRefPaperDoc <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The cursor obtained from `docsUsersList` or `docsUsersListContinue`. Allows
/// for pagination.
@property (nonatomic, readonly, copy) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param docId The Paper doc ID.
/// @param cursor The cursor obtained from `docsUsersList` or
/// `docsUsersListContinue`. Allows for pagination.
///
/// @return An initialized instance.
///
- (instancetype)initWithDocId:(NSString *)docId cursor:(NSString *)cursor;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListUsersOnPaperDocContinueArgs` struct.
///
@interface DBPAPERListUsersOnPaperDocContinueArgsSerializer : NSObject

///
/// Serializes `DBPAPERListUsersOnPaperDocContinueArgs` instances.
///
/// @param instance An instance of the `DBPAPERListUsersOnPaperDocContinueArgs`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPAPERListUsersOnPaperDocContinueArgs` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBPAPERListUsersOnPaperDocContinueArgs *)instance;

///
/// Deserializes `DBPAPERListUsersOnPaperDocContinueArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPAPERListUsersOnPaperDocContinueArgs` API object.
///
/// @return An instantiation of the `DBPAPERListUsersOnPaperDocContinueArgs`
/// object.
///
+ (DBPAPERListUsersOnPaperDocContinueArgs *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
