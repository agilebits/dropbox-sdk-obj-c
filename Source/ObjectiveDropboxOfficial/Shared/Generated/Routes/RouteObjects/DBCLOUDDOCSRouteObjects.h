///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

@class DBRoute;

NS_ASSUME_NONNULL_BEGIN

///
/// Stone route objects for the CloudDocs namespace. Each route in the CloudDocs
/// namespace has its own static object, which contains information about the
/// route.
///
@interface DBCLOUDDOCSRouteObjects : NSObject

/// Accessor method for the getContent route object.
+ (DBRoute *)DBCLOUDDOCSGetContent;

/// Accessor method for the getMetadata route object.
+ (DBRoute *)DBCLOUDDOCSGetMetadata;

/// Accessor method for the lock route object.
+ (DBRoute *)DBCLOUDDOCSLock;

/// Accessor method for the rename route object.
+ (DBRoute *)DBCLOUDDOCSRename;

/// Accessor method for the unlock route object.
+ (DBRoute *)DBCLOUDDOCSUnlock;

/// Accessor method for the updateContent route object.
+ (DBRoute *)DBCLOUDDOCSUpdateContent;

@end

NS_ASSUME_NONNULL_END
